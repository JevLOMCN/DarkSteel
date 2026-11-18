// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FGPUDriverInfo @ 141a9bc40

FGPUDriverInfo * __thiscall
FGPUDriverInfo::FGPUDriverInfo(FGPUDriverInfo *this,FGPUDriverInfo *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->VendorId;
  (this->DeviceDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VendorId = uVar1;
  (this->DeviceDescription).Data.AllocatorInstance.Data =
       (param_1->DeviceDescription).Data.AllocatorInstance.Data;
  (param_1->DeviceDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceDescription).Data.ArrayNum = (param_1->DeviceDescription).Data.ArrayNum;
  (this->DeviceDescription).Data.ArrayMax = (param_1->DeviceDescription).Data.ArrayMax;
  (param_1->DeviceDescription).Data.ArrayNum = 0;
  (param_1->DeviceDescription).Data.ArrayMax = 0;
  (this->ProviderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProviderName).Data.AllocatorInstance.Data =
       (param_1->ProviderName).Data.AllocatorInstance.Data;
  (param_1->ProviderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProviderName).Data.ArrayNum = (param_1->ProviderName).Data.ArrayNum;
  (this->ProviderName).Data.ArrayMax = (param_1->ProviderName).Data.ArrayMax;
  (param_1->ProviderName).Data.ArrayNum = 0;
  (param_1->ProviderName).Data.ArrayMax = 0;
  (this->InternalDriverVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalDriverVersion).Data.AllocatorInstance.Data =
       (param_1->InternalDriverVersion).Data.AllocatorInstance.Data;
  (param_1->InternalDriverVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalDriverVersion).Data.ArrayNum = (param_1->InternalDriverVersion).Data.ArrayNum;
  (this->InternalDriverVersion).Data.ArrayMax = (param_1->InternalDriverVersion).Data.ArrayMax;
  (param_1->InternalDriverVersion).Data.ArrayNum = 0;
  (param_1->InternalDriverVersion).Data.ArrayMax = 0;
  (this->UserDriverVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDriverVersion).Data.AllocatorInstance.Data =
       (param_1->UserDriverVersion).Data.AllocatorInstance.Data;
  (param_1->UserDriverVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserDriverVersion).Data.ArrayNum = (param_1->UserDriverVersion).Data.ArrayNum;
  (this->UserDriverVersion).Data.ArrayMax = (param_1->UserDriverVersion).Data.ArrayMax;
  (param_1->UserDriverVersion).Data.ArrayNum = 0;
  (param_1->UserDriverVersion).Data.ArrayMax = 0;
  (this->DriverDate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DriverDate).Data.AllocatorInstance.Data = (param_1->DriverDate).Data.AllocatorInstance.Data
  ;
  (param_1->DriverDate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DriverDate).Data.ArrayNum = (param_1->DriverDate).Data.ArrayNum;
  (this->DriverDate).Data.ArrayMax = (param_1->DriverDate).Data.ArrayMax;
  (param_1->DriverDate).Data.ArrayNum = 0;
  (param_1->DriverDate).Data.ArrayMax = 0;
  (this->RHIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHIName).Data.AllocatorInstance.Data = (param_1->RHIName).Data.AllocatorInstance.Data;
  (param_1->RHIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHIName).Data.ArrayNum = (param_1->RHIName).Data.ArrayNum;
  (this->RHIName).Data.ArrayMax = (param_1->RHIName).Data.ArrayMax;
  (param_1->RHIName).Data.ArrayNum = 0;
  (param_1->RHIName).Data.ArrayMax = 0;
  return this;
}

// operator= @ 141a9d9d0

FGPUDriverInfo * __thiscall FGPUDriverInfo::operator=(FGPUDriverInfo *this,FGPUDriverInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->DeviceDescription;
  pFVar2 = &this->DeviceDescription;
  this->VendorId = param_1->VendorId;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeviceDescription).Data.ArrayNum = (param_1->DeviceDescription).Data.ArrayNum;
    (this->DeviceDescription).Data.ArrayMax = (param_1->DeviceDescription).Data.ArrayMax;
    (param_1->DeviceDescription).Data.ArrayNum = 0;
    (param_1->DeviceDescription).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->ProviderName;
  pFVar2 = &this->ProviderName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ProviderName).Data.ArrayNum = (param_1->ProviderName).Data.ArrayNum;
    (this->ProviderName).Data.ArrayMax = (param_1->ProviderName).Data.ArrayMax;
    (param_1->ProviderName).Data.ArrayNum = 0;
    (param_1->ProviderName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->InternalDriverVersion;
  pFVar2 = &this->InternalDriverVersion;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->InternalDriverVersion).Data.ArrayNum = (param_1->InternalDriverVersion).Data.ArrayNum;
    (this->InternalDriverVersion).Data.ArrayMax = (param_1->InternalDriverVersion).Data.ArrayMax;
    (param_1->InternalDriverVersion).Data.ArrayNum = 0;
    (param_1->InternalDriverVersion).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->UserDriverVersion;
  pFVar2 = &this->UserDriverVersion;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UserDriverVersion).Data.ArrayNum = (param_1->UserDriverVersion).Data.ArrayNum;
    (this->UserDriverVersion).Data.ArrayMax = (param_1->UserDriverVersion).Data.ArrayMax;
    (param_1->UserDriverVersion).Data.ArrayNum = 0;
    (param_1->UserDriverVersion).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->DriverDate;
  pFVar2 = &this->DriverDate;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DriverDate).Data.ArrayNum = (param_1->DriverDate).Data.ArrayNum;
    (this->DriverDate).Data.ArrayMax = (param_1->DriverDate).Data.ArrayMax;
    (param_1->DriverDate).Data.ArrayNum = 0;
    (param_1->DriverDate).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->RHIName;
  pFVar2 = &this->RHIName;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RHIName).Data.ArrayNum = (param_1->RHIName).Data.ArrayNum;
    (this->RHIName).Data.ArrayMax = (param_1->RHIName).Data.ArrayMax;
    (param_1->RHIName).Data.ArrayNum = 0;
    (param_1->RHIName).Data.ArrayMax = 0;
  }
  return this;
}

// operator= @ 141a9db50

FGPUDriverInfo * __thiscall FGPUDriverInfo::operator=(FGPUDriverInfo *this,FGPUDriverInfo *param_1)

{
  this->VendorId = param_1->VendorId;
  ::FString::operator=(&this->DeviceDescription,&param_1->DeviceDescription);
  ::FString::operator=(&this->ProviderName,&param_1->ProviderName);
  ::FString::operator=(&this->InternalDriverVersion,&param_1->InternalDriverVersion);
  ::FString::operator=(&this->UserDriverVersion,&param_1->UserDriverVersion);
  ::FString::operator=(&this->DriverDate,&param_1->DriverDate);
  ::FString::operator=(&this->RHIName,&param_1->RHIName);
  return this;
}

// GetNVIDIAUnifiedVersion @ 141aab400

FString * __cdecl
FGPUDriverInfo::GetNVIDIAUnifiedVersion(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 6) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar4;
  if (6 < iVar4) {
    iVar3 = 6;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  ::FString::FString(&local_28,
                     (wchar_t *)((longlong)pwVar5 + ((longlong)iVar4 - (longlong)iVar1) * 2));
  pFVar2 = ::FString::Replace(&local_28,&local_18,L".",L"",IgnoreCase);
  if (&local_28 != pFVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L".");
  ::FString::InsertAt(&local_28,3,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  return __return_storage_ptr__;
}

// ~FGPUDriverInfo @ 141becc30

void __thiscall FGPUDriverInfo::~FGPUDriverInfo(FGPUDriverInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RHIName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DriverDate).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserDriverVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InternalDriverVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProviderName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetUnifiedDriverVersion @ 141c01f20

FString * __thiscall
FGPUDriverInfo::GetUnifiedDriverVersion(FGPUDriverInfo *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  bool bVar6;
  FString local_28;
  FString local_18;
  
  pFVar3 = &this->InternalDriverVersion;
  if (this->VendorId == 0x10de) {
    iVar2 = (this->InternalDriverVersion).Data.ArrayNum;
    iVar1 = (this->UserDriverVersion).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) goto LAB_141c02095;
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->UserDriverVersion).Data.AllocatorInstance.Data);
      bVar6 = iVar2 == 0;
    }
    else {
      bVar6 = iVar2 + iVar1 == 1;
    }
    if (!bVar6) {
      iVar2 = (this->InternalDriverVersion).Data.ArrayNum;
      iVar4 = 0;
      iVar1 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if (5 < iVar1) {
        if (iVar2 == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
          iVar4 = iVar2 + -1;
        }
        iVar2 = iVar4;
        if (6 < iVar4) {
          iVar2 = 6;
        }
        iVar1 = 0;
        if (0 < iVar2) {
          iVar1 = iVar2;
        }
        ::FString::FString(&local_28,
                           (wchar_t *)((longlong)pwVar5 + ((longlong)iVar4 - (longlong)iVar1) * 2));
        pFVar3 = ::FString::Replace(&local_28,&local_18,L".",L"",IgnoreCase);
        if (&local_28 != pFVar3) {
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
          (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
          local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
          (pFVar3->Data).ArrayNum = 0;
          (pFVar3->Data).ArrayMax = 0;
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_18,L".");
        ::FString::InsertAt(&local_28,3,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
        return __return_storage_ptr__;
      }
      goto LAB_141c02111;
    }
  }
LAB_141c02095:
  if (this->VendorId == 0x8086) {
    iVar2 = ::FString::Find(pFVar3,L".",1,CaseSensitive,FromStart,-1);
    if (iVar2 != -1) {
      iVar2 = ::FString::Find(pFVar3,L".",1,CaseSensitive,FromStart,iVar2 + 1);
      if (iVar2 != -1) {
        ::FString::RightChop(pFVar3,__return_storage_ptr__,iVar2 + 1);
        return __return_storage_ptr__;
      }
    }
  }
LAB_141c02111:
  ::FString::FString(__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// IsSameDriverVersionGeneration @ 141c031f0

bool __thiscall
FGPUDriverInfo::IsSameDriverVersionGeneration(FGPUDriverInfo *this,FDriverVersion *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FString *pFVar6;
  FDriverVersion local_28;
  FString local_18;
  
  if (this->VendorId != 0x8086) {
    return true;
  }
  pFVar6 = GetUnifiedDriverVersion(this,&local_18);
  local_28.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Values.ArrayNum = 0;
  local_28.Values.ArrayMax = 0;
  FDriverVersion::Parse(&local_28,pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Values.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar1 = *(uint *)local_28.Values.AllocatorInstance.Data;
  uVar5 = FDriverVersion::GetVersionValue(param_1,0);
  if (local_28.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Values.AllocatorInstance.Data);
  }
  return 99 < uVar1 == 99 < uVar5;
}

