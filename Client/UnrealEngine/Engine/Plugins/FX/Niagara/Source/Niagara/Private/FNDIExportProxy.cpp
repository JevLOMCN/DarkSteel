// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// operator() @ 14916d570

void __thiscall
`FNDIExportProxy::PostStage'::__l5::<lambda_1>::operator()
          (void *this,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_1)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<void_*,unsigned_int> *pTVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  TVector<float>_u_0 local_68;
  ForAnyElementType local_58;
  int local_50 [2];
  TArray<FBasicParticleData,TSizedDefaultAllocator<32>_> local_48 [2];
  
  if (param_1->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = **(uint **)param_1->DataPtr;
  if (*(uint *)this < uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReadbackInstanceCount <= MaxInstances",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceExport.cpp"
                       ,0x7f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (uVar2 != 0) {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50[0] = 0;
    local_50[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar2,&local_58,local_50,local_50 + 1);
    pTVar6 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[](param_1,0);
    pfVar8 = (float *)(*(longlong *)pTVar6 + 4);
    uVar7 = 0;
    do {
      fVar1 = *pfVar8;
      uVar9 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < local_50[0]) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar10 = (longlong)(int)uVar7 * 0x38;
      *(double *)(local_58.Data + lVar10) = (double)fVar1;
      fVar1 = pfVar8[1];
      uVar5 = 0;
      if ((int)uVar7 < local_50[0]) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(double *)(local_58.Data + lVar10 + 8) = (double)fVar1;
      fVar1 = pfVar8[2];
      uVar5 = 0;
      if ((int)uVar7 < local_50[0]) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(double *)(local_58.Data + lVar10 + 0x10) = (double)fVar1;
      fVar1 = pfVar8[3];
      uVar5 = 0;
      if ((int)uVar7 < local_50[0]) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(float *)(local_58.Data + lVar10 + 0x18) = fVar1;
      fVar1 = pfVar8[4];
      uVar5 = 0;
      if ((int)uVar7 < local_50[0]) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(double *)(local_58.Data + lVar10 + 0x20) = (double)fVar1;
      fVar1 = pfVar8[5];
      uVar5 = 0;
      if ((int)uVar7 < local_50[0]) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(double *)(local_58.Data + lVar10 + 0x28) = (double)fVar1;
      fVar1 = pfVar8[6];
      uVar5 = 0;
      if ((int)uVar7 < local_50[0]) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pfVar8 = pfVar8 + 7;
      uVar7 = uVar7 + 1;
      *(double *)(local_58.Data + lVar10 + 0x30) = (double)fVar1;
    } while (uVar7 < uVar2);
    local_68._0_8_ = *(undefined8 *)((longlong)this + 0x14);
    local_48[0].AllocatorInstance.Data = local_58.Data;
    local_48[0].ArrayNum = local_50[0];
    local_48[0].ArrayMax = local_50[1];
    local_68._s_0.Z = *(float *)((longlong)this + 0x1c);
    local_50[0] = 0;
    local_50[1] = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    NDIExportLocal::EnqueueGameThreadCallback
              ((TWeakObjectPtr<UObject,FWeakObjectPtr>)*(FWeakObjectPtr *)((longlong)this + 4),
               local_48,(TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>)
                        *(FWeakObjectPtr *)((longlong)this + 0xc),(TVector<float> *)&local_68._s_0);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

// ConsumePerInstanceDataFromGameThread @ 1491733d0

void __thiscall
FNDIExportProxy::ConsumePerInstanceDataFromGameThread
          (FNDIExportProxy *this,void *param_1,ulong64 *param_2)

{
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1491866f0

int __thiscall FNDIExportProxy::PerInstanceDataPassedToRenderThreadSize(FNDIExportProxy *this)

{
  return 0;
}

// PostStage @ 1491890f0

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
FNDIExportProxy::PostStage(FNDIExportProxy *this,FNDIGpuComputePostStageContext *param_1)

{
  uint uVar1;
  FNiagaraGpuReadbackManager *this_00;
  FWeakObjectPtr FVar2;
  ulong64 uVar3;
  FNDIExportInstanceData_RenderThread *pFVar4;
  TVector<float> *pTVar5;
  TVector<float> local_68;
  uint local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  uVar3 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar4 = TMapBase<unsigned___int64,FNDIExportInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>_>
           ::FindChecked((TMapBase<unsigned___int64,FNDIExportInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIExportInstanceData_RenderThread,0>_>
                          *)&this->SystemInstancesToProxyData_RT,uVar3);
  if (pFVar4->bWriteBufferUsed == false) {
    pFVar4->RDGWriteBuffer = (FRDGBuffer *)0x0;
    pFVar4->RDGWriteBufferUAV = (FRDGBufferUAV *)0x0;
  }
  else {
    uVar1 = pFVar4->WriteBufferInstanceCount;
    pFVar4->bWriteBufferUsed = false;
    this_00 = *(FNiagaraGpuReadbackManager **)(*(longlong *)&param_1->field_0x8 + 0x38);
    pTVar5 = FNDIGpuComputePrePostStageContext::GetSystemLWCTile
                       ((FNDIGpuComputePrePostStageContext *)param_1,&local_68);
    FVar2 = (pFVar4->WeakCallbackHandler).WeakPtr;
    iStack_58 = FVar2.ObjectIndex;
    iStack_54 = FVar2.ObjectSerialNumber;
    FVar2 = (pFVar4->WeakSystem).WeakPtr;
    fStack_40 = (pTVar5->field0_0x0)._s_0.Z;
    iStack_50 = FVar2.ObjectIndex;
    iStack_4c = FVar2.ObjectSerialNumber;
    uStack_48 = (undefined4)*(undefined8 *)&pTVar5->field0_0x0;
    uStack_44 = (undefined4)((ulonglong)*(undefined8 *)&pTVar5->field0_0x0 >> 0x20);
    local_38[0] = (code *)0x0;
    local_5c = uVar1;
    local_10 = FMemory::Malloc(0x28,8);
    *local_10 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__PostStage_FNDIExportProxy__UEAAXAEBUFNDIGpuComputePostStageContext___Z__0A__00_Function_Private_Core_UE__6B_
    ;
    local_10[1] = CONCAT44(iStack_58,local_5c);
    local_10[2] = CONCAT44(iStack_50,iStack_54);
    local_10[3] = CONCAT44(uStack_48,iStack_4c);
    local_10[4] = CONCAT44(fStack_40,uStack_44);
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                    ::Call;
    }
    FNiagaraGpuReadbackManager::EnqueueReadback
              (this_00,*(FRDGBuilder **)param_1,pFVar4->RDGWriteBuffer,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               local_38);
    pFVar4->RDGWriteBuffer = (FRDGBuffer *)0x0;
    pFVar4->RDGWriteBufferUAV = (FRDGBufferUAV *)0x0;
  }
  return;
}

