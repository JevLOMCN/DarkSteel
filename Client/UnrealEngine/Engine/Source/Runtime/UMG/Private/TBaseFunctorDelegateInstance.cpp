// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 55

// CreateCopy @ 1469b2ca0

void __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::`9'::<lambda_1>_>
               ::_vftable_;
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)(puVar1 + 3),(FSlateFontInfo *)((longlong)this + 0x18));
    *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)((longlong)this + 0x78);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b2d40

void __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::`9'::<lambda_1>_>
               ::_vftable_;
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)(puVar1 + 3),(FSlateFontInfo *)((longlong)this + 0x18));
    *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)((longlong)this + 0x78);
  }
  return;
}

// CreateCopy @ 1469b2da0

void __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x80,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AFXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::`9'::<lambda_1>_>
               ::_vftable_;
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)(puVar3 + 3),(FSlateFontInfo *)((longlong)this + 0x18));
    *(undefined4 *)(puVar3 + 0xf) = *(undefined4 *)((longlong)this + 0x78);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b2e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    return;
  }
  return;
}

// CreateCopy @ 1469b2e60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__V<lambda_1>__4__WrapDelegate_Private_StreamableManager_UE__YA_AV__TDelegate___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 3),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b2f00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__V<lambda_1>__4__WrapDelegate_Private_StreamableManager_UE__YA_AV__TDelegate___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar2[2] = uVar1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar2 + 3),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 1469b2f60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy__V<lambda_1>__4__WrapDelegate_Private_StreamableManager_UE__YA_AV__TDelegate___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 3),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b3010

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UImage::RequestAsyncLoad_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3080

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UImage::RequestAsyncLoad_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1469b30c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x60,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UImage::RequestAsyncLoad_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b3150

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TFunction___A6AXXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TFunction___A6AXXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001469b3264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 1469b3280

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TFunction___A6AXXZ____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1469bf320

short __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::Execute(void *this)

{
  short sVar1;
  
  sVar1 = `FRichTextDecorator::Create'::__l9::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18));
  return sVar1;
}

// Execute @ 1469bf330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::Execute(void *this,TSharedPtr<FStreamableHandle,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FReadAccessScope local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FStreamableHandle *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             &local_28);
  if ((*(int *)((longlong)this + 0x28) != 0) &&
     (*(longlong **)((longlong)this + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 1469bf3b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `UImage::RequestAsyncLoad'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 1469bf3c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
          *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->Functor;
  plVar3 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001469bf3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}

// ExecuteIfSafe @ 1469c1e20

bool __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FRichTextDecorator::Create'::__l9::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 1469c1e40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedPtr<FStreamableHandle,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FReadAccessScope local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FStreamableHandle *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             &local_28);
  if ((*(int *)((longlong)this + 0x28) != 0) &&
     (*(longlong **)((longlong)this + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 1469c1ec0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `UImage::RequestAsyncLoad'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 1469c1ee0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
                *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Functor);
  plVar1 = *(longlong **)&(this->Functor).field_0x28;
  pcVar2 = *(code **)&this->Functor;
  plVar4 = (longlong *)&(this->Functor).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1469cd9a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cd9b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cd9c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cd9d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1469d2230

void * __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2240

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2260

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 1469d90e0

UObject * __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d90f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9100

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9110

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1469de3a0

bool __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1469de3b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1469de3c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1469de3d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1469e2920

bool __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1469e2930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1469e2940

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1469e2950

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146a2a830

FName __thiscall
TBaseFunctorDelegateInstance<short___cdecl(void),FDefaultDelegateUserPolicy,`FRichTextDecorator::Create'::__l9::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a840

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a850

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UImage::RequestAsyncLoad'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a860

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146a681a0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,_UWidgetNavigation::UpdateMetaDataEntry_::__l10::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146a68210

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,_UWidgetNavigation::UpdateMetaDataEntry_::__l10::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 146a68250

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,_UWidgetNavigation::UpdateMetaDataEntry_::__l10::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146a706b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::Execute(void *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,EUINavigation param_1)

{
  UWidget *this_00;
  
  this_00 = FCustomWidgetNavigationDelegate_DelegateWrapper
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
                       param_1);
  if (this_00 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 146a70a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::ExecuteIfSafe(void *this,EUINavigation param_1)

{
  UWidget *this_00;
  TSharedPtr<SWidget,1> local_18;
  
  this_00 = FCustomWidgetNavigationDelegate_DelegateWrapper
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
                       param_1);
  if (this_00 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return true;
  }
  local_18.Object = (SWidget *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146a733e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 146a77440

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146a79660

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146a79f20

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146a7c5e0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146a99c40

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::__l10::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

