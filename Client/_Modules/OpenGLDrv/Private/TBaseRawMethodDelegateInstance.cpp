// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 22

// CreateCopy @ 145bf9080

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__W4EShaderPlatform__IAEBUFGuid__AEAVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOpenGLProgramBinaryCache____A6AXAEBVFString__W4EShaderPlatform__IAEBUFGuid__AEAVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145bf9110

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__W4EShaderPlatform__IAEBUFGuid__AEAVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOpenGLProgramBinaryCache____A6AXAEBVFString__W4EShaderPlatform__IAEBUFGuid__AEAVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 145bf9160

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__W4EShaderPlatform__IAEBUFGuid__AEAVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOpenGLProgramBinaryCache____A6AXAEBVFString__W4EShaderPlatform__IAEBUFGuid__AEAVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 145bf9210

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXINAEBVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOpenGLProgramBinaryCache____A6AXINAEBVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_83e8e0b1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145bf92a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXINAEBVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOpenGLProgramBinaryCache____A6AXINAEBVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_83e8e0b1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 145bf92f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXINAEBVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOpenGLProgramBinaryCache____A6AXINAEBVFShaderCachePrecompileContext_FShaderPipelineCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_83e8e0b1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 145bfdb40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::Execute(void *this,FString *param_1,EShaderPlatform param_2,uint param_3,FGuid *param_4,
         FShaderCachePrecompileContext *param_5)

{
  FOpenGLProgramBinaryCache *pFVar1;
  FOpenGLProgramBinaryCache *local_res8;
  
  local_res8 = *(FOpenGLProgramBinaryCache **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOpenGLProgramBinaryCache,FOpenGLProgramBinaryCache_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}

// Execute @ 145bfdbc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
          *this,uint param_1,double param_2,FShaderCachePrecompileContext *param_3)

{
  FOpenGLProgramBinaryCache *pFVar1;
  FOpenGLProgramBinaryCache *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOpenGLProgramBinaryCache,FOpenGLProgramBinaryCache_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,SUB84(param_2,0),param_3);
  return;
}

// ExecuteIfSafe @ 145bff140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FString *param_1,EShaderPlatform param_2,uint param_3,FGuid *param_4,
               FShaderCachePrecompileContext *param_5)

{
  FOpenGLProgramBinaryCache *pFVar1;
  FOpenGLProgramBinaryCache *local_res8;
  
  local_res8 = *(FOpenGLProgramBinaryCache **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOpenGLProgramBinaryCache,FOpenGLProgramBinaryCache_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2,param_3,param_4,param_5);
  return true;
}

// ExecuteIfSafe @ 145bff1c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
                *this,uint param_1,double param_2,FShaderCachePrecompileContext *param_3)

{
  FOpenGLProgramBinaryCache *pFVar1;
  FOpenGLProgramBinaryCache *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOpenGLProgramBinaryCache,FOpenGLProgramBinaryCache_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,SUB84(param_2,0),param_3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 145c01d80

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 145c01d90

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 145c02ba0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 145c02bb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 145c048a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 145c048b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 145c04e30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 145c04e40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 145c0aed0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 145c0aee0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 145c32f40

FName __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 145c32f50

FName __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

