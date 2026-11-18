// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 47

// FFXSystem @ 1480f3010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FFXSystem * __thiscall
FFXSystem::FFXSystem(FFXSystem *this,Type param_1,EShaderPlatform param_2,FGPUSortManager *param_3)

{
  Type TVar1;
  FGPUSortManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->VectorFields = 0;
  *(undefined8 *)&(this->VectorFields).field_0x8 = 0;
  *(undefined8 *)&(this->VectorFields).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FFXSystem__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&(this->VectorFields).field_0x28 = 0;
  *(undefined4 *)&(this->VectorFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorFields).field_0x34 = 0;
  *(undefined8 *)&this->GPUSimulations = 0;
  *(undefined8 *)&(this->GPUSimulations).field_0x8 = 0;
  *(undefined8 *)&(this->GPUSimulations).field_0x20 = 0;
  *(undefined4 *)&(this->GPUSimulations).field_0x28 = 0;
  *(undefined4 *)&(this->GPUSimulations).field_0x2c = 0x80;
  *(undefined4 *)&(this->GPUSimulations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GPUSimulations).field_0x34 = 0;
  this->NumGPUSimulations[0] = 0;
  this->NumGPUSimulations[1] = 0;
  this->NumGPUSimulations[2] = 0;
  this->ParticleSimulationResources = (FParticleSimulationResources *)0x0;
  this->FeatureLevel = param_1;
  (this->GPUSortManager).Reference = (FGPUSortManager *)0x0;
  TVar1 = this->FeatureLevel;
  (this->SimulationsToSort).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationsToSort).ArrayNum = 0;
  (this->SimulationsToSort).ArrayMax = 0;
  (this->LastFrameNewParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastFrameNewParticles).ArrayNum = 0;
  (this->LastFrameNewParticles).ArrayMax = 0;
  (this->AddSortedGPUSimulationMutex).State = (atomic<unsigned_char>)0x0;
  this->PhaseToWaitForResourceTransfer = First;
  this->PhaseToBroadcastResourceTransfer = First;
  this->SceneTexturesUniformParams = (TUniformBufferRef<FSceneTextureUniformParameters>)0x0;
  if (((2 < (int)TVar1) && (param_3 != (FGPUSortManager *)0x0)) &&
     ((this->GPUSortManager).Reference = param_3, param_3 != (FGPUSortManager *)0x0)) {
    *(int *)&param_3->_padding_ = (int)param_3->_padding_ + 1;
  }
  InitGPUSimulation(this);
  this_00 = (this->GPUSortManager).Reference;
  if (this_00 != (FGPUSortManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate__HHW4EGPUSortFlags__PEAVFRHIUnorderedAccessView__2_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FRHICommandListImmediate_&,int,int,enum_EGPUSortFlags,FRHIUnorderedAccessView_*,FRHIUnorderedAccessView_*),FDefaultDelegateUserPolicy,`FFXSystem::FFXSystem'::`8'::<lambda_1>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    FGPUSortManager::Register
              (this_00,(TDelegate<void___cdecl(FRHICommandListImmediate_&,int,int,EGPUSortFlags,FRHIUnorderedAccessView_*,FRHIUnorderedAccessView_*),FDefaultDelegateUserPolicy>
                        *)local_58,
               ValuesAsG16R16F|AnySortLocation|KeyGenAfterPostRenderOpaque|LowPrecisionKeys,&Name);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return this;
}

// ~FFXSystem @ 1480f6640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::~FFXSystem(FFXSystem *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FGPUSortManager *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&___7FFXSystem__6B_;
  if (*(int *)&(this->GPUSimulations).field_0x8 != *(int *)&(this->GPUSimulations).field_0x34) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5128614259105726197>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
                       ,0x10b,"GPUSimulations.Num() == 0");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(int *)&(this->VectorFields).field_0x8 != *(int *)&(this->VectorFields).field_0x34) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5128614259105726196>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
                       ,0x10c,"VectorFields.Num() == 0");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->SceneTexturesUniformParams != (TUniformBufferRef<FSceneTextureUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->SceneTexturesUniformParams);
  }
  pFVar3 = (this->LastFrameNewParticles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FParticleSimulationSortInfo,int>
            ((FParticleSimulationSortInfo *)(this->SimulationsToSort).AllocatorInstance.Data,
             (this->SimulationsToSort).ArrayNum);
  pFVar3 = (this->SimulationsToSort).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->GPUSortManager).Reference;
  if (pFVar4 != (FGPUSortManager *)0x0) {
    plVar5 = &pFVar4->_padding_;
    *(int *)plVar5 = (int)*plVar5 + -1;
    if ((int)*plVar5 == 0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>(&this->GPUSimulations);
  TSparseArray<FVectorFieldInstance_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FVectorFieldInstance_*,FDefaultSparseArrayAllocator>(&this->VectorFields);
  this->_padding_ = (longlong)&___7FFXSystemInterface__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 1480f85e0

void __thiscall
`FFXSystem::OnMarkPendingKill'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FVectorFieldInstance *this_00;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined1 local_res18 [8];
  int local_res20;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  lVar5 = *(longlong *)this;
  local_88 = 0;
  iVar3 = *(int *)(lVar5 + 0x58);
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x40);
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x50);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x50) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar2;
    }
    uVar10 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
    iStack_70 = 0;
    while (uVar10 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1480f86aa;
      uVar10 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uStack_84 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_74 = local_res20 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1480f86aa:
      iStack_74 = iVar3;
    }
  }
  uVar10 = *(uint *)(lVar5 + 0x58);
  local_40 = *(int *)(lVar5 + 0x38) - *(int *)(lVar5 + 100);
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar9 = (int)uVar10 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar12 = uVar10 & 0xffffffe0;
  local_60.Array = pTVar2;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)(lVar5 + 0x58);
  if (uVar10 != uVar4) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x50);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x50) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar12 = uVar12 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1480f8790;
      uVar10 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_1480f8790:
  while( true ) {
    if (*(int *)(lVar5 + 0x38) - *(int *)(lVar5 + 100) != local_40) {
      `TSparseArray<FVectorFieldInstance_*,FDefaultSparseArrayAllocator>::TRangedForIterator::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_60.CurrentBitIndex == uVar10) && (local_60.Array == pTVar2)) break;
    this_00 = *(FVectorFieldInstance **)
               (*(longlong *)(lVar5 + 0x30) + (longlong)local_60.CurrentBitIndex * 8);
    if (this_00 != (FVectorFieldInstance *)0x0) {
      FVectorFieldInstance::~FVectorFieldInstance(this_00);
      ::operator_delete(this_00,0x1e0);
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  lVar5 = *(longlong *)this;
  *(undefined4 *)(lVar5 + 0x38) = 0;
  if (*(int *)(lVar5 + 0x3c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar5 + 0x30),0,(int *)(lVar5 + 0x3c));
  }
  *(undefined4 *)(lVar5 + 0x60) = 0xffffffff;
  *(undefined4 *)(lVar5 + 100) = 0;
  *(undefined4 *)(lVar5 + 0x58) = 0;
  if ((*(int *)(lVar5 + 0x5c) < 0) || (0x80 < *(int *)(lVar5 + 0x5c))) {
    *(undefined4 *)(lVar5 + 0x5c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x40),0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001480f8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)this + 0x10))();
  return;
}

// operator() @ 1480f8be0

/* WARNING: Removing unreachable block (ram,0x0001480f8c24) */

void __thiscall
`FFXSystem::SimulateGPUParticles'::__l2::<lambda_1>::operator()(void *this,FRHITexture *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<FTransferResourceParams> FVar9;
  bool bVar10;
  
  uVar7 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uVar1 = *(uint *)(*(longlong *)this + 0x29c);
  iVar2 = 0;
  bVar10 = uVar7 != 0;
  if (bVar10) {
    for (; (uVar7 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  do {
    if (!bVar10) {
      return;
    }
    uVar6 = 1 << ((byte)iVar2 & 0x1f);
    if ((uVar1 & uVar6) == 0) {
      FVar9 = *(ForElementType<FTransferResourceParams> *)((longlong)this + 8);
      iVar4 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      iVar8 = 0x20;
      if (uVar1 != 0) {
        iVar8 = iVar4;
      }
      iVar4 = *(int *)((ForElementType<FTransferResourceParams> *)((longlong)FVar9 + 0x128))->
                      InlineData;
      if (iVar4 == *(int *)((longlong)FVar9 + 300)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FTransferResourceParams>_>
                          (0x848,(ForElementType<FTransferResourceParams> *)FVar9,
                           (int *)((longlong)FVar9 + 300));
      }
      lVar5 = (longlong)iVar4;
      *(int *)((ForElementType<FTransferResourceParams> *)((longlong)FVar9 + 0x128))->InlineData =
           iVar4 + 1;
      if (*(ForElementType<FTransferResourceParams> *)((longlong)FVar9 + 0x120) !=
          (ForElementType<FTransferResourceParams>)0x0) {
        FVar9 = *(ForElementType<FTransferResourceParams> *)((longlong)FVar9 + 0x120);
      }
      *(FRHITexture **)((longlong)FVar9 + lVar5 * 0x48) = param_1;
      if (param_1 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)param_1);
      }
      *(undefined8 *)((longlong)FVar9 + lVar5 * 0x48 + 8) = 0;
      *(undefined8 *)((longlong)FVar9 + 0x10 + lVar5 * 0x48) = 0;
      *(undefined8 *)((longlong)FVar9 + 0x18 + lVar5 * 0x48) = 0;
      *(undefined8 *)((longlong)FVar9 + 0x20 + lVar5 * 0x48) = 0;
      *(int *)((longlong)FVar9 + 0x28 + lVar5 * 0x48) = iVar8;
      *(int *)((longlong)FVar9 + 0x2c + lVar5 * 0x48) = iVar2;
      *(undefined2 *)((longlong)FVar9 + 0x30 + lVar5 * 0x48) = 0;
      *(undefined8 *)((longlong)FVar9 + 0x38 + lVar5 * 0x48) = 0;
      *(undefined8 *)((longlong)FVar9 + 0x40 + lVar5 * 0x48) = 0;
      if ((param_1 == (FRHITexture *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InTexture",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                              ,0xa4,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar7 = uVar7 & ~uVar6;
    iVar2 = 0;
    bVar10 = uVar7 != 0;
    if (bVar10) {
      for (; (uVar7 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
  } while( true );
}

// operator() @ 1480f9a70

void __thiscall
`FFXSystem::AddGPUSimulation'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo local_18;
  
  if (*(int *)(*(longlong *)((longlong)this + 8) + 800) == -1) {
    lVar4 = *(longlong *)this;
    if (*(int *)(lVar4 + 0x9c) == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,1,(ForAnyElementType *)(lVar4 + 0x68),(int *)(lVar4 + 0x70),
                         (int *)(lVar4 + 0x74));
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x78),false);
    }
    else {
      iVar7 = *(int *)(lVar4 + 0x98);
      iVar1 = *(int *)(lVar4 + 0x9c) + -1;
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x68) + 4 + (longlong)iVar7 * 8);
      *(int *)(lVar4 + 0x98) = iVar3;
      *(int *)(lVar4 + 0x9c) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(*(longlong *)(lVar4 + 0x68) + (longlong)iVar3 * 8) = 0xffffffff;
      }
    }
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)(lVar4 + 0x68),&local_18,iVar7)
    ;
    *(int *)(*(longlong *)((longlong)this + 8) + 800) = local_18.Index;
    *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x68) + (longlong)local_18.Index * 8) =
         *(undefined8 *)((longlong)this + 8);
    piVar2 = (int *)(*(longlong *)this + 0xa0 +
                    (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0x324) * 4);
    *piVar2 = *piVar2 + 1;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)this + 0x68) +
       (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 800) * 8) !=
      *(longlong *)((longlong)this + 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("FXSystem->GPUSimulations[Simulation->SimulationIndex] == Simulation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x11f4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// operator() @ 1480f9d70

void __thiscall
`FFXSystem::RemoveGPUSimulation'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar2 + 800) == -1) {
    *(undefined4 *)(lVar2 + 800) = 0xffffffff;
    return;
  }
  if (*(longlong *)(*(longlong *)(*(longlong *)this + 0x68) + (longlong)*(int *)(lVar2 + 800) * 8)
      != lVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FXSystem->GPUSimulations[Simulation->SimulationIndex] == Simulation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x1203,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)(*(longlong *)this + 0x68),
             *(int *)(*(longlong *)((longlong)this + 8) + 800),1);
  piVar1 = (int *)(*(longlong *)this + 0xa0 +
                  (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0x324) * 4);
  *piVar1 = *piVar1 + -1;
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 800) = 0xffffffff;
  return;
}

// operator() @ 1480f9e20

void __thiscall
`FFXSystem::FFXSystem'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1,int param_2,int param_3,
          EGPUSortFlags param_4,FRHIUnorderedAccessView *param_5,FRHIUnorderedAccessView *param_6)

{
  Type TVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FParticleStateTextures *pFVar5;
  
  lVar2 = *(longlong *)this;
  if ((param_4 & KeyGenAfterPostRenderOpaque) == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(Flags, EGPUSortFlags::KeyGenAfterPostRenderOpaque)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x1225,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_4 & LowPrecisionKeys) != None) {
    TVar1 = *(Type *)(lVar2 + 0xb8);
    pFVar5 = FParticleSimulationResources::GetVisualizeStateTextures
                       (*(FParticleSimulationResources **)(lVar2 + 0xb0));
    GenerateParticleSortKeys
              (param_1,param_5,param_6,(pFVar5->PositionTextureRHI).Reference,
               (TArray<FParticleSimulationSortInfo,TSizedDefaultAllocator<32>_> *)(lVar2 + 200),
               TVar1,param_2);
  }
  return;
}

// operator() @ 1480f9ee0

void __thiscall
`FFXSystem::AddVectorField'::__l16::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  FVectorFieldInstance::UpdateTransforms
            (*(FVectorFieldInstance **)((longlong)this + 8),
             (TMatrix<double> *)((longlong)this + 0x10));
  lVar3 = *(longlong *)this;
  if (*(int *)(lVar3 + 100) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,(ForAnyElementType *)(lVar3 + 0x30),(int *)(lVar3 + 0x38),
                       (int *)(lVar3 + 0x3c));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x40),false);
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x60);
    iVar1 = *(int *)(lVar3 + 100) + -1;
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0x30) + 4 + (longlong)iVar4 * 8);
    *(int *)(lVar3 + 0x60) = iVar2;
    *(int *)(lVar3 + 100) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)(lVar3 + 0x30),&local_18,iVar4);
  *(int *)(*(longlong *)((longlong)this + 8) + 0x1c8) = local_18.Index;
  *(longlong *)
   (*(longlong *)(*(longlong *)this + 0x30) +
   (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0x1c8) * 8) =
       *(longlong *)((longlong)this + 8);
  return;
}

// operator() @ 1480f9fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FFXSystem::PostRenderOpaque'::__l5::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  FRHIBreadcrumbAllocator *pFVar4;
  FRHIBreadcrumbNode *pFVar5;
  FRHIBreadcrumbScope local_28;
  undefined8 local_18;
  wchar_t *pwStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28.Node._0_4_ = 0x234;
      local_28.RHICmdList = (FRHIComputeCommandList *)0x151a17230;
      local_18 = 0;
      pwStack_10 = L"GPUParticles_PostRenderOpaque";
      ::Desc._padding_._0_4_ = 0x51a17230;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x234;
      ::Desc._padding_._4_4_ = local_28.Node._4_4_;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51a17528;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FFXSystem::PostRenderOpaque'::__l5::<lambda_2>::operator()'::__l7::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar4 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar5 = FMemStackBase::Alloc(&pFVar4->Inner,0x50,8);
  pFVar5->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar5->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar5->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar5->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar5->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar5->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar5->Allocator = pFVar4;
  pFVar5->TraceCpuSpecId = 0;
  pFVar5->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar5->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar5->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar5->ID = uVar2;
  pFVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar5[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar1 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar1) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar3 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar3;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar5->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_28,(FRHIComputeCommandList *)param_1,pFVar5);
  local_18 = CONCAT71(local_18._1_7_,1);
  FFXSystem::PrepareGPUSimulation(*(FFXSystem **)this,param_1);
  FFXSystem::SimulateGPUParticles
            (*(FFXSystem **)this,param_1,CollisionDepthBuffer,
             (TUniformBufferRef<FViewUniformShaderParameters> *)((longlong)this + 8),
             (FGlobalDistanceFieldParameterData *)0x0);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_28);
  return;
}

// operator() @ 1480fa1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FFXSystem::PreRender'::__l5::<lambda_2>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  FRHIBreadcrumbAllocator *pFVar6;
  FRHIBreadcrumbNode *pFVar7;
  TUniformBufferRef<FViewUniformShaderParameters> local_res10;
  FRHIBreadcrumbScope local_58;
  undefined1 local_48;
  char *local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  wchar_t *pwStack_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_38 = 0x212;
    local_40 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
    ;
    local_30 = 0;
    pwStack_28 = L"GPUParticles_PreRender";
    ::Desc._padding_._0_4_ = 0x51a17230;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x212;
    ::Desc._padding_._4_4_ = uStack_34;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51a174c8;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FFXSystem::PreRender'::__l5::<lambda_2>::operator()'::__l7::<lambda_1>::operator()<>'
           ::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar6 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar7 = FMemStackBase::Alloc(&pFVar6->Inner,0x50,8);
  pFVar7->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar7->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar7->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar7->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar7->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar7->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar7->Allocator = pFVar6;
  pFVar7->TraceCpuSpecId = 0;
  pFVar7->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar4 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar7->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar7->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar7->ID = uVar4;
  pFVar7->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar7[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar5 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar5;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar7->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,(FRHIComputeCommandList *)param_1,pFVar7);
  local_48 = 1;
  FFXSystem::UpdateMultiGPUResources(*(FFXSystem **)this,param_1);
  FFXSystem::PrepareGPUSimulation(*(FFXSystem **)this,param_1);
  local_res10 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  FFXSystem::SimulateGPUParticles
            (*(FFXSystem **)this,param_1,First,&local_res10,(FGlobalDistanceFieldParameterData *)0x0
            );
  if (local_res10 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)local_res10);
  }
  EVar1 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)(*(longlong *)this + 0xb8)];
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x118,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bSupportsDistanceFields != 0) {
    FFXSystem::PrepareGPUSimulation(*(FFXSystem **)this,param_1);
    FFXSystem::SimulateGPUParticles
              (*(FFXSystem **)this,param_1,CollisionDistanceField,
               (TUniformBufferRef<FViewUniformShaderParameters> *)((longlong)this + 8),
               *(FGlobalDistanceFieldParameterData **)((longlong)this + 0x10));
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
  return;
}

// AddGPUSimulation @ 1480fc620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::AddGPUSimulation(FFXSystem *this,FParticleSimulationGPU *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStackY_c8 [32];
  FLLMScope local_98 [2];
  FMemScope local_90;
  code *local_88 [2];
  undefined **local_78;
  FFXSystem *pFStack_70;
  FParticleSimulationGPU *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FFXSystem *pFStack_40;
  FParticleSimulationGPU *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((char)this->_padding_ == '\0') {
    FLLMScope::FLLMScope(local_98,Particles,false,None,Default,true);
    FMemScope::FMemScope(&local_90,Particles,true);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FFXSystem::AddGPUSimulation'::`5'::<lambda_1>,1,0>::_vftable_
    ;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FFXSystem::AddGPUSimulation'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFXSystem::AddGPUSimulation_::__l5::TSTR_FAddGPUSimulationCommand4586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FFXSystem::AddGPUSimulation'::__l5::TSTR_FAddGPUSimulationCommand4586>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    FMemScope::~FMemScope(&local_90);
    FLLMScope::~FLLMScope(local_98);
  }
  return;
}

// AddSortedGPUSimulation @ 1480fc7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FFXSystem::AddSortedGPUSimulation
          (FFXSystem *this,FRHICommandListBase *param_1,FParticleSimulationGPU *param_2,
          TVector<double> *param_3,bool param_4,FAllocationInfo *param_5)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  double dVar3;
  int iVar4;
  FGPUSortManager *this_01;
  FRHIShaderResourceView *this_02;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FLLMScope local_28 [2];
  FMemScope local_20;
  
  FLLMScope::FLLMScope(local_28,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_20,Particles,true);
  if (((param_4) && (this_01 = (this->GPUSortManager).Reference, this_01 != (FGPUSortManager *)0x0))
     && (bVar6 = FGPUSortManager::AddTask
                           (this_01,param_1,param_5,(param_2->VertexBuffer).ParticleCount,
                            ValuesAsG16R16F|SortAfterPostRenderOpaque|KeyGenAfterPostRenderOpaque|
                            LowPrecisionKeys), bVar6)) {
    this_00 = &this->AddSortedGPUSimulationMutex;
    if ((this_00 == (FMutex *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    LOCK();
    bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar6) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar6) {
      UE::FMutex::LockSlow(this_00);
    }
    iVar8 = (this->SimulationsToSort).ArrayNum;
    piVar1 = &(this->SimulationsToSort).ArrayMax;
    iVar4 = (param_2->VertexBuffer).ParticleCount;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->SimulationsToSort).AllocatorInstance,piVar1);
    }
    (this->SimulationsToSort).ArrayNum = iVar8 + 1;
    pFVar9 = (this->SimulationsToSort).AllocatorInstance.Data + (longlong)iVar8 * 0x40;
    *(FRHIShaderResourceView **)pFVar9 = (param_2->VertexBuffer).VertexBufferSRV.Reference;
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    *(double *)(pFVar9 + 8) = (param_3->field0_0x0)._s_0.X;
    *(double *)(pFVar9 + 0x10) = dVar3;
    dVar3 = (param_3->field0_0x0)._s_0.Z;
    *(int *)(pFVar9 + 0x20) = iVar4;
    *(double *)(pFVar9 + 0x18) = dVar3;
    *(undefined8 *)(pFVar9 + 0x28) = 0;
    this_02 = (param_5->BufferSRV).Reference;
    *(FRHIShaderResourceView **)(pFVar9 + 0x28) = this_02;
    if (this_02 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_02);
    }
    *(uint *)(pFVar9 + 0x30) = param_5->BufferOffset;
    *(int *)(pFVar9 + 0x34) = param_5->SortBatchId;
    *(int *)(pFVar9 + 0x38) = param_5->ElementIndex;
    if (this_00 != (FMutex *)0x0) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_28);
  return bVar6;
}

// AddVectorField @ 1480fc9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FFXSystem::AddVectorField(FFXSystem *this,UVectorFieldComponent *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UVectorField *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  FVectorFieldInstance *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auStack_248 [32];
  FFXSystem *local_228;
  FVectorFieldInstance *pFStack_220;
  code *local_218;
  code *pcStack_210;
  code *local_208;
  code *pcStack_200;
  code *local_1f8;
  code *pcStack_1f0;
  code *local_1e8;
  code *pcStack_1e0;
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  code *local_1b8;
  code *pcStack_1b0;
  code *local_1a8;
  code *pcStack_1a0;
  TMatrix<double> local_198;
  code *local_118 [2];
  code *local_108 [3];
  code **local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 local_d8 [40];
  code **local_b0;
  byte local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_248;
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) && (GRHIGlobals.SupportsTexture3D)) {
    if (param_1->VectorFieldInstance != (FVectorFieldInstance *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("VectorFieldComponent->VectorFieldInstance == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
                          ,0x15d,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (((param_1->VectorField).field0_0x0.DebugPtr != (UVectorField *)0x0) &&
       ((char)this->_padding_ == '\0')) {
      this_00 = ::operator_new(0x1e0);
      if (this_00 == (FVectorFieldInstance *)0x0) {
        pFStack_220 = (FVectorFieldInstance *)0x0;
      }
      else {
        pFStack_220 = FVectorFieldInstance::FVectorFieldInstance(this_00);
      }
      pUVar5 = (param_1->VectorField).field0_0x0.DebugPtr;
      (**(code **)(pUVar5->_padding_ + 0x2b0))(pUVar5,pFStack_220,0);
      param_1->VectorFieldInstance = pFStack_220;
      dVar1 = (double)param_1->_padding_;
      dVar2 = (double)param_1->_padding_;
      dVar3 = (double)param_1->_padding_;
      dVar4 = (double)param_1->_padding_;
      dVar9 = (double)param_1->_padding_ + (double)param_1->_padding_;
      local_e8 = 1;
      dVar16 = dVar1 - dVar3;
      dVar10 = dVar2 + dVar4;
      auVar8._8_4_ = SUB84(dVar16,0);
      auVar8._0_8_ = (double)param_1->_padding_ - (double)param_1->_padding_;
      auVar8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      *(undefined1 (*) [16])&(pFStack_220->WorldBounds).Min.field0_0x0 = auVar8;
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = dVar2 - dVar4;
      auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(pFStack_220->WorldBounds).Min.field0_0x0 + 0x10) = auVar7;
      auVar11._8_4_ = SUB84(dVar10,0);
      auVar11._0_8_ = dVar1 + dVar3;
      auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(pFStack_220->WorldBounds).Max.field0_0x0 + 8) = auVar11;
      (pFStack_220->WorldBounds).IsValid = 1;
      (pFStack_220->WorldBounds).Pad[0] = (char)uStack_e7;
      (pFStack_220->WorldBounds).Pad[1] = (char)((uint7)uStack_e7 >> 8);
      (pFStack_220->WorldBounds).Pad[2] = (char)((uint7)uStack_e7 >> 0x10);
      (pFStack_220->WorldBounds).Pad[3] = (char)((uint7)uStack_e7 >> 0x18);
      (pFStack_220->WorldBounds).Pad[4] = (char)((uint7)uStack_e7 >> 0x20);
      (pFStack_220->WorldBounds).Pad[5] = (char)((uint7)uStack_e7 >> 0x28);
      (pFStack_220->WorldBounds).Pad[6] = (char)((uint7)uStack_e7 >> 0x30);
      pFStack_220->Intensity = param_1->Intensity;
      pFStack_220->Tightness = param_1->Tightness;
      UE::Math::TTransform<double>::ToMatrixWithScale
                ((TTransform<double> *)&param_1->_padding_,&local_198);
      local_218 = (code *)local_198.M[0][0];
      pcStack_210 = (code *)local_198.M[0][1];
      local_208 = (code *)local_198.M[0][2];
      pcStack_200 = (code *)local_198.M[0][3];
      local_1f8 = (code *)local_198.M[1][0];
      pcStack_1f0 = (code *)local_198.M[1][1];
      local_1e8 = (code *)local_198.M[1][2];
      pcStack_1e0 = (code *)local_198.M[1][3];
      local_1d8 = (code *)local_198.M[2][0];
      pcStack_1d0 = (code *)local_198.M[2][1];
      local_1c8 = (code *)local_198.M[2][2];
      pcStack_1c0 = (code *)local_198.M[2][3];
      local_1b8 = (code *)local_198.M[3][0];
      pcStack_1b0 = (code *)local_198.M[3][1];
      local_1a8 = (code *)local_198.M[3][2];
      pcStack_1a0 = (code *)local_198.M[3][3];
      local_118[0] = (code *)0x0;
      local_228 = this;
      local_f0 = FMemory::Malloc(0xa0,0x10);
      local_f0[2] = (code *)local_228;
      local_f0[3] = (code *)pFStack_220;
      *local_f0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FFXSystem::AddVectorField'::`16'::<lambda_1>,1,1>
                           ::_vftable_;
      local_f0[4] = (code *)local_198.M[0][0];
      local_f0[5] = (code *)local_198.M[0][1];
      local_f0[6] = (code *)local_198.M[0][2];
      local_f0[7] = (code *)local_198.M[0][3];
      local_f0[8] = (code *)local_198.M[1][0];
      local_f0[9] = (code *)local_198.M[1][1];
      local_f0[10] = (code *)local_198.M[1][2];
      local_f0[0xb] = (code *)local_198.M[1][3];
      local_f0[0xc] = (code *)local_198.M[2][0];
      local_f0[0xd] = (code *)local_198.M[2][1];
      local_f0[0xe] = (code *)local_198.M[2][2];
      local_f0[0xf] = (code *)local_198.M[2][3];
      local_f0[0x10] = (code *)local_198.M[3][0];
      local_f0[0x11] = (code *)local_198.M[3][1];
      local_f0[0x12] = (code *)local_198.M[3][2];
      local_f0[0x13] = (code *)local_198.M[3][3];
      if (local_f0 != (code **)0xfffffffffffffff0) {
        local_118[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FFXSystem::AddVectorField'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FFXSystem::AddVectorField_::__l16::TSTR_FAddVectorFieldCommand363>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_d8._0_8_ = local_118[0];
        local_b0 = local_f0;
        local_f0 = (code **)0x0;
        local_d8._16_8_ = local_108[0];
        local_d8._24_8_ = local_108[1];
        local_d8._32_8_ = local_108[2];
        local_118[0] = (code *)0x0;
        local_a8 = 2;
        pFVar13 = (FRenderCommandTag *)
                  TRenderCommandTag<`FFXSystem::AddVectorField'::__l16::TSTR_FAddVectorFieldCommand363>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_d8,pFVar13);
        uVar15 = (ulonglong)local_a8;
        if (2 < uVar15) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L"");
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_d8._0_8_ != (code *)0x0) {
            ppcVar14 = (code **)(local_d8 + 0x10);
            if (local_b0 != (code **)0x0) {
              ppcVar14 = local_b0;
            }
            (**(code **)(*ppcVar14 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15])(local_d8);
        }
      }
      if (local_118[0] != (code *)0x0) {
        ppcVar14 = local_118 + 2;
        if (local_f0 != (code **)0x0) {
          ppcVar14 = local_f0;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
  }
  return;
}

// AdvanceGPUParticleFrame @ 1480fced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFXSystem::AdvanceGPUParticleFrame(FFXSystem *this,FRHICommandListImmediate *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FParticleSimulationResources *this_00;
  FParticleSimulationSortInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  this_00 = this->ParticleSimulationResources;
  if ((this_00->TileAllocator).bAllowResizing != false) {
    bVar4 = IsInRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x29f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this_00->TileAllocator).bDirtyAlloc != false) {
      bVar4 = IsInRenderingThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                           ,0x250,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((this_00->TileAllocator).bAllowResizing == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TileAllocator.SupportResizingTiles()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                           ,0x251,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lpCriticalSection = &(this_00->TileAllocator).CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      fVar7 = powf(__real_40000000,(float)(this_00->TileAllocator).ResizeTileAllocCount);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar6 = (int)fVar7 * GParticleSimulationDynTextureSizeXY;
      (this_00->SimulationResourcesSize).field0_0x0._s_0.X = iVar6;
      iVar5 = (int)fVar7 * GParticleSimulationDynTextureSizeXY;
      (this_00->SimulationResourcesSize).field0_0x0._s_0.Y = iVar5;
      FParticleStateTextures::ResizeRHI(this_00->StateTextures,param_1,iVar6,iVar5);
      FParticleStateTextures::ResizeRHI
                (this_00->StateTextures + 1,param_1,
                 (this_00->SimulationResourcesSize).field0_0x0._s_0.X,
                 (this_00->SimulationResourcesSize).field0_0x0._s_0.Y);
      FParticleAttributesTexture::ResizeRHI
                (&this_00->RenderAttributesTexture,param_1,
                 (this_00->SimulationResourcesSize).field0_0x0._s_0.X,
                 (this_00->SimulationResourcesSize).field0_0x0._s_0.Y);
      FParticleAttributesTexture::ResizeRHI
                (&this_00->SimulationAttributesTexture,param_1,
                 (this_00->SimulationResourcesSize).field0_0x0._s_0.X,
                 (this_00->SimulationResourcesSize).field0_0x0._s_0.Y);
      (this_00->TileAllocator).bDirtyAlloc = false;
    }
  }
  if (param_2) {
    piVar1 = &this->ParticleSimulationResources->FrameIndex;
    *piVar1 = *piVar1 ^ 1;
  }
  piVar1 = &(this->SimulationsToSort).ArrayMax;
  pFVar2 = (FParticleSimulationSortInfo *)(this->SimulationsToSort).AllocatorInstance.Data;
  iVar5 = (this->SimulationsToSort).ArrayNum;
  if ((this->SimulationsToSort).ArrayMax < 0) {
    DestructItems<FParticleSimulationSortInfo,int>(pFVar2,iVar5);
    (this->SimulationsToSort).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->SimulationsToSort).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FParticleSimulationSortInfo,int>(pFVar2,iVar5);
    (this->SimulationsToSort).ArrayNum = 0;
  }
  return;
}

// CreateGPUSpriteEmitterInstance @ 148104e40

/* WARNING: Enum "Type": Some values do not have unique names */

FParticleEmitterInstance * __thiscall
FFXSystem::CreateGPUSpriteEmitterInstance
          (FFXSystem *this,IParticleEmitterInstanceOwner *param_1,FGPUSpriteEmitterInfo *param_2)

{
  FGPUSpriteParticleEmitterInstance *pFVar1;
  
  pFVar1 = ::operator_new(0x360);
  if (pFVar1 != (FGPUSpriteParticleEmitterInstance *)0x0) {
    pFVar1 = FGPUSpriteParticleEmitterInstance::FGPUSpriteParticleEmitterInstance
                       (pFVar1,param_1,this,param_2);
    return (FParticleEmitterInstance *)pFVar1;
  }
  return (FParticleEmitterInstance *)0x0;
}

// DestroyGPUSimulation @ 148106df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::DestroyGPUSimulation(FFXSystem *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *pFVar5;
  FCommandList *pFVar6;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStackY_168 [32];
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  code *local_108 [2];
  undefined **local_f8;
  FParticleSimulationResources *pFStack_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  FParticleSimulationResources *pFStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined1 local_a8 [16];
  undefined **local_98;
  FParticleSimulationResources *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  byte local_78;
  code *local_68 [2];
  undefined **local_58;
  FParticleSimulationResources *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (5 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::TIterator::TIterator
            ((TIterator *)&local_138,&this->GPUSimulations);
  if (local_130.CurrentBitIndex < (local_130.Array)->NumBits) {
    do {
      *(undefined4 *)(*(longlong *)(*local_138 + (longlong)local_130.CurrentBitIndex * 8) + 800) =
           0xffffffff;
      local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
    } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
  }
  puVar1 = &(this->GPUSimulations).field_0xc;
  *(undefined4 *)&(this->GPUSimulations).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->GPUSimulations,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GPUSimulations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GPUSimulations).field_0x34 = 0;
  iVar2 = *(int *)&(this->GPUSimulations).field_0x2c;
  *(undefined4 *)&(this->GPUSimulations).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->GPUSimulations).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GPUSimulations).field_0x10,0);
  }
  this->NumGPUSimulations[0] = 0;
  this->NumGPUSimulations[1] = 0;
  this->NumGPUSimulations[2] = 0;
  if (this->ParticleSimulationResources != (FParticleSimulationResources *)0x0) {
    local_e0 = (undefined ***)0x0;
    local_108[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FParticleSimulationResources::Release'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_f8 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__Release_FParticleSimulationResources__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    pFStack_f0 = this->ParticleSimulationResources;
    pFVar5 = FRenderCommandList::GetInstanceTLS();
    if (pFVar5 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FParticleSimulationResources::Release_::__l2::TSTR_FReleaseParticleSimulationResourcesCommand613>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_108);
    }
    else {
      pFVar6 = FRenderCommandList::GetRenderThread(pFVar5);
      local_a8._0_8_ = local_108[0];
      local_80 = local_e0;
      local_98 = local_f8;
      pFStack_90 = pFStack_f0;
      local_88 = local_e8;
      local_108[0] = (code *)0x0;
      local_78 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FParticleSimulationResources::Release'::__l2::TSTR_FReleaseParticleSimulationResourcesCommand613>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar6,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_a8,pFVar7);
      uVar9 = (ulonglong)local_78;
      if ((2 < uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_a8 + 0x10);
          if (local_80 != (undefined ***)0x0) {
            pppuVar8 = local_80;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_a8);
      }
    }
    if (local_108[0] != (code *)0x0) {
      pppuVar8 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar8 = local_e0;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  local_b0 = (undefined ***)0x0;
  local_c8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Destroy_FParticleSimulationResources__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  pFStack_c0 = this->ParticleSimulationResources;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FParticleSimulationResources::Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFVar5 = FRenderCommandList::GetInstanceTLS();
  if (pFVar5 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FParticleSimulationResources::Destroy_::__l2::TSTR_FDestroyParticleSimulationResourcesCommand628>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
  }
  else {
    pFVar6 = FRenderCommandList::GetRenderThread(pFVar5);
    local_68[0] = local_d8[0];
    local_40 = local_b0;
    local_58 = local_c8;
    pFStack_50 = pFStack_c0;
    local_48 = local_b8;
    local_d8[0] = (code *)0x0;
    local_38 = 2;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`FParticleSimulationResources::Destroy'::__l2::TSTR_FDestroyParticleSimulationResourcesCommand628>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar6,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_68,pFVar7);
    uVar9 = (ulonglong)local_38;
    if ((2 < uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_68[0] != (code *)0x0) {
        pppuVar8 = (undefined ***)(local_68 + 2);
        if (local_40 != (undefined ***)0x0) {
          pppuVar8 = local_40;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])
                ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_68);
    }
  }
  if (local_d8[0] != (code *)0x0) {
    pppuVar8 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar8 = local_b0;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  this->ParticleSimulationResources = (FParticleSimulationResources *)0x0;
  return;
}

// DrawDebug @ 148107790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FFXSystem::DrawDebug(FFXSystem *this,FCanvas *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FFXSystem *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FRenderTarget *local_98;
  Type TStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((((0 < FXConsoleVariables::VisualizeGPUSimulation) &&
       (FXConsoleVariables::bAllowGPUParticles != 0)) && (GRHIGlobals.SupportsWideMRT)) &&
     (((ZPULL(GPixelFormats[0x11],0,1) != 0 && (GRHIGlobals.SupportsTexture3D)) &&
      ((char)this->_padding_ == '\0')))) {
    iStack_a0 = FXConsoleVariables::VisualizeGPUSimulation;
    local_98 = param_1->RenderTarget;
    TStack_90 = this->FeatureLevel;
    local_88[0] = (code *)0x0;
    local_a8 = this;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FFXSystem::VisualizeGPUParticles'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_a8;
    local_60[2] = (code *)CONCAT44(uStack_9c,iStack_a0);
    local_60[3] = (code *)local_98;
    local_60[4] = (code *)CONCAT44(uStack_8c,TStack_90);
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FFXSystem::VisualizeGPUParticles'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFXSystem::VisualizeGPUParticles_::__l5::TSTR_FVisualizeGPUParticlesCommand5251>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FFXSystem::VisualizeGPUParticles'::__l5::TSTR_FVisualizeGPUParticlesCommand5251>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// FinalizeGPUSimulation @ 14810a8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::FinalizeGPUSimulation(FFXSystem *this,FRHICommandListImmediate *param_1)

{
  return;
}

// GenerateSortKeys @ 14810dab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFXSystem::GenerateSortKeys
          (FFXSystem *this,FRHICommandListImmediate *param_1,int param_2,int param_3,
          EGPUSortFlags param_4,FRHIUnorderedAccessView *param_5,FRHIUnorderedAccessView *param_6)

{
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  FParticleStateTextures *pFVar4;
  
  if ((param_4 & KeyGenAfterPostRenderOpaque) == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(Flags, EGPUSortFlags::KeyGenAfterPostRenderOpaque)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x1225,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_4 & LowPrecisionKeys) != None) {
    TVar1 = this->FeatureLevel;
    pFVar4 = FParticleSimulationResources::GetVisualizeStateTextures
                       (this->ParticleSimulationResources);
    GenerateParticleSortKeys
              (param_1,param_5,param_6,(pFVar4->PositionTextureRHI).Reference,
               &this->SimulationsToSort,TVar1,param_2);
  }
  return;
}

// GetGPUSortManager @ 148116020

/* WARNING: Enum "Type": Some values do not have unique names */

FGPUSortManager * __thiscall FFXSystem::GetGPUSortManager(FFXSystem *this)

{
  return (this->GPUSortManager).Reference;
}

// GetInterface @ 1481160a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFXSystemInterface * __thiscall FFXSystem::GetInterface(FFXSystem *this,FName *param_1)

{
  FFXSystem *pFVar1;
  
  pFVar1 = (FFXSystem *)0x0;
  if (*param_1 == Name) {
    pFVar1 = this;
  }
  return (FFXSystemInterface *)pFVar1;
}

// InitGPUResources @ 14811f5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FFXSystem::InitGPUResources(FFXSystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) && (GRHIGlobals.SupportsTexture3D)) {
    if (this->ParticleSimulationResources == (FParticleSimulationResources *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParticleSimulationResources",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x11d6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FParticleSimulationResources::Init(this->ParticleSimulationResources);
    return;
  }
  return;
}

// InitGPUSimulation @ 14811f650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::InitGPUSimulation(FFXSystem *this)

{
  code *pcVar1;
  bool bVar2;
  FParticleSimulationResources *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Particles,true);
  if (this->ParticleSimulationResources != (FParticleSimulationResources *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleSimulationResources == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x11b4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((GParticleSimulationTextureSizeX < 1) || (GParticleSimulationTextureSizeY < 1)) ||
     (GParticleSimulationDynTextureSizeXY < 1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2902624535989719477>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0x11b5,
                       "GParticleSimulationTextureSizeX > 0 && GParticleSimulationTextureSizeY > 0 && GParticleSimulationDynTextureSizeXY > 0"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = ::operator_new(0x188);
  if (this_00 == (FParticleSimulationResources *)0x0) {
    this_00 = (FParticleSimulationResources *)0x0;
  }
  else {
    memset(this_00,0,0x188);
    FRenderResource::FRenderResource((FRenderResource *)this_00);
    this_00->StateTextures[0]._padding_ = (longlong)&___7FParticleStateTextures__6B_;
    this_00->StateTextures[0].PositionTextureRHI.Reference = (FRHITexture *)0x0;
    this_00->StateTextures[0].VelocityTextureRHI.Reference = (FRHITexture *)0x0;
    this_00->StateTextures[0].PaticlePositonTextureName = L"FParticleStatePosition";
    this_00->StateTextures[0].PaticleVelocityTextureName = L"FParticleStateVelocity";
    this_00->StateTextures[0].ParticleStateIndex = 0;
    FRenderResource::FRenderResource((FRenderResource *)(this_00->StateTextures + 1));
    this_00->StateTextures[1]._padding_ = (longlong)&___7FParticleStateTextures__6B_;
    this_00->StateTextures[1].PaticlePositonTextureName = L"FParticleStatePosition";
    this_00->StateTextures[1].PaticleVelocityTextureName = L"FParticleStateVelocity";
    this_00->StateTextures[1].PositionTextureRHI.Reference = (FRHITexture *)0x0;
    this_00->StateTextures[1].VelocityTextureRHI.Reference = (FRHITexture *)0x0;
    this_00->StateTextures[1].ParticleStateIndex = 0;
    FRenderResource::FRenderResource((FRenderResource *)&this_00->RenderAttributesTexture);
    (this_00->RenderAttributesTexture)._padding_ = (longlong)&___7FParticleAttributesTexture__6B_;
    (this_00->RenderAttributesTexture).TextureRHI.Reference = (FRHITexture *)0x0;
    (this_00->RenderAttributesTexture).PaticleAttributeTextureName = L"FParticleAttributesTexture";
    (this_00->RenderAttributesTexture).RenderTargetSize.field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    FRenderResource::FRenderResource((FRenderResource *)&this_00->SimulationAttributesTexture);
    (this_00->SimulationAttributesTexture)._padding_ =
         (longlong)&___7FParticleAttributesTexture__6B_;
    (this_00->SimulationAttributesTexture).TextureRHI.Reference = (FRHITexture *)0x0;
    (this_00->SimulationAttributesTexture).PaticleAttributeTextureName =
         L"FParticleAttributesTexture";
    (this_00->SimulationAttributesTexture).RenderTargetSize.field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    this_00->FrameIndex = 0;
    *(undefined8 *)&(this_00->LWCTile).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (this_00->LWCTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (this_00->SimulationResourcesSize).field0_0x0._s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    (this_00->TileAllocator).bDirtyAlloc = false;
    (this_00->TileAllocator).FreeTiles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->TileAllocator).FreeTiles.ArrayNum = 0;
    (this_00->TileAllocator).FreeTiles.ArrayMax = 0;
    this_00->ParticleSimulationTileCountX = 0;
    this_00->ParticleSimulationTileCountY = 0;
    this_00->ParticleSimulationTileCount = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&(this_00->TileAllocator).CriticalSection,4000);
    (this_00->TileAllocator).InitialTileCount = 0;
    (this_00->TileAllocator).bAllowResizing = false;
  }
  this->ParticleSimulationResources = this_00;
  InitGPUResources(this);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnMarkPendingKill @ 148124760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::OnMarkPendingKill(FFXSystem *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FFXSystem *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FFXSystem *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  *(undefined1 *)&this->_padding_ = 1;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FFXSystem::OnMarkPendingKill'::`2'::<lambda_1>,1,0>::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FFXSystem::OnMarkPendingKill'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FFXSystem::OnMarkPendingKill_::__l2::TSTR_FOnMarkPendingKill304>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FFXSystem::OnMarkPendingKill'::__l2::TSTR_FOnMarkPendingKill304>::
             Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
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
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// OnSimulationPhaseChanged @ 148124a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFXSystem::OnSimulationPhaseChanged(FFXSystem *this,FParticleSimulationGPU *param_1,Type param_2)

{
  this->NumGPUSimulations[(int)param_2] = this->NumGPUSimulations[(int)param_2] + -1;
  this->NumGPUSimulations[(int)param_1->SimulationPhase] =
       this->NumGPUSimulations[(int)param_1->SimulationPhase] + 1;
  return;
}

// PostInitViews @ 148126080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFXSystem::PostInitViews
          (FFXSystem *this,FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,
          bool param_3)

{
  return;
}

// PostRenderOpaque @ 148126880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFXSystem::PostRenderOpaque
          (FFXSystem *this,FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,
          FSceneUniformBuffer *param_3,bool param_4)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  TUniformBufferRef<FViewUniformShaderParameters> this_00;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSceneView *pFVar7;
  FRDGScope *pFVar8;
  FRDGEventName *pFVar9;
  void *this_01;
  TRDGEmptyLambdaPass<_public:_virtual_void___cdecl_FFXSystem::PostRenderOpaque(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_5_::<lambda_2>_>
  *pTVar10;
  <lambda_2> local_70;
  TRDGEventScopeGuard<FRDGScope_CSVExclusive> local_60;
  TRDGEventScopeGuard<FRDGScope_RHI> local_50;
  undefined1 local_40;
  FRDGEventName local_38;
  
  if ((((param_4) && (0 < param_2->NumElements)) &&
      (pFVar7 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0),
      pFVar7->bIsPlanarReflection == false)) &&
     ((pFVar7->bIsSceneCapture == false && (pFVar7->bIsReflectionCapture == false)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT != false)) &&
     ((ZPULL(GPixelFormats[0x11],0,1) != 0 &&
      (((GRHIGlobals.SupportsTexture3D != false &&
        (bVar5 = IsFeatureLevelSupported
                           ((FStaticShaderPlatform)
                            GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel],SM5),
        bVar5)) && (bVar4)))))) {
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar4 = false;
    local_40 = 0;
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x22b;
        local_38.FormattedEventName.Data.ArrayNum = 0x54c5e720;
        local_38.FormattedEventName.Data.ArrayMax = 1;
        ::Desc._padding_._0_4_ = 0x54c5e720;
        ::Desc._padding_._4_4_ = local_38.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_FXSystemPostRen;
        ::Desc._padding_ = (longlong)u_FXSystemPostRen;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FFXSystem::PostRenderOpaque'::__l10::Desc::operator()<>'::__l3::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_60.Scope = (FRDGScope *)&::Desc;
      local_50.State = (FRDGScopeState *)param_1;
      pFVar8 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                         ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar8;
      local_50.Scope = pFVar8;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>_>
                (&(pFVar8->Impl).Impl,(FRDGScopeState *)param_1,
                 (tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>
                  *)&local_60);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar4 = true;
      local_40 = 1;
    }
    TRDGEventScopeGuard<FRDGScope_CSVExclusive>::
    TRDGEventScopeGuard<FRDGScope_CSVExclusive><char_const_(&)[9]>
              (&local_60,(FRDGScopeState *)param_1,AlwaysEnable,(char (*) [9])"FXSystem");
    pFVar7 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
    this_00 = pFVar7->ViewUniformBuffer;
    local_70.__this = this;
    local_70.ViewUniformBuffer = this_00;
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    pFVar9 = FRDGEventName::FRDGEventName(&local_38,1,L"FFXSystem::PostRenderOpaque");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar9,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x198,8);
    pTVar10 = TRDGEmptyLambdaPass<`FFXSystem::PostRenderOpaque'::__l5::<lambda_2>_>::
              TRDGEmptyLambdaPass<_FFXSystem::PostRenderOpaque_::__l5::<lambda_2>_>
                        (this_01,pFVar9,NeverCull,&local_70);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar6 = (param_1->Passes).Array.ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar6 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar6] = (FRDGPass *)pTVar10;
    *(int *)&pTVar10->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar10);
    if ((void *)CONCAT44(local_38.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                         local_38.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
        (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_38.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                     local_38.FormattedEventName.Data.AllocatorInstance.Data._0_4_))
      ;
    }
    if (local_70.ViewUniformBuffer != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)local_70.ViewUniformBuffer);
    }
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    pFVar8 = local_60.Scope;
    if ((TRHIBreadcrumbDesc<25> *)local_60.Scope != (TRHIBreadcrumbDesc<25> *)0x0) {
      if (((local_60.State)->ScopeState).bImmediate != false) {
        FRDGScope::EndGPU(local_60.Scope,(FRHIComputeCommandList *)(local_60.State)->RHICmdList);
        FRDGScope::EndCPU(pFVar8,(FRHIComputeCommandList *)(local_60.State)->RHICmdList,false);
      }
      FRDGScope::ImmediateEnd(pFVar8,local_60.State);
      puVar2 = &((local_60.State)->ScopeState).Mask;
      *puVar2 = *puVar2 & 0xfffffff7;
      ((local_60.State)->ScopeState).Current = (((local_60.State)->ScopeState).Current)->Parent;
    }
    if (bVar4) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_50);
    }
  }
  return;
}

// PreInitViews @ 1481274b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFXSystem::PreInitViews
          (FFXSystem *this,FRDGBuilder *param_1,bool param_2,
          TArrayView<FSceneViewFamily_const_*,int> *param_3,FSceneViewFamily *param_4)

{
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) && (GRHIGlobals.SupportsTexture3D)) {
    AdvanceGPUParticleFrame(this,(FRHICommandListImmediate *)param_1->_padding_,param_2);
    return;
  }
  return;
}

// PreRender @ 148127590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFXSystem::PreRender
          (FFXSystem *this,FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,
          FSceneUniformBuffer *param_3,bool param_4)

{
  int *piVar1;
  char cVar2;
  TUniformBufferRef<FViewUniformShaderParameters> this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSceneView *pFVar7;
  FRDGScope *pFVar8;
  IRendererModule *pIVar9;
  FRDGEventName *pFVar10;
  void *this_01;
  TRDGEmptyLambdaPass<_public:_virtual_void___cdecl_FFXSystem::PreRender(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,FSceneUniformBuffer_&,bool)_::_5_::<lambda_2>_>
  *pTVar11;
  ulonglong uVar12;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a0;
  undefined1 local_90;
  <lambda_2> local_88;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_> local_70;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  FRDGEventName local_40;
  
  if ((((param_4) && (0 < param_2->NumElements)) &&
      (pFVar7 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0),
      pFVar7->bIsPlanarReflection == false)) &&
     ((pFVar7->bIsSceneCapture == false && (pFVar7->bIsReflectionCapture == false)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT != false)) &&
     ((ZPULL(GPixelFormats[0x11],0,1) != 0 && ((GRHIGlobals.SupportsTexture3D != false && (bVar4))))
     )) {
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar4 = false;
    local_90 = 0;
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x204;
        local_50 = 0x54c5e6a0;
        uStack_4c = 1;
        ::Desc._padding_._0_4_ = 0x54c5e6a0;
        ::Desc._padding_._4_4_ = uStack_54;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_FXSystemPreRend;
        ::Desc._padding_ = (longlong)u_FXSystemPreRend;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FFXSystem::PreRender'::__l10::Desc::operator()<>'::__l3::<lambda_1>::operator()<>'
               ::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_70._Myfirst._Val = &::Desc;
      local_a0.State = (FRDGScopeState *)param_1;
      pFVar8 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                         ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar8;
      local_a0.Scope = pFVar8;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>_>
                (&(pFVar8->Impl).Impl,(FRDGScopeState *)param_1,&local_70);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar4 = true;
      local_90 = 1;
    }
    pFVar8 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                       ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar8;
    uVar12 = (ulonglong)(pFVar8->Impl).Impl.TypeIndex;
    if ((3 < uVar12) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar12])(&pFVar8->Impl);
    (pFVar8->Impl).Impl._padding_ = (longlong)"FXSystem";
    FCsvProfiler::BeginExclusiveStat("FXSystem",(char *)0x0);
    (pFVar8->Impl).Impl.TypeIndex = '\x03';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_);
    }
    pFVar7 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
    this_00 = pFVar7->ViewUniformBuffer;
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    pIVar9 = GetRendererModule();
    pcVar3 = *(code **)((longlong)*pIVar9 + 0x240);
    pFVar7 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
    local_88.GlobalDistanceFieldParameterData =
         (FGlobalDistanceFieldParameterData *)(*pcVar3)(pIVar9,pFVar7);
    local_88.__this = this;
    local_88.ViewUniformBuffer = this_00;
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    pFVar10 = FRDGEventName::FRDGEventName(&local_40,1,L"FFXSystem::PreRender");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar10,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a0,8);
    pTVar11 = TRDGEmptyLambdaPass<`FFXSystem::PreRender'::__l5::<lambda_2>_>::
              TRDGEmptyLambdaPass<_FFXSystem::PreRender_::__l5::<lambda_2>_>
                        (this_01,pFVar10,NeverCull,&local_88);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar6 = (param_1->Passes).Array.ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar6 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar6] = (FRDGPass *)pTVar11;
    *(int *)&pTVar11->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar11);
    if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_88.ViewUniformBuffer != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)local_88.ViewUniformBuffer);
    }
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    if (pFVar8 != (FRDGScope *)0x0) {
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::EndGPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_);
        FRDGScope::EndCPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_,false);
      }
      FRDGScope::ImmediateEnd(pFVar8,(FRDGScopeState *)param_1);
      *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
      param_1->_padding_ = *(longlong *)param_1->_padding_;
    }
    if (bVar4) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a0);
    }
  }
  return;
}

// PrepareGPUSimulation @ 148127c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FFXSystem::PrepareGPUSimulation(FFXSystem *this,FRHICommandListImmediate *param_1)

{
  FParticleSimulationResources *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FRHITransitionInfo local_68;
  undefined4 local_38;
  undefined2 local_34;
  FRHITexture *local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_10;
  
  pFVar1 = this->ParticleSimulationResources;
  local_68._padding_._0_4_ = 0xffffffff;
  local_68._padding_._4_2_ = 0xffff;
  local_78.ArrayNum = 2;
  local_68.field1_0x8 =
       (FRHITransitionInfo_u_8)
       pFVar1->StateTextures[pFVar1->FrameIndex].PositionTextureRHI.Reference;
  local_30 = pFVar1->StateTextures[pFVar1->FrameIndex].VelocityTextureRHI.Reference;
  local_34 = 0xffff;
  local_68.Type = Texture;
  local_68.AccessBefore = SRVMask;
  local_68.AccessAfter = RTV;
  local_68.Flags = None;
  local_68.CommitInfo.bIsSet = false;
  local_38 = 0xffffffff;
  local_78.DataPtr = &local_68;
  local_28 = 1;
  local_24 = 0x70;
  local_20 = 0x1000;
  local_1c = 0;
  local_10 = 0;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_78,None);
  return;
}

// ReleaseGPUResources @ 148128d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::ReleaseGPUResources(FFXSystem *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FParticleSimulationResources *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FParticleSimulationResources *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = this->ParticleSimulationResources;
  if (pFStack_70 != (FParticleSimulationResources *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FParticleSimulationResources::Release'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__Release_FParticleSimulationResources__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FParticleSimulationResources::Release_::__l2::TSTR_FReleaseParticleSimulationResourcesCommand613>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FParticleSimulationResources::Release'::__l2::TSTR_FReleaseParticleSimulationResourcesCommand613>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// RemoveGPUSimulation @ 148129bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::RemoveGPUSimulation(FFXSystem *this,FParticleSimulationGPU *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FFXSystem *pFStack_70;
  FParticleSimulationGPU *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FFXSystem *pFStack_40;
  FParticleSimulationGPU *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((char)this->_padding_ == '\0') {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FFXSystem::RemoveGPUSimulation'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FFXSystem::RemoveGPUSimulation'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFXSystem::RemoveGPUSimulation_::__l5::TSTR_FRemoveGPUSimulationCommand4606>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FFXSystem::RemoveGPUSimulation'::__l5::TSTR_FRemoveGPUSimulationCommand4606>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// RemoveVectorField @ 148129d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FFXSystem::RemoveVectorField(FFXSystem *this,UVectorFieldComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FFXSystem *pFStack_70;
  FVectorFieldInstance *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FFXSystem *pFStack_40;
  FVectorFieldInstance *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) && (GRHIGlobals.SupportsTexture3D)) {
    local_68 = param_1->VectorFieldInstance;
    param_1->VectorFieldInstance = (FVectorFieldInstance *)0x0;
    if ((local_68 != (FVectorFieldInstance *)0x0) && ((char)this->_padding_ == '\0')) {
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FFXSystem::RemoveVectorField'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FFXSystem::RemoveVectorField'::`9'::<lambda_1>,1,0>::
                  _vftable_;
      pFStack_70 = this;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FFXSystem::RemoveVectorField_::__l9::TSTR_FRemoveVectorFieldCommand387>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar3 = (FRenderCommandTag *)
                 TRenderCommandTag<`FFXSystem::RemoveVectorField'::__l9::TSTR_FRemoveVectorFieldCommand387>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar3);
        uVar5 = (ulonglong)local_28;
        if (2 < uVar5) {
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
                      ::__l2::Destructors)[uVar5] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar4 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar4 = local_30;
            }
            (*(code *)(*pppuVar4)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar4 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar4 = local_60;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
  }
  return;
}

// RequiresEarlyViewUniformBuffer @ 14812a2f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFXSystem::RequiresEarlyViewUniformBuffer(FFXSystem *this)

{
  return false;
}

// RequiresEarlyViewUniformBufferInternal @ 14812a380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFXSystem::RequiresEarlyViewUniformBufferInternal(FFXSystem *this)

{
  return false;
}

// RequiresRayTracingScene @ 14812a390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFXSystem::RequiresRayTracingScene(FFXSystem *this)

{
  return false;
}

// RequiresRayTracingSceneInternal @ 14812a420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFXSystem::RequiresRayTracingSceneInternal(FFXSystem *this)

{
  return false;
}

// SetSceneTexturesUniformBuffer @ 148131030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFXSystem::SetSceneTexturesUniformBuffer
          (FFXSystem *this,TUniformBufferRef<FSceneTextureUniformParameters> *param_1)

{
  TUniformBufferRef<FSceneTextureUniformParameters> this_00;
  TUniformBufferRef<FSceneTextureUniformParameters> this_01;
  
  this_00 = *param_1;
  this_01 = this->SceneTexturesUniformParams;
  if (this_01 != this_00) {
    this->SceneTexturesUniformParams = this_00;
    if (this_00 != (TUniformBufferRef<FSceneTextureUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (TUniformBufferRef<FSceneTextureUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
      return;
    }
  }
  return;
}

// SimulateGPUParticles @ 1481325d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FFXSystem::SimulateGPUParticles
          (FFXSystem *this,FRHICommandListImmediate *param_1,Type param_2,
          TUniformBufferRef<FViewUniformShaderParameters> *param_3,
          FGlobalDistanceFieldParameterData *param_4)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  TUniformBufferRef<FVectorFieldUniformParameters> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNewParticle,TSizedDefaultAllocator<32>_> *pTVar5;
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar6;
  float fVar7;
  float fVar8;
  FRHIGPUMask FVar9;
  Type TVar10;
  FRHITexture *pFVar11;
  FRHITransitionInfo_u_8 FVar12;
  FRHITexture *pFVar13;
  longlong lVar14;
  TUniformBufferRef<FParticleSimulationParameters> *pTVar15;
  FRHIShaderResourceView *pFVar16;
  longlong *plVar17;
  FVectorFieldInstance *pFVar18;
  FVectorFieldResource *pFVar19;
  TUniformBufferRef<FSceneTextureUniformParameters> TVar20;
  FParticleSimulationResources *pFVar21;
  FParticleSimulationResources *pFVar22;
  code *pcVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  TConsoleVariableData<float> *pTVar29;
  bool bVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  atomic<unsigned_int> aVar35;
  TStatId TVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  TUniformBufferRef<FVectorFieldUniformParameters> TVar39;
  FSimulationCommandGPU *pFVar40;
  longlong lVar41;
  TUniformBufferRef<FVectorFieldUniformParameters> TVar42;
  FRHIBreadcrumbAllocator *pFVar43;
  FRHIBreadcrumbNode *pFVar44;
  FTransferResourceParams *pFVar45;
  TUniformBufferRef<FVectorFieldUniformParameters> TVar46;
  TSparseArray<FVectorFieldInstance_*,FDefaultSparseArrayAllocator> *pTVar47;
  FFXSystem *pFVar48;
  FRHITexture *pFVar49;
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator> *pTVar50;
  uint uVar51;
  uint uVar52;
  TUniformBufferRef<FVectorFieldUniformParameters> TVar53;
  FRHICommandListImmediate *pFVar54;
  float fVar55;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStackY_16f8 [32];
  TArray<FSimulationCommandGPU,TSizedDefaultAllocator<32>_> local_16a0;
  FGlobalDistanceFieldParameterData *local_1690;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1688;
  FFXSystem *local_1678;
  TArray<FNewParticle,TSizedDefaultAllocator<32>_> local_1670;
  TUniformBufferRef<FVectorFieldUniformParameters> local_1660;
  FParticleSimulationResources *local_1658;
  FName local_1650;
  FLLMScope local_1648 [2];
  FRHITexture *local_1640;
  FRHICommandListImmediate *local_1638;
  TUniformBufferRef<FViewUniformShaderParameters> *local_1630;
  longlong local_1628;
  FRHITexture *local_1620;
  FRHITexture *local_1618;
  FRHITexture *local_1610;
  FName local_1608;
  byte local_1600;
  FName local_15f8;
  byte local_15f0;
  TUniformBufferRef<FViewUniformShaderParameters> local_15e8;
  FRHICommandListImmediate *local_15e0;
  FTransferResourceParams *local_15d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_15d0;
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator> *local_15b0;
  FRHIResource *local_15a8;
  FMemScope local_15a0;
  undefined1 local_1598 [16];
  undefined1 local_1588 [32];
  undefined1 local_1568 [16];
  undefined1 auStack_1558 [24];
  longlong *local_1540;
  undefined1 local_1538 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_1530;
  float local_1528;
  float local_1524;
  FSourceLocation local_1518;
  FSourceLocation local_14f8;
  float local_14d8;
  undefined2 local_14d4;
  FRHITransitionInfo_u_8 local_14d0;
  EType local_14c8;
  float local_14c4;
  float local_14c0;
  EResourceTransitionFlags local_14bc;
  bool local_14b0;
  float local_14a8;
  undefined2 local_14a4;
  FRHITexture *local_14a0;
  undefined1 local_1498;
  float local_1494;
  float local_1490;
  undefined1 local_148c;
  undefined1 local_1480;
  float local_1478;
  undefined2 local_1474;
  FRHITransitionInfo_u_8 local_1470;
  EType local_1468;
  float local_1464;
  float local_1460;
  EResourceTransitionFlags local_145c;
  bool local_1450;
  float local_1448;
  undefined2 local_1444;
  FRHITexture *local_1440;
  undefined1 local_1438;
  float local_1434;
  float local_1430;
  undefined1 local_142c;
  undefined1 local_1420;
  float local_1418;
  undefined2 local_1414;
  FRHITransitionInfo_u_8 local_1410;
  EType local_1408;
  float local_1404;
  float local_1400;
  EResourceTransitionFlags local_13fc;
  bool local_13f0;
  float local_13e8;
  undefined2 local_13e4;
  FRHITexture *local_13e0;
  undefined1 local_13d8;
  float local_13d4;
  float local_13d0;
  undefined1 local_13cc;
  undefined1 local_13c0;
  float local_13b8;
  undefined2 local_13b4;
  FRHITransitionInfo_u_8 local_13b0;
  EType local_13a8;
  float local_13a4;
  float local_13a0;
  EResourceTransitionFlags local_139c;
  bool local_1390;
  float local_1388;
  undefined2 local_1384;
  FRHITexture *local_1380;
  undefined1 local_1378;
  float local_1374;
  float local_1370;
  undefined1 local_136c;
  undefined1 local_1360;
  TVector4<float>_u_0 local_1358;
  TVector4<float>_u_0 local_1348 [2];
  TVector4<float>_u_0 local_1328;
  TVector4<float>_u_0 local_1318 [2];
  TVector4<float>_u_0 local_12f8;
  TVector4<float>_u_0 local_12e8 [2];
  TVector4<float>_u_0 local_12c8;
  TVector4<float>_u_0 local_12b8 [2];
  TVector4<float>_u_0 local_1298;
  undefined1 local_1288;
  undefined4 local_1284;
  undefined4 local_1280;
  undefined1 local_127c;
  undefined1 local_1270;
  undefined4 local_1268;
  undefined2 local_1264;
  FRHITexture *local_1260;
  undefined1 local_1258;
  undefined4 local_1254;
  undefined4 local_1250;
  undefined1 local_124c;
  undefined1 local_1240;
  FRHITexture *local_1238;
  FRHITexture *local_1230;
  FRHITransitionInfo *local_1228;
  undefined4 uStack_1220;
  undefined4 uStack_121c;
  FTransferResourceParams *local_1218;
  int iStack_1210;
  undefined4 uStack_120c;
  FRHITransitionInfo *local_1208;
  undefined4 uStack_1200;
  undefined4 uStack_11fc;
  FRHITransitionInfo_u_8 local_11f8;
  FRHITexture *local_11f0;
  FRHITransitionInfo *local_11e8;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  FRHITransitionInfo *local_11d8;
  undefined4 uStack_11d0;
  undefined4 uStack_11cc;
  TVector4<float>_u_0 *local_11c8;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  TVector4<float>_u_0 *local_11b8;
  undefined4 uStack_11b0;
  undefined4 uStack_11ac;
  TVector4<float>_u_0 *local_11a8;
  undefined4 uStack_11a0;
  undefined4 uStack_119c;
  char *local_1198;
  undefined4 uStack_1190;
  undefined4 uStack_118c;
  undefined8 local_1188;
  wchar_t *pwStack_1180;
  char *local_1178;
  undefined4 uStack_1170;
  undefined4 uStack_116c;
  undefined8 local_1168;
  wchar_t *pwStack_1160;
  char *local_1158;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  undefined8 local_1148;
  wchar_t *pwStack_1140;
  char *local_1138;
  undefined4 uStack_1130;
  undefined4 uStack_112c;
  TGPUStat<TRHIGPUStatNameProvider_ParticleSimulation> *local_1128;
  wchar_t *pwStack_1120;
  double local_1118;
  double dStack_1110;
  double local_1108;
  double dStack_1100;
  double local_10f8;
  double dStack_10f0;
  undefined8 local_10e8;
  FRHITexture *local_10e0;
  undefined8 local_10d8;
  FRHITransitionInfo_u_8 local_10d0;
  FRHITexture *local_10c8;
  TArrayView<FRHITransitionInfo_const_,int> local_10b8;
  TArrayView<FRHITransitionInfo_const_,int> local_10a8;
  TArrayView<FRHITransitionInfo_const_,int> local_1098;
  TArrayView<FRHITransitionInfo_const_,int> local_1088;
  TArrayView<FRHITransitionInfo_const_,int> local_1078;
  TArrayView<FRHITransitionInfo_const_,int> local_1068;
  TArrayView<FTransferResourceParams_const_,int> local_1058 [2];
  FRHIBreadcrumbScope local_1038;
  undefined1 local_1028;
  FRHIBreadcrumbScope local_1020;
  undefined1 local_1010;
  FRHIBreadcrumbScope local_1008;
  undefined1 local_ff8;
  FRHIBreadcrumbScope local_ff0;
  undefined1 local_fe0;
  TArrayView<FRHITransitionInfo_const_,int> local_fc8;
  FVectorFieldUniformParameters local_fb8;
  FGraphicsPipelineStateInitializer local_ca8;
  FGraphicsPipelineStateInitializer local_bc8;
  FGraphicsPipelineStateInitializer local_ae8;
  FVectorFieldUniformParameters local_a08;
  FTransferResourceParams local_6f8 [4];
  FTransferResourceParams *local_5d8;
  int local_5d0;
  undefined4 local_5cc;
  FRHIRenderPassInfo local_5c8;
  FRHIRenderPassInfo local_4c8;
  FRHIRenderPassInfo local_3c8;
  FRHIRenderPassInfo local_2c8;
  FRHIRenderPassInfo local_1c8;
  ulonglong local_c8;
  undefined8 uStack_40;
  
  uStack_40 = 0x1481325f2;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_16f8;
  local_1690 = param_4;
  local_1678 = this;
  local_1638 = param_1;
  local_1630 = param_3;
  FLLMScope::FLLMScope(local_1648,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_15a0,Particles,true);
  bVar30 = IsInRenderingThread();
  if ((!bVar30) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0x12b0,L""), bVar30)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  TVar36 = FThreadSafeStaticStatInner<FStat_STAT_GPUParticleTickTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_GPUParticleTickTime,1> *)
                      &StatPtr_STAT_GPUParticleTickTime);
  local_1518.Impl._Line = 0x12b1;
  local_1518.Impl._Function =
       "void __cdecl FFXSystem::SimulateGPUParticles(class FRHICommandListImmediate &,enum EParticleSimulatePhase::Type,const class TUniformBufferRef<class FViewUniformShaderParameters> &,const class FGlobalDistanceFieldParameterData *)"
  ;
  local_1518.Impl._Column = 2;
  local_1518.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_1608,*(TStatIdData **)&(TVar36.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1518);
  pTVar29 = CVarGPUParticleFixDeltaSeconds.Ref;
  bVar30 = IsInParallelRenderingThread();
  if ((!bVar30) &&
     (bVar30 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar30)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  local_1658 = this->ParticleSimulationResources;
  fVar6 = pTVar29->ShadowedValue[1];
  uVar37 = (ulonglong)local_1658->FrameIndex;
  uVar38 = uVar37 ^ 1;
  local_1628 = uVar37 * 0x50;
  pFVar49 = local_1658->StateTextures[uVar37].PositionTextureRHI.Reference;
  pFVar11 = local_1658->StateTextures[uVar37].VelocityTextureRHI.Reference;
  FVar12 = (FRHITransitionInfo_u_8)local_1658->StateTextures[uVar38].PositionTextureRHI.Reference;
  pFVar13 = local_1658->StateTextures[uVar38].VelocityTextureRHI.Reference;
  local_5d8 = (FTransferResourceParams *)0x0;
  local_5d0 = 0;
  bVar30 = 1 < GNumExplicitGPUsForRendering;
  local_15d8 = local_6f8;
  local_5cc = 4;
  local_1640 = pFVar49;
  local_1620 = pFVar11;
  local_1618 = pFVar49;
  local_1610 = pFVar11;
  local_15e0 = param_1;
  local_11f8 = FVar12;
  local_11f0 = pFVar13;
  if (1 < GNumExplicitGPUsForRendering) {
    `FFXSystem::SimulateGPUParticles'::__l2::<lambda_1>::operator()(&local_15e0,pFVar49);
    `FFXSystem::SimulateGPUParticles'::__l2::<lambda_1>::operator()(&local_15e0,pFVar11);
  }
  if ((&local_1658->StateTextures[0].bTexturesCleared)[local_1628] == false) {
    FVar9.GPUMask = *(uint *)&param_1->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)param_1,
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_5c8,2,&local_1618,Clear_Store);
    FRHICommandList::BeginRenderPass
              ((FRHICommandList *)param_1,&local_5c8,L"GPUParticlesClearStateTextures");
    FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
    (&local_1658->StateTextures[0].bTexturesCleared)[local_1628] = true;
    if (local_5c8.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_5c8.ShadingRateTexture.Reference);
    }
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar9);
  }
  if (local_1658->StateTextures[uVar38].bTexturesCleared == false) {
    FVar9.GPUMask = *(uint *)&param_1->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)param_1,
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    uStack_1200 = 2;
    local_14d4 = 0xffff;
    local_14a4 = 0xffff;
    local_1208 = (FRHITransitionInfo *)&local_14d8;
    local_14d8 = -NAN;
    local_fc8._12_4_ = uStack_11fc;
    local_fc8.ArrayNum = 2;
    local_14c8 = Texture;
    local_14c4 = 1.56945e-43;
    local_14c0 = 5.73972e-42;
    local_14bc = None;
    local_14b0 = false;
    local_14a8 = -NAN;
    local_1498 = 1;
    local_1494 = 1.56945e-43;
    local_1490 = 5.73972e-42;
    local_148c = 0;
    local_1480 = 0;
    local_14d0 = FVar12;
    local_14a0 = pFVar13;
    local_fc8.DataPtr = local_1208;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_fc8,None);
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_4c8,2,&local_11f8.Texture,Clear_Store);
    FRHICommandList::BeginRenderPass
              ((FRHICommandList *)param_1,&local_4c8,L"GPUParticlesClearPreviousStateTextures");
    FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
    uStack_11e0 = 2;
    local_1414 = 0xffff;
    local_13e4 = 0xffff;
    local_11e8 = (FRHITransitionInfo *)&local_1418;
    local_1418 = -NAN;
    local_10b8._12_4_ = uStack_11dc;
    local_10b8.ArrayNum = 2;
    local_1408 = Texture;
    local_1404 = 5.73972e-42;
    local_1400 = 1.56945e-43;
    local_13fc = None;
    local_13f0 = false;
    local_13e8 = -NAN;
    local_13d8 = 1;
    local_13d4 = 5.73972e-42;
    local_13d0 = 1.56945e-43;
    local_13cc = 0;
    local_13c0 = 0;
    local_1410 = FVar12;
    local_13e0 = pFVar13;
    local_10b8.DataPtr = local_11e8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_10b8,None);
    local_1658->StateTextures[uVar38].bTexturesCleared = true;
    if (local_4c8.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_4c8.ShadingRateTexture.Reference);
    }
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar9);
  }
  uVar28 = _UNK_150689648;
  uVar27 = ___xmm_3f800000000000000000000000000000;
  pTVar50 = &this->GPUSimulations;
  TVar46 = (TUniformBufferRef<FVectorFieldUniformParameters>)0x0;
  uVar34 = 0;
  local_1660 = (TUniformBufferRef<FVectorFieldUniformParameters>)0x0;
  TVar42 = TVar46;
  local_15b0 = pTVar50;
  if (0 < *(int *)&(this->GPUSimulations).field_0x8 - *(int *)&(this->GPUSimulations).field_0x34) {
    FVectorFieldUniformParameters::FVectorFieldUniformParameters(&local_a08);
    local_a08.WorldToVolume.Elements[0].M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
    local_a08.WorldToVolume.Elements[0].M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
    local_a08.WorldToVolume.Elements[0].M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
    local_a08.WorldToVolume.Elements[0].M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
    local_a08.WorldToVolume.Elements[0].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.WorldToVolume.Elements[0].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.WorldToVolume.Elements[0].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.WorldToVolume.Elements[0].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.WorldToVolume.Elements[0].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.WorldToVolume.Elements[0].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.WorldToVolume.Elements[0].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.WorldToVolume.Elements[0].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.WorldToVolume.Elements[0].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.WorldToVolume.Elements[0].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.WorldToVolume.Elements[0].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.WorldToVolume.Elements[0].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeToWorld.Elements[0].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.VolumeToWorld.Elements[0].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.VolumeToWorld.Elements[0].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.VolumeToWorld.Elements[0].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.VolumeToWorld.Elements[0].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.VolumeToWorld.Elements[0].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.VolumeToWorld.Elements[0].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.VolumeToWorld.Elements[0].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.VolumeToWorld.Elements[0].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.VolumeToWorld.Elements[0].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.VolumeToWorld.Elements[0].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.VolumeToWorld.Elements[0].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeSize.Elements[0].field0_0x0._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_a08.VolumeSize.Elements[0].field0_0x0._8_8_ = _UNK_15076b188;
    local_a08.IntensityAndTightness.Elements[0].field0_0x0._0_8_ = uVar27;
    local_a08.IntensityAndTightness.Elements[0].field0_0x0._8_8_ = uVar28;
    local_a08.WorldToVolume.Elements[1].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.WorldToVolume.Elements[1].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.WorldToVolume.Elements[1].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.WorldToVolume.Elements[1].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.WorldToVolume.Elements[1].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.WorldToVolume.Elements[1].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.WorldToVolume.Elements[1].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.WorldToVolume.Elements[1].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.WorldToVolume.Elements[1].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.WorldToVolume.Elements[1].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.WorldToVolume.Elements[1].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.WorldToVolume.Elements[1].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeToWorld.Elements[1].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.VolumeToWorld.Elements[1].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.VolumeToWorld.Elements[1].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.VolumeToWorld.Elements[1].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.VolumeToWorld.Elements[1].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.VolumeToWorld.Elements[1].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.VolumeToWorld.Elements[1].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.VolumeToWorld.Elements[1].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.VolumeToWorld.Elements[1].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.VolumeToWorld.Elements[1].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.VolumeToWorld.Elements[1].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.VolumeToWorld.Elements[1].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeSize.Elements[1].field0_0x0._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_a08.VolumeSize.Elements[1].field0_0x0._8_8_ = _UNK_15076b188;
    local_a08.IntensityAndTightness.Elements[1].field0_0x0._0_8_ = uVar27;
    local_a08.IntensityAndTightness.Elements[1].field0_0x0._8_8_ = uVar28;
    local_a08.WorldToVolume.Elements[2].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.WorldToVolume.Elements[2].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.WorldToVolume.Elements[2].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.WorldToVolume.Elements[2].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.WorldToVolume.Elements[2].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.WorldToVolume.Elements[2].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.WorldToVolume.Elements[2].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.WorldToVolume.Elements[2].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.WorldToVolume.Elements[2].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.WorldToVolume.Elements[2].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.WorldToVolume.Elements[2].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.WorldToVolume.Elements[2].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeToWorld.Elements[2].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.VolumeToWorld.Elements[2].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.VolumeToWorld.Elements[2].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.VolumeToWorld.Elements[2].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.VolumeToWorld.Elements[2].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.VolumeToWorld.Elements[2].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.VolumeToWorld.Elements[2].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.VolumeToWorld.Elements[2].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.VolumeToWorld.Elements[2].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.VolumeToWorld.Elements[2].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.VolumeToWorld.Elements[2].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.VolumeToWorld.Elements[2].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeSize.Elements[2].field0_0x0._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_a08.VolumeSize.Elements[2].field0_0x0._8_8_ = _UNK_15076b188;
    local_a08.IntensityAndTightness.Elements[2].field0_0x0._0_8_ = uVar27;
    local_a08.IntensityAndTightness.Elements[2].field0_0x0._8_8_ = uVar28;
    local_a08.WorldToVolume.Elements[3].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.WorldToVolume.Elements[3].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.WorldToVolume.Elements[3].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.WorldToVolume.Elements[3].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.WorldToVolume.Elements[3].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.WorldToVolume.Elements[3].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.WorldToVolume.Elements[3].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.WorldToVolume.Elements[3].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.WorldToVolume.Elements[3].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.WorldToVolume.Elements[3].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.WorldToVolume.Elements[3].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.WorldToVolume.Elements[3].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeToWorld.Elements[3].M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_a08.VolumeToWorld.Elements[3].M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_a08.VolumeToWorld.Elements[3].M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_a08.VolumeToWorld.Elements[3].M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_a08.VolumeToWorld.Elements[3].M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_a08.VolumeToWorld.Elements[3].M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_a08.VolumeToWorld.Elements[3].M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_a08.VolumeToWorld.Elements[3].M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_a08.VolumeToWorld.Elements[3].M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_a08.VolumeToWorld.Elements[3].M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_a08.VolumeToWorld.Elements[3].M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_a08.VolumeToWorld.Elements[3].M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_a08.VolumeSize.Elements[3].field0_0x0._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_a08.VolumeSize.Elements[3].field0_0x0._8_8_ = _UNK_15076b188;
    local_a08.IntensityAndTightness.Elements[3].field0_0x0._0_8_ = uVar27;
    local_a08.IntensityAndTightness.Elements[3].field0_0x0._8_8_ = uVar28;
    local_a08.Count = 0;
    local_a08.WorldToVolume.Elements[1].M[3] = local_a08.WorldToVolume.Elements[0].M[3];
    local_a08.WorldToVolume.Elements[2].M[3] = local_a08.WorldToVolume.Elements[0].M[3];
    local_a08.WorldToVolume.Elements[3].M[3] = local_a08.WorldToVolume.Elements[0].M[3];
    local_a08.VolumeToWorld.Elements[0].M[3] = local_a08.WorldToVolume.Elements[0].M[3];
    local_a08.VolumeToWorld.Elements[1].M[3] = local_a08.WorldToVolume.Elements[0].M[3];
    local_a08.VolumeToWorld.Elements[2].M[3] = local_a08.WorldToVolume.Elements[0].M[3];
    local_a08.VolumeToWorld.Elements[3].M[3] = local_a08.WorldToVolume.Elements[0].M[3];
    TVar39 = TUniformBufferRef<FVectorFieldUniformParameters>::CreateUniformBufferImmediate
                       ((FVectorFieldUniformParameters *)local_1598,(EUniformBufferUsage)&local_a08,
                        ValidateResources);
    if ((TUniformBufferRef<FVectorFieldUniformParameters>)&local_1660 != TVar39) {
      TVar42 = *(TUniformBufferRef<FVectorFieldUniformParameters> *)TVar39;
      *(undefined8 *)TVar39 = 0;
      local_1660 = TVar42;
    }
    if ((FRHIResource *)local_1598._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1598._0_8_);
    }
  }
  local_16a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_16a0.ArrayNum = 0;
  local_16a0.ArrayMax = 0;
  local_1688.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1688.ArrayMax = 0;
  local_1670.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar52 = 0;
  local_1670.ArrayMax = 0;
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::TIterator::TIterator
            ((TIterator *)(local_1598 + 8),pTVar50);
  TVar39 = TVar46;
  TVar53 = TVar46;
  uVar51 = uVar34;
  if ((int)local_1588._20_4_ < *(int *)(local_1588._8_8_ + 0x18)) {
    do {
      lVar14 = *(longlong *)(*(longlong *)local_1598._8_8_ + (longlong)(int)local_1588._20_4_ * 8);
      if ((lVar14 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Simulation",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                              ,0x131d,L""), bVar31)) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      if (((*(Type *)(lVar14 + 0x324) == param_2) && (0 < *(int *)(lVar14 + 0x38))) &&
         (*(char *)(lVar14 + 0x333) != '\0')) {
        TVar39._0_4_ = TVar39._0_4_ + *(int *)(lVar14 + 0xf0);
        TVar39._4_4_ = 0;
        TVar46._0_4_ = TVar46._0_4_ + 1;
        TVar46._4_4_ = 0;
        TVar53._0_4_ = TVar53._0_4_ + *(int *)(lVar14 + 0xe0);
        TVar53._4_4_ = 0;
      }
      uVar52 = TVar53._0_4_;
      uVar51 = TVar39._0_4_;
      uVar34 = TVar46._0_4_;
      local_1588._16_4_ = local_1588._16_4_ & ~local_1588._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1588);
    } while ((int)local_1588._20_4_ < *(int *)(local_1588._8_8_ + 0x18));
    if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulong64)TVar46);
    }
    local_1620 = local_1610;
    local_1640 = local_1618;
    TVar42 = local_1660;
    pFVar49 = local_1618;
    pTVar50 = local_15b0;
  }
  DestructItems<FSimulationCommandGPU,int>
            ((FSimulationCommandGPU *)local_16a0.AllocatorInstance.Data,local_16a0.ArrayNum);
  if (local_16a0.ArrayMax != uVar34) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,uVar34,&local_16a0.AllocatorInstance,0,&local_16a0.ArrayMax);
  }
  if ((int)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar51);
  }
  local_1688.ArrayNum = 0;
  if (local_1688.ArrayMax != uVar51) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar51,&local_1688.AllocatorInstance,0,&local_1688.ArrayMax);
  }
  if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
  }
  local_1670.ArrayNum = 0;
  if (local_1670.ArrayMax != uVar52) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,uVar52,&local_1670.AllocatorInstance,0,&local_1670.ArrayMax);
  }
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::TIterator::TIterator
            ((TIterator *)&local_1540,pTVar50);
  pFVar54 = local_1638;
  fVar55 = __real_bf800000;
  uVar34 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar26 = __real_3f800000;
  if ((int)local_1524 < local_1530->NumBits) {
    uStack_40 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
    do {
      lVar14 = *(longlong *)(*local_1540 + (longlong)(int)local_1524 * 8);
      if ((lVar14 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Simulation",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                              ,0x132f,L""), bVar31)) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      if (((*(Type *)(lVar14 + 0x324) == param_2) && (0 < *(int *)(lVar14 + 0x38))) &&
         (*(char *)(lVar14 + 0x333) != '\0')) {
        pTVar15 = *(TUniformBufferRef<FParticleSimulationParameters> **)(lVar14 + 0x48);
        pFVar16 = *(FRHIShaderResourceView **)(lVar14 + 0x30);
        iVar32 = local_16a0.ArrayNum;
        if (local_16a0.ArrayNum == local_16a0.ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10a0,&local_16a0.AllocatorInstance,&local_16a0.ArrayMax);
        }
        local_16a0.ArrayNum = iVar32 + 1;
        pFVar40 = FSimulationCommandGPU::FSimulationCommandGPU
                            ((FSimulationCommandGPU *)
                             (local_16a0.AllocatorInstance.Data + (longlong)iVar32 * 0xa0),pFVar16,
                             *(FRHIBuffer **)(lVar14 + 0x28),pTVar15,
                             (FParticlePerFrameSimulationParameters *)(lVar14 + 0x50),&local_1660,
                             *(int *)(lVar14 + 0x38));
        local_1118 = *(double *)(lVar14 + 0xa0);
        dStack_1110 = *(double *)(lVar14 + 0xa8);
        plVar17 = *(longlong **)(lVar14 + 0x100);
        local_fb8.WorldToVolumeTile.Elements[0].field0_0x0._0_8_ = uVar27;
        local_fb8.WorldToVolumeTile.Elements[0].field0_0x0._8_8_ = uVar28;
        local_fb8.WorldToVolumeTile.Elements[1].field0_0x0._0_8_ = uVar27;
        local_fb8.WorldToVolumeTile.Elements[1].field0_0x0._8_8_ = uVar28;
        local_fb8.WorldToVolumeTile.Elements[2].field0_0x0._0_8_ = uVar27;
        local_fb8.WorldToVolumeTile.Elements[2].field0_0x0._8_8_ = uVar28;
        local_fb8.WorldToVolumeTile.Elements[3].field0_0x0._0_8_ = uVar27;
        local_fb8.WorldToVolumeTile.Elements[3].field0_0x0._8_8_ = uVar28;
        local_fb8.IntensityAndTightness.Elements[0].field0_0x0._0_8_ = uVar27;
        local_fb8.IntensityAndTightness.Elements[0].field0_0x0._8_8_ = uVar28;
        local_fb8.IntensityAndTightness.Elements[1].field0_0x0._0_8_ = uVar27;
        local_fb8.IntensityAndTightness.Elements[1].field0_0x0._8_8_ = uVar28;
        local_fb8.IntensityAndTightness.Elements[2].field0_0x0._0_8_ = uVar27;
        local_fb8.IntensityAndTightness.Elements[2].field0_0x0._8_8_ = uVar28;
        local_fb8.IntensityAndTightness.Elements[3].field0_0x0._0_8_ = uVar27;
        local_fb8.IntensityAndTightness.Elements[3].field0_0x0._8_8_ = uVar28;
        local_fb8.VolumeSize.Elements[0].field0_0x0._0_8_ = uVar27;
        local_fb8.VolumeSize.Elements[0].field0_0x0._8_8_ = uVar28;
        local_fb8.VolumeSize.Elements[1].field0_0x0._0_8_ = uVar27;
        local_fb8.VolumeSize.Elements[1].field0_0x0._8_8_ = uVar28;
        local_fb8.VolumeSize.Elements[2].field0_0x0._0_8_ = uVar27;
        local_fb8.VolumeSize.Elements[2].field0_0x0._8_8_ = uVar28;
        local_fb8.VolumeSize.Elements[3].field0_0x0._0_8_ = uVar27;
        local_fb8.VolumeSize.Elements[3].field0_0x0._8_8_ = uVar28;
        local_fb8.TilingAxes.Elements[0].field0_0x0._0_8_ = uVar27;
        local_fb8.TilingAxes.Elements[0].field0_0x0._8_8_ = uVar28;
        local_fb8.TilingAxes.Elements[1].field0_0x0._0_8_ = uVar27;
        local_fb8.TilingAxes.Elements[1].field0_0x0._8_8_ = uVar28;
        local_fb8.TilingAxes.Elements[2].field0_0x0._0_8_ = uVar27;
        local_fb8.TilingAxes.Elements[2].field0_0x0._8_8_ = uVar28;
        local_fb8.TilingAxes.Elements[3].field0_0x0._0_8_ = uVar27;
        local_fb8.TilingAxes.Elements[3].field0_0x0._8_8_ = uVar28;
        local_fb8.Count = 0;
        local_1108 = *(double *)(lVar14 + 0xb0);
        dStack_1100 = *(double *)(lVar14 + 0xb8);
        local_10f8 = *(double *)(lVar14 + 0xc0);
        dStack_10f0 = *(double *)(lVar14 + 200);
        local_10e8 = *(undefined8 *)(lVar14 + 0xd0);
        if ((plVar17 != (longlong *)0x0) &&
           (0.0 < (float)((uint)(*(float *)(lVar14 + 0x2c4) * *(float *)((longlong)plVar17 + 0x34))
                         & uVar34))) {
          (**(code **)(*plVar17 + 0x30))(plVar17,pFVar54,*(undefined4 *)(lVar14 + 0x88));
          iVar32 = local_fb8.Count;
          pFVar40->VectorFieldTexturesRHI[0] =
               *(FRHITexture **)(*(longlong *)(lVar14 + 0x100) + 0x20);
          local_fb8.Count = local_fb8.Count + 1;
          SetParametersForVectorField
                    (&local_fb8,(FVectorFieldInstance *)(lVar14 + 0x100),fVar26,fVar55,iVar32);
        }
        fVar7 = *(float *)(*(longlong *)(lVar14 + 0x48) + 8);
        fVar8 = *(float *)(*(longlong *)(lVar14 + 0x48) + 0xc);
        if (0.0 < (float)((uint)fVar7 & uVar34)) {
          pTVar47 = &local_1678->VectorFields;
          local_15d0._padding_._0_4_ = 0;
          local_15d0._padding_._4_4_ = 1;
          local_15d0.UnvisitedBitMask = 0xffffffff;
          local_15d0.CurrentBitIndex = 0;
          local_15d0.BaseBitIndex = 0;
          local_15d0.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(local_1678->VectorFields).field_0x10;
          if (*(int *)&(local_1678->VectorFields).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_15d0);
          }
          auVar25._4_4_ = local_15d0.CurrentBitIndex;
          auVar25._8_4_ = local_15d0.BaseBitIndex;
          auVar25._0_4_ = local_15d0.UnvisitedBitMask;
          auStack_1558._20_4_ = local_15d0._28_4_;
          auStack_1558._8_12_ = auVar25;
          local_1568._8_8_ = CONCAT44(local_15d0._padding_._4_4_,(undefined4)local_15d0._padding_);
          uVar37 = auVar25._0_8_ >> 0x20;
          auStack_1558._0_8_ = local_15d0.Array;
          local_1568._0_8_ = pTVar47;
          if (local_15d0.CurrentBitIndex < (local_15d0.Array)->NumBits) {
            do {
              if (3 < local_fb8.Count) break;
              pFVar18 = *(FVectorFieldInstance **)
                         (*(longlong *)local_1568._0_8_ + (longlong)(int)uVar37 * 8);
              if (((pFVar18 == (FVectorFieldInstance *)0x0) ||
                  ((pFVar18->Resource).Reference == (FVectorFieldResource *)0x0)) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Instance && Instance->Resource",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                                      ,0x1359,L""), bVar31)) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              iVar32 = local_fb8.Count;
              pFVar19 = (pFVar18->Resource).Reference;
              pTVar1 = &(pFVar18->WorldBounds).Max;
              if (((local_1118 < (pTVar1->field0_0x0)._s_0.X ||
                    local_1118 == (pTVar1->field0_0x0)._s_0.X) &&
                  ((pFVar18->WorldBounds).Min.field0_0x0._s_0.X <= dStack_1100)) &&
                 ((((pdVar2 = &(pFVar18->WorldBounds).Max.field0_0x0._s_0.Y,
                    dStack_1110 < *pdVar2 || dStack_1110 == *pdVar2 &&
                    (((pFVar18->WorldBounds).Min.field0_0x0._s_0.Y <= local_10f8 &&
                     (pdVar2 = &(pFVar18->WorldBounds).Max.field0_0x0._s_0.Z,
                     local_1108 < *pdVar2 || local_1108 == *pdVar2)))) &&
                   ((pFVar18->WorldBounds).Min.field0_0x0._s_0.Z <= dStack_10f0)) &&
                  (0.0 < (float)((uint)(pFVar19->Intensity * pFVar18->Intensity) & uVar34))))) {
                pFVar40->VectorFieldTexturesRHI[local_fb8.Count] =
                     (pFVar19->VolumeTextureRHI).Reference;
                local_fb8.Count = local_fb8.Count + 1;
                SetParametersForVectorField(&local_fb8,pFVar18,fVar7,fVar8,iVar32);
              }
              auStack_1558._8_4_ = auStack_1558._8_4_ & ~local_1568._12_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1568 + 8));
              uVar37 = (ulonglong)(uint)auStack_1558._12_4_;
            } while ((int)auStack_1558._12_4_ < *(int *)(auStack_1558._0_8_ + 0x18));
          }
        }
        uVar51 = local_fb8.Count;
        if (0 < local_fb8.Count) {
          for (; (int)uVar51 < 4; uVar51 = uVar51 + 1) {
            auVar24._8_4_ = UE::Math::TMatrix<float>::Identity.M[2][2];
            auVar24._12_4_ = UE::Math::TMatrix<float>::Identity.M[2][3];
            auVar24._0_4_ = UE::Math::TMatrix<float>::Identity.M[2][0];
            auVar24._4_4_ = UE::Math::TMatrix<float>::Identity.M[2][1];
            uVar37 = (ulonglong)uVar51;
            uVar38 = (ulonglong)uVar51;
            lVar41 = uVar37 * 0x40;
            *(undefined8 *)((longlong)local_fb8.WorldToVolume.Elements + lVar41) =
                 UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolumeTile + uVar37 + 1) + 8) =
                 UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolumeTile + uVar37 + 1) + 0x10) =
                 UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolumeTile + uVar37 + 1) + 0x18) =
                 UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
            *(undefined1 (*) [16])((longlong)(&local_fb8.WorldToVolumeTile + uVar37 + 1) + 0x20) =
                 auVar24;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolumeTile + uVar37 + 1) + 0x30) =
                 UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolumeTile + uVar37 + 1) + 0x38) =
                 UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
            *(undefined8 *)((longlong)local_fb8.VolumeToWorld.Elements + lVar41) =
                 UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolume + 1) + 8U + lVar41) =
                 UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolume + 1) + 0x10U + lVar41) =
                 UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolume + 1) + 0x18U + lVar41) =
                 UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
            *(undefined1 (*) [16])((longlong)(&local_fb8.WorldToVolume + 1) + 0x20U + lVar41) =
                 auVar24;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolume + 1) + 0x30U + lVar41) =
                 UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
            *(undefined8 *)((longlong)(&local_fb8.WorldToVolume + 1) + 0x38U + lVar41) =
                 UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
            *(undefined8 *)((longlong)local_fb8.VolumeSize.Elements + uVar38 * 0x10) = 0x3f800000;
            *(undefined4 *)((longlong)local_fb8.VolumeSize.Elements + uVar38 * 0x10 + 8) = 0;
            *(undefined4 *)((longlong)local_fb8.VolumeSize.Elements + uVar38 * 0x10 + 0xc) =
                 0x3f800000;
            *(undefined8 *)((longlong)local_fb8.IntensityAndTightness.Elements + uVar38 * 0x10) = 0;
            *(undefined4 *)((longlong)local_fb8.IntensityAndTightness.Elements + uVar38 * 0x10 + 8)
                 = 0;
            *(undefined4 *)
             ((longlong)local_fb8.IntensityAndTightness.Elements + uVar38 * 0x10 + 0xc) = 0x3f800000
            ;
          }
          TVar42 = TUniformBufferRef<FVectorFieldUniformParameters>::CreateUniformBufferImmediate
                             ((FVectorFieldUniformParameters *)&local_15a8,
                              (EUniformBufferUsage)&local_fb8,ValidateResources);
          pTVar3 = &pFVar40->VectorFieldsUniformBuffer;
          if ((TUniformBufferRef<FVectorFieldUniformParameters>)pTVar3 != TVar42) {
            TVar46 = *pTVar3;
            *pTVar3 = *(TUniformBufferRef<FVectorFieldUniformParameters> *)TVar42;
            *(undefined8 *)TVar42 = 0;
            if (TVar46 != (TUniformBufferRef<FVectorFieldUniformParameters>)0x0) {
              FRHIResource::Release((FRHIResource *)TVar46);
            }
          }
          if (local_15a8 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_15a8);
          }
        }
        pTVar4 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar14 + 0xe8);
        if ((&local_1688 == pTVar4) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar31)) {
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        iVar32 = *(int *)(lVar14 + 0xf0);
        if (iVar32 != 0) {
          iVar33 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar32,&local_1688.AllocatorInstance,&local_1688.ArrayNum,
                              &local_1688.ArrayMax);
          memcpy(local_1688.AllocatorInstance.Data + (longlong)iVar33 * 4,
                 (pTVar4->AllocatorInstance).Data,(longlong)iVar32 << 2);
        }
        *(undefined4 *)(lVar14 + 0xf0) = 0;
        if (*(int *)(lVar14 + 0xf4) < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pTVar4,0,(int *)(lVar14 + 0xf4));
        }
        pTVar5 = (TArray<FNewParticle,TSizedDefaultAllocator<32>_> *)(lVar14 + 0xd8);
        if ((&local_1670 == pTVar5) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar31)) {
          pcVar23 = (code *)swi(3);
          (*pcVar23)();
          return;
        }
        iVar32 = *(int *)(lVar14 + 0xe0);
        if (iVar32 != 0) {
          iVar33 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x4c,4,iVar32,&local_1670.AllocatorInstance,&local_1670.ArrayNum,
                              &local_1670.ArrayMax);
          memcpy(local_1670.AllocatorInstance.Data + (longlong)iVar33 * 0x4c,
                 (pTVar5->AllocatorInstance).Data,(longlong)iVar32 * 0x4c);
        }
        *(undefined4 *)(lVar14 + 0xe0) = 0;
        if (*(int *)(lVar14 + 0xe4) < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x4c,4,0,(ForAnyElementType *)pTVar5,0,(int *)(lVar14 + 0xe4));
        }
        *(undefined8 *)(lVar14 + 0x78) = 0;
        *(undefined8 *)(lVar14 + 0x80) = 0;
        *(undefined4 *)(lVar14 + 0x88) = 0;
      }
      local_1528 = (float)((uint)local_1528 & ~local_1538._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1538);
    } while ((int)local_1524 < local_1530->NumBits);
    local_1620 = local_1610;
    local_1640 = local_1618;
    TVar42 = local_1660;
    pFVar49 = local_1618;
  }
  uVar37 = (ulonglong)_tls_index;
  if ((local_16a0.ArrayNum != 0) || (pFVar54 = local_1638, local_1688.ArrayNum != 0)) {
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_3c8,2,&local_1618,Load_Store);
    pFVar54 = local_1638;
    FRHICommandList::BeginRenderPass
              ((FRHICommandList *)local_1638,&local_3c8,L"GPUParticles_SimulateAndClear");
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar37 * 8);
    if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_1190 = 0x1395;
      local_1198 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
      ;
      ::Desc._padding_ = CONCAT44(uStack_118c,0x1395);
      pwStack_1180 = L"GPUParticles_SimulateAndClear";
      local_1188 = 0;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_ = 0;
      ::Desc._padding_ = (longlong)u_GPUParticles_Si;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FFXSystem::SimulateGPUParticles'::__l86::<lambda_2>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar43 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar54);
    pFVar44 = FMemStackBase::Alloc(&pFVar43->Inner,0x50,8);
    pFVar44->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar44->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar44->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar44->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar44->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar44->Allocator = pFVar43;
    pFVar44->TraceCpuSpecId = 0;
    pFVar44->TraceCpuMetadataId = 0;
    pFVar44->Data = (FRHIBreadcrumbData *)&::Desc;
    LOCK();
    UNLOCK();
    uVar34 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar44->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar44->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar44->ID = uVar34;
    pFVar44->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar44[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar31 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar31)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar35 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar35;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar54 = local_1638;
    pFVar44->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope
              (&local_1008,(FRHIComputeCommandList *)local_1638,pFVar44);
    local_ff8 = 1;
    FGraphicsPipelineStateInitializer::FGraphicsPipelineStateInitializer(&local_ca8);
    FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)pFVar54,&local_ca8);
    fVar55 = (float)(local_1678->ParticleSimulationResources->SimulationResourcesSize).field0_0x0.
                    _s_0.X;
    FRHICommandList::SetViewport((FRHICommandList *)pFVar54,0.0,0.0,0.0,fVar55,fVar55,fVar26);
    local_ca8.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_ca8.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_ca8.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    pFVar48 = local_1678;
    if (local_16a0.ArrayNum != 0) {
      if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uStack_1170 = 0x13a2;
        local_1178 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
        ;
        ::Desc._padding_ = CONCAT44(uStack_116c,0x13a2);
        local_1168 = 0;
        pwStack_1160 = L"ParticleSimulationCommands";
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_ = 0;
        ::Desc._padding_ = (longlong)u_ParticleSimulat;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FFXSystem::SimulateGPUParticles'::__l94::<lambda_3>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar43 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar54);
      pFVar44 = FMemStackBase::Alloc(&pFVar43->Inner,0x50,8);
      pFVar44->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
      pFVar44->Parent = FRHIBreadcrumbNode::Sentinel;
      pFVar44->ListLink = (FRHIBreadcrumbNode *)0x0;
      (pFVar44->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
      (pFVar44->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
      pFVar44->Allocator = pFVar43;
      pFVar44->TraceCpuSpecId = 0;
      pFVar44->TraceCpuMetadataId = 0;
      pFVar44->Data = (FRHIBreadcrumbData *)&::Desc;
      LOCK();
      UNLOCK();
      uVar34 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
      FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
      pFVar44->BeginPipes = (atomic<unsigned_char>)0x0;
      pFVar44->EndPipes = (atomic<unsigned_char>)0x0;
      pFVar44->ID = uVar34;
      pFVar44->_padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      pFVar44[1]._padding_ = (longlong)&::Desc;
      if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
         (bVar31 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar31)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar35 = (atomic<unsigned_int>)
                   FCpuProfilerTrace::OutputEventType
                             ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                              (uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar35;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
      pFVar44->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
      FRHIBreadcrumbScope::FRHIBreadcrumbScope
                (&local_1038,(FRHIComputeCommandList *)pFVar54,pFVar44);
      pFVar48 = local_1678;
      local_1028 = 1;
      TVar20 = local_1678->SceneTexturesUniformParams;
      pFVar21 = local_1678->ParticleSimulationResources;
      TVar10 = local_1678->FeatureLevel;
      bVar31 = 0.0 < fVar6;
      if (param_2 == CollisionDepthBuffer) {
        if (*local_1630 == (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
LAB_148133a0d:
          local_15e8 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
          ExecuteSimulationCommands<0>
                    ((FRHICommandList *)pFVar54,&local_ca8,TVar10,&local_16a0,pFVar21,&local_15e8,
                     local_1690,(FRHIUniformBuffer *)TVar20,bVar31);
          if (local_15e8 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
            FRHIResource::Release((FRHIResource *)local_15e8);
          }
          FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1038);
        }
        else {
          ExecuteSimulationCommands<1>
                    ((FRHICommandList *)pFVar54,&local_ca8,TVar10,&local_16a0,pFVar21,local_1630,
                     local_1690,(FRHIUniformBuffer *)TVar20,bVar31);
          FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1038);
        }
      }
      else {
        if ((param_2 != CollisionDistanceField) ||
           (local_1690 == (FGlobalDistanceFieldParameterData *)0x0)) goto LAB_148133a0d;
        ExecuteSimulationCommands<2>
                  ((FRHICommandList *)pFVar54,&local_ca8,TVar10,&local_16a0,pFVar21,local_1630,
                   local_1690,(FRHIUniformBuffer *)TVar20,bVar31);
        FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1038);
      }
    }
    if (local_1688.ArrayNum != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar37 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uStack_1150 = 0x13b5;
        local_1158 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
        ;
        ::Desc._padding_ = CONCAT44(uStack_114c,0x13b5);
        local_1148 = 0;
        pwStack_1140 = L"ParticleTilesClear";
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_ = 0;
        ::Desc._padding_ = (longlong)u_ParticleTilesCl;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FFXSystem::SimulateGPUParticles'::__l102::<lambda_4>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar43 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar54);
      pFVar44 = FMemStackBase::Alloc(&pFVar43->Inner,0x50,8);
      pFVar44->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
      pFVar44->Parent = FRHIBreadcrumbNode::Sentinel;
      pFVar44->ListLink = (FRHIBreadcrumbNode *)0x0;
      (pFVar44->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
      (pFVar44->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
      pFVar44->Allocator = pFVar43;
      pFVar44->TraceCpuSpecId = 0;
      pFVar44->TraceCpuMetadataId = 0;
      pFVar44->Data = (FRHIBreadcrumbData *)&::Desc;
      LOCK();
      UNLOCK();
      uVar34 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
      FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
      pFVar44->BeginPipes = (atomic<unsigned_char>)0x0;
      pFVar44->EndPipes = (atomic<unsigned_char>)0x0;
      pFVar44->ID = uVar34;
      pFVar44->_padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      pFVar44[1]._padding_ = (longlong)&::Desc;
      if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
         (bVar31 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar31)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar35 = (atomic<unsigned_int>)
                   FCpuProfilerTrace::OutputEventType
                             ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                              (uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar35;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
      pFVar44->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
      FRHIBreadcrumbScope::FRHIBreadcrumbScope
                (&local_1020,(FRHIComputeCommandList *)pFVar54,pFVar44);
      local_1010 = 1;
      ClearTiles((FRHICommandList *)pFVar54,&local_ca8,pFVar48->FeatureLevel,&local_1688,
                 pFVar48->ParticleSimulationResources);
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1020);
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1008);
    FRHICommandList::EndRenderPass((FRHICommandList *)pFVar54);
    pFVar49 = local_1640;
    if (local_3c8.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_3c8.ShadingRateTexture.Reference);
      pFVar49 = local_1640;
    }
  }
  pFVar48 = local_1678;
  if (local_1670.ArrayNum != 0) {
    TVar36 = FThreadSafeStaticStatInner<FStat_STAT_GPUParticlesInjectionTime,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_GPUParticlesInjectionTime,1> *)
                        &StatPtr_STAT_GPUParticlesInjectionTime);
    local_14f8.Impl._Line = 0x13c0;
    local_14f8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
    ;
    local_14f8.Impl._Column = 3;
    local_14f8.Impl._Function =
         "void __cdecl FFXSystem::SimulateGPUParticles(class FRHICommandListImmediate &,enum EParticleSimulatePhase::Type,const class TUniformBufferRef<class FViewUniformShaderParameters> &,const class FGlobalDistanceFieldParameterData *)"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_15f8,*(TStatIdData **)&(TVar36.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_14f8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar37 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_1130 = 0x13c1;
      local_1138 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
      ;
      ::Desc._padding_ = CONCAT44(uStack_112c,0x13c1);
      pwStack_1120 = L"ParticleInjection";
      local_1128 = &GPUStat_ParticleSimulation;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_ = (longlong)&GPUStat_ParticleSimulation;
      ::Desc._padding_ = (longlong)u_ParticleInjecti;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FFXSystem::SimulateGPUParticles'::__l110::<lambda_5>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar43 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)pFVar54);
    pFVar44 = FMemStackBase::Alloc(&pFVar43->Inner,0x50,8);
    pFVar44->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar44->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar44->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar44->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar44->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar44->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar44->Allocator = pFVar43;
    pFVar44->TraceCpuSpecId = 0;
    pFVar44->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar34 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar44->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar44->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar44->ID = uVar34;
    pFVar44->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar44[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar31 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar31)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar35 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar35;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar44->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_ff0,(FRHIComputeCommandList *)pFVar54,pFVar44);
    pFVar48 = local_1678;
    local_fe0 = 1;
    local_10e0 = *(FRHITexture **)
                  ((longlong)&local_1658->StateTextures[0].PositionTextureRHI.Reference + local_1628
                  );
    local_10d8 = *(undefined8 *)
                  ((longlong)&local_1658->StateTextures[0].VelocityTextureRHI.Reference + local_1628
                  );
    FVar12 = (FRHITransitionInfo_u_8)
             (local_1678->ParticleSimulationResources->RenderAttributesTexture).TextureRHI.Reference
    ;
    pFVar11 = (local_1678->ParticleSimulationResources->SimulationAttributesTexture).TextureRHI.
              Reference;
    local_10d0 = FVar12;
    local_10c8 = pFVar11;
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_2c8,4,&local_10e0,Load_Store);
    uStack_11d0 = 2;
    local_13b4 = 0xffff;
    local_1384 = 0xffff;
    local_11d8 = (FRHITransitionInfo *)&local_13b8;
    local_13b8 = -NAN;
    local_10a8._12_4_ = uStack_11cc;
    local_10a8.ArrayNum = 2;
    local_13a8 = Texture;
    local_13a4 = 1.56945e-43;
    local_13a0 = 5.73972e-42;
    local_139c = None;
    local_1390 = false;
    local_1388 = -NAN;
    local_1378 = 1;
    local_1374 = 1.56945e-43;
    local_1370 = 5.73972e-42;
    local_136c = 0;
    local_1360 = 0;
    local_13b0 = FVar12;
    local_1380 = pFVar11;
    local_10a8.DataPtr = local_11d8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)pFVar54,&local_10a8,None);
    FRHICommandList::BeginRenderPass((FRHICommandList *)pFVar54,&local_2c8,L"ParticleInjection");
    FGraphicsPipelineStateInitializer::FGraphicsPipelineStateInitializer(&local_ae8);
    FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)pFVar54,&local_ae8);
    FRHICommandList::SetViewport
              ((FRHICommandList *)pFVar54,0.0,0.0,0.0,
               (float)(pFVar48->ParticleSimulationResources->SimulationResourcesSize).field0_0x0.
                      _s_0.X,
               (float)(pFVar48->ParticleSimulationResources->SimulationResourcesSize).field0_0x0.
                      _s_0.Y,fVar26);
    local_ae8.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_ae8.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_ae8.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    InjectNewParticles<0>
              ((FRHICommandList *)pFVar54,&local_ae8,pFVar48->FeatureLevel,&local_1670,
               pFVar48->ParticleSimulationResources);
    FRHICommandList::EndRenderPass((FRHICommandList *)pFVar54);
    uStack_11c0 = 2;
    local_1358._4_2_ = 0xffff;
    local_1328._4_2_ = 0xffff;
    local_11c8 = &local_1358;
    local_1358._s_0.X = -NAN;
    local_1098._12_4_ = uStack_11bc;
    local_1098.ArrayNum = 2;
    local_1348[0]._0_1_ = 1;
    local_1348[0]._s_0.Y = 5.73972e-42;
    local_1348[0]._s_0.Z = 1.56945e-43;
    local_1348[0]._12_1_ = 0;
    local_1348[1]._8_1_ = 0;
    local_1328._s_0.X = -NAN;
    local_1318[0]._0_1_ = 1;
    local_1318[0]._s_0.Y = 5.73972e-42;
    local_1318[0]._s_0.Z = 1.56945e-43;
    local_1318[0]._12_1_ = 0;
    local_1318[1]._8_1_ = 0;
    local_1358._8_8_ = FVar12;
    local_1328._8_8_ = pFVar11;
    local_1098.DataPtr = (FRHITransitionInfo *)local_11c8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)pFVar54,&local_1098,None);
    if (bVar30) {
      `FFXSystem::SimulateGPUParticles'::__l2::<lambda_1>::operator()
                (&local_15e0,
                 (pFVar48->ParticleSimulationResources->RenderAttributesTexture).TextureRHI.
                 Reference);
      `FFXSystem::SimulateGPUParticles'::__l2::<lambda_1>::operator()
                (&local_15e0,
                 (pFVar48->ParticleSimulationResources->SimulationAttributesTexture).TextureRHI.
                 Reference);
    }
    if (local_2c8.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2c8.ShadingRateTexture.Reference);
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_ff0);
    if ((local_15f0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_15f0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_15f0 & 4) != 0) {
      FThreadStats::AddMessage(local_15f8,CycleScopeEnd);
    }
  }
  local_12f8._4_2_ = 0xffff;
  local_12c8._8_8_ = local_1620;
  local_11b8 = &local_12f8;
  uStack_11b0 = 2;
  local_1088._12_4_ = uStack_11ac;
  local_1088.ArrayNum = 2;
  local_12f8._s_0.X = -NAN;
  local_12e8[0]._0_1_ = 1;
  local_12e8[0]._s_0.Y = 5.73972e-42;
  local_12e8[0]._s_0.Z = 1.56945e-43;
  local_12e8[0]._12_1_ = 0;
  local_12e8[1]._8_1_ = 0;
  local_12c8._s_0.X = -NAN;
  local_12c8._4_2_ = 0xffff;
  local_12b8[0]._0_1_ = 1;
  local_12b8[0]._s_0.Y = 5.73972e-42;
  local_12b8[0]._s_0.Z = 1.56945e-43;
  local_12b8[0]._12_1_ = 0;
  local_12b8[1]._8_1_ = 0;
  local_12f8._8_8_ = pFVar49;
  local_1088.DataPtr = (FRHITransitionInfo *)local_11b8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)pFVar54,&local_1088,None);
  if ((local_16a0.ArrayNum == 0) || (fVar6 <= 0.0)) goto LAB_14813466f;
  pFVar21 = pFVar48->ParticleSimulationResources;
  uStack_11a0 = 2;
  local_1298._s_0.X = -NAN;
  local_1298._4_2_ = 0xffff;
  uVar37 = (longlong)pFVar21->FrameIndex ^ 1;
  local_1288 = 1;
  local_1284 = 0x70;
  local_1280 = 0x1000;
  local_127c = 0;
  local_1270 = 0;
  local_1268 = 0xffffffff;
  local_1264 = 0xffff;
  local_1258 = 1;
  local_1254 = 0x70;
  local_1298._8_8_ = pFVar21->StateTextures[uVar37].PositionTextureRHI.Reference;
  local_1260 = pFVar21->StateTextures[uVar37].VelocityTextureRHI.Reference;
  local_11a8 = &local_1298;
  local_1078._12_4_ = uStack_119c;
  local_1078.ArrayNum = 2;
  local_1250 = 0x1000;
  local_124c = 0;
  local_1240 = 0;
  local_1078.DataPtr = (FRHITransitionInfo *)local_11a8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)pFVar54,&local_1078,None);
  local_1238 = pFVar21->StateTextures[uVar37].PositionTextureRHI.Reference;
  local_1230 = pFVar21->StateTextures[uVar37].VelocityTextureRHI.Reference;
  FRHIRenderPassInfo::FRHIRenderPassInfo(&local_1c8,2,&local_1238,Load_Store);
  FRHICommandList::BeginRenderPass
            ((FRHICommandList *)pFVar54,&local_1c8,L"ExecuteSimulationCommands");
  FGraphicsPipelineStateInitializer::FGraphicsPipelineStateInitializer(&local_bc8);
  FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)pFVar54,&local_bc8);
  pFVar22 = pFVar48->ParticleSimulationResources;
  TVar10 = pFVar48->FeatureLevel;
  local_bc8.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_bc8.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_bc8.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  TVar20 = pFVar48->SceneTexturesUniformParams;
  if (param_2 == CollisionDepthBuffer) {
    if (*local_1630 == (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
LAB_1481344ed:
      local_1650.ComparisonIndex.Value = 0;
      local_1650.Number = 0;
      ExecuteSimulationCommands<0>
                ((FRHICommandList *)pFVar54,&local_bc8,TVar10,&local_16a0,pFVar22,
                 (TUniformBufferRef<FViewUniformShaderParameters> *)&local_1650,local_1690,
                 (FRHIUniformBuffer *)TVar20,false);
      if (local_1650 != (FName)0x0) {
        FRHIResource::Release((FRHIResource *)local_1650);
      }
    }
    else {
      ExecuteSimulationCommands<1>
                ((FRHICommandList *)pFVar54,&local_bc8,TVar10,&local_16a0,pFVar22,local_1630,
                 local_1690,(FRHIUniformBuffer *)TVar20,false);
    }
  }
  else {
    if ((param_2 != CollisionDistanceField) ||
       (local_1690 == (FGlobalDistanceFieldParameterData *)0x0)) goto LAB_1481344ed;
    ExecuteSimulationCommands<2>
              ((FRHICommandList *)pFVar54,&local_bc8,TVar10,&local_16a0,pFVar22,local_1630,
               local_1690,(FRHIUniformBuffer *)TVar20,false);
  }
  FRHICommandList::EndRenderPass((FRHICommandList *)pFVar54);
  local_1470 = (FRHITransitionInfo_u_8)pFVar21->StateTextures[uVar37].PositionTextureRHI.Reference;
  local_1440 = pFVar21->StateTextures[uVar37].VelocityTextureRHI.Reference;
  local_1228 = (FRHITransitionInfo *)&local_1478;
  uStack_1220 = 2;
  local_1068._12_4_ = uStack_121c;
  local_1068.ArrayNum = 2;
  local_1478 = -NAN;
  local_1474 = 0xffff;
  local_1468 = Texture;
  local_1464 = 5.73972e-42;
  local_1460 = 1.56945e-43;
  local_145c = None;
  local_1450 = false;
  local_1448 = -NAN;
  local_1444 = 0xffff;
  local_1438 = 1;
  local_1434 = 5.73972e-42;
  local_1430 = 1.56945e-43;
  local_142c = 0;
  local_1420 = 0;
  local_1068.DataPtr = local_1228;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)pFVar54,&local_1068,None);
  if ((param_2 == pFVar48->PhaseToBroadcastResourceTransfer) && (0 < local_5d0)) {
    iStack_1210 = local_5d0;
    local_1218 = local_6f8;
    if (local_5d8 != (FTransferResourceParams *)0x0) {
      local_1218 = local_5d8;
    }
    local_1058[0]._12_4_ = uStack_120c;
    local_1058[0].ArrayNum = local_5d0;
    local_1058[0].DataPtr = local_1218;
    FRHIComputeCommandList::TransferResources((FRHIComputeCommandList *)pFVar54,local_1058);
  }
  if (local_1c8.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1c8.ShadingRateTexture.Reference);
  }
LAB_14813466f:
  bVar30 = IsFeatureLevelSupported
                     ((FStaticShaderPlatform)
                      GRHIGlobals.ShaderPlatformForFeatureLevel[(int)pFVar48->FeatureLevel],SM5);
  if (param_2 == (uint)bVar30 * 2) {
    pFVar21 = pFVar48->ParticleSimulationResources;
    lpCriticalSection = &(pFVar21->TileAllocator).CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar32 = (pFVar21->TileAllocator).FreeTiles.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((iVar32 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      TVar36 = FThreadSafeStaticStatInner<FStat_STAT_FreeGPUTiles,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_FreeGPUTiles,1> *)
                          &StatPtr_STAT_FreeGPUTiles);
      local_1650 = *(FName *)(TVar36.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_1650,Add,(longlong)iVar32,false);
    }
  }
  if (local_1670.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1670.AllocatorInstance.Data);
  }
  if (local_1688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1688.AllocatorInstance.Data);
  }
  DestructItems<FSimulationCommandGPU,int>
            ((FSimulationCommandGPU *)local_16a0.AllocatorInstance.Data,local_16a0.ArrayNum);
  if ((FSimulationCommandGPU *)local_16a0.AllocatorInstance.Data != (FSimulationCommandGPU *)0x0) {
    FMemory::Free(local_16a0.AllocatorInstance.Data);
  }
  if (TVar42 != (TUniformBufferRef<FVectorFieldUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)TVar42);
  }
  pFVar45 = local_6f8;
  if (local_5d8 != (FTransferResourceParams *)0x0) {
    pFVar45 = local_5d8;
  }
  DestructItems<FTransferResourceParams,int>(pFVar45,local_5d0);
  if (local_5d8 != (FTransferResourceParams *)0x0) {
    FMemory::Free(local_5d8);
  }
  if ((local_1600 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1600 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1600 & 4) != 0) {
    FThreadStats::AddMessage(local_1608,CycleScopeEnd);
  }
  local_1600 = 0;
  FMemScope::~FMemScope(&local_15a0);
  FLLMScope::~FLLMScope(local_1648);
  return;
}

// Tick @ 148138020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FFXSystem::Tick(FFXSystem *this,UWorld *param_1,float param_2)

{
  Type TVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  IConsoleVariable *pIVar6;
  bool bVar7;
  undefined8 uVar8;
  IConsoleManager *pIVar9;
  ForAnyElementType FVar10;
  undefined1 local_48 [16];
  FString local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  pTVar4 = FXConsoleVariables::TestGPUSort.Ref;
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) && (GRHIGlobals.SupportsTexture3D)) {
    bVar7 = IsInParallelGameThread();
    if (!bVar7) {
      bVar7 = IsInGameThread();
      if (!bVar7) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    pTVar5 = FXConsoleVariables::TestGPUSort.Ref;
    if (pTVar4->ShadowedValue[0] != 0) {
      TVar1 = this->FeatureLevel;
      bVar7 = IsInParallelGameThread();
      if (!bVar7) {
        bVar7 = IsInGameThread();
        if (!bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      TestGPUSort(pTVar5->ShadowedValue[0],TVar1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          pIVar9 = IConsoleManager::Get();
          CVarTestGPUSort =
               (IConsoleVariable *)
               (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"FX.TestGPUSort",1);
          _Init_thread_footer(&::_TSS0);
        }
      }
      pIVar6 = CVarTestGPUSort;
      local_28 = 0xe000000;
      local_24 = 0;
      local_20 = 0;
      local_18 = 0;
      local_14 = 0xf000000;
      local_10 = 0x1000000;
      ::FString::PrintfImpl(&local_38,L"%d");
      lVar2 = *(longlong *)pIVar6;
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar10.Data = local_38.Data.AllocatorInstance.Data;
      }
      uVar8 = (**(code **)(lVar2 + 0xa8))(pIVar6,local_48,&local_28);
      (**(code **)(lVar2 + 0xb0))(pIVar6,FVar10.Data,uVar8);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FParticleCurveTexture::SubmitPendingCurves((FParticleCurveTexture *)&GParticleCurveTexture);
  }
  return;
}

// UpdateMultiGPUResources @ 148140f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FFXSystem::UpdateMultiGPUResources(FFXSystem *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  FRHITexture *pFVar2;
  FRHITexture *pFVar3;
  FParticleSimulationResources *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  Type TVar9;
  FRHIBreadcrumbAllocator *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  Type TVar12;
  undefined1 auStackY_328 [32];
  FRHITransitionInfo local_2e8;
  undefined4 local_2b8;
  undefined2 local_2b4;
  FRHITexture *local_2b0;
  undefined1 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined1 local_290;
  FRHITransitionInfo *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  char *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TGPUStat<TRHIGPUStatNameProvider_ParticleSimulation> *local_268;
  wchar_t *pwStack_260;
  FRHIBreadcrumbScope local_258;
  char local_248;
  TArrayView<FRHITransitionInfo_const_,int> local_238;
  FGraphicsPipelineStateInitializer local_228;
  FRHIRenderPassInfo local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  TVar9 = First;
  TVar12 = CollisionDepthBuffer;
  if ((this->LastFrameNewParticles).ArrayNum != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_270 = 0x1447;
      local_278 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
      ;
      local_268 = &GPUStat_ParticleSimulation;
      pwStack_260 = L"ParticleInjection";
      ::Desc._padding_._0_4_ = 0x51a1b2a0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x1447;
      ::Desc._padding_._4_4_ = uStack_26c;
      ::Desc._padding_ = (longlong)&GPUStat_ParticleSimulation;
      ::Desc._padding_ = (longlong)u_ParticleInjecti;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FFXSystem::UpdateMultiGPUResources'::__l10::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x50,8);
    pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar11->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar11->Allocator = pFVar10;
    pFVar11->TraceCpuSpecId = 0;
    pFVar11->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar11->ID = uVar7;
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar11[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar8 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)::Desc._padding_,
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar8;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar11->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_258,(FRHIComputeCommandList *)param_1,pFVar11);
    local_248 = '\x01';
    pFVar2 = (this->ParticleSimulationResources->RenderAttributesTexture).TextureRHI.Reference;
    pFVar3 = (this->ParticleSimulationResources->SimulationAttributesTexture).TextureRHI.Reference;
    TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>::
    TStaticArray<FRHIRenderPassInfo::FColorEntry,8,4294967295>(&local_148.ColorRenderTargets);
    local_148.DepthStencilRenderTarget.Action = DontLoad_DontStore;
    local_148.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
    local_148.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
    local_148.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
    local_148.ResolveRect.X1 = -1;
    local_148.ResolveRect.Y1 = -1;
    local_148.ResolveRect.X2 = -1;
    local_148.ResolveRect.Y2 = -1;
    local_148.ShadingRateTexture.Reference = (FRHITexture *)0x0;
    local_148.ShadingRateTextureCombiner = VRSRB_Passthrough;
    local_148.NopAccess = None;
    local_148.NumOcclusionQueries = 0;
    local_148.bOcclusionQueries = false;
    local_148.MultiViewCount = '\0';
    local_148.SubpassHint = None;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ColorRTs[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x14be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_148.ColorRenderTargets.Elements[0].ArraySlice = -1;
    local_148.ColorRenderTargets.Elements[0].Action = Load_Store;
    local_148.ColorRenderTargets.Elements[0].RenderTarget = pFVar2;
    if ((pFVar3 == (FRHITexture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ColorRTs[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x14be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this->ParticleSimulationResources;
    local_148.ColorRenderTargets.Elements[1].ArraySlice = -1;
    local_148.ColorRenderTargets.Elements[1].Action = Load_Store;
    local_148.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
    local_148.DepthStencilRenderTarget.Action = DontLoad_DontStore;
    local_148.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
    local_148.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
    local_148.ColorRenderTargets.Elements[0].ResolveTarget =
         (pFVar4->RenderAttributesTexture).TextureRHI.Reference;
    local_148.ColorRenderTargets.Elements[1].ResolveTarget =
         (pFVar4->SimulationAttributesTexture).TextureRHI.Reference;
    local_2e8.field1_0x8 =
         (FRHITransitionInfo_u_8)(pFVar4->RenderAttributesTexture).TextureRHI.Reference;
    local_2e8._padding_._4_2_ = 0xffff;
    local_2e8._padding_._0_4_ = 0xffffffff;
    local_2e8.Type = Texture;
    local_2e8.AccessBefore = None;
    local_2e8.AccessAfter = RTV;
    local_2e8.Flags = None;
    local_2e8.CommitInfo.bIsSet = false;
    local_2b0 = (pFVar4->SimulationAttributesTexture).TextureRHI.Reference;
    local_288 = &local_2e8;
    local_2b4 = 0xffff;
    uStack_280 = 2;
    local_238._12_4_ = uStack_27c;
    local_238.ArrayNum = 2;
    local_2b8 = 0xffffffff;
    local_2a8 = 1;
    local_2a4 = 0;
    local_2a0 = 0x1000;
    local_29c = 0;
    local_290 = 0;
    local_238.DataPtr = local_288;
    local_148.ColorRenderTargets.Elements[1].RenderTarget = pFVar3;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_238,None);
    FRHICommandList::BeginRenderPass
              ((FRHICommandList *)param_1,&local_148,L"UpdateMultiGPUResources");
    FRHICommandList::SetViewport
              ((FRHICommandList *)param_1,0.0,0.0,0.0,
               (float)(this->ParticleSimulationResources->SimulationResourcesSize).field0_0x0._s_0.X
               ,(float)(this->ParticleSimulationResources->SimulationResourcesSize).field0_0x0._s_0.
                       Y,__real_3f800000);
    local_228.RenderTargetsEnabled = 0;
    local_228.RenderTargetFormats.Elements[0] = '\0';
    local_228.RenderTargetFormats.Elements[1] = '\0';
    local_228.RenderTargetFormats.Elements[2] = '\0';
    local_228.RenderTargetFormats.Elements[3] = '\0';
    local_228.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    local_228.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    local_228.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_228.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_228.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_228.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_228.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_228.BlendState = (FRHIBlendState *)0x0;
    local_228.RasterizerState = (FRHIRasterizerState *)0x0;
    local_228.DepthStencilState = (FRHIDepthStencilState *)0x0;
    local_228.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_228.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_228.RenderTargetFlags.Elements[0] = None;
    local_228.RenderTargetFlags.Elements[1] = None;
    local_228.RenderTargetFlags.Elements[2] = None;
    local_228.RenderTargetFlags.Elements[3] = None;
    local_228.RenderTargetFlags.Elements[4] = None;
    local_228.RenderTargetFlags.Elements[5] = None;
    local_228.RenderTargetFlags.Elements[6] = None;
    local_228.RenderTargetFlags.Elements[7] = None;
    local_228.RenderTargetFormats.Elements[4] = '\0';
    local_228.RenderTargetFormats.Elements[5] = '\0';
    local_228.RenderTargetFormats.Elements[6] = '\0';
    local_228.RenderTargetFormats.Elements[7] = '\0';
    local_228.DepthStencilTargetFormat = PF_Unknown;
    local_228.DepthStencilTargetFlag = None;
    local_228.DepthTargetLoadAction = ENoAction;
    local_228.DepthTargetStoreAction = ENoAction;
    local_228.StencilTargetLoadAction = ENoAction;
    local_228.StencilTargetStoreAction = ENoAction;
    local_228.DepthStencilAccess.Value = DepthNop;
    local_228.NumSamples = 0;
    local_228.SubpassHint = None;
    local_228.SubpassIndex = '\0';
    local_228.ConservativeRasterization = Disabled;
    local_228.bDepthBounds = false;
    local_228.MultiViewCount = '\0';
    local_228.bHasFragmentDensityAttachment = false;
    local_228.bAllowVariableRateShading = true;
    local_228.ShadingRate = VRSSR_1x1;
    local_228.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    local_228.StatePrecachePSOHash = 0;
    FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)param_1,&local_228);
    local_228.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_228.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_228.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    InjectNewParticles<1>
              ((FRHICommandList *)param_1,&local_228,this->FeatureLevel,&this->LastFrameNewParticles
               ,this->ParticleSimulationResources);
    FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
    if (local_148.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148.ShadingRateTexture.Reference);
    }
    if (local_248 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_258);
    }
  }
  piVar1 = &(this->LastFrameNewParticles).ArrayMax;
  (this->LastFrameNewParticles).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,0,&(this->LastFrameNewParticles).AllocatorInstance,0,piVar1);
  }
  this->PhaseToBroadcastResourceTransfer = CollisionDepthBuffer;
  do {
    if (this->NumGPUSimulations[TVar12] != 0) break;
    TVar12 = TVar12 - CollisionDistanceField;
    this->PhaseToBroadcastResourceTransfer = TVar12;
  } while (0 < (int)TVar12);
  this->PhaseToWaitForResourceTransfer = First;
  if (0 < (int)TVar12) {
    do {
      if (this->NumGPUSimulations[(int)TVar9] != 0) {
        return;
      }
      TVar9 = TVar9 + CollisionDistanceField;
      this->PhaseToWaitForResourceTransfer = TVar9;
    } while ((int)TVar9 < (int)TVar12);
  }
  return;
}

// UpdateVectorField @ 148142820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FFXSystem::UpdateVectorField(FFXSystem *this,UVectorFieldComponent *param_1)

{
  FVectorFieldInstance *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TMatrix<double> *pTVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  code *local_2c8;
  code *pcStack_2c0;
  code *local_2b8;
  code *pcStack_2b0;
  code *local_2a8;
  code *pcStack_2a0;
  code *local_298;
  code *pcStack_290;
  code *local_288;
  code *pcStack_280;
  code *local_278;
  code *pcStack_270;
  code *local_268;
  code *pcStack_260;
  code *local_258;
  code *pcStack_250;
  code *local_248;
  code *pcStack_240;
  float local_238;
  float fStack_234;
  code *pcStack_230;
  FFXSystem *local_228;
  FVectorFieldInstance *pFStack_220;
  code *local_218;
  code *pcStack_210;
  code *local_208;
  code *pcStack_200;
  code *local_1f8;
  code *pcStack_1f0;
  code *local_1e8;
  code *pcStack_1e0;
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  code *local_1b8;
  code *pcStack_1b0;
  code *local_1a8;
  code *pcStack_1a0;
  code *local_198;
  code *pcStack_190;
  code *local_188;
  code *pcStack_180;
  code *local_178;
  code *pcStack_170;
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  TMatrix<double> local_148;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  if (((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
       (ZPULL(GPixelFormats[0x11],0,1) != 0)) &&
      ((GRHIGlobals.SupportsTexture3D &&
       (pFVar1 = param_1->VectorFieldInstance, pFVar1 != (FVectorFieldInstance *)0x0)))) &&
     ((char)this->_padding_ == '\0')) {
    dVar3 = (double)param_1->_padding_ + (double)param_1->_padding_;
    local_98 = 1;
    local_2c8 = (code *)CONCAT71(uStack_97,1);
    dVar10 = (double)param_1->_padding_ - (double)param_1->_padding_;
    dVar4 = (double)param_1->_padding_ + (double)param_1->_padding_;
    local_2f8._8_4_ = SUB84(dVar10,0);
    local_2f8._0_8_ = (double)param_1->_padding_ - (double)param_1->_padding_;
    local_2f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_2e8._8_4_ = SUB84(dVar3,0);
    local_2e8._0_8_ = (double)param_1->_padding_ - (double)param_1->_padding_;
    local_2e8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_2d8._8_4_ = SUB84(dVar4,0);
    local_2d8._0_8_ = (double)param_1->_padding_ + (double)param_1->_padding_;
    local_2d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    pTVar6 = UE::Math::TTransform<double>::ToMatrixWithScale
                       ((TTransform<double> *)&param_1->_padding_,&local_148);
    local_2b8 = (code *)pTVar6->M[0][0];
    pcStack_2b0 = (code *)pTVar6->M[0][1];
    local_2a8 = (code *)pTVar6->M[0][2];
    pcStack_2a0 = (code *)pTVar6->M[0][3];
    local_298 = (code *)pTVar6->M[1][0];
    pcStack_290 = (code *)pTVar6->M[1][1];
    local_288 = (code *)pTVar6->M[1][2];
    pcStack_280 = (code *)pTVar6->M[1][3];
    local_278 = (code *)pTVar6->M[2][0];
    pcStack_270 = (code *)pTVar6->M[2][1];
    local_268 = (code *)pTVar6->M[2][2];
    pcStack_260 = (code *)pTVar6->M[2][3];
    local_258 = (code *)pTVar6->M[3][0];
    pcStack_250 = (code *)pTVar6->M[3][1];
    local_248 = (code *)pTVar6->M[3][2];
    pcStack_240 = (code *)pTVar6->M[3][3];
    local_238 = param_1->Intensity;
    fStack_234 = param_1->Tightness;
    local_158 = *(code **)&param_1->Intensity;
    local_218 = (code *)local_2f8._0_8_;
    pcStack_210 = (code *)local_2f8._8_8_;
    local_208 = (code *)local_2e8._0_8_;
    pcStack_200 = (code *)local_2e8._8_8_;
    local_1f8 = (code *)local_2d8._0_8_;
    pcStack_1f0 = (code *)local_2d8._8_8_;
    local_1e8 = local_2c8;
    pcStack_1e0 = pcStack_2c0;
    pcStack_150 = pcStack_230;
    local_c8[0] = (code *)0x0;
    local_228 = this;
    pFStack_220 = pFVar1;
    local_1d8 = local_2b8;
    pcStack_1d0 = pcStack_2b0;
    local_1c8 = local_2a8;
    pcStack_1c0 = pcStack_2a0;
    local_1b8 = local_298;
    pcStack_1b0 = pcStack_290;
    local_1a8 = local_288;
    pcStack_1a0 = pcStack_280;
    local_198 = local_278;
    pcStack_190 = pcStack_270;
    local_188 = local_268;
    pcStack_180 = pcStack_260;
    local_178 = local_258;
    pcStack_170 = pcStack_250;
    local_168 = local_248;
    pcStack_160 = pcStack_240;
    local_a0 = FMemory::Malloc(0xf0,0x10);
    *local_a0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FFXSystem::UpdateVectorField'::`9'::<lambda_1>,1,1>
                         ::_vftable_;
    local_a0[2] = (code *)local_228;
    local_a0[3] = (code *)pFStack_220;
    local_a0[4] = local_218;
    local_a0[5] = pcStack_210;
    local_a0[6] = local_208;
    local_a0[7] = pcStack_200;
    local_a0[8] = local_1f8;
    local_a0[9] = pcStack_1f0;
    local_a0[10] = local_1e8;
    local_a0[0xb] = pcStack_1e0;
    local_a0[0xc] = local_1d8;
    local_a0[0xd] = pcStack_1d0;
    local_a0[0xe] = local_1c8;
    local_a0[0xf] = pcStack_1c0;
    local_a0[0x10] = local_1b8;
    local_a0[0x11] = pcStack_1b0;
    local_a0[0x12] = local_1a8;
    local_a0[0x13] = pcStack_1a0;
    local_a0[0x14] = local_198;
    local_a0[0x15] = pcStack_190;
    local_a0[0x16] = local_188;
    local_a0[0x17] = pcStack_180;
    local_a0[0x18] = local_178;
    local_a0[0x19] = pcStack_170;
    local_a0[0x1a] = local_168;
    local_a0[0x1b] = pcStack_160;
    local_a0[0x1c] = local_158;
    local_a0[0x1d] = pcStack_150;
    if (local_a0 + 2 != (code **)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FFXSystem::UpdateVectorField'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFXSystem::UpdateVectorField_::__l9::TSTR_FUpdateVectorFieldCommand425>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_c8[0];
      local_60 = local_a0;
      local_a0 = (code **)0x0;
      local_88._16_8_ = local_b8[0];
      local_88._24_8_ = local_b8[1];
      local_88._32_8_ = local_b8[2];
      local_c8[0] = (code *)0x0;
      local_58 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FFXSystem::UpdateVectorField'::__l9::TSTR_FUpdateVectorFieldCommand425>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar7);
      uVar9 = (ulonglong)local_58;
      if ((2 < uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar8 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar8 = local_60;
          }
          (**(code **)(*ppcVar8 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_88);
      }
    }
    if (local_c8[0] != (code *)0x0) {
      ppcVar8 = local_c8 + 2;
      if (local_a0 != (code **)0x0) {
        ppcVar8 = local_a0;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
  }
  return;
}

// UsesDepthBuffer @ 1481432e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FFXSystem::UsesDepthBuffer(FFXSystem *this)

{
  longlong lVar1;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) &&
     ((GRHIGlobals.SupportsTexture3D &&
      (TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::TConstIterator::
       TConstIterator((TConstIterator *)&local_38,&this->GPUSimulations),
      local_30.CurrentBitIndex < (local_30.Array)->NumBits)))) {
    do {
      lVar1 = *(longlong *)(*local_38 + (longlong)local_30.CurrentBitIndex * 8);
      if ((*(int *)(lVar1 + 0x324) == 2) && (0 < *(int *)(lVar1 + 0x3c))) {
        return true;
      }
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return false;
}

// UsesDepthBufferInternal @ 148143410

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFXSystem::UsesDepthBufferInternal(FFXSystem *this)

{
  longlong lVar1;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::TConstIterator::
  TConstIterator((TConstIterator *)&local_38,&this->GPUSimulations);
  if (local_30.CurrentBitIndex < (local_30.Array)->NumBits) {
    do {
      lVar1 = *(longlong *)(*local_38 + (longlong)local_30.CurrentBitIndex * 8);
      if ((*(int *)(lVar1 + 0x324) == 2) && (0 < *(int *)(lVar1 + 0x3c))) {
        return true;
      }
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return false;
}

// UsesGlobalDistanceField @ 148143490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FFXSystem::UsesGlobalDistanceField(FFXSystem *this)

{
  longlong lVar1;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  if ((((FXConsoleVariables::bAllowGPUParticles != 0) && (GRHIGlobals.SupportsWideMRT)) &&
      (ZPULL(GPixelFormats[0x11],0,1) != 0)) &&
     ((GRHIGlobals.SupportsTexture3D &&
      (TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::TConstIterator::
       TConstIterator((TConstIterator *)&local_38,&this->GPUSimulations),
      local_30.CurrentBitIndex < (local_30.Array)->NumBits)))) {
    do {
      lVar1 = *(longlong *)(*local_38 + (longlong)local_30.CurrentBitIndex * 8);
      if ((*(int *)(lVar1 + 0x324) == 1) && (0 < *(int *)(lVar1 + 0x3c))) {
        return true;
      }
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return false;
}

// UsesGlobalDistanceFieldInternal @ 1481435c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFXSystem::UsesGlobalDistanceFieldInternal(FFXSystem *this)

{
  longlong lVar1;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  TSparseArray<FParticleSimulationGPU_*,FDefaultSparseArrayAllocator>::TConstIterator::
  TConstIterator((TConstIterator *)&local_38,&this->GPUSimulations);
  if (local_30.CurrentBitIndex < (local_30.Array)->NumBits) {
    do {
      lVar1 = *(longlong *)(*local_38 + (longlong)local_30.CurrentBitIndex * 8);
      if ((*(int *)(lVar1 + 0x324) == 1) && (0 < *(int *)(lVar1 + 0x3c))) {
        return true;
      }
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return false;
}

// VisualizeGPUParticles @ 148143750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFXSystem::VisualizeGPUParticles(FFXSystem *this,FCanvas *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FFXSystem *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FRenderTarget *local_98;
  Type TStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((char)this->_padding_ == '\0') {
    iStack_a0 = FXConsoleVariables::VisualizeGPUSimulation;
    local_98 = param_1->RenderTarget;
    TStack_90 = this->FeatureLevel;
    local_88[0] = (code *)0x0;
    local_a8 = this;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FFXSystem::VisualizeGPUParticles'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_a8;
    local_60[2] = (code *)CONCAT44(uStack_9c,iStack_a0);
    local_60[3] = (code *)local_98;
    local_60[4] = (code *)CONCAT44(uStack_8c,TStack_90);
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FFXSystem::VisualizeGPUParticles'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFXSystem::VisualizeGPUParticles_::__l5::TSTR_FVisualizeGPUParticlesCommand5251>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FFXSystem::VisualizeGPUParticles'::__l5::TSTR_FVisualizeGPUParticlesCommand5251>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
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
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

