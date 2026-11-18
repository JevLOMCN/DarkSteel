// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator+= @ 1421304e0

FString * __thiscall FStringOutputDevice::operator+=(FStringOutputDevice *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            ((FString *)&this->field_0x10,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar2);
  return (FString *)&this->field_0x10;
}

// Serialize @ 14214cd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStringOutputDevice::Serialize
          (FStringOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  size_t sVar1;
  FString local_18;
  
  sVar1 = wcslen(param_1);
  ::FString::AppendChars((FString *)&this->field_0x10,param_1,(int)sVar1);
  if (this->field_0x9 != '\0') {
    ::FString::FString(&local_18,L"\r\n");
    (**(code **)(*(longlong *)this + 0x58))(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

