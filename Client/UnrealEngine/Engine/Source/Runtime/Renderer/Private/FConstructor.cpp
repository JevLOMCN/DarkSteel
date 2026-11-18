// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&> @ 1448e1c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
::FConstructor::
ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
          (FConstructor *this,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1,
          FRenderCommandTag *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  bool bVar6;
  FTaskBase *this_00;
  TRefCountPtr<FBaseGraphTask> TVar7;
  longlong in_R9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
    ;
  }
  this_00[1]._padding_ = in_R9;
  this_00[1]._padding_ = (longlong)param_2->Name;
  uVar3 = param_2[1].field_0x14;
  uVar4 = param_2[1].field_0x15;
  uVar5 = *(undefined2 *)&param_2[1].field_0x16;
  this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)param_2[1].SpecId;
  this_00[1].ExtendedPriority = uVar3;
  this_00[1].TaskTriggered = (atomic<bool>)uVar4;
  this_00[1]._padding_ = uVar5;
  *(undefined8 *)&param_2[1].SpecId = 0;
  pwVar2 = param_2[1].Name;
  this_00[1]._padding_ = *(longlong *)&param_2->SpecId;
  *(wchar_t **)&this_00[1].RefCount = pwVar2;
  this_00[1].Pipe = (FPipe *)param_2[1].StatId.StatIdPtr;
  if (this_00[1]._padding_ != 0) {
    param_2->Name = (wchar_t *)0x0;
  }
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      TVar7.Reference = (FBaseGraphTask *)(*pcVar1)();
      return (TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    }
  }
  UE::Tasks::Private::TranslatePriority
            ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  *(FTaskBase **)param_1 = this_00;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)param_1,0x120);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// ConstructAndDispatchWhenReady<FMeshDrawCommandPassSetupTaskContext_&> @ 144ee2570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FMeshDrawCommandPassSetupTask>::FConstructor::
ConstructAndDispatchWhenReady<FMeshDrawCommandPassSetupTaskContext_&>
          (FConstructor *this,FMeshDrawCommandPassSetupTaskContext *param_1)

{
  Type TVar1;
  FViewInfo *this_00;
  longlong in_R8;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [16];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
  if (this_00 == (FViewInfo *)0x0) {
    this_00 = (FViewInfo *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFMeshDrawCommandPassSetupTask____6B_;
  }
  this_00->_padding_ = in_R8;
  TVar1 = FMeshDrawCommandPassSetupTask::GetDesiredThread
                    ((FMeshDrawCommandPassSetupTask *)&this_00->_padding_);
  UE::Tasks::Private::TranslatePriority(TVar1,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  param_1->View = this_00;
  if (this_00 != (FViewInfo *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)param_1->View,0xe0);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

