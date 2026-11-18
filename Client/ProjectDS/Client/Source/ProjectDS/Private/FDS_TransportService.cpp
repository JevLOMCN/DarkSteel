// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// DebugTransportMoveTo @ 14bbefe40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __cdecl
FDS_TransportService::DebugTransportMoveTo
          (TVector<double> *param_1,ulong64 param_2,float param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar3;
  FWeakObjectPtr *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  ADS_TransportActor *this_01;
  float fVar6;
  undefined1 auStackY_1e8 [32];
  EDS_AbilityDeactivateType local_1a8;
  EDS_AbilityTagType local_1a7 [7];
  float local_1a0 [2];
  FWeakObjectPtr local_198;
  ulong64 local_190;
  UObject *local_188 [2];
  TVector<double>_u_0 local_178;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1a0[0] = param_3;
  local_190 = param_2;
  this = FDS_EntityBase::GetEntityBase(&local_190);
  if (this == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_TransportService::DebugTransportMoveTo",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x79,L"sourceEntity is nullptr. (%llu)")
    ;
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  local_1a8 = Cancel;
  local_1a7[0] = MoveToPoint;
  FDS_EntityBase::DeactivateAbility(this,local_1a7,&local_1a8);
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x150))(this,local_158);
  pUVar4 = FWeakObjectPtr::Get(this_00);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ADS_TransportActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bbeff80;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bbeff80:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_188[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)local_188);
  bVar2 = TWeakObjectPtr<ADS_TransportActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_TransportActor,FWeakObjectPtr> *)&local_198,(void *)0x0);
  if (!bVar2) {
    if (param_4 == 0) {
      local_188[0] = __real_4059000000000000;
      UDS_MoveToPointAbility::TryActivate_Entity(&local_190,(double *)local_188,param_1,local_1a0);
      this_01 = (ADS_TransportActor *)FWeakObjectPtr::Get(&local_198);
      fVar6 = 0.0;
    }
    else {
      this_01 = (ADS_TransportActor *)FWeakObjectPtr::Get(&local_198);
      fVar6 = local_1a0[0];
    }
    local_178._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_178._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_178._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    ADS_TransportActor::SetDebugMove(this_01,(TVector<double> *)&local_178._s_0,fVar6);
  }
  return;
}

// DebugTransportWarp @ 14bbf0070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_TransportService::DebugTransportWarp(TVector<double> *param_1,ulong64 param_2)

{
  UDS_EntityManager *this;
  UDS_LogManager *pUVar1;
  Arena *pAVar2;
  undefined1 auStackY_1a8 [32];
  bool local_178 [4];
  uint local_174;
  TransportWarpMapLoadingNotify local_170;
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_140 = param_2;
  server_msg::TransportWarpMapLoadingNotify::TransportWarpMapLoadingNotify(&local_170,(Arena *)0x0);
  local_170._impl_._has_bits_.has_bits_[0] =
       (uint  [1])((uint)local_170._impl_._has_bits_.has_bits_[0] | 3);
  local_170._padding_ = (longlong)&___7TransportWarpMapLoadingNotify_server_msg__6B_;
  local_170._impl_.transport_entity_id_ = 40000;
  if (local_170._impl_.warp_location_ == (Vector *)0x0) {
    if (((byte)local_170._padding_ & 1) == 0) {
      pAVar2 = (Arena *)(CONCAT71(local_170._padding_._1_7_,(byte)local_170._padding_) &
                        0xfffffffffffffffe);
    }
    else {
      pAVar2 = *(Arena **)
                (CONCAT71(local_170._padding_._1_7_,(byte)local_170._padding_) & 0xfffffffffffffffe)
      ;
    }
    local_170._impl_.warp_location_ = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar2);
  }
  DS_Util::SetVector(local_170._impl_.warp_location_,param_1);
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_TransportService::DebugTransportWarp",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x6c,L"entityManager is nullptr.");
      if ((UDS_EntityManager *)local_138._padding_ != (UDS_EntityManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  UDS_EntityManager::SetTransportWarpMapLoadingNotify(this,&local_170);
  local_174 = local_170._impl_.warp_island_id_;
  local_178[0] = true;
  TMulticastDelegate<void___cdecl(bool_const_&,UE::Math::TVector<double>_const_&,unsigned___int64_const_&,unsigned_int_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&TransWarpCompleteEvent,local_178,param_1,&local_140,&local_174);
  server_msg::TransportWarpMapLoadingNotify::~TransportWarpMapLoadingNotify(&local_170);
  return;
}

// ProcessError @ 14bc026f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_TransportService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_TransportService::ProcessError",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x92,L"SERIN ProcessError %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// ResponeTransportWarpMapLoadingNoti @ 14bc18f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_TransportService::ResponeTransportWarpMapLoadingNoti(ServerMessages *param_1)

{
  UDS_LogManager *pUVar1;
  UDS_EntityManager *this;
  TransportWarpMapLoadingNotifyDefaultTypeInternal *pTVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_TransportService::ResponeTransportWarpMapLoadingNoti",0x38,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x54,L"SERIN ResponeTransportWarpMapLoadingNoti");
    if ((UDS_EntityManager *)local_138._padding_ != (UDS_EntityManager *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if ((param_1->_impl_)._oneof_case_[0] == 0x46) {
    pTVar2 = *(TransportWarpMapLoadingNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_
    ;
  }
  else {
    pTVar2 = &server_msg::_TransportWarpMapLoadingNotify_default_instance_;
  }
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_TransportService::ResponeTransportWarpMapLoadingNoti",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x5b,L"entityManager is nullptr.");
      if ((UDS_EntityManager *)local_138._padding_ != (UDS_EntityManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  UDS_EntityManager::SetTransportWarpMapLoadingNotify(this,&pTVar2->_instance);
  return;
}

// ResponeTransportWarpNoti @ 14bc190d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_TransportService::ResponeTransportWarpNoti(ServerMessages *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UDS_LogManager *pUVar7;
  Vector *pVVar8;
  wchar_t *pwVar9;
  uint uVar10;
  longlong lVar11;
  TransportWarpNotifyDefaultTypeInternal *pTVar12;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  undefined8 local_1a0;
  FString local_198;
  FString local_188;
  TVector<double> local_178;
  FDestructionSentinel local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x3f) {
    pTVar12 = *(TransportWarpNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pTVar12 = &server_msg::_TransportWarpNotify_default_instance_;
  }
  pVVar8 = &_Vector_default_instance_._instance;
  if (*(Vector **)&((Message *)((longlong)pTVar12 + 0x10))->field_0x8 != (Vector *)0x0) {
    pVVar8 = *(Vector **)&((Message *)((longlong)pTVar12 + 0x10))->field_0x8;
  }
  DS_Util::SetFVector(&local_178,pVVar8);
  local_1a0 = *(undefined8 *)&((Message *)((longlong)pTVar12 + 0x20))->field_0x8;
  pwVar9 = L"False";
  if (((Message *)((longlong)pTVar12 + 0x30))->field_0x4 == '\x01') {
    pwVar9 = L"True";
  }
  ::FString::FString(&local_188,pwVar9);
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    ::FString::PrintfImpl(&local_198,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_TransportService::ResponeTransportWarpNoti",0x2e,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Display,local_148.Ptr,0x38,
               L"SERIN ParseTransportWarpNotify %llu %s IsSuccess:%s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  local_1a4 = *(undefined4 *)((longlong)pTVar12 + 0x30);
  local_1a8[0] = ((Message *)((longlong)pTVar12 + 0x30))->field_0x4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&TransWarpCompleteEvent,
             (FWriteAccessScope *)&local_160);
  bVar3 = false;
  TransWarpCompleteEvent._28_4_ = TransWarpCompleteEvent._28_4_ + 1;
  uVar10 = TransWarpCompleteEvent._16_4_ - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (int)TransWarpCompleteEvent._16_4_) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar11 + 8 + TransWarpCompleteEvent._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar11 + TransWarpCompleteEvent._8_8_), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,local_1a8,&local_178,&local_1a0),
                cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  TransWarpCompleteEvent._28_4_ = TransWarpCompleteEvent._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&TransWarpCompleteEvent,false);
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// ResponeTransportWarpRes @ 14bc193d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_TransportService::ResponeTransportWarpRes(ServerMessages *param_1)

{
  bool bVar1;
  TransportWarpResponseDefaultTypeInternal *pTVar2;
  UDS_MovementCore *this;
  UDS_LogManager *pUVar3;
  Vector *pVVar4;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_178;
  TVector<double>_u_0 local_170;
  TVector<double> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x40) {
    pTVar2 = *(TransportWarpResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pTVar2 = &server_msg::_TransportWarpResponse_default_instance_;
  }
  pVVar4 = &_Vector_default_instance_._instance;
  if (*(Vector **)&((Message *)((longlong)pTVar2 + 0x10))->field_0x8 != (Vector *)0x0) {
    pVVar4 = *(Vector **)&((Message *)((longlong)pTVar2 + 0x10))->field_0x8;
  }
  DS_Util::SetFVector(&local_158,pVVar4);
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_MovementCore::GetMovementCore((ulong64)&local_178);
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_178,(void *)0x0);
  if (!bVar1) {
    this = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_178);
    UDS_MovementCore::GetActorFootLocation(this,(TVector<double> *)&local_170._s_0);
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    ::FString::PrintfImpl((FString *)&local_170._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_TransportService::ResponeTransportWarpRes",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Display,local_138.Ptr,0x4f,
               L"SERIN ResponeTransportWarpRes ErrorID: %d Location: %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if ((void *)local_170._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_170._s_0.X);
    }
  }
  return;
}

// SendPacket @ 14bc1d240

void __cdecl FDS_TransportService::SendPacket(ClientMessages *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    bVar1 = UDS_NetworkManager::GetIsConnected(this);
    if (bVar1) {
      UDS_NetworkManager::SendPacket(this,param_1);
    }
  }
  return;
}

