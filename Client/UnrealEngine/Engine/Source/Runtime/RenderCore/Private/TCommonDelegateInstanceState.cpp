// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// GetHandle @ 145e58b30

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 145e58b50

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 145e58b70

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 145e739b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,unsigned_int,unsigned_int,wchar_t_const_*,void_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

