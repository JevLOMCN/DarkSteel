// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 55

// CreateCopy @ 14dd7ce60

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase__PEAVUMoviePipeline___NVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUMoviePipelineExecutorBase__PEAVUMoviePipeline___NVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_67e9bf41 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7cef0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase__PEAVUMoviePipeline___NVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUMoviePipelineExecutorBase__PEAVUMoviePipeline___NVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_67e9bf41 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7cf40

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase__PEAVUMoviePipeline___NVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUMoviePipelineExecutorBase__PEAVUMoviePipeline___NVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_67e9bf41 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7cff0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7a984bd0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7d080

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7a984bd0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7d0d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7a984bd0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7d180

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d2cc599c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7d210

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d2cc599c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7d260

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_d2cc599c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7d310

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3c012f55 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7d3a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3c012f55 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7d3f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_3c012f55 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7d4a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d2cc599c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7d530

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d2cc599c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7d590

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_d2cc599c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dd7fa30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
          *this,UMoviePipelineExecutorBase *param_1,UMoviePipeline *param_2,bool param_3,
         FText *param_4)

{
  pmf_67e9bf41 pVar1;
  ITextData *pIVar2;
  FMovieRenderPipelineCoreModule *pFVar3;
  FText *pFVar4;
  FMovieRenderPipelineCoreModule *local_res8;
  FText local_28;
  
  local_res8 = this->UserObject;
  pVar1 = this->MethodPtr;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (&local_res8);
  pFVar4 = FText::FText(&local_28,param_4);
  (*(code *)pVar1)(pFVar3,param_1,param_2,param_3,pFVar4);
  pIVar2 = (param_4->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// Execute @ 14dd7fad0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
          *this,UMoviePipelineExecutorBase *param_1,bool param_2)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 14dd7fb30

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
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14dd7fb80

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14dd7fbc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::Execute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
          *this)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,this->_padding_);
  return;
}

// ExecuteIfSafe @ 14dd7ff90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
                *this,UMoviePipelineExecutorBase *param_1,UMoviePipeline *param_2,bool param_3,
               FText *param_4)

{
  pmf_67e9bf41 pVar1;
  ITextData *pIVar2;
  FMovieRenderPipelineCoreModule *pFVar3;
  FText *pFVar4;
  FMovieRenderPipelineCoreModule *local_res8;
  FText local_28;
  
  local_res8 = this->UserObject;
  pVar1 = this->MethodPtr;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (&local_res8);
  pFVar4 = FText::FText(&local_28,param_4);
  (*(code *)pVar1)(pFVar3,param_1,param_2,param_3,pFVar4);
  pIVar2 = (param_4->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 14dd80030

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
                *this,UMoviePipelineExecutorBase *param_1,bool param_2)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14dd80090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14dd800e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14dd80120

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
                *this)

{
  FMovieRenderPipelineCoreModule *pFVar1;
  FMovieRenderPipelineCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,this->_padding_);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14dd860f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86100

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86110

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86120

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86130

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14dd8ab80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14dd8ab90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14dd8aba0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14dd8abb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14dd8abc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14dd8d630

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dd8d640

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dd8d650

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dd8d660

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14dd8d670

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14dd8eb40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14dd8eb50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14dd8eb60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14dd8eb70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14dd8eb80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14dd8ff50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14dd8ff60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14dd8ff70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14dd8ff80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14dd8ff90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14dda84b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda84c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda84d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda84e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda84f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMovieRenderPipelineCoreModule,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UWorld_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

