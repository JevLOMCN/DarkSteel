// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 14

// FGenericPlatformInputDeviceMapper @ 1423c1b30

/* WARNING: Enum "Type": Some values do not have unique names */

FGenericPlatformInputDeviceMapper * __thiscall
FGenericPlatformInputDeviceMapper::FGenericPlatformInputDeviceMapper
          (FGenericPlatformInputDeviceMapper *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FPlatformUserId FVar3;
  FInputDeviceId FVar4;
  void *pvVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  FGenericPlatformInputDeviceMapper *pFVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  TKeyInitializer<FInputDeviceId_const_&> *pTVar15;
  longlong lVar16;
  FPlatformUserId local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int *local_res20;
  undefined1 local_68 [16];
  FMRSWRecursiveAccessDetector *local_58;
  char local_50;
  
  this->_padding_ = (longlong)&___7IPlatformInputDeviceMapper__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>::
  AddRaw<IPlatformInputDeviceMapper>
            ((TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::OnUserLoginChangedEvent,(IPlatformInputDeviceMapper *)local_68,
             (pmf_0498bb03)this);
  uVar12 = (ulonglong)_tls_index;
  this->bShouldBroadcastLegacyDelegates = param_2;
  this->_padding_ = (longlong)&___7FGenericPlatformInputDeviceMapper__6B_;
  pvVar5 = ThreadLocalStoragePointer;
  this->bUsingControllerIdAsUserId = param_1;
  this->bUnpairInputDevicesWhenLoggingOut = false;
  piVar14 = (int *)(*(longlong *)((longlong)pvVar5 + uVar12 * 8) + 0x9d4c);
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    DefaultInputDeviceId.InternalId = 0;
    _Init_thread_footer(&::_TSS0);
  }
  *(int *)((longlong)&this->_padding_ + 4) = DefaultInputDeviceId.InternalId;
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    PrimaryPlatformUser.InternalId = 0;
    _Init_thread_footer(&::_TSS0);
  }
  *(int *)&this->_padding_ = PrimaryPlatformUser.InternalId;
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    PrimaryPlatformUser.InternalId = 0;
    _Init_thread_footer(&::_TSS0);
  }
  FVar3.InternalId = PrimaryPlatformUser.InternalId;
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    DefaultInputDeviceId.InternalId = 0;
    _Init_thread_footer(&::_TSS0);
  }
  FVar4.InternalId = DefaultInputDeviceId.InternalId;
  pTVar15 = (TKeyInitializer<FInputDeviceId_const_&> *)
            (ulonglong)(uint)DefaultInputDeviceId.InternalId;
  local_res10[0] = DefaultInputDeviceId.InternalId;
  if (DefaultInputDeviceId.InternalId < 0) {
    if (1 < (byte)LogInputDeviceMapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceMapper);
    }
  }
  else {
    if (*(int *)((longlong)&this->_padding_ + 4) < DefaultInputDeviceId.InternalId) {
      *(int *)((longlong)&this->_padding_ + 4) = DefaultInputDeviceId.InternalId;
    }
    if ((int)this->_padding_ < FVar3.InternalId) {
      *(int *)&this->_padding_ = FVar3.InternalId;
    }
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar11 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar11 = &this->_padding_;
      }
      iVar8 = *(int *)((longlong)plVar11 +
                      (ulonglong)((int)this->_padding_ - 1U & FVar4.InternalId) * 4);
      if (iVar8 != -1) {
        do {
          lVar16 = this->_padding_ + (longlong)iVar8 * 0x14;
          if (*(int *)(this->_padding_ + (longlong)iVar8 * 0x14) == FVar4.InternalId) {
            if (lVar16 != 0) goto LAB_1423c1dc1;
            break;
          }
          iVar8 = *(int *)(lVar16 + 0xc);
        } while (iVar8 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FInputDeviceId_const_&>_>
              ((TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
                *)&this->_padding_,(uint)local_res18,pTVar15,(bool *)&local_res20);
    lVar16 = this->_padding_ + (longlong)local_res18[0] * 0x14;
LAB_1423c1dc1:
    iVar8 = local_res10[0];
    *(int *)(lVar16 + 4) = FVar3.InternalId;
    *(undefined1 *)(lVar16 + 8) = 3;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &IPlatformInputDeviceMapper::OnInputDeviceConnectionChange,
               (FWriteAccessScope *)(local_68 + 8));
    bVar2 = false;
    IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._28_4_ =
         IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._28_4_ + 1;
    uVar13 = IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._16_4_ - 1;
    if (-1 < (int)uVar13) {
      lVar16 = (longlong)(int)uVar13 << 4;
      bVar2 = false;
      do {
        uVar9 = 0;
        if ((int)uVar13 < (int)IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._16_4_) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FGenericPlatformInputDeviceMapper *)(*pcVar1)();
          return pFVar10;
        }
        if (((*(int *)(lVar16 + 8 + IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._8_8_)
              == 0) ||
            (plVar11 = *(longlong **)
                        (lVar16 + IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._8_8_),
            plVar11 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar11 + 0x68))(plVar11,3,FVar3.InternalId,iVar8), cVar7 == '\0')
           ) {
          bVar2 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
      uVar12 = (ulonglong)_tls_index;
    }
    IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._28_4_ =
         IPlatformInputDeviceMapper::OnInputDeviceConnectionChange._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &IPlatformInputDeviceMapper::OnInputDeviceConnectionChange,false);
    }
    if (local_50 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_58,(FDestructionSentinel *)(local_68 + 8));
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    PrimaryPlatformUser.InternalId = 0;
    _Init_thread_footer(&::_TSS0);
  }
  local_res8[0].InternalId = PrimaryPlatformUser.InternalId;
  TArray<FPlatformUserId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPlatformUserId>
            ((TArray<FPlatformUserId,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_res8);
  return this;
}

// AllocateNewInputDeviceId @ 1423d0560

FInputDeviceId __thiscall
FGenericPlatformInputDeviceMapper::AllocateNewInputDeviceId(FGenericPlatformInputDeviceMapper *this)

{
  int iVar1;
  int *in_RDX;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4) + 1;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  *in_RDX = iVar1;
  return (FInputDeviceId)(int)in_RDX;
}

// AllocateNewUserId @ 1423d0580

/* WARNING: Enum "Type": Some values do not have unique names */

FPlatformUserId __thiscall
FGenericPlatformInputDeviceMapper::AllocateNewUserId(FGenericPlatformInputDeviceMapper *this)

{
  int iVar1;
  undefined4 *in_RDX;
  undefined1 local_res8 [8];
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  TArray<FPlatformUserId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPlatformUserId_const_&>
            ((TArray<FPlatformUserId,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (FPlatformUserId *)&this->_padding_);
  if (4 < (byte)LogInputDeviceMapper._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceMapper);
  }
  iVar1 = (**(code **)(this->_padding_ + 0x98))(this);
  if (iVar1 < (int)this->_padding_) {
    `FGenericPlatformInputDeviceMapper::AllocateNewUserId'::__l2::<lambda_1>::operator()(local_res8)
    ;
  }
  *in_RDX = (int)this->_padding_;
  return (FPlatformUserId)(int)in_RDX;
}

// GetDefaultInputDevice @ 1423de250

FInputDeviceId __thiscall
FGenericPlatformInputDeviceMapper::GetDefaultInputDevice(FGenericPlatformInputDeviceMapper *this)

{
  int *in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultInputDeviceId.InternalId = 0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RDX = DefaultInputDeviceId.InternalId;
  return (FInputDeviceId)(int)in_RDX;
}

// GetPlatformUserForUserIndex @ 1423e1370

FPlatformUserId __thiscall
FGenericPlatformInputDeviceMapper::GetPlatformUserForUserIndex
          (FGenericPlatformInputDeviceMapper *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  cVar2 = (**(code **)(this->_padding_ + 0xf0))();
  if (cVar2 != '\0') {
    *(undefined4 *)CONCAT44(in_register_00000014,param_1) = in_R8D;
    return (FPlatformUserId)param_1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\GenericPlatform\\GenericPlatformInputDeviceMapper.cpp"
                     ,0x2a0,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return (FPlatformUserId)iVar4;
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = 0xffffffff;
  return (FPlatformUserId)param_1;
}

// GetPrimaryPlatformUser @ 1423e1790

FPlatformUserId __thiscall
FGenericPlatformInputDeviceMapper::GetPrimaryPlatformUser(FGenericPlatformInputDeviceMapper *this)

{
  int *in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      PrimaryPlatformUser.InternalId = 0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RDX = PrimaryPlatformUser.InternalId;
  return (FPlatformUserId)(int)in_RDX;
}

// GetUserForUnpairedInputDevices @ 1423e4cf0

FPlatformUserId __thiscall
FGenericPlatformInputDeviceMapper::GetUserForUnpairedInputDevices
          (FGenericPlatformInputDeviceMapper *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xffffffff;
  return (FPlatformUserId)(int)in_RDX;
}

// GetUserIndexForPlatformUser @ 1423e4d00

int __thiscall
FGenericPlatformInputDeviceMapper::GetUserIndexForPlatformUser
          (FGenericPlatformInputDeviceMapper *this,FPlatformUserId param_1)

{
  char cVar1;
  int iVar2;
  int local_res8 [8];
  
  local_res8[0] = -1;
  cVar1 = (**(code **)(this->_padding_ + 0xa0))
                    (this,param_1.InternalId,local_res8,INPUTDEVICEID_NONE.InternalId);
  iVar2 = -1;
  if (cVar1 != '\0') {
    iVar2 = local_res8[0];
  }
  return iVar2;
}

// IsUsingControllerIdAsUserId @ 1423eb490

bool __thiscall
FGenericPlatformInputDeviceMapper::IsUsingControllerIdAsUserId
          (FGenericPlatformInputDeviceMapper *this)

{
  return this->bUsingControllerIdAsUserId;
}

// OnUserLoginChangedEvent @ 1423f1ca0

void __thiscall
FGenericPlatformInputDeviceMapper::OnUserLoginChangedEvent
          (FGenericPlatformInputDeviceMapper *this,bool param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int local_res8 [2];
  undefined1 local_res10 [8];
  int local_38 [2];
  undefined4 *local_30;
  ulonglong local_28;
  
  (**(code **)(this->_padding_ + 0xb8))(this,local_res8,param_3);
  if ((!param_1) && (this->bUnpairInputDevicesWhenLoggingOut != false)) {
    (**(code **)(this->_padding_ + 0x38))(this,local_38);
    if (local_res8[0] != local_38[0]) {
      local_30 = (undefined4 *)0x0;
      local_28 = 0;
      (**(code **)(this->_padding_ + 8))(this,local_res8[0],&local_30);
      iVar2 = (int)local_28;
      uVar3 = (ulonglong)(int)local_28;
      puVar1 = local_30 + uVar3;
      puVar4 = local_30;
      while( true ) {
        if ((int)uVar3 != iVar2) {
          `TCheckedPointerIterator<FInputDeviceId,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (puVar4 == puVar1) break;
        (**(code **)(this->_padding_ + 0x90))(this,*puVar4,local_38[0],local_res8[0]);
        uVar3 = local_28 & 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      if (local_30 != (undefined4 *)0x0) {
        FMemory::Free(local_30);
      }
    }
  }
  return;
}

// RemapControllerIdToPlatformUserAndDevice @ 142400330

bool __thiscall
FGenericPlatformInputDeviceMapper::RemapControllerIdToPlatformUserAndDevice
          (FGenericPlatformInputDeviceMapper *this,int param_1,FPlatformUserId *param_2,
          FInputDeviceId *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  FPlatformUserId local_res8 [2];
  undefined1 local_18 [16];
  
  cVar2 = (**(code **)(this->_padding_ + 0xf0))();
  if (cVar2 == '\0') {
    return false;
  }
  iVar1 = param_2->InternalId;
  if (iVar1 < 0) {
    if (param_1 < 0) {
      return false;
    }
  }
  else {
    if (param_1 < 0) {
      param_3->InternalId = iVar1;
      return true;
    }
    if (iVar1 != param_1) {
      param_3->InternalId = param_1;
      return true;
    }
  }
  param_3->InternalId = param_1;
  if (param_2->InternalId == -1) {
    (**(code **)(this->_padding_ + 0x68))(this,local_res8,param_1);
    if (local_res8[0].InternalId != -1) {
      param_2->InternalId = (int)local_res8[0];
      return true;
    }
    cVar2 = (**(code **)(this->_padding_ + 0xf8))(this);
    if (cVar2 != '\0') {
      piVar3 = (int *)(**(code **)(this->_padding_ + 0xc0))(this,local_18);
      param_2->InternalId = *piVar3;
      return true;
    }
    param_2->InternalId = param_1;
    TArray<FPlatformUserId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPlatformUserId_const_&>
              ((TArray<FPlatformUserId,TSizedDefaultAllocator<32>_> *)&this->_padding_,param_2);
  }
  return true;
}

// RemapUserAndDeviceToControllerId @ 142400410

bool __thiscall
FGenericPlatformInputDeviceMapper::RemapUserAndDeviceToControllerId
          (FGenericPlatformInputDeviceMapper *this,FPlatformUserId param_1,int *param_2,
          FInputDeviceId param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0xf0))();
  if (cVar1 != '\0') {
    *param_2 = param_1.InternalId;
    return true;
  }
  return false;
}

// ShouldBroadcastLegacyDelegates @ 142406340

bool __thiscall
FGenericPlatformInputDeviceMapper::ShouldBroadcastLegacyDelegates
          (FGenericPlatformInputDeviceMapper *this)

{
  return this->bShouldBroadcastLegacyDelegates;
}

// operator() @ 15048beb0

bool __thiscall
`FGenericPlatformInputDeviceMapper::AllocateNewUserId'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<6094783885533512429>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6094783885533512429>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

