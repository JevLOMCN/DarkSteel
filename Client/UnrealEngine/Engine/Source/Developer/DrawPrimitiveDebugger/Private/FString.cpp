// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 2

// Printf<double,double,double> @ 146d00d80

FString * __cdecl
FString::Printf<double,double,double>
          (FString *__return_storage_ptr__,
          TCheckedFormatStringPrivate<wchar_t,double,double,double> param_1,double param_2,
          double param_3,double param_4)

{
  PrintfImpl(__return_storage_ptr__,param_1.FormatString);
  return __return_storage_ptr__;
}

// LeftChop @ 146d24a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall FString::LeftChop(FString *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 - param_1 < iVar2) {
    iVar2 = iVar2 - param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  RemoveAt(this,iVar1,param_1,No);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

