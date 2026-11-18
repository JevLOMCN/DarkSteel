// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 88

// CreateCopy @ 144effac0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMeshDrawCommandStatsManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_59790ee0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 144effb50

void __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMeshDrawCommandStatsManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_59790ee0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 144effba0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMeshDrawCommandStatsManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_59790ee0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 144f04cf0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FMeshDrawCommandStatsManager *pFVar1;
  FMeshDrawCommandStatsManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMeshDrawCommandStatsManager,FMeshDrawCommandStatsManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 144f0b9c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FMeshDrawCommandStatsManager *pFVar1;
  FMeshDrawCommandStatsManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMeshDrawCommandStatsManager,FMeshDrawCommandStatsManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 144f10630

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 144f12a50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 144f19f90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 144f1a8d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 144f1cd40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 144f306c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMeshDrawCommandStatsManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1454268b0

void __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::`3'::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145426940

void __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::`3'::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 145426990

void __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::`3'::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14542df60

void __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(void *this)

{
  FTest *pFVar1;
  FTest *local_res8 [4];
  
  local_res8[0] = *(FTest **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_FRendererModule::DebugLogOnCrash_::__l3::FTest,_FRendererModule::DebugLogOnCrash_::__l3::FTest_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1);
  return;
}

// ExecuteIfSafe @ 145432ec0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this)

{
  FTest *pFVar1;
  FTest *local_res8 [4];
  
  local_res8[0] = *(FTest **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_FRendererModule::DebugLogOnCrash_::__l3::FTest,_FRendererModule::DebugLogOnCrash_::__l3::FTest_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14543cdb0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14543deb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 145442670

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 145442f00

bool __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 145444e70

bool __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1454524a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::__l3::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1456790d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAnimBankTransformProvider____A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d2077446 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145679160

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAnimBankTransformProvider____A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d2077446 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1456791b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAnimBankTransformProvider____A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_d2077446 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 145679260

void __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSkinnedMeshDebugViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1456792f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSkinnedMeshDebugViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 145679340

void __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSkinnedMeshDebugViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1456793f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSkinningSceneExtension____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a418468e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145679480

void __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSkinningSceneExtension____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a418468e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1456794d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSkinningSceneExtension____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a418468e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14567add0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
          *this,FProviderContext *param_1)

{
  FAnimBankTransformProvider *pFVar1;
  FAnimBankTransformProvider *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FAnimBankTransformProvider,FAnimBankTransformProvider_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14567ae20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
          *this,FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,FSceneView *param_2,
         FPostProcessMaterialInputs *param_3)

{
  FSkinnedMeshDebugViewExtension *pFVar1;
  FSkinnedMeshDebugViewExtension *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSkinnedMeshDebugViewExtension,FSkinnedMeshDebugViewExtension_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pFVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,__return_storage_ptr__,
             param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// Execute @ 14567aea0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FSkinningSceneExtension *pFVar2;
  FSkinningSceneExtension *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FSkinningSceneExtension,FSkinningSceneExtension_*_&>(local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 145680af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                *this,FProviderContext *param_1)

{
  FAnimBankTransformProvider *pFVar1;
  FAnimBankTransformProvider *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FAnimBankTransformProvider,FAnimBankTransformProvider_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 145680b40

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
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                *this,FRDGBuilder *param_1,FSceneView *param_2,FPostProcessMaterialInputs *param_3)

{
  FSkinnedMeshDebugViewExtension *pFVar1;
  FSkinnedMeshDebugViewExtension *local_res8;
  undefined1 local_28 [32];
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSkinnedMeshDebugViewExtension,FSkinnedMeshDebugViewExtension_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pFVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,local_28,param_1,param_2,
             param_3);
  return true;
}

// ExecuteIfSafe @ 145680bc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FSkinningSceneExtension *pFVar1;
  FSkinningSceneExtension *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSkinningSceneExtension,FSkinningSceneExtension_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 145682120

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 145682130

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 145682140

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 145683710

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 145683720

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 145683730

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14568adb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14568adc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14568add0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14568b3c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14568b3d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14568b3e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14568d250

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14568d260

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14568d270

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1456a50a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAnimBankTransformProvider,void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1456a50b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSkinnedMeshDebugViewExtension,FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1456a50c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSkinningSceneExtension,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1458e4300

void __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFRuntimeVirtualTextureSceneProxy____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4b8ccc5e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1458e4390

void __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFRuntimeVirtualTextureSceneProxy____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4b8ccc5e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1458e43e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFRuntimeVirtualTextureSceneProxy____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_4b8ccc5e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1458e4490

void __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_28d6f098 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1458e4520

void __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_28d6f098 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1458e4570

void __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_28d6f098 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1458e4620

void __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_41f92cb7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1458e46b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_41f92cb7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1458e4700

void __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFVirtualTextureSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_41f92cb7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1458ee5b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FRuntimeVirtualTextureSceneProxy *pFVar1;
  FRuntimeVirtualTextureSceneProxy *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRuntimeVirtualTextureSceneProxy,FRuntimeVirtualTextureSceneProxy_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 1458ee5f0

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
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
          *this,UCanvas *param_1,APlayerController *param_2)

{
  FVirtualTextureSystem *pFVar1;
  FVirtualTextureSystem *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FVirtualTextureSystem,FVirtualTextureSystem_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 1458ee650

void __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FVirtualTextureSystem *pFVar1;
  FVirtualTextureSystem *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FVirtualTextureSystem,FVirtualTextureSystem_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 1458f3b10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FRuntimeVirtualTextureSceneProxy *pFVar1;
  FRuntimeVirtualTextureSceneProxy *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRuntimeVirtualTextureSceneProxy,FRuntimeVirtualTextureSceneProxy_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 1458f3b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,UCanvas *param_1,APlayerController *param_2)

{
  FVirtualTextureSystem *pFVar1;
  FVirtualTextureSystem *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FVirtualTextureSystem,FVirtualTextureSystem_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 1458f3bb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FVirtualTextureSystem *pFVar1;
  FVirtualTextureSystem *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FVirtualTextureSystem,FVirtualTextureSystem_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1458ff910

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1458ff920

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1458ff930

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 145900fc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 145900fd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 145900fe0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 145908a70

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 145908a80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 145908a90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 145909310

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 145909320

bool __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 145909330

bool __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14590ee40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14590ee50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14590ee60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 145925390

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRuntimeVirtualTextureSceneProxy,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1459253a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1459253b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FVirtualTextureSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

