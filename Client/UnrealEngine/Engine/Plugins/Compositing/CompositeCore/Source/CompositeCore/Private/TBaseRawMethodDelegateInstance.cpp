// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 11

// CreateCopy @ 14ea7cd30

void __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCompositeCoreSceneViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ea7cdc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCompositeCoreSceneViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ea7ce20

void __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
    ;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCompositeCoreSceneViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ea7d210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::Execute(void *this,FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,
         FSceneView *param_2,FPostProcessMaterialInputs *param_3)

{
  FCompositeCoreSceneViewExtension *pFVar1;
  FCompositeCoreSceneViewExtension *local_res8;
  
  local_res8 = *(FCompositeCoreSceneViewExtension **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCompositeCoreSceneViewExtension,FCompositeCoreSceneViewExtension_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((pFVar1->CompositePrimitives).Hash.InlineData +
             (longlong)*(int *)((longlong)this + 0x28) + -0x68,__return_storage_ptr__,param_1,
             param_2,param_3,*(undefined4 *)((longlong)this + 8));
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14ea7ded0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::ExecuteIfSafe(void *this,FRDGBuilder *param_1,FSceneView *param_2,
               FPostProcessMaterialInputs *param_3)

{
  FCompositeCoreSceneViewExtension *pFVar1;
  FCompositeCoreSceneViewExtension *local_res8;
  undefined1 local_28 [32];
  
  local_res8 = *(FCompositeCoreSceneViewExtension **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCompositeCoreSceneViewExtension,FCompositeCoreSceneViewExtension_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((pFVar1->CompositePrimitives).Hash.InlineData +
             (longlong)*(int *)((longlong)this + 0x28) + -0x68,local_28,param_1,param_2,param_3,
             *(undefined4 *)((longlong)this + 8));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ea7e930

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14ea7ebd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 14ea7ff90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14ea7fff0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 14ea80d10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14ea836f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeCoreSceneViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy,enum_ISceneViewExtension::EPostProcessingPass>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

