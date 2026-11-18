// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// StaticClass @ 14b582f80

UClass * __cdecl UDS_SendPacketManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SendPacketManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SendPacketManager",
               &Z_Registration_Info_UClass_UDS_SendPacketManager.InnerSingleton,
               StaticRegisterNativesUDS_SendPacketManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SendPacketManager>,
               InternalVTableHelperCtorCaller<UDS_SendPacketManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SendPacketManager.InnerSingleton;
}

// UDS_SendPacketManager @ 14b5875e0

UDS_SendPacketManager * __thiscall
UDS_SendPacketManager::UDS_SendPacketManager(UDS_SendPacketManager *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SendPacketManager__6B_;
  (this->NetMng).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->NetMng).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_SendPacketManager @ 14b587620

UDS_SendPacketManager * __thiscall
UDS_SendPacketManager::UDS_SendPacketManager
          (UDS_SendPacketManager *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SendPacketManager__6B_;
  (this->NetMng).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->NetMng).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_SendPacketManager @ 14b587ca0

void __thiscall UDS_SendPacketManager::~UDS_SendPacketManager(UDS_SendPacketManager *this)

{
  this->_padding_ = (longlong)&___7UDS_SendPacketManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b589730

UClass * __cdecl UDS_SendPacketManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SendPacketManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SendPacketManager",
               &Z_Registration_Info_UClass_UDS_SendPacketManager.InnerSingleton,
               StaticRegisterNativesUDS_SendPacketManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SendPacketManager>,
               InternalVTableHelperCtorCaller<UDS_SendPacketManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SendPacketManager.InnerSingleton;
}

// StaticRegisterNativesUDS_SendPacketManager @ 14b589c30

void __cdecl UDS_SendPacketManager::StaticRegisterNativesUDS_SendPacketManager(void)

{
  return;
}

// Created @ 14bb5c9b0

void __thiscall UDS_SendPacketManager::Created(UDS_SendPacketManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb5d8b0

void __thiscall UDS_SendPacketManager::Destroyed(UDS_SendPacketManager *this)

{
  return;
}

// GetInst @ 14bb65e80

UDS_SendPacketManager * __cdecl UDS_SendPacketManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_SendPacketManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_SendPacketManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_SendPacketManager_NoRegister();
  pUVar3 = (UDS_SendPacketManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_SendPacketManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_SendPacketManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_SendPacketManager *)0x0;
}

// Init @ 14bb6a800

void __thiscall UDS_SendPacketManager::Init(UDS_SendPacketManager *this)

{
  return;
}

// IsAbleSendPacket @ 14bb6de70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SendPacketManager::IsAbleSendPacket(UDS_SendPacketManager *this)

{
  TWeakObjectPtr<UDS_NetworkManager,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NetworkManager *this_01;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  UDS_NetworkManager *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &this->NetMng;
  bVar1 = TWeakObjectPtr<UDS_NetworkManager,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar1) {
    local_148[0] = UDS_NetworkManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_148[0] != (UDS_NetworkManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_148[0]);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_148);
    bVar1 = TWeakObjectPtr<UDS_NetworkManager,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SendPacketManager::IsAbleSendPacket",0x27,Yes);
      pwVar4 = L"NetMng is nullptr.";
      uVar3 = 0x2af;
      goto LAB_14bb6df98;
    }
  }
  this_01 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  bVar1 = UDS_NetworkManager::GetIsConnected(this_01);
  if (bVar1) {
    return true;
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 == (UDS_LogManager *)0x0) {
    return false;
  }
  pUVar2 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_SendPacketManager::IsAbleSendPacket",0x27,Yes);
  pwVar4 = L"NetMng is not connected.";
  uVar3 = 0x2b6;
LAB_14bb6df98:
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SendCharacterAvailableSkillRequest @ 14bb88010

void __thiscall
UDS_SendPacketManager::SendCharacterAvailableSkillRequest
          (UDS_SendPacketManager *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  Message *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_NetworkManager *this_01;
  uint uVar5;
  longlong lVar6;
  ClientMessages local_38;
  
  bVar3 = IsAbleSendPacket(this);
  if (bVar3) {
    client_msg::ClientMessages::ClientMessages(&local_38,(Arena *)0x0);
    local_38._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_38._impl_._oneof_case_[0] != 0x1a5) {
      client_msg::ClientMessages::clear_ClientMessage(&local_38);
      local_38._impl_._oneof_case_[0] = 0x1a5;
      if (((byte)local_38._padding_ & 1) == 0) {
        local_38._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::CharacterAvailableSkillRequest>
                       ((Arena *)(CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_38._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::CharacterAvailableSkillRequest>
                       (*(Arena **)
                         (CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                         0xfffffffffffffffe));
      }
    }
    iVar1 = param_1->ArrayNum;
    uVar5 = 0;
    if (0 < (longlong)iVar1) {
      lVar6 = 0;
      this_00 = local_38._impl_.ClientMessage_.joincontinentreq_ + 1;
      do {
        uVar4 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        google::protobuf::RepeatedField<int>::Add
                  ((RepeatedField<int> *)this_00,
                   *(int *)((param_1->AllocatorInstance).Data + lVar6 * 4));
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar1);
    }
    this_01 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
    UDS_NetworkManager::SendPacket(this_01,&local_38);
    client_msg::ClientMessages::~ClientMessages(&local_38);
  }
  return;
}

// SendClientMessage @ 14bb88180

void __thiscall
UDS_SendPacketManager::SendClientMessage(UDS_SendPacketManager *this,ClientMessages *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this_00;
  
  bVar1 = IsAbleSendPacket(this);
  if (bVar1) {
    this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
    UDS_NetworkManager::SendPacket(this_00,param_1);
  }
  return;
}

// SendEquipQuickSlot @ 14bb881c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_SendPacketManager::SendEquipQuickSlot
          (UDS_SendPacketManager *this,int param_1,int param_2,EDS_Template param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this_00;
  Arena *pAVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_28;
  
  bVar4 = IsAbleSendPacket(this);
  if (bVar4) {
    pTVar5 = ::operator_new(0x70);
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      local_28.Object = ___xmm_00000000000000000000000000000010;
      local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFDS_ClientMessage_Twoway___00_SharedPointerInternals__6B_
      ;
      pTVar5[1]._padding_ = 0;
      pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[2]._padding_ = 0;
      pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[3]._padding_ = 0;
      pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[4]._padding_ = 0;
      pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[5]._padding_ = 0;
      pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[6]._padding_ = 0;
      pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar5[1]._padding_ = 0;
      pTVar5[1].SharedReferenceCount = (atomic<int>)0xffffffff;
      client_msg_twoway::ClientMessagesTwoway::ClientMessagesTwoway
                ((ClientMessagesTwoway *)(pTVar5 + 5),(Arena *)0x0);
      local_28.Object = (FDS_ClientMessage_Twoway *)(pTVar5 + 1);
      pTVar5[5]._padding_ = (longlong)&___7ClientMessagesTwoway_client_msg_twoway__6B_;
      if ((local_28.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      pTVar8 = pTVar5;
      local_28.SharedReferenceCount.ReferenceController = pTVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (local_28.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4824153583794520667>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_SendPacketManager.cpp"
                         ,0x25b,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if ((local_28.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_28.Object;
      if (((local_28.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f5c) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_28.Object)->clientMsg);
        (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4f5c;
        pAVar7 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::EquipQuickSlotRequest>
                           (pAVar7);
        (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
      }
      pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar6 != (Message *)0x0) {
        *(int *)&pMVar6[1].field_0x8 = param_1;
        uVar1 = *(uint *)(pMVar6 + 1);
        *(int *)&pMVar6[1].field_0xc = param_2;
        *(uint *)(pMVar6 + 2) = (uint)param_3;
        *(int *)&pMVar6[2].field_0x4 = param_4;
        *(uint *)(pMVar6 + 1) = uVar1 | 0xf;
        this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
        UDS_NetworkManager::SendTwoWayPacket(this_00,&local_28);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SendFacingPitchUpdateRequest @ 14bb883e0

void __thiscall
UDS_SendPacketManager::SendFacingPitchUpdateRequest(UDS_SendPacketManager *this,float param_1)

{
  UDS_NetworkManager *this_00;
  ClientMessages local_38;
  
  client_msg::ClientMessages::ClientMessages(&local_38,(Arena *)0x0);
  local_38._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_38._impl_._oneof_case_[0] != 8) {
    client_msg::ClientMessages::clear_ClientMessage(&local_38);
    local_38._impl_._oneof_case_[0] = 8;
    if (((byte)local_38._padding_ & 1) == 0) {
      local_38._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::FacingPitchUpdateRequest>
                     ((Arena *)(CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_38._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::FacingPitchUpdateRequest>
                     (*(Arena **)
                       (CONCAT71(local_38._padding_._1_7_,(byte)local_38._padding_) &
                       0xfffffffffffffffe));
    }
  }
  *(float *)&local_38._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
  *(uint *)(local_38._impl_.ClientMessage_.joincontinentreq_ + 1) =
       *(uint *)(local_38._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
  this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
  UDS_NetworkManager::SendPacket(this_00,&local_38);
  client_msg::ClientMessages::~ClientMessages(&local_38);
  return;
}

// SendItemDecomposition @ 14bb884a0

void __thiscall
UDS_SendPacketManager::SendItemDecomposition
          (UDS_SendPacketManager *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// SendItemDestroy @ 14bb884b0

void __thiscall
UDS_SendPacketManager::SendItemDestroy
          (UDS_SendPacketManager *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1)

{
  return;
}

// SendItemDestroy @ 14bb884c0

void __thiscall
UDS_SendPacketManager::SendItemDestroy
          (UDS_SendPacketManager *this,long64 param_1,long64 param_2,int param_3,int param_4,
          int param_5)

{
  return;
}

// SendJoinMapReadyComplete @ 14bb884d0

void __thiscall UDS_SendPacketManager::SendJoinMapReadyComplete(UDS_SendPacketManager *this)

{
  bool bVar1;
  UDS_NetworkManager *this_00;
  ClientMessages local_28;
  
  bVar1 = IsAbleSendPacket(this);
  if (bVar1) {
    client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
    local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_28._impl_._oneof_case_[0] != 10) {
      client_msg::ClientMessages::clear_ClientMessage(&local_28);
      local_28._impl_._oneof_case_[0] = 10;
      if (((byte)local_28._padding_ & 1) == 0) {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::JoinMapReadyComplete>
                       ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::JoinMapReadyComplete>
                       (*(Arena **)
                         (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                         0xfffffffffffffffe));
      }
    }
    if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = 1;
      *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
           *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
      this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
      UDS_NetworkManager::SendPacket(this_00,&local_28);
    }
    client_msg::ClientMessages::~ClientMessages(&local_28);
  }
  return;
}

// SendLogout @ 14bb88590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SendPacketManager::SendLogout(UDS_SendPacketManager *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NetworkManager *this_00;
  undefined1 auStackY_188 [32];
  ClientMessages local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = IsAbleSendPacket(this);
  if (bVar1) {
    client_msg::ClientMessages::ClientMessages(&local_158,(Arena *)0x0);
    local_158._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_158._impl_._oneof_case_[0] != 3) {
      client_msg::ClientMessages::clear_ClientMessage(&local_158);
      local_158._impl_._oneof_case_[0] = 3;
      if (((byte)local_158._padding_ & 1) == 0) {
        local_158._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::LogoutRequest>
                       ((Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_158._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::LogoutRequest>
                       (*(Arena **)
                         (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                         0xfffffffffffffffe));
      }
    }
    if (local_158._impl_.ClientMessage_.joincontinentreq_ == (Message *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_SendPacketManager::SendLogout",0x21,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x4b,L"logoutReq is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      *(undefined4 *)&local_158._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = 0;
      *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) =
           *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
      this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
      UDS_NetworkManager::SendPacket(this_00,&local_158);
    }
    client_msg::ClientMessages::~ClientMessages(&local_158);
  }
  return;
}

// SendPlayerSkillRequest @ 14bb88a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SendPacketManager::SendPlayerSkillRequest
          (UDS_SendPacketManager *this,FDS_SendSkillData *param_1)

{
  double dVar1;
  ClientMessageUnion CVar2;
  bool bVar3;
  Vector *pVVar4;
  void *pvVar5;
  UDS_LogManager *pUVar6;
  UDS_NetworkManager *this_00;
  uint uVar7;
  Arena *pAVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_258 [32];
  TVector<double>_u_0 local_1f8;
  FString local_1e0;
  ClientMessages local_1d0;
  TVector<double>_u_0 local_1b0 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar3 = IsAbleSendPacket(this);
  if (!bVar3) {
    return;
  }
  client_msg::ClientMessages::ClientMessages(&local_1d0,(Arena *)0x0);
  local_1d0._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_1d0._impl_._oneof_case_[0] != 7) {
    client_msg::ClientMessages::clear_ClientMessage(&local_1d0);
    local_1d0._impl_._oneof_case_[0] = 7;
    if (((byte)local_1d0._padding_ & 1) == 0) {
      local_1d0._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CastSkillRequest>
                     ((Arena *)(CONCAT71(local_1d0._padding_._1_7_,(byte)local_1d0._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_1d0._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CastSkillRequest>
                     (*(Arena **)
                       (CONCAT71(local_1d0._padding_._1_7_,(byte)local_1d0._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar2 = local_1d0._impl_.ClientMessage_;
  if (local_1d0._impl_.ClientMessage_.joincontinentreq_ == (Message *)0x0) goto LAB_14bb890db;
  *(int *)&local_1d0._impl_.ClientMessage_.joincontinentreq_[3].field_0x8 = param_1->SkillID;
  *(uint *)(local_1d0._impl_.ClientMessage_.joincontinentreq_ + 1) =
       *(uint *)(local_1d0._impl_.ClientMessage_.joincontinentreq_ + 1) | 0x11;
  pVVar4 = *(Vector **)&local_1d0._impl_.ClientMessage_.joincontinentreq_[1].field_0x8;
  if (pVVar4 == (Vector *)0x0) {
    pAVar8 = (Arena *)(*(ulonglong *)&(local_1d0._impl_.ClientMessage_.joincontinentreq_)->field_0x8
                      & 0xfffffffffffffffe);
    if (((local_1d0._impl_.ClientMessage_.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pVVar4 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar8);
    *(Vector **)&CVar2.joincontinentreq_[1].field_0x8 = pVVar4;
  }
  local_1f8._s_0.X = (param_1->SourceLocation).field0_0x0._s_0.X;
  local_1f8._s_0.Y = (param_1->SourceLocation).field0_0x0._s_0.Y;
  local_1f8._s_0.Z = (param_1->SourceLocation).field0_0x0._s_0.Z;
  DS_Util::SetVector(pVVar4,(TVector<double> *)&local_1f8._s_0);
  *(float *)&CVar2.joincontinentreq_[3].field_0xc = param_1->RotateYaw;
  uVar10 = *(uint *)(CVar2.joincontinentreq_ + 1);
  uVar7 = uVar10 | 0x20;
  *(uint *)(CVar2.joincontinentreq_ + 1) = uVar7;
  if (param_1->TargetEntityID != 0) {
    uVar7 = uVar10 | 0x60;
    *(ulong64 *)(CVar2.joincontinentreq_ + 4) = param_1->TargetEntityID;
    *(uint *)(CVar2.joincontinentreq_ + 1) = uVar7;
  }
  dVar1 = __real_3f1a36e2e0000000;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(double *)&CVar2.joincontinentreq_[4].field_0x8 = param_1->SkillStartTime;
  *(uint *)(CVar2.joincontinentreq_ + 1) = uVar7 | 0x80;
  local_1f8._s_0.Z = *(double *)((longlong)&(param_1->StopSkillDestLocation).field0_0x0 + 0x10);
  uVar9 = *(uint *)&(param_1->StopSkillDestLocation).field0_0x0 & uVar10;
  uVar11 = *(uint *)((longlong)&(param_1->StopSkillDestLocation).field0_0x0 + 4) & uVar12;
  if (((dVar1 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar1) ||
      (uVar9 = *(uint *)((longlong)&(param_1->StopSkillDestLocation).field0_0x0 + 8) & uVar10,
      uVar11 = *(uint *)((longlong)&(param_1->StopSkillDestLocation).field0_0x0 + 0xc) & uVar12,
      dVar1 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar1)) ||
     (uVar10 = SUB84(local_1f8._s_0.Z,0) & uVar10,
     uVar12 = (uint)((ulonglong)local_1f8._s_0.Z >> 0x20) & uVar12,
     dVar1 <= (double)CONCAT44(uVar12,uVar10) && (double)CONCAT44(uVar12,uVar10) != dVar1)) {
    *(uint *)(CVar2.joincontinentreq_ + 1) = uVar7 | 0x84;
    pvVar5 = *(void **)&CVar2.joincontinentreq_[2].field_0x8;
    if (pvVar5 == (void *)0x0) {
      pAVar8 = (Arena *)(*(ulonglong *)&(CVar2.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
      if (((CVar2.joincontinentreq_)->field_0x8 & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pvVar5 = google::protobuf::Arena::DefaultConstruct<client_msg::StopSkillInfo>(pAVar8);
      *(void **)&CVar2.joincontinentreq_[2].field_0x8 = pvVar5;
    }
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 1;
    pVVar4 = *(Vector **)((longlong)pvVar5 + 0x18);
    if (pVVar4 == (Vector *)0x0) {
      pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar5 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar5 + 8) & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pVVar4 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar8);
      *(Vector **)((longlong)pvVar5 + 0x18) = pVVar4;
    }
    local_1f8._s_0.X = (param_1->StopSkillDestLocation).field0_0x0._s_0.X;
    local_1f8._s_0.Y = (param_1->StopSkillDestLocation).field0_0x0._s_0.Y;
    local_1f8._s_0.Z = (param_1->StopSkillDestLocation).field0_0x0._s_0.Z;
    DS_Util::SetVector(pVVar4,(TVector<double> *)&local_1f8._s_0);
    *(double *)((longlong)pvVar5 + 0x20) = param_1->StopSkillDestTime;
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 2;
    pUVar6 = UDS_LogManager::GetInst();
    if ((pUVar6 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
      pUVar6 = UDS_LogManager::GetInst();
      local_1f8._s_0.Z = (param_1->StopSkillDestLocation).field0_0x0._s_0.Z;
      ::FString::PrintfImpl(&local_1e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_SendPacketManager::SendPlayerSkillRequest",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Display,local_178.Ptr,0x11e,L"SERIN StopSkill %s %f");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
    }
  }
  local_1b0[0]._0_8_ = (param_1->HitSphereLocation).field0_0x0._s_0.X;
  local_1b0[0]._8_8_ = (param_1->HitSphereLocation).field0_0x0._s_0.Y;
  uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar16 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  local_1b0[0]._16_8_ = (param_1->HitSphereLocation).field0_0x0._s_0.Z;
  if (((double)local_1b0[0]._0_8_ == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
     ((double)local_1b0[0]._8_8_ == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) {
    uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar14 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    if ((double)local_1b0[0]._16_8_ != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)
    goto LAB_14bb88dff;
  }
  else {
LAB_14bb88dff:
    *(uint *)(CVar2.joincontinentreq_ + 1) = *(uint *)(CVar2.joincontinentreq_ + 1) | 2;
    pvVar5 = *(void **)(CVar2.joincontinentreq_ + 2);
    if (pvVar5 == (void *)0x0) {
      pAVar8 = (Arena *)(*(ulonglong *)&(CVar2.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
      if (((CVar2.joincontinentreq_)->field_0x8 & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pvVar5 = google::protobuf::Arena::DefaultConstruct<messages::MultiTargetHitPoint>(pAVar8);
      *(void **)(CVar2.joincontinentreq_ + 2) = pvVar5;
    }
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 1;
    pVVar4 = *(Vector **)((longlong)pvVar5 + 0x18);
    if (pVVar4 == (Vector *)0x0) {
      pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar5 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar5 + 8) & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pVVar4 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar8);
      *(Vector **)((longlong)pvVar5 + 0x18) = pVVar4;
    }
    DS_Util::SetVector(pVVar4,(TVector<double> *)&local_1b0[0]._s_0);
    *(float *)((longlong)pvVar5 + 0x20) = param_1->HitSphereRadius;
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 2;
    *(int *)((longlong)pvVar5 + 0x24) = param_1->HitSphereID;
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 4;
    uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar14 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    uVar16 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20)
    ;
  }
  if ((((double)CONCAT44(uVar16,uVar15) != (param_1->ProjectileImpactLocation).field0_0x0._s_0.X) ||
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
       (param_1->ProjectileImpactLocation).field0_0x0._s_0.Y)) ||
     ((double)CONCAT44(uVar14,uVar13) != (param_1->ProjectileImpactLocation).field0_0x0._s_0.Z)) {
    *(uint *)(CVar2.joincontinentreq_ + 1) = *(uint *)(CVar2.joincontinentreq_ + 1) | 8;
    pvVar5 = *(void **)(CVar2.joincontinentreq_ + 3);
    if (pvVar5 == (void *)0x0) {
      pAVar8 = (Arena *)(*(ulonglong *)&(CVar2.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
      if (((CVar2.joincontinentreq_)->field_0x8 & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pvVar5 = google::protobuf::Arena::DefaultConstruct<messages::ProjectileInfo>(pAVar8);
      *(void **)(CVar2.joincontinentreq_ + 3) = pvVar5;
    }
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 2;
    pVVar4 = *(Vector **)((longlong)pvVar5 + 0x20);
    if (pVVar4 == (Vector *)0x0) {
      pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar5 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar5 + 8) & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pVVar4 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar8);
      *(Vector **)((longlong)pvVar5 + 0x20) = pVVar4;
    }
    DS_Util::SetVector(pVVar4,&param_1->ProjectileEndLocation);
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 1;
    pVVar4 = *(Vector **)((longlong)pvVar5 + 0x18);
    if (pVVar4 == (Vector *)0x0) {
      pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar5 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar5 + 8) & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pVVar4 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar8);
      *(Vector **)((longlong)pvVar5 + 0x18) = pVVar4;
    }
    DS_Util::SetVector(pVVar4,&param_1->ProjectileImpactLocation);
    *(float *)((longlong)pvVar5 + 0x28) = param_1->ProjectileImpactDelay;
    *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 4;
  }
  this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
  UDS_NetworkManager::SendPacket(this_00,&local_1d0);
  pUVar6 = UDS_LogManager::GetInst();
  if ((pUVar6 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
    pUVar6 = UDS_LogManager::GetInst();
    ::FString::PrintfImpl((FString *)&local_1f8._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_1e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_SendPacketManager::SendPlayerSkillRequest",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Display,local_178.Ptr,0x145,L"SERIN MainPlayer SendSkill %d %s %f %llu %s");
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if ((void *)local_1f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_1f8._s_0.X);
    }
  }
LAB_14bb890db:
  client_msg::ClientMessages::~ClientMessages(&local_1d0);
  return;
}

// SendSkillModeEndRequest @ 14bb89110

void __thiscall UDS_SendPacketManager::SendSkillModeEndRequest(UDS_SendPacketManager *this)

{
  UDS_NetworkManager *this_00;
  Arena *pAVar1;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x1a6) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x1a6;
    if (((byte)local_28._padding_ & 1) == 0) {
      pAVar1 = (Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                        0xfffffffffffffffe);
    }
    else {
      pAVar1 = *(Arena **)
                (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) & 0xfffffffffffffffe);
    }
    local_28._impl_.ClientMessage_.joincontinentreq_ =
         google::protobuf::Arena::DefaultConstruct<client_msg::SkillModeEndRequest>(pAVar1);
  }
  this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
  UDS_NetworkManager::SendPacket(this_00,&local_28);
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendSyncRequest @ 14bb891b0

void __thiscall
UDS_SendPacketManager::SendSyncRequest(UDS_SendPacketManager *this,FDS_NetSyncData *param_1)

{
  uint uVar1;
  code *pcVar2;
  ClientMessageUnion CVar3;
  bool bVar4;
  int iVar5;
  Vector *pVVar6;
  VectorF *pVVar7;
  void *pvVar8;
  UDS_NetworkManager *this_00;
  Arena *pAVar9;
  double dVar10;
  ClientMessages local_28;
  
  bVar4 = IsAbleSendPacket(this);
  if (bVar4) {
    client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
    local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_28._impl_._oneof_case_[0] != 6) {
      client_msg::ClientMessages::clear_ClientMessage(&local_28);
      local_28._impl_._oneof_case_[0] = 6;
      if (((byte)local_28._padding_ & 1) == 0) {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::NetSyncRequest>
                       ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::NetSyncRequest>
                       (*(Arena **)
                         (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                         0xfffffffffffffffe));
      }
    }
    CVar3 = local_28._impl_.ClientMessage_;
    if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
           *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
      pVVar6 = *(Vector **)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8;
      if (pVVar6 == (Vector *)0x0) {
        pAVar9 = (Arena *)(*(ulonglong *)
                            &(local_28._impl_.ClientMessage_.joincontinentreq_)->field_0x8 &
                          0xfffffffffffffffe);
        if (((local_28._impl_.ClientMessage_.joincontinentreq_)->field_0x8 & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pVVar6 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar9);
        *(Vector **)&CVar3.joincontinentreq_[1].field_0x8 = pVVar6;
      }
      dVar10 = (param_1->PrevPosition).field0_0x0._s_0.X;
      if (((dVar10 == 0.0) && ((param_1->PrevPosition).field0_0x0._s_0.Y == 0.0)) &&
         ((param_1->PrevPosition).field0_0x0._s_0.Z == 0.0)) {
        iVar5 = _isnan((param_1->NowPosition).field0_0x0._s_0.X);
        if ((((iVar5 != 0) || (iVar5 = _isnan((param_1->NowPosition).field0_0x0._s_0.Y), iVar5 != 0)
             ) || (iVar5 = _isnan((param_1->NowPosition).field0_0x0._s_0.Z), iVar5 != 0)) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4824153583794520192>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_SendPacketManager.cpp"
                               ,0x80,"false"), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar5 = _isnan(dVar10);
        if ((((iVar5 != 0) ||
             (iVar5 = _isnan((param_1->PrevPosition).field0_0x0._s_0.Y), iVar5 != 0)) ||
            (iVar5 = _isnan((param_1->PrevPosition).field0_0x0._s_0.Z), iVar5 != 0)) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4824153583794520203>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_SendPacketManager.cpp"
                               ,0x8b,"false"), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      DS_Util::SetVector(pVVar6,&param_1->NowPosition);
      *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 4;
      pVVar7 = *(VectorF **)&CVar3.joincontinentreq_[2].field_0x8;
      if (pVVar7 == (VectorF *)0x0) {
        pAVar9 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe)
        ;
        if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pVVar7 = google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar9);
        *(VectorF **)&CVar3.joincontinentreq_[2].field_0x8 = pVVar7;
      }
      DS_Util::SetVector(pVVar7,&param_1->VelocityVector);
      *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 2;
      pVVar7 = *(VectorF **)(CVar3.joincontinentreq_ + 2);
      if (pVVar7 == (VectorF *)0x0) {
        pAVar9 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe)
        ;
        if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pVVar7 = google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar9);
        *(VectorF **)(CVar3.joincontinentreq_ + 2) = pVVar7;
      }
      DS_Util::SetNetRotate(pVVar7,&param_1->EntityDirection);
      if (param_1->TransportEntityID != 0) {
        *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 8;
        pvVar8 = *(void **)(CVar3.joincontinentreq_ + 3);
        if (pvVar8 == (void *)0x0) {
          pAVar9 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 &
                            0xfffffffffffffffe);
          if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          pvVar8 = google::protobuf::Arena::DefaultConstruct<messages::MyTransport>(pAVar9);
          *(void **)(CVar3.joincontinentreq_ + 3) = pvVar8;
        }
        *(ulong64 *)((longlong)pvVar8 + 0x20) = param_1->TransportEntityID;
        *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 3;
        pVVar6 = *(Vector **)((longlong)pvVar8 + 0x18);
        if (pVVar6 == (Vector *)0x0) {
          pAVar9 = (Arena *)(*(ulonglong *)((longlong)pvVar8 + 8) & 0xfffffffffffffffe);
          if ((*(byte *)((longlong)pvVar8 + 8) & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          pVVar6 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar9);
          *(Vector **)((longlong)pvVar8 + 0x18) = pVVar6;
        }
        DS_Util::SetVector(pVVar6,&param_1->NowRelativePosition);
      }
      if (__real_322bcc77 <
          (float)((uint)param_1->SendFallingHeight & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 0x10;
        pvVar8 = *(void **)&CVar3.joincontinentreq_[3].field_0x8;
        if (pvVar8 == (void *)0x0) {
          pAVar9 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 &
                            0xfffffffffffffffe);
          if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          pvVar8 = google::protobuf::Arena::DefaultConstruct<messages::FallingInfo>(pAVar9);
          *(void **)&CVar3.joincontinentreq_[3].field_0x8 = pvVar8;
        }
        *(float *)((longlong)pvVar8 + 0x18) = param_1->SendFallingHeight;
        *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 1;
      }
      *(float *)&CVar3.joincontinentreq_[5].field_0x4 = param_1->AccelerationValue;
      *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 0x200;
      dVar10 = UDS_TimeUtilManager::GetCurrentServerTime();
      *(double *)(CVar3.joincontinentreq_ + 4) = dVar10;
      uVar1 = *(uint *)(CVar3.joincontinentreq_ + 1);
      *(uint *)(CVar3.joincontinentreq_ + 1) = uVar1 | 0x20;
      *(uint *)&CVar3.joincontinentreq_[4].field_0x8 = (byte)(param_1->StateFlags).Packed & 3;
      *(uint *)(CVar3.joincontinentreq_ + 1) = uVar1 | 0x60;
      *(uint *)(CVar3.joincontinentreq_ + 5) = (uint)(param_1->StateFlags).Packed >> 0x19 & 0x1f;
      *(uint *)(CVar3.joincontinentreq_ + 1) = uVar1 | 0x160;
      *(uint *)&CVar3.joincontinentreq_[4].field_0xc =
           (uint)(param_1->StateFlags).Packed >> 4 & 0x7f;
      *(uint *)(CVar3.joincontinentreq_ + 1) = uVar1 | 0x1e0;
      this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
      UDS_NetworkManager::SendPacket(this_00,&local_28);
    }
    client_msg::ClientMessages::~ClientMessages(&local_28);
  }
  return;
}

// SendTimeLogRequest @ 14bb89550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_SendPacketManager::SendTimeLogRequest
          (UDS_SendPacketManager *this,float param_1,double param_2,double param_3)

{
  uint uVar1;
  code *pcVar2;
  ClientMessageUnion CVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  UDS_GameInstance *this_00;
  FString *pFVar6;
  size_t sVar7;
  uchar *puVar8;
  UDS_NetworkManager *this_01;
  wchar_t *_Str;
  Arena *pAVar9;
  uint uVar10;
  undefined1 auStack_158 [32];
  ClientMessages local_138;
  basic_string_view<char,std::char_traits<char>_> local_118;
  FString local_108;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  client_msg::ClientMessages::ClientMessages(&local_138,(Arena *)0x0);
  local_138._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_138._impl_._oneof_case_[0] != 999) {
    client_msg::ClientMessages::clear_ClientMessage(&local_138);
    local_138._impl_._oneof_case_[0] = 999;
    if (((byte)local_138._padding_ & 1) == 0) {
      local_138._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LogTimeSyncRequest>
                     ((Arena *)(CONCAT71(local_138._padding_._1_7_,(byte)local_138._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_138._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::LogTimeSyncRequest>
                     (*(Arena **)
                       (CONCAT71(local_138._padding_._1_7_,(byte)local_138._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar3 = local_138._impl_.ClientMessage_;
  if (local_138._impl_.ClientMessage_.joincontinentreq_ == (Message *)0x0) goto LAB_14bb89795;
  this_00 = UDS_GameInstance::GetInst();
  pFVar6 = UDS_GameInstance::GetLocalIPAddress(this_00,&local_108);
  if ((pFVar6->Data).ArrayNum == 0) {
    _Str = L"";
LAB_14bb8965d:
    local_78.Data = (FScriptContainerElement *)0x0;
    sVar7 = wcslen(_Str);
    local_68 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar7);
    uVar1 = local_68 + 1;
    uVar10 = uVar1;
    if (uVar1 < 0x81) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_14bb89694;
      }
    }
    else {
LAB_14bb89694:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar10,1);
    }
    local_70 = local_f8;
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      local_70 = local_78.Data;
    }
    puVar8 = UE::Core::Private::Convert((uchar *)local_70,uVar1,_Str,(int)sVar7 + 1);
    if ((puVar8 == (uchar *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_14bb8965d;
    local_70 = (FScriptContainerElement *)0x0;
    local_68 = 0;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pFVar4 = local_70;
  *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 1;
  pAVar9 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
  if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
    pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  local_118._Mysize = strlen((char *)local_70);
  local_118._Mydata = (char *)pFVar4;
  google::protobuf::internal::ArenaStringPtr::Set
            ((ArenaStringPtr *)&CVar3.joincontinentreq_[1].field_0x8,&local_118,pAVar9);
  *(float *)&CVar3.joincontinentreq_[3].field_0x8 = param_1;
  uVar1 = *(uint *)(CVar3.joincontinentreq_ + 1);
  *(double *)(CVar3.joincontinentreq_ + 3) = param_2;
  *(double *)&CVar3.joincontinentreq_[2].field_0x8 = param_3;
  *(uint *)(CVar3.joincontinentreq_ + 1) = uVar1 | 0x1c;
  this_01 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
  UDS_NetworkManager::SendPacket(this_01,&local_138);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
LAB_14bb89795:
  client_msg::ClientMessages::~ClientMessages(&local_138);
  return;
}

// SendTimeSyncRequest @ 14bb897d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SendPacketManager::SendTimeSyncRequest(UDS_SendPacketManager *this)

{
  Message *pMVar1;
  ClientMessageUnion CVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_NetworkManager *this_00;
  double dVar5;
  undefined1 auStackY_1a8 [32];
  ClientMessages local_168;
  longlong local_148;
  FDateTime local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = IsAbleSendPacket(this);
  if (bVar3) {
    client_msg::ClientMessages::ClientMessages(&local_168,(Arena *)0x0);
    local_168._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_168._impl_._oneof_case_[0] != 0xf) {
      client_msg::ClientMessages::clear_ClientMessage(&local_168);
      local_168._impl_._oneof_case_[0] = 0xf;
      if (((byte)local_168._padding_ & 1) == 0) {
        local_168._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::TimeSyncRequest>
                       ((Arena *)(CONCAT71(local_168._padding_._1_7_,(byte)local_168._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_168._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::TimeSyncRequest>
                       (*(Arena **)
                         (CONCAT71(local_168._padding_._1_7_,(byte)local_168._padding_) &
                         0xfffffffffffffffe));
      }
    }
    CVar2 = local_168._impl_.ClientMessage_;
    if (local_168._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      bVar3 = UDS_GameInstance::GetIsCCSAIMode();
      if ((bVar3) || (bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild(), bVar3)) {
        FDateTime::UtcNow();
        FDateTime::FDateTime(&local_140,0x7b2,1,1,0,0,0,0);
        dVar5 = (double)(local_148 - local_140.Ticks) * __real_3e7ad7f29abcaf48;
      }
      else {
        dVar5 = UDS_TimeUtilManager::GetNowUTCTime(NTPTime);
      }
      *(double *)&CVar2.joincontinentreq_[1].field_0x8 = dVar5;
      pMVar1 = CVar2.joincontinentreq_ + 1;
      *(uint *)pMVar1 = *(uint *)pMVar1 | 1;
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_SendPacketManager::SendTimeSyncRequest",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Display,local_138.Ptr,0xde,L"SendTimeSyncRequest");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
      UDS_NetworkManager::SendPacket(this_00,&local_168);
    }
    client_msg::ClientMessages::~ClientMessages(&local_168);
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SendPacketManager::SendTimeSyncRequest",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xca,L"failed SendTimeSyncRequest");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// SendTransportWarpRequest @ 14bb89a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SendPacketManager::SendTransportWarpRequest(UDS_SendPacketManager *this,ulong64 param_1)

{
  Message *pMVar1;
  ClientMessageUnion CVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_NetworkManager *this_00;
  double dVar5;
  undefined1 auStackY_198 [32];
  ClientMessages local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SendPacketManager::SendTransportWarpRequest",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Display,local_138.Ptr,0x28b,L"SERIN SendTransportWarpRequest %llu");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  client_msg::ClientMessages::ClientMessages(&local_158,(Arena *)0x0);
  local_158._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_158._impl_._oneof_case_[0] != 0x1d) {
    client_msg::ClientMessages::clear_ClientMessage(&local_158);
    local_158._impl_._oneof_case_[0] = 0x1d;
    if (((byte)local_158._padding_ & 1) == 0) {
      local_158._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TransportWarpRequest>
                     ((Arena *)(CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_158._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TransportWarpRequest>
                     (*(Arena **)
                       (CONCAT71(local_158._padding_._1_7_,(byte)local_158._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar2 = local_158._impl_.ClientMessage_;
  if (local_158._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(ulong64 *)&local_158._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_158._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
    *(double *)(CVar2.joincontinentreq_ + 2) = dVar5;
    pMVar1 = CVar2.joincontinentreq_ + 1;
    *(uint *)pMVar1 = *(uint *)pMVar1 | 2;
    bVar3 = FWeakObjectPtr::IsValid(&(this->NetMng).WeakPtr);
    if (bVar3) {
      this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
      UDS_NetworkManager::SendPacket(this_00,&local_158);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_158);
  return;
}

// SendUseInventoryExtendItem @ 14bb89bc0

void __thiscall
UDS_SendPacketManager::SendUseInventoryExtendItem
          (UDS_SendPacketManager *this,int param_1,int param_2)

{
  uint uVar1;
  UDS_NetworkManager *this_00;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x52) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x52;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::InventoryExtendRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::InventoryExtendRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0xc = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 3;
    this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
    UDS_NetworkManager::SendPacket(this_00,&local_28);
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// SendUseItem @ 14bb89ca0

void __thiscall
UDS_SendPacketManager::SendUseItem(UDS_SendPacketManager *this,int param_1,ulong64 param_2)

{
  uint uVar1;
  bool bVar2;
  UDS_NetworkManager *this_00;
  ClientMessages local_28;
  
  bVar2 = IsAbleSendPacket(this);
  if (bVar2) {
    client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
    local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_28._impl_._oneof_case_[0] != 0x15) {
      client_msg::ClientMessages::clear_ClientMessage(&local_28);
      local_28._impl_._oneof_case_[0] = 0x15;
      if (((byte)local_28._padding_ & 1) == 0) {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::ItemUseRequest>
                       ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::ItemUseRequest>
                       (*(Arena **)
                         (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                         0xfffffffffffffffe));
      }
    }
    if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_1;
      uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
      *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_2;
      *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 3;
      this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
      UDS_NetworkManager::SendPacket(this_00,&local_28);
    }
    client_msg::ClientMessages::~ClientMessages(&local_28);
  }
  return;
}

// StopSkillMoveRequest @ 14bb91f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SendPacketManager::StopSkillMoveRequest
          (UDS_SendPacketManager *this,ulong64 param_1,int param_2,TVector<double> *param_3,
          double param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  ClientMessageUnion CVar6;
  void *pvVar7;
  Vector *pVVar8;
  UDS_NetworkManager *this_00;
  UDS_LogManager *pUVar9;
  Arena *pAVar10;
  undefined1 auStackY_1e8 [32];
  ClientMessages local_198;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  client_msg::ClientMessages::ClientMessages(&local_198,(Arena *)0x0);
  local_198._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_198._impl_._oneof_case_[0] != 0x1a4) {
    client_msg::ClientMessages::clear_ClientMessage(&local_198);
    local_198._impl_._oneof_case_[0] = 0x1a4;
    if (((byte)local_198._padding_ & 1) == 0) {
      local_198._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::StopSkillMoveRequest>
                     ((Arena *)(CONCAT71(local_198._padding_._1_7_,(byte)local_198._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_198._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::StopSkillMoveRequest>
                     (*(Arena **)
                       (CONCAT71(local_198._padding_._1_7_,(byte)local_198._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar6 = local_198._impl_.ClientMessage_;
  dVar5 = __real_3f1a36e2e0000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  *(ulong64 *)&local_198._impl_.ClientMessage_.joincontinentreq_[2].field_0x8 = param_1;
  uVar2 = *(uint *)(local_198._impl_.ClientMessage_.joincontinentreq_ + 1);
  *(int *)(local_198._impl_.ClientMessage_.joincontinentreq_ + 3) = param_2;
  *(uint *)(local_198._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar2 | 0xc;
  if (((dVar5 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
                                 uVar4,(uint)*(undefined8 *)&param_3->field0_0x0 & uVar3)) ||
      (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
      dVar5 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar4,(uint)uVar1 & uVar3))) ||
     (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
     dVar5 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar4,(uint)uVar1 & uVar3))) {
    *(uint *)(local_198._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar2 | 0xe;
    pvVar7 = *(void **)(local_198._impl_.ClientMessage_.joincontinentreq_ + 2);
    if (pvVar7 == (void *)0x0) {
      pAVar10 = (Arena *)(*(ulonglong *)
                           &(local_198._impl_.ClientMessage_.joincontinentreq_)->field_0x8 &
                         0xfffffffffffffffe);
      if (((local_198._impl_.ClientMessage_.joincontinentreq_)->field_0x8 & 1) != 0) {
        pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
      }
      pvVar7 = google::protobuf::Arena::DefaultConstruct<client_msg::StopSkillInfo>(pAVar10);
      *(void **)(CVar6.joincontinentreq_ + 2) = pvVar7;
    }
    *(uint *)((longlong)pvVar7 + 0x10) = *(uint *)((longlong)pvVar7 + 0x10) | 1;
    pVVar8 = *(Vector **)((longlong)pvVar7 + 0x18);
    if (pVVar8 == (Vector *)0x0) {
      pAVar10 = (Arena *)(*(ulonglong *)((longlong)pvVar7 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar7 + 8) & 1) != 0) {
        pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
      }
      pVVar8 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar10);
      *(Vector **)((longlong)pvVar7 + 0x18) = pVVar8;
    }
    DS_Util::SetVector(pVVar8,param_3);
    *(double *)((longlong)pvVar7 + 0x20) = param_4;
    *(uint *)((longlong)pvVar7 + 0x10) = *(uint *)((longlong)pvVar7 + 0x10) | 2;
  }
  this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
  UDS_NetworkManager::SendPacket(this_00,&local_198);
  pUVar9 = UDS_LogManager::GetInst();
  if ((pUVar9 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
    pUVar9 = UDS_LogManager::GetInst();
    ::FString::PrintfImpl(&local_178,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_SendPacketManager::StopSkillMoveRequest",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Display,local_168.Ptr,0x179,L"SERIN %llu %d %s");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_198);
  return;
}

// TerminateSkillRequest @ 14bb92810

void __thiscall
UDS_SendPacketManager::TerminateSkillRequest(UDS_SendPacketManager *this,int param_1)

{
  UDS_NetworkManager *this_00;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0xb) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0xb;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TerminateSkillRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::TerminateSkillRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
  *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
       *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
  this_00 = (UDS_NetworkManager *)FWeakObjectPtr::Get(&(this->NetMng).WeakPtr);
  UDS_NetworkManager::SendPacket(this_00,&local_28);
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// Update @ 14bb96210

void __thiscall UDS_SendPacketManager::Update(UDS_SendPacketManager *this,float *param_1)

{
  return;
}

