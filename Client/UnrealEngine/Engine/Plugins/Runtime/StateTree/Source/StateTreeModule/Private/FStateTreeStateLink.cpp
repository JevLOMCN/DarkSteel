// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d527e00

UScriptStruct * __cdecl FStateTreeStateLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateLink.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeStateLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateLink,(UObject *)pUVar1,
                         L"StateTreeStateLink");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeStateLink.OuterSingleton;
}

// PostSerialize @ 14d533120

void __thiscall FStateTreeStateLink::PostSerialize(FStateTreeStateLink *this,FArchive *param_1)

{
  return;
}

// Serialize @ 14d533500

bool __thiscall
FStateTreeStateLink::Serialize(FStateTreeStateLink *this,FStructuredArchiveSlot param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  FGuid local_18;
  
  local_18 = FStateTreeCustomVersion::GUID;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&local_18);
  return false;
}

