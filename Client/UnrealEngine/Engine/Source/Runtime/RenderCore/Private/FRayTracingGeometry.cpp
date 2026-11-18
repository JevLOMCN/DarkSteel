// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 21

// BoostBuildPriority @ 145da3470

void __thiscall FRayTracingGeometry::BoostBuildPriority(FRayTracingGeometry *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_28 [2];
  
  bVar2 = HasPendingBuildRequest(this);
  if (!bVar2) {
    FDebugName::ToString(&(this->Initializer).DebugName,local_28);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasPendingBuildRequest()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x139,L"RayTracingGeometry (%s) must have pending build request");
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145da3512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*GRayTracingGeometryManager + 0x18))
            (GRayTracingGeometryManager,this->RayTracingBuildRequestIndex,param_1);
  return;
}

// CreateRayTracingGeometry @ 145daa7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometry::CreateRayTracingGeometry
          (FRayTracingGeometry *this,FRHICommandListBase *param_1,
          ERTAccelerationStructureBuildPriority param_2)

{
  TRefCountPtr<FRHIRayTracingGeometry> *pTVar1;
  FScriptContainerElement *pFVar2;
  ERayTracingGeometryInitializerType EVar3;
  int iVar4;
  FResourceArrayUploadInterface *pFVar5;
  FRHIRayTracingGeometry *pFVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  TRefCountPtr<FRHIRayTracingGeometry> local_48;
  FString local_40;
  
  (**(code **)(this->_padding_ + 0x10))();
  if ((int)(this->RawData)._padding_ != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), pTVar8 = CVarDebugForceRuntimeBLAS.Ref, ::_TSS0 == -1)) {
      bVar9 = IsInParallelGameThread();
      if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
        lVar11 = 0;
      }
      else {
        lVar11 = 4;
      }
      bDebugForceRuntimeBLAS = *(int *)((longlong)pTVar8->ShadowedValue + lVar11) != 0;
      _Init_thread_footer(&::_TSS0);
    }
    if ((bDebugForceRuntimeBLAS != false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!RayTracing::ShouldForceRuntimeBLAS()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                           ,0x97,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((this->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Initializer.OfflineData == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                           ,0x98,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (this->Initializer).OfflineData = (FResourceArrayUploadInterface *)&this->RawData;
  }
  iVar4 = (this->Initializer).Segments.ArrayNum;
  pFVar12 = (this->Initializer).Segments.AllocatorInstance.Data;
  pFVar2 = pFVar12 + (longlong)iVar4 * 0x28;
  while( true ) {
    if ((this->Initializer).Segments.ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRayTracingGeometrySegment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar2) break;
    if (*(longlong *)pFVar12 == 0) {
      if ((this->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0) {
        FDebugName::ToString(&(this->Initializer).DebugName,&local_40);
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Initializer.OfflineData == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                           ,0x29,L"RayTracingGeometry (%s) should not have OfflineData");
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
LAB_145daaa4b:
                    /* WARNING: Could not recover jumptable at 0x000145daaa73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*GRayTracingGeometryManager + 0x58))
                (GRayTracingGeometryManager,this->RayTracingGeometryHandle);
      return;
    }
    pFVar12 = pFVar12 + 0x28;
  }
  if (iVar4 < 1) goto LAB_145daaa4b;
  EVar3 = (this->Initializer).Type;
  if (EVar3 != StreamingDestination) {
    this->GeometryState = this->GeometryState | Valid;
  }
  pFVar5 = (this->Initializer).OfflineData;
  bVar9 = IsRayTracingEnabled();
  if (bVar9) {
    (**(code **)(GDynamicRHI->_padding_ + 0x490))(GDynamicRHI,&local_48,param_1,&this->Initializer);
    pTVar1 = &this->RayTracingGeometryRHI;
    if (pTVar1 == &local_48) {
LAB_145daa9c1:
      if (local_48.Reference != (FRHIRayTracingGeometry *)0x0) {
        FRHIResource::Release((FRHIResource *)local_48.Reference);
      }
    }
    else {
      pFVar6 = pTVar1->Reference;
      pTVar1->Reference = local_48.Reference;
      local_48.Reference = (FRHIRayTracingGeometry *)0x0;
      if (pFVar6 != (FRHIRayTracingGeometry *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar6);
        goto LAB_145daa9c1;
      }
    }
    (this->Initializer).OfflineData = (FResourceArrayUploadInterface *)0x0;
  }
  else {
    this->GeometryState = this->GeometryState | Evicted;
  }
  if (pFVar5 == (FResourceArrayUploadInterface *)0x0) {
    if (param_2 == Skip) {
      if (EVar3 != StreamingDestination) {
        this->GeometryState = this->GeometryState | RequiresBuild;
      }
      goto LAB_145daaa4b;
    }
    if ((this->RayTracingGeometryRHI).Reference != (FRHIRayTracingGeometry *)0x0)
    goto LAB_145daaa2d;
  }
  else {
    pFVar6 = (this->RayTracingGeometryRHI).Reference;
    if (((pFVar6 != (FRHIRayTracingGeometry *)0x0) &&
        (cVar10 = (**(code **)(pFVar6->_padding_ + 0x18))(), cVar10 != '\0')) &&
       ((this->Initializer).bTemplate == false)) {
LAB_145daaa2d:
      (**(code **)((longlong)*GRayTracingGeometryManager + 8))
                (GRayTracingGeometryManager,this,param_2,0);
    }
  }
  this->GeometryState = this->GeometryState & ~RequiresBuild;
  goto LAB_145daaa4b;
}

// Evict @ 145dacb50

void __thiscall FRayTracingGeometry::Evict(FRayTracingGeometry *this)

{
  FRHIRayTracingGeometry *this_00;
  code *pcVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  if (((this->GeometryState & Evicted) != Invalid) ||
     ((this->RayTracingGeometryRHI).Reference == (FRHIRayTracingGeometry *)0x0)) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_28);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAllFlags(GeometryState, EGeometryStateFlags::Evicted) && RayTracingGeometryRHI != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x80,L"RayTracingGeometry (%s) must not have been evicted already.");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GeometryState & StreamedIn) != Invalid) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAllFlags(GeometryState, EGeometryStateFlags::StreamedIn)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x82,
                       L"RayTracingGeometry (%s) must be streamed out before it can be evicted.");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = HasPendingBuildRequest(this);
  if (bVar2) {
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x10))
              (GRayTracingGeometryManager,this->RayTracingBuildRequestIndex);
    this->RayTracingBuildRequestIndex = -1;
  }
  this_00 = (this->RayTracingGeometryRHI).Reference;
  if (this_00 != (FRHIRayTracingGeometry *)0x0) {
    (this->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->GeometryState = this->GeometryState | Evicted;
  (**(code **)((longlong)*GRayTracingGeometryManager + 0x58))
            (GRayTracingGeometryManager,this->RayTracingGeometryHandle);
  if (this->GroupHandle != -1) {
                    /* WARNING: Could not recover jumptable at 0x000145daccc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x50))();
    return;
  }
  return;
}

// HasPendingBuildRequest @ 145dbc970

bool __thiscall FRayTracingGeometry::HasPendingBuildRequest(FRayTracingGeometry *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRayTracingGeometry *local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->RayTracingBuildRequestIndex == -1) {
    return false;
  }
  if ((this->GeometryState & Valid) != Invalid) {
    if ((this->Initializer).TotalPrimitiveCount == 0) {
      FDebugName::ToString(&(this->Initializer).DebugName,&local_38);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Initializer.TotalPrimitiveCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                         ,0xdb,L"Valid RayTracingGeometry (%s) must have non-zero primitive count.")
      ;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((this->RayTracingGeometryRHI).Reference == (FRHIRayTracingGeometry *)0x0) &&
       ((this->GeometryState & Evicted) == Invalid)) {
      FDebugName::ToString(&(this->Initializer).DebugName,&local_28);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingGeometryRHI != nullptr || EnumHasAllFlags(GeometryState, EGeometryStateFlags::Evicted)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                         ,0xdc,
                         L"Valid RayTracingGeometry (%s) must have valid RHI object or evicted flag set"
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((this->GeometryState & Evicted) == Invalid) {
      return true;
    }
    if ((this->RayTracingGeometryRHI).Reference != (FRHIRayTracingGeometry *)0x0) {
      FDebugName::ToString(&(this->Initializer).DebugName,&local_18);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingGeometryRHI == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                         ,0xeb,L"Evicted RayTracingGeometry (%s) cannot have valid RHI object.");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  local_res8 = this;
  `FRayTracingGeometry::HasPendingBuildRequest'::__l5::<lambda_1>::operator()(&local_res8);
  return true;
}

// HasValidInitializer @ 145dbcb40

bool __thiscall FRayTracingGeometry::HasValidInitializer(FRayTracingGeometry *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  iVar2 = (this->Initializer).Segments.ArrayNum;
  pFVar6 = (this->Initializer).Segments.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Initializer).Segments.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRayTracingGeometrySegment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) {
      return 0 < iVar2;
    }
    if (*(longlong *)pFVar6 == 0) break;
    pFVar6 = pFVar6 + 0x28;
  }
  if ((this->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Initializer.OfflineData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x29,L"RayTracingGeometry (%s) should not have OfflineData");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// InitRHI @ 145dbd0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRayTracingGeometry::InitRHI(FRayTracingGeometry *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  ERTAccelerationStructureBuildPriority EVar2;
  
  bVar1 = IsRayTracingAllowed();
  if (bVar1) {
    if (((this->Initializer).Type != Rendering) ||
       (EVar2 = Normal, (this->Initializer).bTemplate != false)) {
      EVar2 = Skip;
    }
    CreateRayTracingGeometry(this,param_1,EVar2);
  }
  return;
}

// InitRHIForStreaming @ 145dbd100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometry::InitRHIForStreaming
          (FRayTracingGeometry *this,FRHIRayTracingGeometry *param_1,
          FRHIResourceReplaceBatcher *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (FRHIRayTracingGeometry *)0x0) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntermediateGeometry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x41,
                       L"IntermediateGeometry should be valid when streaming-in ray tracing geometry.\nThis will result in FRayTracingGeometry (%s) not being correctly initialized.\n"
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->RayTracingGeometryRHI).Reference == (FRHIRayTracingGeometry *)0x0) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_18);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RayTracingGeometryRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x43,
                       L"RayTracingGeometryRHI (%s) must be valid when InitRHIForStreaming is called.\n"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->Initializer).Type = Rendering;
  iVar5 = (param_2->Infos).ArrayNum;
  piVar1 = &(param_2->Infos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(param_2->Infos).AllocatorInstance,piVar1);
  }
  (param_2->Infos).ArrayNum = iVar5 + 1;
  pFVar2 = (param_2->Infos).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(FRHIRayTracingGeometry **)pFVar2 = (this->RayTracingGeometryRHI).Reference;
  *(FRHIRayTracingGeometry **)(pFVar2 + 8) = param_1;
  pFVar2[0x10] = (FScriptContainerElement)0x1;
  this->GeometryState = this->GeometryState | (StreamedIn|Valid);
                    /* WARNING: Could not recover jumptable at 0x000145dbd265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*GRayTracingGeometryManager + 0x58))
            (GRayTracingGeometryManager,this->RayTracingGeometryHandle);
  return;
}

// InitResource @ 145dbd6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometry::InitResource(FRayTracingGeometry *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  int iVar2;
  FRayTracingGeometry *local_res8;
  
  bVar1 = IsRayTracingAllowed();
  if (!bVar1) {
    local_res8 = this;
    `FRayTracingGeometry::InitResource'::__l2::<lambda_1>::operator()(&local_res8);
  }
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  if (this->RayTracingGeometryHandle == -1) {
    iVar2 = (**(code **)((longlong)*GRayTracingGeometryManager + 0x30))
                      (GRayTracingGeometryManager,this);
    this->RayTracingGeometryHandle = iVar2;
  }
  return;
}

// IsEvicted @ 145dc0ec0

bool __thiscall FRayTracingGeometry::IsEvicted(FRayTracingGeometry *this)

{
  EGeometryStateFlags EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString local_18;
  
  EVar1 = this->GeometryState;
  if (((EVar1 >> 3 & 1) != 0) &&
     ((this->RayTracingGeometryRHI).Reference != (FRHIRayTracingGeometry *)0x0)) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_18);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RayTracingGeometryRHI == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0xeb,L"Evicted RayTracingGeometry (%s) cannot have valid RHI object.");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (EVar1 >> 3 & 1) != 0;
}

// IsValid @ 145dc16e0

bool __thiscall FRayTracingGeometry::IsValid(FRayTracingGeometry *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  FString local_18;
  
  bVar4 = (this->GeometryState >> 1 & 1) != 0;
  if ((this->GeometryState >> 1 & 1) == 0) {
    return bVar4;
  }
  if ((this->Initializer).TotalPrimitiveCount == 0) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_28);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Initializer.TotalPrimitiveCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0xdb,L"Valid RayTracingGeometry (%s) must have non-zero primitive count.");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (((this->RayTracingGeometryRHI).Reference == (FRHIRayTracingGeometry *)0x0) &&
     ((this->GeometryState & Evicted) == Invalid)) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RayTracingGeometryRHI != nullptr || EnumHasAllFlags(GeometryState, EGeometryStateFlags::Evicted)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0xdc,
                       L"Valid RayTracingGeometry (%s) must have valid RHI object or evicted flag set"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return bVar4;
}

// MakeResident @ 145dc1ca0

void __thiscall
FRayTracingGeometry::MakeResident(FRayTracingGeometry *this,FRHICommandList *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRayTracingGeometry *local_res8;
  FString local_28;
  FString local_18;
  
  if (((this->GeometryState & Evicted) == Invalid) ||
     ((this->RayTracingGeometryRHI).Reference != (FRHIRayTracingGeometry *)0x0)) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_28);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAllFlags(GeometryState, EGeometryStateFlags::Evicted) && RayTracingGeometryRHI == nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x6b,
                       L"Evicted FRayTracingGeometry (%s) should have evicted flag set and no RHI object."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GeometryState & StreamedIn) != Invalid) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAllFlags(GeometryState, EGeometryStateFlags::StreamedIn)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x6d,
                       L"Evicted FRayTracingGeometry (%s) shouldn\'t have StreamedIn flag set.");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->DynamicGeometrySharedBufferGenerationID == -1) ||
     (local_res8 = this,
     bVar2 = `FRayTracingGeometry::MakeResident'::__l21::<lambda_1>::operator()(&local_res8), bVar2)
     ) {
    this->GeometryState = this->GeometryState & ~Evicted;
    (**(code **)(this->_padding_ + 8))(this,param_1);
  }
  return;
}

// ReleaseRHI @ 145dc7150

void __thiscall FRayTracingGeometry::ReleaseRHI(FRayTracingGeometry *this)

{
  FRHIRayTracingGeometry *this_00;
  bool bVar1;
  
  bVar1 = HasPendingBuildRequest(this);
  if (bVar1) {
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x10))
              (GRayTracingGeometryManager,this->RayTracingBuildRequestIndex);
    this->RayTracingBuildRequestIndex = -1;
  }
  this_00 = (this->RayTracingGeometryRHI).Reference;
  if (this_00 != (FRHIRayTracingGeometry *)0x0) {
    (this->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->GeometryState = Invalid;
                    /* WARNING: Could not recover jumptable at 0x000145dc71ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*GRayTracingGeometryManager + 0x58))
            (GRayTracingGeometryManager,this->RayTracingGeometryHandle);
  return;
}

// ReleaseRHIForStreaming @ 145dc71d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometry::ReleaseRHIForStreaming
          (FRayTracingGeometry *this,FRHIResourceReplaceBatcher *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString local_18;
  
  bVar4 = HasPendingBuildRequest(this);
  if (bVar4) {
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x10))
              (GRayTracingGeometryManager,this->RayTracingBuildRequestIndex);
    this->RayTracingBuildRequestIndex = -1;
  }
  if ((this->RayTracingGeometryRHI).Reference == (FRHIRayTracingGeometry *)0x0) {
    FDebugName::ToString(&(this->Initializer).DebugName,&local_18);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RayTracingGeometryRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RayTracingGeometry.cpp"
                       ,0x53,
                       L"RayTracingGeometryRHI (%s) must be valid when ReleaseRHIForStreaming is called.\n"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->GeometryState = this->GeometryState & ~(StreamedIn|Valid);
  piVar1 = &(param_1->Infos).ArrayMax;
  iVar5 = (param_1->Infos).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(param_1->Infos).AllocatorInstance,piVar1);
  }
  (param_1->Infos).ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(FRHIRayTracingGeometry **)pFVar2 = (this->RayTracingGeometryRHI).Reference;
  *(undefined8 *)(pFVar2 + 8) = 0;
  pFVar2[0x10] = (FScriptContainerElement)0x1;
  iVar5 = this->RayTracingGeometryHandle;
  (this->Initializer).Type = StreamingDestination;
                    /* WARNING: Could not recover jumptable at 0x000145dc72e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*GRayTracingGeometryManager + 0x58))(GRayTracingGeometryManager,iVar5);
  return;
}

// ReleaseResource @ 145dc7300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall FRayTracingGeometry::ReleaseResource(FRayTracingGeometry *this)

{
  bool bVar1;
  undefined1 auStack_b8 [32];
  FRayTracingGeometry *local_98 [2];
  FRayTracingGeometryInitializer local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar1 = IsRayTracingAllowed();
  if ((!bVar1) && ((int)this->_padding_ != -1)) {
    local_98[0] = this;
    `FRayTracingGeometry::ReleaseResource'::__l2::<lambda_1>::operator()(local_98);
  }
  if (this->RayTracingGeometryHandle != -1) {
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x38))();
    this->RayTracingGeometryHandle = -1;
  }
  FRenderResource::ReleaseResource((FRenderResource *)this);
  local_88.bFastBuild = false;
  local_88.bAllowUpdate = false;
  local_88.bAllowCompaction = true;
  local_88.bTemplate = false;
  local_88.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_88.IndexBufferOffset = 0;
  local_88.GeometryType = RTGT_Triangles;
  local_88.TotalPrimitiveCount = 0;
  local_88.Type = Rendering;
  local_88.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Segments.ArrayNum = 0;
  local_88.Segments.ArrayMax = 0;
  local_88.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_88.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_88.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_88.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_88.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_88.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_88.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_88.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_88.DebugName);
  local_88.OwnerName.ComparisonIndex.Value = 0;
  local_88.OwnerName.Number = 0;
  FRayTracingGeometryInitializer::operator=(&this->Initializer,&local_88);
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_88.Segments.AllocatorInstance.Data,
             local_88.Segments.ArrayNum);
  if ((FRayTracingGeometrySegment *)local_88.Segments.AllocatorInstance.Data !=
      (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_88.Segments.AllocatorInstance.Data);
  }
  if (local_88.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_88.IndexBuffer.Reference);
  }
  return;
}

// RemoveBuildRequest @ 145dc7980

void __thiscall FRayTracingGeometry::RemoveBuildRequest(FRayTracingGeometry *this)

{
  bool bVar1;
  
  bVar1 = HasPendingBuildRequest(this);
  if (bVar1) {
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x10))
              (GRayTracingGeometryManager,this->RayTracingBuildRequestIndex);
    this->RayTracingBuildRequestIndex = -1;
  }
  return;
}

// RequestBuildIfNeeded @ 145dc79c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingGeometry::RequestBuildIfNeeded
          (FRayTracingGeometry *this,FRHICommandListBase *param_1,
          ERTAccelerationStructureBuildPriority param_2)

{
  if ((this->GeometryState & RequiresBuild) != Invalid) {
    (**(code **)((longlong)*GRayTracingGeometryManager + 8))
              (GRayTracingGeometryManager,this,param_2,0);
    this->GeometryState = this->GeometryState & ~RequiresBuild;
  }
  return;
}

// SetInitializer @ 145dcc220

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRayTracingGeometry::SetInitializer
          (FRayTracingGeometry *this,FRayTracingGeometryInitializer *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FRHIBuffer *this_00;
  undefined8 uVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  longlong lVar6;
  
  FRayTracingGeometryInitializer::operator=(&this->Initializer,param_1);
  pTVar4 = CVarDebugForceRuntimeBLAS.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      lVar6 = 4;
      goto LAB_145dcc260;
    }
  }
  lVar6 = 0;
LAB_145dcc260:
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar6) == 0) {
    uVar3 = *(undefined8 *)((this->RawDataHeader).Reserved + 2);
    uVar1 = *(undefined8 *)((this->RawDataHeader).Reserved + 4);
    *(undefined8 *)(this->Initializer).OfflineDataHeader.Reserved =
         *(undefined8 *)(this->RawDataHeader).Reserved;
    *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 2) = uVar3;
    *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 4) = uVar1;
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)(param_1->Segments).AllocatorInstance.Data,
             (param_1->Segments).ArrayNum);
  pFVar2 = (param_1->Segments).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this_00 = (param_1->IndexBuffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// operator() @ 1504dc650

bool __thiscall `FRayTracingGeometry::InitResource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6071562796955336432>);
  if (bVar2) {
    FDebugName::ToString((FDebugName *)(*(longlong *)this + 200),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6071562796955336432>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504dc6be;
    }
  }
  bVar2 = false;
LAB_1504dc6be:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504dc730

bool __thiscall `FRayTracingGeometry::ReleaseResource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6071562796955336420>);
  if (bVar2) {
    FDebugName::ToString((FDebugName *)(*(longlong *)this + 200),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6071562796955336420>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504dc79e;
    }
  }
  bVar2 = false;
LAB_1504dc79e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504dc9f0

bool __thiscall
`FRayTracingGeometry::HasPendingBuildRequest'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6071562796955336399>);
  if (bVar2) {
    FDebugName::ToString((FDebugName *)(*(longlong *)this + 200),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6071562796955336399>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504dca5e;
    }
  }
  bVar2 = false;
LAB_1504dca5e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504dca90

bool __thiscall `FRayTracingGeometry::MakeResident'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6071562796955336591>);
  if (bVar2) {
    FDebugName::ToString((FDebugName *)(*(longlong *)this + 200),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6071562796955336591>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504dcafe;
    }
  }
  bVar2 = false;
LAB_1504dcafe:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

