// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Networking
// Functions: 4

// FromHostAndPort @ 143119720

bool __cdecl FIPv4Endpoint::FromHostAndPort(FString *param_1,FIPv4Endpoint *param_2)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInternetAddr *pFVar3;
  FIPv4Endpoint FVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  undefined2 local_res18 [4];
  undefined4 local_res20;
  undefined2 uStackX_24;
  undefined2 uStackX_26;
  FString local_b8;
  FString local_a8;
  undefined8 local_98;
  FString local_90;
  void *local_78 [2];
  void *local_68;
  void *local_58;
  int local_48;
  FAddressInfoResultData *local_40;
  int local_38;
  FName local_28 [2];
  
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  ::FString::FString(&local_90,L":");
  bVar5 = ::FString::Split(param_1,&local_90,&local_a8,&local_b8,IgnoreCase,FromEnd);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    ::FString::TrimStartAndEndInline(&local_a8);
    ::FString::TrimStartAndEndInline(&local_b8);
    if ((1 < local_a8.Data.ArrayNum) && (1 < local_b8.Data.ArrayNum)) {
      pFVar7 = ::FName::FName(local_28,L"WINDOWS");
      pIVar8 = ISocketSubsystem::Get(pFVar7);
      pcVar1 = *(code **)(pIVar8->_padding_ + 0x40);
      FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar10.Data = local_b8.Data.AllocatorInstance.Data;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar9.Data = local_a8.Data.AllocatorInstance.Data;
      }
      (*pcVar1)(pIVar8,local_78,FVar9.Data,FVar10.Data,4,local_98,0);
      if ((local_48 == 0) && (local_38 != 0)) {
        if (local_38 < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
        }
        pTVar2 = (local_40->Address).SharedReferenceCount.ReferenceController;
        pFVar3 = (local_40->Address).Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar3 == (FInternetAddr *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InternetAddr.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                             ,0x3b,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
        }
        (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3,&local_res20);
        if (pFVar3 == (FInternetAddr *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
        }
        (**(code **)((longlong)*pFVar3 + 0x40))(pFVar3,local_res18);
        uStackX_24 = local_res18[0];
        FVar4.Port = local_res18[0];
        FVar4.Address.field0_0x0 = (FIPv4Address_u_0)local_res20;
        FVar4._6_2_ = uStackX_26;
        *param_2 = FVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      DestructItems<FAddressInfoResultData,int>(local_40,local_38);
      if (local_40 != (FAddressInfoResultData *)0x0) {
        FMemory::Free(local_40);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_78[0] != (void *)0x0) {
        FMemory::Free(local_78[0]);
      }
      goto LAB_1431199b2;
    }
  }
  bVar5 = false;
LAB_1431199b2:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// Initialize @ 143119a00

void __cdecl FIPv4Endpoint::Initialize(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"WINDOWS");
  CachedSocketSubsystem = ISocketSubsystem::Get(pFVar1);
  return;
}

// Parse @ 143119c80

bool __cdecl FIPv4Endpoint::Parse(FString *param_1,FIPv4Endpoint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *_Str;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar4 = ::FString::ParseIntoArray(param_1,&local_18,L":",false);
  if (iVar4 == 2) {
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FIPv4Address::Parse((FString *)local_18.AllocatorInstance.Data,&param_2->Address);
    if (bVar2) {
      if (local_18.ArrayNum < 2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (*(int *)(local_18.AllocatorInstance.Data + 0x18) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x10);
      }
      uVar5 = _wtoi(_Str);
      if (uVar5 < 0x10000) {
        param_2->Port = (ushort)uVar5;
        bVar2 = true;
        goto LAB_143119d6c;
      }
    }
  }
  bVar2 = false;
LAB_143119d6c:
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// ToString @ 14311a120

FString * __thiscall FIPv4Endpoint::ToString(FIPv4Endpoint *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%i.%i.%i.%i");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%i");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

