// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 3

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)> @ 14ec48da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)&this->DelegateUnbinder = 0;
  *(undefined8 *)&(this->DelegateUnbinder).field_0x28 = 0;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pTVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (code *)0x0;
  puVar11 = FMemory::Malloc(0x20,8);
  *puVar11 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFExternalUIStatusChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFExternalUIStatusChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar11[1] = param_1.ID;
  puVar11[2] = pTVar2;
  puVar11[3] = pTVar1;
  lVar9 = *(longlong *)&this->DelegateUnbinder;
  uVar10 = *(undefined8 *)&(this->DelegateUnbinder).field_0x8;
  uVar3 = *(undefined4 *)&(this->DelegateUnbinder).field_0x10;
  uVar4 = *(undefined4 *)&(this->DelegateUnbinder).field_0x14;
  uVar5 = *(undefined4 *)&(this->DelegateUnbinder).field_0x18;
  uVar6 = *(undefined4 *)&(this->DelegateUnbinder).field_0x1c;
  uVar7 = *(undefined8 *)&(this->DelegateUnbinder).field_0x20;
  plVar8 = *(longlong **)&(this->DelegateUnbinder).field_0x28;
  if (puVar11 + 1 != (ulong64 *)0x0) {
    local_48 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&this->DelegateUnbinder = local_48;
  *(undefined8 *)&(this->DelegateUnbinder).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar11,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->DelegateUnbinder).field_0x10 = local_38;
  *(undefined4 *)&(this->DelegateUnbinder).field_0x14 = uStack_34;
  *(undefined4 *)&(this->DelegateUnbinder).field_0x18 = uStack_30;
  *(undefined4 *)&(this->DelegateUnbinder).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->DelegateUnbinder).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->DelegateUnbinder).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->DelegateUnbinder).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->DelegateUnbinder).field_0x2c = uStack_20._4_4_;
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  local_28 = uVar7;
  uStack_20 = plVar8;
  if (lVar9 != 0) {
    plVar12 = (longlong *)&local_38;
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    local_48 = (code *)lVar9;
    uStack_40 = uVar10;
    (**(code **)(*plVar12 + 0x10))();
  }
  return this;
}

// ~FOnlineEventDelegateHandle @ 14ec55e10

void __thiscall
UE::Online::FOnlineEventDelegateHandle::~FOnlineEventDelegateHandle
          (FOnlineEventDelegateHandle *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong *plStack_10;
  
  if (*(void **)&this->DelegateUnbinder != (void *)0x0) {
    Core::Private::Function::CheckCallable(*(void **)&this->DelegateUnbinder);
    plVar8 = *(longlong **)&(this->DelegateUnbinder).field_0x28;
    pcVar1 = *(code **)&this->DelegateUnbinder;
    plVar9 = (longlong *)&(this->DelegateUnbinder).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    (*pcVar1)(uVar7);
    lVar6 = *(longlong *)&this->DelegateUnbinder;
    uVar2 = *(undefined4 *)&(this->DelegateUnbinder).field_0x10;
    uVar3 = *(undefined4 *)&(this->DelegateUnbinder).field_0x14;
    uVar4 = *(undefined4 *)&(this->DelegateUnbinder).field_0x18;
    uVar5 = *(undefined4 *)&(this->DelegateUnbinder).field_0x1c;
    uVar7 = *(undefined8 *)&(this->DelegateUnbinder).field_0x20;
    plStack_10 = *(longlong **)&(this->DelegateUnbinder).field_0x28;
    *(undefined8 *)&this->DelegateUnbinder = 0;
    *(undefined8 *)&(this->DelegateUnbinder).field_0x8 = uStack_30;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x10 = local_28;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x14 = uStack_24;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x18 = uStack_20;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x1c = uStack_1c;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x20 = (undefined4)local_18;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x24 = local_18._4_4_;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x28 = 0;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x2c = 0;
    local_28 = uVar2;
    uStack_24 = uVar3;
    uStack_20 = uVar4;
    uStack_1c = uVar5;
    local_18 = uVar7;
    if (lVar6 != 0) {
      plVar8 = (longlong *)&local_28;
      if (plStack_10 != (longlong *)0x0) {
        plVar8 = plStack_10;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (*(longlong *)&this->DelegateUnbinder != 0) {
    plVar8 = *(longlong **)&(this->DelegateUnbinder).field_0x28;
    plVar9 = (longlong *)&(this->DelegateUnbinder).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ec55ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x10))();
    return;
  }
  return;
}

// operator() @ 14ec581b0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>'::__l2::
<lambda_1>::operator()(void *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ec581e2;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)((longlong)this + 8);
    if (this_00 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineAsyncOpHandle.h"
                             ,0xf8,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)this != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  (this_00,(FDelegateHandle)*(ulong64 *)this);
      }
    }
  }
LAB_14ec581e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

