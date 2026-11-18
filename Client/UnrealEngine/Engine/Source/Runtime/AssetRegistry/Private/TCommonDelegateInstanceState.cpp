// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// GetHandle @ 142ab06f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142b975b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::AssetDataGather::FResults_const_&),FDefaultTSDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142b975d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

