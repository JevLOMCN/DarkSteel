// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 37

// FInternetAddrBSD @ 14310ac90

FInternetAddrBSD * __thiscall
FInternetAddrBSD::FInternetAddrBSD
          (FInternetAddrBSD *this,FSocketSubsystemBSD *param_1,FName param_2)

{
  FName *pFVar1;
  FName local_res8;
  
  this->SocketSubsystem = param_1;
  this->_padding_ = (longlong)&___7FInternetAddrBSD__6B_;
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
  if ((param_2 == (FName)0x0) && (param_1 != (FSocketSubsystemBSD *)0x0)) {
    pFVar1 = (FName *)(**(code **)(*(longlong *)param_1 + 0x120))(param_1,&local_res8);
    param_2 = *pFVar1;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  if (param_2 == local_res8) {
    (this->Addr).ss_family = 2;
    return this;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (param_2 == local_res8) {
    (this->Addr).ss_family = 0x17;
    return this;
  }
  (this->Addr).ss_family = 0;
  return this;
}

// FInternetAddrBSD @ 14310ad90

FInternetAddrBSD * __thiscall FInternetAddrBSD::FInternetAddrBSD(FInternetAddrBSD *this)

{
  this->_padding_ = (longlong)&___7FInternetAddrBSD__6B_;
  this->SocketSubsystem = (FSocketSubsystemBSD *)0x0;
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
  return this;
}

// operator== @ 14310bd90

bool __thiscall FInternetAddrBSD::operator==(FInternetAddrBSD *this,FInternetAddr *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_res10;
  
  (**(code **)(this->_padding_ + 0xa8))(this,&local_res8);
  plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,&local_res10);
  if (*plVar4 == local_res8) {
    pcVar1 = *(code **)(this->_padding_ + 0x38);
    iVar2 = (**(code **)((longlong)*param_1 + 0x38))(param_1);
    iVar3 = (*pcVar1)(this);
    if (iVar3 == iVar2) {
      FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
      if (local_res8 == local_res10) {
        lVar5 = (this->Addr).__ss_align - (longlong)param_1[2];
        if (lVar5 == 0) {
          lVar5 = *(longlong *)(this->Addr).__ss_pad2 - (longlong)param_1[3];
        }
        return lVar5 == 0;
      }
      FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
      if (local_res8 == local_res10) {
        return *(int *)((this->Addr).__ss_pad1 + 2) == *(int *)&param_1[1].field_0x4;
      }
    }
  }
  return false;
}

// operator() @ 14310bed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
`FInternetAddrBSD::ToString'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  size_t sVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FString *__return_storage_ptr___00;
  int iVar9;
  bool bVar10;
  undefined1 auStackY_5f8 [32];
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_568;
  char local_448 [1040];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_598.Data.AllocatorInstance.Data._0_4_ = 0;
  ::FString::FString(__return_storage_ptr__,"");
  uVar2 = (**(code **)(**(longlong **)this + 0x108))();
  iVar3 = getnameinfo(*(longlong *)this + 8,uVar2,local_448,0x401);
  if (iVar3 == 0) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)this + 0xa8))(*(longlong **)this,&local_5b8);
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
    if (*plVar5 ==
        CONCAT44(local_598.Data.AllocatorInstance.Data._4_4_,
                 local_598.Data.AllocatorInstance.Data._0_4_)) {
      local_568._padding_ = 0;
      sVar6 = strlen(local_448);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_568,local_448,(int)sVar6,Yes)
      ;
      ::FString::FString(&local_5b8,local_568.Ptr);
      if ((void *)local_568._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_568._padding_);
      }
      ::FString::FString(&local_598,"%");
      pwVar8 = (wchar_t *)
               CONCAT44(local_598.Data.AllocatorInstance.Data._4_4_,
                        local_598.Data.AllocatorInstance.Data._0_4_);
      iVar3 = local_598.Data.ArrayNum + -1;
      if (local_598.Data.ArrayNum == 0) {
        iVar3 = 0;
        pwVar8 = L"";
      }
      iVar3 = ::FString::Find(&local_5b8,pwVar8,iVar3,CaseSensitive,FromEnd,-1);
      if ((void *)CONCAT44(local_598.Data.AllocatorInstance.Data._4_4_,
                           local_598.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_598.Data.AllocatorInstance.Data._4_4_,
                                       local_598.Data.AllocatorInstance.Data._0_4_));
      }
      if (iVar3 != -1) {
        iVar9 = local_5b8.Data.ArrayNum + -1;
        if (local_5b8.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        iVar4 = iVar9;
        if (iVar3 < iVar9) {
          iVar4 = iVar3;
        }
        iVar3 = 0;
        if (0 < iVar4) {
          iVar3 = iVar4;
        }
        ::FString::RemoveAt(&local_5b8,iVar3,iVar9 - iVar3,No);
      }
      bVar10 = **(char **)((longlong)this + 8) == '\0';
      if (bVar10) {
        __return_storage_ptr___00 = &local_588;
        pwVar8 = L"%s";
      }
      else {
        __return_storage_ptr___00 = &local_578;
        pwVar8 = L"[%s]";
      }
      ::FString::PrintfImpl(__return_storage_ptr___00,pwVar8);
      if (__return_storage_ptr__ != __return_storage_ptr___00) {
        pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (__return_storage_ptr___00->Data).AllocatorInstance.Data;
        (__return_storage_ptr___00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (__return_storage_ptr___00->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (__return_storage_ptr___00->Data).ArrayMax;
        (__return_storage_ptr___00->Data).ArrayNum = 0;
        (__return_storage_ptr___00->Data).ArrayMax = 0;
      }
      if ((bVar10) && (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_588.Data.AllocatorInstance.Data);
      }
      FVar7.Data = local_5b8.Data.AllocatorInstance.Data;
      if ((!bVar10) && (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_578.Data.AllocatorInstance.Data);
        FVar7.Data = local_5b8.Data.AllocatorInstance.Data;
      }
    }
    else {
      ::FString::FString(&local_5a8,local_448);
      FVar7.Data = local_5a8.Data.AllocatorInstance.Data;
      if (__return_storage_ptr__ != &local_5a8) {
        pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             local_5a8.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_5a8.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_5a8.Data.ArrayMax;
        local_5a8.Data.ArrayNum = 0;
        local_5a8.Data.ArrayMax = 0;
        local_5a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar7.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    if (**(char **)((longlong)this + 8) != '\0') {
      (**(code **)(**(longlong **)this + 0x38))();
      ::FString::PrintfImpl(&local_5b8,L":%d");
      iVar3 = local_5b8.Data.ArrayNum + -1;
      if (local_5b8.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_5b8.Data.AllocatorInstance.Data,iVar3);
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// Clear @ 14310d350

void __thiscall FInternetAddrBSD::Clear(FInternetAddrBSD *this)

{
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
  return;
}

// Clone @ 14310d390

TSharedRef<FInternetAddr,1> * __thiscall
FInternetAddrBSD::Clone(FInternetAddrBSD *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__)

{
  long64 lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  FInternetAddrBSD *this_00;
  FName *pFVar22;
  TRawPtrProxy<FInternetAddrBSD> local_res8;
  undefined1 local_res10 [8];
  TSharedRef<FInternetAddrBSD,1> local_38 [3];
  
  this_00 = ::operator_new(0x90);
  local_res8.Object = (FInternetAddrBSD *)0x0;
  if (this_00 != (FInternetAddrBSD *)0x0) {
    pFVar22 = (FName *)(**(code **)(this->_padding_ + 0xa8))(this,local_res10);
    local_res8.Object = FInternetAddrBSD(this_00,this->SocketSubsystem,*pFVar22);
  }
  TSharedRef<FInternetAddrBSD,1>::TSharedRef<FInternetAddrBSD,1><FInternetAddrBSD>
            (local_38,&local_res8);
  cVar16 = (this->Addr).__ss_pad1[0];
  cVar17 = (this->Addr).__ss_pad1[1];
  cVar18 = (this->Addr).__ss_pad1[2];
  cVar19 = (this->Addr).__ss_pad1[3];
  cVar20 = (this->Addr).__ss_pad1[4];
  cVar21 = (this->Addr).__ss_pad1[5];
  lVar1 = (this->Addr).__ss_align;
  uVar2 = *(undefined8 *)(this->Addr).__ss_pad2;
  uVar3 = *(undefined8 *)((this->Addr).__ss_pad2 + 8);
  uVar4 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x10);
  uVar5 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x18);
  uVar6 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x20);
  uVar7 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x28);
  uVar8 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x30);
  uVar9 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x38);
  uVar10 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x40);
  uVar11 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x48);
  uVar12 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x50);
  uVar13 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x58);
  uVar14 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x60);
  uVar15 = *(undefined8 *)((this->Addr).__ss_pad2 + 0x68);
  ((local_38[0].Object)->Addr).ss_family = (this->Addr).ss_family;
  ((local_38[0].Object)->Addr).__ss_pad1[0] = cVar16;
  ((local_38[0].Object)->Addr).__ss_pad1[1] = cVar17;
  ((local_38[0].Object)->Addr).__ss_pad1[2] = cVar18;
  ((local_38[0].Object)->Addr).__ss_pad1[3] = cVar19;
  ((local_38[0].Object)->Addr).__ss_pad1[4] = cVar20;
  ((local_38[0].Object)->Addr).__ss_pad1[5] = cVar21;
  ((local_38[0].Object)->Addr).__ss_align = lVar1;
  *(undefined8 *)((local_38[0].Object)->Addr).__ss_pad2 = uVar2;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 8) = uVar3;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x10) = uVar4;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x18) = uVar5;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x20) = uVar6;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x28) = uVar7;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x30) = uVar8;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x38) = uVar9;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x40) = uVar10;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x48) = uVar11;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x50) = uVar12;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x58) = uVar13;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x60) = uVar14;
  *(undefined8 *)(((local_38[0].Object)->Addr).__ss_pad2 + 0x68) = uVar15;
  __return_storage_ptr__->Object = (FInternetAddr *)local_38[0].Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38[0].SharedReferenceCount.ReferenceController;
  if (local_38[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CompareEndpoints @ 14310d4d0

bool __thiscall FInternetAddrBSD::CompareEndpoints(FInternetAddrBSD *this,FInternetAddr *param_1)

{
  long64 *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  uchar uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FInternetAddrBSD *pFVar10;
  undefined8 uStack_20;
  
  pcVar4 = *(code **)(this->_padding_ + 0x38);
  iVar7 = (**(code **)((longlong)*param_1 + 0x38))(param_1);
  iVar8 = (*pcVar4)(this);
  if (iVar8 == iVar7) {
    uVar2 = (this->Addr).ss_family;
    if (uVar2 == *(ushort *)(param_1 + 1)) {
                    /* WARNING: Could not recover jumptable at 0x00014310d529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(this->_padding_ + 0x88))(this,param_1);
      return (bool)uVar5;
    }
    if ((uVar2 == 2) || (*(ushort *)(param_1 + 1) == 2)) {
      pFVar10 = this;
      if (uVar2 != 0x17) {
        pFVar10 = (FInternetAddrBSD *)param_1;
      }
      if (uVar2 != 2) {
        this = (FInternetAddrBSD *)param_1;
      }
      plVar1 = &(pFVar10->Addr).__ss_align;
      if (((((char)(pFVar10->Addr).__ss_align != -1) ||
           (((pFVar10->Addr).__ss_align & 0xf00) != 0x200)) ||
          ((*(uint *)((this->Addr).__ss_pad1 + 2) & 0xf0000000) != 0xe0000000)) &&
         (((((short)*plVar1 != 0 || (*(short *)((longlong)&(pFVar10->Addr).__ss_align + 2) != 0)) ||
           ((*(short *)((longlong)&(pFVar10->Addr).__ss_align + 4) != 0 ||
            ((*(short *)((longlong)&(pFVar10->Addr).__ss_align + 6) != 0 ||
             (*(short *)(pFVar10->Addr).__ss_pad2 != 0)))))) ||
          ((*(short *)((pFVar10->Addr).__ss_pad2 + 2) != 0 ||
           (((*(short *)((pFVar10->Addr).__ss_pad2 + 4) != 0 ||
             (*(short *)((pFVar10->Addr).__ss_pad2 + 6) != 0)) ||
            (*(int *)((this->Addr).__ss_pad1 + 2) != 0)))))))) {
        if (((((short)*plVar1 != 0) || (*(short *)((longlong)&(pFVar10->Addr).__ss_align + 2) != 0))
            || (((*(short *)((longlong)&(pFVar10->Addr).__ss_align + 4) != 0 ||
                 ((*(short *)((longlong)&(pFVar10->Addr).__ss_align + 6) != 0 ||
                  (*(short *)(pFVar10->Addr).__ss_pad2 != 0)))) ||
                (*(short *)((pFVar10->Addr).__ss_pad2 + 2) != 0)))) ||
           (((*(short *)((pFVar10->Addr).__ss_pad2 + 4) != 0 ||
             (*(short *)((pFVar10->Addr).__ss_pad2 + 6) != 0x100)) ||
            (*(int *)((this->Addr).__ss_pad1 + 2) != 0x7f000001)))) {
          uVar6 = IN6_IS_ADDR_V4MAPPED((in6_addr *)plVar1);
          if (uVar6 == '\0') {
            return false;
          }
          uVar3 = *(undefined4 *)((this->Addr).__ss_pad1 + 2);
          uStack_20 = CONCAT17((char)((uint)uVar3 >> 0x18),CONCAT34((int3)uVar3,0xffff0000));
          lVar9 = -*plVar1;
          if (lVar9 == 0) {
            lVar9 = uStack_20 - *(longlong *)(pFVar10->Addr).__ss_pad2;
          }
          return lVar9 == 0;
        }
      }
      return true;
    }
  }
  return false;
}

// GetIp @ 143110f10

void __thiscall FInternetAddrBSD::GetIp(FInternetAddrBSD *this,uint *param_1)

{
  u_long uVar1;
  longlong *plVar2;
  longlong local_res8;
  undefined1 local_res18 [8];
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this,local_res18);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar2 == local_res8) {
    *param_1 = 0;
    if (((((short)(this->Addr).__ss_align == 0) &&
         (*(short *)((longlong)&(this->Addr).__ss_align + 2) == 0)) &&
        (*(short *)((longlong)&(this->Addr).__ss_align + 4) == 0)) &&
       (((*(short *)((longlong)&(this->Addr).__ss_align + 6) == 0 &&
         (*(short *)(this->Addr).__ss_pad2 == 0)) && (*(short *)((this->Addr).__ss_pad2 + 2) == -1))
       )) {
      *param_1 = CONCAT31(CONCAT21(CONCAT11((this->Addr).__ss_pad2[4],(this->Addr).__ss_pad2[5]),
                                   (this->Addr).__ss_pad2[6]),(this->Addr).__ss_pad2[7]);
      return;
    }
  }
  else {
    uVar1 = ntohl(*(u_long *)((this->Addr).__ss_pad1 + 2));
    *param_1 = uVar1;
  }
  return;
}

// GetPort @ 143112860

int __thiscall FInternetAddrBSD::GetPort(FInternetAddrBSD *this)

{
  u_short uVar1;
  undefined1 local_res10 [8];
  
  (**(code **)(this->_padding_ + 0xa8))(this,local_res10);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  uVar1 = ntohs(*(u_short *)(this->Addr).__ss_pad1);
  return (int)uVar1;
}

// GetProtocolType @ 143112ef0

FName __thiscall FInternetAddrBSD::GetProtocolType(FInternetAddrBSD *this)

{
  ushort uVar1;
  FName in_RDX;
  
  uVar1 = (this->Addr).ss_family;
  if (uVar1 == 2) {
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
    return in_RDX;
  }
  if (uVar1 != 0x17) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  return in_RDX;
}

// GetRawIp @ 143112f50

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FInternetAddrBSD::GetRawIp
          (FInternetAddrBSD *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  ushort uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement local_18;
  FScriptContainerElement local_17;
  FScriptContainerElement local_16 [14];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = (this->Addr).ss_family;
  if (uVar2 == 2) {
    uVar3 = *(undefined4 *)((this->Addr).__ss_pad1 + 2);
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    (__return_storage_ptr__->AllocatorInstance).Data[iVar7] = SUB41(uVar3,0);
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_18 = SUB41((uint)uVar3 >> 8,0);
    if (((pFVar10 <= &local_18) && (&local_18 < pFVar10 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    (__return_storage_ptr__->AllocatorInstance).Data[iVar7] = local_18;
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_17 = SUB41((uint)uVar3 >> 0x10,0);
    if (((pFVar10 <= &local_17) && (&local_17 < pFVar10 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    local_16[0] = SUB41((uint)uVar3 >> 0x18,0);
    (__return_storage_ptr__->AllocatorInstance).Data[iVar7] = local_17;
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar10 <= local_16) && (local_16 < pFVar10 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    (__return_storage_ptr__->AllocatorInstance).Data[iVar7] = local_16[0];
  }
  else if (uVar2 == 0x17) {
    pFVar10 = (FScriptContainerElement *)&(this->Addr).__ss_align;
    lVar9 = 0x10;
    do {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + __return_storage_ptr__->ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      FVar1 = *pFVar10;
      pFVar10 = pFVar10 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar7] = FVar1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return __return_storage_ptr__;
}

// GetScopeId @ 143113300

uint __thiscall FInternetAddrBSD::GetScopeId(FInternetAddrBSD *this)

{
  u_long uVar1;
  
  if ((this->Addr).ss_family == 0x17) {
                    /* WARNING: Could not recover jumptable at 0x00014311330a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = ntohl(*(u_long *)((this->Addr).__ss_pad2 + 8));
    return uVar1;
  }
  return 0;
}

// GetStorageSize @ 143113820

int __thiscall FInternetAddrBSD::GetStorageSize(FInternetAddrBSD *this)

{
  int iVar1;
  longlong *plVar2;
  longlong local_res8;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this,local_res10);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  iVar1 = 0x1c;
  if (*plVar2 == local_res8) {
    iVar1 = 0x10;
  }
  return iVar1;
}

// GetTypeHash @ 143113870

uint __thiscall FInternetAddrBSD::GetTypeHash(FInternetAddrBSD *this)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  u_long uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ushort uVar8;
  wchar_t *pwVar9;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  void *local_18 [2];
  
  (**(code **)(this->_padding_ + 0xa8))(this,&local_res8);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  if (local_res8 == local_res10) {
    iVar4 = (**(code **)(this->_padding_ + 0x38))(this);
    uVar5 = ntohl(*(u_long *)((this->Addr).__ss_pad1 + 2));
    return uVar5 + iVar4 * 0x17;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (local_res8 == local_res18) {
    puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x80))(this,local_18,1);
    if (*(int *)(puVar7 + 1) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)*puVar7;
    }
    if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0xb4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    uVar6 = 0;
    wVar1 = *pwVar9;
    while (wVar1 != L'\0') {
      pwVar9 = pwVar9 + 1;
      uVar8 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
      uVar6 = uVar6 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar6 ^ (byte)uVar8)];
      uVar6 = uVar6 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar8 >> 8 ^ uVar6) & 0xff];
      wVar1 = *pwVar9;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    return uVar6;
  }
  return 0;
}

// IsPortValid @ 143114070

bool __thiscall FInternetAddrBSD::IsPortValid(FInternetAddrBSD *this,int param_1)

{
  return (uint)param_1 < 0x10000;
}

// IsValid @ 1431140b0

bool __thiscall FInternetAddrBSD::IsValid(FInternetAddrBSD *this)

{
  longlong lVar1;
  longlong local_18;
  longlong local_10;
  
  (**(code **)(this->_padding_ + 0xa8))(this,&local_10);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  if (local_10 == local_18) {
    return *(int *)((this->Addr).__ss_pad1 + 2) != 0;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (local_10 == local_18) {
    lVar1 = (this->Addr).__ss_align;
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(this->Addr).__ss_pad2;
    }
    return lVar1 != 0;
  }
  return false;
}

// ResetScopeId @ 143115990

void __thiscall FInternetAddrBSD::ResetScopeId(FInternetAddrBSD *this)

{
  if ((this->Addr).ss_family == 0x17) {
    (this->Addr).__ss_pad2[8] = '\0';
    (this->Addr).__ss_pad2[9] = '\0';
    (this->Addr).__ss_pad2[10] = '\0';
    (this->Addr).__ss_pad2[0xb] = '\0';
  }
  return;
}

// Set @ 143116170

void __thiscall FInternetAddrBSD::Set(FInternetAddrBSD *this,sockaddr_storage *param_1)

{
  long64 lVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  
  cVar3 = param_1->__ss_pad1[0];
  cVar4 = param_1->__ss_pad1[1];
  cVar5 = param_1->__ss_pad1[2];
  cVar6 = param_1->__ss_pad1[3];
  cVar7 = param_1->__ss_pad1[4];
  cVar8 = param_1->__ss_pad1[5];
  lVar1 = param_1->__ss_align;
  (this->Addr).ss_family = param_1->ss_family;
  (this->Addr).__ss_pad1[0] = cVar3;
  (this->Addr).__ss_pad1[1] = cVar4;
  (this->Addr).__ss_pad1[2] = cVar5;
  (this->Addr).__ss_pad1[3] = cVar6;
  (this->Addr).__ss_pad1[4] = cVar7;
  (this->Addr).__ss_pad1[5] = cVar8;
  (this->Addr).__ss_align = lVar1;
  uVar2 = *(undefined8 *)(param_1->__ss_pad2 + 8);
  *(undefined8 *)(this->Addr).__ss_pad2 = *(undefined8 *)param_1->__ss_pad2;
  *(undefined8 *)((this->Addr).__ss_pad2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1->__ss_pad2 + 0x18);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x10) = *(undefined8 *)(param_1->__ss_pad2 + 0x10);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1->__ss_pad2 + 0x28);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x20) = *(undefined8 *)(param_1->__ss_pad2 + 0x20);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_1->__ss_pad2 + 0x38);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x30) = *(undefined8 *)(param_1->__ss_pad2 + 0x30);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x38) = uVar2;
  uVar2 = *(undefined8 *)(param_1->__ss_pad2 + 0x48);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x40) = *(undefined8 *)(param_1->__ss_pad2 + 0x40);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x48) = uVar2;
  uVar2 = *(undefined8 *)(param_1->__ss_pad2 + 0x58);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x50) = *(undefined8 *)(param_1->__ss_pad2 + 0x50);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x58) = uVar2;
  uVar2 = *(undefined8 *)(param_1->__ss_pad2 + 0x68);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x60) = *(undefined8 *)(param_1->__ss_pad2 + 0x60);
  *(undefined8 *)((this->Addr).__ss_pad2 + 0x68) = uVar2;
  return;
}

// Set @ 1431161c0

void __thiscall FInternetAddrBSD::Set(FInternetAddrBSD *this,sockaddr_storage *param_1,int param_2)

{
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
  memcpy(&this->Addr,param_1,(longlong)param_2);
  return;
}

// SetAnyAddress @ 143116210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInternetAddrBSD::SetAnyAddress(FInternetAddrBSD *this)

{
  longlong *plVar1;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  if (this->SocketSubsystem == (FSocketSubsystemBSD *)0x0) {
    if (2 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      return;
    }
    return;
  }
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this,local_res10);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar1 == local_res8) {
                    /* WARNING: Could not recover jumptable at 0x000143116264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xe0))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143116270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd8))(this);
  return;
}

// SetAnyIPv4Address @ 1431162b0

void __thiscall FInternetAddrBSD::SetAnyIPv4Address(FInternetAddrBSD *this)

{
  u_long uVar1;
  
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
  uVar1 = htonl(0);
  *(u_long *)((this->Addr).__ss_pad1 + 2) = uVar1;
  (this->Addr).ss_family = 2;
  return;
}

// SetAnyIPv6Address @ 143116310

void __thiscall FInternetAddrBSD::SetAnyIPv6Address(FInternetAddrBSD *this)

{
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
                    /* WARNING: Could not recover jumptable at 0x000143116350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb8))(0,&in6addr_any);
  return;
}

// SetBroadcastAddress @ 1431163a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInternetAddrBSD::SetBroadcastAddress(FInternetAddrBSD *this)

{
  longlong *plVar1;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  if (this->SocketSubsystem == (FSocketSubsystemBSD *)0x0) {
    if (2 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      return;
    }
    return;
  }
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this,local_res10);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar1 == local_res8) {
                    /* WARNING: Could not recover jumptable at 0x0001431163f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0xf0))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143116400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xe8))(this);
  return;
}

// SetIPv4BroadcastAddress @ 143116440

void __thiscall FInternetAddrBSD::SetIPv4BroadcastAddress(FInternetAddrBSD *this)

{
  u_long uVar1;
  
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
  uVar1 = htonl(0xffffffff);
  *(u_long *)((this->Addr).__ss_pad1 + 2) = uVar1;
  (this->Addr).ss_family = 2;
  return;
}

// SetIPv4LoopbackAddress @ 1431164a0

void __thiscall FInternetAddrBSD::SetIPv4LoopbackAddress(FInternetAddrBSD *this)

{
  u_long uVar1;
  
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
  uVar1 = htonl(0x7f000001);
  *(u_long *)((this->Addr).__ss_pad1 + 2) = uVar1;
  (this->Addr).ss_family = 2;
  return;
}

// SetIPv6BroadcastAddress @ 143116500

void __thiscall FInternetAddrBSD::SetIPv6BroadcastAddress(FInternetAddrBSD *this)

{
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
                    /* WARNING: Could not recover jumptable at 0x000143116540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb8))(0,&in6addr_allnodesonlink);
  return;
}

// SetIPv6LoopbackAddress @ 143116550

void __thiscall FInternetAddrBSD::SetIPv6LoopbackAddress(FInternetAddrBSD *this)

{
  *(undefined8 *)(this->Addr).__ss_pad1 = 0;
  *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
  (this->Addr).__ss_pad2[2] = '\0';
  (this->Addr).__ss_pad2[3] = '\0';
  (this->Addr).__ss_pad2[4] = '\0';
  (this->Addr).__ss_pad2[5] = '\0';
  (this->Addr).__ss_pad2[6] = '\0';
  (this->Addr).__ss_pad2[7] = '\0';
  (this->Addr).__ss_pad2[8] = '\0';
  (this->Addr).__ss_pad2[9] = '\0';
  (this->Addr).__ss_pad2[10] = '\0';
  (this->Addr).__ss_pad2[0xb] = '\0';
  (this->Addr).__ss_pad2[0xc] = '\0';
  (this->Addr).__ss_pad2[0xd] = '\0';
  (this->Addr).__ss_pad2[0xe] = '\0';
  (this->Addr).__ss_pad2[0xf] = '\0';
  (this->Addr).__ss_pad2[0x10] = '\0';
  (this->Addr).__ss_pad2[0x11] = '\0';
  (this->Addr).__ss_pad2[0x12] = '\0';
  (this->Addr).__ss_pad2[0x13] = '\0';
  (this->Addr).__ss_pad2[0x14] = '\0';
  (this->Addr).__ss_pad2[0x15] = '\0';
  (this->Addr).__ss_pad2[0x16] = '\0';
  (this->Addr).__ss_pad2[0x17] = '\0';
  (this->Addr).__ss_pad2[0x18] = '\0';
  (this->Addr).__ss_pad2[0x19] = '\0';
  (this->Addr).__ss_pad2[0x1a] = '\0';
  (this->Addr).__ss_pad2[0x1b] = '\0';
  (this->Addr).__ss_pad2[0x1c] = '\0';
  (this->Addr).__ss_pad2[0x1d] = '\0';
  (this->Addr).__ss_pad2[0x1e] = '\0';
  (this->Addr).__ss_pad2[0x1f] = '\0';
  (this->Addr).__ss_pad2[0x20] = '\0';
  (this->Addr).__ss_pad2[0x21] = '\0';
  (this->Addr).__ss_pad2[0x22] = '\0';
  (this->Addr).__ss_pad2[0x23] = '\0';
  (this->Addr).__ss_pad2[0x24] = '\0';
  (this->Addr).__ss_pad2[0x25] = '\0';
  (this->Addr).__ss_pad2[0x26] = '\0';
  (this->Addr).__ss_pad2[0x27] = '\0';
  (this->Addr).__ss_pad2[0x28] = '\0';
  (this->Addr).__ss_pad2[0x29] = '\0';
  (this->Addr).__ss_pad2[0x2a] = '\0';
  (this->Addr).__ss_pad2[0x2b] = '\0';
  (this->Addr).__ss_pad2[0x2c] = '\0';
  (this->Addr).__ss_pad2[0x2d] = '\0';
  (this->Addr).__ss_pad2[0x2e] = '\0';
  (this->Addr).__ss_pad2[0x2f] = '\0';
  (this->Addr).__ss_pad2[0x30] = '\0';
  (this->Addr).__ss_pad2[0x31] = '\0';
  (this->Addr).__ss_pad2[0x32] = '\0';
  (this->Addr).__ss_pad2[0x33] = '\0';
  (this->Addr).__ss_pad2[0x34] = '\0';
  (this->Addr).__ss_pad2[0x35] = '\0';
  (this->Addr).__ss_pad2[0x36] = '\0';
  (this->Addr).__ss_pad2[0x37] = '\0';
  (this->Addr).__ss_pad2[0x38] = '\0';
  (this->Addr).__ss_pad2[0x39] = '\0';
  (this->Addr).__ss_pad2[0x3a] = '\0';
  (this->Addr).__ss_pad2[0x3b] = '\0';
  (this->Addr).__ss_pad2[0x3c] = '\0';
  (this->Addr).__ss_pad2[0x3d] = '\0';
  (this->Addr).__ss_pad2[0x3e] = '\0';
  (this->Addr).__ss_pad2[0x3f] = '\0';
  (this->Addr).__ss_pad2[0x40] = '\0';
  (this->Addr).__ss_pad2[0x41] = '\0';
  (this->Addr).__ss_pad2[0x42] = '\0';
  (this->Addr).__ss_pad2[0x43] = '\0';
  (this->Addr).__ss_pad2[0x44] = '\0';
  (this->Addr).__ss_pad2[0x45] = '\0';
  (this->Addr).__ss_pad2[0x46] = '\0';
  (this->Addr).__ss_pad2[0x47] = '\0';
  (this->Addr).__ss_pad2[0x48] = '\0';
  (this->Addr).__ss_pad2[0x49] = '\0';
  (this->Addr).__ss_pad2[0x4a] = '\0';
  (this->Addr).__ss_pad2[0x4b] = '\0';
  (this->Addr).__ss_pad2[0x4c] = '\0';
  (this->Addr).__ss_pad2[0x4d] = '\0';
  (this->Addr).__ss_pad2[0x4e] = '\0';
  (this->Addr).__ss_pad2[0x4f] = '\0';
  (this->Addr).__ss_pad2[0x50] = '\0';
  (this->Addr).__ss_pad2[0x51] = '\0';
  (this->Addr).__ss_pad2[0x52] = '\0';
  (this->Addr).__ss_pad2[0x53] = '\0';
  (this->Addr).__ss_pad2[0x54] = '\0';
  (this->Addr).__ss_pad2[0x55] = '\0';
  (this->Addr).__ss_pad2[0x56] = '\0';
  (this->Addr).__ss_pad2[0x57] = '\0';
  (this->Addr).__ss_pad2[0x58] = '\0';
  (this->Addr).__ss_pad2[0x59] = '\0';
  (this->Addr).__ss_pad2[0x5a] = '\0';
  (this->Addr).__ss_pad2[0x5b] = '\0';
  (this->Addr).__ss_pad2[0x5c] = '\0';
  (this->Addr).__ss_pad2[0x5d] = '\0';
  (this->Addr).__ss_pad2[0x5e] = '\0';
  (this->Addr).__ss_pad2[0x5f] = '\0';
  (this->Addr).__ss_pad2[0x60] = '\0';
  (this->Addr).__ss_pad2[0x61] = '\0';
  (this->Addr).__ss_pad2[0x62] = '\0';
  (this->Addr).__ss_pad2[99] = '\0';
  (this->Addr).__ss_pad2[100] = '\0';
  (this->Addr).__ss_pad2[0x65] = '\0';
  (this->Addr).__ss_pad2[0x66] = '\0';
  (this->Addr).__ss_pad2[0x67] = '\0';
  (this->Addr).__ss_pad2[0x68] = '\0';
  (this->Addr).__ss_pad2[0x69] = '\0';
  (this->Addr).__ss_pad2[0x6a] = '\0';
  (this->Addr).__ss_pad2[0x6b] = '\0';
  (this->Addr).__ss_pad2[0x6c] = '\0';
  (this->Addr).__ss_pad2[0x6d] = '\0';
  (this->Addr).__ss_pad2[0x6e] = '\0';
  (this->Addr).__ss_pad2[0x6f] = '\0';
  (this->Addr).ss_family = 0;
                    /* WARNING: Could not recover jumptable at 0x000143116590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb8))(0,&in6addr_loopback);
  return;
}

// SetIp @ 143116a10

void __thiscall FInternetAddrBSD::SetIp(FInternetAddrBSD *this,sockaddr_storage *param_1)

{
  if (param_1->ss_family == 2) {
    (**(code **)(this->_padding_ + 0xc0))(this,param_1->__ss_pad1 + 2);
  }
  if (param_1->ss_family == 0x17) {
    (**(code **)(this->_padding_ + 0xb8))(this,&param_1->__ss_align);
    *(undefined4 *)((this->Addr).__ss_pad2 + 8) = *(undefined4 *)(param_1->__ss_pad2 + 8);
  }
  return;
}

// SetIp @ 143116a60

void __thiscall FInternetAddrBSD::SetIp(FInternetAddrBSD *this,in6_addr *param_1)

{
  long64 lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long64 *)&param_1->u;
  uVar2 = *(undefined8 *)((longlong)&param_1->u + 8);
  (this->Addr).ss_family = 0x17;
  (this->Addr).__ss_align = lVar1;
  *(undefined8 *)(this->Addr).__ss_pad2 = uVar2;
  return;
}

// SetIp @ 143116a80

void __thiscall FInternetAddrBSD::SetIp(FInternetAddrBSD *this,in_addr *param_1)

{
  ((<unnamed_type_S_un> *)((this->Addr).__ss_pad1 + 2))->S_un_b =
       (<unnamed_type_S_un_b>)param_1->S_un;
  (this->Addr).ss_family = 2;
  return;
}

// SetIp @ 143116aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FInternetAddrBSD::SetIp(FInternetAddrBSD *this,uint param_1)

{
  u_long uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined4 uStack_18;
  u_long uStack_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this,&local_20);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar2 == local_28) {
    if (param_1 == 0) {
      (**(code **)(this->_padding_ + 0xe0))(this);
    }
    else if (param_1 == 0xffffffff) {
      (**(code **)(this->_padding_ + 0xf0))(this);
    }
    else {
      uVar1 = htonl(param_1);
      local_20 = 0;
      _uStack_18 = CONCAT44(uVar1,0xffff0000);
      (**(code **)(this->_padding_ + 0xb8))(this,&local_20);
    }
  }
  else {
    uVar1 = htonl(param_1);
    *(u_long *)((this->Addr).__ss_pad1 + 2) = uVar1;
    (this->Addr).ss_family = 2;
  }
  return;
}

// SetIp @ 143116b90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInternetAddrBSD::SetIp(FInternetAddrBSD *this,wchar_t *param_1,bool *param_2)

{
  FSocketSubsystemBSD *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FString *pFVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *_Str;
  FString local_c8;
  FString local_b8;
  longlong *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  *param_2 = false;
  ::FString::FString(&local_c8,param_1);
  _Str = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  ::FString::FString(&local_98,":");
  iVar4 = local_98.Data.ArrayNum + -1;
  FVar11.Data = local_98.Data.AllocatorInstance.Data;
  if (local_98.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  iVar4 = ::FString::Find(&local_c8,(wchar_t *)FVar11.Data,iVar4,IgnoreCase,FromStart,-1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,":");
  iVar5 = local_88.Data.ArrayNum + -1;
  FVar11.Data = local_88.Data.AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  iVar5 = ::FString::Find(&local_c8,(wchar_t *)FVar11.Data,iVar5,IgnoreCase,FromEnd,-1);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b8,"]:");
  if (local_b8.Data.ArrayNum == 0) {
    FVar11.Data = (FScriptContainerElement *)L"";
LAB_143116ca4:
    sVar8 = wcslen((wchar_t *)FVar11.Data);
    iVar6 = ::FString::Find(&local_c8,(wchar_t *)FVar11.Data,(int)sVar8,IgnoreCase,FromStart,-1);
    if (iVar6 == -1) goto LAB_143116cd7;
  }
  else {
    FVar11.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_143116ca4;
LAB_143116cd7:
    if ((iVar4 != iVar5) || (iVar5 == -1)) {
      bVar3 = false;
      goto LAB_143116ce9;
    }
  }
  bVar3 = true;
LAB_143116ce9:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar9 = ::FString::RightChop(&local_c8,&local_58,iVar5 + 1);
    if (&local_38 != pFVar9) {
      _Str = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (pFVar9->Data).ArrayNum;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar4 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    iVar6 = iVar4;
    if (iVar5 < iVar4) {
      iVar6 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    ::FString::RemoveAt(&local_c8,iVar5,iVar4 - iVar5,No);
  }
  ::FString::FString(&local_78,"[");
  iVar4 = local_78.Data.ArrayNum + -1;
  FVar11.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromStart(&local_c8,(wchar_t *)FVar11.Data,iVar4,IgnoreCase);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_68,"]");
  iVar4 = local_68.Data.ArrayNum + -1;
  FVar11.Data = local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_c8,(wchar_t *)FVar11.Data,iVar4,IgnoreCase);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->SocketSubsystem;
  if (pFVar1 == (FSocketSubsystemBSD *)0x0) {
    if (5 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    }
  }
  else {
    (**(code **)(*(longlong *)pFVar1 + 0x58))(pFVar1,&local_a8,&local_c8);
    if (local_a8 != (longlong *)0x0) {
      *param_2 = true;
      pcVar2 = *(code **)(this->_padding_ + 0x58);
      if ((local_a8 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = (**(code **)(*local_a8 + 0x60))(local_a8,local_48);
      (*pcVar2)(this,uVar10);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
      if (1 < iVar7) {
        pcVar2 = *(code **)(this->_padding_ + 0x28);
        iVar7 = _wtoi((wchar_t *)_Str);
        (*pcVar2)(this,iVar7);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  }
  if (_Str != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Str);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// SetLoopbackAddress @ 143117480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInternetAddrBSD::SetLoopbackAddress(FInternetAddrBSD *this)

{
  longlong *plVar1;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  if (this->SocketSubsystem == (FSocketSubsystemBSD *)0x0) {
    if (2 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      return;
    }
    return;
  }
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xa8))(this,local_res10);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*plVar1 == local_res8) {
                    /* WARNING: Could not recover jumptable at 0x0001431174d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x100))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001431174e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf8))(this);
  return;
}

// SetPort @ 143117770

void __thiscall FInternetAddrBSD::SetPort(FInternetAddrBSD *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  u_short uVar3;
  undefined1 local_res18 [16];
  
  (**(code **)(this->_padding_ + 0xa8))(this,local_res18);
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if ((param_1 != (param_1 & 0xffffU)) || (param_1 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = htons((u_short)param_1);
  *(u_short *)(this->Addr).__ss_pad1 = uVar3;
  return;
}

// SetRawIp @ 143117810

void __thiscall
FInternetAddrBSD::SetRawIp
          (FInternetAddrBSD *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  sockaddr_storage *psVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  psVar1 = &this->Addr;
  if (param_1->ArrayNum != 4) {
    if (param_1->ArrayNum < 0x10) {
      *(undefined8 *)(this->Addr).__ss_pad1 = 0;
      *(undefined8 *)((longlong)&(this->Addr).__ss_align + 2) = 0;
      (this->Addr).__ss_pad2[2] = '\0';
      (this->Addr).__ss_pad2[3] = '\0';
      (this->Addr).__ss_pad2[4] = '\0';
      (this->Addr).__ss_pad2[5] = '\0';
      (this->Addr).__ss_pad2[6] = '\0';
      (this->Addr).__ss_pad2[7] = '\0';
      (this->Addr).__ss_pad2[8] = '\0';
      (this->Addr).__ss_pad2[9] = '\0';
      (this->Addr).__ss_pad2[10] = '\0';
      (this->Addr).__ss_pad2[0xb] = '\0';
      (this->Addr).__ss_pad2[0xc] = '\0';
      (this->Addr).__ss_pad2[0xd] = '\0';
      (this->Addr).__ss_pad2[0xe] = '\0';
      (this->Addr).__ss_pad2[0xf] = '\0';
      (this->Addr).__ss_pad2[0x10] = '\0';
      (this->Addr).__ss_pad2[0x11] = '\0';
      (this->Addr).__ss_pad2[0x12] = '\0';
      (this->Addr).__ss_pad2[0x13] = '\0';
      (this->Addr).__ss_pad2[0x14] = '\0';
      (this->Addr).__ss_pad2[0x15] = '\0';
      (this->Addr).__ss_pad2[0x16] = '\0';
      (this->Addr).__ss_pad2[0x17] = '\0';
      (this->Addr).__ss_pad2[0x18] = '\0';
      (this->Addr).__ss_pad2[0x19] = '\0';
      (this->Addr).__ss_pad2[0x1a] = '\0';
      (this->Addr).__ss_pad2[0x1b] = '\0';
      (this->Addr).__ss_pad2[0x1c] = '\0';
      (this->Addr).__ss_pad2[0x1d] = '\0';
      (this->Addr).__ss_pad2[0x1e] = '\0';
      (this->Addr).__ss_pad2[0x1f] = '\0';
      (this->Addr).__ss_pad2[0x20] = '\0';
      (this->Addr).__ss_pad2[0x21] = '\0';
      (this->Addr).__ss_pad2[0x22] = '\0';
      (this->Addr).__ss_pad2[0x23] = '\0';
      (this->Addr).__ss_pad2[0x24] = '\0';
      (this->Addr).__ss_pad2[0x25] = '\0';
      (this->Addr).__ss_pad2[0x26] = '\0';
      (this->Addr).__ss_pad2[0x27] = '\0';
      (this->Addr).__ss_pad2[0x28] = '\0';
      (this->Addr).__ss_pad2[0x29] = '\0';
      (this->Addr).__ss_pad2[0x2a] = '\0';
      (this->Addr).__ss_pad2[0x2b] = '\0';
      (this->Addr).__ss_pad2[0x2c] = '\0';
      (this->Addr).__ss_pad2[0x2d] = '\0';
      (this->Addr).__ss_pad2[0x2e] = '\0';
      (this->Addr).__ss_pad2[0x2f] = '\0';
      (this->Addr).__ss_pad2[0x30] = '\0';
      (this->Addr).__ss_pad2[0x31] = '\0';
      (this->Addr).__ss_pad2[0x32] = '\0';
      (this->Addr).__ss_pad2[0x33] = '\0';
      (this->Addr).__ss_pad2[0x34] = '\0';
      (this->Addr).__ss_pad2[0x35] = '\0';
      (this->Addr).__ss_pad2[0x36] = '\0';
      (this->Addr).__ss_pad2[0x37] = '\0';
      (this->Addr).__ss_pad2[0x38] = '\0';
      (this->Addr).__ss_pad2[0x39] = '\0';
      (this->Addr).__ss_pad2[0x3a] = '\0';
      (this->Addr).__ss_pad2[0x3b] = '\0';
      (this->Addr).__ss_pad2[0x3c] = '\0';
      (this->Addr).__ss_pad2[0x3d] = '\0';
      (this->Addr).__ss_pad2[0x3e] = '\0';
      (this->Addr).__ss_pad2[0x3f] = '\0';
      (this->Addr).__ss_pad2[0x40] = '\0';
      (this->Addr).__ss_pad2[0x41] = '\0';
      (this->Addr).__ss_pad2[0x42] = '\0';
      (this->Addr).__ss_pad2[0x43] = '\0';
      (this->Addr).__ss_pad2[0x44] = '\0';
      (this->Addr).__ss_pad2[0x45] = '\0';
      (this->Addr).__ss_pad2[0x46] = '\0';
      (this->Addr).__ss_pad2[0x47] = '\0';
      (this->Addr).__ss_pad2[0x48] = '\0';
      (this->Addr).__ss_pad2[0x49] = '\0';
      (this->Addr).__ss_pad2[0x4a] = '\0';
      (this->Addr).__ss_pad2[0x4b] = '\0';
      (this->Addr).__ss_pad2[0x4c] = '\0';
      (this->Addr).__ss_pad2[0x4d] = '\0';
      (this->Addr).__ss_pad2[0x4e] = '\0';
      (this->Addr).__ss_pad2[0x4f] = '\0';
      (this->Addr).__ss_pad2[0x50] = '\0';
      (this->Addr).__ss_pad2[0x51] = '\0';
      (this->Addr).__ss_pad2[0x52] = '\0';
      (this->Addr).__ss_pad2[0x53] = '\0';
      (this->Addr).__ss_pad2[0x54] = '\0';
      (this->Addr).__ss_pad2[0x55] = '\0';
      (this->Addr).__ss_pad2[0x56] = '\0';
      (this->Addr).__ss_pad2[0x57] = '\0';
      (this->Addr).__ss_pad2[0x58] = '\0';
      (this->Addr).__ss_pad2[0x59] = '\0';
      (this->Addr).__ss_pad2[0x5a] = '\0';
      (this->Addr).__ss_pad2[0x5b] = '\0';
      (this->Addr).__ss_pad2[0x5c] = '\0';
      (this->Addr).__ss_pad2[0x5d] = '\0';
      (this->Addr).__ss_pad2[0x5e] = '\0';
      (this->Addr).__ss_pad2[0x5f] = '\0';
      (this->Addr).__ss_pad2[0x60] = '\0';
      (this->Addr).__ss_pad2[0x61] = '\0';
      (this->Addr).__ss_pad2[0x62] = '\0';
      (this->Addr).__ss_pad2[99] = '\0';
      (this->Addr).__ss_pad2[100] = '\0';
      (this->Addr).__ss_pad2[0x65] = '\0';
      (this->Addr).__ss_pad2[0x66] = '\0';
      (this->Addr).__ss_pad2[0x67] = '\0';
      (this->Addr).__ss_pad2[0x68] = '\0';
      (this->Addr).__ss_pad2[0x69] = '\0';
      (this->Addr).__ss_pad2[0x6a] = '\0';
      (this->Addr).__ss_pad2[0x6b] = '\0';
      (this->Addr).__ss_pad2[0x6c] = '\0';
      (this->Addr).__ss_pad2[0x6d] = '\0';
      (this->Addr).__ss_pad2[0x6e] = '\0';
      (this->Addr).__ss_pad2[0x6f] = '\0';
      psVar1->ss_family = 0;
      return;
    }
    iVar7 = 0;
    lVar8 = 0;
    do {
      if (param_1->ArrayNum <= iVar7) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = iVar7 + 1;
      *(FScriptContainerElement *)((this->Addr).__ss_pad1 + lVar8 + 6) =
           (param_1->AllocatorInstance).Data[lVar8];
      lVar8 = lVar8 + 1;
    } while (iVar7 < 0x10);
    psVar1->ss_family = 0x17;
    return;
  }
  psVar1->ss_family = 2;
  if (param_1->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar2 = *(param_1->AllocatorInstance).Data;
  if (param_1->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar3 = (param_1->AllocatorInstance).Data[1];
  if (param_1->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar4 = (param_1->AllocatorInstance).Data[2];
  if (param_1->ArrayNum < 4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(uint *)((this->Addr).__ss_pad1 + 2) =
       CONCAT13((param_1->AllocatorInstance).Data[3],CONCAT12(FVar4,CONCAT11(FVar3,FVar2)));
  return;
}

// SetScopeId @ 143117b20

void __thiscall FInternetAddrBSD::SetScopeId(FInternetAddrBSD *this,uint param_1)

{
  u_long uVar1;
  
  if ((this->Addr).ss_family == 0x17) {
    uVar1 = htonl(param_1);
    *(u_long *)((this->Addr).__ss_pad2 + 8) = uVar1;
  }
  return;
}

// ToString @ 1431184d0

FString * __thiscall
FInternetAddrBSD::ToString(FInternetAddrBSD *this,FString *__return_storage_ptr__,bool param_1)

{
  undefined1 local_res18 [16];
  FInternetAddrBSD *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_res18[0] = param_1;
  local_18 = this;
  `FInternetAddrBSD::ToString'::__l2::<lambda_1>::operator()(&local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

