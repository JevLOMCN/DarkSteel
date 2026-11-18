// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 5

// ConsumePerInstanceDataFromGameThread @ 14e98bf00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNDIGeometryCollectionProxy::ConsumePerInstanceDataFromGameThread
          (FNDIGeometryCollectionProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FNDIGeometryCollectionData *pFVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceGeometryCollection.cpp"
                       ,0x159,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
                       *)&this->SystemInstancesToProxyData,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  pFVar4->AssetBuffer = *(FNDIGeometryCollectionBuffer **)((longlong)param_1 + 0x88);
  pFVar4->AssetArrays = *(FNDIGeometryCollectionArrays **)((longlong)param_1 + 0x90);
  pFVar4->TickingGroup = *(ETickingGroup *)param_1;
  dVar2 = *(double *)((longlong)param_1 + 0x18);
  (pFVar4->RootTransform).Rotation.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x10);
  (pFVar4->RootTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)((longlong)param_1 + 0x28);
  (pFVar4->RootTransform).Rotation.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x20);
  (pFVar4->RootTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)((longlong)param_1 + 0x38);
  (pFVar4->RootTransform).Translation.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x30);
  (pFVar4->RootTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)((longlong)param_1 + 0x48);
  (pFVar4->RootTransform).Translation.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x40);
  (pFVar4->RootTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)((longlong)param_1 + 0x58);
  (pFVar4->RootTransform).Scale3D.XY.m128d_f64[0] = *(double *)((longlong)param_1 + 0x50);
  (pFVar4->RootTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)((longlong)param_1 + 0x68);
  (pFVar4->RootTransform).Scale3D.ZW.m128d_f64[0] = *(double *)((longlong)param_1 + 0x60);
  (pFVar4->RootTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  *(undefined8 *)&(pFVar4->BoundsOrigin).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x70);
  (pFVar4->BoundsOrigin).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x78);
  *(undefined8 *)&(pFVar4->BoundsExtent).field0_0x0 = *(undefined8 *)((longlong)param_1 + 0x7c);
  (pFVar4->BoundsExtent).field0_0x0._s_0.Z = *(float *)((longlong)param_1 + 0x84);
  return;
}

// DestroyPerInstanceData @ 14e9917f0

void __thiscall
FNDIGeometryCollectionProxy::DestroyPerInstanceData
          (FNDIGeometryCollectionProxy *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceGeometryCollection.cpp"
                       ,0x172,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
            *)&this->SystemInstancesToProxyData,*param_1);
  return;
}

// InitializePerInstanceData @ 14e9a20a0

void __thiscall
FNDIGeometryCollectionProxy::InitializePerInstanceData
          (FNDIGeometryCollectionProxy *this,ulong64 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulong64 *local_res10;
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceGeometryCollection.cpp"
                         ,0x16a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *param_1;
  if (*(int *)&(this->SystemInstancesToProxyData).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SystemInstancesToProxyData).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SystemInstancesToProxyData).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + ((ulonglong)
                               (*(int *)&(this->SystemInstancesToProxyData).field_0x48 - 1) &
                              (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0xd0 + *(longlong *)&this->SystemInstancesToProxyData)
            == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SystemInstancesToProxyData.Contains(SystemInstance)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceGeometryCollection.cpp"
                             ,0x16b,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0xd0 + 0xc0 +
                        *(longlong *)&this->SystemInstancesToProxyData);
      } while (iVar4 != -1);
    }
  }
  local_res10 = param_1;
  TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData,&local_res8,(bool *)&local_res10);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14e9a2510

int __thiscall
FNDIGeometryCollectionProxy::PerInstanceDataPassedToRenderThreadSize
          (FNDIGeometryCollectionProxy *this)

{
  return 0xb0;
}

// PreStage @ 14e9a3470

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
FNDIGeometryCollectionProxy::PreStage
          (FNDIGeometryCollectionProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  longlong lVar4;
  FNDIGeometryCollectionBuffer *pFVar5;
  FRDGBuilder *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulong64 uVar9;
  FNDIGeometryCollectionData *pFVar10;
  FRDGBuffer *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  undefined4 uStack_3c;
  FRDGBufferDesc local_30;
  
  uVar9 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  if (*(int *)&(this->SystemInstancesToProxyData).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SystemInstancesToProxyData).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SystemInstancesToProxyData).field_0x38;
    }
    iVar8 = *(int *)(puVar13 +
                    ((uVar9 >> 0x20) * 0x17 + uVar9 &
                    (ulonglong)(*(int *)&(this->SystemInstancesToProxyData).field_0x48 - 1)) * 4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&this->SystemInstancesToProxyData;
      do {
        if (*(ulong64 *)((longlong)iVar8 * 0xd0 + lVar4) == uVar9) goto LAB_14e9a3501;
        iVar8 = *(int *)((longlong)iVar8 * 0xd0 + 0xc0 + lVar4);
      } while (iVar8 != -1);
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("SystemInstancesToProxyData.Contains(Context.GetSystemInstanceID())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceGeometryCollection.cpp"
                     ,0x179,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14e9a3501:
  uVar9 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar10 = TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
            ::Find((TMapBase<unsigned___int64,FNDIGeometryCollectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>_>
                    *)&this->SystemInstancesToProxyData,uVar9);
  if (((pFVar10 != (FNDIGeometryCollectionData *)0x0) &&
      (pFVar10->AssetBuffer != (FNDIGeometryCollectionBuffer *)0x0)) &&
     ((**(byte **)&param_1->field_0x20 & 1) != 0)) {
    bVar7 = IsInRenderingThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    NDIGeometryCollectionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>_>
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               &pFVar10->AssetArrays->WorldTransformBuffer,
               &pFVar10->AssetBuffer->WorldTransformBuffer);
    NDIGeometryCollectionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>_>
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               &pFVar10->AssetArrays->PrevWorldTransformBuffer,
               &pFVar10->AssetBuffer->PrevWorldTransformBuffer);
    NDIGeometryCollectionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>_>
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               &pFVar10->AssetArrays->WorldInverseTransformBuffer,
               &pFVar10->AssetBuffer->WorldInverseTransformBuffer);
    NDIGeometryCollectionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>_>
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               &pFVar10->AssetArrays->PrevWorldInverseTransformBuffer,
               &pFVar10->AssetBuffer->PrevWorldInverseTransformBuffer);
    NDIGeometryCollectionLocal::UpdateInternalBuffer<UE::Math::TVector4<float>_>
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               &pFVar10->AssetArrays->BoundsBuffer,&pFVar10->AssetBuffer->BoundsBuffer);
    pFVar5 = pFVar10->AssetBuffer;
    this_00 = *(FRDGBuilder **)param_1;
    pTVar2 = &pFVar5->DataToUpload;
    piVar1 = &(pFVar5->DataToUpload).ArrayNum;
    if (((pFVar5->DataToUpload).ArrayNum == 0) &&
       ((pFVar5->ComponentRestTransformBuffer).Reference == (FRDGPooledBuffer *)0x0)) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0xc,&pTVar2->AllocatorInstance,piVar1,&(pFVar5->DataToUpload).ArrayMax)
      ;
      pFVar12 = (pTVar2->AllocatorInstance).Data + iVar8;
      *(undefined8 *)pFVar12 = 0;
      *(undefined4 *)(pFVar12 + 8) = 0;
    }
    uVar3 = *piVar1;
    if (uVar3 != 0) {
      local_30._0_8_ = CONCAT44(uVar3 + 0xf >> 2,4) & 0x3ffffffcffffffff;
      local_30._12_4_ = uStack_3c;
      local_30.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
      local_30.Metadata = (FShaderParametersMetadata *)0x0;
      ResizeBufferIfNeeded
                (this_00,&pFVar10->AssetBuffer->ComponentRestTransformBuffer,&local_30,
                 L"NiagaraGeometryCollection");
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      pFVar11 = FRDGBuilder::RegisterExternalBuffer
                          (this_00,&pFVar10->AssetBuffer->ComponentRestTransformBuffer,None);
      FRDGBuilder::QueueBufferUpload(this_00,pFVar11,pFVar12,(ulonglong)uVar3,None);
      *piVar1 = 0;
      if ((pFVar5->DataToUpload).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&pTVar2->AllocatorInstance,0,&(pFVar5->DataToUpload).ArrayMax);
      }
    }
  }
  return;
}

