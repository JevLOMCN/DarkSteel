// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 58

// ~TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0> @ 1459aaf80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXMI_Z_00_0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1459b65f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0> *this,
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

// CloneToEmptyStorage @ 1459b6630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1459b6670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__RHIEndRenderPass_FD3D12CommandContext__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1459b6690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,1,0>
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

// Destroy @ 1459bd110

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001459bd115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1459bd120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1459bd150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001459bd155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1459bd160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001459bd165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1459c1cc0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1459c1cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1459c1ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1459c1cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145a074c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145a074e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145a07500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,1,1>
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

// Destroy @ 145a10fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145a10fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145a10fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145a10fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145a10fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 145a17d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a17d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a17d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145a54e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 145a54eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145a54ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::__l6::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145a54f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145a54f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_25_>,1,0>
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

// CloneToEmptyStorage @ 145a54fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 145a54ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_2>,1,1>::
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

// CloneToEmptyStorage @ 145a55030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0>::CloneToEmptyStorage
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

// Destroy @ 145a632c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145a632f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145a63320

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::__l6::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145a63325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145a63330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145a63335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145a63340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_25_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145a63345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145a63350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145a63355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145a63360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145a63390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145a63395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145a68a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a68a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a68aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::__l6::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a68ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a68ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_25_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a68ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145a68ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145a68af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_2>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145a9dae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::`2'::<lambda_1>,0,1>
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

// CloneToEmptyStorage @ 145a9db40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::`2'::<lambda_1>,0,1>
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
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 145a9dba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`61'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145a9dbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::`120'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 145aa0b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145aa0b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145aa0ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145aa0ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145aa0bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145aa0bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145aa8ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145aa8ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145aa8ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145aa8ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

