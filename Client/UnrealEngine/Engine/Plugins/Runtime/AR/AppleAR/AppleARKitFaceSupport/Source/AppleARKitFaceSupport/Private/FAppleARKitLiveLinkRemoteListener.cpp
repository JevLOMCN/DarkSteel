// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 8

// FAppleARKitLiveLinkRemoteListener @ 14d2832b0

FAppleARKitLiveLinkRemoteListener * __thiscall
FAppleARKitLiveLinkRemoteListener::FAppleARKitLiveLinkRemoteListener
          (FAppleARKitLiveLinkRemoteListener *this,TSharedPtr<ILiveLinkSourceARKit,1> *param_1)

{
  int *piVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
  this->_padding_ = (longlong)&___7FAppleARKitLiveLinkRemoteListener__6B_;
  piVar1 = &(this->RecvBuffer).ArrayNum;
  piVar2 = &(this->RecvBuffer).ArrayMax;
  this->RecvSocket = (FSocket *)0x0;
  (this->RecvBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined8 *)&this->BlendShapes = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x8 = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x20 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x28 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendShapes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlendShapes).field_0x34 = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x40 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  (this->Source).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Source).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x506,&(this->RecvBuffer).AllocatorInstance,piVar1,piVar2);
  return this;
}

// ~FAppleARKitLiveLinkRemoteListener @ 14d2840e0

void __thiscall
FAppleARKitLiveLinkRemoteListener::~FAppleARKitLiveLinkRemoteListener
          (FAppleARKitLiveLinkRemoteListener *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ISocketSubsystem *pIVar6;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FAppleARKitLiveLinkRemoteListener__6B_;
  if (this->RecvSocket != (FSocket *)0x0) {
    (**(code **)(this->RecvSocket->_padding_ + 0x10))();
    if (GIsRequestingExit == false) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      pIVar6 = ISocketSubsystem::Get(&local_res8);
      (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,this->RecvSocket);
    }
  }
  pTVar3 = (this->Source).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BlendShapes).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->BlendShapes);
  pFVar5 = (this->RecvBuffer).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  return;
}

// GetStatId @ 14d287f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FAppleARKitLiveLinkRemoteListener::GetStatId(FAppleARKitLiveLinkRemoteListener *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FAppleARKitLiveLinkRemoteListener::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FAppleARKitLiveLinkRemoteListener::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FAppleARKitLiveLinkRemoteListener::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FAppleARKitLiveLinkRemoteListener = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FAppleARKitLiveLinkRemoteListener");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FAppleARKitLiveLinkRemoteListener::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FAppleARKitLiveLinkRemoteListener,*pFVar1,
               L"FAppleARKitLiveLinkRemoteListener","STATGROUP_Tickables","STATCAT_Advanced",
               L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FAppleARKitLiveLinkRemoteListener::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FAppleARKitLiveLinkRemoteListener;
  if (_StatPtr_FAppleARKitLiveLinkRemoteListener == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FAppleARKitLiveLinkRemoteListener");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FAppleARKitLiveLinkRemoteListener::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FAppleARKitLiveLinkRemoteListener,*pFVar1,
                       L"FAppleARKitLiveLinkRemoteListener","STATGROUP_Tickables","STATCAT_Advanced"
                       ,L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// InitReceiveSocket @ 14d288260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAppleARKitLiveLinkRemoteListener::InitReceiveSocket
          (FAppleARKitLiveLinkRemoteListener *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  FNameEntryId FVar3;
  ISocketSubsystem *this_00;
  FOutputDeviceRedirector *pFVar4;
  undefined8 uVar5;
  undefined4 extraout_var;
  FSocket *pFVar6;
  undefined1 local_res8 [16];
  FName local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_58 [8];
  longlong *local_50;
  TReferenceControllerBase<1> *local_48;
  FString local_40;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  this_00 = ISocketSubsystem::Get(&local_res18);
  pcVar1 = *(code **)(this_00->_padding_ + 0xd0);
  pFVar4 = GetGlobalLogSingleton();
  (*pcVar1)(this_00,&local_50,pFVar4);
  (**(code **)(*local_50 + 0x28))(local_50,param_1);
  pcVar1 = *(code **)(this_00->_padding_ + 0x18);
  uVar5 = (**(code **)(*local_50 + 0xa8))(local_50,local_58);
  ::FString::FString(&local_40,L"FAppleARKitLiveLinkRemoteListener socket");
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res20 = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
  local_res24 = 0;
  pFVar6 = (FSocket *)(*pcVar1)(this_00,&local_res20,&local_40,uVar5);
  this->RecvSocket = pFVar6;
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pFVar6 = this->RecvSocket;
  if (pFVar6 != (FSocket *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0xf0))(pFVar6,1);
    (**(code **)(this->RecvSocket->_padding_ + 0xa0))(this->RecvSocket,1);
    (**(code **)(this->RecvSocket->_padding_ + 0x100))(this->RecvSocket,1);
    cVar2 = (**(code **)(this->RecvSocket->_padding_ + 0x20))(this->RecvSocket,local_50);
    if (cVar2 == '\0') {
      (**(code **)(this_00->_padding_ + 0x38))(this_00,this->RecvSocket);
      this->RecvSocket = (FSocket *)0x0;
      if (2 < (byte)LogAppleARKitFace._0_1_) {
        ISocketSubsystem::GetSocketError(this_00,SE_GET_LAST_ERROR_CODE);
        (**(code **)(*local_50 + 0x80))(local_50,&local_40,1);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKitFace);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar6 = this->RecvSocket;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  return pFVar6 != (FSocket *)0x0;
}

// IsTickable @ 14d2889a0

bool __thiscall
FAppleARKitLiveLinkRemoteListener::IsTickable(FAppleARKitLiveLinkRemoteListener *this)

{
  return this->RecvSocket != (FSocket *)0x0;
}

// IsTickableInEditor @ 14d2889b0

bool __thiscall
FAppleARKitLiveLinkRemoteListener::IsTickableInEditor(FAppleARKitLiveLinkRemoteListener *this)

{
  return true;
}

// IsTickableWhenPaused @ 14d2889c0

bool __thiscall
FAppleARKitLiveLinkRemoteListener::IsTickableWhenPaused(FAppleARKitLiveLinkRemoteListener *this)

{
  return true;
}

// Tick @ 14d28b500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAppleARKitLiveLinkRemoteListener::Tick(FAppleARKitLiveLinkRemoteListener *this,float param_1)

{
  int iVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  ILiveLinkSourceARKit *pIVar4;
  bool bVar5;
  atomic<int> aVar6;
  uchar *puVar7;
  FName FVar8;
  char cVar9;
  uint uVar10;
  atomic<int> aVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_ReceiveLiveLink> FVar13;
  ISocketSubsystem *pIVar14;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsRecv> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsRecv> FVar18;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesRecv> FVar19;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesRecv> FVar20;
  FStaticBasicLogRecord *pFVar21;
  ForAnyElementType FVar22;
  FColor_u_0 FVar23;
  FName FVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  undefined1 uVar29;
  byte bVar30;
  FNameEntryId FVar31;
  uchar auVar32 [8];
  bool bVar33;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  wchar_t *in_stack_fffffffffffffe40;
  undefined4 local_188;
  uint local_184;
  float local_180;
  undefined4 local_17c;
  undefined4 local_178;
  float fStack_174;
  FNboSerializeFromBuffer local_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  FString local_148;
  FString local_138;
  FName local_128;
  uint local_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  FName local_100;
  FName local_f8;
  FName local_e8;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  undefined8 local_a0;
  TReferenceControllerBase<1> *local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68 [6];
  
  FVar13 = StatPtr_STAT_FaceAR_ReceiveLiveLink;
  if (StatPtr_STAT_FaceAR_ReceiveLiveLink ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_ReceiveLiveLink>)0x0) {
    pFVar12 = ::FName::FName(&local_res20,"STAT_FaceAR_ReceiveLiveLink");
    in_stack_fffffffffffffe40 = L"Face AR";
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_ReceiveLiveLink>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_ReceiveLiveLink,*pFVar12,
                        L"Receive LiveLink","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar13;
  uVar29 = 0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_res18.Bits = local_res18.Bits & 0xffffff00;
  FVar23.Bits = (uint)FVar24.ComparisonIndex.Value;
  uVar10 = FVar24.Number;
  if ((FVar23.Bits != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      uVar29 = 1;
      local_res18._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar23.Bits;
        uStackX_1c = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                   ,0x1b4);
        uVar29 = 3;
        local_res18._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar23.Bits;
      uStackX_1c = uVar10;
      local_100 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      local_res18.Bits = CONCAT31(local_res18.Bits._1_3_,uVar29) | 4;
      goto LAB_14d28b693;
    }
  }
  local_100 = local_f8;
  FVar24 = local_f8;
LAB_14d28b693:
  local_17c = 0;
  cVar9 = (**(code **)(this->RecvSocket->_padding_ + 0x40))(this->RecvSocket,&local_17c);
  fVar27 = local_180;
  do {
    if (cVar9 == '\0') {
LAB_14d28c0a5:
      FVar23 = local_res18;
      if ((local_res18.Bits & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((FVar23.Bits & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((FVar23.Bits & 4) != 0) {
        FThreadStats::AddMessage(FVar24,CycleScopeEnd);
      }
      return;
    }
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    pIVar14 = ISocketSubsystem::Get(&local_128);
    (**(code **)(pIVar14->_padding_ + 0x90))(pIVar14,&local_a0);
    local_184 = 0;
    in_stack_fffffffffffffe40 =
         (wchar_t *)((ulonglong)in_stack_fffffffffffffe40 & 0xffffffff00000000);
    cVar9 = (**(code **)(this->RecvSocket->_padding_ + 0x68))
                      (this->RecvSocket,(this->RecvBuffer).AllocatorInstance.Data,
                       (this->RecvBuffer).ArrayNum,&local_184,local_a0,in_stack_fffffffffffffe40);
    if ((cVar9 != '\0') && (0x10a < local_184)) {
      if (FThreadStats::bPrimaryEnable != false) {
        FVar15 = StatPtr_STAT_FaceAR_LiveLink_PacketsRecv;
        if (StatPtr_STAT_FaceAR_LiveLink_PacketsRecv ==
            (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsRecv>)0x0) {
          pFVar12 = ::FName::FName(&local_90,"STAT_FaceAR_LiveLink_PacketsRecv");
          in_stack_fffffffffffffe40 = L"Face AR";
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsRecv>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_PacketsRecv
                              ,*pFVar12,L"LiveLink Packets Recv","STATGROUP_FaceAR",
                              "STATCAT_Advanced",L"Face AR",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar2 = *(FName *)FVar15;
        FVar31 = FVar2.ComparisonIndex.Value;
        uVar10 = FVar2.Number;
        local_120 = FVar31.Value;
        uStack_11c = uVar10;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar16 == (FThreadStats *)0x0) {
            pFVar17 = FThreadStatsPool::Get();
            pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
          }
          local_e0.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
          local_e0.StatData.Pad[0] = '\x01';
          local_e0.StatData.Pad[1] = '\0';
          local_e0.StatData.Pad[2] = '\0';
          local_e0.StatData.Pad[3] = '\0';
          local_e0.StatData.Pad[4] = '\0';
          local_e0.StatData.Pad[5] = '\0';
          local_e0.StatData.Pad[6] = '\0';
          local_e0.StatData.Pad[7] = '\0';
          local_res20 = FVar2;
          local_e0.NameAndInfo.Index.Value = FVar31.Value;
          FThreadStats::AddStatMessage(pFVar16,&local_e0);
          FStatsTrace::Add(&local_res20,1);
          if (pFVar16->ScopeCount == 0) {
            FThreadStats::Flush(pFVar16,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar16,false,false);
          }
        }
      }
      FVar18 = StatPtr_STAT_FaceAR_Total_LiveLink_PacketsRecv;
      if (StatPtr_STAT_FaceAR_Total_LiveLink_PacketsRecv ==
          (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsRecv>)0x0) {
        pFVar12 = ::FName::FName(&local_88,"STAT_FaceAR_Total_LiveLink_PacketsRecv");
        in_stack_fffffffffffffe40 = L"Face AR";
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsRecv>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_FaceAR_Total_LiveLink_PacketsRecv,*pFVar12,
                            L"Total LiveLink Packets Recv","STATGROUP_FaceAR","STATCAT_Advanced",
                            L"Face AR",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar18;
      FVar31 = FVar2.ComparisonIndex.Value;
      uVar10 = FVar2.Number;
      local_118 = FVar31.Value;
      uStack_114 = uVar10;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_d0.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
        local_d0.StatData.Pad[0] = '\x01';
        local_d0.StatData.Pad[1] = '\0';
        local_d0.StatData.Pad[2] = '\0';
        local_d0.StatData.Pad[3] = '\0';
        local_d0.StatData.Pad[4] = '\0';
        local_d0.StatData.Pad[5] = '\0';
        local_d0.StatData.Pad[6] = '\0';
        local_d0.StatData.Pad[7] = '\0';
        local_res20 = FVar2;
        local_d0.NameAndInfo.Index.Value = FVar31.Value;
        FThreadStats::AddStatMessage(pFVar16,&local_d0);
        FStatsTrace::Add(&local_res20,1);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
      auVar32 = (uchar  [8])(longlong)(int)local_184;
      if ((auVar32 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar19 = StatPtr_STAT_FaceAR_LiveLink_BytesRecv;
        if (StatPtr_STAT_FaceAR_LiveLink_BytesRecv ==
            (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesRecv>)0x0) {
          pFVar12 = ::FName::FName(&local_80,"STAT_FaceAR_LiveLink_BytesRecv");
          in_stack_fffffffffffffe40 = L"Face AR";
          FVar19 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesRecv>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_BytesRecv,
                              *pFVar12,L"LiveLink Bytes Recv","STATGROUP_FaceAR","STATCAT_Advanced",
                              L"Face AR",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar19;
        FVar31 = FVar2.ComparisonIndex.Value;
        uVar10 = FVar2.Number;
        local_110 = FVar31.Value;
        uStack_10c = uVar10;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar16 == (FThreadStats *)0x0) {
            pFVar17 = FThreadStatsPool::Get();
            pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
          }
          local_c0.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
          local_res20 = FVar2;
          local_c0.StatData.Pad = auVar32;
          local_c0.NameAndInfo.Index.Value = FVar31.Value;
          FThreadStats::AddStatMessage(pFVar16,&local_c0);
          FStatsTrace::Add(&local_res20,(long64)auVar32);
          if (pFVar16->ScopeCount == 0) {
            FThreadStats::Flush(pFVar16,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar16,false,false);
          }
        }
      }
      auVar32 = (uchar  [8])(longlong)(int)local_184;
      if (auVar32 != (uchar  [8])0x0) {
        FVar20 = StatPtr_STAT_FaceAR_Total_LiveLink_BytesRecv;
        if (StatPtr_STAT_FaceAR_Total_LiveLink_BytesRecv ==
            (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesRecv>)0x0) {
          pFVar12 = ::FName::FName(&local_78,"STAT_FaceAR_Total_LiveLink_BytesRecv");
          in_stack_fffffffffffffe40 = L"Face AR";
          FVar20 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesRecv>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FaceAR_Total_LiveLink_BytesRecv,*pFVar12,
                              L"Total LiveLink Bytes Recv","STATGROUP_FaceAR","STATCAT_Advanced",
                              L"Face AR",true,false,ST_int64,false,false,MCR_Invalid);
        }
        FVar2 = *(FName *)FVar20;
        FVar31 = FVar2.ComparisonIndex.Value;
        uVar10 = FVar2.Number;
        local_108 = FVar31.Value;
        uStack_104 = uVar10;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar16 == (FThreadStats *)0x0) {
            pFVar17 = FThreadStatsPool::Get();
            pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
          }
          local_b0.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
          local_res20 = FVar2;
          local_b0.StatData.Pad = auVar32;
          local_b0.NameAndInfo.Index.Value = FVar31.Value;
          FThreadStats::AddStatMessage(pFVar16,&local_b0);
          FStatsTrace::Add(&local_res20,(long64)auVar32);
          if (pFVar16->ScopeCount == 0) {
            FThreadStats::Flush(pFVar16,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar16,false,false);
          }
        }
      }
      local_170.Data = (uchar *)(this->RecvBuffer).AllocatorInstance.Data;
      local_158 = 0;
      local_150 = 0x18;
      local_14c = 1;
      local_170.NumBytes = local_184;
      local_170.bHasOverflowed = false;
      if (((int)local_184 < 1) ||
         (local_170.CurrentOffset = 1,
         (FScriptContainerElement)*local_170.Data != (FScriptContainerElement)0x6)) {
        if (5 < (byte)LogAppleARKitFace._0_1_) {
          pFVar21 = &::LOG_Static;
          goto LAB_14d28c080;
        }
      }
      else {
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        ::operator>>(&local_170,&local_148);
        FVar22.Data = (FScriptContainerElement *)L"";
        if (local_148.Data.ArrayNum != 0) {
          FVar22.Data = local_148.Data.AllocatorInstance.Data;
        }
        pFVar12 = ::FName::FName(&local_70,(wchar_t *)FVar22.Data);
        local_e8 = *pFVar12;
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        ::operator>>(&local_170,&local_138);
        FVar22.Data = (FScriptContainerElement *)L"";
        if (local_138.Data.ArrayNum != 0) {
          FVar22.Data = local_138.Data.AllocatorInstance.Data;
        }
        pFVar12 = ::FName::FName(local_68,(wchar_t *)FVar22.Data);
        FVar2 = *pFVar12;
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        puVar7 = local_170.Data;
        local_res20.ComparisonIndex.Value._0_1_ = local_170.bHasOverflowed;
        iVar28 = local_170.CurrentOffset;
        if (local_170.bHasOverflowed == false) {
          iVar25 = local_170.CurrentOffset + 4;
          if (local_170.NumBytes < iVar25) goto LAB_14d28c03e;
          local_188 = CONCAT31(CONCAT21(CONCAT11(*(FScriptContainerElement *)
                                                  (local_170.Data + local_170.CurrentOffset),
                                                 *(FScriptContainerElement *)
                                                  (local_170.Data + (local_170.CurrentOffset + 1))),
                                        *(FScriptContainerElement *)
                                         (local_170.Data + (local_170.CurrentOffset + 2))),
                               *(FScriptContainerElement *)
                                (local_170.Data + (local_170.CurrentOffset + 3)));
          iVar28 = iVar25;
          if (local_170.NumBytes < local_170.CurrentOffset + 8) goto LAB_14d28c03e;
          iVar1 = local_170.CurrentOffset + 0xc;
          fVar27 = (float)CONCAT31(CONCAT21(CONCAT11(*(FScriptContainerElement *)
                                                      (local_170.Data + iVar25),
                                                     *(FScriptContainerElement *)
                                                      (local_170.Data + (longlong)iVar25 + 1)),
                                            *(FScriptContainerElement *)
                                             (local_170.Data + (longlong)iVar25 + 2)),
                                   *(FScriptContainerElement *)
                                    (local_170.Data + (longlong)iVar25 + 3));
          local_180 = fVar27;
          iVar28 = local_170.CurrentOffset + 8;
          if (local_170.NumBytes < iVar1) goto LAB_14d28c03e;
          iVar26 = local_170.CurrentOffset + 0x10;
          local_150 = CONCAT31(CONCAT21(CONCAT11(*(FScriptContainerElement *)
                                                  (local_170.Data + (longlong)iVar25 + 4),
                                                 *(FScriptContainerElement *)
                                                  (local_170.Data + (local_170.CurrentOffset + 9))),
                                        *(FScriptContainerElement *)
                                         (local_170.Data + (local_170.CurrentOffset + 10))),
                               *(FScriptContainerElement *)
                                (local_170.Data + (local_170.CurrentOffset + 0xb)));
          iVar28 = iVar1;
          if (local_170.NumBytes < iVar26) goto LAB_14d28c03e;
          iVar28 = local_170.CurrentOffset + 0x11;
          fStack_174 = fVar27;
          if (::FFrameTime::MaxSubframe <= fVar27) {
            fStack_174 = ::FFrameTime::MaxSubframe;
          }
          if (fStack_174 <= 0.0) {
            fStack_174 = 0.0;
          }
          local_158 = CONCAT44(fStack_174,local_188);
          local_14c = CONCAT31(CONCAT21(CONCAT11(*(FScriptContainerElement *)
                                                  (local_170.Data + iVar1),
                                                 *(FScriptContainerElement *)
                                                  (local_170.Data + (longlong)iVar1 + 1)),
                                        *(FScriptContainerElement *)
                                         (local_170.Data + (longlong)iVar1 + 2)),
                               *(FScriptContainerElement *)(local_170.Data + (longlong)iVar1 + 3));
          local_178 = local_188;
          local_170.CurrentOffset = iVar1;
          if ((iVar28 <= local_170.NumBytes) &&
             (*(FScriptContainerElement *)(local_170.Data + iVar26) == (FScriptContainerElement)0x3d
             )) {
            bVar30 = 0;
            bVar33 = false;
            bVar5 = false;
            do {
              if (bVar33) break;
              local_180 = 0.0;
              if (local_170.NumBytes < iVar28 + 4) {
                bVar5 = true;
                bVar33 = true;
              }
              else {
                local_180 = (float)CONCAT31(CONCAT21(CONCAT11(*(FScriptContainerElement *)
                                                               (puVar7 + iVar28),
                                                              *(FScriptContainerElement *)
                                                               (puVar7 + (longlong)iVar28 + 1)),
                                                     *(FScriptContainerElement *)
                                                      (puVar7 + (longlong)iVar28 + 2)),
                                            *(FScriptContainerElement *)
                                             (puVar7 + (longlong)iVar28 + 3));
                iVar28 = iVar28 + 4;
              }
              local_res20.ComparisonIndex.Value._0_1_ = bVar30;
              TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
              ::Emplace<enum_EARFaceBlendShape,float_const_&>
                        (&this->BlendShapes,(EARFaceBlendShape *)&local_res20,&local_180);
              bVar30 = bVar30 + 1;
            } while (bVar30 < 0x3d);
            FVar8 = local_e8;
            FVar24 = local_100;
            if (bVar5) {
              if (5 < (byte)LogAppleARKitFace._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAppleARKitFace);
              }
            }
            else {
              pTVar3 = (this->Source).WeakReferenceCount.ReferenceController;
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                aVar6 = pTVar3->SharedReferenceCount;
                do {
                  if (aVar6 == (atomic<int>)0x0) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)0x0);
                    goto LAB_14d28c00f;
                  }
                  LOCK();
                  aVar11 = pTVar3->SharedReferenceCount;
                  bVar33 = aVar6 == aVar11;
                  if (bVar33) {
                    pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
                    aVar11 = aVar6;
                  }
                  UNLOCK();
                  aVar6 = aVar11;
                } while (!bVar33);
                pIVar4 = (this->Source).Object;
                if ((pIVar4 != (ILiveLinkSourceARKit *)0x0) &&
                   (cVar9 = (**(code **)(*(longlong *)&pIVar4->field_0x8 + 0x28))
                                      (&pIVar4->field_0x8), cVar9 != '\0')) {
                  (**(code **)(*(longlong *)pIVar4 + 8))
                            (pIVar4,FVar2,&local_158,&this->BlendShapes,FVar8);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
            }
            goto LAB_14d28c00f;
          }
        }
        else {
LAB_14d28c03e:
          local_170.CurrentOffset = iVar28;
          fStack_174 = fVar27;
          if (::FFrameTime::MaxSubframe <= fVar27) {
            fStack_174 = ::FFrameTime::MaxSubframe;
          }
          if (fStack_174 <= 0.0) {
            fStack_174 = 0.0;
          }
          local_158 = CONCAT44(fStack_174,local_188);
          local_178 = local_188;
        }
        if (5 < (byte)LogAppleARKitFace._0_1_) {
          pFVar21 = &::LOG_Static;
LAB_14d28c080:
          UE::Logging::Private::BasicLog<6>(pFVar21,(FLogCategoryBase *)&LogAppleARKitFace);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
      goto LAB_14d28c0a5;
    }
LAB_14d28c00f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    cVar9 = (**(code **)(this->RecvSocket->_padding_ + 0x40))(this->RecvSocket,&local_17c);
  } while( true );
}

