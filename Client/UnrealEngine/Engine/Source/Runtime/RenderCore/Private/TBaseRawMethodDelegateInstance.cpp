// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 33

// CreateCopy @ 145d1b2e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFRDGResourceDumpContext____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cf2365b0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145d1b370

void __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFRDGResourceDumpContext____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cf2365b0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 145d1b3c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFRDGResourceDumpContext____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_cf2365b0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 145d211f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FRDGResourceDumpContext *pFVar1;
  FRDGResourceDumpContext *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRDGResourceDumpContext,FRDGResourceDumpContext_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 145d25450

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FRDGResourceDumpContext *pFVar1;
  FRDGResourceDumpContext *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRDGResourceDumpContext,FRDGResourceDumpContext_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 145d2acd0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 145d2b7c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 145d40fd0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 145d41210

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 145d44b30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 145d618b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRDGResourceDumpContext,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 145e509c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b1957d65 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145e50a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b1957d65 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 145e50aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b1957d65 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 145e50b50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_072e05d9 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145e50be0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_072e05d9 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 145e50c30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_072e05d9 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 145e531e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
          *this,TArrayView<FSHAHash_const_,int> *param_1)

{
  FShaderLibrariesCollection *pFVar1;
  FShaderLibrariesCollection *local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FShaderLibrariesCollection,FShaderLibrariesCollection_*_&>
                     (&local_res8);
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (*(code *)this->MethodPtr)(pFVar1,&local_18);
  return;
}

// Execute @ 145e53230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
          *this,TArrayView<FSHAHash_const_,int> *param_1,
         TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *param_2)

{
  FShaderLibrariesCollection *pFVar1;
  FShaderLibrariesCollection *local_res8;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FShaderLibrariesCollection,FShaderLibrariesCollection_*_&>
                     (&local_res8);
  local_28 = *(undefined8 *)param_2;
  local_20 = *(undefined8 *)&param_2->field_0x8;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (*(code *)this->MethodPtr)(pFVar1,&local_18,&local_28);
  return;
}

// ExecuteIfSafe @ 145e532c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
                *this,TArrayView<FSHAHash_const_,int> *param_1)

{
  FShaderLibrariesCollection *pFVar1;
  FShaderLibrariesCollection *local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FShaderLibrariesCollection,FShaderLibrariesCollection_*_&>
                     (&local_res8);
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (*(code *)this->MethodPtr)(pFVar1,&local_18);
  return true;
}

// ExecuteIfSafe @ 145e53320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
                *this,TArrayView<FSHAHash_const_,int> *param_1,
               TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>
               *param_2)

{
  FShaderLibrariesCollection *pFVar1;
  FShaderLibrariesCollection *local_res8;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FShaderLibrariesCollection,FShaderLibrariesCollection_*_&>
                     (&local_res8);
  local_28 = *(undefined8 *)param_2;
  local_20 = *(undefined8 *)&param_2->field_0x8;
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (*(code *)this->MethodPtr)(pFVar1,&local_18,&local_28);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 145e56810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 145e56820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 145e59680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 145e59690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 145e5bfb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 145e5bfc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 145e5e830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 145e5e840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 145e61030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 145e61040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 145e70ba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 145e70bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

