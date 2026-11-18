// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 147ba4080

UScriptStruct * __cdecl FInputDevicePropertyHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputDevicePropertyHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputDevicePropertyHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputDevicePropertyHandle,(UObject *)pUVar1,
                         L"InputDevicePropertyHandle");
  }
  return Z_Registration_Info_UScriptStruct_FInputDevicePropertyHandle.OuterSingleton;
}

// FInputDevicePropertyHandle @ 147bb91f0

FInputDevicePropertyHandle * __thiscall
FInputDevicePropertyHandle::FInputDevicePropertyHandle
          (FInputDevicePropertyHandle *this,uint param_1)

{
  this->InternalId = param_1;
  return this;
}

// FInputDevicePropertyHandle @ 147bb9200

FInputDevicePropertyHandle * __thiscall
FInputDevicePropertyHandle::FInputDevicePropertyHandle(FInputDevicePropertyHandle *this)

{
  this->InternalId = 0;
  return this;
}

// operator== @ 147bc0db0

bool __thiscall
FInputDevicePropertyHandle::operator==
          (FInputDevicePropertyHandle *this,FInputDevicePropertyHandle *param_1)

{
  return this->InternalId == param_1->InternalId;
}

// operator!= @ 147bc1340

bool __thiscall
FInputDevicePropertyHandle::operator!=
          (FInputDevicePropertyHandle *this,FInputDevicePropertyHandle *param_1)

{
  return this->InternalId != param_1->InternalId;
}

// AcquireValidHandle @ 147bc73a0

FInputDevicePropertyHandle __cdecl FInputDevicePropertyHandle::AcquireValidHandle(void)

{
  uint *in_RCX;
  
  GHandleIndex = GHandleIndex + 1;
  *in_RCX = GHandleIndex;
  return (FInputDevicePropertyHandle)(uint)in_RCX;
}

// GetTypeHash @ 147bec4c0

uint __thiscall FInputDevicePropertyHandle::GetTypeHash(FInputDevicePropertyHandle *this)

{
  return this->InternalId;
}

// IsValid @ 147bf17c0

bool __thiscall FInputDevicePropertyHandle::IsValid(FInputDevicePropertyHandle *this)

{
  return this->InternalId != InvalidHandle.InternalId;
}

// ToString @ 147c08410

FString * __thiscall
FInputDevicePropertyHandle::ToString
          (FInputDevicePropertyHandle *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = this->InternalId == InvalidHandle.InternalId;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_18,L"Invalid");
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_28,this->InternalId);
    pFVar1 = &local_28;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

