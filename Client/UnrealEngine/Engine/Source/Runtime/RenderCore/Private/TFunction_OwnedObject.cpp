// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 159

// CloneToEmptyStorage @ 145d13f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Finish'::__l17::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145d13f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__BM___LandCompletedResources_FRDGResourceDumpContext__QEAAXAEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 145d13fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RenderCore::DumpGPU::TickEndFrame'::__l29::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145d14010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l73::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::`73'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145d14030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_2>__DD___LandCompletedResources_FRDGResourceDumpContext__QEAAXAEAVFRHICommandListImmediate___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 145d14090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l76::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::`76'::<lambda_2>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145d140b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l2::<lambda_3>,1,0>::CloneToEmptyStorage
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

// Destroy @ 145d1b930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Finish'::__l17::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145d1b935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145d1b940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145d1b970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RenderCore::DumpGPU::TickEndFrame'::__l29::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145d1b975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145d1b980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l73::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145d1b985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145d1b990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145d1b9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l76::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145d1b9c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145d1b9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l2::<lambda_3>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145d1b9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145d2ac50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Finish'::__l17::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145d2ac60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145d2ac70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RenderCore::DumpGPU::TickEndFrame'::__l29::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145d2ac80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l73::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145d2ac90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145d2aca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l76::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145d2acb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGResourceDumpContext::Start'::__l2::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145da4930

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SetNearClipPlaneGlobals'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 145da4970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FRDGBuilder::SetupParallelExecute'::__l32::<lambda_2>::operator()'::__l3::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 145da49b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGBuilder::~FRDGBuilder'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145da49f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 145da4a30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FRDGBuilder::Execute'::__l2::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 145da4a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::<lambda_2>,1,0>
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

// Destroy @ 145dab240

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SetNearClipPlaneGlobals'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145dab245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145dab250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FRDGBuilder::SetupParallelExecute'::__l32::<lambda_2>::operator()'::__l3::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145dab255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145dab260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGBuilder::~FRDGBuilder'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145dab290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145dab2c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FRDGBuilder::Execute'::__l2::<lambda_2>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145dab2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145dab2d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145dab2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145db8760

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SetNearClipPlaneGlobals'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145db8770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FRDGBuilder::SetupParallelExecute'::__l32::<lambda_2>::operator()'::__l3::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145db8780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGBuilder::~FRDGBuilder'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145db8790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145db87a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FRDGBuilder::Execute'::__l2::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145db87b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145ddbcd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`OnRenderThreadPollPeriodMsChanged'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145ddbce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`OnRenderThreadPollPeriodMsChanged'::__l2::<lambda_1>,1,0>::
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

// Destroy @ 145ddbd20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`OnRenderThreadPollPeriodMsChanged'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ddbd25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// CloneToEmptyStorage @ 145dfd7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginInitResource'::__l2::TSTR_InitCommand295>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 145dfd7e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginReleaseResource'::__l2::TSTR_ReleaseCommand376>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 145dfd820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginUpdateResourceRHI'::__l2::TSTR_UpdateCommand304>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 145dfd860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AdvanceRenderingThreadStatsGT'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145dfd8a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginInitResource'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfd8e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginReleaseResource'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfd920

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginUpdateResourceRHI'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfd960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderResource::ChangeFeatureLevel'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfd9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfd9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfda20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfda60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfdaa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfdae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 145dfdb20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfdb60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ReleaseResourceAndFlush'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 145dfdba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipeRegistry::StartRecording'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 145dfdbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipeRegistry::StopRecording'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 145dfdc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`StopRenderCommandFenceBundler'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145dfdc60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FFrameEndSync::Sync'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfdca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145dfdce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBatchedReleaseResources::Flush'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145dfdd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FlushRenderCommandFenceBundler'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145dfdd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145dfdd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145dfdda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::__l28::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145dfdde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::__l2::<lambda_2>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145dfde20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l7::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::`7'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145dfde40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::__l7::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::`7'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 145e03e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginInitResource'::__l2::TSTR_InitCommand295>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e03e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginReleaseResource'::__l2::TSTR_ReleaseCommand376>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e03e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginUpdateResourceRHI'::__l2::TSTR_UpdateCommand304>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e03ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AdvanceRenderingThreadStatsGT'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03ed0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginInitResource'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03ee0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginReleaseResource'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03ef0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginUpdateResourceRHI'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderResource::ChangeFeatureLevel'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e03f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03fa0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ReleaseResourceAndFlush'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e03fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e03fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipeRegistry::StartRecording'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e03fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipeRegistry::StopRecording'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e04010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`StopRenderCommandFenceBundler'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e04015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e04020

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FFrameEndSync::Sync'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e04025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e04030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e04035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e04040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBatchedReleaseResources::Flush'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e04070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FlushRenderCommandFenceBundler'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e04075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e04080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e04085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e04090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e04095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e040a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::__l28::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e040a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e040b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::__l2::<lambda_2>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e040b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e040c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l7::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e040c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e040d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::__l7::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e040d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145e0e840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginInitResource'::__l2::TSTR_InitCommand295>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145e0e850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginReleaseResource'::__l2::TSTR_ReleaseCommand376>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145e0e860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginUpdateResourceRHI'::__l2::TSTR_UpdateCommand304>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 145e0e870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AdvanceRenderingThreadStatsGT'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e880

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginInitResource'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e890

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginReleaseResource'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e8a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`BeginUpdateResourceRHI'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderResource::ChangeFeatureLevel'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e930

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`ReleaseResourceAndFlush'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipeRegistry::StartRecording'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandPipeRegistry::StopRecording'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`StopRenderCommandFenceBundler'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e970

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FFrameEndSync::Sync'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBatchedReleaseResources::Flush'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FlushRenderCommandFenceBundler'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::__l28::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandFence::BeginFence'::__l2::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0e9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l7::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e0ea00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderType::GetShaderTypesByFilename'::__l7::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145e4d670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145e4d690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145e4d6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 145e4d710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145e4d730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__4__PreloadShader_FShaderLibraryInstance__QEAAXHPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 145e4d790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__O___AddResource_FShaderLibraryInstance__QEAA_AV__TRefCountPtr_VFShaderMapResource_SharedCode____HPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `FShaderLibraryInstance::AddResource'::__l14::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 145e4d7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,1,1>::
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

// Destroy @ 145e51390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e51395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e513a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e513a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e513b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e513e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e513e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e513f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e51420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145e51450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 145e560e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e560f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e56100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e56110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e56120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e56130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e56140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 145e92160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145e921a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 145e921e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::`24'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 145e944e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e944e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e944f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145e944f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145e94500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 145e9cc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e9cc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145e9cc80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

