// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ConsumePerInstanceDataFromGameThread @ 1491b76f0

void __thiscall
FNDIRigidMeshCollisionProxy::ConsumePerInstanceDataFromGameThread
          (FNDIRigidMeshCollisionProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderThreadData *this_00;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x41a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
                        *)&this->SystemInstancesToProxyData_RT,
                       (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  if (param_1 == (void *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8896171279237774305>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x41f,"SourceData");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FRenderThreadData::operator=(this_00,param_1);
    FRenderThreadData::~FRenderThreadData(param_1);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1491d5300

int __thiscall
FNDIRigidMeshCollisionProxy::PerInstanceDataPassedToRenderThreadSize
          (FNDIRigidMeshCollisionProxy *this)

{
  return 0xa8;
}

// PreStage @ 1491d8360

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIRigidMeshCollisionProxy::PreStage
          (FNDIRigidMeshCollisionProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRHICommandListBase *this_00;
  FNDIRigidMeshCollisionBuffer *pFVar3;
  FRHIBuffer *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong64 uVar12;
  FRenderThreadData *pFVar13;
  void *pvVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  uVar12 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                     ((FNDIGpuComputePrePostStageContext *)param_1);
  if (*(int *)&(this->SystemInstancesToProxyData_RT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_RT).field_0x34) {
    puVar20 = *(undefined1 **)&(this->SystemInstancesToProxyData_RT).field_0x40;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->SystemInstancesToProxyData_RT).field_0x38;
    }
    iVar8 = *(int *)(puVar20 +
                    ((uVar12 >> 0x20) * 0x17 + uVar12 &
                    (ulonglong)(*(int *)&(this->SystemInstancesToProxyData_RT).field_0x48 - 1)) * 4)
    ;
    if (iVar8 != -1) {
      lVar15 = *(longlong *)&this->SystemInstancesToProxyData_RT;
      do {
        if (*(ulong64 *)((longlong)iVar8 * 0xb8 + lVar15) == uVar12) goto LAB_1491d83f1;
        iVar8 = *(int *)((longlong)iVar8 * 0xb8 + 0xb0 + lVar15);
      } while (iVar8 != -1);
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("SystemInstancesToProxyData_RT.Contains(Context.GetSystemInstanceID())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                     ,0x42b,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1491d83f1:
  uVar12 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                     ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar13 = TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
            ::Find((TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
                    *)&this->SystemInstancesToProxyData_RT,uVar12);
  if (pFVar13 == (FRenderThreadData *)0x0) {
    return;
  }
  if (pFVar13->AssetBuffer == (FNDIRigidMeshCollisionBuffer *)0x0) {
    return;
  }
  if ((**(byte **)&param_1->field_0x20 & 1) == 0) {
    return;
  }
  this_00 = *(FRHICommandListBase **)(*(longlong *)param_1 + 0xc0);
  NDIRigidMeshCollisionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>,1>
            (this_00,&pFVar13->WorldTransform,&pFVar13->AssetBuffer->WorldTransformBuffer);
  NDIRigidMeshCollisionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>,1>
            (this_00,&pFVar13->InverseTransform,&pFVar13->AssetBuffer->InverseTransformBuffer);
  NDIRigidMeshCollisionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>,1>
            (this_00,&pFVar13->ElementExtent,&pFVar13->AssetBuffer->ElementExtentBuffer);
  NDIRigidMeshCollisionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>,1>
            (this_00,&pFVar13->MeshScale,&pFVar13->AssetBuffer->MeshScaleBuffer);
  iVar8 = (pFVar13->PhysicsType).ArrayNum;
  pFVar3 = pFVar13->AssetBuffer;
  if ((iVar8 != 0) &&
     (pFVar4 = (pFVar3->PhysicsTypeBuffer).Buffer.Reference, pFVar4 != (FRHIBuffer *)0x0)) {
    uVar19 = iVar8 * 4;
    pvVar14 = FRHICommandListBase::LockBuffer(this_00,pFVar4,0,uVar19,RLM_WriteOnly);
    memcpy(pvVar14,(pFVar13->PhysicsType).AllocatorInstance.Data,(ulonglong)uVar19);
    FRHICommandListBase::UnlockBuffer(this_00,(pFVar3->PhysicsTypeBuffer).Buffer.Reference);
  }
  iVar8 = (pFVar13->ComponentIdIndex).ArrayNum;
  if (iVar8 == 0) {
    return;
  }
  pFVar4 = (pFVar13->AssetBuffer->DFIndexBuffer).Buffer.Reference;
  if (pFVar4 == (FRHIBuffer *)0x0) {
    return;
  }
  pvVar14 = FRHICommandListBase::LockBuffer(this_00,pFVar4,0,iVar8 * 4,RLM_WriteOnly);
  plVar5 = *(longlong **)(*(longlong *)&param_1->field_0x8 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    uVar19 = (pFVar13->UniqueComponentIds).ArrayNum;
    if (uVar19 != 0) {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if (0 < (int)uVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar19,&local_48,0,(int *)((longlong)&local_40 + 4));
      }
      pFVar18 = (pFVar13->UniqueComponentIds).AllocatorInstance.Data;
      iVar2 = (pFVar13->UniqueComponentIds).ArrayNum;
      pFVar1 = pFVar18 + (longlong)iVar2 * 4;
      while( true ) {
        if ((pFVar13->UniqueComponentIds).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FPrimitiveComponentId,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar18 == pFVar1) break;
        lVar15 = (**(code **)(*plVar5 + 0xd8))(plVar5,*(undefined4 *)pFVar18);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0x118) < 1)) {
          uVar17 = 0xffffffff;
        }
        else {
          puVar16 = (undefined4 *)(lVar15 + 0x108);
          if (*(undefined4 **)(lVar15 + 0x110) != (undefined4 *)0x0) {
            puVar16 = *(undefined4 **)(lVar15 + 0x110);
          }
          uVar17 = *puVar16;
        }
        iVar9 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_48,(int *)((longlong)&local_40 + 4));
        }
        pFVar18 = pFVar18 + 4;
        local_40 = CONCAT44(local_40._4_4_,iVar9 + 1);
        *(undefined4 *)(local_48.Data + (longlong)iVar9 * 4) = uVar17;
      }
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = 0;
      if (0 < iVar8) {
        lVar15 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar19 < (pFVar13->ComponentIdIndex).ArrayNum) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)((pFVar13->ComponentIdIndex).AllocatorInstance.Data + lVar15 * 4);
          if (((int)uVar10 < 0) || ((int)local_40 <= (int)uVar10)) {
            uVar17 = 0xffffffff;
          }
          else {
            uVar11 = 0;
            if ((int)uVar10 < (int)local_40) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar17 = *(undefined4 *)(local_48.Data + (longlong)(int)uVar10 * 4);
          }
          uVar10 = 0;
          if ((int)uVar19 < iVar8) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined4 *)((longlong)pvVar14 + lVar15 * 4) = uVar17;
          uVar19 = uVar19 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar8);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      goto LAB_1491d87b2;
    }
  }
  memset(pvVar14,0xff,(ulonglong)(uint)(iVar8 * 4));
LAB_1491d87b2:
  FRHICommandListBase::UnlockBuffer(this_00,(pFVar13->AssetBuffer->DFIndexBuffer).Buffer.Reference);
  return;
}

