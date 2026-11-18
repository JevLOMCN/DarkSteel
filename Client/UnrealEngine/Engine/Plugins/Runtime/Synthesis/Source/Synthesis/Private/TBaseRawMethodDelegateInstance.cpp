// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 11

// CreateCopy @ 14f0cfc20

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSubmixEffectMultibandCompressor____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_249ef0ee *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14f0cfcb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSubmixEffectMultibandCompressor____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_249ef0ee *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14f0cfd00

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSubmixEffectMultibandCompressor____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_249ef0ee *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14f0d6a90

void __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
          *this,uint param_1)

{
  FSubmixEffectMultibandCompressor *pFVar1;
  FSubmixEffectMultibandCompressor *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSubmixEffectMultibandCompressor,FSubmixEffectMultibandCompressor_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14f0d6c20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,uint param_1)

{
  FSubmixEffectMultibandCompressor *pFVar1;
  FSubmixEffectMultibandCompressor *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSubmixEffectMultibandCompressor,FSubmixEffectMultibandCompressor_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14f0d8e10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14f0da3d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14f0df1a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14f0df660

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14f0e7b20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14f1054c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSubmixEffectMultibandCompressor,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

