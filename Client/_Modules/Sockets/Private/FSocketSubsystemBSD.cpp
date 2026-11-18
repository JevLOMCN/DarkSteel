// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 27

// CreateInternetAddr @ 14310d900

TSharedRef<FInternetAddr,1> * __thiscall
FSocketSubsystemBSD::CreateInternetAddr
          (FSocketSubsystemBSD *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__,
          FName param_1)

{
  FInternetAddrBSD *this_00;
  TRawPtrProxy<FInternetAddrBSD> local_res10;
  
  this_00 = ::operator_new(0x90);
  local_res10.Object = (FInternetAddrBSD *)0x0;
  if (this_00 != (FInternetAddrBSD *)0x0) {
    local_res10.Object = FInternetAddrBSD::FInternetAddrBSD(this_00,this,param_1);
  }
  TSharedRef<FInternetAddr,1>::TSharedRef<FInternetAddr,1><FInternetAddrBSD>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// CreateInternetAddr @ 14310d960

TSharedRef<FInternetAddr,1> * __thiscall
FSocketSubsystemBSD::CreateInternetAddr
          (FSocketSubsystemBSD *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__)

{
  FInternetAddrBSD *this_00;
  TRawPtrProxy<FInternetAddrBSD> local_res10 [3];
  
  this_00 = ::operator_new(0x90);
  local_res10[0].Object = (FInternetAddrBSD *)0x0;
  if (this_00 != (FInternetAddrBSD *)0x0) {
    local_res10[0].Object = (FInternetAddrBSD *)0x0;
    local_res10[0].Object = FInternetAddrBSD::FInternetAddrBSD(this_00,this,(FName)0x0);
  }
  TSharedRef<FInternetAddr,1>::TSharedRef<FInternetAddr,1><FInternetAddrBSD>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// CreateSocket @ 14310dba0

/* WARNING: Enum "Type": Some values do not have unique names */

FSocket * __thiscall
FSocketSubsystemBSD::CreateSocket
          (FSocketSubsystemBSD *this,FName *param_1,FString *param_2,FName *param_3)

{
  uint uVar1;
  uint uVar2;
  FNameEntryId FVar3;
  int af;
  FName *pFVar4;
  undefined4 extraout_var;
  SOCKET SVar5;
  FSocket *pFVar6;
  int protocol;
  FName local_res20;
  FName local_48;
  FString local_40;
  
  local_48 = *param_3;
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  if ((*param_3 != local_res20) &&
     (FLazyName::Resolve(&FNetworkProtocolTypes::IPv6), *param_3 != local_res20)) {
    pFVar4 = (FName *)(**(code **)(*(longlong *)this + 0x120))(this,&local_res20);
    local_48 = *pFVar4;
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
    if ((local_48 != local_res20) &&
       (FLazyName::Resolve(&FNetworkProtocolTypes::IPv6), local_48 != local_res20)) {
      if (2 < (byte)LogSockets._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      }
      return (FSocket *)0x0;
    }
  }
  uVar1 = (param_1->ComparisonIndex).Value;
  FVar3 = FNameEntryId::FromValidENamePostInit((EName)&local_res20);
  uVar2 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  protocol = 6;
  if (uVar1 == uVar2) {
    protocol = 0x11;
  }
  pFVar6 = (FSocket *)0x0;
  af = (**(code **)(*(longlong *)this + 0x128))(this,&local_48);
  SVar5 = socket(af,(uVar1 == uVar2) + 1,protocol);
  if (((SVar5 == 0xffffffffffffffff) ||
      (pFVar6 = (FSocket *)
                (**(code **)(*(longlong *)this + 0x160))
                          (this,SVar5,(uVar1 != uVar2) + '\x01',param_2,&local_48),
      pFVar6 == (FSocket *)0x0)) && (2 < (byte)LogSockets._0_1_)) {
    ::FName::ToString(param_1,&local_40);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return pFVar6;
}

// CreateSocket @ 14310ddd0

FSocket * __thiscall
FSocketSubsystemBSD::CreateSocket
          (FSocketSubsystemBSD *this,FName *param_1,FString *param_2,bool param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  FSocket *pFVar3;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)this;
  uVar2 = (**(code **)(lVar1 + 0x120))
                    (this,local_res8,param_2,CONCAT71(in_register_00000089,param_3));
  pFVar3 = (FSocket *)(**(code **)(lVar1 + 0x18))(this,param_1,param_2,uVar2);
  return pFVar3;
}

// DestroySocket @ 14310e7a0

void __thiscall FSocketSubsystemBSD::DestroySocket(FSocketSubsystemBSD *this,FSocket *param_1)

{
  if (param_1 != (FSocket *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014310e7b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1->_padding_)(param_1,1);
    return;
  }
  return;
}

// GetAddressFromString @ 14310f7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014310f886) */
/* WARNING: Removing unreachable block (ram,0x00014310f8b3) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FInternetAddr,1> * __thiscall
FSocketSubsystemBSD::GetAddressFromString
          (FSocketSubsystemBSD *this,TSharedPtr<FInternetAddr,1> *__return_storage_ptr__,
          FString *param_1)

{
  ushort uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInternetAddr *pFVar3;
  code *pcVar4;
  ISocketSubsystem *this_00;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  ESocketErrors EVar8;
  size_t sVar9;
  longlong lVar10;
  TSharedPtr<FInternetAddr,1> *pTVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  atomic<int> *paVar15;
  wchar_t *_Str;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_1c8 [32];
  ESocketErrors local_1a8;
  undefined4 uStack_1a4;
  FString *local_198;
  undefined8 *local_190;
  ISocketSubsystem *local_188;
  undefined1 local_180 [8];
  TReferenceControllerBase<1> *local_178;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar17 = (param_1->Data).AllocatorInstance.Data;
  for (pFVar13 = pFVar17; pFVar13 != pFVar17 + (longlong)(param_1->Data).ArrayNum * 2;
      pFVar13 = pFVar13 + 2) {
    if (*(short *)pFVar13 == 0x3a) {
      iVar7 = (int)((longlong)pFVar13 - (longlong)pFVar17 >> 1);
      goto LAB_14310f858;
    }
  }
  iVar7 = -1;
LAB_14310f858:
  uVar6 = 2;
  local_190 = (undefined8 *)(local_168 + 4);
  if (iVar7 != -1) {
    local_190 = &uStack_160;
    uVar6 = 0x17;
  }
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168._2_6_ = 0;
  local_168._0_2_ = uVar6;
  lVar10 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_198 = param_1;
  local_188 = (ISocketSubsystem *)this;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
      goto LAB_14310f9a4;
    }
  }
  sVar9 = wcslen(_Str);
  local_58 = (int)sVar9;
  uVar19 = local_58 + 1;
  FVar16.Data = (FScriptContainerElement *)0x0;
  if (0x80 < uVar19) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar19,1);
    FVar16.Data = local_68.Data;
  }
  lVar18 = (longlong)(int)uVar19;
  pFVar17 = local_e8;
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    pFVar17 = FVar16.Data;
  }
  bVar5 = false;
  lVar14 = lVar10;
  local_60 = pFVar17;
  if (0 < (int)uVar19) {
    do {
      uVar1 = *(ushort *)((longlong)_Str + lVar14 * 2);
      pFVar17[lVar14] = SUB21(uVar1,0);
      lVar14 = lVar14 + 1;
      bVar5 = (bool)(bVar5 | 0x7f < uVar1);
    } while (lVar14 < lVar18);
    if (bVar5) {
      do {
        if (0x7f < *(ushort *)((longlong)_Str + lVar10 * 2)) {
          pFVar17[lVar10] = (FScriptContainerElement)0x3f;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar18);
    }
  }
  if ((pFVar17 + lVar18 == (FScriptContainerElement *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedPtr<FInternetAddr,1> *)(*pcVar4)();
    return pTVar11;
  }
LAB_14310f9a4:
  iVar7 = inet_pton(uVar6,local_60,local_190);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  this_00 = local_188;
  if (iVar7 == 0) {
    EVar8 = (**(code **)(local_188->_padding_ + 0xb8))(local_188);
    if (2 < (byte)LogSockets._0_1_) {
      ISocketSubsystem::GetSocketError(this_00,EVar8);
      _local_1a8 = CONCAT44(uStack_1a4,EVar8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
    __return_storage_ptr__->Object = (FInternetAddr *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    puVar12 = (undefined8 *)(**(code **)(local_188->_padding_ + 0x90))(local_188,local_180);
    pTVar2 = (TReferenceControllerBase<1> *)puVar12[1];
    pFVar3 = (FInternetAddr *)*puVar12;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178);
    (**(code **)((longlong)*pFVar3 + 0xd0))(pFVar3,local_168);
    __return_storage_ptr__->Object = pFVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// GetAddressInfo @ 14310fab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FAddressInfoResult * __thiscall
FSocketSubsystemBSD::GetAddressInfo
          (FSocketSubsystemBSD *this,FAddressInfoResult *__return_storage_ptr__,wchar_t *param_1,
          wchar_t *param_2,EAddressInfoFlags param_3,FName param_4,ESocketType param_5)

{
  uint uVar1;
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  short *psVar4;
  code *pcVar5;
  EAddressInfoFlags EVar6;
  TConsoleVariableData<int> *pTVar7;
  ISocketSubsystem *pIVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  FString *this_00;
  size_t sVar14;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar15;
  FInternetAddrBSD *this_01;
  FInternetAddrBSD *pFVar16;
  undefined8 *puVar17;
  atomic<int> *paVar18;
  FAddressInfoResult *pFVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  ESocketErrors EVar22;
  uint uVar23;
  undefined1 auStack_928 [32];
  FScriptContainerElement *local_908;
  FScriptContainerElement *local_900;
  longlong local_8f8;
  longlong local_8f0;
  undefined8 local_8e8;
  longlong local_8d8;
  uint local_8d0;
  uint local_8cc;
  ISocketSubsystem *local_8c8;
  FAddressInfoResult *local_8c0;
  int local_8b8;
  FScriptContainerElement local_8b0 [4];
  undefined8 local_8ac;
  undefined4 local_8a4;
  undefined8 local_8a0;
  FInternetAddrBSD *local_898;
  TReferenceControllerBase<1> *local_890;
  TSharedRef<FInternetAddrBSD,1> local_888;
  TRawPtrProxy<FInternetAddrBSD> local_878;
  longlong local_870;
  uchar *local_868;
  int iStack_860;
  undefined4 uStack_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined1 local_828 [8];
  FString local_820;
  void *local_810 [3];
  TStringView<char8_t> local_7f8;
  FScriptContainerElement local_7e8 [128];
  ForAnyElementType local_768;
  FScriptContainerElement *local_760;
  int local_758;
  FScriptContainerElement local_748 [128];
  ForAnyElementType local_6c8;
  FScriptContainerElement *local_6c0;
  int local_6b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6a8;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_588;
  uchar local_468 [1040];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_928;
  lVar21 = 0;
  local_8d0 = 0;
  local_8c8 = (ISocketSubsystem *)this;
  local_8c0 = __return_storage_ptr__;
  ::FString::FString(&__return_storage_ptr__->QueryHostName,param_1);
  ::FString::FString(&__return_storage_ptr__->QueryServiceName,param_2);
  (__return_storage_ptr__->CanonicalNameResult).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar2 = &__return_storage_ptr__->Results;
  (__return_storage_ptr__->CanonicalNameResult).Data.ArrayNum = 0;
  (__return_storage_ptr__->CanonicalNameResult).Data.ArrayMax = 0;
  EVar22 = SE_NO_DATA;
  __return_storage_ptr__->ReturnCode = SE_NO_DATA;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Results).ArrayNum = 0;
  pTVar7 = CVarDisableIPv6.Ref;
  (__return_storage_ptr__->Results).ArrayMax = 0;
  if ((param_1 == (wchar_t *)0x0) && (param_2 == (wchar_t *)0x0)) {
    if ((byte)LogSockets._0_1_ < 3) {
      return __return_storage_ptr__;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    return __return_storage_ptr__;
  }
  local_8d8 = 0;
  bVar10 = IsInParallelGameThread();
  if (bVar10) {
LAB_14310fb8a:
    lVar13 = lVar21;
  }
  else {
    bVar10 = IsInGameThread();
    lVar13 = 4;
    if (bVar10) goto LAB_14310fb8a;
  }
  local_8b8 = *(int *)((longlong)pTVar7->ShadowedValue + lVar13);
  lVar13 = lVar21;
  if (param_2 != (wchar_t *)0x0) {
    local_8d0 = 2;
    this_00 = ::FString::FString(&local_820,param_2);
    bVar10 = ::FString::IsNumeric(this_00);
    lVar13 = 2;
    if (bVar10) {
      lVar21 = 1;
      local_8d0 = 2;
    }
  }
  if ((lVar13 != 0) &&
     (local_8d0 = 0, local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_820.Data.AllocatorInstance.Data);
  }
  pIVar8 = local_8c8;
  local_830 = 0;
  EVar6 = param_3 | NoResolveService;
  if ((char)lVar21 == '\0') {
    EVar6 = param_3;
  }
  local_8cc = (byte)((byte)EVar6 >> 6) & 0xffffff01;
  local_850 = 0;
  uStack_848 = 0;
  local_840 = 0;
  uStack_838 = 0;
  local_854 = (**(code **)(local_8c8->_padding_ + 0x128))(local_8c8,&param_4);
  local_858 = (**(code **)(pIVar8->_padding_ + 0x150))(pIVar8,EVar6);
  if (param_5 != SOCKTYPE_Unknown) {
    uVar12 = 6;
    if (param_5 == SOCKTYPE_Datagram) {
      uVar12 = 0x11;
    }
    local_850 = CONCAT44(uVar12,(param_5 == SOCKTYPE_Datagram) + 1);
  }
  local_6c8.Data = (FScriptContainerElement *)0x0;
  if (param_2 == (wchar_t *)0x0) {
    local_6c0 = (FScriptContainerElement *)0x0;
    local_6b8 = 0;
  }
  else {
    sVar14 = wcslen(param_2);
    local_6b8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2,(int)sVar14);
    uVar1 = local_6b8 + 1;
    uVar23 = uVar1;
    if (uVar1 < 0x81) {
      if (local_6c8.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_14310fcc1;
      }
    }
    else {
LAB_14310fcc1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6c8,0,uVar23,1);
    }
    local_6c0 = local_748;
    if (local_6c8.Data != (FScriptContainerElement *)0x0) {
      local_6c0 = local_6c8.Data;
    }
    UE::Core::Private::Convert((uchar *)local_6c0,uVar1,param_2,(int)sVar14 + 1);
  }
  pFVar3 = local_6c0;
  local_768.Data = (FScriptContainerElement *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    local_760 = (FScriptContainerElement *)0x0;
    local_758 = 0;
    pFVar19 = __return_storage_ptr__;
  }
  else {
    sVar14 = wcslen(param_1);
    local_758 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,(int)sVar14);
    uVar1 = local_758 + 1;
    uVar23 = uVar1;
    if (uVar1 < 0x81) {
      if (local_768.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_14310fd6a;
      }
    }
    else {
LAB_14310fd6a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_768,0,uVar23,1);
    }
    local_760 = local_7e8;
    if (local_768.Data != (FScriptContainerElement *)0x0) {
      local_760 = local_768.Data;
    }
    UE::Core::Private::Convert((uchar *)local_760,uVar1,param_1,(int)sVar14 + 1);
    pFVar19 = local_8c0;
  }
  iVar11 = getaddrinfo(local_760,pFVar3,&local_858,&local_8d8);
  if (local_768.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.Data);
  }
  if (local_6c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.Data);
  }
  if (iVar11 < 0x276e) {
    if (iVar11 == 0x276d) {
      EVar22 = SE_NOTINITIALISED;
      goto LAB_14310fea2;
    }
    if (iVar11 == 0) {
      EVar22 = SE_NO_ERROR;
      goto LAB_14310fea2;
    }
    if (iVar11 == 8) {
      EVar22 = SE_ENOBUFS;
      goto LAB_14310fea2;
    }
    if (iVar11 != 0x2726) {
      if (iVar11 == 0x273c) {
        EVar22 = SE_ESOCKTNOSUPPORT;
        goto LAB_14310fea2;
      }
      if (iVar11 == 0x273f) {
        EVar22 = SE_EAFNOSUPPORT;
        goto LAB_14310fea2;
      }
      goto LAB_14310fe62;
    }
  }
  else {
    if (iVar11 == 0x277d) {
      EVar22 = SE_EPFNOSUPPORT;
      goto LAB_14310fea2;
    }
    if (iVar11 == 0x2af9) {
      EVar22 = SE_HOST_NOT_FOUND;
      goto LAB_14310fea2;
    }
    if (iVar11 == 0x2afa) {
      EVar22 = SE_TRY_AGAIN;
      goto LAB_14310fea2;
    }
    if (iVar11 == 0x2afb) {
      EVar22 = SE_NO_RECOVERY;
      goto LAB_14310fea2;
    }
    if (iVar11 == 0x2afc) goto LAB_14310fea2;
LAB_14310fe62:
    if (2 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
  }
  EVar22 = SE_EINVAL;
LAB_14310fea2:
  pFVar19->ReturnCode = EVar22;
  if (5 < (byte)LogSockets._0_1_) {
    local_908 = (FScriptContainerElement *)CONCAT44(local_908._4_4_,iVar11);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  if (pFVar19->ReturnCode == SE_NO_ERROR) {
    local_870 = local_8d8;
    if (local_8d8 != 0) {
      if (*(char **)(local_8d8 + 0x18) != (char *)0x0) {
        pTVar15 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                  TStringConversion<FUTF8ToTCHAR_Convert,128>
                            (&local_588,*(char **)(local_8d8 + 0x18));
        ::FString::operator=(&pFVar19->CanonicalNameResult,pTVar15->Ptr);
        if ((void *)local_588._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_588._padding_);
        }
        if (5 < (byte)LogSockets._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
        }
        pFVar3 = (pFVar19->CanonicalNameResult).Data.AllocatorInstance.Data;
        for (pFVar20 = pFVar3;
            pFVar20 != pFVar3 + (longlong)(pFVar19->CanonicalNameResult).Data.ArrayNum * 2;
            pFVar20 = pFVar20 + 2) {
          if (*(short *)pFVar20 == 0x2e) {
            local_8cc = local_8cc & 0xff;
            if ((int)((longlong)pFVar20 - (longlong)pFVar3 >> 1) != -1) {
              local_8cc = 0;
            }
            break;
          }
        }
      }
      for (; local_8d8 != 0; local_8d8 = *(longlong *)(local_8d8 + 0x28)) {
        pFVar16 = (FInternetAddrBSD *)0x0;
        if (((*(int *)(local_8d8 + 4) == 2) ||
            ((*(int *)(local_8d8 + 4) == 0x17 && (local_8b8 == 0)))) &&
           (psVar4 = *(short **)(local_8d8 + 0x20), psVar4 != (short *)0x0)) {
          this_01 = ::operator_new(0x90);
          pIVar8 = local_8c8;
          if (this_01 != (FInternetAddrBSD *)0x0) {
            local_8c0 = (FAddressInfoResult *)0x0;
            pFVar16 = FInternetAddrBSD::FInternetAddrBSD
                                (this_01,(FSocketSubsystemBSD *)local_8c8,(FName)0x0);
          }
          local_878.Object = pFVar16;
          TSharedRef<FInternetAddrBSD,1>::TSharedRef<FInternetAddrBSD,1><FInternetAddrBSD>
                    (&local_888,&local_878);
          pFVar16 = local_888.Object;
          (**(code **)((local_888.Object)->_padding_ + 200))
                    (local_888.Object,psVar4,*(undefined4 *)(local_8d8 + 0x10));
          uVar12 = (**(code **)(pIVar8->_padding_ + 0x148))(pIVar8,*(undefined4 *)(local_8d8 + 0xc))
          ;
          puVar17 = (undefined8 *)
                    (**(code **)(pIVar8->_padding_ + 0x138))
                              (pIVar8,local_828,*(undefined4 *)(local_8d8 + 4));
          FVar9.ReferenceController = local_888.SharedReferenceCount.ReferenceController;
          local_8ac = *puVar17;
          local_8a0 = *(undefined8 *)(local_8d8 + 0x10);
          if (local_888.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            paVar18 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar18 = &(local_888.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar18 = (atomic<int>)((int)*paVar18 + 1);
            UNLOCK();
          }
          local_8b0[0] = (FScriptContainerElement)0x0;
          local_898 = pFVar16;
          local_890 = local_888.SharedReferenceCount.ReferenceController;
          if (local_888.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar18 = (atomic<int>)((int)*paVar18 + 1);
            UNLOCK();
          }
          local_8a4 = uVar12;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_888.SharedReferenceCount.ReferenceController);
          local_8b0[0] = (FScriptContainerElement)
                         (**(code **)(local_8c8->_padding_ + 0x140))
                                   (local_8c8,*(undefined4 *)(local_8d8 + 4));
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar3 <= local_8b0) &&
             (lVar21 = (longlong)(__return_storage_ptr__->Results).ArrayMax,
             local_8b0 < pFVar3 + lVar21 * 0x28)) {
            local_8f0 = (longlong)(__return_storage_ptr__->Results).ArrayNum;
            local_8e8 = 0x28;
            local_908 = local_8b0;
            local_900 = pFVar3;
            local_8f8 = lVar21;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              pFVar19 = (FAddressInfoResult *)(*pcVar5)();
              return pFVar19;
            }
          }
          iVar11 = (__return_storage_ptr__->Results).ArrayNum;
          if (iVar11 == (__return_storage_ptr__->Results).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar2->AllocatorInstance,
                                &(__return_storage_ptr__->Results).ArrayMax);
          }
          (__return_storage_ptr__->Results).ArrayNum = iVar11 + 1;
          pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x28;
          *pFVar3 = local_8b0[0];
          *(undefined8 *)(pFVar3 + 4) = local_8ac;
          *(undefined4 *)(pFVar3 + 0xc) = local_8a4;
          *(undefined8 *)(pFVar3 + 0x10) = local_8a0;
          *(FInternetAddrBSD **)(pFVar3 + 0x18) = local_898;
          *(TReferenceControllerBase<1> **)(pFVar3 + 0x20) = local_890;
          if (local_890 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_890->SharedReferenceCount =
                 (atomic<int>)((int)local_890->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (iVar11 != -1) {
            if (5 < (byte)LogSockets._0_1_) {
              if (*(int *)(local_8d8 + 4) == 2) {
                uVar12 = 0xffffffff;
              }
              else {
                uVar12 = *(undefined4 *)(*(longlong *)(local_8d8 + 0x20) + 0x18);
              }
              (**(code **)(pFVar16->_padding_ + 0x80))
                        (pFVar16,local_810,CONCAT71((int7)((ulonglong)pFVar3 >> 8),1));
              local_908 = (FScriptContainerElement *)CONCAT44(local_908._4_4_,uVar12);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
              if (local_810[0] != (void *)0x0) {
                FMemory::Free(local_810[0]);
              }
            }
            if (((char)local_8cc != '\0') && ((*psVar4 == 2 || (*psVar4 == 0x17)))) {
              local_8f8 = CONCAT44(local_8f8._4_4_,4);
              local_900 = (FScriptContainerElement *)((ulonglong)local_900 & 0xffffffff00000000);
              local_908 = (FScriptContainerElement *)0x0;
              iVar11 = getnameinfo(psVar4,*(undefined4 *)(local_8d8 + 0x10),local_468,0x401);
              if (iVar11 == 0) {
                sVar14 = strlen((char *)local_468);
                local_868 = local_468;
                iStack_860 = (int)sVar14;
                local_7f8._12_4_ = uStack_85c;
                local_7f8.Size = iStack_860;
                local_7f8.DataPtr = local_868;
                iVar11 = UE::String::FindFirstChar(&local_7f8,'.',CaseSensitive);
                if (iVar11 != -1) {
                  local_6a8._padding_ = 0;
                  sVar14 = strlen((char *)local_468);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_6a8,(char *)local_468,(int)sVar14,Yes);
                  ::FString::AssignRange
                            (&pFVar19->CanonicalNameResult,local_6a8.Ptr,local_6a8.StringLength);
                  if ((void *)local_6a8._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_6a8._padding_);
                  }
                  local_8cc = local_8cc & 0xffffff00;
                  if (5 < (byte)LogSockets._0_1_) {
                    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets)
                    ;
                  }
                }
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_890);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar9.ReferenceController);
        }
      }
    }
    freeaddrinfo(local_870);
  }
  else if (2 < (byte)LogSockets._0_1_) {
    ISocketSubsystem::GetSocketError(local_8c8,pFVar19->ReturnCode);
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_GetAddressInfo__150a3fe60,
               (FLogCategoryBase *)&LogSockets);
  }
  if ((local_8d0 & 1) != 0) {
    DestructItems<FAddressInfoResultData,int>
              ((FAddressInfoResultData *)(pTVar2->AllocatorInstance).Data,
               (__return_storage_ptr__->Results).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar19->CanonicalNameResult).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar19->QueryServiceName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar19->QueryHostName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return pFVar19;
}

// GetAddressInfoHintFlag @ 1431105d0

int __thiscall
FSocketSubsystemBSD::GetAddressInfoHintFlag(FSocketSubsystemBSD *this,EAddressInfoFlags param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == Default) {
    return 0;
  }
  uVar2 = (param_1 & 2) * 2;
  uVar1 = uVar2 | 8;
  if ((param_1 & NoResolveService) == Default) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x400;
  if ((param_1 & OnlyUsableAddresses) == Default) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 1;
  if ((param_1 & BindableAddress) == Default) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x800;
  if ((param_1 & AllowV4MappedAddresses) == Default) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x100;
  if ((param_1 & AllResults) == Default) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 2;
  if ((param_1 & CanonicalName) == Default) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x20000;
  if ((param_1 & FQDomainName) == Default) {
    uVar1 = uVar2;
  }
  return uVar1;
}

// GetDefaultSocketProtocolFamily @ 1431107a0

FName __thiscall FSocketSubsystemBSD::GetDefaultSocketProtocolFamily(FSocketSubsystemBSD *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  return in_RDX;
}

// GetHostName @ 143110dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSocketSubsystemBSD::GetHostName(FSocketSubsystemBSD *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  undefined1 auStack_258 [32];
  FScriptContainerElement local_238 [256];
  ForAnyElementType local_138;
  FScriptContainerElement *local_130;
  int local_128;
  uchar local_118 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_258;
  iVar2 = gethostname((char *)local_118,0x100);
  if (iVar2 != 0) {
    return iVar2 == 0;
  }
  local_138.Data = (FScriptContainerElement *)0x0;
  sVar3 = strlen((char *)local_118);
  local_128 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,local_118,(int)sVar3);
  uVar1 = local_128 + 1;
  uVar4 = uVar1;
  if (uVar1 < 0x81) {
    if (local_138.Data == (FScriptContainerElement *)0x0) goto LAB_143110e84;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_138,0,uVar4,2);
LAB_143110e84:
  local_130 = local_238;
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    local_130 = local_138.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_130,uVar1,local_118,(int)sVar3 + 1);
  ::FString::operator=(param_1,(wchar_t *)local_130);
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  return true;
}

// GetLastErrorCode @ 143110fe0

ESocketErrors __thiscall FSocketSubsystemBSD::GetLastErrorCode(FSocketSubsystemBSD *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ESocketErrors EVar1;
  int *piVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)this + 0xc0);
  piVar2 = _errno();
                    /* WARNING: Could not recover jumptable at 0x00014311100f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*UNRECOVERED_JUMPTABLE)(this,*piVar2);
  return EVar1;
}

// GetLocalHostAddr @ 143111a30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FInternetAddr,1> * __thiscall
FSocketSubsystemBSD::GetLocalHostAddr
          (FSocketSubsystemBSD *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__,
          FOutputDevice *param_1,bool *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  bool bVar4;
  FInternetAddr *pFVar5;
  undefined8 *puVar6;
  TSharedPtr<FInternetAddr,1> *local_28;
  undefined8 local_20;
  void *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(*(longlong *)this + 0x90))();
  *param_2 = false;
  cVar3 = (**(code **)(*(longlong *)this + 0xe8))(this,__return_storage_ptr__);
  if ((cVar3 != '\0') || (bVar4 = GetLocalHostAddrViaConnect(this,__return_storage_ptr__), bVar4))
  goto LAB_143111b20;
  *param_2 = true;
  local_28 = (TSharedPtr<FInternetAddr,1> *)0x0;
  local_20 = 0;
  cVar3 = (**(code **)(*(longlong *)this + 200))(this,&local_28);
  if ((cVar3 == '\0') || ((int)local_20 == 0)) {
    FOutputDevice::Log(param_1,L"Could not fetch the local adapter addresses");
    (**(code **)((longlong)*__return_storage_ptr__->Object + 0x68))();
LAB_143111b03:
  }
  else if (0 < (int)local_20) {
    pFVar5 = TSharedPtr<FInternetAddr,1>::operator->(local_28);
    puVar6 = (undefined8 *)(**(code **)((longlong)*pFVar5 + 0xa0))(pFVar5,&local_18);
    pFVar5 = __return_storage_ptr__->Object;
    pTVar1 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
    __return_storage_ptr__->Object = (FInternetAddr *)*puVar6;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    *puVar6 = pFVar5;
    puVar6[1] = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    goto LAB_143111b03;
  }
  DestructItems<TSharedPtr<FInternetAddr,1>,int>(local_28,(int)local_20);
  if (local_28 != (TSharedPtr<FInternetAddr,1> *)0x0) {
    FMemory::Free(local_28);
  }
LAB_143111b20:
  if (6 < (byte)LogSockets._0_1_) {
    (**(code **)((longlong)*__return_storage_ptr__->Object + 0x80))
              (__return_storage_ptr__->Object,&local_18,1);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return __return_storage_ptr__;
}

// GetLocalHostAddrViaConnect @ 143111c90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSocketSubsystemBSD::GetLocalHostAddrViaConnect
          (FSocketSubsystemBSD *this,TSharedRef<FInternetAddr,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  char cVar5;
  FNameEntryId FVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined4 extraout_var;
  wchar_t *pwVar11;
  bool bVar12;
  char local_res18 [8];
  longlong local_res20;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  undefined1 local_40 [24];
  
  pTVar3 = CVarDisableIPv6.Ref;
  bVar12 = false;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  bVar4 = *(int *)((longlong)pTVar3->ShadowedValue + lVar7) != 1;
  lVar7 = *(longlong *)this;
  if (bVar4) {
    puVar8 = (undefined8 *)(**(code **)(lVar7 + 0x90))(this,local_40);
  }
  else {
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
    puVar8 = (undefined8 *)(**(code **)(lVar7 + 0x88))(this,local_50,local_res20);
  }
  pTVar1 = (TReferenceControllerBase<1> *)puVar8[1];
  plVar2 = (longlong *)*puVar8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_40._8_8_);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  local_res18[0] = '\0';
  plVar9 = (longlong *)(**(code **)(*plVar2 + 0xa8))(plVar2,&local_58);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  lVar7 = *plVar2;
  if (*plVar9 == local_res20) {
    pwVar11 = L"::ffff:172.31.255.255";
  }
  else {
    plVar9 = (longlong *)(**(code **)(lVar7 + 0xa8))(plVar2,&local_58);
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
    if (*plVar9 != local_res20) goto LAB_143111dbf;
    lVar7 = *plVar2;
    pwVar11 = L"172.31.255.255";
  }
  (**(code **)(lVar7 + 0x10))(plVar2,pwVar11,local_res18);
LAB_143111dbf:
  if (local_res18[0] != '\0') {
    (**(code **)(*plVar2 + 0x28))(plVar2,0x100);
    uVar10 = (**(code **)(*plVar2 + 0xa8))(plVar2,local_50);
    ::FString::FString((FString *)local_40,L"GetLocalHostAddrViaConnect");
    FVar6 = FNameEntryId::FromValidEName((EName)&local_res20);
    local_58 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
    local_54 = 0;
    plVar9 = (longlong *)(**(code **)(*(longlong *)this + 0x18))(this,&local_58,local_40,uVar10);
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
    if (plVar9 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar9 + 0x28))(plVar9,plVar2);
      if (cVar5 != '\0') {
        (**(code **)(*plVar9 + 0x90))(plVar9,param_1->Object);
        (**(code **)((longlong)*param_1->Object + 0x28))(param_1->Object,0);
        bVar12 = true;
        if (6 < (byte)LogSockets._0_1_) {
          (**(code **)((longlong)*param_1->Object + 0x80))(param_1->Object,local_40,1);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
          if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_40._0_8_);
          }
        }
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
      (**(code **)(*(longlong *)this + 0x38))(this,plVar9);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar12;
}

// GetMultihomeAddress @ 143111f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSocketSubsystemBSD::GetMultihomeAddress
          (FSocketSubsystemBSD *this,TSharedRef<FInternetAddr,1> *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  ulonglong uVar11;
  FInternetAddr *pFVar12;
  TSharedPtr<FInternetAddr,1> *pTVar13;
  TSharedPtr<FInternetAddr,1> *pTVar14;
  undefined1 auStackY_2c8 [32];
  undefined1 local_298 [8];
  TSharedPtr<FInternetAddr,1> *local_290;
  ulonglong local_288;
  FInternetAddr *local_280;
  TReferenceControllerBase<1> *local_278;
  longlong local_270;
  FString local_268;
  undefined1 local_258 [16];
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  memset(local_248,0,0x200);
  pwVar9 = FCommandLine::Get();
  uVar8 = 0;
  bVar5 = FParse::Value(pwVar9,L"MULTIHOME=",local_248,0x100,true,(wchar_t **)0x0);
  if (bVar5) {
    pcVar1 = *(code **)(*(longlong *)this + 0x58);
    ::FString::FString(&local_268,local_248);
    (*pcVar1)(this,&local_280,&local_268);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (local_280 != (FInternetAddr *)0x0) {
      pFVar12 = local_280;
      if ((local_280 == (FInternetAddr *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), pFVar12 = local_280, bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      pTVar2 = local_278;
      if (local_278 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_278->SharedReferenceCount = (atomic<int>)((int)local_278->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar12 == (FInternetAddr *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pFVar12;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_278)
      ;
      plVar10 = (longlong *)
                (**(code **)((longlong)*param_1->Object + 0xa8))(param_1->Object,local_258);
      FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
      if (*plVar10 == local_270) {
        local_290 = (TSharedPtr<FInternetAddr,1> *)0x0;
        local_288 = 0;
        cVar7 = (**(code **)(*(longlong *)this + 200))(this,&local_290);
        if (cVar7 != '\0') {
          iVar4 = (int)local_288;
          uVar11 = (ulonglong)(int)local_288;
          pTVar14 = local_290 + uVar11;
          pTVar13 = local_290;
          while( true ) {
            if ((int)uVar11 != iVar4) {
              local_298[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FInternetAddr,1>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_298);
            }
            if (pTVar13 == pTVar14) goto LAB_14311219b;
            pFVar12 = param_1->Object;
            pcVar1 = *(code **)((longlong)*pFVar12 + 8);
            if ((pTVar13->Object == (FInternetAddr *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar5)) {
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return (bool)uVar6;
            }
            cVar7 = (*pcVar1)(pFVar12,pTVar13->Object);
            if (cVar7 != '\0') break;
            uVar11 = local_288 & 0xffffffff;
            pTVar13 = pTVar13 + 1;
          }
          pFVar12 = pTVar13->Object;
          pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar12 == (FInternetAddr *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          uVar8 = (**(code **)((longlong)*pFVar12 + 0x118))(pFVar12);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
LAB_14311219b:
          pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
          pFVar12 = param_1->Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          (**(code **)((longlong)*pFVar12 + 0x110))(pFVar12,uVar8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
        DestructItems<TSharedPtr<FInternetAddr,1>,int>(local_290,(int)local_288);
        if (local_290 != (TSharedPtr<FInternetAddr,1> *)0x0) {
          FMemory::Free(local_290);
        }
      }
      return true;
    }
    if (4 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_278);
  }
  return false;
}

// GetProtocolFamilyType @ 143112d60

ESocketProtocolFamily __thiscall
FSocketSubsystemBSD::GetProtocolFamilyType(FSocketSubsystemBSD *this,int param_1)

{
  ESocketProtocolFamily EVar1;
  
  if (param_1 == 0) {
    return None;
  }
  if (param_1 != 2) {
    EVar1 = None;
    if (param_1 == 0x17) {
      EVar1 = IPv6;
    }
    return EVar1;
  }
  return IPv4;
}

// GetProtocolFamilyTypeName @ 143112d90

FName __thiscall
FSocketSubsystemBSD::GetProtocolFamilyTypeName(FSocketSubsystemBSD *this,int param_1)

{
  FName FVar1;
  uint in_register_00000014;
  int in_R8D;
  
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  if (in_R8D != 0) {
    if (in_R8D == 2) {
      FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
      return FVar1;
    }
    if (in_R8D == 0x17) {
      FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
      return FVar1;
    }
  }
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
  return FVar1;
}

// GetProtocolFamilyValue @ 143112df0

int __thiscall FSocketSubsystemBSD::GetProtocolFamilyValue(FSocketSubsystemBSD *this,FName *param_1)

{
  int iVar1;
  FName local_res10;
  
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  if (*param_1 == local_res10) {
    return 2;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  iVar1 = 0;
  if (*param_1 == local_res10) {
    iVar1 = 0x17;
  }
  return iVar1;
}

// GetProtocolFamilyValue @ 143112e50

int __thiscall
FSocketSubsystemBSD::GetProtocolFamilyValue(FSocketSubsystemBSD *this,ESocketProtocolFamily param_1)

{
  if (param_1 != None) {
    if (param_1 == IPv4) {
      return 2;
    }
    if (param_1 == IPv6) {
      return 0x17;
    }
  }
  return 0;
}

// GetSocketAPIName @ 143113320

wchar_t * __thiscall FSocketSubsystemBSD::GetSocketAPIName(FSocketSubsystemBSD *this)

{
  return L"BSD IPv4/6";
}

// GetSocketType @ 1431137f0

ESocketType __thiscall FSocketSubsystemBSD::GetSocketType(FSocketSubsystemBSD *this,int param_1)

{
  if (param_1 == 1) {
    return SOCKTYPE_Streaming;
  }
  if (param_1 != 2) {
    if (param_1 == 6) {
      return SOCKTYPE_Streaming;
    }
    if (param_1 != 0x11) {
      return SOCKTYPE_Unknown;
    }
  }
  return SOCKTYPE_Datagram;
}

// InternalBSDSocketFactory @ 143113e50

FSocketBSD * __thiscall
FSocketSubsystemBSD::InternalBSDSocketFactory
          (FSocketSubsystemBSD *this,ulong64 param_1,ESocketType param_2,FString *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  FSocketBSD *pFVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)this;
  uVar2 = (**(code **)(lVar1 + 0x120))(this,local_res8);
  pFVar3 = (FSocketBSD *)(**(code **)(lVar1 + 0x160))(this,param_1,param_2,param_3,uVar2);
  return pFVar3;
}

// InternalBSDSocketFactory @ 143113eb0

FSocketBSD * __thiscall
FSocketSubsystemBSD::InternalBSDSocketFactory
          (FSocketSubsystemBSD *this,ulong64 param_1,ESocketType param_2,FString *param_3,
          FName *param_4)

{
  FName FVar1;
  FSocketBSD *pFVar2;
  
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FSocketBSD *)0x0) {
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    *(ESocketType *)&pFVar2->_padding_ = param_2;
    pFVar2->_padding_ = (longlong)&___7FSocket__6B_;
    ::FString::FString((FString *)&pFVar2->_padding_,param_3);
    FVar1 = *param_4;
    pFVar2->_padding_ = (longlong)&___7FSocketBSD__6B_;
    pFVar2->_padding_ = (longlong)FVar1;
    pFVar2->LastActivityTime = (atomic<double>)0x0;
    pFVar2->Socket = param_1;
    pFVar2->SendFlags = 0;
    pFVar2->SocketSubsystem = (ISocketSubsystem *)this;
  }
  return pFVar2;
}

// IsSocketWaitSupported @ 1431140a0

bool __thiscall FSocketSubsystemBSD::IsSocketWaitSupported(FSocketSubsystemBSD *this)

{
  return true;
}

// RequiresChatDataBeSeparate @ 143115970

bool __thiscall FSocketSubsystemBSD::RequiresChatDataBeSeparate(FSocketSubsystemBSD *this)

{
  return false;
}

// RequiresEncryptedPackets @ 143115980

bool __thiscall FSocketSubsystemBSD::RequiresEncryptedPackets(FSocketSubsystemBSD *this)

{
  return false;
}

// TranslateErrorCode @ 143118510

/* WARNING: Enum "Type": Some values do not have unique names */

ESocketErrors __thiscall
FSocketSubsystemBSD::TranslateErrorCode(FSocketSubsystemBSD *this,int param_1)

{
  if (2 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return SE_EINVAL;
}

// TranslateGAIErrorCode @ 143118940

/* WARNING: Enum "Type": Some values do not have unique names */

ESocketErrors __thiscall
FSocketSubsystemBSD::TranslateGAIErrorCode(FSocketSubsystemBSD *this,int param_1)

{
  if (param_1 < 0x276e) {
    if (param_1 == 0x276d) {
      return SE_NOTINITIALISED;
    }
    if (param_1 == 0) {
      return SE_NO_ERROR;
    }
    if (param_1 == 8) {
      return SE_ENOBUFS;
    }
    if (param_1 == 0x2726) {
      return SE_EINVAL;
    }
    if (param_1 == 0x273c) {
      return SE_ESOCKTNOSUPPORT;
    }
    if (param_1 == 0x273f) {
      return SE_EAFNOSUPPORT;
    }
  }
  else {
    if (param_1 == 0x277d) {
      return SE_EPFNOSUPPORT;
    }
    if (param_1 == 0x2af9) {
      return SE_HOST_NOT_FOUND;
    }
    if (param_1 == 0x2afa) {
      return SE_TRY_AGAIN;
    }
    if (param_1 == 0x2afb) {
      return SE_NO_RECOVERY;
    }
    if (param_1 == 0x2afc) {
      return SE_NO_DATA;
    }
  }
  if (2 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return SE_EINVAL;
}

