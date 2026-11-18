// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 3

// ~FTypedElementInterfaceCustomizationRegistryBase @ 14453f3a0

void __thiscall
FTypedElementInterfaceCustomizationRegistryBase::~FTypedElementInterfaceCustomizationRegistryBase
          (FTypedElementInterfaceCustomizationRegistryBase *this)

{
  return;
}

// GetElementTypeIdFromName @ 144544300

uchar __thiscall
FTypedElementInterfaceCustomizationRegistryBase::GetElementTypeIdFromName
          (FTypedElementInterfaceCustomizationRegistryBase *this,FName param_1)

{
  UTypedElementRegistry *this_00;
  FRegisteredElementType *pFVar1;
  FName local_res10 [3];
  
  this_00 = UTypedElementRegistry::GetInstance();
  local_res10[0] = param_1;
  pFVar1 = UTypedElementRegistry::GetRegisteredElementTypeFromName(this_00,local_res10);
  if (pFVar1 != (FRegisteredElementType *)0x0) {
    return pFVar1->TypeId;
  }
  return '\0';
}

// GetElementTypeIdFromNameChecked @ 144544340

uchar __thiscall
FTypedElementInterfaceCustomizationRegistryBase::GetElementTypeIdFromNameChecked
          (FTypedElementInterfaceCustomizationRegistryBase *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  UTypedElementRegistry *this_00;
  FRegisteredElementType *pFVar4;
  FName local_res10;
  FName local_res18 [2];
  FString local_18;
  
  local_res10 = param_1;
  this_00 = UTypedElementRegistry::GetInstance();
  local_res18[0] = param_1;
  pFVar4 = UTypedElementRegistry::GetRegisteredElementTypeFromName(this_00,local_res18);
  if ((pFVar4 != (FRegisteredElementType *)0x0) && (pFVar4->TypeId != '\0')) {
    return pFVar4->TypeId;
  }
  ::FName::ToString(&local_res10,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ElementTypeId > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementInterfaceCustomization.cpp"
                     ,0xe,L"Element type \'%s\' has not been registered!");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return '\0';
}

