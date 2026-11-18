// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 11

// CreateCopy @ 14d7a0200

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7a0280

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14d7a02d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d7a4620

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> * __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
          *this,TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>
                *__return_storage_ptr__,FInitializePassOutputArgs *param_1,uint param_2)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14d7a6720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
                *this,FInitializePassOutputArgs *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [32];
  TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  (*this->StaticFuncPtr)(&local_28,param_1,param_2);
  if (1 < (ulonglong)local_28.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.TypeIndex])(&local_28);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d7a92f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14d7ac4b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d7aeae0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d7aef50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d7b18f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d7c1b60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

