// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 7

// StaticStruct @ 1441c7380

UScriptStruct * __cdecl FNetFaultState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetFaultState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UScriptStruct_FNetFaultState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetFaultState,(UObject *)pUVar1,L"NetFaultState"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FNetFaultState.OuterSingleton;
}

// InitConfigDefaultsInternal @ 1441c73c0

EInitStateDefaultsResult __thiscall FNetFaultState::InitConfigDefaultsInternal(FNetFaultState *this)

{
  void *_Src;
  int iVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  EInitStateDefaultsResult EVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (int)this->_padding_;
  lVar3 = (longlong)local_10;
  _Src = (void *)this->_padding_;
  EVar4 = Initialized;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_10 != 0) {
    FVar2.Data = local_18.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"Normal");
  if (iVar1 == 0) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    this->EscalateQuotaFaultsPerPeriod = 1;
    this->EscalateQuotaTimePeriod = '\x01';
  }
  else {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_10 != 0) {
      FVar2.Data = local_18.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"Fault");
    if (iVar1 == 0) {
      this->EscalateQuotaFaultsPerPeriod = 8;
      this->DescalateQuotaFaultsPerPeriod = 6;
      this->EscalateQuotaTimePeriod = '\b';
      *(undefined4 *)((longlong)&this->_padding_ + 2) = 0xb000a;
    }
    else {
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_10 != 0) {
        FVar2.Data = local_18.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"PersistentFault");
      if (iVar1 == 0) {
        this->EscalateQuotaFaultsPerPeriod = 0x40;
        this->EscalateQuotaFaultPercentPerPeriod = '2';
        this->DescalateQuotaFaultsPerPeriod = 0x30;
        this->DescalateQuotaFaultPercentPerPeriod = '(';
        this->EscalateQuotaTimePeriod = '\b';
        *(undefined4 *)((longlong)&this->_padding_ + 2) = 0x14000a;
        *(undefined1 *)&this->_padding_ = 1;
      }
      else {
        FVar2.Data = (FScriptContainerElement *)L"";
        if (local_10 != 0) {
          FVar2.Data = local_18.Data;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"DisconnectCountdown");
        if (iVar1 == 0) {
          this->EscalateQuotaFaultPercentPerPeriod = 'F';
          this->DescalateQuotaFaultPercentPerPeriod = '8';
          this->EscalateQuotaTimePeriod = '\x10';
          *(undefined4 *)((longlong)&this->_padding_ + 2) = 0x3c000a;
          *(undefined1 *)&this->_padding_ = 1;
        }
        else {
          FVar2.Data = (FScriptContainerElement *)L"";
          if (local_10 != 0) {
            FVar2.Data = local_18.Data;
          }
          iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"Disconnect");
          if (iVar1 == 0) {
            this->bCloseConnection = true;
            *(undefined1 *)&this->_padding_ = 1;
            this->EscalateQuotaTimePeriod = '\0';
          }
          else {
            EVar4 = NotInitialized;
          }
        }
      }
    }
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return EVar4;
}

// ApplyImpliedValuesInternal @ 1441c7580

void __thiscall FNetFaultState::ApplyImpliedValuesInternal(FNetFaultState *this)

{
  longlong *this_00;
  schar sVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  
  if (0 < this->EscalateQuotaFaultsPerPeriod != 0 < this->DescalateQuotaFaultsPerPeriod) {
    lVar6 = 0x36;
    if (this->DescalateQuotaFaultsPerPeriod < this->EscalateQuotaFaultsPerPeriod) {
      lVar6 = 0x32;
    }
    sVar2 = *(short *)((longlong)&this->_padding_ + lVar6);
    this->EscalateQuotaFaultsPerPeriod = sVar2;
    this->DescalateQuotaFaultsPerPeriod = sVar2;
  }
  if ('\0' < this->EscalateQuotaFaultPercentPerPeriod !=
      '\0' < this->DescalateQuotaFaultPercentPerPeriod) {
    lVar6 = 0x38;
    if (this->DescalateQuotaFaultPercentPerPeriod < this->EscalateQuotaFaultPercentPerPeriod) {
      lVar6 = 0x34;
    }
    sVar1 = *(schar *)((longlong)&this->_padding_ + lVar6);
    this->EscalateQuotaFaultPercentPerPeriod = sVar1;
    this->DescalateQuotaFaultPercentPerPeriod = sVar1;
  }
  this_00 = &this->_padding_;
  if ('\0' < this->EscalateQuotaTimePeriod) {
    TArray<signed_char,TSizedDefaultAllocator<32>_>::AddUniqueImpl<signed_char_const_&>
              ((TArray<signed_char,TSizedDefaultAllocator<32>_> *)this_00,
               &this->EscalateQuotaTimePeriod);
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 != 0) {
    if ((iVar7 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = 1;
    iVar7 = (int)this->_padding_;
    cVar8 = *(char *)*this_00;
    if (1 < iVar7) {
      lVar6 = 1;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (cVar8 < *(char *)(lVar6 + *this_00)) {
          cVar8 = *(char *)(lVar6 + *this_00);
        }
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 1;
        iVar7 = (int)this->_padding_;
      } while ((int)uVar9 < iVar7);
    }
    *(char *)((longlong)&this->_padding_ + 6) = cVar8;
    return;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  return;
}

// ValidateConfigInternal @ 1441c7710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetFaultState::ValidateConfigInternal(FNetFaultState *this)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  
  sVar1 = *(short *)((longlong)&this->_padding_ + 4);
  if (((0 < sVar1) && (sVar1 < *(short *)((longlong)&this->_padding_ + 2))) &&
     (2 < (byte)LogNetCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
  }
  if ((this->EscalateQuotaFaultsPerPeriod < 1) &&
     (this->EscalateQuotaFaultPercentPerPeriod < '\x01')) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((this->EscalateQuotaTimePeriod < (char)bVar3) || ('\x10' < this->EscalateQuotaTimePeriod)) {
    if (2 < (byte)LogNetCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    }
    bVar2 = 0x10;
    if (this->EscalateQuotaTimePeriod < '\x10') {
      bVar2 = this->EscalateQuotaTimePeriod;
    }
    if ((int)(uint)bVar3 < (int)(char)bVar2) {
      bVar3 = bVar2;
    }
    this->EscalateQuotaTimePeriod = bVar3;
  }
  return;
}

// HasHitAnyQuota @ 1441c77e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNetFaultState::HasHitAnyQuota(FNetFaultState *this,FHasHitAnyQuotaParms *param_1)

{
  char cVar1;
  short sVar2;
  TArrayView<UE::Net::FEscalationCounter,int> *this_00;
  TArrayView<UE::Net::FEscalationCounter,int> *this_01;
  TArrayView<UE::Net::FEscalationCounter,int>_0_ *pTVar3;
  TArrayView<int,int> *pTVar4;
  FEscalationCounter *pFVar5;
  FEscalationCounter *pFVar6;
  FEscalationCounter *pFVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  
  if (0 < param_1->RegisteredCounters->ArrayNum) {
    pTVar4 = TArrayView<TArrayView<int,int>,int>::operator[](param_1->RegisteredCounters,0);
    if ((pTVar4->ArrayNum < 1) ||
       ((this->EscalateQuotaFaultsPerPeriod < 1 &&
        (this->EscalateQuotaFaultPercentPerPeriod < '\x01')))) {
      bVar14 = false;
    }
    else {
      this_00 = param_1->SecondCounters;
      cVar1 = this->EscalateQuotaTimePeriod;
      this_01 = param_1->FrameCounters;
      pTVar3 = param_1->PerPeriodHistory;
      iVar13 = 0;
      pFVar5 = TArrayView<UE::Net::FEscalationCounter,int>::operator[](this_00,0);
      pFVar6 = TArrayView<UE::Net::FEscalationCounter,int>::operator[](this_01,0);
      pFVar7 = TArrayView<UE::Net::FEscalationCounter,int>::operator[]
                         ((TArrayView<UE::Net::FEscalationCounter,int> *)
                          (pTVar3 + (longlong)cVar1 * 0x10 + -0x10),0);
      piVar12 = pTVar4->DataPtr;
      iVar11 = pFVar6->Counter + pFVar5->Counter + pFVar7->Counter;
      piVar8 = piVar12 + pTVar4->ArrayNum;
      for (; piVar12 != piVar8; piVar12 = piVar12 + 1) {
        iVar10 = *piVar12;
        pFVar5 = TArrayView<UE::Net::FEscalationCounter,int>::operator[](this_00,iVar10);
        pFVar6 = TArrayView<UE::Net::FEscalationCounter,int>::operator[](this_01,iVar10);
        pFVar7 = TArrayView<UE::Net::FEscalationCounter,int>::operator[]
                           ((TArrayView<UE::Net::FEscalationCounter,int> *)
                            (pTVar3 + (longlong)cVar1 * 0x10 + -0x10),iVar10);
        iVar10 = pFVar5->Counter + pFVar7->Counter + pFVar6->Counter;
        if (iVar13 < iVar10) {
          iVar13 = iVar10;
        }
      }
      bVar14 = param_1->QuotaType != EscalateQuota;
      lVar9 = 0x32;
      if (bVar14) {
        lVar9 = 0x36;
      }
      sVar2 = *(short *)((longlong)&this->_padding_ + lVar9);
      lVar9 = 0x34;
      if (bVar14) {
        lVar9 = 0x38;
      }
      cVar1 = *(char *)((longlong)&this->_padding_ + lVar9);
      bVar14 = 0 < sVar2 && sVar2 <= iVar13;
      if ('\0' < cVar1) {
        if (iVar11 < 1) {
          dVar15 = 0.0;
        }
        else {
          dVar15 = (double)iVar13 / (double)iVar11;
        }
        if ((bVar14) || ((double)(int)cVar1 < dVar15 * __real_4059000000000000)) {
          bVar14 = true;
        }
      }
      if ((GNetFaultRecoveryLogQuotaChecks != 0) && (4 < (byte)LogNetCore._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
      }
    }
    return bVar14;
  }
  return false;
}

// GetBaseConfigClass @ 1441dc260

UClass * __cdecl FNetFaultState::GetBaseConfigClass(void)

{
  UClass *pUVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0x1d;
  local_18.DataPtr = L"/Script/Engine.NetFaultConfig";
  pUVar1 = Z_Construct_UClass_UClass_NoRegister();
  pUVar1 = (UClass *)StaticFindObject(pUVar1,(UObject *)0x0,&local_18,None);
  return pUVar1;
}

// GetConfigSection @ 1441dc330

wchar_t * __cdecl FNetFaultState::GetConfigSection(void)

{
  return L"NetFault";
}

