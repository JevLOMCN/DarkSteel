// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 7

// FAppleARKitLiveLinkRemotePublisher @ 14d283360

FAppleARKitLiveLinkRemotePublisher * __thiscall
FAppleARKitLiveLinkRemotePublisher::FAppleARKitLiveLinkRemotePublisher
          (FAppleARKitLiveLinkRemotePublisher *this,FString *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  this->_padding_ = (longlong)&___7FAppleARKitLiveLinkRemotePublisher__6B_;
  ::FString::FString(&this->RemoteIp,param_1);
  piVar1 = &(this->SendBuffer).Data.ArrayMax;
  this->SendSocket = (FSocket *)0x0;
  (this->SendBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SendBuffer).Data.ArrayNum;
  *piVar1 = 0;
  (this->SendBuffer).NumBytes = 0;
  (this->SendBuffer).bHasOverflowed = false;
  *piVar2 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x506,(ForAnyElementType *)&this->SendBuffer,0,piVar1);
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x506,(ForAnyElementType *)&this->SendBuffer,piVar2,piVar1);
  memset((this->SendBuffer).Data.AllocatorInstance.Data + iVar3,0,0x506);
  return this;
}

// FAppleARKitLiveLinkRemotePublisher @ 14d283420

FAppleARKitLiveLinkRemotePublisher * __thiscall
FAppleARKitLiveLinkRemotePublisher::FAppleARKitLiveLinkRemotePublisher
          (FAppleARKitLiveLinkRemotePublisher *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = &(this->SendBuffer).Data.ArrayMax;
  piVar2 = &(this->SendBuffer).Data.ArrayNum;
  this->_padding_ = (longlong)&___7FAppleARKitLiveLinkRemotePublisher__6B_;
  (this->RemoteIp).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteIp).Data.ArrayNum = 0;
  (this->RemoteIp).Data.ArrayMax = 0;
  this->SendSocket = (FSocket *)0x0;
  (this->SendBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SendBuffer).NumBytes = 0;
  (this->SendBuffer).bHasOverflowed = false;
  *piVar1 = 0;
  *piVar2 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x506,(ForAnyElementType *)&this->SendBuffer,0,piVar1);
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x506,(ForAnyElementType *)&this->SendBuffer,piVar2,piVar1);
  memset((this->SendBuffer).Data.AllocatorInstance.Data + iVar3,0,0x506);
  return this;
}

// ~FAppleARKitLiveLinkRemotePublisher @ 14d2841a0

void __thiscall
FAppleARKitLiveLinkRemotePublisher::~FAppleARKitLiveLinkRemotePublisher
          (FAppleARKitLiveLinkRemotePublisher *this)

{
  FScriptContainerElement *pFVar1;
  ISocketSubsystem *pIVar2;
  FName local_res8 [4];
  
  this->_padding_ = (longlong)&___7FAppleARKitLiveLinkRemotePublisher__6B_;
  if (this->SendSocket != (FSocket *)0x0) {
    (**(code **)(this->SendSocket->_padding_ + 0x10))();
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
    pIVar2 = ISocketSubsystem::Get(local_res8);
    (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,this->SendSocket);
  }
  pFVar1 = (this->SendBuffer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemoteIp).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetSendAddress @ 14d287b90

TSharedRef<FInternetAddr,1> * __thiscall
FAppleARKitLiveLinkRemotePublisher::GetSendAddress
          (FAppleARKitLiveLinkRemotePublisher *this,
          TSharedRef<FInternetAddr,1> *__return_storage_ptr__)

{
  int iVar1;
  ISocketSubsystem *pIVar2;
  wchar_t *pwVar3;
  UClass *this_00;
  int iVar4;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar2 = ISocketSubsystem::Get(&local_res8);
  (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,__return_storage_ptr__);
  iVar1 = (this->RemoteIp).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    pwVar3 = FCommandLine::Get();
    FParse::Value(pwVar3,L"LiveLinkRemoteIp=",&this->RemoteIp,true,(wchar_t **)0x0);
  }
  iVar1 = (this->RemoteIp).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    this_00 = Z_Construct_UClass_UAppleARKitSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    iVar1 = UAppleARKitSettings::GetLiveLinkPublishingPort
                      ((UAppleARKitSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr);
    (**(code **)((longlong)*__return_storage_ptr__->Object + 0x28))
              (__return_storage_ptr__->Object,iVar1);
    local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
    if ((this->RemoteIp).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(this->RemoteIp).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*__return_storage_ptr__->Object + 0x10))
              (__return_storage_ptr__->Object,pwVar3,&local_res8);
  }
  return __return_storage_ptr__;
}

// InitSendSocket @ 14d288420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAppleARKitLiveLinkRemotePublisher::InitSendSocket(FAppleARKitLiveLinkRemotePublisher *this)

{
  code *pcVar1;
  char cVar2;
  FNameEntryId FVar3;
  ISocketSubsystem *pIVar4;
  undefined8 uVar5;
  undefined4 extraout_var;
  FSocket *pFVar6;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_res20 [8];
  TSharedRef<FInternetAddr,1> local_48;
  FString local_38;
  
  GetSendAddress(this,&local_48);
  cVar2 = (**(code **)((longlong)*local_48.Object + 0x98))();
  if (cVar2 != '\0') {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pIVar4 = ISocketSubsystem::Get(&local_res10);
    pcVar1 = *(code **)(pIVar4->_padding_ + 0x18);
    uVar5 = (**(code **)((longlong)*local_48.Object + 0xa8))(local_48.Object,local_res20);
    ::FString::FString(&local_38,L"FAppleARKitLiveLinkRemotePublisher socket");
    FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
    local_res1c = 0;
    pFVar6 = (FSocket *)(*pcVar1)(pIVar4,&local_res18,&local_38,uVar5);
    this->SendSocket = pFVar6;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->SendSocket->_padding_ + 0xf0))(this->SendSocket,1);
    (**(code **)(this->SendSocket->_padding_ + 0xa0))(this->SendSocket,1);
    if (4 < (byte)LogAppleARKitFace._0_1_) {
      (**(code **)((longlong)*local_48.Object + 0x80))(local_48.Object,&local_38,1);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKitFace);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar6 = this->SendSocket;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return pFVar6 != (FSocket *)0x0;
}

// PublishBlendShapes @ 14d289130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAppleARKitLiveLinkRemotePublisher::PublishBlendShapes
          (FAppleARKitLiveLinkRemotePublisher *this,FName param_1,FQualifiedFrameTime *param_2,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *param_3,FName param_4)

{
  FNboSerializeToBuffer *pFVar1;
  uint *puVar2;
  float fVar3;
  FScriptContainerElement FVar4;
  FName FVar5;
  FSocket *pFVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_Remote_PublishLiveLink> FVar18;
  TSharedRef<FInternetAddr,1> *pTVar19;
  ISocketSubsystem *this_00;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsSent> FVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsSent> FVar23;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesSent> FVar24;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesSent> FVar25;
  undefined1 *puVar26;
  FNameEntryId FVar27;
  byte *pbVar28;
  byte bVar29;
  uint uVar30;
  ulonglong uVar31;
  uchar auVar32 [8];
  FName local_res10;
  uint local_134;
  uint local_130;
  uint uStack_12c;
  FColor_u_0 local_128 [2];
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FString local_98;
  FString local_88;
  TSharedRef<FInternetAddr,1> local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  if (this->SendSocket == (FSocket *)0x0) {
    return;
  }
  FVar18 = StatPtr_STAT_FaceAR_Remote_PublishLiveLink;
  local_res10 = param_1;
  if (StatPtr_STAT_FaceAR_Remote_PublishLiveLink ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Remote_PublishLiveLink>)0x0) {
    pFVar17 = ::FName::FName(&local_68,"STAT_FaceAR_Remote_PublishLiveLink");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_Remote_PublishLiveLink>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Remote_PublishLiveLink,
                        *pFVar17,L"Publish Remote LiveLink","STATGROUP_FaceAR","STATCAT_Advanced",
                        L"Face AR",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar18;
  bVar9 = false;
  bVar10 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar11 = false;
  bVar12 = false;
  FVar27 = FVar5.ComparisonIndex.Value;
  uVar15 = FVar5.Number;
  if ((FVar27.Value == 0) && (uVar15 == 0)) {
LAB_14d2892aa:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    local_118 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar27.Value;
        local_120.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                   ,0x163);
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d2892aa;
    local_130 = FVar27.Value;
    uStack_12c = uVar15;
    local_118 = FVar5;
    FThreadStats::AddMessage(FVar5,CycleScopeStart);
    bVar11 = true;
  }
  pFVar1 = &this->SendBuffer;
  (this->SendBuffer).NumBytes = 0;
  (this->SendBuffer).bHasOverflowed = false;
  iVar16 = (this->SendBuffer).Data.ArrayNum;
  if (iVar16 == 0) {
    (this->SendBuffer).bHasOverflowed = true;
  }
  else {
    (this->SendBuffer).NumBytes = 1;
    if ((iVar16 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement)0x6;
  }
  ::FName::ToString(&param_4,&local_98);
  ::operator<<(pFVar1,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&local_res10,&local_88);
  ::operator<<(pFVar1,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((this->SendBuffer).bHasOverflowed == false) {
    uVar15 = (this->SendBuffer).NumBytes;
    uVar30 = (this->SendBuffer).Data.ArrayNum;
    if (uVar30 < uVar15 + 4) goto LAB_14d2894ef;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Time).FrameNumber.Value + 3);
    uVar14 = 0;
    if ((int)uVar15 < (int)uVar30) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar15] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 1;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Time).FrameNumber.Value + 2);
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 2;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Time).FrameNumber.Value + 1);
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 3;
    FVar4 = *(FScriptContainerElement *)&(param_2->Time).FrameNumber.Value;
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    puVar2 = &(this->SendBuffer).NumBytes;
    *puVar2 = *puVar2 + 4;
  }
  else {
LAB_14d2894ef:
    (this->SendBuffer).bHasOverflowed = true;
  }
  fVar3 = (param_2->Time).SubFrame;
  if ((this->SendBuffer).bHasOverflowed == false) {
    uVar15 = (this->SendBuffer).NumBytes;
    uVar30 = (this->SendBuffer).Data.ArrayNum;
    if (uVar30 < uVar15 + 4) goto LAB_14d28968a;
    uVar14 = 0;
    if ((int)uVar15 < (int)uVar30) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar15] = SUB41((uint)fVar3 >> 0x18,0);
    uVar30 = (this->SendBuffer).NumBytes + 1;
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = SUB41((uint)fVar3 >> 0x10,0);
    uVar30 = (this->SendBuffer).NumBytes + 2;
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = SUB41((uint)fVar3 >> 8,0);
    uVar30 = (this->SendBuffer).NumBytes + 3;
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = SUB41(fVar3,0);
    puVar2 = &(this->SendBuffer).NumBytes;
    *puVar2 = *puVar2 + 4;
  }
  else {
LAB_14d28968a:
    (this->SendBuffer).bHasOverflowed = true;
  }
  if ((this->SendBuffer).bHasOverflowed == false) {
    uVar15 = (this->SendBuffer).NumBytes;
    uVar30 = (this->SendBuffer).Data.ArrayNum;
    if (uVar30 < uVar15 + 4) goto LAB_14d28981c;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Rate).Numerator + 3);
    uVar14 = 0;
    if ((int)uVar15 < (int)uVar30) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar15] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 1;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Rate).Numerator + 2);
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 2;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Rate).Numerator + 1);
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 3;
    FVar4 = *(FScriptContainerElement *)&(param_2->Rate).Numerator;
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    puVar2 = &(this->SendBuffer).NumBytes;
    *puVar2 = *puVar2 + 4;
  }
  else {
LAB_14d28981c:
    (this->SendBuffer).bHasOverflowed = true;
  }
  if ((this->SendBuffer).bHasOverflowed == false) {
    uVar15 = (this->SendBuffer).NumBytes;
    uVar30 = (this->SendBuffer).Data.ArrayNum;
    if (uVar30 < uVar15 + 4) goto LAB_14d2899ae;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Rate).Denominator + 3);
    uVar14 = 0;
    if ((int)uVar15 < (int)uVar30) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar15] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 1;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Rate).Denominator + 2);
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 2;
    FVar4 = *(FScriptContainerElement *)((longlong)&(param_2->Rate).Denominator + 1);
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    uVar30 = (this->SendBuffer).NumBytes + 3;
    FVar4 = *(FScriptContainerElement *)&(param_2->Rate).Denominator;
    uVar15 = 0;
    if ((int)uVar30 < (this->SendBuffer).Data.ArrayNum) {
      uVar15 = ~uVar30 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (pFVar1->Data).AllocatorInstance.Data[(int)uVar30] = FVar4;
    puVar2 = &(this->SendBuffer).NumBytes;
    *puVar2 = *puVar2 + 4;
  }
  else {
LAB_14d2899ae:
    (this->SendBuffer).bHasOverflowed = true;
  }
  if ((*(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34 != 0x3d) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FaceBlendShapes.Num() == BlendShapeCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                          ,0x16b,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->SendBuffer).bHasOverflowed == false) {
    uVar15 = (this->SendBuffer).NumBytes;
    uVar30 = (this->SendBuffer).Data.ArrayNum;
    if (uVar15 + 1 <= uVar30) {
      (this->SendBuffer).NumBytes = uVar15 + 1;
      uVar14 = 0;
      if ((int)uVar15 < (int)uVar30) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (this->SendBuffer).Data.AllocatorInstance.Data[(int)uVar15] = (FScriptContainerElement)0x3d;
      goto LAB_14d289a8f;
    }
  }
  (this->SendBuffer).bHasOverflowed = true;
LAB_14d289a8f:
  bVar29 = 0;
  uVar31 = 0;
  do {
    if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
      puVar26 = &param_3->field_0x38;
      if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
        puVar26 = *(undefined1 **)&param_3->field_0x40;
      }
      iVar16 = *(int *)(puVar26 + (*(int *)&param_3->field_0x48 - 1 & uVar31) * 4);
      if (iVar16 != -1) {
        do {
          pbVar28 = (byte *)((longlong)iVar16 * 0x10 + *(longlong *)param_3);
          if (*pbVar28 == bVar29) {
            if (pbVar28 != (byte *)0x0) goto LAB_14d289b03;
            goto LAB_14d289add;
          }
          iVar16 = *(int *)(pbVar28 + 8);
        } while (iVar16 != -1);
      }
    }
    pbVar28 = (byte *)0x0;
LAB_14d289add:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x27b,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_14d289b03:
    local_130 = *(uint *)(pbVar28 + 4);
    ::operator<<(&this->SendBuffer,&local_130);
    FVar5 = local_118;
    bVar29 = bVar29 + 1;
    uVar31 = uVar31 + 1;
    if (0x3c < bVar29) {
      uVar15 = (this->SendBuffer).NumBytes;
      if ((0x506 < uVar15) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("SourceBufferSize <= MAX_BLEND_SHAPE_PACKET_SIZE && \"Max packet size for face blends was exceeded\""
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSource.cpp"
                              ,0x175,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = this->SendSocket;
      local_134 = 0;
      pcVar8 = *(code **)(pFVar6->_padding_ + 0x58);
      pTVar19 = GetSendAddress(this,&local_78);
      cVar13 = (*pcVar8)(pFVar6,(this->SendBuffer).Data.AllocatorInstance.Data,uVar15,&local_134,
                         pTVar19->Object);
      if ((cVar13 == '\0') || (local_134 != uVar15)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        local_110.ComparisonIndex.Value = 0;
        local_110.Number = 0;
        this_00 = ISocketSubsystem::Get(&local_110);
        if (5 < (byte)LogAppleARKitFace._0_1_) {
          ISocketSubsystem::GetSocketError(this_00,SE_GET_LAST_ERROR_CODE);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAppleARKitFace);
        }
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar20 = StatPtr_STAT_FaceAR_LiveLink_PacketsSent;
        if (StatPtr_STAT_FaceAR_LiveLink_PacketsSent ==
            (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsSent>)0x0) {
          pFVar17 = ::FName::FName(&local_60,"STAT_FaceAR_LiveLink_PacketsSent");
          FVar20 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_PacketsSent>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_PacketsSent
                              ,*pFVar17,L"LiveLink Packets Sent","STATGROUP_FaceAR",
                              "STATCAT_Advanced",L"Face AR",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar7 = *(FName *)FVar20;
        if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar21 == (FThreadStats *)0x0) {
            pFVar22 = FThreadStatsPool::Get();
            pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
          }
          local_d8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
          local_d8.StatData.Pad[0] = '\x01';
          local_d8.StatData.Pad[1] = '\0';
          local_d8.StatData.Pad[2] = '\0';
          local_d8.StatData.Pad[3] = '\0';
          local_d8.StatData.Pad[4] = '\0';
          local_d8.StatData.Pad[5] = '\0';
          local_d8.StatData.Pad[6] = '\0';
          local_d8.StatData.Pad[7] = '\0';
          local_f8 = FVar7;
          local_d8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar21,&local_d8);
          FStatsTrace::Add(&local_f8,1);
          if (pFVar21->ScopeCount == 0) {
            FThreadStats::Flush(pFVar21,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar21,false,false);
          }
        }
      }
      FVar23 = StatPtr_STAT_FaceAR_Total_LiveLink_PacketsSent;
      if (StatPtr_STAT_FaceAR_Total_LiveLink_PacketsSent ==
          (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsSent>)0x0) {
        pFVar17 = ::FName::FName(&local_58,"STAT_FaceAR_Total_LiveLink_PacketsSent");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_PacketsSent>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_FaceAR_Total_LiveLink_PacketsSent,*pFVar17,
                            L"Total LiveLink Packets Sent","STATGROUP_FaceAR","STATCAT_Advanced",
                            L"Face AR",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar7 = *(FName *)FVar23;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar21 == (FThreadStats *)0x0) {
          pFVar22 = FThreadStatsPool::Get();
          pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
        }
        local_c8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
        local_c8.StatData.Pad[0] = '\x01';
        local_c8.StatData.Pad[1] = '\0';
        local_c8.StatData.Pad[2] = '\0';
        local_c8.StatData.Pad[3] = '\0';
        local_c8.StatData.Pad[4] = '\0';
        local_c8.StatData.Pad[5] = '\0';
        local_c8.StatData.Pad[6] = '\0';
        local_c8.StatData.Pad[7] = '\0';
        local_f0 = FVar7;
        local_c8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar21,&local_c8);
        FStatsTrace::Add(&local_f0,1);
        if (pFVar21->ScopeCount == 0) {
          FThreadStats::Flush(pFVar21,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar21,false,false);
        }
      }
      auVar32 = (uchar  [8])(longlong)(int)local_134;
      if ((auVar32 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar24 = StatPtr_STAT_FaceAR_LiveLink_BytesSent;
        if (StatPtr_STAT_FaceAR_LiveLink_BytesSent ==
            (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesSent>)0x0) {
          pFVar17 = ::FName::FName(&local_50,"STAT_FaceAR_LiveLink_BytesSent");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_LiveLink_BytesSent>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_LiveLink_BytesSent,
                              *pFVar17,L"LiveLink Bytes Sent","STATGROUP_FaceAR","STATCAT_Advanced",
                              L"Face AR",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar7 = *(FName *)FVar24;
        if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar21 == (FThreadStats *)0x0) {
            pFVar22 = FThreadStatsPool::Get();
            pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
          }
          local_b8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
          local_e8 = FVar7;
          local_b8.StatData.Pad = auVar32;
          local_b8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar21,&local_b8);
          FStatsTrace::Add(&local_e8,(long64)auVar32);
          if (pFVar21->ScopeCount == 0) {
            FThreadStats::Flush(pFVar21,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar21,false,false);
          }
        }
      }
      auVar32 = (uchar  [8])(longlong)(int)local_134;
      if (auVar32 != (uchar  [8])0x0) {
        FVar25 = StatPtr_STAT_FaceAR_Total_LiveLink_BytesSent;
        if (StatPtr_STAT_FaceAR_Total_LiveLink_BytesSent ==
            (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesSent>)0x0) {
          pFVar17 = ::FName::FName(local_48,"STAT_FaceAR_Total_LiveLink_BytesSent");
          FVar25 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_Total_LiveLink_BytesSent>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FaceAR_Total_LiveLink_BytesSent,*pFVar17,
                              L"Total LiveLink Bytes Sent","STATGROUP_FaceAR","STATCAT_Advanced",
                              L"Face AR",true,false,ST_int64,false,false,MCR_Invalid);
        }
        FVar7 = *(FName *)FVar25;
        if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar21 == (FThreadStats *)0x0) {
            pFVar22 = FThreadStatsPool::Get();
            pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
          }
          local_a8.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
          local_e0 = FVar7;
          local_a8.StatData.Pad = auVar32;
          local_a8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar21,&local_a8);
          FStatsTrace::Add(&local_e0,(long64)auVar32);
          if (pFVar21->ScopeCount == 0) {
            FThreadStats::Flush(pFVar21,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar21,false,false);
          }
        }
      }
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar5,CycleScopeEnd);
      }
      return;
    }
  } while( true );
}

// Shutdown @ 14d28b490

void __thiscall
FAppleARKitLiveLinkRemotePublisher::Shutdown(FAppleARKitLiveLinkRemotePublisher *this)

{
  return;
}

