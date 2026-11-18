// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147ba1100

UScriptStruct * __cdecl FOverlapResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOverlapResult.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FOverlapResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOverlapResult,(UObject *)pUVar1,L"OverlapResult"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FOverlapResult.OuterSingleton;
}

// GetItemIndex @ 147be0b00

int __thiscall FOverlapResult::GetItemIndex(FOverlapResult *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
  if ((pUVar1 != (UObject *)0x0) && ((pUVar1[0xf].field_0x23 & 0x10) != 0)) {
    return this->ItemIndex;
  }
  return -1;
}

// GetItemIndexInternal @ 147be0b40

int __thiscall FOverlapResult::GetItemIndexInternal(FOverlapResult *this)

{
  return this->ItemIndex;
}

// SetItemIndex @ 147c01140

void __thiscall FOverlapResult::SetItemIndex(FOverlapResult *this,int param_1)

{
  this->ItemIndex = param_1;
  return;
}

