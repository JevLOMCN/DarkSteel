// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 106

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::FUpdateStats::Params_const_&)> @ 14ed339a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FUpdateStats::Params_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUParams_FUpdateStats_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUParams_FUpdateStats_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FUpdateStats::Params_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&)> @ 14ed33ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFAddSessionMember_Online_UE___Online_UE__AEBV__TOnlineResult_UFAddSessionMember_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFAddSessionMember_Online_UE___Online_UE__AEBV__TOnlineResult_UFAddSessionMember_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&)> @ 14ed33be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFBatchQueryPresence_Online_UE___Online_UE__AEBV__TOnlineResult_UFBatchQueryPresence_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFBatchQueryPresence_Online_UE___Online_UE__AEBV__TOnlineResult_UFBatchQueryPresence_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&)> @ 14ed33d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFCreateSession_Online_UE___Online_UE__AEBV__TOnlineResult_UFCreateSession_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFCreateSession_Online_UE___Online_UE__AEBV__TOnlineResult_UFCreateSession_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&)> @ 14ed33e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFFindSessions_Online_UE___Online_UE__AEBV__TOnlineResult_UFFindSessions_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFFindSessions_Online_UE___Online_UE__AEBV__TOnlineResult_UFFindSessions_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&)> @ 14ed33f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFJoinSession_Online_UE___Online_UE__AEBV__TOnlineResult_UFJoinSession_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFJoinSession_Online_UE___Online_UE__AEBV__TOnlineResult_UFJoinSession_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&)> @ 14ed34060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFLeaveSession_Online_UE___Online_UE__AEBV__TOnlineResult_UFLeaveSession_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFLeaveSession_Online_UE___Online_UE__AEBV__TOnlineResult_UFLeaveSession_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&)> @ 14ed34180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFRejectSessionInvite_Online_UE___Online_UE__AEBV__TOnlineResult_UFRejectSessionInvite_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFRejectSessionInvite_Online_UE___Online_UE__AEBV__TOnlineResult_UFRejectSessionInvite_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&)> @ 14ed342a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFRemoveSessionMember_Online_UE___Online_UE__AEBV__TOnlineResult_UFRemoveSessionMember_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFRemoveSessionMember_Online_UE___Online_UE__AEBV__TOnlineResult_UFRemoveSessionMember_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&)> @ 14ed343c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFSendSessionInvite_Online_UE___Online_UE__AEBV__TOnlineResult_UFSendSessionInvite_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFSendSessionInvite_Online_UE___Online_UE__AEBV__TOnlineResult_UFSendSessionInvite_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&)> @ 14ed344e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFStartMatchmaking_Online_UE___Online_UE__AEBV__TOnlineResult_UFStartMatchmaking_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFStartMatchmaking_Online_UE___Online_UE__AEBV__TOnlineResult_UFStartMatchmaking_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&)> @ 14ed34600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFUpdateSessionSettings_Online_UE___Online_UE__AEBV__TOnlineResult_UFUpdateSessionSettings_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFUpdateSessionSettings_Online_UE___Online_UE__AEBV__TOnlineResult_UFUpdateSessionSettings_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(void)> @ 14ed34720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(void)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXXZ_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(void)>'::__l2::<lambda_1>,void>
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

// operator() @ 14ee25ee0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FUpdateStats::Params_const_&)>'::__l2::
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
        goto LAB_14ee25f12;
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
LAB_14ee25f12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee25f80

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee25fb2;
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
LAB_14ee25fb2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26020

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthBeginVerifiedAuthSession>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26052;
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
LAB_14ee26052:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee260c0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCancelVerifiedAuthTicket>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee260f2;
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
LAB_14ee260f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26160

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthCreateAccount>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26192;
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
LAB_14ee26192:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26200

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthEndVerifiedAuthSession>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26232;
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
LAB_14ee26232:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee262a0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLinkAccount>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee262d2;
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
LAB_14ee262d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26340

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26372;
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
LAB_14ee26372:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee263e0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthLogout>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26412;
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
LAB_14ee26412:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26480

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthModifyAccountAttributes>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee264b2;
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
LAB_14ee264b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26520

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalAuthToken>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26552;
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
LAB_14ee26552:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee265c0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryExternalServerAuthTicket>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee265f2;
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
LAB_14ee265f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26660

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&,UE::Online::TOnlineResult<UE::Online::FAuthQueryVerifiedAuthTicket>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26692;
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
LAB_14ee26692:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26700

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26732;
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
LAB_14ee26732:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee267a0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceCheckout>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee267d2;
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
LAB_14ee267d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26840

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryEntitlements>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26872;
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
LAB_14ee26872:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee268e0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffers>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26912;
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
LAB_14ee26912:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26980

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryOffersById>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee269b2;
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
LAB_14ee269b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26a20

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceQueryTransactionEntitlements>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26a52;
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
LAB_14ee26a52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26ac0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRedeemEntitlement>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26af2;
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
LAB_14ee26af2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26b60

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceRetrieveS2SToken>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26b92;
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
LAB_14ee26b92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26c00

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>_const_&,UE::Online::TOnlineResult<UE::Online::FCommerceShowStoreUI>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26c32;
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
LAB_14ee26c32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26ca0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateLobby>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26cd2;
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
LAB_14ee26cd2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26d40

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26d72;
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
LAB_14ee26d72:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26de0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>_const_&,UE::Online::TOnlineResult<UE::Online::FDeclineLobbyInvitation>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26e12;
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
LAB_14ee26e12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26e80

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowFriendsUI>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26eb2;
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
LAB_14ee26eb2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26f20

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>_const_&,UE::Online::TOnlineResult<UE::Online::FExternalUIShowLoginUI>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26f52;
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
LAB_14ee26f52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee26fc0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFindLobbies>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee26ff2;
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
LAB_14ee26ff2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27060

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27092;
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
LAB_14ee27092:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27100

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27132;
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
LAB_14ee27132:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee271a0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FInviteLobbyMember>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee271d2;
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
LAB_14ee271d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27240

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinLobby>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27272;
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
LAB_14ee27272:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee272e0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27312;
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
LAB_14ee27312:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27380

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FKickLobbyMember>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee273b2;
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
LAB_14ee273b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27420

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveLobby>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27452;
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
LAB_14ee27452:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee274c0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee274f2;
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
LAB_14ee274f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27560

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyAttributes>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27592;
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
LAB_14ee27592:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27600

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyJoinPolicy>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27632;
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
LAB_14ee27632:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee276a0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbyMemberAttributes>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee276d2;
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
LAB_14ee276d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27740

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>_const_&,UE::Online::TOnlineResult<UE::Online::FModifyLobbySchema>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27772;
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
LAB_14ee27772:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee277e0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FPartialUpdatePresence>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27812;
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
LAB_14ee27812:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27880

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>_const_&,UE::Online::TOnlineResult<UE::Online::FPromoteLobbyMember>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee278b2;
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
LAB_14ee278b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27920

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementDefinitions>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27952;
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
LAB_14ee27952:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee279c0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryAchievementStates>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee279f2;
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
LAB_14ee279f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27a60

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryPresence>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27a92;
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
LAB_14ee27a92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27b00

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserPrivilege>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27b32;
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
LAB_14ee27b32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27ba0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundRank>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27bd2;
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
LAB_14ee27bd2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27c40

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesAroundUser>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27c72;
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
LAB_14ee27c72:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27ce0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FReadEntriesForUsers>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27d12;
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
LAB_14ee27d12:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27d80

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27db2;
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
LAB_14ee27db2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27e20

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27e52;
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
LAB_14ee27e52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27ec0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FRestoreLobbies>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27ef2;
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
LAB_14ee27ef2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee27f60

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee27f92;
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
LAB_14ee27f92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee28000

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee28032;
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
LAB_14ee28032:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee280a0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>_const_&,UE::Online::TOnlineResult<UE::Online::FUnlockAchievements>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee280d2;
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
LAB_14ee280d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee28140

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdatePresence>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee28172;
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
LAB_14ee28172:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee281e0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee28212;
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
LAB_14ee28212:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee28280

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>_const_&,UE::Online::TOnlineResult<UE::Online::FWriteLeaderboardScores>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ee282b2;
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
LAB_14ee282b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ee28320

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(void)>'::__l2::
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
        goto LAB_14ee28352;
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
LAB_14ee28352:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Unbind @ 14ef31550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Online::FOnlineEventDelegateHandle::Unbind(FOnlineEventDelegateHandle *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(void **)&this->DelegateUnbinder != (void *)0x0) {
    Core::Private::Function::CheckCallable(*(void **)&this->DelegateUnbinder);
    plVar9 = *(longlong **)&(this->DelegateUnbinder).field_0x28;
    pcVar1 = *(code **)&this->DelegateUnbinder;
    plVar8 = (longlong *)&(this->DelegateUnbinder).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar8 = plVar9;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar1)(uVar7);
    local_48 = *(longlong *)&this->DelegateUnbinder;
    uVar6 = *(undefined8 *)&(this->DelegateUnbinder).field_0x8;
    uVar2 = *(undefined4 *)&(this->DelegateUnbinder).field_0x10;
    uVar3 = *(undefined4 *)&(this->DelegateUnbinder).field_0x14;
    uVar4 = *(undefined4 *)&(this->DelegateUnbinder).field_0x18;
    uVar5 = *(undefined4 *)&(this->DelegateUnbinder).field_0x1c;
    uVar7 = *(undefined8 *)&(this->DelegateUnbinder).field_0x20;
    plStack_20 = *(longlong **)&(this->DelegateUnbinder).field_0x28;
    *(undefined8 *)&this->DelegateUnbinder = 0;
    *(undefined8 *)&(this->DelegateUnbinder).field_0x8 = uStack_40;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x10 = local_38;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x14 = uStack_34;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x18 = uStack_30;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x1c = uStack_2c;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x28 = 0;
    *(undefined4 *)&(this->DelegateUnbinder).field_0x2c = 0;
    local_38 = uVar2;
    uStack_34 = uVar3;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    local_28 = uVar7;
    if (local_48 != 0) {
      plVar9 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar9 = plStack_20;
      }
      uStack_40 = uVar6;
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  return;
}

// operator() @ 14ef77110

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FAcceptFriendInvite>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77142;
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
LAB_14ef77142:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef771b0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryStats>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef771e2;
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
LAB_14ef771e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77250

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>_const_&,UE::Online::TOnlineResult<UE::Online::FBlockUser>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77282;
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
LAB_14ef77282:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef772f0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryBlockedUsers>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77322;
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
LAB_14ef77322:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77390

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryFriends>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef773c2;
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
LAB_14ef773c2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77430

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryStats>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77462;
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
LAB_14ef77462:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef774d0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserAvatar>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77502;
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
LAB_14ef77502:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77570

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>_const_&,UE::Online::TOnlineResult<UE::Online::FQueryUserInfo>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef775a2;
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
LAB_14ef775a2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77610

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectFriendInvite>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77642;
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
LAB_14ef77642:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef776b0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>_const_&,UE::Online::TOnlineResult<UE::Online::FResetStats>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef776e2;
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
LAB_14ef776e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77750

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendFriendInvite>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77782;
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
LAB_14ef77782:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef777f0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>_const_&,UE::Online::TOnlineResult<UE::Online::FShowUserProfile>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77822;
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
LAB_14ef77822:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77890

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileEnumerateFiles>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef778c2;
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
LAB_14ef778c2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77930

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FTitleFileReadFile>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77962;
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
LAB_14ef77962:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef779d0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>_const_&,UE::Online::TOnlineResult<UE::Online::FTriggerEvent>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77a02;
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
LAB_14ef77a02:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77a70

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateStats>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77aa2;
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
LAB_14ef77aa2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77b10

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileCopyFile>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77b42;
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
LAB_14ef77b42:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77bb0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileDeleteFile>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77be2;
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
LAB_14ef77be2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77c50

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileEnumerateFiles>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77c82;
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
LAB_14ef77c82:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77cf0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileReadFile>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77d22;
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
LAB_14ef77d22:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ef77d90

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>_const_&,UE::Online::TOnlineResult<UE::Online::FUserFileWriteFile>_const_&)>'
::__l2::<lambda_1>::operator()(void *this)

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
        goto LAB_14ef77dc2;
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
LAB_14ef77dc2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)> @ 14efd2c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyInvitationAdded_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>'::__l2::<lambda_1>,void>
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

// FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)> @ 14efd2d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>
          (FOnlineEventDelegateHandle *this,FDelegateHandle param_1,
          TSharedRef<TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TMulticastDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>
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
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__AEBV__TOnlineResult_UFFunctionalTestLobbies_Online_UE___12__Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBV__TOnlineAsyncOp_UFFunctionalTestLobbies_Online_UE___Online_UE__AEBV__TOnlineResult_UFFunctionalTestLobbies_Online_UE___23__ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
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
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&)>'::__l2::<lambda_1>,void>
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

// operator() @ 14efe7c10

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>'::__l2::
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
        goto LAB_14efe7c42;
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
LAB_14efe7c42:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe7cb0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>'::__l2::
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
        goto LAB_14efe7ce2;
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
LAB_14efe7ce2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe7d50

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>'::__l2::
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
        goto LAB_14efe7d82;
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
LAB_14efe7d82:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe7df0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyJoined_const_&)>'::__l2::<lambda_1>::
operator()(void *this)

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
        goto LAB_14efe7e22;
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
LAB_14efe7e22:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe7e90

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>'::__l2::<lambda_1>
::operator()(void *this)

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
        goto LAB_14efe7ec2;
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
LAB_14efe7ec2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe7f30

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeft_const_&)>'::__l2::<lambda_1>::
operator()(void *this)

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
        goto LAB_14efe7f62;
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
LAB_14efe7f62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe7fd0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>'::__l2::
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
        goto LAB_14efe8002;
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
LAB_14efe8002:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe8070

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>'::__l2::<lambda_1>
::operator()(void *this)

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
        goto LAB_14efe80a2;
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
LAB_14efe80a2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe8110

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>'::__l2::<lambda_1>::
operator()(void *this)

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
        goto LAB_14efe8142;
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
LAB_14efe8142:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14efe81b0

void __thiscall
`UE::Online::FOnlineEventDelegateHandle::
FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>'::__l2::<lambda_1>
::operator()(void *this)

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
        goto LAB_14efe81e2;
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
LAB_14efe81e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

