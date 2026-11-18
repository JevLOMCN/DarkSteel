// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ConsumePerInstanceDataFromGameThread @ 148eaec90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIPhysicsAssetProxy::ConsumePerInstanceDataFromGameThread
          (FNDIPhysicsAssetProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FNDIPhysicsAssetData *pFVar4;
  
  pFVar4 = TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
                       *)&this->SystemInstancesToProxyData,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  if (pFVar4 == (FNDIPhysicsAssetData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2263117469122035195>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                       ,0x205,"TargetData");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogPhysicsAsset._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsAsset);
      return;
    }
  }
  else {
    pFVar4->AssetBuffer = *(FNDIPhysicsAssetBuffer **)param_1;
    dVar2 = *(double *)((longlong)param_1 + 0x10);
    (pFVar4->BoxOrigin).field0_0x0._s_0.X = *(double *)((longlong)param_1 + 8);
    (pFVar4->BoxOrigin).field0_0x0._s_0.Y = dVar2;
    (pFVar4->BoxOrigin).field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x18);
    dVar2 = *(double *)((longlong)param_1 + 0x28);
    (pFVar4->BoxExtent).field0_0x0._s_0.X = *(double *)((longlong)param_1 + 0x20);
    (pFVar4->BoxExtent).field0_0x0._s_0.Y = dVar2;
    (pFVar4->BoxExtent).field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x30);
    memcpy(&pFVar4->AssetArrays,(void *)((longlong)param_1 + 0x40),0xe8e0);
    pFVar4->TickingGroup = *(ETickingGroup *)((longlong)param_1 + 0xe920);
  }
  return;
}

// DestroyPerInstanceData @ 148eb41b0

void __thiscall
FNDIPhysicsAssetProxy::DestroyPerInstanceData(FNDIPhysicsAssetProxy *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                       ,0x21f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<unsigned___int64,FNDIPhysicsAssetData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNDIPhysicsAssetData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>,FDefaultSetAllocator>
            *)&this->SystemInstancesToProxyData,*param_1);
  return;
}

// InitializePerInstanceData @ 148ec8ad0

void __thiscall
FNDIPhysicsAssetProxy::InitializePerInstanceData(FNDIPhysicsAssetProxy *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulong64 *local_res10;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                       ,0x217,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10 = param_1;
  TSet<TTuple<unsigned___int64,FNDIPhysicsAssetData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIPhysicsAssetData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData,&local_res8,(bool *)&local_res10);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148ec8ec0

int __thiscall
FNDIPhysicsAssetProxy::PerInstanceDataPassedToRenderThreadSize(FNDIPhysicsAssetProxy *this)

{
  return 0xe930;
}

// PreStage @ 148ecb9b0

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
FNDIPhysicsAssetProxy::PreStage(FNDIPhysicsAssetProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  FRHICommandListBase *this_00;
  FNDIPhysicsAssetBuffer *pFVar1;
  FRHIBuffer *pFVar2;
  undefined8 uVar3;
  TStaticArray<unsigned_int,100,4294967295> *pTVar4;
  ulong64 uVar5;
  FNDIPhysicsAssetData *pFVar6;
  void *_Dst;
  undefined8 *puVar7;
  undefined8 *puVar8;
  TStaticArray<unsigned_int,100,4294967295> *pTVar9;
  longlong lVar10;
  
  uVar5 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar6 = TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
                   *)&this->SystemInstancesToProxyData,uVar5);
  if (((pFVar6 != (FNDIPhysicsAssetData *)0x0) &&
      (pFVar6->AssetBuffer != (FNDIPhysicsAssetBuffer *)0x0)) &&
     ((**(byte **)&param_1->field_0x20 & 1) != 0)) {
    this_00 = *(FRHICommandListBase **)(*(longlong *)param_1 + 0xc0);
    NDIPhysicsAssetLocal::UpdateInternalBuffer<UE::Math::TVector4<float>,1,300,3>
              (this_00,&(pFVar6->AssetArrays).WorldTransform,
               &pFVar6->AssetBuffer->WorldTransformBuffer);
    NDIPhysicsAssetLocal::UpdateInternalBuffer<UE::Math::TVector4<float>,1,300,3>
              (this_00,&(pFVar6->AssetArrays).InverseTransform,
               &pFVar6->AssetBuffer->InverseTransformBuffer);
    pFVar1 = pFVar6->AssetBuffer;
    pFVar2 = (pFVar1->ElementExtentBuffer).Buffer.Reference;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      _Dst = FRHICommandListBase::LockBuffer(this_00,pFVar2,0,0x640,RLM_WriteOnly);
      memcpy(_Dst,&(pFVar6->AssetArrays).ElementExtent,0x640);
      FRHICommandListBase::UnlockBuffer(this_00,(pFVar1->ElementExtentBuffer).Buffer.Reference);
    }
    pFVar1 = pFVar6->AssetBuffer;
    pFVar2 = (pFVar1->PhysicsTypeBuffer).Buffer.Reference;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      puVar7 = FRHICommandListBase::LockBuffer(this_00,pFVar2,0,400,RLM_WriteOnly);
      lVar10 = 3;
      pTVar4 = &(pFVar6->AssetArrays).PhysicsType;
      do {
        pTVar9 = pTVar4;
        puVar8 = puVar7;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 2);
        *puVar8 = *(undefined8 *)pTVar9->Elements;
        puVar8[1] = uVar3;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 6);
        puVar8[2] = *(undefined8 *)(pTVar9->Elements + 4);
        puVar8[3] = uVar3;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 10);
        puVar8[4] = *(undefined8 *)(pTVar9->Elements + 8);
        puVar8[5] = uVar3;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 0xe);
        puVar8[6] = *(undefined8 *)(pTVar9->Elements + 0xc);
        puVar8[7] = uVar3;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 0x12);
        puVar8[8] = *(undefined8 *)(pTVar9->Elements + 0x10);
        puVar8[9] = uVar3;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 0x16);
        puVar8[10] = *(undefined8 *)(pTVar9->Elements + 0x14);
        puVar8[0xb] = uVar3;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 0x1a);
        puVar8[0xc] = *(undefined8 *)(pTVar9->Elements + 0x18);
        puVar8[0xd] = uVar3;
        uVar3 = *(undefined8 *)(pTVar9->Elements + 0x1e);
        puVar8[0xe] = *(undefined8 *)(pTVar9->Elements + 0x1c);
        puVar8[0xf] = uVar3;
        lVar10 = lVar10 + -1;
        puVar7 = puVar8 + 0x10;
        pTVar4 = (TStaticArray<unsigned_int,100,4294967295> *)(pTVar9->Elements + 0x20);
      } while (lVar10 != 0);
      uVar3 = *(undefined8 *)(pTVar9->Elements + 0x22);
      puVar8[0x10] = *(undefined8 *)
                      ((TStaticArray<unsigned_int,100,4294967295> *)(pTVar9->Elements + 0x20))->
                      Elements;
      puVar8[0x11] = uVar3;
      FRHICommandListBase::UnlockBuffer(this_00,(pFVar1->PhysicsTypeBuffer).Buffer.Reference);
    }
  }
  return;
}

