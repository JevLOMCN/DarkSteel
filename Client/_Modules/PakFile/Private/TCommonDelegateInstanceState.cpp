// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 7

// GetHandle @ 142a75060

FDelegateHandle __thiscall
TCommonDelegateInstanceState<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<TArray<FMountedPakInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142a75080

FDelegateHandle __thiscall
TCommonDelegateInstanceState<int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142a750a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142a750c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142a750e0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FPakChunkSignatureCheckFailedData_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142a75100

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 142a75120

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<bool___cdecl(TArrayView<UE::FMountPaksExArgs,int>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

