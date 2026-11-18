// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1231

// CloneToEmptyStorage @ 148e5d570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148e5d5b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 148e5d610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148e5d730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148e5d750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148e5d790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFNiagaraMeshRendererMeshPropertiesBase__VUNiagaraDataInterfaceArrayMesh____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148e5d830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148e5d8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148e5d8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148e5d930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148e5d950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 148e5d990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,1,1>
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

// Destroy @ 148e621e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148e62210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148e62240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e622a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148e622d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e622d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e622e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e622e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e622f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e622f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148e62340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148e62380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148e62385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148e62390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148e623c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 148e687f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceActorComponent::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceConsoleVariable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e688a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e688b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e688c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e688d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e688e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e688f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraMeshRendererMeshPropertiesBase,UNiagaraDataInterfaceArrayMesh>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148e68910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAsyncGpuTrace::InitPerInstanceData'::__l29::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea5920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::
~TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea5940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector2_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea5960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector4_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea5980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea59a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
~TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AUFLinearColor__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea59c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
~TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AUFNiagaraID__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea59e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
~TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AHAEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0> @ 148ea5a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
~TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          (TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AMAEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 148eadd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TQuat<float>_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector2_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector2<float>_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eaddc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector4_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector4<float>_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<float>_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eade00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AUFLinearColor__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FLinearColor_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eade20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AUFNiagaraID__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FNiagaraID_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eade40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AHAEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_int_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eade60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AMAEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_float_FNiagaraSimCacheAttributeReaderHelper_ptr_int **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eade80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<int,int>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_HH_FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<float,float>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_MM_FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<double,float>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_NM_FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TQuat<double>,UE::Math::TQuat<float>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TQuat_N_Math_UE__U__TQuat_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadf00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector2<double>,UE::Math::TVector2<float>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TVector2_N_Math_UE__U__TVector2_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadf20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector4<double>,UE::Math::TVector4<float>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TVector4_N_Math_UE__U__TVector4_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadf40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector<double>,UE::Math::TVector<float>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_U__TVector_N_Math_UE__U__TVector_M_23__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadf60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<FLinearColor,FLinearColor>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____AddRowColum_UFLinearColor__U1__FBuiltDataTable_NDIDataTableLocal__AEAAXPEAVUScriptStruct__PEAVFProperty__AEBUFNiagaraTypeDefinition___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eadf80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1___R1_7__PostSimulate_FNDISimpleCounterProxy__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z_QEBA_V__TArrayView___CBU__TTuple_PEAXI__H___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 148eadfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_7__PostSimulate_FNDIProxy_NDIMemoryBufferLocal__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_V__TArrayView___CBU__TTuple_PEAXI__H___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  ``NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>
  ::<lambda_1>(puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 148eae040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_7__PostSimulate_FNDISimpleCounterProxy__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 148eae0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::`16'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 148eae100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::`18'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eae120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::`15'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eae140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FNDIProxy::SendGameToRender'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 148eae240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataTable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148eae3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIPhysicsAssetData::Release'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 148eae460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>::operator()'::__l7::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148eae4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData'::__l8::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__7__PostSimulate_FNDIProxy_NDIMemoryBufferLocal__UEAAXAEBUFNDIGpuComputePostSimulateContext___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 148eae540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame'::__l8::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::__l10::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae5c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate'::__l17::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::__l17::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae6c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMemoryBufferLocal::FNDIProxy::PreStage'::__l11::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  void *_Src;
  
  puVar1 = param_1->InlineAllocation + 8;
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___PreStage_FNDIProxy_NDIMemoryBufferLocal__UEAAXAEBUFNDIGpuComputePreStageContext___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
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
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar3,0,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
  memcpy(*(FScriptContainerElement **)puVar1,_Src,(longlong)iVar3 << 2);
  return puVar1;
}

// CloneToEmptyStorage @ 148eae760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame'::__l11::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae7e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148eae820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::__l8::<lambda_2>,1,1>::
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

// CloneToEmptyStorage @ 148eae860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l19::<lambda_2>,1,0>
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

// Destroy @ 148eb34d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb34d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb34e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb34e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb34f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb34f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
Destroy(TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
Destroy(TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::Destroy
          (TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::Destroy
          (TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<int,int>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<float,float>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<double,float>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TQuat<double>,UE::Math::TQuat<float>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector2<double>,UE::Math::TVector2<float>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb35a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector4<double>,UE::Math::TVector4<float>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb35a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb35b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector<double>,UE::Math::TVector<float>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb35b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb35c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<FLinearColor,FLinearColor>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb35c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb35d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb36a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb36a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb36b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb36b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb36c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb36c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb36d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb36d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb36e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FNDIProxy::SendGameToRender'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataTable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb37c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb37f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIPhysicsAssetData::Release'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb37f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>::operator()'::__l7::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb3810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb38a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::__l10::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb38d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate'::__l17::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::__l17::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMemoryBufferLocal::FNDIProxy::PreStage'::__l11::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148eb39a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame'::__l11::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb39d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::__l8::<lambda_2>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148eb3a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l19::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148eb3a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 148ebbcf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
GetAddress(TFunction_OwnedObject<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::
GetAddress(TFunction_OwnedObject<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::GetAddress
          (TFunction_OwnedObject<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>::GetAddress
          (TFunction_OwnedObject<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 148ebbd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<int,int>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<float,float>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbd90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<double,float>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TQuat<double>,UE::Math::TQuat<float>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbdb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector2<double>,UE::Math::TVector2<float>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbdc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector4<double>,UE::Math::TVector4<float>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbdd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<UE::Math::TVector<double>,UE::Math::TVector<float>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FBuiltDataTable::AddRowColum<FLinearColor,FLinearColor>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbdf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDISimpleCounterProxy::PostSimulate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIDataTableLocal::FNDIProxy::SendGameToRender'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbe90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDataTable::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbeb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::DestroyPerInstanceData'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::InitPerInstanceData'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIPhysicsAssetData::Release'::__l5::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>::operator()'::__l7::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceEmitterProperties::InitPerInstanceData'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMemoryBufferLocal::FNDIProxy::PostSimulate'::__l8::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheReadFrame'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::PushToRenderThreadImpl'::__l10::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate'::__l17::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbf90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSceneCapture2D::PerInstanceTickPostSimulate'::__l17::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheWriteFrame'::__l18::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbfb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMemoryBufferLocal::FNDIProxy::PreStage'::__l11::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbfc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMemoryBuffer::SimCacheReadFrame'::__l11::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbfd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimpleCounter::SimCacheWriteFrame'::__l15::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebbff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::__l8::<lambda_2>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148ebc000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l19::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 148f91330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148f91370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148f913b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::__l3::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148f913f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148f91430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148f91470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetCopyFunction___FTypeHelper_M_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetCopyFunction'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetCopyFunction___FTypeHelper__N_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f914b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetGetterFunction___FTypeHelper_M_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f914d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetGetterFunction'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetGetterFunction___FTypeHelper__N_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f914f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::InitPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 148f91550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 148f91590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISocketReaderLocal::FNDIProxy::PreStage'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  void *_Src;
  
  puVar1 = param_1->InlineAllocation + 8;
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__PreStage_FNDIProxy_NDISocketReaderLocal__UEAAXAEBUFNDIGpuComputePreStageContext___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
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
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar3,0,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
  memcpy(*(FScriptContainerElement **)puVar1,_Src,(longlong)iVar3);
  return puVar1;
}

// CloneToEmptyStorage @ 148f91630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshUvMapping::ReleaseGpuQuadTree'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 148f91670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_U__TVector2_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f916b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_U__TVector4_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f916d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_U__TVector_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f916f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_UFLinearColor___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetCopyFunction___FTypeHelper_UFNiagaraPosition___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetGetterFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetGetterFunction___FTypeHelper_U__TVector2_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetGetterFunction___FTypeHelper_U__TVector4_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetGetterFunction___FTypeHelper_U__TVector_M_Math_UE___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f917b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetGetterFunction___FTypeHelper_UFLinearColor___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f917d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__7__GetGetterFunction___FTypeHelper_UFNiagaraPosition___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f917f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIStaticMeshLocal::FInstanceData_GameThread::Init'::__l106::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__GK___Init_FInstanceData_GameThread_NDIStaticMeshLocal__QEAA_NPEAVUNiagaraDataInterfaceStaticMesh__PEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::`8'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l9::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__8__GetCopyFunction___FTypeHelper_M_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l9::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__8__GetGetterFunction___FTypeHelper_M_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l12::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__M___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l12::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__M___GetCopyFunction___FTypeHelper_UFLinearColor___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f918b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l12::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__M___GetGetterFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f918d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l12::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__M___GetGetterFunction___FTypeHelper_UFLinearColor___NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f918f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l16::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__BA___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l16::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_3>__BA___GetGetterFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l20::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_4>__BE___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l20::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_4>__BE___GetGetterFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l24::<lambda_5>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__BI___GetCopyFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEBX_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148f91990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l24::<lambda_5>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_5>__BI___GetGetterFunction___FTypeHelper_H_NDIUObjectPropertyReaderLocal__SA_AV__TFunction___A6AXAEBUFNiagaraLWCConverter__PEAX_Z__PEBVFProperty__PEAVUObject__PEAVUFunction___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 148fa7de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::__l3::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148fa7e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetCopyFunction'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetGetterFunction'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::InitPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148fa7ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISocketReaderLocal::FNDIProxy::PreStage'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshUvMapping::ReleaseGpuQuadTree'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIStaticMeshLocal::FInstanceData_GameThread::Init'::__l106::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l9::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa7ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l9::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa7ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l12::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l12::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l12::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l12::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l16::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l16::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l20::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l20::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l24::<lambda_5>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148fa8090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l24::<lambda_5>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fa8095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 148fb0f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTexture::PerInstanceTick'::__l3::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetCopyFunction'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetGetterFunction'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::InitPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb0ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISocketReaderLocal::FNDIProxy::PreStage'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMeshUvMapping::ReleaseGpuQuadTree'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetCopyFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb10a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb10b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb10c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb10d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetGetterFunction'::__l8::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb10e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIStaticMeshLocal::FInstanceData_GameThread::Init'::__l106::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb10f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetCopyFunction'::__l9::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<float>::GetGetterFunction'::__l9::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l12::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetCopyFunction'::__l12::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l12::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetGetterFunction'::__l12::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l16::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l16::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l20::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb1190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l20::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb11a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetCopyFunction'::__l24::<lambda_5>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fb11b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetGetterFunction'::__l24::<lambda_5>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148fe2d00

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

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 148fe2d10

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

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXPEAVUNiagaraComponent___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_UNiagaraComponent_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 148fe2d30

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

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148fe2d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0> @ 149024780

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

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UNiagaraComponent_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAVUNiagaraComponent___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149032cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::TSTR_NiagaraSetDynamicData2391>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149032d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149032d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraComputeExecutionContext::Reset'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149032d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149032dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::<lambda_2>,1,1>
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

// Destroy @ 14903ce90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::TSTR_NiagaraSetDynamicData2391>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14903cec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014903cec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14903ced0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraComputeExecutionContext::Reset'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014903ced5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14903cee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14903cf10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 149043090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::TSTR_NiagaraSetDynamicData2391>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1490430a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1490430b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraComputeExecutionContext::Reset'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1490430c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1490430d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1490d3830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::~FNiagaraDataChannelData'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1490d3870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d38b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d38f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d39b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d39f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d3b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_EVUNiagaraDataInterfaceArrayUInt8____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_HVUNiagaraDataInterfaceArrayInt32____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_MVUNiagaraDataInterfaceArrayFloat____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TMatrix_M_Math_UE__VUNiagaraDataInterfaceArrayMatrix____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TQuat_M_Math_UE__VUNiagaraDataInterfaceArrayQuat____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TVector2_M_Math_UE__VUNiagaraDataInterfaceArrayFloat2____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TVector4_M_Math_UE__VUNiagaraDataInterfaceArrayFloat4____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_U__TVector_M_Math_UE__VUNiagaraDataInterfaceArrayFloat3____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFLinearColor__VUNiagaraDataInterfaceArrayColor____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraID__VUNiagaraDataInterfaceArrayNiagaraID____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl_UFNiagaraPosition__VUNiagaraDataInterfaceArrayPosition____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1__PostSimulate___FNDIArrayProxyImpl__NVUNiagaraDataInterfaceArrayBool____UEAAXAEBUFNDIGpuComputePostSimulateContext___Z_QEBA_AEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d3ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCamera::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1490d4070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d40b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d40f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1490d4130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d41b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::Reset'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 1490d41f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d4250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateCQT'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1490d4290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d42d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface::~UNiagaraDataInterface'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1490d4310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d43d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d44d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d45d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_EVUNiagaraDataInterfaceArrayUInt8____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_HVUNiagaraDataInterfaceArrayInt32____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_MVUNiagaraDataInterfaceArrayFloat____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_U__TMatrix_M_Math_UE__VUNiagaraDataInterfaceArrayMatrix____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_U__TQuat_M_Math_UE__VUNiagaraDataInterfaceArrayQuat____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d46b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_U__TVector2_M_Math_UE__VUNiagaraDataInterfaceArrayFloat2____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d46d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_U__TVector4_M_Math_UE__VUNiagaraDataInterfaceArrayFloat4____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d46f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_U__TVector_M_Math_UE__VUNiagaraDataInterfaceArrayFloat3____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFLinearColor__VUNiagaraDataInterfaceArrayColor____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFNiagaraID__VUNiagaraDataInterfaceArrayNiagaraID____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl_UFNiagaraPosition__VUNiagaraDataInterfaceArrayPosition____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__InitPerInstanceData___FNDIArrayProxyImpl__NVUNiagaraDataInterfaceArrayBool____UEAA_NPEAVUNiagaraDataInterface__PEAXPEAVFNiagaraSystemInstance___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d47d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1490d4890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelGameData::AppendFromDataSet'::__l6::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDataChannelGameData::AppendFromDataSet'::`6'::<lambda_1>,0,1>
             ::_vftable_;
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
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d4900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1490d4980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelGameData::WriteToDataSet'::__l9::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDataChannelGameData::WriteToDataSet'::`9'::<lambda_1>,0,1>
             ::_vftable_;
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

// CloneToEmptyStorage @ 1490d49f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::__l10::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1490d4a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterBool'::__l16::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterBool'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterFloat'::__l16::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterFloat'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterInteger'::__l16::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterInteger'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetPausedState'::__l16::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetPausedState'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateLocation'::__l16::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateLocation'::`16'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1490d4b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdatePitch'::__l16::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdatePitch'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateRotation'::__l16::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateRotation'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateVolume'::__l16::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateVolume'::`16'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1490d4bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::CreateRenderThreadProxy'::__l19::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1490d4bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l19::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::`19'::<lambda_1>,0,1>
             ::_vftable_;
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

// CloneToEmptyStorage @ 1490d4c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::EndFrame'::__l43::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1490d4fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d4fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d5020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d5060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d50a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d50e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d5120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d5160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d51a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d51e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d5220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d5260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1490d52a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSubmixListener::UnregisterFromSubmix'::__l13::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1490d52e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d5320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d5360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d53a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d53e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d5420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d5460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d54a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d54e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d5520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d5560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d55a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1490d55e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l24::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::`24'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1490e8210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::~FNiagaraDataChannelData'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e82b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e82e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e83a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e83d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e84c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e84f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e85b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e85e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e86a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e86a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e86b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCamera::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e86b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e86c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e86c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e86d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e86d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e86e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e86e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e86f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::Reset'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateCQT'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e87c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e87c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e87d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface::~UNiagaraDataInterface'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e87d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e87e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e87e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e87f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e87f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e88a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e88a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e88b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e88b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e88c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e88c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e88d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e88d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e88e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e88e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e88f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e88f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e89a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelGameData::AppendFromDataSet'::__l6::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e89d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelGameData::WriteToDataSet'::__l9::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::__l10::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterBool'::__l16::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterFloat'::__l16::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterInteger'::__l16::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetPausedState'::__l16::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateLocation'::__l16::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdatePitch'::__l16::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateRotation'::__l16::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateVolume'::__l16::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e8b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e8b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::CreateRenderThreadProxy'::__l19::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l19::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::EndFrame'::__l43::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e8ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSubmixListener::UnregisterFromSubmix'::__l13::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e9025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1490e9030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e90c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e90f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e91b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e91e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1490e9270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l24::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001490e9275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 149102580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::~FNiagaraDataChannelData'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491025a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491025b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491025c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491025d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491025e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491025f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491026a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491026b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491026c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491026d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491026e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491026f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::PostSimulate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCamera::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::PostAudioToGPU'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::PostDataToGPU'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCurlNoise::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCurveBase::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::Reset'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayInstanceData_RenderThreadBase::SimCacheWriteFrame'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491027a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateCQT'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491027b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySpectrum::UpdateNoiseFloor'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491027c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface::~UNiagaraDataInterface'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491027d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491027e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491027f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491028a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491028b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491028c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491028d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491028e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491028f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::OnUpdateResampling'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::RegisterToAllAudioDevices'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataInterfaceProxyOscilloscope::UnregisterFromAllAudioDevices'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelGameData::AppendFromDataSet'::__l6::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491029a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterface2DArrayTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491029b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceCubeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491029c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelGameData::WriteToDataSet'::__l9::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491029d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::__l10::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491029e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterBool'::__l16::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491029f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterFloat'::__l16::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetParameterInteger'::__l16::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::SetPausedState'::__l16::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateLocation'::__l16::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdatePitch'::__l16::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateRotation'::__l16::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::UpdateVolume'::__l16::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::CreateRenderThreadProxy'::__l19::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l19::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheReadFrame'::__l24::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataChannelData::EndFrame'::__l43::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSubmixListener::UnregisterFromSubmix'::__l13::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<unsigned_char,UNiagaraDataInterfaceArrayUInt8>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<int,UNiagaraDataInterfaceArrayInt32>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<float,UNiagaraDataInterfaceArrayFloat>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TMatrix<float>,UNiagaraDataInterfaceArrayMatrix>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TQuat<float>,UNiagaraDataInterfaceArrayQuat>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector2<float>,UNiagaraDataInterfaceArrayFloat2>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector4<float>,UNiagaraDataInterfaceArrayFloat4>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<UE::Math::TVector<float>,UNiagaraDataInterfaceArrayFloat3>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FLinearColor,UNiagaraDataInterfaceArrayColor>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraID,UNiagaraDataInterfaceArrayNiagaraID>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<FNiagaraPosition,UNiagaraDataInterfaceArrayPosition>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIArrayProxyImpl<bool,UNiagaraDataInterfaceArrayBool>::InitPerInstanceData'::__l5::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149102ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceAudioPlayer::PlayPersistentAudio'::__l24::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 149171b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149171ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149171be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149171c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149171c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149171ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149171ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149171d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149171d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149171dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 149171e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149171e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149171e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149171ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149171f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149171f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149171f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 149171fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149172000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149172040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__4__PostStage_FNDIExportProxy__UEAAXAEBUFNDIGpuComputePostStageContext___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1491720a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1491720e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149172120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 149172160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491721a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491721e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149172220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 149172260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149176790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149176795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491767a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491767a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491767b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491767b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491767c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491767c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491767d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491767d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491767e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491767e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491767f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491768b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491768e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149176915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149176920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149176985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149176990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491769c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491769f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149176a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149176a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149176b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149176b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149176b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149176b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14917d860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIExportLocal::EnqueueGameThreadCallback'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::InitPerInstanceData'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIExportProxy::PostStage'::__l5::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDI_Landscape_SharedResource::Release'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceIntRenderTarget2D::PerInstanceTickPostSimulate'::__l9::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceExport::PerInstanceTick'::__l20::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917d9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917da00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14917da10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1491b6ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b7030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b7070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b70b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b70f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b7130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b7170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b71b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1491b71f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b72b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b72f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1491b73b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1491b73f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1491b7430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1491b7470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1491b74b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b74f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b75b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b75f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1491b7670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 1491b76b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,1,1>
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

// Destroy @ 1491bd720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd7d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001491bd8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1491bd8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bd9f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bda20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bda50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bda80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bdab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bdae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1491bdb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1491c7370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c73a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c73b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c73c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c73d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c73e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c73f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceMeshRendererInfo::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDIRigidMeshCollisionData::ReleaseBuffers'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1491c7490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1491c74a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c74b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2DArray::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c74c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetCube::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c74d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c74e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c74f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1491c7520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 149221e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149221e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149221ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149221ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149221f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149221f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149221fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149221fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149222020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149222060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1492220a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1492220e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149222120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 149222160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1492221a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 1492221e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149222220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 149222260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1492222a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1492222e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,1,0>
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

// CloneToEmptyStorage @ 149222320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,1,1>::
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

// Destroy @ 14922a8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922a960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922a990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922a9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922a9b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922a9e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922aa10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922aa15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922aa20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922aa50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922aa80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922aab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14922aae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014922aae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14922aaf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 149233bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSkeletalMesh::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::DestroyPerInstanceData'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSharedObject::FlushDeletionList'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NDISpriteRendererInfoLocal::FNDIProxy::PushToRenderThread'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 149233c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshConnectivity::Release'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeTexture::PerInstanceTick'::__l8::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceTexture::PerInstanceTick'::__l17::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSet::ResetBuffers'::__l17::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l25::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 149233cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVolumeCache::InitPerInstanceData'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceSparseVolumeTexture::PerInstanceTick'::__l14::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraDataInterfaceVirtualTextureSample::PerInstanceTick'::__l27::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149233cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkeletalMeshGpuDynamicBufferProxy::NewFrame'::__l2::<lambda_3>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492612d0

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

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0>
::GetAddress(TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1492612e0

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

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AVFString__PEAVFNiagaraSystemInstance___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FString_FNiagaraSystemInstance_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149261300

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
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0>
::Destroy(TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149261305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 149261b20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FString),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FString),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 149261b50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FString),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FString),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXVFString___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_FString **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149261b70

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FString),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FString),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149261b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0> @ 149278bb0

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
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0>
::~TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0>
          (TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFString__PEAVFNiagaraSystemInstance___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FString),0,0> @ 149278bd0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FString),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FString),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FString),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXVFString___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149289e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_10>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149289e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_11>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149289ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_12>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149289f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_13>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149289fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_14>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_15>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_16>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a0c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`22'::<lambda_17>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_18>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_19>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14928a200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)this + 0x1c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)this + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)this + 0x24);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)this + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)((longlong)this + 0x2c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)((longlong)this + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)((longlong)this + 0x34);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)((longlong)this + 0x38);
  *(undefined4 *)((longlong)puVar2 + 0x3c) = *(undefined4 *)((longlong)this + 0x3c);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)this + 0x40);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)this + 0x1c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)this + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)this + 0x24);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)this + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)((longlong)this + 0x2c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)((longlong)this + 0x30);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14928a380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`5'::<lambda_1>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a3e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14928a420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14928a460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14928a4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14928a4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14928a520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`21'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14928a540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14928a580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_20>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_21>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_22>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`26'::<lambda_23>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`26'::<lambda_2>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::`32'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14928a790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`11'::<lambda_2>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 14928a830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_3>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_4>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_5>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_6>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928a9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_7>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928aa10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_8>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14928aa70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_9>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 14928b630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b6f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b7b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928b815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928b820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928b885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928b890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928b8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928b8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928b8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928b8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928b8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928b8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928b8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928b900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928b935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928b940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928b9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928ba00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928ba30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928ba60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928ba65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928ba70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928baa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014928baa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14928bab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928bae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928bb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928bb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928bb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928bba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14928bbd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1492a04a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a04b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a04c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a04d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a04e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a04f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a05a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a05b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a05c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a05d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a05e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a05f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a0690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a06a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a06b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a06c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a06d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492a06e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(int),0,0> @ 1492d3500

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(int),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(int),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1492ddd60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(int),0,0> *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_int **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1492ddd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1492ddde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1492dde20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1492dde60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1492ddec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1492ddf00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 1492ddf40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::`6'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)this + 0x1c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)this + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)this + 0x24);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)this + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)((longlong)this + 0x2c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)((longlong)this + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)((longlong)this + 0x34);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1492ddfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1492de020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,1,1>::
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

// CloneToEmptyStorage @ 1492de060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,1,0>::
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

// Destroy @ 1492e05c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(int),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001492e05c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1492e05d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1492e0600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001492e0605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1492e0610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001492e0615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1492e0620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1492e0650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001492e0655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1492e0660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001492e0665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1492e0670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1492e06a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1492e06d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1492e0700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001492e0705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1492ed490

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(int),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1492ed4a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed4c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed4d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraLWCHelper::RebaseEmitters'::__l20::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1492ed530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14933f9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14933fa20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14933fa40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14933fa80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_2>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 149344d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149344d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149344d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149344d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149344d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14934e8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14934e8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14934e8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14934e8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1493973d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 149397410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149397470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1493974d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149397530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149397550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149397590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::`21'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1493975f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`31'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149397610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::`35'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149397630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 149397670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,1,1>::
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

// CloneToEmptyStorage @ 1493976b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`44'::<lambda_2>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149397710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::`53'::<lambda_2>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// Destroy @ 14939c8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939c900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939c930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939c960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939c990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014939c995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14939c9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014939c9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14939c9b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939c9e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014939c9e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14939c9f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014939c9f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14939ca00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939ca30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939ca60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14939ca90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1493a3820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a3830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::GatherEmitterVariables'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a3840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByName'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a3850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`NiagaraSimCacheCompareInternal::InternalSetToleranceByType'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a3860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a3870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()'::__l7::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a3880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a3890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a38a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a38b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a38c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1493a38d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493a38e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1493daaa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1493daae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1493dab20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1493dab60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1493daba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1493dabe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1493dac20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1493dac60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::`4'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1493dacc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1493dad00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::`6'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1493dad20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::`9'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1493dad40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1493dad80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1493dadc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1493dae00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1493dae40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 1493dae80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,1,1>::
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

// Destroy @ 1493dda60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1493dda90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1493ddac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddaf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddaf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddb00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1493ddb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1493ddb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1493ddb90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddb95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddbb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1493ddbe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1493ddc10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddc15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddc20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddc25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddc30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493ddc35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1493ddc40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1493e67a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1493e67b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1493e67c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e67d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e67e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e67f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e6890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1493e68a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0> @ 14942b010

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14943e1e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FParticleSimulationContext_ptr **)(param_1->InlineAllocation + 8) = this->Obj
  ;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14943e200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14943e240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::<lambda_1>,1,0>
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

// Destroy @ 14943fb10

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014943fb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14943fb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14943fb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014943fb55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1494484d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 1494484e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1494484f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 149478e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149478e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149478ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149478f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149478f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149478f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149478fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 149479010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,1,0>::
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

// Destroy @ 149479500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149479505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149479510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149479515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149479520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149479525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149479530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149479535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149479540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149479570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1494795a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494795a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1494795b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494795b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14947aa40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::CaptureForDebugging'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14947aa50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14947aa60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::~FNiagaraStatelessEmitterInstance'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14947aa70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::HandleCompletion'::__l8::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14947aa80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::UpdateSimulationData'::__l22::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14947aa90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback'::__l27::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14947aaa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::ResetSimulation'::__l28::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14947aab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraStatelessEmitterInstance::Init'::__l13::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

