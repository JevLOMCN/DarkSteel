// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 10

// ~FValidationTransientResourceAllocator @ 145cd2de0

void __thiscall
FValidationTransientResourceAllocator::~FValidationTransientResourceAllocator
          (FValidationTransientResourceAllocator *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FValidationTransientResourceAllocator *pFVar5;
  
  this->_padding_ = (longlong)&___7FValidationTransientResourceAllocator__6B_;
  if (this->RHIAllocator != (IRHITransientResourceAllocator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RHIAllocator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xda5,L"Release was not called on FRHITransientResourceAllocator.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = this + 1;
  lVar4 = 2;
  do {
    pvVar1 = *(void **)&pFVar5[-1].PendingPipelineOps.field_0x10;
    pFVar5 = (FValidationTransientResourceAllocator *)&pFVar5[-1].PendingPipelineOps.field_0x10;
    lVar4 = lVar4 + -1;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  } while (lVar4 != 0);
  *(undefined4 *)&(this->AllocatedResourceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllocatedResourceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllocatedResourceMap);
  return;
}

// operator() @ 145cd3640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FValidationTransientResourceAllocator::Flush'::__l9::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FOperation *pFVar1;
  int iVar2;
  FTracker *this_00;
  IRHIComputeContext *pIVar3;
  longlong lVar4;
  FOperation *pFVar5;
  undefined1 local_res8 [8];
  
  pIVar3 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
  lVar4 = (**(code **)(pIVar3->_padding_ + 0x148))(pIVar3);
  iVar2 = *(int *)((longlong)this + 0x10);
  pFVar5 = *(FOperation **)((longlong)this + 8);
  this_00 = *(FTracker **)(lVar4 + 8);
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar2) {
      `TCheckedPointerIterator<RHIValidation::FOperation_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    RHIValidation::FTracker::AddOp(this_00,pFVar5);
    pFVar5 = pFVar5 + 1;
  }
  return;
}

// CreateBuffer @ 145cd8ee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITransientBuffer * __thiscall
FValidationTransientResourceAllocator::CreateBuffer
          (FValidationTransientResourceAllocator *this,FRHIBufferDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRHITransientBuffer *pFVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong local_98;
  ulonglong *local_90;
  FString *local_88;
  FString local_80;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  FResource *pFStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  pFVar7 = (FRHITransientBuffer *)(**(code **)((longlong)*this->RHIAllocator + 0x20))();
  if (pFVar7 == (FRHITransientBuffer *)0x0) {
    return (FRHITransientBuffer *)0x0;
  }
  if ((pFVar7->_padding_ != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResourceTask.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                         ,0x133,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRHITransientBuffer *)(*pcVar4)();
    return pFVar7;
  }
  uVar2 = pFVar7->_padding_;
  uVar9 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&(this->AllocatedResourceMap).field_0x8 !=
      *(int *)&(this->AllocatedResourceMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->AllocatedResourceMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->AllocatedResourceMap).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->AllocatedResourceMap).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)
                    ) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->AllocatedResourceMap + (longlong)iVar6 * 0x28) ==
            uVar2) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AllocatedResourceMap.Contains(RHIBuffer)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                             ,0xddc,
                             L"Platform RHI returned an FRHIBuffer (0x%p) which was already in use by another transient buffer resource on this allocator (0x%p)."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FRHITransientBuffer *)(*pcVar4)();
            return pFVar7;
          }
          break;
        }
        iVar6 = *(int *)(*(longlong *)&this->AllocatedResourceMap + 0x20 + (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  ::FString::FString(&local_80,param_2);
  local_90 = &local_98;
  local_70 = 1;
  local_88 = &local_80;
  local_98 = uVar2;
  TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FRHIResource_*_&&,FValidationTransientResourceAllocator::FAllocatedResourceData_&&>_>
            ((TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
              *)&this->AllocatedResourceMap,
             (TPairInitializer<FRHIResource_*_&&,FValidationTransientResourceAllocator::FAllocatedResourceData_&&>
              *)&stack0x00000008,(bool *)&local_90);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((*(int *)(uVar2 + 0x28) == 0) || (*(int *)(uVar2 + 0x2c) == 0)) {
    RHIValidation::FResource::InitBarrierTracking((FResource *)(uVar2 + 0x28),1,1,1,Discard,param_2)
    ;
  }
  else {
    pFStack_60 = (FResource *)(uVar2 + 0x28);
    if (uVar2 == 0) {
      pFStack_60 = (FResource *)0x0;
    }
    LOCK();
    (pFStack_60->NumOpRefs).Counter = (pFStack_60->NumOpRefs).Counter + 1;
    UNLOCK();
    local_68 = 6;
    RHIValidation::FOperation::AllocStringCopy(&local_58,param_2);
    iVar6 = *(int *)&(this->PendingPipelineOps).field_0x8;
    puVar10 = &(this->PendingPipelineOps).field_0xc;
    if (iVar6 == *(int *)puVar10) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)&this->PendingPipelineOps,(int *)puVar10);
    }
    lVar8 = (longlong)iVar6;
    *(int *)&(this->PendingPipelineOps).field_0x8 = iVar6 + 1;
    lVar3 = *(longlong *)&this->PendingPipelineOps;
    puVar1 = (undefined8 *)(lVar3 + lVar8 * 0x48);
    *puVar1 = CONCAT44(uStack_64,local_68);
    puVar1[1] = pFStack_60;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar8 * 0x48);
    *puVar1 = local_58;
    puVar1[1] = uStack_50;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar8 * 0x48);
    *puVar1 = local_48;
    puVar1[1] = uStack_40;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar8 * 0x48);
    *puVar1 = local_38;
    puVar1[1] = uStack_30;
    *(undefined8 *)(lVar3 + 0x40 + lVar8 * 0x48) = local_28;
  }
  return pFVar7;
}

// CreateTexture @ 145cd9140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITransientTexture * __thiscall
FValidationTransientResourceAllocator::CreateTexture
          (FValidationTransientResourceAllocator *this,FRHITextureDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  EPixelFormat EVar3;
  ushort uVar4;
  ulonglong uVar5;
  code *pcVar6;
  FState FVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  FRHITransientTexture *pFVar11;
  int *piVar12;
  uint *puVar13;
  longlong lVar14;
  FResource *this_00;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  longlong lVar19;
  uint uStack_d4;
  undefined2 uStack_c2;
  ulonglong local_c0;
  FRHITransientTexture *local_b8;
  ulonglong *local_b0;
  FString *local_a8;
  FString local_a0;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int *piStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  bVar8 = FRHITextureDesc::Validate(param_1,param_2,true);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FRHITextureCreateInfo::CheckValidity(InCreateInfo, InDebugName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0xdaf,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FRHITransientTexture *)(*pcVar6)();
    return pFVar11;
  }
  pFVar11 = (FRHITransientTexture *)
            (**(code **)((longlong)*this->RHIAllocator + 0x18))
                      (this->RHIAllocator,param_1,param_2,param_3);
  if (pFVar11 == (FRHITransientTexture *)0x0) {
    return (FRHITransientTexture *)0x0;
  }
  local_b8 = pFVar11;
  if ((pFVar11->_padding_ != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResourceTask.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                         ,0x133,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FRHITransientTexture *)(*pcVar6)();
    return pFVar11;
  }
  uVar5 = pFVar11->_padding_;
  uVar16 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  if (*(int *)&(this->AllocatedResourceMap).field_0x8 !=
      *(int *)&(this->AllocatedResourceMap).field_0x34) {
    puVar18 = *(undefined1 **)&(this->AllocatedResourceMap).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->AllocatedResourceMap).field_0x38;
    }
    iVar10 = *(int *)(puVar18 +
                     (ulonglong)
                     (*(int *)&(this->AllocatedResourceMap).field_0x48 - 1U &
                     (uVar16 >> 0x10 ^ uVar16)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->AllocatedResourceMap + (longlong)iVar10 * 0x28) ==
            uVar5) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AllocatedResourceMap.Contains(RHITexture)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                             ,0xdba,
                             L"Platform RHI returned an FRHITexture (0x%p) which was already in use by another transient texture resource on this allocator (0x%p)."
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FRHITransientTexture *)(*pcVar6)();
            return pFVar11;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this->AllocatedResourceMap + 0x20 + (longlong)iVar10 * 0x28)
        ;
      } while (iVar10 != -1);
    }
  }
  ::FString::FString(&local_a0,param_2);
  local_b0 = &local_c0;
  local_a8 = &local_a0;
  local_90 = 0;
  local_c0 = uVar5;
  TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FRHIResource_*_&&,FValidationTransientResourceAllocator::FAllocatedResourceData_&&>_>
            ((TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
              *)&this->AllocatedResourceMap,
             (TPairInitializer<FRHIResource_*_&&,FValidationTransientResourceAllocator::FAllocatedResourceData_&&>
              *)&stack0x00000008,(bool *)&local_b0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  plVar1 = (longlong *)(uVar5 + 0x28);
  piVar12 = (int *)(**(code **)(*(longlong *)(uVar5 + 0x28) + 8))(plVar1);
  if ((piVar12 == (int *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0xdbe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FRHITransientTexture *)(*pcVar6)();
    return pFVar11;
  }
  if ((*piVar12 == 0) || (piVar12[1] == 0)) {
    EVar3 = param_1->Format;
    uVar16 = 1;
    iVar10 = 1;
    if ((byte)(param_1->Dimension - TextureCube) < 2) {
      iVar10 = 6;
    }
    uVar4 = param_1->ArraySize;
    bVar9 = param_1->NumMips;
    this_00 = (FResource *)(**(code **)(*plVar1 + 8))(plVar1);
    if (this_00 != (FResource *)0x0) {
      if ((EVar3 == PF_DepthStencil) || (EVar3 == PF_X24_G8)) {
        uVar16 = 2;
      }
      this_00->NumMips = (uint)bVar9;
      this_00->NumArraySlices = iVar10 * (uint)uVar4;
      this_00->NumPlanes = uVar16;
      uStack_d4 = uStack_d4 & 0xffffff00;
      (this_00->TransientState).AcquireBacktrace = (void *)0x0;
      (this_00->TransientState).NumAcquiredSubresources = (int)0x100000000;
      (this_00->TransientState).bTransient = (bool)(char)(0x100000000 >> 0x20);
      (this_00->TransientState).Status = (char)(0x100000000 >> 0x28);
      *(undefined2 *)&(this_00->TransientState).field_0xe = uStack_c2;
      FVar7._4_4_ = uStack_d4;
      FVar7.Access = Discard;
      this_00->TrackedState = FVar7;
      bVar9 = 3;
      do {
        bVar15 = bVar9 & ~bVar9 + 1;
        if ((bVar15 == 1) || (bVar15 != 2)) {
          lVar14 = 0xc;
          lVar19 = 8;
          lVar17 = 0;
        }
        else {
          lVar14 = 0x34;
          lVar19 = 0x30;
          lVar17 = 0x28;
        }
        *(undefined4 *)(&(this_00->WholeResourceState).States.field_0x0 + lVar19) = 0x40000;
        (&(this_00->WholeResourceState).States.field_0x0)[lVar14] = bVar15;
        *(undefined8 *)(&(this_00->WholeResourceState).States.field_0x0 + lVar17) =
             *(undefined8 *)(&(this_00->WholeResourceState).States.field_0x0 + lVar19);
        bVar9 = bVar9 & ~(~bVar9 + 1);
      } while (bVar9 != 0);
      if (param_2 != (wchar_t *)0x0) {
        RHIValidation::FResource::SetDebugName(this_00,param_2,(wchar_t *)0x0);
      }
    }
  }
  else {
    uVar16 = 1;
    EVar3 = param_1->Format;
    iVar10 = 1;
    if ((byte)(param_1->Dimension - TextureCube) < 2) {
      iVar10 = 6;
    }
    uVar4 = param_1->ArraySize;
    bVar9 = param_1->NumMips;
    puVar13 = (uint *)(**(code **)(*plVar1 + 8))(plVar1);
    if ((puVar13 == (uint *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x90,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHITransientTexture *)(*pcVar6)();
      return pFVar11;
    }
    if ((*puVar13 != (uint)bVar9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource->NumMips == InNumMips",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x92,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHITransientTexture *)(*pcVar6)();
      return pFVar11;
    }
    if ((puVar13[1] != iVar10 * (uint)uVar4) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource->NumArraySlices == InNumArraySlices",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x93,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHITransientTexture *)(*pcVar6)();
      return pFVar11;
    }
    if ((EVar3 == PF_DepthStencil) || (EVar3 == PF_X24_G8)) {
      uVar16 = 2;
    }
    if ((puVar13[2] != uVar16) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource->NumPlanes == GetNumPlanesFromFormat(PixelFormat)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x94,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHITransientTexture *)(*pcVar6)();
      return pFVar11;
    }
    LOCK();
    piVar12[0x2a] = piVar12[0x2a] + 1;
    UNLOCK();
    local_88 = 6;
    piStack_80 = piVar12;
    RHIValidation::FOperation::AllocStringCopy(&local_78,param_2);
    iVar10 = *(int *)&(this->PendingPipelineOps).field_0x8;
    puVar18 = &(this->PendingPipelineOps).field_0xc;
    if (iVar10 == *(int *)puVar18) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,(ForAnyElementType *)&this->PendingPipelineOps,(int *)puVar18);
    }
    lVar14 = (longlong)iVar10;
    *(int *)&(this->PendingPipelineOps).field_0x8 = iVar10 + 1;
    lVar17 = *(longlong *)&this->PendingPipelineOps;
    puVar2 = (undefined8 *)(lVar17 + lVar14 * 0x48);
    *puVar2 = CONCAT44(uStack_84,local_88);
    puVar2[1] = piStack_80;
    puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar14 * 0x48);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(lVar17 + 0x20 + lVar14 * 0x48);
    *puVar2 = local_68;
    puVar2[1] = uStack_60;
    puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar14 * 0x48);
    *puVar2 = local_58;
    puVar2[1] = uStack_50;
    *(undefined8 *)(lVar17 + 0x40 + lVar14 * 0x48) = local_48;
  }
  return local_b8;
}

// DeallocateMemory @ 145cd9650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FValidationTransientResourceAllocator::DeallocateMemory
          (FValidationTransientResourceAllocator *this,FRHITransientBuffer *param_1,
          FRHITransientAllocationFences *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  FRHIResource *local_res8;
  
  if (param_1 == (FRHITransientBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTransientBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xdfd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)((longlong)*this->RHIAllocator + 0x28))(this->RHIAllocator,param_1,param_2);
  if (param_1->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceTask.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x133,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = param_1->_padding_;
  uVar5 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->AllocatedResourceMap).field_0x8 !=
      *(int *)&(this->AllocatedResourceMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AllocatedResourceMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AllocatedResourceMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->AllocatedResourceMap).field_0x48 - 1U &
                              (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->AllocatedResourceMap + (longlong)iVar4 * 0x28) ==
            uVar1) goto LAB_145cd9775;
        iVar4 = *(int *)(*(longlong *)&this->AllocatedResourceMap + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("AllocatedResourceMap.Contains(InTransientBuffer->GetRHI())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                     ,0xe01,
                     L"DeallocateMemory called on buffer %s, but it is not marked as allocated.");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145cd9775:
  if (param_1->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceTask.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x133,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = (FRHIResource *)param_1->_padding_;
  if (*(int *)&(this->AllocatedResourceMap).field_0x8 !=
      *(int *)&(this->AllocatedResourceMap).field_0x34) {
    uVar5 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
    ::RemoveImpl<FRHIResource_const_*>
              ((TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
                *)&this->AllocatedResourceMap,uVar5 >> 0x10 ^ uVar5,&local_res8);
  }
  return;
}

// DeallocateMemory @ 145cd9800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FValidationTransientResourceAllocator::DeallocateMemory
          (FValidationTransientResourceAllocator *this,FRHITransientTexture *param_1,
          FRHITransientAllocationFences *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  FRHIResource *local_res8;
  
  if (param_1 == (FRHITransientTexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTransientTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0xdf3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)((longlong)*this->RHIAllocator + 0x30))(this->RHIAllocator,param_1,param_2);
  if (param_1->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceTask.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x133,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = param_1->_padding_;
  uVar5 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->AllocatedResourceMap).field_0x8 !=
      *(int *)&(this->AllocatedResourceMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AllocatedResourceMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AllocatedResourceMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->AllocatedResourceMap).field_0x48 - 1U &
                              (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->AllocatedResourceMap + (longlong)iVar4 * 0x28) ==
            uVar1) goto LAB_145cd9925;
        iVar4 = *(int *)(*(longlong *)&this->AllocatedResourceMap + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("AllocatedResourceMap.Contains(InTransientTexture->GetRHI())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                     ,0xdf7,
                     L"DeallocateMemory called on texture %s, but it is not marked as allocated.");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145cd9925:
  if (param_1->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceTask.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x133,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = (FRHIResource *)param_1->_padding_;
  if (*(int *)&(this->AllocatedResourceMap).field_0x8 !=
      *(int *)&(this->AllocatedResourceMap).field_0x34) {
    uVar5 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
    ::RemoveImpl<FRHIResource_const_*>
              ((TSet<TTuple<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData>,TDefaultMapHashableKeyFuncs<FRHIResource_*,FValidationTransientResourceAllocator::FAllocatedResourceData,0>,FDefaultSetAllocator>
                *)&this->AllocatedResourceMap,uVar5 >> 0x10 ^ uVar5,&local_res8);
  }
  return;
}

// Flush @ 145cdbb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationTransientResourceAllocator::Flush
          (FValidationTransientResourceAllocator *this,FRHICommandListImmediate *param_1,
          FRHITransientAllocationStats *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ERHIPipeline EVar3;
  ERHIPipeline EVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ERHIPipeline EVar8;
  ERHIPipeline local_58 [8];
  void *local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  EVar8 = All;
  do {
    EVar3 = ~EVar8 + Graphics & EVar8;
    if ((EVar3 == Graphics) || (lVar5 = 0x78, EVar3 != AsyncCompute)) {
      lVar5 = 0x68;
    }
    if (*(int *)((longlong)&this->_padding_ + lVar5) != 0) {
      EVar4 = FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,EVar3);
      if ((EVar3 == Graphics) || (lVar5 = 0x70, EVar3 != AsyncCompute)) {
        lVar5 = 0x60;
      }
      pvVar7 = *(void **)((longlong)&this->_padding_ + lVar5);
      *(undefined8 *)((longlong)&this->_padding_ + lVar5) = 0;
      uVar1 = *(undefined4 *)((longlong)&this->RHIAllocator + lVar5);
      uVar2 = *(undefined4 *)((longlong)&this->RHIAllocator + lVar5 + 4);
      *(undefined8 *)((longlong)&this->RHIAllocator + lVar5) = 0;
      local_58[0] = EVar3;
      local_50 = pvVar7;
      local_48 = uVar1;
      local_44 = uVar2;
      if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
         (param_1->field_0x64 == '\0')) {
        puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar6;
        *(undefined8 **)&param_1->field_0x30 = puVar6 + 1;
        puVar6[1] = 0;
        *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FValidationTransientResourceAllocator::Flush'::`9'::<lambda_1>_>
                   ::_vftable_;
        *(ERHIPipeline *)(puVar6 + 2) = EVar3;
        puVar6[3] = pvVar7;
        *(undefined4 *)(puVar6 + 4) = uVar1;
        *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
        puVar6[5] = L"TRHILambdaCommand";
        pvVar7 = (void *)0x0;
      }
      else {
        `FValidationTransientResourceAllocator::Flush'::__l9::<lambda_1>::operator()
                  (local_58,param_1);
        pvVar7 = local_50;
      }
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,EVar4);
    }
    EVar8 = EVar8 & ~(~EVar8 + Graphics);
  } while (EVar8 != None);
                    /* WARNING: Could not recover jumptable at 0x000145cdbd1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->RHIAllocator + 0x38))(this->RHIAllocator,param_1,param_2);
  return;
}

// Release @ 145cef540

void __thiscall
FValidationTransientResourceAllocator::Release
          (FValidationTransientResourceAllocator *this,FRHICommandListImmediate *param_1)

{
  (**(code **)((longlong)*this->RHIAllocator + 0x40))();
  this->RHIAllocator = (IRHITransientResourceAllocator *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145cef56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)(this,1);
  return;
}

// SetCreateMode @ 145cf16e0

void __thiscall
FValidationTransientResourceAllocator::SetCreateMode
          (FValidationTransientResourceAllocator *this,ERHITransientResourceCreateMode param_1)

{
  return;
}

// SupportsResourceType @ 145cf2ba0

bool __thiscall
FValidationTransientResourceAllocator::SupportsResourceType
          (FValidationTransientResourceAllocator *this,ERHITransientResourceType param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145cf2ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->RHIAllocator + 8))();
  return (bool)uVar1;
}

