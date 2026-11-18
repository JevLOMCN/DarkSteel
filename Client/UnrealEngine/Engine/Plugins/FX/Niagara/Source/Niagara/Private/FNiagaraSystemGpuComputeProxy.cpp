// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// FNiagaraSystemGpuComputeProxy @ 1493cc710

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

FNiagaraSystemGpuComputeProxy * __thiscall
FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy
          (FNiagaraSystemGpuComputeProxy *this,FNiagaraSystemInstance *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  FWeakObjectPtr *pFVar3;
  ulong64 uVar4;
  longlong lVar5;
  code *pcVar6;
  FNiagaraSystemInstance *pFVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FNiagaraSystemGpuComputeProxy *pFVar13;
  UObject *pUVar14;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar15;
  undefined ***pppuVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  FWeakObjectPtr *this_02;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd [5];
  FNiagaraSystemInstance *local_b8;
  FNiagaraSystemGpuComputeProxy *local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FNiagaraSystemGpuComputeProxy *pFStack_90;
  FNiagaraSystemStaticBuffers *local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FNiagaraSystemGpuComputeProxy *pFStack_60;
  FNiagaraSystemStaticBuffers *local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this->DebugOwnerInstance = param_1;
  this->DebugOwnerComputeDispatchInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  this->ComputeDispatchIndex = -1;
  *(undefined8 *)&(this->SystemLWCTile).field0_0x0 = *(undefined8 *)&(param_1->LWCTile).field0_0x0;
  (this->SystemLWCTile).field0_0x0._s_0.Z = (param_1->LWCTile).field0_0x0._s_0.Z;
  uVar4 = param_1->ID;
  this->ComputeTickStage = Last;
  this->GpuCountBufferEstimate = 0;
  this->SystemInstanceID = uVar4;
  (this->StaticFloatBuffer).Reference = (FRHIShaderResourceView *)0x0;
  (this->ComputeContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputeContexts).ArrayNum = 0;
  (this->ComputeContexts).ArrayMax = 0;
  (this->PendingTicks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTicks).ArrayNum = 0;
  (this->PendingTicks).ArrayMax = 0;
  local_b8 = param_1;
  local_b0 = this;
  if (param_1->bHasGPUEmitters != '\0') {
    iVar11 = (param_1->Emitters).ArrayNum;
    pFVar17 = (param_1->Emitters).AllocatorInstance.Data;
    pFVar20 = pFVar17 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((param_1->Emitters).ArrayNum != iVar11) {
        local_c8 = 0;
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_c8);
      }
      if (pFVar17 == pFVar20) break;
      lVar5 = *(longlong *)(*(longlong *)pFVar17 + 0x18);
      if (lVar5 != 0) {
        plVar18 = *(longlong **)(lVar5 + 0xb0);
        iVar12 = *(int *)(lVar5 + 0xb8);
        plVar2 = plVar18 + iVar12;
        while( true ) {
          if (*(int *)(lVar5 + 0xb8) != iVar12) {
            local_c7 = 0;
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_c7);
          }
          param_1 = local_b8;
          if (plVar18 == plVar2) break;
          if (((longlong *)*plVar18 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar18 + 0x390))(), cVar8 != '\0')) {
            uVar10 = 1;
            param_1 = local_b8;
            goto LAB_1493cc874;
          }
          plVar18 = plVar18 + 1;
        }
      }
      pFVar17 = pFVar17 + 0x10;
    }
  }
  uVar10 = 0;
LAB_1493cc874:
  local_b0->bRequiresGlobalDistanceField = 0;
  *(uint *)&local_b0->field_0x2c = *(uint *)&local_b0->field_0x2c | uVar10;
  if (param_1->bHasGPUEmitters != '\0') {
    iVar11 = (param_1->Emitters).ArrayNum;
    pFVar17 = (param_1->Emitters).AllocatorInstance.Data;
    pFVar20 = pFVar17 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((param_1->Emitters).ArrayNum != iVar11) {
        local_c6 = 0;
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_c6);
      }
      if (pFVar17 == pFVar20) break;
      lVar5 = *(longlong *)(*(longlong *)pFVar17 + 0x18);
      if (lVar5 != 0) {
        plVar18 = *(longlong **)(lVar5 + 0xb0);
        iVar12 = *(int *)(lVar5 + 0xb8);
        plVar2 = plVar18 + iVar12;
        while( true ) {
          if (*(int *)(lVar5 + 0xb8) != iVar12) {
            local_c5 = 0;
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_c5);
          }
          param_1 = local_b8;
          if (plVar18 == plVar2) break;
          if (((longlong *)*plVar18 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar18 + 0x398))(), cVar8 != '\0')) {
            uVar10 = 2;
            param_1 = local_b8;
            goto LAB_1493cc934;
          }
          plVar18 = plVar18 + 1;
        }
      }
      pFVar17 = pFVar17 + 0x10;
    }
  }
  uVar10 = 0;
LAB_1493cc934:
  local_b0->bRequiresDepthBuffer = uVar10 >> 1;
  if (param_1->bHasGPUEmitters != '\0') {
    iVar11 = (param_1->Emitters).ArrayNum;
    pFVar17 = (param_1->Emitters).AllocatorInstance.Data;
    pFVar20 = pFVar17 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((param_1->Emitters).ArrayNum != iVar11) {
        local_c4 = 0;
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_c4);
      }
      if (pFVar17 == pFVar20) break;
      lVar5 = *(longlong *)(*(longlong *)pFVar17 + 0x18);
      if (lVar5 != 0) {
        plVar18 = *(longlong **)(lVar5 + 0xb0);
        iVar12 = *(int *)(lVar5 + 0xb8);
        plVar2 = plVar18 + iVar12;
        while( true ) {
          if (*(int *)(lVar5 + 0xb8) != iVar12) {
            local_c3 = 0;
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_c3);
          }
          param_1 = local_b8;
          if (plVar18 == plVar2) break;
          if (((longlong *)*plVar18 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar18 + 0x3a0))(), cVar8 != '\0')) {
            uVar10 = 4;
            param_1 = local_b8;
            goto LAB_1493cc9f4;
          }
          plVar18 = plVar18 + 1;
        }
      }
      pFVar17 = pFVar17 + 0x10;
    }
  }
  uVar10 = 0;
LAB_1493cc9f4:
  pFVar13 = local_b0;
  local_b0->bRequiresEarlyViewData = uVar10 >> 2;
  if (param_1->bHasGPUEmitters == '\0') {
LAB_1493cca5e:
    uVar10 = 0;
  }
  else {
    iVar11 = (param_1->Emitters).ArrayNum;
    pFVar17 = (param_1->Emitters).AllocatorInstance.Data;
    pFVar20 = pFVar17 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((param_1->Emitters).ArrayNum != iVar11) {
        local_c2 = 0;
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_c2);
      }
      if (pFVar17 == pFVar20) goto LAB_1493cca5e;
      if ((*(longlong *)(*(longlong *)pFVar17 + 0x18) != 0) &&
         ((*(byte *)(*(longlong *)pFVar17 + 0xd0) & 8) != 0)) break;
      pFVar17 = pFVar17 + 0x10;
    }
    uVar10 = 8;
  }
  pFVar13->bRequiresViewUniformBuffer = uVar10 >> 3;
  if (param_1->bHasGPUEmitters != '\0') {
    iVar11 = (param_1->Emitters).ArrayNum;
    pFVar17 = (param_1->Emitters).AllocatorInstance.Data;
    pFVar20 = pFVar17 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((param_1->Emitters).ArrayNum != iVar11) {
        local_c1 = 0;
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_c1);
      }
      pFVar13 = local_b0;
      if (pFVar17 == pFVar20) break;
      lVar5 = *(longlong *)(*(longlong *)pFVar17 + 0x18);
      if (lVar5 != 0) {
        plVar18 = *(longlong **)(lVar5 + 0xb0);
        iVar12 = *(int *)(lVar5 + 0xb8);
        plVar2 = plVar18 + iVar12;
        while( true ) {
          if (*(int *)(lVar5 + 0xb8) != iVar12) {
            local_c0 = 0;
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_c0);
          }
          param_1 = local_b8;
          if (plVar18 == plVar2) break;
          if (((longlong *)*plVar18 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar18 + 0x3a8))(), cVar8 != '\0')) {
            uVar10 = 0x10;
            param_1 = local_b8;
            pFVar13 = local_b0;
            goto LAB_1493ccb24;
          }
          plVar18 = plVar18 + 1;
        }
      }
      pFVar17 = pFVar17 + 0x10;
    }
  }
  uVar10 = 0;
LAB_1493ccb24:
  pFVar13->bRequiresRayTracingScene = uVar10 >> 4;
  if (param_1->bHasGPUEmitters != '\0') {
    iVar11 = (param_1->Emitters).ArrayNum;
    pFVar17 = (param_1->Emitters).AllocatorInstance.Data;
    pFVar20 = pFVar17 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((param_1->Emitters).ArrayNum != iVar11) {
        local_bf = 0;
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_bf);
      }
      pFVar13 = local_b0;
      if (pFVar17 == pFVar20) break;
      lVar5 = *(longlong *)(*(longlong *)pFVar17 + 0x18);
      if (lVar5 != 0) {
        plVar18 = *(longlong **)(lVar5 + 0xb0);
        iVar12 = *(int *)(lVar5 + 0xb8);
        plVar2 = plVar18 + iVar12;
        while( true ) {
          if (*(int *)(lVar5 + 0xb8) != iVar12) {
            local_be = 0;
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_be);
          }
          param_1 = local_b8;
          if (plVar18 == plVar2) break;
          if (((longlong *)*plVar18 != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar18 + 0x3b0))(), cVar8 != '\0')) {
            uVar10 = 0x20;
            param_1 = local_b8;
            pFVar13 = local_b0;
            goto LAB_1493ccbe4;
          }
          plVar18 = plVar18 + 1;
        }
      }
      pFVar17 = pFVar17 + 0x10;
    }
  }
  uVar10 = 0;
LAB_1493ccbe4:
  pFVar13->bRequiresCurrentFrameNDC = uVar10 >> 5;
  iVar11 = (param_1->Emitters).ArrayNum;
  pFVar17 = (param_1->Emitters).AllocatorInstance.Data;
  if ((iVar11 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FNiagaraSystemGpuComputeProxy *)(*pcVar6)();
    return pFVar13;
  }
  pFVar20 = pFVar17 + (longlong)iVar11 * 0x10;
  pFVar7 = local_b8;
  for (; local_b8 = pFVar7, pFVar17 != pFVar20; pFVar17 = pFVar17 + 0x10) {
    lVar5 = *(longlong *)(*(longlong *)pFVar17 + 0x18);
    if (lVar5 != 0) {
      iVar11 = (pFVar13->ComputeContexts).ArrayNum;
      if (iVar11 == (pFVar13->ComputeContexts).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar13->ComputeContexts).AllocatorInstance,
                            &(pFVar13->ComputeContexts).ArrayMax);
      }
      (pFVar13->ComputeContexts).ArrayNum = iVar11 + 1;
      *(longlong *)((pFVar13->ComputeContexts).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           lVar5;
    }
    iVar11 = (**(code **)(**(longlong **)pFVar17 + 0x60))();
    pFVar13->GpuCountBufferEstimate = pFVar13->GpuCountBufferEstimate + iVar11;
    pFVar7 = local_b8;
  }
  iVar11 = (pFVar7->GPUDataInterfaces).ArrayNum;
  this_02 = (FWeakObjectPtr *)(pFVar7->GPUDataInterfaces).AllocatorInstance.Data;
  pFVar3 = (FWeakObjectPtr *)((longlong)this_02 + (longlong)iVar11 * 0xc);
  while( true ) {
    if ((pFVar7->GPUDataInterfaces).ArrayNum != iVar11) {
      local_bd[0] = 0;
      `TCheckedPointerIterator<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_bd);
    }
    if (this_02 == pFVar3) break;
    pUVar14 = FWeakObjectPtr::Get(this_02);
    if (pUVar14 != (UObject *)0x0) {
      iVar12 = (**(code **)(*(longlong *)pUVar14 + 0x3b8))(pUVar14);
      pFVar13->GpuCountBufferEstimate = pFVar13->GpuCountBufferEstimate + iVar12;
    }
    this_02 = (FWeakObjectPtr *)&this_02[1].ObjectSerialNumber;
  }
  if (pFVar13->bRequiresGlobalDistanceField == 0 &&
      (pFVar13->bRequiresDepthBuffer == 0 &&
      (pFVar13->bRequiresRayTracingScene == 0 && pFVar13->bRequiresCurrentFrameNDC == 0))) {
    if (pFVar13->bRequiresEarlyViewData != 0) {
      pFVar13->ComputeTickStage = PostInitViews;
      goto LAB_1493ccd3d;
    }
    if (pFVar13->bRequiresViewUniformBuffer == 0) {
      pFVar13->ComputeTickStage = First;
      goto LAB_1493ccd3d;
    }
  }
  pFVar13->ComputeTickStage = Last;
LAB_1493ccd3d:
  local_88 = (pFVar7->System->StaticBuffers).Ptr;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_80 = (undefined ***)0x0;
  pFStack_90 = pFVar13;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy_::__l2::TSTR_SetStaticBuffers64>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    pFStack_60 = pFStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar15 = (FRenderCommandTag *)
              TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::TSTR_SetStaticBuffers64>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar15);
    uVar19 = (ulonglong)local_48;
    if ((2 < uVar19) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNiagaraSystemGpuComputeProxy *)(*pcVar6)();
      return pFVar13;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar19] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar16 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar16 = local_50;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar19])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar16 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar16 = local_80;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  return pFVar13;
}

// ~FNiagaraSystemGpuComputeProxy @ 1493d1140

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
FNiagaraSystemGpuComputeProxy::~FNiagaraSystemGpuComputeProxy(FNiagaraSystemGpuComputeProxy *this)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *this_00;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x4e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->DebugOwnerComputeDispatchInterface != (FNiagaraGpuComputeDispatchInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugOwnerComputeDispatchInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<FNiagaraGPUSystemTick,int>
            ((FNiagaraGPUSystemTick *)(this->PendingTicks).AllocatorInstance.Data,
             (this->PendingTicks).ArrayNum);
  pFVar1 = (this->PendingTicks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComputeContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->StaticFloatBuffer).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// operator() @ 1493d2620

void __thiscall
`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FRHIResource *this_00;
  FRHIResource *this_01;
  FRHIShaderResourceView *this_02;
  code *pcVar2;
  bool bVar3;
  FRHIShaderResourceView *this_03;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemStaticBuffers.h"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(FRHIResource **)(lVar1 + 0x40);
  this_01 = *(FRHIResource **)(*(longlong *)this + 0x38);
  if (this_01 != this_00) {
    *(FRHIResource **)(*(longlong *)this + 0x38) = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
  }
  if (*(longlong *)(*(longlong *)this + 0x38) == 0) {
    this_03 = FNiagaraRenderer::GetDummyFloatBuffer();
    this_02 = *(FRHIShaderResourceView **)(*(longlong *)this + 0x38);
    if (this_02 != this_03) {
      *(FRHIShaderResourceView **)(*(longlong *)this + 0x38) = this_03;
      if (this_03 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_03);
      }
      if (this_02 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_02);
      }
    }
  }
  return;
}

// operator() @ 1493d27b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FNiagaraDataBuffer *this_00;
  FNiagaraDataBuffer *pFVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  plVar2 = *(longlong **)((longlong)this + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)this);
  }
  lVar3 = *(longlong *)this;
  plVar8 = *(longlong **)(lVar3 + 0x40);
  iVar1 = *(int *)(lVar3 + 0x48);
  plVar2 = plVar8 + iVar1;
  while( true ) {
    if (*(int *)(lVar3 + 0x48) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar2) {
      return;
    }
    lVar4 = *plVar8;
    *(undefined1 *)(lVar4 + 0x230) = 0;
    *(undefined8 *)(lVar4 + 0x234) = 0;
    *(undefined4 *)(lVar4 + 0xc) = 0;
    *(undefined4 *)(lVar4 + 8) = 0xffffffff;
    if ((*(longlong *)(lVar4 + 0x208) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext->DataBuffers_RT[i] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                           ,0x6b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = ::operator_new(0x160);
    pFVar7 = (FNiagaraDataBuffer *)0x0;
    if (this_00 != (FNiagaraDataBuffer *)0x0) {
      pFVar7 = FNiagaraDataBuffer::FNiagaraDataBuffer(this_00,*(FNiagaraDataSet **)(lVar4 + 0x58));
    }
    *(FNiagaraDataBuffer **)(lVar4 + 0x208) = pFVar7;
    if ((*(longlong *)(lVar4 + 0x210) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext->DataBuffers_RT[i] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                           ,0x6b,L""), bVar6)) break;
    pFVar7 = ::operator_new(0x160);
    if (pFVar7 == (FNiagaraDataBuffer *)0x0) {
      plVar8 = plVar8 + 1;
      *(undefined8 *)(lVar4 + 0x210) = 0;
    }
    else {
      pFVar7 = FNiagaraDataBuffer::FNiagaraDataBuffer(pFVar7,*(FNiagaraDataSet **)(lVar4 + 0x58));
      *(FNiagaraDataBuffer **)(lVar4 + 0x210) = pFVar7;
      plVar8 = plVar8 + 1;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// operator() @ 1493d2e80

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
`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  FNiagaraComputeExecutionContext *this_00;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  plVar3 = *(longlong **)((longlong)this + 8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined8 *)this);
  }
  FNiagaraSystemGpuComputeProxy::ReleaseTicks
            (*(FNiagaraSystemGpuComputeProxy **)this,0x7fffffff,true);
  lVar4 = *(longlong *)this;
  puVar7 = *(undefined8 **)(lVar4 + 0x40);
  iVar2 = *(int *)(lVar4 + 0x48);
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x48) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar7 == puVar1) break;
    this_00 = (FNiagaraComputeExecutionContext *)*puVar7;
    FNiagaraComputeExecutionContext::ResetInternal
              (this_00,*(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 8));
    if (this_00->DataBuffers_RT[0] == (FNiagaraDataBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeContext->DataBuffers_RT[i]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                         ,0x89,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FNiagaraDataBuffer::ReleaseGPU(this_00->DataBuffers_RT[0]);
    FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)this_00->DataBuffers_RT[0]);
    this_00->DataBuffers_RT[0] = (FNiagaraDataBuffer *)0x0;
    if (this_00->DataBuffers_RT[1] == (FNiagaraDataBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeContext->DataBuffers_RT[i]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                         ,0x89,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FNiagaraDataBuffer::ReleaseGPU(this_00->DataBuffers_RT[1]);
    FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)this_00->DataBuffers_RT[1]);
    puVar7 = puVar7 + 1;
    this_00->DataBuffers_RT[1] = (FNiagaraDataBuffer *)0x0;
  }
  if ((*(char *)((longlong)this + 0x10) != '\0') &&
     (*(FNiagaraSystemGpuComputeProxy **)this != (FNiagaraSystemGpuComputeProxy *)0x0)) {
    FNiagaraSystemGpuComputeProxy::_scalar_deleting_destructor_
              (*(FNiagaraSystemGpuComputeProxy **)this,1);
    return;
  }
  return;
}

// AddToRenderThread @ 1493d6de0

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
FNiagaraSystemGpuComputeProxy::AddToRenderThread
          (FNiagaraSystemGpuComputeProxy *this,FNiagaraGpuComputeDispatchInterface *param_1)

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
  FNiagaraSystemGpuComputeProxy *pFStack_70;
  FNiagaraGpuComputeDispatchInterface *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraSystemGpuComputeProxy *pFStack_40;
  FNiagaraGpuComputeDispatchInterface *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->DebugOwnerComputeDispatchInterface != (FNiagaraGpuComputeDispatchInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugOwnerComputeDispatchInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->DebugOwnerComputeDispatchInterface = param_1;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::AddToRenderThread_::__l2::TSTR_AddProxyToComputeDispatchInterface88>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::TSTR_AddProxyToComputeDispatchInterface88>
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
  return;
}

// ClearTicksFromRenderThread @ 1493da240

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
FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread
          (FNiagaraSystemGpuComputeProxy *this,FNiagaraGpuComputeDispatchInterface *param_1)

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
  FNiagaraSystemGpuComputeProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraSystemGpuComputeProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->DebugOwnerComputeDispatchInterface != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugOwnerComputeDispatchInterface == ComputeDispatchInterface",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_60 = (undefined ***)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread_::__l2::TSTR_ClearTicksFromProxy157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::TSTR_ClearTicksFromProxy157>
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
  return;
}

// QueueTick @ 1493f2f20

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
FNiagaraSystemGpuComputeProxy::QueueTick
          (FNiagaraSystemGpuComputeProxy *this,FNiagaraGPUSystemTick *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FNiagaraGPUSystemTick *pFVar3;
  FNiagaraComputeDataInterfaceInstanceData *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined1 local_res8 [8];
  int local_res10;
  void *local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                         ,0xa7,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (FNiagaraGPUSystemTick *)(this->PendingTicks).AllocatorInstance.Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->PendingTicks).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->PendingTicks).ArrayNum;
  piVar1 = &(this->PendingTicks).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&(this->PendingTicks).AllocatorInstance,piVar1);
  }
  (this->PendingTicks).ArrayNum = iVar9 + 1;
  FNiagaraGPUSystemTick::FNiagaraGPUSystemTick
            ((FNiagaraGPUSystemTick *)
             ((this->PendingTicks).AllocatorInstance.Data + (longlong)iVar9 * 0x68),param_1);
  pFVar4 = param_1->DIInstanceData;
  if (pFVar4 != (FNiagaraComputeDataInterfaceInstanceData *)0x0) {
    local_res18 = pFVar4->PerInstanceDataForRT;
    iVar15 = 0;
    iVar17 = 0;
    uVar10 = 1;
    iVar9 = *(int *)&(pFVar4->InterfaceProxiesToOffsets).field_0x28;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar4->InterfaceProxiesToOffsets).field_0x10;
    iVar11 = 0;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(pFVar4->InterfaceProxiesToOffsets).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)TStack_60.Array;
      }
      uVar14 = *puVar18;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar11 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1493f30be;
        uVar14 = puVar18[lVar12 + 1];
      }
      uVar10 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar11 = iVar17 + -1 + local_res10;
      if (iVar9 < iVar11) {
        iVar11 = iVar9;
      }
    }
LAB_1493f30be:
    uVar14 = *(uint *)&(pFVar4->InterfaceProxiesToOffsets).field_0x28;
    puVar19 = &(pFVar4->InterfaceProxiesToOffsets).field_0x10;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar11;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar10,iVar15);
    iVar15 = (int)uVar14 >> 5;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = iVar17;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(pFVar4->InterfaceProxiesToOffsets).field_0x8 -
                         *(int *)&(pFVar4->InterfaceProxiesToOffsets).field_0x34);
    if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar7 = local_res18;
    uVar10 = *(uint *)&(pFVar4->InterfaceProxiesToOffsets).field_0x28;
    if (uVar14 != uVar10) {
      puVar16 = *(undefined1 **)&(pFVar4->InterfaceProxiesToOffsets).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar19;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1493f31d0;
        uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar13;
      if ((int)uVar10 < (int)uVar14) {
        uVar14 = uVar10;
      }
    }
LAB_1493f31d0:
    while( true ) {
      if (*(int *)&(pFVar4->InterfaceProxiesToOffsets).field_0x8 -
          *(int *)&(pFVar4->InterfaceProxiesToOffsets).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar14) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar19)) break;
      plVar5 = *(longlong **)
                (*(longlong *)&pFVar4->InterfaceProxiesToOffsets +
                (longlong)TStack_60.CurrentBitIndex * 0x18);
      (**(code **)(*plVar5 + 0x10))
                (plVar5,(longlong)
                        *(int *)(*(longlong *)&pFVar4->InterfaceProxiesToOffsets + 8 +
                                (longlong)TStack_60.CurrentBitIndex * 0x18) + (longlong)pvVar7,
                 &param_1->SystemInstanceID);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// ReleaseTicks @ 1493f5300

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
FNiagaraSystemGpuComputeProxy::ReleaseTicks
          (FNiagaraSystemGpuComputeProxy *this,int param_1,bool param_2)

{
  TArray<FNiagaraGPUSystemTick,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FNiagaraGPUSystemTick *_Dst;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                         ,0xc6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = (this->PendingTicks).ArrayNum;
  if (param_1 < (int)uVar3) {
    uVar3 = param_1;
  }
  uVar11 = 0;
  pTVar1 = &this->PendingTicks;
  uVar12 = uVar11;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < (this->PendingTicks).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FNiagaraGPUSystemTick::Destroy
                ((FNiagaraGPUSystemTick *)((pTVar1->AllocatorInstance).Data + uVar12));
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x68;
    } while ((int)(uVar10 + 1) < (int)uVar3);
  }
  uVar7 = (this->PendingTicks).ArrayNum;
  uVar10 = 0;
  if ((int)uVar3 <= (int)uVar7) {
    uVar10 = ~uVar3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar3 != 0) {
    _Dst = (FNiagaraGPUSystemTick *)(pTVar1->AllocatorInstance).Data;
    DestructItems<FNiagaraGPUSystemTick,int>(_Dst,uVar3);
    iVar8 = (this->PendingTicks).ArrayNum - uVar3;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + (int)uVar3,(longlong)iVar8 * 0x68);
    }
    iVar8 = (this->PendingTicks).ArrayNum - uVar3;
    (this->PendingTicks).ArrayNum = iVar8;
    if (uVar3 == uVar7) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,&pTVar1->AllocatorInstance,iVar8,&(this->PendingTicks).ArrayMax);
    }
  }
  pFVar9 = (this->ComputeContexts).AllocatorInstance.Data;
  iVar8 = (this->ComputeContexts).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar8 * 8;
  while( true ) {
    if ((this->ComputeContexts).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar2) break;
    lVar4 = *(longlong *)pFVar9;
    *(undefined1 *)(lVar4 + 0x230) = 0;
    *(undefined4 *)(lVar4 + 0x238) = 0;
    if (param_2) {
      *(undefined4 *)(*(longlong *)(lVar4 + 0x208) + 0x5c) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(lVar4 + 0x210) + 0x5c) = 0xffffffff;
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// RemoveFromRenderThread @ 1493f5940

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
FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread
          (FNiagaraSystemGpuComputeProxy *this,FNiagaraGpuComputeDispatchInterface *param_1,
          bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  FNiagaraSystemGpuComputeProxy *local_b8;
  FNiagaraGpuComputeDispatchInterface *pFStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x75,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->DebugOwnerComputeDispatchInterface != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugOwnerComputeDispatchInterface == ComputeDispatchInterface",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x76,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->DebugOwnerComputeDispatchInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_98[0] = (code *)0x0;
  local_b8 = this;
  pFStack_b0 = param_1;
  local_a8 = param_2;
  local_70 = FMemory::Malloc(0x20,8);
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[1] = (code *)local_b8;
  local_70[2] = (code *)pFStack_b0;
  local_70[3] = (code *)CONCAT71(uStack_a7,local_a8);
  if (local_70 + 1 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread_::__l2::TSTR_RemoveFromRenderThread121>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::TSTR_RemoveFromRenderThread121>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar3);
    uVar5 = (ulonglong)local_38;
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
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar4 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar4 = local_40;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar4 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar4 = local_70;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

