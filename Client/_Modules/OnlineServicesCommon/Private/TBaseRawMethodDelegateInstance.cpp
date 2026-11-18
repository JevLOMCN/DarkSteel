// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 110

// CreateCopy @ 14eff9aa0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_24084665 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14eff9b30

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_24084665 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14eff9b80

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_24084665 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14eff9c30

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationAdded_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e709175b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14eff9cc0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationAdded_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e709175b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14eff9d10

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationAdded_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e709175b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14eff9dc0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationRemoved_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_468d55fb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14eff9e50

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationRemoved_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_468d55fb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14eff9ea0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationRemoved_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_468d55fb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14eff9f50

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_08a7bb5b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14eff9fe0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_08a7bb5b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14effa030

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_08a7bb5b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14effa0e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeaderChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_34ec1e17 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14effa170

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeaderChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_34ec1e17 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14effa1c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeaderChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_34ec1e17 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14effa270

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2782191d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14effa300

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2782191d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14effa350

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2782191d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14effa400

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_62a43fdf *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14effa490

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_62a43fdf *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14effa4e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_62a43fdf *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14effa590

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6288ea21 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14effa620

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6288ea21 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14effa670

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_6288ea21 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14effa720

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4b4c4163 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14effa7b0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4b4c4163 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14effa800

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_4b4c4163 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14effa8b0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbySchemaChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_52f6d4af *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14effa940

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbySchemaChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_52f6d4af *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14effa990

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbySchemaChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_52f6d4af *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14effc0e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyAttributesChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc130

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyInvitationAdded *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc180

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyInvitationRemoved *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc1d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyJoined *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc220

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyLeaderChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc270

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyLeft *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc2c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyMemberAttributesChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc310

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyMemberJoined *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc360

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbyMemberLeft *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14effc3b0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
          *this,FLobbySchemaChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14effca10

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyAttributesChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effca60

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyInvitationAdded *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcab0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyInvitationRemoved *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcb00

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyJoined *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcb50

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyLeaderChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcba0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyLeft *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcbf0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyMemberAttributesChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcc40

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyMemberJoined *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcc90

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbyMemberLeft *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14effcce0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
                *this,FLobbySchemaChanged *param_1)

{
  FLobbyEventCapture *pFVar1;
  FLobbyEventCapture *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FLobbyEventCapture,UE::Online::FLobbyEventCapture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14effe960

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe970

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe980

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe990

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe9a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe9b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe9c0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe9d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe9e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14effe9f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14efff100

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff110

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff120

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff130

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff140

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff150

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff160

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff170

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff180

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14efff190

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14efff330

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff340

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff350

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff360

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff370

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff380

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff390

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff3a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff3b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14efff3c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14efff490

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff4a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff4b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff4c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff4d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff4e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff4f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff500

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff510

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14efff520

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14efff6b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff6c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff6d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff6e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff6f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff700

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff710

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff720

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff730

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14efff740

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14f003380

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f003390

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f0033a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f0033b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f0033c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f0033d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f0033e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f0033f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f003400

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f003410

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Online::FLobbyEventCapture,void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

