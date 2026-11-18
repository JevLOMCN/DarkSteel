// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 971

// ~TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0> @ 14472eca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFGraphicsPipelineStateInitializer___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 144740e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFGraphicsPipelineStateInitializer___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FGraphicsPipelineStateInitializer_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144740e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``AddAmbientOcclusionPass'::`25'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144740eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``AddAmbientOcclusionPass'::`25'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1447527a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001447527a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1447527b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001447527b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1447527c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001447527c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14475b980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14475b990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14475b9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144803fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::Render'::__l2::<lambda_11>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14480d1a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::Render'::__l2::<lambda_11>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014480d1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144813470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::Render'::__l2::<lambda_11>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1448d0df0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1448d0e00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFGPUSceneResourceParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FGPUSceneResourceParameters_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1448d0e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001448d0e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1448d0e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 1448d0e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFGPUSceneResourceParameters____QEAA_PEB_WV__TFunction___A6AXAEAVFGPUSceneResourceParameters__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 1448d0f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0> @ 1448edbb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFGPUSceneResourceParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 144901a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateByteAddressUploadBuffer_Impl_AEAV__TArray_IV__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_IV__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateByteAddressUploadBuffer_Impl_AEAV__TArray_UFLightSceneData_HLSL_UE__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFLightSceneData_HLSL_UE__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFPackedItem_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFPackedItem_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFWorkGroupInfo_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFWorkGroupInfo_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144901c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RequestGlobalDistanceFieldReadback_GameThread'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 144901c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__ResizeAndUploadToAsync___TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__QEAAPEAVFRDGBuffer__AEAVFRDGBuilder__AEAV__TPersistentBuffer_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__456_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144901ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewElementPDI::RegisterDynamicResource'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 144901ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewElementPDI::DrawMesh'::__l16::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 144901d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateByteAddressUploadBuffer_Impl_AEAV__TArray_IV__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_IV__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateByteAddressUploadBuffer_Impl_AEAV__TArray_UFLightSceneData_HLSL_UE__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFLightSceneData_HLSL_UE__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFPackedItem_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFPackedItem_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFWorkGroupInfo_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFWorkGroupInfo_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144901f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__ResizeAndUploadToAsync___TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__QEAAPEAVFRDGBuffer__AEAVFRDGBuilder__AEAV__TPersistentBuffer_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__456_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144901f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateByteAddressUploadBuffer_Impl_AEAV__TArray_IV__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_IV__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144901fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateByteAddressUploadBuffer_Impl_AEAV__TArray_UFLightSceneData_HLSL_UE__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFLightSceneData_HLSL_UE__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144902060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFPackedItem_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFPackedItem_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 1449020e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFWorkGroupInfo_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFWorkGroupInfo_FGPUWorkGroupLoadBalancer__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144902160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__1__ResizeAndUploadToAsync___TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__QEAAPEAVFRDGBuffer__AEAVFRDGBuilder__AEAV__TPersistentBuffer_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__456_H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14490b6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b6f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014490b785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14490b790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RequestGlobalDistanceFieldReadback_GameThread'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014490b795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14490b7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014490b7a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14490b7b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewElementPDI::RegisterDynamicResource'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014490b7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14490b7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewElementPDI::DrawMesh'::__l16::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014490b8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14490b8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014490b8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14490b8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14490b990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014490b995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144919c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144919ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RequestGlobalDistanceFieldReadback_GameThread'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144919cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144919cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewElementPDI::RegisterDynamicResource'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144919cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewElementPDI::DrawMesh'::__l16::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144919ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144919d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144919d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144919d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144a439c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
             *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 144a439d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFRenderCurveSceneParameters_RenderCurve__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FRenderCurveSceneParameters_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 144a439f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144a439f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 144a43be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>::TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 144a43bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>::TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFRenderCurveSceneParameters_RenderCurve____QEAA_PEB_WV__TFunction___A6AXAEAVFRenderCurveSceneParameters_RenderCurve__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 144a43c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>::TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0> @ 144a5aae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFRenderCurveSceneParameters_RenderCurve__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 144badd60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_10>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::<lambda_10>
            (puVar1 + 1,(<lambda_10> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baddc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_11>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>::<lambda_11>
            (puVar1 + 1,(<lambda_11> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bade20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_12>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>::<lambda_12>
            (puVar1 + 1,(<lambda_12> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bade80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_13>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>::<lambda_13>
            (puVar1 + 1,(<lambda_13> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144badee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_14>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>::<lambda_14>
            (puVar1 + 1,(<lambda_14> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144badf40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_15>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>::<lambda_15>
            (puVar1 + 1,(<lambda_15> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144badfa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_16>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>::<lambda_16>
            (puVar1 + 1,(<lambda_16> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae000

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_17>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>::<lambda_17>
            (puVar1 + 1,(<lambda_17> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_18>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>::<lambda_18>
            (puVar1 + 1,(<lambda_18> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae0c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_19>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>::<lambda_19>
            (puVar1 + 1,(<lambda_19> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedBatch_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedBatch_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144bae1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedItem_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedItem_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144bae220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144bae240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredAlignedNumInstancesOutputCulling'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredAlignedNumInstancesOutputCulling_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6AIXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144bae260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdData'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredInstanceIdData_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6APEBXXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144bae280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdDataSize'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredInstanceIdDataSize_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6A_KXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144bae2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredNumInstanceIdData'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DeferredNumInstanceIdData_FInstanceCullingOcclusionQueryDeferredContext__QEAA_AV__TFunction___A6AIXZ__XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144bae2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_20>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>::<lambda_20>
            (puVar1 + 1,(<lambda_20> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_21>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>::<lambda_21>
            (puVar1 + 1,(<lambda_21> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_22>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>::<lambda_22>
            (puVar1 + 1,(<lambda_22> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae3e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_23>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>::<lambda_23>
            (puVar1 + 1,(<lambda_23> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae440

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_24>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>::<lambda_24>
            (puVar1 + 1,(<lambda_24> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae4a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_25>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>::<lambda_25>
            (puVar1 + 1,(<lambda_25> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_26>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>::<lambda_26>
            (puVar1 + 1,(<lambda_26> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_27>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>::<lambda_27>
            (puVar1 + 1,(<lambda_27> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae5c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_28>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>::<lambda_28>
            (puVar1 + 1,(<lambda_28> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_29>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>::<lambda_29>
            (puVar1 + 1,(<lambda_29> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedBatch_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedBatch_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144bae700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedItem_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedItem_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144bae780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144bae7a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_2>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>::<lambda_2>
            (puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`2'::<lambda_30>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>::<lambda_30>
            (puVar1 + 1,(<lambda_30> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_31>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>::<lambda_31>
            (puVar1 + 1,(<lambda_31> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae8c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_32>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>::<lambda_32>
            (puVar1 + 1,(<lambda_32> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae920

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_33>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>::<lambda_33>
            (puVar1 + 1,(<lambda_33> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_34>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>::<lambda_34>
            (puVar1 + 1,(<lambda_34> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144bae9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_35>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>::<lambda_35>
            (puVar1 + 1,(<lambda_35> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baea40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_36>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>::<lambda_36>
            (puVar1 + 1,(<lambda_36> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baeaa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_37>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>::<lambda_37>
            (puVar1 + 1,(<lambda_37> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baeb00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_38>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>::<lambda_38>
            (puVar1 + 1,(<lambda_38> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baeb60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_39>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>::<lambda_39>
            (puVar1 + 1,(<lambda_39> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baebc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedBatch_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedBatch_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144baec40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedItem_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedItem_FInstanceCullingLoadBalancerBase__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144baecc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_3>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>::<lambda_3>
            (puVar1 + 1,(<lambda_3> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baed20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`22'::<lambda_40>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>::<lambda_40>
            (puVar1 + 1,(<lambda_40> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baed80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`31'::<lambda_41>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>::<lambda_41>
            (puVar1 + 1,(<lambda_41> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baede0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`31'::<lambda_42>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>::<lambda_42>
            (puVar1 + 1,(<lambda_42> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baee40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`31'::<lambda_43>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>::<lambda_43>
            (puVar1 + 1,(<lambda_43> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baeea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l32::<lambda_44>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`32'::<lambda_44>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144baeec0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_45>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>::<lambda_45>
            (puVar1 + 1,(<lambda_45> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baef20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_46>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>::<lambda_46>
            (puVar1 + 1,(<lambda_46> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baef80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_47>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>::<lambda_47>
            (puVar1 + 1,(<lambda_47> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baefe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_48>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`33'::<lambda_48>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144baf000

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_4>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>::<lambda_4>
            (puVar1 + 1,(<lambda_4> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baf060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_5>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>::<lambda_5>
            (puVar1 + 1,(<lambda_5> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baf0c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_6>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>::<lambda_6>
            (puVar1 + 1,(<lambda_6> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baf120

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_7>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>::<lambda_7>
            (puVar1 + 1,(<lambda_7> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baf180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_8>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>::<lambda_8>
            (puVar1 + 1,(<lambda_8> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144baf1e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::`12'::<lambda_9>,0,1>
             ::_vftable_;
  `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>::<lambda_9>
            (puVar1 + 1,(<lambda_9> *)((longlong)this + 8));
  return puVar1 + 1;
}

// Destroy @ 144bbb0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb0d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb1c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb1f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb2b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb2e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb2f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredAlignedNumInstancesOutputCulling'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdData'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdDataSize'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredNumInstanceIdData'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb3c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb3f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb4b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb4e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb5b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l32::<lambda_44>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_48>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144bbb985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144bbb990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbb9f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbba20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbba50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144bbba80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 144bc34e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc34f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144bc3590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144bc35a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc35b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredAlignedNumInstancesOutputCulling'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc35c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdData'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc35d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdDataSize'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc35e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingOcclusionQueryDeferredContext::DeferredNumInstanceIdData'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc35f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144bc36a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144bc36b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc36c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc36d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc36e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc36f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144bc3780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144bc3790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc37a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc37b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc37c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc37d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc37e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l32::<lambda_44>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc37f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_48>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144bc3880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144c2cb40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddLocalFogVolume'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 144c2cb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveLocalFogVolume'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 144c2cbc0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l15::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UpdateLumenMeshCards'::`15'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144c2cbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Lumen::UpdateCardSceneBuffer'::__l17::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Lumen::UpdateCardSceneBuffer'::`17'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144c2cc00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l19::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UpdateLumenMeshCards'::`19'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144c2cc20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l23::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UpdateLumenMeshCards'::`23'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144c2cc40

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l39::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UpdateLumenMeshCards'::`39'::<lambda_4>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 144c36870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddLocalFogVolume'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144c36875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144c36880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveLocalFogVolume'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144c36885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144c36890

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l15::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144c36895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144c368a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Lumen::UpdateCardSceneBuffer'::__l17::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144c368a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144c368b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l19::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144c368b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144c368c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l23::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144c368c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144c368d0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l39::<lambda_4>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 144c420f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddLocalFogVolume'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144c42100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveLocalFogVolume'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144c42110

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l15::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144c42120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Lumen::UpdateCardSceneBuffer'::__l17::<lambda_2>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144c42130

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l19::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144c42140

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l23::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144c42150

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UpdateLumenMeshCards'::__l39::<lambda_4>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144d5e3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::__l16::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::`16'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144d5e400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::__l20::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::`20'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144d5e420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::UpdateLumenScene'[::K]::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &_vftable_;
  `FDeferredShadingSceneRenderer::UpdateLumenScene'[::K]::<lambda_6>::<lambda_6>
            (puVar1 + 1,(<lambda_6> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144d5e480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::UpdateLumenScene'::__l2::<lambda_7>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 144d6bf80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::__l16::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144d6bf85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144d6bf90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::__l20::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144d6bf95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144d6bfa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::UpdateLumenScene'[::K]::<lambda_6>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144d6bfd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::UpdateLumenScene'::__l2::<lambda_7>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144d6bfd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144d7c8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::__l16::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144d7c8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::__l20::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144d7c8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::UpdateLumenScene'[::K]::<lambda_6>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144d7c8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDeferredShadingSceneRenderer::UpdateLumenScene'::__l2::<lambda_7>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144e7e020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`MaterialCacheSetupNaniteContext'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`MaterialCacheSetupNaniteContext'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// Destroy @ 144e84810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`MaterialCacheSetupNaniteContext'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 144e8ed30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`MaterialCacheSetupNaniteContext'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0> @ 144eefac0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0>::
~TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0>
          (TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_V<lambda_25_>_FMeshEdgesViewFamilySettings___0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 144efb080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParallelMeshDrawCommandPass::DispatchPassSetup'::__l33::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FParallelMeshDrawCommandPass::DispatchPassSetup'::`33'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144efb0a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_25_>_FMeshEdgesViewFamilySettings___0A__0A__Function_Private_Core_UE__6B_
  ;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144efb0c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RenderMeshEdges'::__l2::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 144f01bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParallelMeshDrawCommandPass::DispatchPassSetup'::__l33::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f01bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f01bd0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0>::
Destroy(TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f01bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 144f01be0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RenderMeshEdges'::__l2::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f01be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144f105e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FParallelMeshDrawCommandPass::DispatchPassSetup'::__l33::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144f105f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0>::
GetAddress(TFunction_OwnedObject<FMeshEdgesViewFamilySettings::<lambda_25_>,0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 144f10600

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RenderMeshEdges'::__l2::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144f85660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFCellChunkDraw_HLSL_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFCellChunkDraw_HLSL_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144f856e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEBV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144f85760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::GetParametersAsync'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetParametersAsync___TGPUWorkGroupLoadBalancer_UFCellChunkDraw_HLSL_UE____QEAAXAEAVFRDGBuilder__AEAVFShaderParameters_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f857a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f857c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::FDispatchContext::DispatchSW'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__7__DispatchSW_FDispatchContext_FRenderer_Nanite__QEBAXAEAVFRHIComputeCommandList__AEBUFDispatchList_345_AEBVFViewInfo__HVFRasterizePassParameters___N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 144f85830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l19::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`19'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFCellChunkDraw_HLSL_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFCellChunkDraw_HLSL_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144f858d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEBV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144f85950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__7__DispatchHW_FDispatchContext_FRenderer_Nanite__QEBAXAEAVFRHICommandList__AEBUFDispatchList_345_AEBVFViewInfo__AEBU__TIntRect_H_Math_UE__W4ERasterHardwarePath__HVFRasterizePassParameters___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x50);
  puVar2[9] = *(undefined8 *)((longlong)this + 0x48);
  puVar2[10] = uVar1;
  puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 144f859f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l22::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`22'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l15::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::`15'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFCellChunkDraw_HLSL_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFCellChunkDraw_HLSL_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144f85ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEBV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144f85b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_3>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::`5'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l23::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`23'::<lambda_3>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l26::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`26'::<lambda_4>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144f85bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l30::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`30'::<lambda_5>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 144f8e770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e7d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::GetParametersAsync'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e7f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::FDispatchContext::DispatchSW'::__l8::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l19::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l8::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l22::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l15::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144f8e960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_3>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l23::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l26::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144f8e995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144f8e9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l30::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 144facb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144facb70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144facb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::GetParametersAsync'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::FDispatchContext::DispatchSW'::__l8::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l19::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144facbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144facbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l8::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l22::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l15::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144facc40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144facc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l23::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l26::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144facc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l30::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14501d790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>::TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 14501d7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>::TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFNaniteOwnershipVisibilityParameters____QEAA_PEB_WV__TFunction___A6AXAEAVFNaniteOwnershipVisibilityParameters__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 14501d820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>::TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14501d8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>::TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 14501d8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>::TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFNaniteMaterialsParameters____QEAA_PEB_WV__TFunction___A6AXAEAVFNaniteMaterialsParameters__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 14501d940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>::TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14501d9d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 14501d9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFNaniteMaterialsParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FNaniteMaterialsParameters_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14501da00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014501da05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 14501da50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 14501da60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFNaniteOwnershipVisibilityParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FNaniteOwnershipVisibilityParameters_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14501da80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014501da85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0> @ 1450377e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFNaniteMaterialsParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0> @ 145037800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFNaniteOwnershipVisibilityParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14504c320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateByteAddressBuffer_Impl_AEAV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14504c3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Nanite::DispatchComputeShaderBundle'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14504c400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateByteAddressBuffer_Impl_AEAV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14504c480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateByteAddressBuffer_Impl_AEAV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_IV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14504c500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_3>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::`2'::<lambda_3>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14504c520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_4>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::`2'::<lambda_4>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14504c540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_5>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::`2'::<lambda_5>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14504c560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_6>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::`2'::<lambda_6>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 145051a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145051a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145051a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145051a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145051ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_3>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145051ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145051ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_4>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145051ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145051ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_5>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145051ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145051af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_6>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145051af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145061cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145061ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145061cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145061d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145061d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_3>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145061d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_4>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145061d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_5>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145061d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`DispatchLumenMeshCapturePass'::__l2::<lambda_6>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0> @ 1450b0a90

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0>
::~TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1450be060

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0> *this,
          FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1450be0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPlanarReflection'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1450be0e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1450be120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePlanarReflection'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1450be160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionTransform'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1450be1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l40::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1450be1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l43::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1450be220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l2::<lambda_3>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1450c2590

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001450c2595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1450c25a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPlanarReflection'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001450c25a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1450c25b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1450c25e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePlanarReflection'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001450c25e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1450c25f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionTransform'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1450c2620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l40::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001450c2625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1450c2630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l43::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001450c2635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1450c2640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l2::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1450cef20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FRHICommandListImmediate_&),1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1450cef30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPlanarReflection'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1450cef40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1450cef50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePlanarReflection'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1450cef60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionTransform'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1450cef70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l40::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1450cef80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l43::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1450cef90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePlanarReflectionContents'::__l2::<lambda_3>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 14513b1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)((longlong)this + 0x20);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14513b240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::`5'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14513b260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::`12'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14513b280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::`5'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14513b2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::`12'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14513f160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14513f190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014513f195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14513f1a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014513f1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14513f1b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014513f1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14513f1c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014513f1c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14514a930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14514a940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14514a950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14514a960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14514a970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1452f08c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RefreshRayTracingInstancesSinkFunction'::__l5::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1452f08d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RefreshRayTracingInstancesSinkFunction'::__l5::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1452f0910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RefreshRayTracingInstancesSinkFunction'::__l5::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001452f0915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// CloneToEmptyStorage @ 145313170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l2::<lambda_4>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 145317e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l2::<lambda_4>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145317e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145324140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l2::<lambda_4>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1453739e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget><>'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_&>'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const_&>'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::~TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::GetReflectionCaptureData'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FReflectionEnvironmentSceneData::Reset'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateAllReflectionCaptures'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l8::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l42::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSkyCaptureContents'::__l15::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l46::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l63::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSkyCaptureContents'::__l5::<lambda_3>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CaptureSceneIntoScratchCubemap'::__l7::<lambda_3>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l53::<lambda_3>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l66::<lambda_3>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145373e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l19::<lambda_4>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14537c2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget><>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c2b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_&>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c2c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const_&>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c2d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::~TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c2e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c2f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::GetReflectionCaptureData'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FReflectionEnvironmentSceneData::Reset'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateAllReflectionCaptures'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l8::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l42::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c3a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSkyCaptureContents'::__l15::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c3d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l46::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l63::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSkyCaptureContents'::__l5::<lambda_3>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CaptureSceneIntoScratchCubemap'::__l7::<lambda_3>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l53::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14537c4a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l66::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014537c4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14537c4b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l19::<lambda_4>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14538c980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget><>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538c990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_&>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538c9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const_&>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538c9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::~TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538c9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538c9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::GetReflectionCaptureData'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538c9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FReflectionEnvironmentSceneData::Reset'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538c9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateAllReflectionCaptures'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l8::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l42::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSkyCaptureContents'::__l15::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l46::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l63::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSkyCaptureContents'::__l5::<lambda_3>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CaptureSceneIntoScratchCubemap'::__l7::<lambda_3>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l53::<lambda_3>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AllocateReflectionCaptures'::__l66::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14538ca90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::CaptureOrUploadReflectionCapture'::__l19::<lambda_4>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145422590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454225d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422610

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::FScene'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::FSceneViewState'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddExponentialHeightFog'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454226d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPrecomputedLightVolume'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPrecomputedVolumetricLightmap'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422750

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddWindSource'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422790

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::ApplyWorldOffset'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454227d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchUpdateDecals'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422810

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::DisableSkyLight'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::GPUBenchmark'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::IncrementFrameNumber'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454228d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::OnLevelAddedToWorld'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::OnLevelRemovedFromWorld'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::OnWorldCleanup'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveExponentialHeightFog'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454229d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePrecomputedLightVolume'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePrecomputedVolumetricLightmap'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::ResetPhysicsField'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422a90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::SetPhysicsField'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::SetPrecomputedVisibility'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422b10

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::SetSkyLight'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateParameterCollections'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneSettings'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSpeedTreeWind'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateStaticDrawLists'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateStaticMeshesForMaterials'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422e90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddDecal'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddInvisibleLight'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422f10

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddLight'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddReflectionCapture'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddRuntimeVirtualTexture'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145422fd0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddSpeedTreeWind'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitives'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::GetRelevantLights'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::InvalidateRuntimeVirtualTexture'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454230d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveDecal'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423110

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveLight'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveReflectionCapture'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveRuntimeVirtualTexture'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454231d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveWindSource'::__l5::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RequestPreloadRuntimeVirtualTexture'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalFadeInTime'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalFadeOutTime'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454232d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalTransform'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423310

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateLightProxy'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransforms'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateReflectionCaptureTransform'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454233d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateWindSource'::__l5::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateLightInternal<FUpdateLightColorParameters>'::__l8::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateLightInternal<FUpdateLightTransformParameters>'::__l8::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::ReleaseReflectionCubemap'::__l10::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454234d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>'::__l49::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>'::__l49::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>'::__l72::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>'::__l72::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454235d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::InvalidateLumenSurfaceCache_GameThread'::__l12::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>'::__l15::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>'::__l15::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423690

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::Release'::__l2::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454236d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddRuntimeVirtualTexture'::__l7::<lambda_2>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145423710

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateWindSource'::__l8::<lambda_2>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 145428b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428b90

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::FScene'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::FSceneViewState'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddExponentialHeightFog'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPrecomputedLightVolume'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPrecomputedVolumetricLightmap'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428c20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddWindSource'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428c30

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::ApplyWorldOffset'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchUpdateDecals'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428c90

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::DisableSkyLight'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::GPUBenchmark'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::IncrementFrameNumber'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::OnLevelAddedToWorld'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::OnLevelRemovedFromWorld'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::OnWorldCleanup'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveExponentialHeightFog'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePrecomputedLightVolume'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePrecomputedVolumetricLightmap'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::ResetPhysicsField'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d50

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::SetPhysicsField'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::SetPrecomputedVisibility'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d70

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::SetSkyLight'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateParameterCollections'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneSettings'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSpeedTreeWind'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateStaticDrawLists'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateStaticMeshesForMaterials'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145428fb0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddDecal'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddInvisibleLight'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428fd0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddLight'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145428fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145428fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddReflectionCapture'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddRuntimeVirtualTexture'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429020

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddSpeedTreeWind'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitives'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::GetRelevantLights'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454290b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::InvalidateRuntimeVirtualTexture'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454290e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveDecal'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454290e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454290f0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveLight'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454290f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveReflectionCapture'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveRuntimeVirtualTexture'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429120

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveWindSource'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RequestPreloadRuntimeVirtualTexture'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalFadeInTime'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalFadeOutTime'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454291c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalTransform'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454291f0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateLightProxy'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransforms'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateReflectionCaptureTransform'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429260

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateWindSource'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateLightInternal<FUpdateLightColorParameters>'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454292a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateLightInternal<FUpdateLightTransformParameters>'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454292d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::ReleaseReflectionCubemap'::__l10::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454292d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454292e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>'::__l49::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>'::__l49::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>'::__l72::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>'::__l72::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454293a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::InvalidateLumenSurfaceCache_GameThread'::__l12::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454293a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454293b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>'::__l15::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454293e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>'::__l15::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429410

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::Release'::__l2::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145429420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddRuntimeVirtualTexture'::__l7::<lambda_2>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145429450

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateWindSource'::__l8::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145429455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14543c920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c940

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::FScene'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::FSceneViewState'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddExponentialHeightFog'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPrecomputedLightVolume'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddPrecomputedVolumetricLightmap'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c990

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddWindSource'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c9a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::ApplyWorldOffset'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchUpdateDecals'::__l2::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c9c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::DisableSkyLight'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::GPUBenchmark'::__l2::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14543c9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::IncrementFrameNumber'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543c9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::OnLevelAddedToWorld'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::OnLevelRemovedFromWorld'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::OnWorldCleanup'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveExponentialHeightFog'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePrecomputedLightVolume'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemovePrecomputedVolumetricLightmap'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::ResetPhysicsField'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::SetPhysicsField'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::SetPrecomputedVisibility'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::SetSkyLight'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ca90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateParameterCollections'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543caa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneSettings'::__l2::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSpeedTreeWind'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateStaticDrawLists'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateStaticMeshesForMaterials'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543caf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddDecal'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddInvisibleLight'::__l5::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddLight'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddReflectionCapture'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddRuntimeVirtualTexture'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cbb0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddSpeedTreeWind'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitives'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::GetRelevantLights'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::InvalidateRuntimeVirtualTexture'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cbf0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveDecal'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveLight'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveReflectionCapture'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveRuntimeVirtualTexture'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::RemoveWindSource'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RequestPreloadRuntimeVirtualTexture'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalFadeInTime'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalFadeOutTime'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateDecalTransform'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14543cc80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateLightProxy'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14543cc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransforms'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateReflectionCaptureTransform'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14543ccb0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateWindSource'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ccc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateLightInternal<FUpdateLightColorParameters>'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ccd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateLightInternal<FUpdateLightTransformParameters>'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14543cce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::ReleaseReflectionCubemap'::__l10::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543ccf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>'::__l49::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14543cd00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>'::__l49::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14543cd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>'::__l72::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>'::__l72::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::InvalidateLumenSurfaceCache_GameThread'::__l12::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>'::__l15::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>'::__l15::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cd60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::Release'::__l2::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddRuntimeVirtualTexture'::__l7::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14543cd80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::UpdateWindSource'::__l8::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1454990e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145499120

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FSceneViewState::Destroy'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145499160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454991a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  void *_Src;
  
  puVar1 = param_1->InlineAllocation + 8;
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::`8'::<lambda_1>,0,0>::
        _vftable_;
  *(FRHICopyTextureInfo **)puVar1 = (FRHICopyTextureInfo *)0x0;
  puVar2 = param_1->InlineAllocation + 0x14;
  iVar3 = *(int *)((longlong)this + 0x10);
  _Src = *(void **)((longlong)this + 8);
  *(int *)(param_1->InlineAllocation + 0x10) = iVar3;
  if (iVar3 == 0) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    return puVar1;
  }
  ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICopyTextureInfo>_>
            (0x3c,4,iVar3,0,(ForElementType<FRHICopyTextureInfo> *)puVar1,iVar3,(int *)puVar2);
  memcpy(*(FRHICopyTextureInfo **)puVar1,_Src,(longlong)iVar3 * 0x3c);
  return puVar1;
}

// CloneToEmptyStorage @ 145499240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145499280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454992c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l30::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145499300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145499340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145499380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l32::<lambda_3>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454993c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145499400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1454a0250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a0255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454a0260

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FSceneViewState::Destroy'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a0265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454a0270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a0275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454a0280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a0285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454a0290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454a02c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a02c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454a02d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l30::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454a0300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454a0330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a0335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454a0340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l32::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454a0370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a0375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454a0380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454a0385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1454a73b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a73c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FSceneViewState::Destroy'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a73d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a73e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a73f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a7400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a7410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l30::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a7420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a7430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a7440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::UpdateSceneCaptureContents'::__l32::<lambda_3>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a7450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454a7460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0> @ 1454d65c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AXAEAVFRHICommandList___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0> @ 1454d65e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEAVFRDGBuilder__AEBUFSceneRenderFunctionInputs___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1454e46e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0> *this,
                   FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>
                    *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::PostRenderAllViewports'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e47a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorBackup'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e47e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorRestore'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l12::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::RemoveLumenSceneData'::__l12::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e48a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderBegin'::__l2::<lambda_2>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FSceneRenderer::OnRenderBegin'::`2'::<lambda_2>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1454e4900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l18::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l22::<lambda_3>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_3>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e49c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_5>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_6>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1454e4a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_7>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1454eabe0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eabe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1454eabf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>::
Destroy(TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eabf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1454eac00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::PostRenderAllViewports'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eac05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eac10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorBackup'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eac15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eac20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorRestore'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eac25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eac30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l12::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eac35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eac40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::RemoveLumenSceneData'::__l12::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eac45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eac50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderBegin'::__l2::<lambda_2>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1454eac80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l18::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eac85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eac90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l22::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eac95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eaca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eaca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eacb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_5>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eacb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eacc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_6>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eacc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1454eacd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_7>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001454eacd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1454f1cb0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FRHICommandList_&),1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1454f1cc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>::
GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),1,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 1454f1cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::PostRenderAllViewports'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorBackup'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorRestore'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l12::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::RemoveLumenSceneData'::__l12::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderBegin'::__l2::<lambda_2>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l18::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::__l22::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_3>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_5>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_6>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1454f1d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_7>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14552b4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshElementContext::LaunchRenderThreadTask'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14552b4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::`19'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14552b510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14552b530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::`19'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14552b550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14552b570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14552b590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14553b040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshElementContext::LaunchRenderThreadTask'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14553b070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014553b075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14553b080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014553b085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14553b090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014553b095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14553b0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014553b0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14553b0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014553b0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14553b0c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_4>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014553b0c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1455436a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshElementContext::LaunchRenderThreadTask'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1455436b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1455436c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1455436d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1455436e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1455436f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145543700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145585540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``RenderShadowDepthAtlasNanite'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``RenderShadowDepthAtlasNanite'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 14558f0d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``RenderShadowDepthAtlasNanite'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 145598450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``RenderShadowDepthAtlasNanite'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145621520

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShadowSceneRenderer::CreateNaniteViewsForPass'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x300,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FShadowSceneRenderer::CreateNaniteViewsForPass'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  FVirtualShadowMapArray::FVirtualShadowMapArray
            ((FVirtualShadowMapArray *)(puVar2 + 2),
             (FVirtualShadowMapArray *)((longlong)this + 0x10));
  uVar1 = *(undefined8 *)((longlong)this + 0x2b8);
  puVar2[0x56] = *(undefined8 *)((longlong)this + 0x2b0);
  puVar2[0x57] = uVar1;
  FNaniteVirtualShadowMapRenderPass::FNaniteVirtualShadowMapRenderPass
            ((FNaniteVirtualShadowMapRenderPass *)(puVar2 + 0x58),
             (FNaniteVirtualShadowMapRenderPass *)((longlong)this + 0x2c0));
  *(undefined4 *)(puVar2 + 0x5e) = *(undefined4 *)((longlong)this + 0x2f0);
  return (FVirtualShadowMapArray *)(puVar2 + 2);
}

// CloneToEmptyStorage @ 1456215a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l13::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1456215e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l16::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145621620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l19::<lambda_3>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14562b450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShadowSceneRenderer::CreateNaniteViewsForPass'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14562b480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l13::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014562b485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14562b490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l16::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014562b495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14562b4a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l19::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014562b4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1456350c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShadowSceneRenderer::CreateNaniteViewsForPass'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1456350d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l13::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1456350e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l16::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1456350f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l19::<lambda_3>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145651420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 145651430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSkinningSceneParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FSkinningSceneParameters_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 145651450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145651455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1456514a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>::TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 1456514b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>::TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFSkinningSceneParameters____QEAA_PEB_WV__TFunction___A6AXAEAVFSkinningSceneParameters__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 145651530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>::TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0> @ 145666a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSkinningSceneParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 145676b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676b80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddSkyAtmosphere'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddSparseVolumeTextureViewer'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveSkyAtmosphere'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveSparseVolumeTextureViewer'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinningSceneExtension::Tick'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145676d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::`2'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 14567a630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014567a635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14567a640

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddSkyAtmosphere'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14567a670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddSparseVolumeTextureViewer'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014567a675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14567a680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveSkyAtmosphere'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014567a685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14567a690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveSparseVolumeTextureViewer'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014567a695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14567a6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinningSceneExtension::Tick'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14567a6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014567a6d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14567a6e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14567a710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 145681fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145681fe0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FScene::AddSkyAtmosphere'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145681ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddSparseVolumeTextureViewer'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145682000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveSkyAtmosphere'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145682010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveSparseVolumeTextureViewer'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145682020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinningSceneExtension::Tick'::__l2::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145682030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145682040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145682050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1456bd560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1456bd570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSplineMeshSceneResourceParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FSplineMeshSceneResourceParameters_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1456bd590

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001456bd595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1456bdbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 1456bdbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFSplineMeshSceneResourceParameters____QEAA_PEB_WV__TFunction___A6AXAEAVFSplineMeshSceneResourceParameters__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 1456bdc50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0> @ 1456dd9e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSplineMeshSceneResourceParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// GetAddress @ 145737510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 145737520

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFParameters_RendererViewData__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FParameters_ptr_FRDGBuilder_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 145737540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145737545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 145738090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>::TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 1457380a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>::TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFParameters_RendererViewData____QEAA_PEB_WV__TFunction___A6AXAEAVFParameters_RendererViewData__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 145738120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>::TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0> @ 1457500a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFParameters_RendererViewData__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14575b5a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFPackedView_Nanite__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFPackedView_Nanite__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14575b620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::CaptureNextFrame'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14575b660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::ClearCaptureData'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14575b6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::DisableLiveCapture'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14575b6e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::EnableLiveCapture'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14575b720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::ProcessPrimitives'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14575b760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRayTracingTestbed::RunTest'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14575b7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererViewDataManager::FRendererViewDataManager'::__l14::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRendererViewDataManager::FRendererViewDataManager'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14575b7c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFPackedView_Nanite__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFPackedView_Nanite__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14575b840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEAV__TArray_UFPackedView_Nanite__V__TSizedDefaultAllocator__0CA_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEAV__TArray_UFPackedView_Nanite__V__TSizedDefaultAllocator__0CA_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 145762df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145762e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::CaptureNextFrame'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145762e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145762e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::ClearCaptureData'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145762e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145762e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::DisableLiveCapture'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145762e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145762e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::EnableLiveCapture'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145762e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145762e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::ProcessPrimitives'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145762e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145762e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRayTracingTestbed::RunTest'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145762e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145762e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererViewDataManager::FRendererViewDataManager'::__l14::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145762e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145762e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145762ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14576fd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14576fd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::CaptureNextFrame'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14576fd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::ClearCaptureData'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14576fd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::DisableLiveCapture'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14576fd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::EnableLiveCapture'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14576fd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewDebugInfo::ProcessPrimitives'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14576fd90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRayTracingTestbed::RunTest'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14576fda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRendererViewDataManager::FRendererViewDataManager'::__l14::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14576fdb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14576fdc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1457a3f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>::TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 1457a3f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>::TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFVirtualShadowMapInvalidationSceneUniforms____QEAA_PEB_WV__TFunction___A6AXAEAVFVirtualShadowMapInvalidationSceneUniforms__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 1457a3fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>::TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1457a4460

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
             *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1457a4470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFVirtualShadowMapInvalidationSceneUniforms__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FVirtualShadowMapInvalidationSceneUniforms_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1457a4490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001457a4495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0> @ 1457c3a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFVirtualShadowMapInvalidationSceneUniforms__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1457dde70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedView_Nanite__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedView_Nanite__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 1457ddef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedView_Nanite__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedView_Nanite__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 1457ddf70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::`24'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1457ddf90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::`37'::<lambda_2>,0,1>
             ::_vftable_;
  `FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>::<lambda_2>
            (puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1457ddff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_3>__1____CreateStructuredBuffer_Impl_AEBV__TArray_UFPackedView_Nanite__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______YAPEAVFRDGBuffer__AEAVFRDGBuilder__PEB_W__QEAV__TFunction___A6AAEBV__TArray_UFPackedView_Nanite__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_____XZ___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 1457de070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::`24'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1457de090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::`37'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1457de0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::`24'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1457e2d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1457e2d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1457e2da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001457e2da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1457e2db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1457e2de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1457e2e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001457e2e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1457e2e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001457e2e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1457e2e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001457e2e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1457f2080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1457f2090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1457f20a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1457f20b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1457f20c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1457f20d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1457f20e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1457f20f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145861d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderer::InitVolumetricCloudsForViews'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145861d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddVolumetricCloud'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 145861d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveVolumetricCloud'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14586b370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderer::InitVolumetricCloudsForViews'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014586b375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14586b380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddVolumetricCloud'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014586b385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14586b390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveVolumetricCloud'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014586b395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1458707d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FSceneRenderer::InitVolumetricCloudsForViews'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1458707e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::AddVolumetricCloud'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1458707f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScene::RemoveVolumetricCloud'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1458a91d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1458a91e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFMeshPaintTextureParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FMeshPaintTextureParameters_ptr_FRDGBuilder_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1458a9200

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001458a9205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1458aa070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>::TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 1458aa080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>::TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TSceneUniformBufferMemberRegistration_VFMeshPaintTextureParameters____QEAA_PEB_WV__TFunction___A6AXAEAVFMeshPaintTextureParameters__AEAVFRDGBuilder___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// Destroy @ 1458aa100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>::TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0> @ 1458ceb60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFMeshPaintTextureParameters__AEAVFRDGBuilder___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1458e1680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1458e16c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1458e1700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l8::<lambda_2>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1458e8860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1458e8890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001458e8895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1458e88a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l8::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001458e88a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1458feab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1458feac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1458fead0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l8::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

