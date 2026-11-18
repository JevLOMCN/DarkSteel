// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// GetCreateAndRegisterReplicationFragmentFunction @ 14420a110

_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
* __thiscall
UE::Net::FNamedStructPropertyNetSerializerInfo::GetCreateAndRegisterReplicationFragmentFunction
          (FNamedStructPropertyNetSerializerInfo *this)

{
  return this->CreateAndRegisterReplicationFragmentFunction;
}

// IsSupported @ 144212040

bool __thiscall
UE::Net::FNamedStructPropertyNetSerializerInfo::IsSupported
          (FNamedStructPropertyNetSerializerInfo *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    param_1 = (FProperty *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->_padding_ == *(longlong *)(param_1[1]._padding_ + 0x18);
}

