// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 50

// StaticClass @ 14b52b770

UClass * __cdecl UDS_NetworkManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NetworkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NetworkManager",
               &Z_Registration_Info_UClass_UDS_NetworkManager.InnerSingleton,
               StaticRegisterNativesUDS_NetworkManager,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NetworkManager>,
               InternalVTableHelperCtorCaller<UDS_NetworkManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NetworkManager.InnerSingleton;
}

// UDS_NetworkManager @ 14b52f5a0

UDS_NetworkManager * __thiscall
UDS_NetworkManager::UDS_NetworkManager(UDS_NetworkManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NetworkManager__6B_;
  *(undefined8 *)&this->OnConnectResult = 0;
  *(undefined8 *)&(this->OnConnectResult).field_0x8 = 0;
  *(undefined8 *)&(this->OnConnectResult).field_0x10 = 0;
  *(undefined8 *)&this->SendValidCheckDel = 0;
  *(undefined8 *)&(this->SendValidCheckDel).field_0x8 = 0;
  *(undefined4 *)&(this->SendValidCheckDel).field_0x10 = 0;
  (this->InternetAddr).Object = (FInternetAddr *)0x0;
  (this->InternetAddr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->SocketBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketBuffer).ArrayNum = 0;
  (this->SocketBuffer).ArrayMax = 0;
  (this->PacketProcessor).field0_0x0.DebugPtr = (UDS_PacketProcessor *)0x0;
  (this->SendPingRequestTimerHandle).Handle = 0;
  (this->SendTimeSyncHandle).Handle = 0;
  (this->ServerMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerMessages).ArrayNum = 0;
  (this->ServerMessages).ArrayMax = 0;
  this->bIsConnected = false;
  this->Socket = (FSocket *)0x0;
  this->PingSendCount = 0;
  this->PingTimeSeconds = 0.0;
  this->PingTimeSeconds_NotRealTime = 0.0;
  this->PongTimeSeconds = 0.0;
  this->PingPongLatency = 0.0;
  this->ServerTimeSecondsAtPong = 0.0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CSMessages,4000);
  *(undefined8 *)&this->TwoWayClientMessages = 0;
  *(undefined8 *)&(this->TwoWayClientMessages).field_0x8 = 0;
  *(undefined8 *)&(this->TwoWayClientMessages).field_0x20 = 0;
  this->ReadPacketRunner = (FDS_ReadPacketRunner *)0x0;
  this->ReadPacketRunnerThread = (FRunnableThread *)0x0;
  this->PacketGroupID = 0;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x28 = 0;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x2c = 0x80;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x34 = 0;
  *(undefined8 *)&(this->TwoWayClientMessages).field_0x40 = 0;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x48 = 0;
  *(undefined8 *)&this->PacketSequenceMap = 0;
  *(undefined8 *)&(this->PacketSequenceMap).field_0x8 = 0;
  *(undefined8 *)&(this->PacketSequenceMap).field_0x20 = 0;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x28 = 0;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x34 = 0;
  *(undefined8 *)&(this->PacketSequenceMap).field_0x40 = 0;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x48 = 0;
  this->CurWorldTimeSecond = 0.0;
  this->BeforeWorldTimeSecond = 0.0;
  this->bShowPingPongLog = false;
  return this;
}

// UDS_NetworkManager @ 14b52f710

UDS_NetworkManager * __thiscall
UDS_NetworkManager::UDS_NetworkManager(UDS_NetworkManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NetworkManager__6B_;
  *(undefined8 *)&this->OnConnectResult = 0;
  *(undefined8 *)&(this->OnConnectResult).field_0x8 = 0;
  *(undefined8 *)&(this->OnConnectResult).field_0x10 = 0;
  *(undefined8 *)&this->SendValidCheckDel = 0;
  *(undefined8 *)&(this->SendValidCheckDel).field_0x8 = 0;
  *(undefined4 *)&(this->SendValidCheckDel).field_0x10 = 0;
  (this->InternetAddr).Object = (FInternetAddr *)0x0;
  (this->InternetAddr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->SocketBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketBuffer).ArrayNum = 0;
  (this->SocketBuffer).ArrayMax = 0;
  (this->PacketProcessor).field0_0x0.DebugPtr = (UDS_PacketProcessor *)0x0;
  (this->SendPingRequestTimerHandle).Handle = 0;
  (this->SendTimeSyncHandle).Handle = 0;
  (this->ServerMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerMessages).ArrayNum = 0;
  (this->ServerMessages).ArrayMax = 0;
  this->bIsConnected = false;
  this->Socket = (FSocket *)0x0;
  this->PingSendCount = 0;
  this->PingTimeSeconds = 0.0;
  this->PingTimeSeconds_NotRealTime = 0.0;
  this->PongTimeSeconds = 0.0;
  this->PingPongLatency = 0.0;
  this->ServerTimeSecondsAtPong = 0.0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CSMessages,4000);
  *(undefined8 *)&this->TwoWayClientMessages = 0;
  *(undefined8 *)&(this->TwoWayClientMessages).field_0x8 = 0;
  *(undefined8 *)&(this->TwoWayClientMessages).field_0x20 = 0;
  this->ReadPacketRunner = (FDS_ReadPacketRunner *)0x0;
  this->ReadPacketRunnerThread = (FRunnableThread *)0x0;
  this->PacketGroupID = 0;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x28 = 0;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x2c = 0x80;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x34 = 0;
  *(undefined8 *)&(this->TwoWayClientMessages).field_0x40 = 0;
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x48 = 0;
  *(undefined8 *)&this->PacketSequenceMap = 0;
  *(undefined8 *)&(this->PacketSequenceMap).field_0x8 = 0;
  *(undefined8 *)&(this->PacketSequenceMap).field_0x20 = 0;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x28 = 0;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x34 = 0;
  *(undefined8 *)&(this->PacketSequenceMap).field_0x40 = 0;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x48 = 0;
  this->CurWorldTimeSecond = 0.0;
  this->BeforeWorldTimeSecond = 0.0;
  this->bShowPingPongLog = false;
  return this;
}

// ~UDS_NetworkManager @ 14b530880

void __thiscall UDS_NetworkManager::~UDS_NetworkManager(UDS_NetworkManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_NetworkManager__6B_;
  *(undefined4 *)&(this->PacketSequenceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PacketSequenceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_PacketArrayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_PacketArrayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_PacketArrayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PacketSequenceMap);
  *(undefined4 *)&(this->TwoWayClientMessages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TwoWayClientMessages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TwoWayClientMessages);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CSMessages);
  DestructItems<FDS_ServerMessage,int>
            ((FDS_ServerMessage *)(this->ServerMessages).AllocatorInstance.Data,
             (this->ServerMessages).ArrayNum);
  pFVar2 = (this->ServerMessages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SocketBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InternetAddr).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SendValidCheckDel);
  pvVar1 = *(void **)&(this->SendValidCheckDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SendValidCheckDel);
  pvVar1 = *(void **)&(this->OnConnectResult).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConnectResult);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// FDS_NetworkManager_ConnectResult_DelegateWrapper @ 14b532680

void __cdecl
UDS_NetworkManager::FDS_NetworkManager_ConnectResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetPrivateStaticClass @ 14b532cc0

UClass * __cdecl UDS_NetworkManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NetworkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NetworkManager",
               &Z_Registration_Info_UClass_UDS_NetworkManager.InnerSingleton,
               StaticRegisterNativesUDS_NetworkManager,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NetworkManager>,
               InternalVTableHelperCtorCaller<UDS_NetworkManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NetworkManager.InnerSingleton;
}

// StaticRegisterNativesUDS_NetworkManager @ 14b533160

void __cdecl UDS_NetworkManager::StaticRegisterNativesUDS_NetworkManager(void)

{
  return;
}

// CheckPingPongTimeOut @ 14baf7670

void __thiscall UDS_NetworkManager::CheckPingPongTimeOut(UDS_NetworkManager *this)

{
  double dVar1;
  FDS_ErrorMessageInfo local_res8 [8];
  ServerMessagesTwoway local_38;
  
  if (this->PingSendCount != 0) {
    dVar1 = DS_Util::GetTimeSeconds();
    if (__real_4024000000000000 < dVar1 - this->PingTimeSeconds_NotRealTime) {
      server_msg_twoway::ServerMessagesTwoway::ServerMessagesTwoway(&local_38,(Arena *)0x0);
      local_38._padding_ = (longlong)&___7ServerMessagesTwoway_server_msg_twoway__6B_;
      PongErrorProcess(this,local_res8,(Message *)&local_38);
      server_msg_twoway::ServerMessagesTwoway::~ServerMessagesTwoway(&local_38);
    }
  }
  return;
}

// CheckRequestTimeOut @ 14baf7d30

void __thiscall UDS_NetworkManager::CheckRequestTimeOut(UDS_NetworkManager *this,float param_1)

{
  TMap<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  TMap<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>_>
  *pTVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  ForAnyElementType local_138;
  undefined8 local_130;
  uint local_128 [2];
  TMap<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  int local_ec;
  TMap<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FReadAccessScope local_b8;
  ServerMessagesTwoway local_a0;
  FReadAccessScope local_70 [2];
  
  this_00 = &this->TwoWayClientMessages;
  local_110 = &(this->TwoWayClientMessages).field_0x10;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  iStack_118 = 0;
  iVar12 = *(int *)&(this->TwoWayClientMessages).field_0x28;
  uStack_114 = 1;
  local_100 = 0;
  iStack_104 = iStack_118;
  if (iVar12 != 0) {
    puVar21 = *(uint **)&(this->TwoWayClientMessages).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_110;
    }
    uVar18 = *puVar21;
    local_100 = 0;
    iStack_118 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_14baf7def;
      uVar18 = puVar21[lVar13 + 1];
    }
    uStack_114 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_114 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_f0 = (int)lVar13;
    iStack_104 = local_100 + -1 + local_f0;
    if (iVar12 < iStack_104) {
      iStack_104 = iVar12;
    }
  }
LAB_14baf7def:
  uVar18 = *(uint *)&(this->TwoWayClientMessages).field_0x28;
  puVar1 = &(this->TwoWayClientMessages).field_0x10;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_f8 = *(int *)&(this->TwoWayClientMessages).field_0x8 -
              *(int *)&(this->TwoWayClientMessages).field_0x34;
  uStack_108 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_104;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_114,iStack_118);
  iVar15 = (int)uVar18 >> 5;
  TStack_e0._28_4_ = iStack_104;
  TStack_e0.BaseBitIndex = local_100;
  uStack_c0 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = this_00;
  iStack_fc = iStack_104;
  local_e8 = this_00;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar18 < 0) || (iVar12 < (int)uVar18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar8 = __real_41700000;
  uVar4 = *(uint *)&(this->TwoWayClientMessages).field_0x28;
  if (uVar18 != uVar4) {
    puVar20 = *(undefined1 **)&(this->TwoWayClientMessages).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14baf7f20;
      uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_ec = (int)lVar13;
    uVar18 = local_ec + -1 + uVar17;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_14baf7f20:
  do {
    pTVar9 = local_e8;
    if (*(int *)(&local_e8->field_0x0 + 8) - *(int *)(&local_e8->field_0x0 + 0x34) != (int)uStack_c0
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_e0.CurrentBitIndex == uVar18) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this_00))
    {
      iVar12 = (int)local_130;
      pFVar2 = local_138.Data + (longlong)(int)local_130 * 4;
      FVar16.Data = local_138.Data;
      while( true ) {
        if ((int)local_130 != iVar12) {
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar16.Data == pFVar2) break;
        local_128[0] = *(uint *)FVar16.Data;
        if (*(int *)&(this->TwoWayClientMessages).field_0x8 !=
            *(int *)&(this->TwoWayClientMessages).field_0x34) {
          TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
                      *)this_00,local_128[0],local_128);
        }
        FVar16.Data = FVar16.Data + 4;
      }
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data);
      }
      return;
    }
    lVar13 = *(longlong *)&pTVar9->field_0x0;
    lVar19 = (longlong)TStack_e0.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar19 + 8 + lVar13) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pfVar5 = *(float **)(lVar19 + 8 + lVar13);
    *pfVar5 = param_1 + *pfVar5;
    if ((*(longlong *)(lVar19 + 8 + lVar13) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (fVar8 < **(float **)(lVar19 + 8 + lVar13)) {
      server_msg_twoway::ServerMessagesTwoway::ServerMessagesTwoway(&local_a0,(Arena *)0x0);
      local_a0._padding_ = (longlong)&___7ServerMessagesTwoway_server_msg_twoway__6B_;
      if ((*(longlong *)(lVar19 + 8 + lVar13) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)(lVar19 + 8 + lVar13);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar6 + 0x28),&local_b8)
      ;
      if (((*(int *)(lVar6 + 0x38) == 0) || (*(longlong **)(lVar6 + 0x30) == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x38))(), cVar11 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b8);
LAB_14baf80d9:
        ProcessError(this,TimeOut,*(uint *)(lVar19 + lVar13),'b',(Message *)&local_a0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b8);
        local_res20[0] = 8;
        if ((*(longlong *)(lVar19 + 8 + lVar13) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)(lVar19 + 8 + lVar13);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar6 + 0x28),local_70
                  );
        if (*(int *)(lVar6 + 0x38) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(lVar6 + 0x30);
        }
        cVar11 = (**(code **)(*plVar14 + 0x60))(plVar14,local_res20,&local_a0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_70);
        if (cVar11 == '\0') goto LAB_14baf80d9;
      }
      iVar12 = (int)local_130;
      if ((int)local_130 == local_130._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_138,(int *)((longlong)&local_130 + 4));
      }
      local_130 = CONCAT44(local_130._4_4_,iVar12 + 1);
      *(undefined4 *)(local_138.Data + (longlong)iVar12 * 4) = *(undefined4 *)(lVar19 + lVar13);
      server_msg_twoway::ServerMessagesTwoway::~ServerMessagesTwoway(&local_a0);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// ClearBuffer @ 14baf91e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_NetworkManager::ClearBuffer(UDS_NetworkManager *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->SocketBuffer,0x7fff,Default);
  return;
}

// ClearVariables @ 14bafa050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NetworkManager::ClearVariables(UDS_NetworkManager *this)

{
  int *piVar1;
  int iVar2;
  FDS_ServerMessage *pFVar3;
  FRunnableThread *pFVar4;
  FDS_ReadPacketRunner *pFVar5;
  FTimerManager *pFVar6;
  FTimerData *pFVar7;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->bIsConnected = false;
  piVar1 = &(this->ServerMessages).ArrayMax;
  iVar2 = (this->ServerMessages).ArrayNum;
  pFVar3 = (FDS_ServerMessage *)(this->ServerMessages).AllocatorInstance.Data;
  if ((this->ServerMessages).ArrayMax < 0) {
    DestructItems<FDS_ServerMessage,int>(pFVar3,iVar2);
    (this->ServerMessages).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->ServerMessages).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FDS_ServerMessage,int>(pFVar3,iVar2);
    (this->ServerMessages).ArrayNum = 0;
  }
  if (this->ReadPacketRunner != (FDS_ReadPacketRunner *)0x0) {
    FDS_ReadPacketRunner::ClearSocket(this->ReadPacketRunner);
  }
  if (this->ReadPacketRunnerThread != (FRunnableThread *)0x0) {
    (**(code **)(this->ReadPacketRunnerThread->_padding_ + 0x20))();
    pFVar4 = this->ReadPacketRunnerThread;
    if (pFVar4 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
    }
    this->ReadPacketRunnerThread = (FRunnableThread *)0x0;
  }
  pFVar5 = this->ReadPacketRunner;
  if (pFVar5 != (FDS_ReadPacketRunner *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
    this->ReadPacketRunner = (FDS_ReadPacketRunner *)0x0;
  }
  if (this->Socket != (FSocket *)0x0) {
    (**(code **)(this->Socket->_padding_ + 0x10))();
    this->Socket = (FSocket *)0x0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InternetAddr != (TSharedPtr<FInternetAddr,1> *)&local_18) {
    (this->InternetAddr).Object = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InternetAddr).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->SocketBuffer,0x7fff,Default);
  pFVar6 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar7 = FTimerManager::FindTimer(pFVar6,&this->SendPingRequestTimerHandle);
  if (pFVar7 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (pFVar6,(FTimerHandle)(this->SendPingRequestTimerHandle).Handle);
  }
  (this->SendPingRequestTimerHandle).Handle = 0;
  pFVar6 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar7 = FTimerManager::FindTimer(pFVar6,&this->SendTimeSyncHandle);
  if (pFVar7 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar6,(FTimerHandle)(this->SendTimeSyncHandle).Handle);
  }
  (this->SendTimeSyncHandle).Handle = 0;
  this->PingTimeSeconds = 0.0;
  this->PingTimeSeconds_NotRealTime = 0.0;
  this->PongTimeSeconds = 0.0;
  this->PingPongLatency = 0.0;
  this->ServerTimeSecondsAtPong = 0.0;
  return;
}

// Connect @ 14bafa640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NetworkManager::Connect(UDS_NetworkManager *this,FString *param_1,int param_2)

{
  TSharedPtr<FInternetAddr,1> *this_00;
  code *pcVar1;
  UDS_LogManager *pUVar2;
  FSocket *pFVar3;
  FName *pFVar4;
  ISocketSubsystem *pIVar5;
  undefined8 *puVar6;
  FInternetAddr *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_278 [32];
  char local_238 [8];
  undefined2 local_230;
  FIPv4Address_u_0 local_22c;
  undefined2 uStack_228;
  undefined2 uStack_226;
  FString local_220;
  undefined1 local_210;
  int local_20c;
  undefined1 local_208;
  int local_204;
  int local_200;
  undefined1 local_1fc;
  int local_1f8;
  TSharedPtr<FInternetAddr,1> local_1f0;
  FString local_1e0;
  FString local_1d0;
  FTcpSocketBuilder local_1c0;
  undefined1 local_180 [8];
  TReferenceControllerBase<1> *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (this->Socket != (FSocket *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_168.Ptr,0x11b,L"Socket already exists.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    DisconnectWithPopup(this,Client_NewConnect);
  }
  if ((param_1->Data).ArrayNum < 2) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bafa811;
    pUVar2 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_168.Ptr,0x122,L"InAddr is empty. (%s)");
  }
  else {
    if (param_2 != 0) {
      ::FString::FString(&local_1d0,L"ProjectDS");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_1d0.Data.ArrayNum != 0) {
        FVar8.Data = local_1d0.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_1e0,(wchar_t *)FVar8.Data);
      FVar8.Data = local_1e0.Data.AllocatorInstance.Data;
      local_230._0_1_ = 0;
      local_230._1_1_ = 0;
      local_230 = 0;
      local_22c = FIPv4Address::Any.field0_0x0;
      uStack_228 = 0;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1e0.Data.ArrayNum == 0) {
        local_220.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1e0.Data.ArrayNum,0,(ForAnyElementType *)&local_220,
                   local_1e0.Data.ArrayNum,&local_220.Data.ArrayMax);
        memcpy(local_220.Data.AllocatorInstance.Data,FVar8.Data,
               (longlong)local_1e0.Data.ArrayNum * 2);
      }
      local_1c0.BoundEndpoint.Port = uStack_228;
      local_1c0.BoundEndpoint.Address.field0_0x0 =
           (FIPv4Address_u_0)(FIPv4Address_u_0)local_22c.Value;
      local_1c0.BoundEndpoint._6_2_ = uStack_226;
      local_210 = 0;
      local_20c = 0;
      local_208 = 0;
      local_200 = 0;
      local_1f8 = 0;
      local_1fc = 1;
      local_1c0.Blocking = (bool)(undefined1)local_230;
      local_1c0.Bound = (bool)local_230._1_1_;
      ::FString::FString(&local_1c0.Description,&local_220);
      local_1c0.Linger = (bool)local_210;
      local_1c0.LingerTimeout = local_20c;
      local_1c0.Listen = (bool)local_208;
      local_1c0.ListenBacklog = local_204;
      local_1c0.ReceiveBufferSize = local_200;
      local_1c0.Reusable = (bool)local_1fc;
      local_1c0.SendBufferSize = local_1f8;
      pFVar3 = FTcpSocketBuilder::Build(&local_1c0);
      this->Socket = pFVar3;
      if (local_1c0.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Description.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if ((FName)local_1e0.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      pFVar3 = this->Socket;
      if (pFVar3 == (FSocket *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_168.Ptr,0x135,L"InPort is 0.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        FDS_NetworkManager_ConnectResult_DelegateWrapper
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnConnectResult,
                   false);
        local_238[0] = '\0';
      }
      else {
        (**(code **)(pFVar3->_padding_ + 0xf8))(pFVar3,1,0);
        (**(code **)(this->Socket->_padding_ + 0xa0))(this->Socket,1);
        pFVar4 = ::FName::FName((FName *)&local_1e0,L"WINDOWS");
        pIVar5 = ISocketSubsystem::Get(pFVar4);
        puVar6 = (undefined8 *)(**(code **)(pIVar5->_padding_ + 0x90))(pIVar5,local_180);
        local_1f0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar6[1];
        local_1f0.Object = (FInternetAddr *)*puVar6;
        if (local_1f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        this_00 = &this->InternetAddr;
        if (this_00 != &local_1f0) {
          this_00->Object = local_1f0.Object;
          local_1f0.Object = (FInternetAddr *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->InternetAddr).SharedReferenceCount,&local_1f0.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178);
        pFVar7 = TSharedPtr<FInternetAddr,1>::operator->(this_00);
        if ((param_1->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pFVar7 + 0x10))(pFVar7,pwVar9,local_238);
        pFVar7 = TSharedPtr<FInternetAddr,1>::operator->(this_00);
        (**(code **)((longlong)*pFVar7 + 0x48))(pFVar7,param_2);
        if (local_238[0] == '\0') {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Warning,local_168.Ptr,0x147,L"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Warning,local_168.Ptr,0x148,L" IP address was not valid!!!!");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
            UDS_LogManager::PrintLog
                      (pUVar2,1,Warning,local_168.Ptr,0x149,L"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
        }
        else {
          pFVar3 = this->Socket;
          pcVar1 = *(code **)(pFVar3->_padding_ + 0x28);
          pFVar7 = TSharedPtr<FInternetAddr,1>::operator*<FInternetAddr>(this_00);
          (*pcVar1)(pFVar3,pFVar7);
          (**(code **)(this->Socket->_padding_ + 0xa0))(this->Socket,1);
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 != (UDS_LogManager *)0x0) {
            pUVar2 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
            UDS_LogManager::PrintLog(pUVar2,1,Display,local_168.Ptr,0x150,L"%s:%d");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          local_238[0] = '\x01';
        }
      }
      if (local_1d0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (bool)local_238[0];
      }
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      return (bool)local_238[0];
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bafa811;
    pUVar2 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_NetworkManager::Connect",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_168.Ptr,0x129,L"InPort is 0.");
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
LAB_14bafa811:
  FDS_NetworkManager_ConnectResult_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnConnectResult,false);
  return false;
}

// Created @ 14bb01b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_NetworkManager::Created(UDS_NetworkManager *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_PacketProcessor *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  UDS_NetworkManager *local_108;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  *(undefined1 *)&this->_padding_ = 0;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_PacketProcessor_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = pUVar1;
  pUVar3 = (UDS_PacketProcessor *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_PacketProcessor *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->PacketProcessor).field0_0x0.DebugPtr = pUVar3;
  this->PingSendCount = 0;
  local_e0 = (undefined1  [8])0x0;
  local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_100);
  local_e8 = &local_d8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_d8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NetworkManager____A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_108 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_108);
    puVar4[4] = PongErrorProcess;
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_100);
  local_e8 = &local_c0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NetworkManager____A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_108 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_108);
    puVar4[4] = PongResponseProcess;
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  RegistReceive(kHeartbeatRes,
                (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                 *)local_c8,
                (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                 *)local_e0);
  return;
}

// Destroyed @ 14bb02f20

void __thiscall UDS_NetworkManager::Destroyed(UDS_NetworkManager *this)

{
  undefined1 *puVar1;
  ServerMessageCase local_res8 [2];
  FDestructionSentinel local_28;
  
  ClearVariables(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnConnectResult,
             (FWriteAccessScope *)&local_28);
  puVar1 = &(this->OnConnectResult).field_0x14;
  *(undefined4 *)&(this->OnConnectResult).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->OnConnectResult).field_0x8,0,(int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (this->PacketProcessor).field0_0x0.DebugPtr = (UDS_PacketProcessor *)0x0;
  if ((ReceiveMap !=
       (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
        *)0x0) &&
     (local_res8[0] = kHeartbeatRes,
     *(int *)&ReceiveMap->field_0x8 != *(int *)&ReceiveMap->field_0x34)) {
    TSet<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo>,TDefaultMapHashableKeyFuncs<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_server_msg::ServerMessages::ServerMessageCase>(ReceiveMap,0x1869e,local_res8);
  }
  return;
}

// Disconnect @ 14bb03320

void __thiscall
UDS_NetworkManager::Disconnect(UDS_NetworkManager *this,EDS_DisconnectReason param_1)

{
  bool bVar1;
  ADS_GameMode *this_00;
  FWeakObjectPtr local_res18 [2];
  
  ClearVariables(this);
  switch(param_1) {
  case None:
  case Client_NewConnect:
  case Client_FailedToReceivePacket:
  case Client_FailedToSendPacket:
  case Client_ConnectionError:
  case Client_PingPongTimeout:
  case Network_ReceiveLogoutPacket:
    ADS_GameMode::GetInst();
    bVar1 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      this_00 = (ADS_GameMode *)FWeakObjectPtr::Get(local_res18);
      ADS_GameMode::ChangeGameState(this_00,LoginState);
    }
  }
  return;
}

// DisconnectWithPopup @ 14bb033b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_NetworkManager::DisconnectWithPopup(UDS_NetworkManager *this,EDS_DisconnectReason param_1)

{
  FString *pFVar1;
  undefined1 auStack_138 [32];
  undefined4 local_118 [2];
  FString local_110;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  undefined1 local_e8 [168];
  undefined4 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  ClearVariables(this);
  FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_e8,Popup_LogOut);
  ::FString::FString(&local_110,"EDS_DisconnectReason");
  pFVar1 = DS_Util::GetEnumToString((FString *)local_100,&local_110,(long64)(longlong)(int)param_1);
  FDS_Text::SetTextFromUniqueString((FDS_Text *)local_e8,pFVar1);
  if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100._0_8_);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  local_100._0_8_ = local_118;
  local_100._8_8_ = &local_110;
  local_118[0] = 1;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)(longlong)(int)param_1;
  TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_MessageArgsType_&&,__int64_&&>_>
            (local_e8 + 0x60,(TPairInitializer<EDS_MessageArgsType_&&,__int64_&&> *)local_f0,
             (bool *)local_100);
  UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if ((void *)local_38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  local_40 = 0;
  if ((void *)local_e8._160_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._160_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_e8 + 0x60);
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_e8._64_8_,local_e8._72_4_);
  if ((FDS_TextFormatArg *)local_e8._64_8_ != (FDS_TextFormatArg *)0x0) {
    FMemory::Free((void *)local_e8._64_8_);
  }
  if ((FScriptContainerElement *)local_e8._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._48_8_);
  }
  return;
}

// EndSendPingRequestTimer @ 14bb03650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NetworkManager::EndSendPingRequestTimer(UDS_NetworkManager *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->SendPingRequestTimerHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (this_00,(FTimerHandle)(this->SendPingRequestTimerHandle).Handle);
  }
  (this->SendPingRequestTimerHandle).Handle = 0;
  return;
}

// EndSendTimeSyncRequestTimer @ 14bb036b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NetworkManager::EndSendTimeSyncRequestTimer(UDS_NetworkManager *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->SendTimeSyncHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->SendTimeSyncHandle).Handle);
  }
  (this->SendTimeSyncHandle).Handle = 0;
  return;
}

// ExecuteSendPingRequest @ 14bb08050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NetworkManager::ExecuteSendPingRequest(UDS_NetworkManager *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDateTime this_00;
  uchar uVar3;
  double dVar4;
  undefined1 auStackY_1b8 [32];
  ClientMessages local_178;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  client_msg::ClientMessages::ClientMessages(&local_178,(Arena *)0x0);
  local_178._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_178._impl_._oneof_case_[0] != 0x1869e) {
    client_msg::ClientMessages::clear_ClientMessage(&local_178);
    local_178._impl_._oneof_case_[0] = 0x1869e;
    if (((byte)local_178._padding_ & 1) == 0) {
      local_178._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::HeartbeatRequest>
                     ((Arena *)(CONCAT71(local_178._padding_._1_7_,(byte)local_178._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_178._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::HeartbeatRequest>
                     (*(Arena **)
                       (CONCAT71(local_178._padding_._1_7_,(byte)local_178._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if ((local_178._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) &&
     (this->PingSendCount < 3)) {
    uVar3 = '\f';
    if (local_178._impl_._oneof_case_[0] == 0x1869e) {
      uVar3 = 'd';
    }
    bVar1 = SendPacketInternal(this,(Message *)&local_178,uVar3);
    if (bVar1) {
      dVar4 = DS_Util::GetRealTimeSeconds();
      this->PingSendCount = this->PingSendCount + 1;
      this->PingTimeSeconds = dVar4;
      dVar4 = DS_Util::GetTimeSeconds();
      this->PingTimeSeconds_NotRealTime = dVar4;
      if ((this->bShowPingPongLog != false) &&
         (pUVar2 = UDS_LogManager::GetInst(), pUVar2 != (UDS_LogManager *)0x0)) {
        pUVar2 = UDS_LogManager::GetInst();
        this_00 = FDateTime::Now();
        FDateTime::ToString((FDateTime *)this_00.Ticks,&local_150);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NetworkManager::ExecuteSendPingRequest",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,4,Display,local_138.Ptr,0x3f0,L"[PingPong] Request Ping, ---- Time : %s");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_178);
  return;
}

// ExecuteSendTimeSyncRequest @ 14bb08250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NetworkManager::ExecuteSendTimeSyncRequest(UDS_NetworkManager *this)

{
  UDS_SendPacketManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_SendPacketManager::GetInst();
  if (this_00 == (UDS_SendPacketManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NetworkManager::ExecuteSendTimeSyncRequest",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x41c,L"sendMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    UDS_SendPacketManager::SendTimeSyncRequest(this_00);
  }
  return;
}

// FailedToReceivePacket @ 14bb08350

void __thiscall UDS_NetworkManager::FailedToReceivePacket(UDS_NetworkManager *this)

{
  DisconnectWithPopup(this,Client_FailedToReceivePacket);
  return;
}

// FailedToSendPacket @ 14bb08360

void __thiscall UDS_NetworkManager::FailedToSendPacket(UDS_NetworkManager *this)

{
  DisconnectWithPopup(this,Client_FailedToSendPacket);
  return;
}

// GetInst @ 14bb0bcc0

UDS_NetworkManager * __cdecl UDS_NetworkManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_NetworkManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_NetworkManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_NetworkManager_NoRegister();
  pUVar3 = (UDS_NetworkManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_NetworkManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_NetworkManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_NetworkManager *)0x0;
}

// GetIsConnected @ 14bb0c070

bool __thiscall UDS_NetworkManager::GetIsConnected(UDS_NetworkManager *this)

{
  return this->bIsConnected;
}

// GetServerTimeSeconds @ 14bb10680

double __thiscall UDS_NetworkManager::GetServerTimeSeconds(UDS_NetworkManager *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (this->ServerTimeSecondsAtPong != 0.0) {
    dVar2 = this->PongTimeSeconds;
    dVar1 = DS_Util::GetRealTimeSeconds();
    dVar2 = (dVar1 - dVar2) + this->ServerTimeSecondsAtPong;
  }
  return dVar2;
}

// Init @ 14bb138a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NetworkManager::Init(UDS_NetworkManager *this)

{
  int *piVar1;
  int iVar2;
  FDS_ServerMessage *pFVar3;
  FRunnableThread *pFVar4;
  FDS_ReadPacketRunner *pFVar5;
  FTimerManager *pFVar6;
  FTimerData *pFVar7;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  this->bIsConnected = false;
  piVar1 = &(this->ServerMessages).ArrayMax;
  iVar2 = (this->ServerMessages).ArrayNum;
  pFVar3 = (FDS_ServerMessage *)(this->ServerMessages).AllocatorInstance.Data;
  if ((this->ServerMessages).ArrayMax < 0) {
    DestructItems<FDS_ServerMessage,int>(pFVar3,iVar2);
    (this->ServerMessages).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->ServerMessages).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FDS_ServerMessage,int>(pFVar3,iVar2);
    (this->ServerMessages).ArrayNum = 0;
  }
  if (this->ReadPacketRunner != (FDS_ReadPacketRunner *)0x0) {
    FDS_ReadPacketRunner::ClearSocket(this->ReadPacketRunner);
  }
  if (this->ReadPacketRunnerThread != (FRunnableThread *)0x0) {
    (**(code **)(this->ReadPacketRunnerThread->_padding_ + 0x20))();
    pFVar4 = this->ReadPacketRunnerThread;
    if (pFVar4 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
    }
    this->ReadPacketRunnerThread = (FRunnableThread *)0x0;
  }
  pFVar5 = this->ReadPacketRunner;
  if (pFVar5 != (FDS_ReadPacketRunner *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
    this->ReadPacketRunner = (FDS_ReadPacketRunner *)0x0;
  }
  if (this->Socket != (FSocket *)0x0) {
    (**(code **)(this->Socket->_padding_ + 0x10))();
    this->Socket = (FSocket *)0x0;
  }
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->InternetAddr != (TSharedPtr<FInternetAddr,1> *)&uStack_18) {
    (this->InternetAddr).Object = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InternetAddr).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->SocketBuffer,0x7fff,Default);
  pFVar6 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar7 = FTimerManager::FindTimer(pFVar6,&this->SendPingRequestTimerHandle);
  if (pFVar7 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (pFVar6,(FTimerHandle)(this->SendPingRequestTimerHandle).Handle);
  }
  (this->SendPingRequestTimerHandle).Handle = 0;
  pFVar6 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar7 = FTimerManager::FindTimer(pFVar6,&this->SendTimeSyncHandle);
  if (pFVar7 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar6,(FTimerHandle)(this->SendTimeSyncHandle).Handle);
  }
  (this->SendTimeSyncHandle).Handle = 0;
  this->PingTimeSeconds = 0.0;
  this->PingTimeSeconds_NotRealTime = 0.0;
  this->PongTimeSeconds = 0.0;
  this->PingPongLatency = 0.0;
  this->ServerTimeSecondsAtPong = 0.0;
  return;
}

// InitStatic @ 14bb14a20

void __cdecl UDS_NetworkManager::InitStatic(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  unique_ptr<google::protobuf::util::TypeResolver,std::default_delete<google::protobuf::util::TypeResolver>_>
  uVar3;
  bool bVar4;
  DescriptorPool *pDVar5;
  unique_ptr<google::protobuf::util::TypeResolver,std::default_delete<google::protobuf::util::TypeResolver>_>
  uVar6;
  TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
  *pTVar7;
  TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
  *pTVar8;
  undefined1 local_res8 [32];
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar6._Mypair._Myval2 = sProtoMessageTypeResolver._Mypair._Myval2;
  if (sProtoMessageTypeResolver._Mypair._Myval2 == (TypeResolver *)0x0) {
    pDVar5 = google::protobuf::DescriptorPool::generated_pool();
    local_18._Mysize = 0x13;
    local_18._Mydata = "type.googleapis.com";
    uVar6._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<google::protobuf::util::TypeResolver>,google::protobuf::util::TypeResolver_*,1>
          )google::protobuf::util::NewTypeResolverForDescriptorPool(&local_18,pDVar5);
    uVar3 = sProtoMessageTypeResolver;
    if (sProtoMessageTypeResolver._Mypair._Myval2 != (TypeResolver *)0x0) {
      puVar1 = *(undefined8 **)sProtoMessageTypeResolver._Mypair._Myval2;
      sProtoMessageTypeResolver._Mypair._Myval2 = uVar6._Mypair._Myval2;
      (*(code *)*puVar1)(uVar3._Mypair._Myval2,1);
      uVar6._Mypair._Myval2 = sProtoMessageTypeResolver._Mypair._Myval2;
    }
  }
  sProtoMessageTypeResolver._Mypair._Myval2 = uVar6._Mypair._Myval2;
  bVar4 = false;
  pTVar8 = (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
            *)0x0;
  if (ReceiveMap ==
      (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
       *)0x0) {
    pTVar7 = ::operator_new(0x50);
    ReceiveMap = pTVar8;
    if (pTVar7 != (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
                   *)0x0) {
      *(undefined8 *)pTVar7 = 0;
      *(undefined8 *)&pTVar7->field_0x8 = 0;
      *(undefined8 *)&pTVar7->field_0x20 = 0;
      *(undefined4 *)&pTVar7->field_0x28 = 0;
      *(undefined4 *)&pTVar7->field_0x2c = 0x80;
      *(undefined4 *)&pTVar7->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar7->field_0x34 = 0;
      *(undefined8 *)&pTVar7->field_0x40 = 0;
      *(undefined4 *)&pTVar7->field_0x48 = 0;
      ReceiveMap = pTVar7;
    }
    bVar4 = true;
  }
  if (CondReceiveMap ==
      (TMap<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    pTVar7 = ::operator_new(0x50);
    if (pTVar7 != (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
                   *)0x0) {
      *(undefined8 *)pTVar7 = 0;
      *(undefined8 *)&pTVar7->field_0x8 = 0;
      *(undefined8 *)&pTVar7->field_0x20 = 0;
      *(undefined4 *)&pTVar7->field_0x28 = 0;
      *(undefined4 *)&pTVar7->field_0x2c = 0x80;
      *(undefined4 *)&pTVar7->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar7->field_0x34 = 0;
      *(undefined8 *)&pTVar7->field_0x40 = 0;
      *(undefined4 *)&pTVar7->field_0x48 = 0;
      pTVar8 = pTVar7;
    }
    bVar4 = true;
    CondReceiveMap =
         (TMap<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
          *)pTVar8;
  }
  if (DefaultResponseMap ==
      (TMap<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>_>
       *)0x0) {
    DefaultResponseMap = ::operator_new(0x50);
    if (DefaultResponseMap ==
        (TMap<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>_>
         *)0x0) {
      DefaultResponseMap =
           (TMap<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>_>
            *)0x0;
    }
    else {
      *(undefined8 *)DefaultResponseMap = 0;
      *(undefined8 *)&DefaultResponseMap->field_0x8 = 0;
      *(undefined8 *)&DefaultResponseMap->field_0x20 = 0;
      *(undefined4 *)&DefaultResponseMap->field_0x28 = 0;
      *(undefined4 *)&DefaultResponseMap->field_0x2c = 0x80;
      *(undefined4 *)&DefaultResponseMap->field_0x30 = 0xffffffff;
      *(undefined4 *)&DefaultResponseMap->field_0x34 = 0;
      *(undefined8 *)&DefaultResponseMap->field_0x40 = 0;
      *(undefined4 *)&DefaultResponseMap->field_0x48 = 0;
    }
  }
  else {
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3437720926416797589>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NetworkManager.cpp"
                         ,0x6b,"false");
      if (!bVar4) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (!bVar4) {
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnExit,(_func___cdecl_void *)local_res8);
  return;
}

// OnEngineShutDown @ 14bb1dfb0

void __cdecl UDS_NetworkManager::OnEngineShutDown(void)

{
  TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
  *this;
  TMap<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TMap<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>_>
  *this_01;
  
  this = ReceiveMap;
  if (ReceiveMap !=
      (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
       *)0x0) {
    *(undefined4 *)&ReceiveMap->field_0x48 = 0;
    if (*(void **)&this->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this);
    ::operator_delete(this,0x50);
  }
  this_00 = CondReceiveMap;
  if (CondReceiveMap !=
      (TMap<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    *(undefined4 *)&CondReceiveMap->field_0x48 = 0;
    if (*(void **)&this_00->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  this_01 = DefaultResponseMap;
  if (DefaultResponseMap !=
      (TMap<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>_>
       *)0x0) {
    *(undefined4 *)&DefaultResponseMap->field_0x48 = 0;
    if (*(void **)&this_01->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this_01->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_01);
    ::operator_delete(this_01,0x50);
    return;
  }
  return;
}

// PongErrorProcess @ 14bb27310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NetworkManager::PongErrorProcess
          (UDS_NetworkManager *this,FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  UEnum *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_268 [32];
  undefined4 local_238;
  undefined1 local_234 [20];
  undefined4 *local_220;
  undefined1 *local_218;
  undefined1 local_210 [168];
  undefined4 local_168;
  undefined1 local_160 [40];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this->PingSendCount = 0;
  FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_210,Popup_Close);
  pUVar1 = StaticEnum<enum_EDS_DisconnectReason>();
  DS_Util::GetStringEnumTableKey((UEnum *)local_234,(int)pUVar1);
  FDS_Text::SetTextFromStringEnumTable((FDS_Text *)local_210,(FName *)local_234);
  local_220 = &local_238;
  local_234._12_8_ = 5;
  local_218 = local_234 + 0xc;
  local_238 = 1;
  TSet<TTuple<enum_EDS_MessageArgsType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_MessageArgsType_&&,__int64_&&>_>
            (local_210 + 0x60,(TPairInitializer<EDS_MessageArgsType_&&,__int64_&&> *)local_234,
             (bool *)(local_234 + 0x14));
  UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_210);
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NetworkManager::PongErrorProcess",0x24,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Error,local_138.Ptr,0x412,L"[PingPong] PingPong Error - TimeOut");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
  if ((void *)local_160._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_160._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_160);
  local_168 = 0;
  if ((void *)local_210._160_8_ != (void *)0x0) {
    FMemory::Free((void *)local_210._160_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_210 + 0x60);
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_210._64_8_,local_210._72_4_);
  if ((FDS_TextFormatArg *)local_210._64_8_ != (FDS_TextFormatArg *)0x0) {
    FMemory::Free((void *)local_210._64_8_);
  }
  if ((FScriptContainerElement *)local_210._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._48_8_);
  }
  return true;
}

// PongResponseProcess @ 14bb274d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NetworkManager::PongResponseProcess(UDS_NetworkManager *this,ServerMessages *param_1)

{
  UDS_LogManager *pUVar1;
  FDateTime this_00;
  HeartbeatResponseDefaultTypeInternal *pHVar2;
  double dVar3;
  undefined1 auStackY_198 [32];
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x1869e) {
    pHVar2 = *(HeartbeatResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pHVar2 = &server_msg::_HeartbeatResponse_default_instance_;
  }
  dVar3 = DS_Util::GetRealTimeSeconds();
  this->PongTimeSeconds = dVar3;
  dVar3 = dVar3 - this->PingTimeSeconds;
  this->PingSendCount = 0;
  this->PingPongLatency = dVar3;
  this->ServerTimeSecondsAtPong =
       dVar3 * __real_3fe0000000000000 +
       *(double *)&((Message *)((longlong)pHVar2 + 0x10))->field_0x8;
  if ((this->bShowPingPongLog != false) &&
     (pUVar1 = UDS_LogManager::GetInst(), pUVar1 != (UDS_LogManager *)0x0)) {
    pUVar1 = UDS_LogManager::GetInst();
    this_00 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_00.Ticks,&local_150);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NetworkManager::PongResponseProcess",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,4,Display,local_138.Ptr,0x402,L"[PingPong] Response Pong, ---- Time : %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ProcessCondReceive @ 14bb284c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NetworkManager::ProcessCondReceive(UDS_NetworkManager *this,FDS_ServerMessage *param_1)

{
  TSharedPtr<google::protobuf::Message,1> *pTVar1;
  TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy> *pTVar2;
  uint uVar3;
  code *pcVar4;
  EDS_ErrorCode EVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  UDS_LogManager *pUVar12;
  Message *pMVar13;
  uint *puVar14;
  undefined1 *puVar15;
  TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy> *this_00;
  FDS_ServerMessage *pFVar16;
  uint *puVar17;
  uint *puVar18;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [4];
  EDS_ErrorCode local_244;
  EDS_ErrorCode local_240 [2];
  Message *local_238;
  undefined1 local_230 [8];
  void *local_228;
  undefined4 local_220;
  undefined1 local_218 [8];
  longlong *plStack_210;
  int local_208;
  undefined1 local_200 [8];
  uint *puStack_1f8;
  int local_1f0;
  FDS_ServerMessage *local_1e8;
  UDS_NetworkManager *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  FReadAccessScope local_1d0;
  FReadAccessScope local_1b8;
  FReadAccessScope local_1a0;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1d8 = (param_1->Msg).SharedReferenceCount.ReferenceController;
  pTVar1 = &param_1->Msg;
  pMVar13 = pTVar1->Object;
  if (local_1d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1d8->SharedReferenceCount = (atomic<int>)((int)local_1d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_238 = pMVar13;
  local_1e8 = param_1;
  local_1e0 = this;
  if ((pMVar13 == (Message *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar3 = *(uint *)&pMVar13[1].field_0xc;
  puVar18 = (uint *)0x0;
  if ((uVar3 == 0x46) && (pUVar12 = UDS_LogManager::GetInst(), pUVar12 != (UDS_LogManager *)0x0)) {
    pUVar12 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NetworkManager::ProcessCondReceive",0x26,Yes);
    UDS_LogManager::PrintLog
              (pUVar12,1,Display,local_158.Ptr,0x359,L"SERIN kTransportWarpMapLoadingNoti 2222");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if ((pTVar1->Object == (Message *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_244 = IGameParser::GetErrorCode(pTVar1->Object);
  if ((CondReceiveMap !=
       (TMap<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
        *)0x0) && (*(int *)&CondReceiveMap->field_0x8 != *(int *)&CondReceiveMap->field_0x34)) {
    puVar15 = *(undefined1 **)&CondReceiveMap->field_0x40;
    if (*(undefined1 **)&CondReceiveMap->field_0x40 == (undefined1 *)0x0) {
      puVar15 = &CondReceiveMap->field_0x38;
    }
    iVar10 = *(int *)(puVar15 + (ulonglong)(*(int *)&CondReceiveMap->field_0x48 - 1U & uVar3) * 4);
    if (iVar10 != -1) {
      do {
        if (*(uint *)((longlong)iVar10 * 0x20 + *(longlong *)CondReceiveMap) == uVar3) {
          local_218 = (undefined1  [8])0x0;
          plStack_210 = (longlong *)0x0;
          local_230 = (undefined1  [8])0x0;
          cVar9 = '\0';
          local_228 = (void *)0x0;
          local_200 = (undefined1  [8])0x0;
          puStack_1f8 = (uint *)0x0;
          local_220 = 0;
          local_208 = 0;
          local_1f0 = 0;
          puVar17 = puVar18;
          if (*(int *)&CondReceiveMap->field_0x8 == *(int *)&CondReceiveMap->field_0x34)
          goto LAB_14bb286fe;
          puVar15 = *(undefined1 **)&CondReceiveMap->field_0x40;
          if (*(undefined1 **)&CondReceiveMap->field_0x40 == (undefined1 *)0x0) {
            puVar15 = &CondReceiveMap->field_0x38;
          }
          uVar11 = *(uint *)(puVar15 +
                            (ulonglong)(*(int *)&CondReceiveMap->field_0x48 - 1U & uVar3) * 4);
          if (uVar11 == 0xffffffff) goto LAB_14bb286fe;
          goto LAB_14bb286e0;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)CondReceiveMap);
      } while (iVar10 != -1);
    }
  }
  bVar6 = false;
  goto LAB_14bb28647;
  while (uVar11 = puVar17[6], puVar17 = puVar18, uVar11 != 0xffffffff) {
LAB_14bb286e0:
    puVar17 = (uint *)((longlong)(int)uVar11 * 0x20 + *(longlong *)CondReceiveMap);
    if (*puVar17 == uVar3) {
      if (puVar17 != (uint *)0x0) goto LAB_14bb28724;
      break;
    }
  }
LAB_14bb286fe:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
LAB_14bb28724:
  uVar11 = puVar17[4];
  this_00 = *(TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              **)(puVar17 + 2);
  pTVar2 = this_00 + (longlong)(int)uVar11 * 3;
  do {
    if (puVar17[4] != uVar11) {
      `TCheckedPointerIterator<FDS_RecieveInfoCond,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_248);
    }
    if (this_00 == pTVar2) {
      if (cVar9 != '\0') goto LAB_14bb287f6;
      bVar6 = false;
      goto LAB_14bb2890c;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1d0);
    if (((*(int *)&this_00->field_0x10 == 0) ||
        (*(longlong **)&this_00->field_0x8 == (longlong *)0x0)) ||
       (cVar8 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))(), cVar8 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1d0);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1a0);
      puVar14 = puVar18;
      if (*(int *)&this_00->field_0x10 != 0) {
        puVar14 = *(uint **)&this_00->field_0x8;
      }
      cVar9 = (**(code **)(*(longlong *)puVar14 + 0x60))(puVar14,local_238);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1a0);
      if (cVar9 == '\x01') break;
    }
    this_00 = this_00 + 3;
  } while( true );
  TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_230,this_00);
  TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_218,
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)(this_00 + 1));
  TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_200,
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)(this_00 + 2));
LAB_14bb287f6:
  EVar5 = local_244;
  if (local_244 == Success) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,&local_170);
    if ((local_208 != 0) && (plStack_210 != (longlong *)0x0)) {
      (**(code **)(*plStack_210 + 0x68))(plStack_210,local_238);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_200,&local_1b8);
    if (((local_1f0 == 0) || (puStack_1f8 == (uint *)0x0)) ||
       (cVar9 = (**(code **)(*(longlong *)puStack_1f8 + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1b8);
      pFVar16 = local_1e8;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1b8);
      pFVar16 = local_1e8;
      local_240[0] = EVar5;
      pMVar13 = TSharedPtr<google::protobuf::Message,1>::operator*<google::protobuf::Message>
                          (&local_1e8->Msg);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_200,&local_188);
      if (local_1f0 != 0) {
        puVar18 = puStack_1f8;
      }
      cVar9 = (**(code **)(*(longlong *)puVar18 + 0x60))(puVar18,local_240,pMVar13);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_188);
      if (cVar9 != '\0') goto LAB_14bb2890a;
    }
    ProcessError(local_1e0,EVar5,uVar3,pFVar16->ProtoType,local_238);
  }
LAB_14bb2890a:
  bVar6 = true;
LAB_14bb2890c:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_200);
  if (puStack_1f8 != (uint *)0x0) {
    FMemory::Free(puStack_1f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_200);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
  if (plStack_210 != (longlong *)0x0) {
    FMemory::Free(plStack_210);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_218);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
  if (local_228 != (void *)0x0) {
    FMemory::Free(local_228);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_230);
LAB_14bb28647:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d8);
  return bVar6;
}

// ProcessDefaultResponse @ 14bb289a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NetworkManager::ProcessDefaultResponse
          (UDS_NetworkManager *this,TSharedPtr<server_msg_twoway::ServerMessagesTwoway,1> *param_1)

{
  uint uVar1;
  EDS_ErrorCode EVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UDS_LogManager *pUVar8;
  ServerMessagesTwoway *pSVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStackY_1b8 [32];
  EDS_ErrorCode local_178 [2];
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((param_1->Object == (ServerMessagesTwoway *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = (param_1->Object->_impl_)._oneof_case_[0];
  if ((DefaultResponseMap !=
       (TMap<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>_>
        *)0x0) &&
     (*(int *)&DefaultResponseMap->field_0x8 != *(int *)&DefaultResponseMap->field_0x34)) {
    puVar10 = *(undefined1 **)&DefaultResponseMap->field_0x40;
    if (*(undefined1 **)&DefaultResponseMap->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &DefaultResponseMap->field_0x38;
    }
    uVar13 = *(uint *)(puVar10 +
                      (ulonglong)(*(int *)&DefaultResponseMap->field_0x48 - 1U & uVar1) * 4);
    if (uVar13 != 0xffffffff) {
      lVar3 = *(longlong *)DefaultResponseMap;
      uVar7 = uVar13;
      do {
        if (*(uint *)((longlong)(int)uVar7 * 0x40 + lVar3) == uVar1) goto LAB_14bb28b00;
        uVar7 = *(uint *)((longlong)(int)uVar7 * 0x40 + 0x38 + lVar3);
      } while (uVar7 != 0xffffffff);
    }
  }
  pUVar8 = UDS_LogManager::GetInst();
  if (pUVar8 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar8 = UDS_LogManager::GetInst();
  local_158._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_158,"UDS_NetworkManager::ProcessDefaultResponse",0x2a,Yes);
  UDS_LogManager::PrintLog(pUVar8,1,Error,local_158.Ptr,0x331,L"Not Registed Packet Response , %d");
  if ((void *)local_158._padding_ == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)local_158._padding_);
  return;
  while (uVar13 = puVar11[0xe], puVar11 = puVar12, uVar13 != 0xffffffff) {
LAB_14bb28b00:
    puVar12 = (uint *)0x0;
    puVar11 = (uint *)((longlong)(int)uVar13 * 0x40 + lVar3);
    if (*puVar11 == uVar1) {
      if (puVar11 != (uint *)0x0) goto LAB_14bb28b49;
      break;
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bb28b49:
  if ((param_1->Object == (ServerMessagesTwoway *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar2 = (param_1->Object->_impl_).error_code_;
  if (EVar2 == Success) {
    pSVar9 = TSharedPtr<server_msg_twoway::ServerMessagesTwoway,1>::
             operator*<server_msg_twoway::ServerMessagesTwoway>(param_1);
    TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                      *)(puVar11 + 2),pSVar9);
  }
  else {
    bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar11 + 8));
    if (bVar5) {
      local_178[0] = EVar2;
      pSVar9 = TSharedPtr<server_msg_twoway::ServerMessagesTwoway,1>::
               operator*<server_msg_twoway::ServerMessagesTwoway>(param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar11 + 8),&local_170)
      ;
      if (puVar11[0xc] != 0) {
        puVar12 = *(uint **)(puVar11 + 10);
      }
      cVar6 = (**(code **)(*(longlong *)puVar12 + 0x60))(puVar12,local_178,pSVar9);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_170);
      if (cVar6 != '\0') {
        return;
      }
    }
    pSVar9 = TSharedPtr<server_msg_twoway::ServerMessagesTwoway,1>::
             operator*<server_msg_twoway::ServerMessagesTwoway>(param_1);
    ProcessError(this,EVar2,uVar1,'b',(Message *)pSVar9);
  }
  return;
}

// ProcessError @ 14bb28c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NetworkManager::ProcessError
          (UDS_NetworkManager *this,EDS_ErrorCode param_1,uint param_2,schar param_3,
          Message *param_4)

{
  void *_Src;
  ulonglong uVar1;
  bool bVar2;
  FString *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_StringErrorTableRow *this_00;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStackY_388 [32];
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  undefined1 local_308 [168];
  undefined4 local_260;
  undefined1 local_258 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_238;
  FDS_UIMessageInfo local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  uVar1 = (ulonglong)param_2;
  if (param_1 == TimeOut) {
    FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_308,Popup_Close);
    ::FString::FString(&local_348,"Packet TimeOut - packetID : ");
    ::FString::FString(&local_338,"EDS_ServerMsgTwoway");
    pFVar3 = DS_Util::GetEnumToString(&local_328,&local_338,uVar1);
    iVar9 = (pFVar3->Data).ArrayNum;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_348,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar8);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    FDS_Text::SetTextFromUniqueString((FDS_Text *)local_308,&local_348);
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_238._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_238,"UDS_NetworkManager::ProcessError",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Error,local_238.Ptr,0x444,L"%s");
      if ((void *)local_238._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_238._padding_);
      }
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    if ((void *)local_258._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_258._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
    local_260 = 0;
    if ((void *)local_308._160_8_ != (void *)0x0) {
      FMemory::Free((void *)local_308._160_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_308 + 0x60);
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_308._64_8_,local_308._72_4_);
    if ((FDS_TextFormatArg *)local_308._64_8_ != (FDS_TextFormatArg *)0x0) {
      FMemory::Free((void *)local_308._64_8_);
    }
    if ((FScriptContainerElement *)local_308._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_308._48_8_);
    }
  }
  else {
    lVar10 = (longlong)(int)param_1;
    this_00 = FDS_StringErrorTableRow::GetRef(lVar10,true);
    bVar2 = FDS_StringErrorTableRow::IsValid(this_00);
    if (bVar2) {
      puVar5 = (undefined8 *)
               (**(code **)((this_00->ID_StringUi)._padding_ + 8))(&this_00->ID_StringUi);
      local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.Data.ArrayNum = *(int *)(puVar5 + 1);
      lVar6 = (longlong)local_348.Data.ArrayNum;
      _Src = (void *)*puVar5;
      if (local_348.Data.ArrayNum == 0) {
        local_348.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_348.Data.ArrayNum,0,(ForAnyElementType *)&local_348,
                   local_348.Data.ArrayNum,&local_348.Data.ArrayMax);
        memcpy(local_348.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
      }
      ::FString::AppendChars(&local_348," (",2);
      if (param_3 == 'b') {
        ::FString::FString(&local_338,"EDS_ServerMsgTwoway");
        pFVar3 = DS_Util::GetEnumToString(&local_328,&local_338,uVar1);
        iVar9 = (pFVar3->Data).ArrayNum;
        iVar8 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_348,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar8);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        pcVar7 = ", twoway)";
      }
      else {
        ::FString::FString(&local_338,"EDS_ServerMsg");
        pFVar3 = DS_Util::GetEnumToString(&local_328,&local_338,uVar1);
        iVar9 = (pFVar3->Data).ArrayNum;
        iVar8 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_348,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar8);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        pcVar7 = ", oneway)";
      }
      ::FString::AppendChars(&local_348," - ",3);
      ::FString::AppendInt(&local_348,param_2);
      ::FString::AppendChars(&local_348,pcVar7,9);
      ::FString::AppendChars(&local_348,"\nErrorCode : ",0xd);
      ::FString::FString(&local_338,"EDS_ErrorCode");
      pFVar3 = DS_Util::GetEnumToString(&local_328,&local_338,lVar10);
      iVar9 = (pFVar3->Data).ArrayNum;
      iVar8 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_348,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar8);
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      UDS_UIMessageManager::OpenMsgByString(this_00->MessageDefine,&local_348);
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_238._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_238,"UDS_NetworkManager::ProcessError",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Display,local_238.Ptr,0x461,L"%s");
        if ((void *)local_238._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_238._padding_);
        }
      }
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo(&local_118,Popup_Close);
      ::FString::FString(&local_318,"Error ID : ");
      if (param_3 == 'b') {
        ::FString::FString(&local_338,"EDS_ServerMsgTwoway");
        pFVar3 = DS_Util::GetEnumToString(&local_328,&local_338,uVar1);
        iVar8 = (pFVar3->Data).ArrayNum;
        iVar9 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar9 = 0;
        }
        ::FString::AppendChars(&local_318,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar9);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        pcVar7 = ", twoway)";
      }
      else {
        ::FString::FString(&local_338,"EDS_ServerMsg");
        pFVar3 = DS_Util::GetEnumToString(&local_328,&local_338,uVar1);
        iVar8 = (pFVar3->Data).ArrayNum;
        iVar9 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar9 = 0;
        }
        ::FString::AppendChars(&local_318,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar9);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        pcVar7 = ", oneway)";
      }
      ::FString::AppendChars(&local_318,"(",1);
      ::FString::AppendInt(&local_318,param_2);
      ::FString::AppendChars(&local_318,pcVar7,9);
      ::FString::AppendChars(&local_318,"\nErrorCode : ",0xd);
      ::FString::FString(&local_338,"EDS_ErrorCode");
      pFVar3 = DS_Util::GetEnumToString(&local_328,&local_338,lVar10);
      iVar8 = (pFVar3->Data).ArrayNum;
      iVar9 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_318,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar9);
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      FDS_Text::SetTextFromUniqueString(&local_118.MsgText,&local_318);
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_238._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_238,"UDS_NetworkManager::ProcessError",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Error,local_238.Ptr,0x47f,L"%s");
        if ((void *)local_238._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_238._padding_);
        }
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      FDS_UIMessageInfo::~FDS_UIMessageInfo(&local_118);
    }
  }
  return;
}

// ProcessReceive @ 14bb29390

void __thiscall
UDS_NetworkManager::ProcessReceive(UDS_NetworkManager *this,FDS_ServerMessage *param_1)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  ServerMessages *pSVar3;
  longlong lVar4;
  UDS_PacketProcessor *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  EDS_ErrorCode EVar9;
  uint uVar10;
  Message *pMVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  EDS_ErrorCode local_res18 [2];
  FReadAccessScope local_58;
  
  pTVar2 = (param_1->Msg).SharedReferenceCount.ReferenceController;
  pSVar3 = (ServerMessages *)(param_1->Msg).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (ServerMessages *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar1 = (pSVar3->_impl_)._oneof_case_[0];
  if (((param_1->Msg).Object == (Message *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar9 = IGameParser::GetErrorCode((param_1->Msg).Object);
  if ((ReceiveMap !=
       (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
        *)0x0) && (*(int *)&ReceiveMap->field_0x8 != *(int *)&ReceiveMap->field_0x34)) {
    puVar12 = *(undefined1 **)&ReceiveMap->field_0x40;
    if (*(undefined1 **)&ReceiveMap->field_0x40 == (undefined1 *)0x0) {
      puVar12 = &ReceiveMap->field_0x38;
    }
    uVar15 = *(uint *)(puVar12 + (ulonglong)(*(int *)&ReceiveMap->field_0x48 - 1U & uVar1) * 4);
    if (uVar15 != 0xffffffff) {
      lVar4 = *(longlong *)ReceiveMap;
      uVar10 = uVar15;
      do {
        if (*(uint *)((longlong)(int)uVar10 * 0x40 + lVar4) == uVar1) goto LAB_14bb294f0;
        uVar10 = *(uint *)((longlong)(int)uVar10 * 0x40 + 0x38 + lVar4);
      } while (uVar10 != 0xffffffff);
    }
  }
  pUVar5 = (this->PacketProcessor).field0_0x0.DebugPtr;
  pcVar6 = *(code **)(*(longlong *)&pUVar5->field_0x28 + 8);
  if (((param_1->Msg).Object == (Message *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (*pcVar6)(&pUVar5->field_0x28,(param_1->Msg).Object);
  goto LAB_14bb294ca;
  while (uVar15 = puVar13[0xe], puVar13 = puVar14, uVar15 != 0xffffffff) {
LAB_14bb294f0:
    puVar14 = (uint *)0x0;
    puVar13 = (uint *)((longlong)(int)uVar15 * 0x40 + lVar4);
    if (*puVar13 == uVar1) {
      if (puVar13 != (uint *)0x0) goto LAB_14bb29539;
      break;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14bb29539:
  if (EVar9 == Success) {
    TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
    ExecuteIfBound((TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                    *)(puVar13 + 2),pSVar3);
  }
  else {
    bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar13 + 8));
    if (bVar7) {
      local_res18[0] = EVar9;
      pMVar11 = TSharedPtr<google::protobuf::Message,1>::operator*<google::protobuf::Message>
                          (&param_1->Msg);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar13 + 8),&local_58);
      if (puVar13[0xc] != 0) {
        puVar14 = *(uint **)(puVar13 + 10);
      }
      cVar8 = (**(code **)(*(longlong *)puVar14 + 0x60))(puVar14,local_res18,pMVar11);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if (cVar8 != '\0') goto LAB_14bb294ca;
    }
    ProcessError(this,EVar9,uVar1,param_1->ProtoType,(Message *)pSVar3);
  }
LAB_14bb294ca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// ReceivePacketProcess @ 14bb2a840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UDS_NetworkManager::ReceivePacketProcess(UDS_NetworkManager *this)

{
  int *piVar1;
  TArray<FDS_ServerMessage,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>_>
  *this_00;
  EDS_ErrorCode EVar3;
  ServerMessagesTwoway *pSVar4;
  undefined1 *puVar5;
  code *pcVar6;
  TArray<FDS_ServerMessage,TSizedDefaultAllocator<32>_> TVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  BOOL BVar11;
  uint *puVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  ForAnyElementType FVar19;
  ulonglong *puVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  FDS_ServerMessage *pFVar25;
  uint uVar26;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  TSharedPtr<server_msg_twoway::ServerMessagesTwoway,1> local_1f0;
  longlong local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  FDS_ServerMessage *local_1d0;
  EDS_ErrorCode local_1c8 [2];
  uint local_1c0 [2];
  uint local_1b8 [2];
  uint local_1b0 [2];
  uint local_1a8 [2];
  uint local_1a0;
  FDS_ServerMessage *local_198;
  TReferenceControllerBase<1> *local_190;
  ulonglong *local_188;
  UDS_NetworkManager *local_180;
  longlong local_178;
  FString local_170;
  FReadAccessScope local_160;
  FReadAccessScope local_148;
  FReadAccessScope local_130;
  FReadAccessScope local_118;
  undefined1 local_100 [168];
  undefined4 local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((this->Socket == (FSocket *)0x0) ||
     ((this->PacketProcessor).field0_0x0.DebugPtr == (UDS_PacketProcessor *)0x0)) {
LAB_14bb2b16c:
    bVar8 = false;
  }
  else {
    if ((this->ServerMessages).ArrayNum != 0) {
      local_180 = this;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UDS_NetworkManager::ReceivePacketProcess'::__l2::
               _dynamic_atexit_destructor_for__swapTemp__);
        _Init_thread_footer(&::_TSS0);
      }
      BVar11 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->CSMessages);
      if (BVar11 != 0) {
        pTVar2 = &this->ServerMessages;
        TVar7 = *pTVar2;
        *pTVar2 = swapTemp;
        swapTemp = TVar7;
        DestructItems<FDS_ServerMessage,int>
                  ((FDS_ServerMessage *)(pTVar2->AllocatorInstance).Data,
                   (this->ServerMessages).ArrayNum);
        piVar1 = &(this->ServerMessages).ArrayMax;
        (this->ServerMessages).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->CSMessages);
      }
      uVar17 = (ulonglong)swapTemp.ArrayNum;
      local_1a0 = swapTemp.ArrayNum;
      local_198 = (FDS_ServerMessage *)(swapTemp.AllocatorInstance.Data + uVar17 * 0x18);
      FVar19.Data = swapTemp.AllocatorInstance.Data;
      pFVar25 = local_198;
LAB_14bb2a958:
      while( true ) {
        local_1d0 = (FDS_ServerMessage *)FVar19.Data;
        if (swapTemp.ArrayNum != (int)uVar17) {
          local_1f8[0] = 0;
          `TCheckedPointerIterator<FDS_ServerMessage,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1f8);
        }
        if ((FDS_ServerMessage *)FVar19.Data == pFVar25) {
          DestructItems<FDS_ServerMessage,int>
                    ((FDS_ServerMessage *)swapTemp.AllocatorInstance.Data,swapTemp.ArrayNum);
          swapTemp.ArrayNum = 0;
          if (swapTemp.ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&swapTemp.AllocatorInstance,0,&swapTemp.ArrayMax);
          }
          goto LAB_14bb2b1e8;
        }
        if (((FDS_ServerMessage *)FVar19.Data)->ProtoType == '\0') break;
        if (((FDS_ServerMessage *)FVar19.Data)->ProtoType == 'b') {
          local_1f0.SharedReferenceCount.ReferenceController =
               (((FDS_ServerMessage *)FVar19.Data)->Msg).SharedReferenceCount.ReferenceController;
          pSVar4 = (ServerMessagesTwoway *)(((FDS_ServerMessage *)FVar19.Data)->Msg).Object;
          if (local_1f0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_1f0.Object = pSVar4;
          if ((pSVar4 == (ServerMessagesTwoway *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          this_00 = &this->TwoWayClientMessages;
          uVar23 = (pSVar4->_impl_)._oneof_case_[0];
          if (*(int *)&(this->TwoWayClientMessages).field_0x8 !=
              *(int *)&(this->TwoWayClientMessages).field_0x34) {
            puVar5 = *(undefined1 **)&(this->TwoWayClientMessages).field_0x40;
            puVar18 = &(this->TwoWayClientMessages).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar18 = puVar5;
            }
            uVar26 = *(uint *)(puVar18 +
                              (ulonglong)
                              (*(int *)&(this->TwoWayClientMessages).field_0x48 - 1U & uVar23) * 4);
            if (uVar26 != 0xffffffff) {
              do {
                puVar14 = (uint *)((longlong)(int)uVar26 * 0x20 + *(longlong *)&this_00->field_0x0);
                if (*puVar14 == uVar23) {
                  puVar12 = puVar14 + 2;
                  if (puVar14 == (uint *)0x0) {
                    puVar12 = (uint *)0x0;
                  }
                  if (puVar12 != (uint *)0x0) {
                    lVar21 = *(longlong *)puVar12;
                    local_190 = *(TReferenceControllerBase<1> **)(puVar12 + 2);
                    if (local_190 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      local_190->SharedReferenceCount =
                           (atomic<int>)((int)local_190->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    EVar3 = (pSVar4->_impl_).error_code_;
                    local_178 = lVar21;
                    if (EVar3 == Success) {
                      if ((lVar21 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        uVar9 = (*pcVar6)();
                        return (bool)uVar9;
                      }
                      if ((pSVar4 == (ServerMessagesTwoway *)0x0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x44d,L""), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        uVar9 = (*pcVar6)();
                        return (bool)uVar9;
                      }
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                                 (lVar21 + 0x10),&local_130);
                      if ((*(int *)(lVar21 + 0x20) != 0) &&
                         (plVar15 = *(longlong **)(lVar21 + 0x18), plVar15 != (longlong *)0x0)) {
                        (**(code **)(*plVar15 + 0x68))(plVar15,pSVar4);
                      }
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                      ~FReadAccessScope(&local_130);
                      local_1b0[0] = uVar23;
                      if (*(int *)&(this->TwoWayClientMessages).field_0x8 !=
                          *(int *)&(this->TwoWayClientMessages).field_0x34) {
                        TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
                        ::RemoveImpl<unsigned_int>
                                  ((TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
                                    *)this_00,uVar23,local_1b0);
                      }
                      if ((lVar21 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        uVar9 = (*pcVar6)();
                        return (bool)uVar9;
                      }
                      if (*(int *)&(this->PacketSequenceMap).field_0x8 ==
                          *(int *)&(this->PacketSequenceMap).field_0x34) goto LAB_14bb2ac6c;
                      puVar5 = *(undefined1 **)&(this->PacketSequenceMap).field_0x40;
                      puVar18 = &(this->PacketSequenceMap).field_0x38;
                      if (puVar5 != (undefined1 *)0x0) {
                        puVar18 = puVar5;
                      }
                      uVar26 = *(uint *)(puVar18 +
                                        (ulonglong)
                                        (*(int *)&(this->PacketSequenceMap).field_0x48 - 1U &
                                        *(uint *)(lVar21 + 8)) * 4);
                      if (uVar26 == 0xffffffff) goto LAB_14bb2ac6c;
                      goto LAB_14bb2adc0;
                    }
                    if ((lVar21 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      uVar9 = (*pcVar6)();
                      return (bool)uVar9;
                    }
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                               (lVar21 + 0x28),&local_160);
                    if (((*(int *)(lVar21 + 0x38) == 0) ||
                        (*(longlong **)(lVar21 + 0x30) == (longlong *)0x0)) ||
                       (cVar10 = (**(code **)(**(longlong **)(lVar21 + 0x30) + 0x38))(),
                       cVar10 == '\0')) {
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                      ~FReadAccessScope(&local_160);
LAB_14bb2abab:
                      if ((pSVar4 == (ServerMessagesTwoway *)0x0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x44d,L""), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        uVar9 = (*pcVar6)();
                        return (bool)uVar9;
                      }
                      ProcessError(this,EVar3,uVar23,local_1d0->ProtoType,(Message *)pSVar4);
                    }
                    else {
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                      ~FReadAccessScope(&local_160);
                      local_1c8[0] = EVar3;
                      if ((lVar21 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        uVar9 = (*pcVar6)();
                        return (bool)uVar9;
                      }
                      if ((pSVar4 == (ServerMessagesTwoway *)0x0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x44d,L""), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        uVar9 = (*pcVar6)();
                        return (bool)uVar9;
                      }
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                                 (lVar21 + 0x28),&local_148);
                      if (*(int *)(lVar21 + 0x38) == 0) {
                        plVar15 = (longlong *)0x0;
                      }
                      else {
                        plVar15 = *(longlong **)(lVar21 + 0x30);
                      }
                      cVar10 = (**(code **)(*plVar15 + 0x60))(plVar15,local_1c8);
                      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                      ~FReadAccessScope(&local_148);
                      if (cVar10 == '\0') goto LAB_14bb2abab;
                    }
                    local_1c0[0] = uVar23;
                    if (*(int *)&(this->TwoWayClientMessages).field_0x8 !=
                        *(int *)&(this->TwoWayClientMessages).field_0x34) {
                      TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
                      ::RemoveImpl<unsigned_int>
                                ((TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
                                  *)this_00,uVar23,local_1c0);
                    }
                    if ((lVar21 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      uVar9 = (*pcVar6)();
                      return (bool)uVar9;
                    }
                    local_1b8[0] = *(uint *)(lVar21 + 8);
                    if (*(int *)&(this->PacketSequenceMap).field_0x8 !=
                        *(int *)&(this->PacketSequenceMap).field_0x34) {
                      TSet<TTuple<int,FDS_PacketArrayInfo>,TDefaultMapHashableKeyFuncs<int,FDS_PacketArrayInfo,0>,FDefaultSetAllocator>
                      ::RemoveImpl<int>((TSet<TTuple<int,FDS_PacketArrayInfo>,TDefaultMapHashableKeyFuncs<int,FDS_PacketArrayInfo,0>,FDefaultSetAllocator>
                                         *)&this->PacketSequenceMap,local_1b8[0],(int *)local_1b8);
                    }
                    goto LAB_14bb2ac6c;
                  }
                  break;
                }
                uVar26 = puVar14[6];
              } while (uVar26 != 0xffffffff);
            }
          }
          ProcessDefaultResponse(this,&local_1f0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1f0.SharedReferenceCount.ReferenceController);
          uVar17 = (ulonglong)local_1a0;
          FVar19.Data = FVar19.Data + 0x18;
          pFVar25 = local_198;
        }
        else {
          bVar8 = ProcessCondReceive(this,(FDS_ServerMessage *)FVar19.Data);
          if (!bVar8) {
            ProcessReceive(this,(FDS_ServerMessage *)FVar19.Data);
          }
          uVar17 = (ulonglong)local_1a0;
          FVar19.Data = FVar19.Data + 0x18;
        }
      }
      ClearVariables(this);
      FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)local_100,Popup_LogOut);
      ::FString::FString(&local_170,"GameServer Disconnected");
      FDS_Text::SetTextFromUniqueString((FDS_Text *)local_100,&local_170);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_100);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
      if ((void *)local_50._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_50._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_50);
      local_58 = 0;
      if ((void *)local_100._160_8_ != (void *)0x0) {
        FMemory::Free((void *)local_100._160_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_100 + 0x60);
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_100._64_8_,local_100._72_4_);
      if ((FDS_TextFormatArg *)local_100._64_8_ != (FDS_TextFormatArg *)0x0) {
        FMemory::Free((void *)local_100._64_8_);
      }
      if ((FScriptContainerElement *)local_100._48_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_100._48_8_);
      }
      goto LAB_14bb2b16c;
    }
LAB_14bb2b1e8:
    bVar8 = true;
  }
  return bVar8;
  while (uVar26 = puVar14[0xc], uVar26 != 0xffffffff) {
LAB_14bb2adc0:
    puVar14 = (uint *)((longlong)(int)uVar26 * 0x38 + *(longlong *)&this->PacketSequenceMap);
    if (*puVar14 == *(uint *)(lVar21 + 8)) {
      puVar20 = (ulonglong *)(puVar14 + 2);
      if (puVar14 == (uint *)0x0) {
        puVar20 = (ulonglong *)0x0;
      }
      local_188 = puVar20;
      if (puVar20 != (ulonglong *)0x0) {
        if ((uint)puVar20[1] == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3437720926416796927>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NetworkManager.cpp"
                             ,0x301,"packetArrayInfoPtr->PacketArray.Num()");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        else {
          local_1e0 = *(longlong *)*puVar20;
          local_1d8 = (TReferenceControllerBase<1> *)((longlong *)*puVar20)[1];
          if (local_1d8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_1d8->SharedReferenceCount =
                 (atomic<int>)((int)local_1d8->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1e0 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (*(uint *)(local_1e0 + 0x5c) != uVar23) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3437720926416796919>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NetworkManager.cpp"
                               ,0x309,"false");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            goto LAB_14bb2b073;
          }
          if ((((longlong *)*puVar20 <= &local_1e0) &&
              (&local_1e0 <
               (longlong *)*puVar20 + (longlong)(int)*(uint *)((longlong)puVar20 + 0xc) * 2)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          lVar16 = (longlong)(int)(uint)puVar20[1];
          if ((uint)puVar20[1] == 0) goto LAB_14bb2b00e;
          plVar15 = (longlong *)*puVar20;
          uVar26 = 0;
          lVar21 = 0;
          bVar8 = *plVar15 != local_1e0;
          uVar23 = 0;
          do {
            lVar21 = lVar21 + 1;
            uVar24 = uVar23 + 1;
            if (lVar21 < lVar16) {
              plVar13 = plVar15 + lVar21 * 2;
              do {
                if (bVar8 != (*plVar13 != local_1e0)) break;
                uVar24 = uVar24 + 1;
                lVar21 = lVar21 + 1;
                plVar13 = plVar13 + 2;
              } while (lVar21 < lVar16);
            }
            iVar22 = uVar24 - uVar23;
            if (bVar8 == false) {
              DestructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,int>
                        ((TSharedPtr<FDS_ClientMessage_Twoway,1> *)
                         (plVar15 + (longlong)(int)uVar23 * 2),iVar22);
            }
            else {
              if (uVar26 != uVar23) {
                memmove(plVar15 + (longlong)(int)uVar26 * 2,plVar15 + (longlong)(int)uVar23 * 2,
                        (longlong)iVar22 << 4);
              }
              uVar26 = uVar26 + iVar22;
            }
            this = local_180;
            bVar8 = (bool)(bVar8 ^ 1);
            uVar23 = uVar24;
          } while (lVar21 < lVar16);
          *(uint *)(local_188 + 1) = uVar26;
          puVar20 = local_188;
          lVar21 = local_178;
          if (uVar26 == 0) {
LAB_14bb2b00e:
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar20 + 2),
                       &local_118);
            if (((uint)puVar20[4] != 0) && ((longlong *)puVar20[3] != (longlong *)0x0)) {
              (**(code **)(*(longlong *)puVar20[3] + 0x68))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_118);
            local_1a8[0] = *(uint *)(lVar21 + 8);
            if (*(int *)&(this->PacketSequenceMap).field_0x8 ==
                *(int *)&(this->PacketSequenceMap).field_0x34) goto LAB_14bb2b073;
            TSet<TTuple<int,FDS_PacketArrayInfo>,TDefaultMapHashableKeyFuncs<int,FDS_PacketArrayInfo,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,FDS_PacketArrayInfo>,TDefaultMapHashableKeyFuncs<int,FDS_PacketArrayInfo,0>,FDefaultSetAllocator>
                               *)&this->PacketSequenceMap,local_1a8[0],(int *)local_1a8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d8);
          }
          else {
            SendTwoWayPacket(local_180,(TSharedPtr<FDS_ClientMessage_Twoway,1> *)*local_188);
LAB_14bb2b073:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d8);
          }
        }
      }
      break;
    }
  }
LAB_14bb2ac6c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_190);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f0.SharedReferenceCount.ReferenceController);
  FVar19.Data = (FScriptContainerElement *)(local_1d0 + 1);
  uVar17 = (ulonglong)local_1a0;
  pFVar25 = local_198;
  goto LAB_14bb2a958;
}

// RegistReceive @ 14bb2ce70

void __cdecl
UDS_NetworkManager::RegistReceive
          (ServerMessageCase param_1,
          TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                   *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  ServerMessageCase local_res8 [2];
  ServerMessageCase *local_88;
  undefined1 *local_80;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  undefined1 local_30 [8];
  ForAnyElementType local_28;
  int local_20;
  
  local_res8[0] = param_1;
  if (ReceiveMap ==
      (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
       *)0x0) {
    InitStatic();
  }
  if (*(int *)&ReceiveMap->field_0x8 != *(int *)&ReceiveMap->field_0x34) {
    puVar4 = *(undefined1 **)&ReceiveMap->field_0x40;
    if (*(undefined1 **)&ReceiveMap->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &ReceiveMap->field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&ReceiveMap->field_0x48 - kErrorCodeRes & local_res8[0]) * 4)
    ;
    if (iVar3 != -1) {
      do {
        if (*(ServerMessageCase *)((longlong)iVar3 * 0x40 + *(longlong *)ReceiveMap) ==
            local_res8[0]) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3437720926416797554>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NetworkManager.cpp"
                             ,0x8e,"!ReceiveMap->Contains(InMsgCase)");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          goto LAB_14bb2d02e;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + *(longlong *)ReceiveMap);
      } while (iVar3 != -1);
    }
  }
  local_48 = (undefined1  [8])0x0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_48,param_2);
  local_30 = (undefined1  [8])0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_30,param_3);
  local_88 = local_res8;
  local_80 = local_48;
  TSet<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo>,TDefaultMapHashableKeyFuncs<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_server_msg::ServerMessages::ServerMessageCase_&,FDS_RecieveInfo_&&>_>
            (ReceiveMap,
             (TPairInitializer<server_msg::ServerMessages::ServerMessageCase_&,FDS_RecieveInfo_&&> *
             )&stack0x00000020,(bool *)&local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_78);
  if ((local_20 != 0) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_60);
  if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
LAB_14bb2d02e:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// RegistReceive @ 14bb2d0b0

void __cdecl
UDS_NetworkManager::RegistReceive
          (ServerMessageCase param_1,
          TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                   *param_3,
          TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy> *this;
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  ServerMessageCase local_res8 [2];
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  int local_50;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  int local_38;
  undefined1 local_30 [8];
  ForAnyElementType FStack_28;
  int local_20;
  
  local_res8[0] = param_1;
  if (CondReceiveMap ==
      (TMap<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    InitStatic();
  }
  local_60 = (undefined1  [8])0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_48 = (undefined1  [8])0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_60,param_2);
  TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_48,param_3);
  TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_30,param_4);
  pTVar3 = TMapBase<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<enum_server_msg::ServerMessages::ServerMessageCase_const_&>
                     (CondReceiveMap,local_res8[0],local_res8);
  iVar2 = pTVar3->ArrayNum;
  if (iVar2 == pTVar3->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  lVar4 = (longlong)iVar2;
  pTVar3->ArrayNum = iVar2 + 1;
  pFVar1 = (pTVar3->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar4 * 0x48) = 0;
  *(undefined8 *)(pFVar1 + lVar4 * 0x48 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar4 * 0x48 + 0x10) = 0;
  this = (TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy> *)
         (pFVar1 + lVar4 * 0x48);
  TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (this,(TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                   *)local_60);
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined4 *)&this[1].field_0x10 = 0;
  TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)(this + 1),
             (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
              *)local_48);
  *(undefined8 *)(this + 2) = 0;
  *(undefined8 *)&this[2].field_0x8 = 0;
  *(undefined4 *)&this[2].field_0x10 = 0;
  TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)(this + 2),
             (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_78);
  if ((local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_78);
  if ((local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_78);
  if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return;
}

// RegistResponse @ 14bb2d380

void __cdecl
UDS_NetworkManager::RegistResponse
          (ServerMessageTwowayCase param_1,
          TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                   *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  ServerMessageTwowayCase local_res8 [2];
  ServerMessageTwowayCase *local_78;
  undefined1 *local_70;
  FDestructionSentinel local_68;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  
  local_res8[0] = param_1;
  if (DefaultResponseMap ==
      (TMap<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>_>
       *)0x0) {
    InitStatic();
  }
  if (*(int *)&DefaultResponseMap->field_0x8 != *(int *)&DefaultResponseMap->field_0x34) {
    puVar4 = *(undefined1 **)&DefaultResponseMap->field_0x40;
    if (*(undefined1 **)&DefaultResponseMap->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &DefaultResponseMap->field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&DefaultResponseMap->field_0x48 +
                               ~SERVERMESSAGETWOWAY_NOT_SET & local_res8[0]) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ServerMessageTwowayCase *)((longlong)iVar3 * 0x40 + *(longlong *)DefaultResponseMap)
            == local_res8[0]) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3437720926416797513>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NetworkManager.cpp"
                             ,0xb7,"!DefaultResponseMap->Contains(InMsgCase)");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          goto LAB_14bb2d4ec;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + *(longlong *)DefaultResponseMap);
      } while (iVar3 != -1);
    }
  }
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
              *)local_50,param_2);
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
              *)local_38,param_3);
  local_78 = local_res8;
  local_70 = local_50;
  TSet<TTuple<enum_server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo>,TDefaultMapHashableKeyFuncs<enum_server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase,FDS_ResponseInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase_&,FDS_ResponseInfo_&&>_>
            (DefaultResponseMap,
             (TPairInitializer<server_msg_twoway::ServerMessagesTwoway::ServerMessageTwowayCase_&,FDS_ResponseInfo_&&>
              *)&stack0x00000020,(bool *)&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_68);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  if ((void *)local_50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
LAB_14bb2d4ec:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// SendPacket @ 14bb35040

bool __thiscall UDS_NetworkManager::SendPacket(UDS_NetworkManager *this,ClientMessages *param_1)

{
  bool bVar1;
  uchar uVar2;
  
  uVar2 = '\f';
  if ((param_1->_impl_)._oneof_case_[0] == 0x1869e) {
    uVar2 = 'd';
  }
  bVar1 = SendPacketInternal(this,(Message *)param_1,uVar2);
  return bVar1;
}

// SendPacketInternal @ 14bb35070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UDS_NetworkManager::SendPacketInternal(UDS_NetworkManager *this,Message *param_1,uchar param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  undefined1 auStackY_2b8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  uchar local_278 [8];
  uint local_270;
  uint local_26c [5];
  FArchiveState local_258;
  undefined8 local_1c8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_1c0;
  undefined8 local_1b8;
  ArrayOutputStream local_1a8;
  FReadAccessScope local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_278[0] = param_2;
  if (this->bIsConnected == false) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_NetworkManager::SendPacketInternal",0x26,Yes);
    pwVar9 = L"Not connected.";
    uVar8 = 0x224;
  }
  else {
    if (this->Socket != (FSocket *)0x0) {
      bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SendValidCheckDel);
      plVar5 = (longlong *)0x0;
      if (bVar1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->SendValidCheckDel,&local_188);
        if (*(int *)&(this->SendValidCheckDel).field_0x10 != 0) {
          plVar5 = *(longlong **)&(this->SendValidCheckDel).field_0x8;
        }
        cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,param_1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_188);
        if (cVar2 == '\0') {
          return false;
        }
      }
      iVar3 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
      local_270 = iVar3 + 1;
      uVar8 = iVar3 + 5;
      if (0x7fff < uVar8) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_NetworkManager::SendPacketInternal",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_168.Ptr,0x23e,L"Packet size is too large. (%d)");
        goto LAB_14bb35246;
      }
      this_00 = &this->SocketBuffer;
      uVar6 = 0x7fff;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(this_00,0x7fff,Default);
      local_26c[1] = 0;
      local_26c[2] = 0;
      local_258._padding_ = 0;
      local_258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_258._40_8_ = 0;
      local_258.ArSerializingDefaults = 0;
      local_258.ArPortFlags = 0;
      local_258.ArMaxSerializeSize = 0;
      local_258.ArUEVer.FileVersionUE4 = 0;
      local_258.ArUEVer.FileVersionUE5 = 0;
      local_258.ArLicenseeUEVer = 0;
      local_258.ArEngineVer.Major = 0;
      local_258.ArEngineVer.Minor = 0;
      local_258.ArEngineVer.Patch = 0;
      local_258.ArEngineVer._6_2_ = 0;
      local_258.ArEngineVer.Changelist = 0;
      local_258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_258.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_258.SerializedProperty = (FProperty *)0x0;
      local_258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_258.bCustomVersionsAreReset = false;
      local_258._129_7_ = 0;
      local_258.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_258);
      local_1c8 = 0;
      local_258._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
      local_1b8 = 0;
      local_1c0 = this_00;
      FArchiveState::SetIsSaving(&local_258,true);
      (**(code **)(local_258._padding_ + 0x108))(&local_258,CONCAT71(uVar7,1));
      if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
          (uint *)((longlong)(local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
        if (local_258.ArForceByteSwapping == 0) {
          (**(code **)(local_258._padding_ + 0x188))(&local_258,&local_270,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,&local_270);
        }
      }
      else {
        local_270 = *(uint *)(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
        (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
             (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4;
      }
      if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
          (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 1) {
        (**(code **)(local_258._padding_ + 0x188))(&local_258,local_278,1);
      }
      else {
        local_278[0] = *(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
        (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
             (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 1;
      }
      google::protobuf::io::ArrayOutputStream::ArrayOutputStream
                (&local_1a8,(this_00->AllocatorInstance).Data + 5,iVar3,-1);
      bVar1 = google::protobuf::MessageLite::SerializeToZeroCopyStream
                        ((MessageLite *)param_1,(ZeroCopyOutputStream *)&local_1a8);
      if (bVar1) {
        local_26c[0] = 0;
        cVar2 = (**(code **)(this->Socket->_padding_ + 0x60))
                          (this->Socket,(this_00->AllocatorInstance).Data,uVar8,local_26c);
        if (cVar2 == '\0') {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_NetworkManager::SendPacketInternal",0x26,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_168.Ptr,0x254,L"Failed to \"Socket->Send\".");
LAB_14bb35516:
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
        }
        else {
          if (uVar8 == local_26c[0]) {
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(this_00,0x7fff,Default);
            bVar1 = true;
            goto LAB_14bb3554a;
          }
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_NetworkManager::SendPacketInternal",0x26,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_168.Ptr,0x25b,L"writeSize(%d) != sendBytes(%d).");
            goto LAB_14bb35516;
          }
        }
        DisconnectWithPopup(this,Client_FailedToSendPacket);
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_NetworkManager::SendPacketInternal",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_168.Ptr,0x24c,L"Failed to SerializeToZeroCopyStream().")
          ;
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
            bVar1 = false;
            goto LAB_14bb3554a;
          }
        }
      }
      bVar1 = false;
LAB_14bb3554a:
      local_1a8._padding_ = (longlong)google::protobuf::io::ZeroCopyOutputStream::vftable;
      FArchive::~FArchive((FArchive *)&local_258);
      return bVar1;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_NetworkManager::SendPacketInternal",0x26,Yes);
    pwVar9 = L"Socket is nullptr.";
    uVar8 = 0x22a;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,uVar8,pwVar9);
LAB_14bb35246:
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return false;
}

// SendTwoWayPacket @ 14bb35590

bool __thiscall
UDS_NetworkManager::SendTwoWayPacket
          (UDS_NetworkManager *this,TSharedPtr<FDS_ClientMessage_Twoway,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FDS_ClientMessage_Twoway *pFVar6;
  atomic<unsigned_char> *paVar7;
  undefined1 *puVar8;
  uchar uVar9;
  uint *local_18;
  TSharedPtr<FDS_ClientMessage_Twoway,1> *local_10;
  
  if (param_1->Object == (FDS_ClientMessage_Twoway *)0x0) {
    iVar5 = 0x18b;
    paVar7 = &bGEnsureHasExecuted<_3437720926416797301>;
    bVar3 = true;
  }
  else {
    param_1->Object->TwowayID = (param_1->Object->clientMsg)._impl_._oneof_case_[0];
    if ((param_1->Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar1 = param_1->Object->TwowayID;
    if (*(int *)&(this->TwoWayClientMessages).field_0x8 !=
        *(int *)&(this->TwoWayClientMessages).field_0x34) {
      puVar8 = *(undefined1 **)&(this->TwoWayClientMessages).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->TwoWayClientMessages).field_0x38;
      }
      iVar5 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->TwoWayClientMessages).field_0x48 - 1U & uVar1) * 4)
      ;
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x20 + *(longlong *)&this->TwoWayClientMessages) == uVar1)
          {
            return false;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->TwoWayClientMessages)
          ;
        } while (iVar5 != -1);
      }
    }
    if ((param_1->Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (((param_1->Object->clientMsg)._impl_._oneof_case_[0] == 5) ||
       (pFVar6 = TSharedPtr<FDS_ClientMessage_Twoway,1>::operator->(param_1),
       (pFVar6->clientMsg)._impl_._oneof_case_[0] == 0x48)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    uVar9 = 'Y';
    if (bVar3) {
      uVar9 = 'e';
    }
    if ((param_1->Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = SendPacketInternal(this,(Message *)&param_1->Object->clientMsg,uVar9);
    if (bVar3) {
      if ((param_1->Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_18 = &param_1->Object->TwowayID;
      local_10 = param_1;
      TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<FDS_ClientMessage_Twoway,1>_const_&>_>
                ((TSet<TTuple<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FDS_ClientMessage_Twoway,1>,0>,FDefaultSetAllocator>
                  *)&this->TwoWayClientMessages,
                 (TPairInitializer<unsigned_int_const_&,TSharedPtr<FDS_ClientMessage_Twoway,1>_const_&>
                  *)&stack0x00000010,(bool *)&local_18);
      return true;
    }
    iVar5 = 0x19c;
    paVar7 = &bGEnsureHasExecuted<_3437720926416797284>;
    bVar3 = false;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,bVar3,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NetworkManager.cpp"
                     ,iVar5,"false");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// SendTwoWayPacketSequence @ 14bb357b0

bool __thiscall
UDS_NetworkManager::SendTwoWayPacketSequence
          (UDS_NetworkManager *this,
          TArray<TSharedPtr<FDS_ClientMessage_Twoway,1>,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TSharedPtr<FDS_ClientMessage_Twoway,1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [24];
  int *local_78;
  ForAnyElementType *local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  undefined1 local_58 [32];
  
  iVar2 = param_1->ArrayNum;
  pTVar4 = (TSharedPtr<FDS_ClientMessage_Twoway,1> *)(param_1->AllocatorInstance).Data;
  if (iVar2 == 0) {
    DestructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,int>(pTVar4,0);
    pFVar9 = (param_1->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    if (*(void **)&param_2->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_2->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_2);
    return false;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = iVar2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,&local_68,iVar2,&local_5c);
  ConstructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,TSharedPtr<FDS_ClientMessage_Twoway,1>,int>
            (local_68.Data,pTVar4,iVar2);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,param_2);
  local_70 = &local_68;
  piVar1 = &this->PacketGroupID;
  local_78 = piVar1;
  TSet<TTuple<int,FDS_PacketArrayInfo>,TDefaultMapHashableKeyFuncs<int,FDS_PacketArrayInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&,FDS_PacketArrayInfo_&&>_>
            ((TSet<TTuple<int,FDS_PacketArrayInfo>,TDefaultMapHashableKeyFuncs<int,FDS_PacketArrayInfo,0>,FDefaultSetAllocator>
              *)&this->PacketSequenceMap,
             (TPairInitializer<int_&,FDS_PacketArrayInfo_&&> *)(local_res10 + 0x10),
             (bool *)&local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  DestructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,int>
            ((TSharedPtr<FDS_ClientMessage_Twoway,1> *)local_68.Data,local_60);
  if ((TSharedPtr<FDS_ClientMessage_Twoway,1> *)local_68.Data !=
      (TSharedPtr<FDS_ClientMessage_Twoway,1> *)0x0) {
    FMemory::Free(local_68.Data);
  }
  iVar2 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDS_ClientMessage_Twoway,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    iVar3 = *piVar1;
    if (pFVar9 == pFVar10) break;
    if (*(longlong *)pFVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    lVar5 = *(longlong *)pFVar9;
    pFVar9 = pFVar9 + 0x10;
    *(int *)(lVar5 + 8) = iVar3;
  }
  *piVar1 = iVar3 + 1;
  if (param_1->ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  SendTwoWayPacket(this,(TSharedPtr<FDS_ClientMessage_Twoway,1> *)(param_1->AllocatorInstance).Data)
  ;
  DestructItems<TSharedPtr<FDS_ClientMessage_Twoway,1>,int>
            ((TSharedPtr<FDS_ClientMessage_Twoway,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  pFVar9 = (param_1->AllocatorInstance).Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return true;
}

// SetPingTimeSeconds @ 14bb370e0

void __thiscall UDS_NetworkManager::SetPingTimeSeconds(UDS_NetworkManager *this,double param_1)

{
  this->PingTimeSeconds = param_1;
  return;
}

// SetPingTimeSeconds_NotRealTime @ 14bb370f0

void __thiscall
UDS_NetworkManager::SetPingTimeSeconds_NotRealTime(UDS_NetworkManager *this,double param_1)

{
  this->PingTimeSeconds_NotRealTime = param_1;
  return;
}

// StartSendNetSyncRequest @ 14bb39770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NetworkManager::StartSendNetSyncRequest(UDS_NetworkManager *this)

{
  FTimerManager *this_00;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_NetworkManager>
            (this_00,&this->SendTimeSyncHandle,this,(pmf_9ab76f68)0x14bb08250,__real_44160000,true,
             __real_bf800000);
  ExecuteSendTimeSyncRequest(this);
  return;
}

// StartSendPingRequestTimer @ 14bb397d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NetworkManager::StartSendPingRequestTimer(UDS_NetworkManager *this)

{
  FTimerManager *this_00;
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_NetworkManager>
            (this_00,&this->SendPingRequestTimerHandle,this,(pmf_9ab76f68)0x14bb08050,
             __real_40400000,true,__real_bf800000);
  ExecuteSendPingRequest(this);
  return;
}

// TryPushServerMessages @ 14bb3b0a0

bool __thiscall
UDS_NetworkManager::TryPushServerMessages
          (UDS_NetworkManager *this,TArray<FDS_ServerMessage,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  BOOL BVar10;
  int iVar11;
  TArray<FDS_ServerMessage,TSizedDefaultAllocator<32>_> *pTVar12;
  
  if ((this->PacketProcessor).field0_0x0.DebugPtr != (UDS_PacketProcessor *)0x0) {
    BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->CSMessages);
    if (BVar10 != 0) {
      piVar1 = &(this->ServerMessages).ArrayNum;
      pTVar12 = &this->ServerMessages;
      if (*piVar1 == 0) {
        uVar4 = *(undefined4 *)((longlong)&(param_1->AllocatorInstance).Data + 4);
        iVar2 = param_1->ArrayNum;
        iVar11 = param_1->ArrayMax;
        pFVar5 = (pTVar12->AllocatorInstance).Data;
        iVar6 = (this->ServerMessages).ArrayNum;
        iVar7 = (this->ServerMessages).ArrayMax;
        *(undefined4 *)&(pTVar12->AllocatorInstance).Data =
             *(undefined4 *)&(param_1->AllocatorInstance).Data;
        *(undefined4 *)((longlong)&(this->ServerMessages).AllocatorInstance.Data + 4) = uVar4;
        (this->ServerMessages).ArrayNum = iVar2;
        (this->ServerMessages).ArrayMax = iVar11;
        (param_1->AllocatorInstance).Data = pFVar5;
        param_1->ArrayNum = iVar6;
        param_1->ArrayMax = iVar7;
      }
      else {
        if ((pTVar12 == param_1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        iVar2 = param_1->ArrayNum;
        if (iVar2 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,iVar2,&pTVar12->AllocatorInstance,piVar1,
                              &(this->ServerMessages).ArrayMax);
          ConstructItems<FDS_ServerMessage,FDS_ServerMessage,int>
                    ((pTVar12->AllocatorInstance).Data + (longlong)iVar11 * 0x18,
                     (FDS_ServerMessage *)(param_1->AllocatorInstance).Data,iVar2);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->CSMessages);
      return true;
    }
  }
  return false;
}

// UnRegistReceive @ 14bb3baa0

void __cdecl UDS_NetworkManager::UnRegistReceive(ServerMessageCase param_1)

{
  ServerMessageCase local_res10 [6];
  
  if ((ReceiveMap !=
       (TMap<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>_>
        *)0x0) && (*(int *)&ReceiveMap->field_0x8 != *(int *)&ReceiveMap->field_0x34)) {
    local_res10[0] = param_1;
    TSet<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo>,TDefaultMapHashableKeyFuncs<enum_server_msg::ServerMessages::ServerMessageCase,FDS_RecieveInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_server_msg::ServerMessages::ServerMessageCase>(ReceiveMap,param_1,local_res10)
    ;
  }
  return;
}

// Update @ 14bb3f070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_NetworkManager::Update(UDS_NetworkManager *this,float *param_1)

{
  float fVar1;
  int iVar2;
  FTimerManager *this_00;
  FDS_ReadPacketRunner *this_01;
  FDS_ReadPacketRunner *pFVar3;
  FRunnableThread *pFVar4;
  double dVar5;
  double dVar6;
  FDS_ErrorMessageInfo local_res8 [8];
  ServerMessagesTwoway local_48;
  
  this->BeforeWorldTimeSecond = this->CurWorldTimeSecond;
  dVar5 = DS_Util::GetTimeSeconds();
  this->CurWorldTimeSecond = (float)dVar5;
  fVar1 = this->BeforeWorldTimeSecond;
  if (this->Socket != (FSocket *)0x0) {
    if (this->bIsConnected == false) {
      iVar2 = (**(code **)(this->Socket->_padding_ + 0x88))();
      if (iVar2 == 1) {
        this->bIsConnected = true;
        FDS_NetworkManager_ConnectResult_DelegateWrapper
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnConnectResult,
                   true);
        this_00 = FDS_TimerManager::Get((UObject *)0x0);
        FTimerManager::SetTimer<UDS_NetworkManager>
                  (this_00,&this->SendPingRequestTimerHandle,this,(pmf_9ab76f68)0x14bb08050,
                   __real_40400000,true,__real_bf800000);
        ExecuteSendPingRequest(this);
        this_01 = ::operator_new(0x28);
        pFVar3 = (FDS_ReadPacketRunner *)0x0;
        if (this_01 != (FDS_ReadPacketRunner *)0x0) {
          pFVar3 = FDS_ReadPacketRunner::FDS_ReadPacketRunner(this_01,this->Socket);
        }
        this->ReadPacketRunner = pFVar3;
        pFVar4 = FRunnableThread::Create
                           ((FRunnable *)pFVar3,L"ReadPacketRunner",0,TPri_Highest,
                            0xffffffffffffffff,None);
        this->ReadPacketRunnerThread = pFVar4;
      }
      else if (iVar2 == 2) {
        DisconnectWithPopup(this,Client_ConnectionError);
        return;
      }
      if (this->bIsConnected == false) {
        return;
      }
    }
    ReceivePacketProcess(this);
    if ((this->PingSendCount != 0) &&
       (dVar6 = DS_Util::GetTimeSeconds(),
       __real_4024000000000000 < dVar6 - this->PingTimeSeconds_NotRealTime)) {
      server_msg_twoway::ServerMessagesTwoway::ServerMessagesTwoway(&local_48,(Arena *)0x0);
      local_48._padding_ = (longlong)&___7ServerMessagesTwoway_server_msg_twoway__6B_;
      PongErrorProcess(this,local_res8,(Message *)&local_48);
      server_msg_twoway::ServerMessagesTwoway::~ServerMessagesTwoway(&local_48);
    }
    CheckRequestTimeOut(this,(float)dVar5 - fVar1);
  }
  return;
}

// ValidPacketProcessor @ 14bb40440

bool __thiscall UDS_NetworkManager::ValidPacketProcessor(UDS_NetworkManager *this)

{
  return (this->PacketProcessor).field0_0x0.DebugPtr != (UDS_PacketProcessor *)0x0;
}

