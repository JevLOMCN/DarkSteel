// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 534

// CloneToEmptyStorage @ 1497496c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149749700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149749740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149749780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>::
             _vftable_;
  ::FString::FString((FString *)(puVar1 + 1),(FString *)((longlong)this + 8));
  ::FString::FString((FString *)(puVar1 + 3),(FString *)((longlong)this + 0x18));
  return (FString *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 1497497e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)((longlong)this + 0x28);
  *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)((longlong)this + 0x2c);
  *(undefined8 *)((longlong)puVar2 + 0x34) = *(undefined8 *)((longlong)this + 0x34);
  *(undefined8 *)((longlong)puVar2 + 0x3c) = *(undefined8 *)((longlong)this + 0x3c);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149749870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::`2'::<lambda_1>,0,1>::
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

// CloneToEmptyStorage @ 1497498d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::`2'::<lambda_1>,0,1>::
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
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149749940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::`2'::<lambda_1>,0,1>::
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

// CloneToEmptyStorage @ 1497499a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1497499e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::`2'::<lambda_1>,0,1>::
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

// CloneToEmptyStorage @ 149749a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>,1,0>::
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

// Destroy @ 14974fa20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fa50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fa80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fb40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fbd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14974fc00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014974fc05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1497544f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGTextureDataProviderProxy::ExportTextureUAVs'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataCollectionDataProviderProxy::AllocateResources'::__l27::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149754590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0> @ 1497e1830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::
~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0> @ 1497e1850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::
~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessorKeys__U__TDefaultDelete___CBVIPCGAttributeAccessorKeys______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0> @ 1497e1870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::
~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0> @ 1497e1890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::
~TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0> @ 1497e18b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TQuat_N_Math_UE__AEBV__TPCGValueRange___CBU__TTransform_N_Math_UE__V__TStridedView___CBU__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0> @ 1497e18d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TQuat_N_Math_UE__AEBV__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0> @ 1497e18f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange___CBU__TTransform_N_Math_UE__V__TStridedView___CBU__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0> @ 1497e1910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange___CBU__TTransform_N_Math_UE__V__TStridedView___CBU__TTransform_N_Math_UE__H____AEBV__TPCGValueRange___CBU__TVector_N_Math_UE__V__TStridedView___CBU__TVector_N_Math_UE__H____2_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0> @ 1497e1930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange___CBU__TVector_N_Math_UE__V__TStridedView___CBU__TVector_N_Math_UE__H____1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0> @ 1497e1950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0> @ 1497e1970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange_U__TVector_N_Math_UE__V__TStridedView_U__TVector_N_Math_UE__H____1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0> @ 1497e1990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEBU__TQuat_N_Math_UE__V__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0> @ 1497e19b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEBU__TVector_N_Math_UE__V__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0> @ 1497e19d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NHAEBU__TVector_N_Math_UE__V__TPCGValueRange_U__TVector_N_Math_UE__V__TStridedView_U__TVector_N_Math_UE__H____1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1497f0da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_UPCGData_ptr_FPCGAttributePropertySelector_ptr_bool
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessorKeys__U__TDefaultDelete___CBVIPCGAttributeAccessorKeys______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_UPCGData_ptr_FPCGAttributePropertySelector_ptr_bool
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_UPCGData_ptr_FPCGAttributePropertySelector_ptr_bool
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_UPCGData_ptr_FPCGAttributePropertySelector_ptr_bool
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TQuat_N_Math_UE__AEBV__TPCGValueRange___CBU__TTransform_N_Math_UE__V__TStridedView___CBU__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TQuat<double>_ptr_TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TQuat_N_Math_UE__AEBV__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TQuat<double>_ptr_TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange___CBU__TTransform_N_Math_UE__V__TStridedView___CBU__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TVector<double>_ptr_TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange___CBU__TTransform_N_Math_UE__V__TStridedView___CBU__TTransform_N_Math_UE__H____AEBV__TPCGValueRange___CBU__TVector_N_Math_UE__V__TStridedView___CBU__TVector_N_Math_UE__H____2_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TVector<double>_ptr_TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_ptr_TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_ptr_TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange___CBU__TVector_N_Math_UE__V__TStridedView___CBU__TVector_N_Math_UE__H____1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TVector<double>_ptr_TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_ptr_TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TVector<double>_ptr_TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEAU__TVector_N_Math_UE__AEBV__TPCGValueRange_U__TVector_N_Math_UE__V__TStridedView_U__TVector_N_Math_UE__H____1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TVector<double>_ptr_TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_ptr_TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_ptr
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEBU__TQuat_N_Math_UE__V__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TQuat<double>_ptr_TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEBU__TVector_N_Math_UE__V__TPCGValueRange_U__TTransform_N_Math_UE__V__TStridedView_U__TTransform_N_Math_UE__H_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TVector<double>_ptr_TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NHAEBU__TVector_N_Math_UE__V__TPCGValueRange_U__TVector_N_Math_UE__V__TStridedView_U__TVector_N_Math_UE__H____1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_int_TVector<double>_ptr_TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f0f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1497f0fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1497f0fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1497f1020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``FPCGComputeGraphElement::ExecuteInternal'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497f1050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1497f1090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1497f10d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>,1,1>::
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

// Destroy @ 1497ff000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::Destroy(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff0c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff0c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff0d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497ff110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497ff140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497ff170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497ff175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497ff180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497ff1b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497ff1e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14980f720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
::GetAddress(TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f7b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f7c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TQuat<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f7e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(int,UE::Math::TVector<double>_const_&,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14980f800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGComputeGraphContext::~FPCGComputeGraphContext'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14980f810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14980f820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14980f830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGComputeGraphElement::ExecuteInternal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14980f840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14980f850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14980f860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1498a1750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 1498a1790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x60,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)(puVar1 + 3),
             (FPCGAttributePropertySelector *)((longlong)this + 0x18));
  puVar1[3] = &___7FPCGAttributePropertyInputSelector__6B_;
  *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)((longlong)this + 0x58);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 1498a1810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1498a1870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::__l5::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::`5'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1498a1890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::`20'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  ::FString::FString((FString *)(puVar1 + 4),(FString *)((longlong)this + 0x20));
  return puVar1 + 1;
}

// Destroy @ 1498b12b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001498b12b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1498b12c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1498b12f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1498b1320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::__l5::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001498b1325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1498b1330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1498b4da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1498b4db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1498b4dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGLandscapeData::PrepareForSpatialQuery'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1498b4dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGVolumeData::CopyInternal'::__l5::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1498b4de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0> @ 1499c5710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1499da440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEBVAActor___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_AActor_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1499da460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::`6'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1499da4c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitElement::ExecuteInternal'::__l24::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGWaitElement::ExecuteInternal'::`24'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1499da4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::`6'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1499da550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1499da580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1499df580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001499df585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1499df590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1499df5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitElement::ExecuteInternal'::__l24::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001499df5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1499df5d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1499df600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001499df605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1499df610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_4>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001499df615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1499f4160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(AActor_const_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1499f4170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1499f4180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitElement::ExecuteInternal'::__l24::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1499f4190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGBlueprintPointProcessorSimpleElement::Execute_Implementation'::__l6::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1499f41a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1499f41b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWaitLandscapeReadyElement::ExecuteInternal'::__l2::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 149af9ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAttributeGetFromPointIndexElement::ExecuteInternal'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGAttributeGetFromPointIndexElement::ExecuteInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149afa010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::`5'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149afa070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l7::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::`7'::<lambda_2>,0,1>::
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

// CloneToEmptyStorage @ 149afa0d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l7::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::`7'::<lambda_3>,0,1>::
             _vftable_;
  pUVar1 = *(UObject **)((longlong)this + 8);
  puVar2[1] = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// Destroy @ 149afd7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAttributeGetFromPointIndexElement::ExecuteInternal'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149afd7a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149afd7b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149afd7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l7::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149afd810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l7::<lambda_3>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 149b14fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAttributeGetFromPointIndexElement::ExecuteInternal'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b14fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b14fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l7::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b14fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGActorSelector::GetFilteringFunction'::__l7::<lambda_3>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 149b67d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149b67d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l194::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::`194'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149b67d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l25::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`25'::<lambda_2>,0,1>
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

// CloneToEmptyStorage @ 149b67e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 149b67e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l259::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::`259'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149b67e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGetActorPropertyElement::ExecuteInternal'::__l61::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x50,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FPCGGetActorPropertyElement::ExecuteInternal'::`61'::<lambda_3>,0,1>
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

// CloneToEmptyStorage @ 149b67ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l28::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`28'::<lambda_4>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149b67f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_5>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`107'::<lambda_5>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149b67f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_6>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::`107'::<lambda_6>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149b6cd20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149b6cd50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l194::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149b6cd55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149b6cd60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l25::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149b6cd90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149b6cdc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l259::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149b6cdc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149b6cdd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGetActorPropertyElement::ExecuteInternal'::__l61::<lambda_3>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149b6ce00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l28::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149b6ce05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149b6ce10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_5>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149b6ce15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149b6ce20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_6>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149b6ce25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 149b8dcc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dcd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l194::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l25::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dcf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dd00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l259::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGetActorPropertyElement::ExecuteInternal'::__l61::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l28::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_5>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149b8dd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGDataFromActorElement::ExecuteInternal'::__l107::<lambda_6>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0> @ 149be8c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::
~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TVector_N_Math_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0> @ 149be8c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>::
~TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6ANNPEBUFPCGPoint__N0_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0> @ 149be8c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149c02020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TVector_N_Math_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_double_TVector<double>_ptr_TVector<double>_ptr **)(param_1->InlineAllocation + 8)
       = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149c02040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6ANNPEBUFPCGPoint__N0_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_double_double_FPCGPoint_ptr_double_FPCGPoint_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149c02060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_TVector<double>_ptr_TVector<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149c02080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGSaveTextureToAssetElement::ReadbackInputTexture'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGSaveTextureToAssetElement::ReadbackInputTexture'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149c020b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGSceneCaptureElement::ExecuteInternal'::__l19::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGSceneCaptureElement::ExecuteInternal'::`19'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149c020e0

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
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l27::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x1d0,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`27'::<lambda_2>,0,1>
             ::_vftable_;
  ``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l27::<lambda_2>::
  <lambda_2>(puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149c02140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l33::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`33'::<lambda_3>,0,1>
             ::_vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  puVar2[6] = lVar1;
  puVar2[0xb] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x40);
    if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x58);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 149c021e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l37::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`37'::<lambda_4>,0,1>
             ::_vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 149c02270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l50::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::`2'::<lambda_2>::operator()'::`50'::<lambda_5>,0,1>
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

// Destroy @ 149c06eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149c06eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149c06ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>::
Destroy(TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149c06ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149c06ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149c06ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149c06ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGSaveTextureToAssetElement::ReadbackInputTexture'::__l5::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149c06ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149c06ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGSceneCaptureElement::ExecuteInternal'::__l19::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149c06ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149c06f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l27::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149c06f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l33::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149c06f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l37::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149c06f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l50::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 149c236e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149c236f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>::
GetAddress(TFunction_OwnedObject<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 149c23700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149c23710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGSaveTextureToAssetElement::ReadbackInputTexture'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149c23720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGSceneCaptureElement::ExecuteInternal'::__l19::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149c23730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l27::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149c23740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l33::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 149c23750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l37::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 149c23760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGPathfindingElement::PrepareDataInternal'::__l2::<lambda_2>::operator()'::__l50::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// CloneToEmptyStorage @ 149c5d700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation = &_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149c5d730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l31::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::`31'::<lambda_3>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149c61320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149c61325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149c61330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l31::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149c61335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 149c764e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureSamplerElement::ExecuteInternal'[::I]::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149c764f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGWorldRayHitQueryElement::ExecuteInternal'::__l31::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0> @ 149ca4a40

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
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>::
~TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
          (TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFPCGContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0> @ 149ca4a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
::
~TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
          (TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFPCGGridLinkageContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149cb5560

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
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFPCGContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FPCGContext_ptr_FPCGInitializeElementParams_ptr **)(param_1->InlineAllocation + 8)
       = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149cb5580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAUFPCGGridLinkageContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FPCGGridLinkageContext_ptr_FPCGInitializeElementParams_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149cb55a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149cb55e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149cb5600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_1>,0,1>::
             _vftable_;
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

// CloneToEmptyStorage @ 149cb5680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::`21'::<lambda_1>,0,1>::
             _vftable_;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)this + 0xc);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
  *(undefined8 *)((longlong)puVar1 + 0x24) = *(undefined8 *)((longlong)this + 0x24);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149cb56f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_2>,0,1>::
             _vftable_;
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

// Destroy @ 149cbd070

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
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>::Destroy
          (TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149cbd075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149cbd080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
::Destroy(TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149cbd085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149cbd090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149cbd095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149cbd0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149cbd0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149cbd0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149cbd0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149cbd110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 149cc5ff0

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
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 149cc6000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
::GetAddress(TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149cc6010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149cc6020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149cc6030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 149cc6040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149cc6050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// ~TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0> @ 149d34740

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0>::
~TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0>
          (TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6APEBXPEBX_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 149d40430

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEBXPEBX_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_ptr_void_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d40450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`PCGHelpers::DebugDrawGenerationVolume'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 149d40490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAsync::AsyncPointProcessing'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FPCGAsync::AsyncPointProcessing'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149d404f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAsync::PrivateAsyncPointProcessing'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPCGAsync::PrivateAsyncPointProcessing'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d40510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d40530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::`8'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d40550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPolygon2DProcessingHelpers::AddPolygon'::__l20::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGPolygon2DProcessingHelpers::AddPolygon'::`20'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d40570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::__l41::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::`41'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d40590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l12::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::`12'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d405b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::__l12::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::`12'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d405d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l16::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::`16'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149d405f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::__l45::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::`45'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149d47b20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0>::
Destroy(TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149d47b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`PCGHelpers::DebugDrawGenerationVolume'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149d47b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAsync::AsyncPointProcessing'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149d47b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAsync::PrivateAsyncPointProcessing'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l8::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPolygon2DProcessingHelpers::AddPolygon'::__l20::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::__l41::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l12::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::__l12::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l16::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149d47c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::__l45::<lambda_3>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149d47c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 149d4e260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0>::
GetAddress(TFunction_OwnedObject<void_const_*_(__cdecl*)(void_const_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149d4e270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`PCGHelpers::DebugDrawGenerationVolume'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAsync::AsyncPointProcessing'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGAsync::PrivateAsyncPointProcessing'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l8::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::__l8::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPolygon2DProcessingHelpers::AddPolygon'::__l20::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::__l41::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l12::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectPathGetter'::__l12::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGMetadataHelpers::CreateObjectOrClassPathGetter'::__l16::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149d4e310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGPropertyHelpers::ExtractPropertyAsAttributeSet'::__l45::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0> @ 149e365f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
~TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0> @ 149e36610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::
~TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU__TTransform_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0> @ 149e36630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector2_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0> @ 149e36650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector4_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0> @ 149e36670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::
~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0> @ 149e36690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU__TQuat_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0> @ 149e366b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU__TRotator_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0> @ 149e366d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::
~TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU__TTransform_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0> @ 149e366f0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0>::
~TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0>
          (TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AHAEBUFSoftClassPath___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0> @ 149e36710

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0>::
~TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0>
          (TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AHAEBUFSoftObjectPath___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0> @ 149e36730

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0>::
~TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0>
          (TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AHAEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0> @ 149e36750

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0>::
~TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0>
          (TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AHAEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0> @ 149e36770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TQuat_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0> @ 149e36790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>::
~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TRotator_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0> @ 149e367b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>::
~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TVector2_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0> @ 149e367d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>::
~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TVector4_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0> @ 149e367f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::
~TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const&___ptr64),0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0> @ 149e36810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TQuat_N_Math_UE__AEBN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0> @ 149e36830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TQuat_N_Math_UE__AEBU__TVector_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0> @ 149e36850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TRotator_N_Math_UE__AEBN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0> @ 149e36870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TRotator_N_Math_UE__AEBU__TVector_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0> @ 149e36890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TTransform_N_Math_UE__AEBU__TQuat_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0> @ 149e368b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TTransform_N_Math_UE__AEBU__TVector_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149e4cb20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TQuat<double>_TQuat<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cb40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU__TTransform_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TQuat<double>_TTransform<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector2_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector2<double>_TVector2<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector4_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector4<double>_TVector4<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<double>_TVector<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj
  ;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU__TQuat_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<double>_TQuat<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU__TRotator_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<double>_TRotator<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBU__TTransform_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<double>_TTransform<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cc20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AHAEBUFSoftClassPath___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_int_FSoftClassPath_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cc40

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AHAEBUFSoftObjectPath___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_int_FSoftObjectPath_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cc60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AHAEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_int_FName_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cc80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AHAEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_int_FString_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TQuat_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_double_TQuat<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4ccc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TRotator_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_double_TRotator<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TVector2_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_double_TVector2<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cd00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TVector4_N_Math_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_double_TVector4<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined8 **)param_1->InlineAllocation =
       &TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const&___ptr64),0,0>::
        _vftable_;
  *(_func___cdecl_double_TVector<double>_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TQuat_N_Math_UE__AEBN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TQuat<double>_ptr_double_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TQuat_N_Math_UE__AEBU__TVector_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TQuat<double>_ptr_TVector<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TRotator_N_Math_UE__AEBN_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TRotator<double>_ptr_double_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TRotator_N_Math_UE__AEBU__TVector_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TRotator<double>_ptr_TVector<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cdc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TTransform_N_Math_UE__AEBU__TQuat_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TTransform<double>_ptr_TQuat<double>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4cde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TTransform_N_Math_UE__AEBU__TVector_N_23__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TTransform<double>_ptr_TVector<double>_ptr **)(param_1->InlineAllocation + 8)
       = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149e4ce00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_10>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_10>__DJ_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_10>::
  <lambda_10>(puVar1 + 1,(<lambda_10> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4ce60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_10>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_10>__DJ_____CreateVectorExtractor_U__TVector2_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_10>::
  <lambda_10>(puVar1 + 1,(<lambda_10> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4cec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_10>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_10>__DJ_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_10>::
  <lambda_10>(puVar1 + 1,(<lambda_10> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4cf20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_10>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_10>__DJ_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_10>::
  <lambda_10>(puVar1 + 1,(<lambda_10> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4cf80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_11>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_11>__DJ_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_11>::
  <lambda_11>(puVar1 + 1,(<lambda_11> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4cfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_11>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_11>__DJ_____CreateVectorExtractor_U__TVector2_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_11>::
  <lambda_11>(puVar1 + 1,(<lambda_11> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_11>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_11>__DJ_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_11>::
  <lambda_11>(puVar1 + 1,(<lambda_11> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_11>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_11>__DJ_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_11>::
  <lambda_11>(puVar1 + 1,(<lambda_11> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_4>__CP_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_4>::
  <lambda_4>(puVar1 + 1,(<lambda_4> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_4>__CP_____CreateVectorExtractor_U__TVector2_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_4>::
  <lambda_4>(puVar1 + 1,(<lambda_4> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_4>__CP_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_4>::
  <lambda_4>(puVar1 + 1,(<lambda_4> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_4>__CP_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_4>::
  <lambda_4>(puVar1 + 1,(<lambda_4> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_5>__CP_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_5>::
  <lambda_5>(puVar1 + 1,(<lambda_5> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_5>__CP_____CreateVectorExtractor_U__TVector2_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_5>::
  <lambda_5>(puVar1 + 1,(<lambda_5> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_5>__CP_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_5>::
  <lambda_5>(puVar1 + 1,(<lambda_5> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_5>__CP_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_5>::
  <lambda_5>(puVar1 + 1,(<lambda_5> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_6>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_6>__DD_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_6>::
  <lambda_6>(puVar1 + 1,(<lambda_6> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_6>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_6>__DD_____CreateVectorExtractor_U__TVector2_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_6>::
  <lambda_6>(puVar1 + 1,(<lambda_6> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d4c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_6>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_6>__DD_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_6>::
  <lambda_6>(puVar1 + 1,(<lambda_6> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_6>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_6>__DD_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_6>::
  <lambda_6>(puVar1 + 1,(<lambda_6> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_7>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_7>__DD_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_7>::
  <lambda_7>(puVar1 + 1,(<lambda_7> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_7>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_7>__DD_____CreateVectorExtractor_U__TVector2_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_7>::
  <lambda_7>(puVar1 + 1,(<lambda_7> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_7>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_7>__DD_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_7>::
  <lambda_7>(puVar1 + 1,(<lambda_7> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_7>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_7>__DD_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_7>::
  <lambda_7>(puVar1 + 1,(<lambda_7> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_8>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_8>__DH_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_8>::
  <lambda_8>(puVar1 + 1,(<lambda_8> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_8>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`class_TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>___cdecl_PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>(TUniquePtr<class_IPCGAttributeAccessor,struct_TDefaultDelete<class_IPCGAttributeAccessor>_>,FName,bool&___ptr64)'::`55'::<lambda_8>,0,1>
             ::_vftable_;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_8>::
  <lambda_8>(puVar1 + 1,(<lambda_8> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d7c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_8>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_8>__DH_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_8>::
  <lambda_8>(puVar1 + 1,(<lambda_8> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_8>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_8>__DH_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_8>::
  <lambda_8>(puVar1 + 1,(<lambda_8> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_9>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_9>__DH_____CreateVectorExtractor_U__TQuat_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_9>::
  <lambda_9>(puVar1 + 1,(<lambda_9> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_9>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_9>__DH_____CreateVectorExtractor_U__TVector2_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_9>::
  <lambda_9>(puVar1 + 1,(<lambda_9> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_9>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_9>__DH_____CreateVectorExtractor_U__TVector4_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_9>::
  <lambda_9>(puVar1 + 1,(<lambda_9> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 149e4d9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_9>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_9>__DH_____CreateVectorExtractor_U__TVector_N_Math_UE___PCGAttributeExtractor__YA_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______V3_VFName__AEA_N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_9>::
  <lambda_9>(puVar1 + 1,(<lambda_9> *)((longlong)this + 8));
  return puVar1 + 1;
}

// Destroy @ 149e544e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
Destroy(TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e544e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e544f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e544f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::
Destroy(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
Destroy(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54560

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0>::
Destroy(TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54570

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0>::
Destroy(TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54580

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0>::Destroy
          (TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54590

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0>::Destroy
          (TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e545a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::Destroy
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e545a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e545b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>::Destroy
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e545b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e545c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>::Destroy
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e545c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e545d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>::Destroy
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e545d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e545e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::Destroy
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e545e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e545f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e545f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149e54645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149e54650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_10>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_10>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e546b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_10>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e546e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_10>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_11>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_11>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_11>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e547a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_11>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e547d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e548c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e548f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_6>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_6>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e549b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_6>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e549e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_6>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_7>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_7>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_7>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_7>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_8>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_8>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_8>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_8>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_9>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_9>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_9>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149e54c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_9>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 149e57460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
GetAddress(TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector2<double>_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector4<double>_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e574a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::
GetAddress(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 149e574b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::
GetAddress(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 149e574c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e574d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<UE::Math::TVector<double>_(__cdecl*)(UE::Math::TTransform<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e574e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0>::
GetAddress(TFunction_OwnedObject<int_(__cdecl*)(FSoftClassPath_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e574f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0>::
GetAddress(TFunction_OwnedObject<int_(__cdecl*)(FSoftObjectPath_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57500

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<int_(__cdecl*)(FName_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57510

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<int_(__cdecl*)(FString_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TQuat<double>_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TRotator<double>_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector2<double>_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector4<double>_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<double_(__cdecl*)(UE::Math::TVector<double>_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,double_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TQuat<double>_&,UE::Math::TVector<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e57590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,double_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 149e575a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TRotator<double>_&,UE::Math::TVector<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e575b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TQuat<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e575c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(UE::Math::TTransform<double>_&,UE::Math::TVector<double>_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 149e575d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_10>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e575e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_10>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e575f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_10>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_10>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l57::<lambda_11>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l57::<lambda_11>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l57::<lambda_11>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l57::<lambda_11>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l47::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e576a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l47::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e576b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l47::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e576c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l47::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e576d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_6>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e576e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_6>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e576f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_6>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_6>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l51::<lambda_7>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l51::<lambda_7>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l51::<lambda_7>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l51::<lambda_7>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_8>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_8>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_8>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_8>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e57790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TQuat<double>_>'::__l55::<lambda_9>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e577a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector2<double>_>'::__l55::<lambda_9>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e577b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector4<double>_>'::__l55::<lambda_9>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149e577c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`PCGAttributeExtractor::CreateVectorExtractor<UE::Math::TVector<double>_>'::__l55::<lambda_9>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 149ef8960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::__l23::<lambda_1>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149ef89a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::__l33::<lambda_2>_>'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 149ef89e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149ef8a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149ef8a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::__l11::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::`11'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149ef8ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::`2'::<lambda_2>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// Destroy @ 149efb510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::__l23::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149efb515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149efb520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::__l33::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149efb525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149efb530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149efb535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149efb540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149efb570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::__l11::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149efb5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 149efe850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::__l23::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149efe860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::__l33::<lambda_2>_>'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149efe870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UPCGComponent::CleanupLocalDeleteAllGeneratedObjects'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149efe880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149efe890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGDefaultExecutionSource::Generate'::__l11::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149efe8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGComponent::CreateCleanupTask'::__l2::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0> @ 149f337a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0> @ 149f337c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149f40230

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_FPCGPoint_ptr_void_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149f40250

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_FPCGPoint_ptr_void_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149f40270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::`2'::<lambda_2>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149f402d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::__l35::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::`35'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149f41840

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0>::
Destroy(TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149f41845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149f41850

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0>::
Destroy(TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149f41855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 149f41860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149f41890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::__l35::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149f41895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 149f47200

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0>::
GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_&,void_const_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149f47210

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0>::
GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(FPCGPoint_const_&,void_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 149f47220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleCleanup'::__l2::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149f47230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGSubsystem::ScheduleComponent'::__l35::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 149f74930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
             *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 149f74940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NPEBVUPCGNode__AEBVFName__AEAUFDeterminismTestResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_UPCGNode_ptr_FName_ptr_FDeterminismTestResult_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149f74960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149f74965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0> @ 149f95210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUPCGData__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0> @ 149f95230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGNode_const_*,FName_const_&,FDeterminismTestResult_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEBVUPCGNode__AEBVFName__AEAUFDeterminismTestResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149f98520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEBVUPCGData__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_UPCGData_ptr_UPCGData_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 149f99ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149f99ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 149f9b5a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(UPCGData_const_*,UPCGData_const_*),0,0> *this)

{
  return &this->Obj;
}

// ~TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0> @ 14a018ec0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGParamData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0> @ 14a018ee0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGPointData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0> @ 14a018f00

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVUPCGPolyLineData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0> @ 14a018f20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVUPCGPrimitiveData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0> @ 14a018f40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGSurfaceData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0> @ 14a018f60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUPCGVolumeData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 14a01a950

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVUPCGParamData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_UPCGParamData_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a01a970

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVUPCGPointData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_UPCGPointData_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a01a990

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVUPCGPolyLineData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_UPCGPolyLineData_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a01a9b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVUPCGPrimitiveData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_UPCGPrimitiveData_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a01a9d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVUPCGSurfaceData__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_UPCGSurfaceData_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a01a9f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVUPCGVolumeData__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_UPCGVolumeData_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a01aa10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 14a01b020

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a01b025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a01b030

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a01b035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a01b040

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a01b045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a01b050

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0>::
Destroy(TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a01b055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a01b060

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a01b065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a01b070

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a01b075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a01b080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a01cab0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<UPCGParamData_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a01cac0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<UPCGPointData_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a01cad0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<UPCGPolyLineData_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a01cae0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<UPCGPrimitiveData_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a01caf0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<UPCGSurfaceData_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a01cb00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<UPCGVolumeData_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a01cb10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

