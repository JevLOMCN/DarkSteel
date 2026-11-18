// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 117

// CloneToEmptyStorage @ 14abd3600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateTextureRegionsMutable'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
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

// Destroy @ 14abd4f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateTextureRegionsMutable'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014abd4f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14abd9740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UpdateTextureRegionsMutable'::__l5::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14ac16b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``Impl::Task_Mutable_UpdateImage'::__l2::<lambda_2>::operator()'::__l52::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14ac16bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[3] = 0;
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14ac16cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14ac16d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14ac16d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14ac16d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ReleaseInstanceID'::__l3::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14ac16dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCustomizableObjectSystem::BeginDestroy'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14ac16e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14ac16e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_LockCache'::__l43::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14ac16e90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FinishUpdateGlobal'::__l93::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14ac16ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`12'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`12'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FMutableTextureMipDataProvider::GetMips'::`70'::<lambda_1>::operator()'::`15'::<lambda_1>,0,0>
        ::_vftable_;
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

// CloneToEmptyStorage @ 14ac16f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac16f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_LockCache'::__l2::<lambda_2>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14ac16fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::__l2::<lambda_2>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14ac17000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 14ac17040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l29::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 14ac17080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`12'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac170a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`12'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac170c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l23::<lambda_3>,1,1>::
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

// CloneToEmptyStorage @ 14ac17100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l29::<lambda_3>,1,0>::
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

// CloneToEmptyStorage @ 14ac17140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`14'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac17160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`14'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac17180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::`14'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ac171a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::`14'::<lambda_4>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14ac17f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``Impl::Task_Mutable_UpdateImage'::__l2::<lambda_2>::operator()'::__l52::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac17f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac17f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac17f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac17f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac17f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac17f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac17f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac17f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac17f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac17fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac17fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac17fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac18000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ReleaseInstanceID'::__l3::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac18040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCustomizableObjectSystem::BeginDestroy'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac18080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_LockCache'::__l43::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18090

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FinishUpdateGlobal'::__l93::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac180a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac180a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac180b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac180b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac180c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac180c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac180d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac180d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac180e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac180e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac180f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_LockCache'::__l2::<lambda_2>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac180f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::__l2::<lambda_2>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_2>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l29::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l23::<lambda_3>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac18180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l29::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac18190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac18195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac181a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac181a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac181b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac181b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac181c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac181c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14ac1d150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``Impl::Task_Mutable_UpdateImage'::__l2::<lambda_2>::operator()'::__l52::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ReleaseInstanceID'::__l3::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d1f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UCustomizableObjectSystem::BeginDestroy'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ac1d210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_LockCache'::__l43::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d220

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FinishUpdateGlobal'::__l93::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_LockCache'::__l2::<lambda_2>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::__l2::<lambda_2>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l29::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l23::<lambda_3>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ac1d2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::__l29::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac1d330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14ac58030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::`2'::<lambda_1>::operator()'::`29'::<lambda_1>,0,1>
             ::_vftable_;
  ``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29
  ::<lambda_1>::<lambda_1>(puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14ac58090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  puVar1 = param_1->InlineAllocation + 8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  lVar2 = *(longlong *)((longlong)this + 8);
  *(longlong *)puVar1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return puVar1;
}

// CloneToEmptyStorage @ 14ac580d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`26'::<lambda_2>,0,0>
        ::_vftable_;
  puVar1 = param_1->InlineAllocation + 8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  lVar2 = *(longlong *)((longlong)this + 8);
  *(longlong *)puVar1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return puVar1;
}

// CloneToEmptyStorage @ 14ac58110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`87'::<lambda_2>,0,1>
             ::_vftable_;
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

// CloneToEmptyStorage @ 14ac58190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x80,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`115'::<lambda_2>,0,1>
             ::_vftable_;
  `FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>::<lambda_2>
            (puVar1 + 2,(<lambda_2> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14ac581f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::`93'::<lambda_3>,0,1>
             ::_vftable_;
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

// CloneToEmptyStorage @ 14ac58270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::`124'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14ac5af30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac5af60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac5af65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac5af70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac5af75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ac5af80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac5afb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac5afe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14ac5b010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ac5b015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14ac5c2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac5c2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac5c300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ac5c310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ac5c320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ac5c330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14ac5c340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

