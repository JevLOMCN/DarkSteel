// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 12

// ~FControlClient @ 14d392160

void __thiscall UE::Trace::FControlClient::~FControlClient(FControlClient *this)

{
  FSocket *pFVar1;
  ISocketSubsystem *pIVar2;
  FName local_res8 [4];
  
  pFVar1 = this->Socket;
  if (pFVar1 != (FSocket *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,2);
    (**(code **)(this->Socket->_padding_ + 0x10))();
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
    pIVar2 = ISocketSubsystem::Get(local_res8);
    (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,this->Socket);
    this->Socket = (FSocket *)0x0;
  }
  return;
}

// Connect @ 14d398e40

bool __thiscall UE::Trace::FControlClient::Connect(FControlClient *this,FInternetAddr *param_1)

{
  code *pcVar1;
  char cVar2;
  FNameEntryId FVar3;
  ISocketSubsystem *pIVar4;
  undefined8 uVar5;
  undefined4 extraout_var;
  FSocket *pFVar6;
  undefined1 local_res8 [16];
  FName local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_48 [8];
  FString local_40;
  
  if (this->Socket == (FSocket *)0x0) {
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    pIVar4 = ISocketSubsystem::Get(&local_res18);
    if (pIVar4 != (ISocketSubsystem *)0x0) {
      pcVar1 = *(code **)(pIVar4->_padding_ + 0x18);
      uVar5 = (**(code **)((longlong)*param_1 + 0xa8))(param_1,local_48);
      ::FString::FString(&local_40,L"TraceControlClient");
      FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res20 = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
      local_res24 = 0;
      pFVar6 = (FSocket *)(*pcVar1)(pIVar4,&local_res20,&local_40,uVar5);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (pFVar6 != (FSocket *)0x0) {
        cVar2 = (**(code **)(pFVar6->_padding_ + 0x28))(pFVar6,param_1);
        if (cVar2 != '\0') {
          (**(code **)(pFVar6->_padding_ + 0xf8))(pFVar6,1,0);
          this->Socket = pFVar6;
          return true;
        }
        (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4,pFVar6);
      }
    }
  }
  return false;
}

// Connect @ 14d398f60

bool __thiscall
UE::Trace::FControlClient::Connect(FControlClient *this,wchar_t *param_1,ushort param_2)

{
  code *pcVar1;
  FInternetAddr *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FNameEntryId FVar6;
  ISocketSubsystem *pIVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  FSocket *pFVar9;
  undefined1 local_res8 [8];
  FName local_res20;
  ulonglong in_stack_fffffffffffffef8;
  FInternetAddr *local_e8;
  FSharedReferencer<1> local_e0;
  undefined8 local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  FSharedReferencer<1> local_b8 [2];
  void *local_a8 [2];
  void *local_98;
  void *local_88;
  int local_78;
  FAddressInfoResultData *local_70;
  int local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [16];
  
  if (this->Socket != (FSocket *)0x0) {
    return false;
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar7 = ISocketSubsystem::Get(&local_res20);
  if (pIVar7 == (ISocketSubsystem *)0x0) {
    return false;
  }
  pcVar1 = *(code **)(pIVar7->_padding_ + 0x58);
  ::FString::FString(&local_58,param_1);
  (*pcVar1)(pIVar7,&local_e8,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_e8 == (FInternetAddr *)0x0) {
LAB_14d399030:
    local_d8 = 0;
    (**(code **)(pIVar7->_padding_ + 0x40))
              (pIVar7,local_a8,param_1,0,in_stack_fffffffffffffef8 & 0xffffffffffff0000,0,0);
    if ((local_78 == 0) && (local_68 != 0)) {
      if ((local_68 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_b8[0].ReferenceController = (local_70->Address).SharedReferenceCount.ReferenceController
      ;
      local_e8 = (local_70->Address).Object;
      if (local_b8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8[0].ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_b8[0].ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8[0].ReferenceController);
      DestructItems<FAddressInfoResultData,int>(local_70,local_68);
      if (local_70 != (FAddressInfoResultData *)0x0) {
        FMemory::Free(local_70);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_a8[0] != (void *)0x0) {
        FMemory::Free(local_a8[0]);
      }
      goto LAB_14d399126;
    }
    DestructItems<FAddressInfoResultData,int>(local_70,local_68);
    if (local_70 != (FAddressInfoResultData *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_a8[0] != (void *)0x0) {
      FMemory::Free(local_a8[0]);
    }
  }
  else {
    if ((local_e8 == (FInternetAddr *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)((longlong)*local_e8 + 0x98))();
    if (cVar5 == '\0') goto LAB_14d399030;
LAB_14d399126:
    if ((local_e8 == (FInternetAddr *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (**(code **)((longlong)*local_e8 + 0x28))(local_e8,param_2);
    if ((local_e8 == (FInternetAddr *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar2 = local_e8;
    if (this->Socket == (FSocket *)0x0) {
      local_d0.ComparisonIndex.Value = 0;
      local_d0.Number = 0;
      pIVar7 = ISocketSubsystem::Get(&local_d0);
      if (pIVar7 != (ISocketSubsystem *)0x0) {
        pcVar1 = *(code **)(pIVar7->_padding_ + 0x18);
        uVar8 = (**(code **)((longlong)*pFVar2 + 0xa8))(pFVar2,local_38);
        ::FString::FString(&local_48,L"TraceControlClient");
        FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
        local_c8 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
        local_c4 = 0;
        pFVar9 = (FSocket *)(*pcVar1)(pIVar7,&local_c8,&local_48,uVar8);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (pFVar9 != (FSocket *)0x0) {
          cVar5 = (**(code **)(pFVar9->_padding_ + 0x28))(pFVar9,pFVar2);
          if (cVar5 != '\0') {
            (**(code **)(pFVar9->_padding_ + 0xf8))(pFVar9,1,0);
            this->Socket = pFVar9;
            bVar3 = true;
            goto LAB_14d399298;
          }
          (**(code **)(pIVar7->_padding_ + 0x38))(pIVar7,pFVar9);
        }
      }
    }
  }
  bVar3 = false;
LAB_14d399298:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.ReferenceController);
  return bVar3;
}

// Disconnect @ 14d39a660

void __thiscall UE::Trace::FControlClient::Disconnect(FControlClient *this)

{
  FSocket *pFVar1;
  ISocketSubsystem *pIVar2;
  FName local_res8 [4];
  
  pFVar1 = this->Socket;
  if (pFVar1 != (FSocket *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,2);
    (**(code **)(this->Socket->_padding_ + 0x10))();
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
    pIVar2 = ISocketSubsystem::Get(local_res8);
    (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,this->Socket);
    this->Socket = (FSocket *)0x0;
  }
  return;
}

// FormatAndSend @ 14d39c3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Trace::FControlClient::FormatAndSend(FControlClient *this,wchar_t *param_1)

{
  uint uVar1;
  ulong64 *puVar2;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  undefined1 local_res18 [16];
  undefined1 auStack_4f8 [32];
  undefined8 local_4d8;
  undefined1 *local_4d0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_4c8;
  wchar_t local_428 [512];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  if (this->Socket != (FSocket *)0x0) {
    puVar2 = __local_stdio_printf_options();
    local_4d8 = 0;
    local_4d0 = local_res18;
    uVar1 = __stdio_common_vswprintf(*puVar2,local_428,0x200,param_1);
    if ((int)uVar1 < 0) {
      uVar1 = 0xffffffff;
    }
    if (0x400 < uVar1) {
      uVar1 = 0x400;
    }
    pTVar3 = StringCast<char,128,wchar_t>(&local_4c8,local_428);
    Send(this,(uchar *)pTVar3->Ptr,uVar1);
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
  }
  return;
}

// IsConnected @ 14d3a05d0

bool __thiscall UE::Trace::FControlClient::IsConnected(FControlClient *this)

{
  return this->Socket != (FSocket *)0x0;
}

// Send @ 14d3a6f10

void __thiscall UE::Trace::FControlClient::Send(FControlClient *this,uchar *param_1,int param_2)

{
  FSocket *pFVar1;
  char cVar2;
  ISocketSubsystem *pIVar3;
  int local_res8 [2];
  FName local_res20;
  
  local_res8[0] = 0;
  cVar2 = (**(code **)(this->Socket->_padding_ + 0x60))();
  if ((((cVar2 != '\0') && (local_res8[0] == param_2)) &&
      (cVar2 = (**(code **)(this->Socket->_padding_ + 0x60))(this->Socket,"\n",1,local_res8),
      cVar2 != '\0')) && (local_res8[0] == 1)) {
    return;
  }
  pFVar1 = this->Socket;
  if (pFVar1 != (FSocket *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,2);
    (**(code **)(this->Socket->_padding_ + 0x10))();
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    pIVar3 = ISocketSubsystem::Get(&local_res20);
    (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,this->Socket);
    this->Socket = (FSocket *)0x0;
  }
  return;
}

// Send @ 14d3a6fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Trace::FControlClient::Send(FControlClient *this,wchar_t *param_1)

{
  size_t sVar1;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar2;
  undefined1 auStack_d8 [32];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  sVar1 = wcslen(param_1);
  pTVar2 = StringCast<char,128,wchar_t>(&local_b8,param_1);
  Send(this,(uchar *)pTVar2->Ptr,(int)sVar1);
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return;
}

// SendSendTo @ 14d3a7060

void __thiscall UE::Trace::FControlClient::SendSendTo(FControlClient *this,wchar_t *param_1)

{
  FormatAndSend(this,L"SendTo %s");
  return;
}

// SendStop @ 14d3a7080

void __thiscall UE::Trace::FControlClient::SendStop(FControlClient *this)

{
  FormatAndSend(this,L"Stop");
  return;
}

// SendToggleChannel @ 14d3a70a0

void __thiscall
UE::Trace::FControlClient::SendToggleChannel(FControlClient *this,wchar_t *param_1,bool param_2)

{
  FormatAndSend(this,L"ToggleChannels %s %d");
  return;
}

// SendWriteTo @ 14d3a70c0

void __thiscall UE::Trace::FControlClient::SendWriteTo(FControlClient *this,wchar_t *param_1)

{
  FormatAndSend(this,L"WriteTo %s");
  return;
}

