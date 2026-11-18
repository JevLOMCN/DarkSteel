// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ReadRequest @ 1416b9f70

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IAsyncReadRequest * __thiscall
FLoggingAsyncReadFileHandle::ReadRequest
          (FLoggingAsyncReadFileHandle *this,long64 param_1,long64 param_2,
          EAsyncIOPriorityAndFlags param_3,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_4,uchar *param_5)

{
  IAsyncReadRequest *pIVar1;
  wchar_t *pwVar2;
  
  if ((param_3 >> 8 & 1) == 0) {
    if ((this->Filename).Data.ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
    }
    FPlatformFileOpenLog::AddToOpenLog(this->Owner,pwVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b9fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IAsyncReadRequest *)
           (**(code **)((longlong)*this->ActualRequest + 0x10))
                     (this->ActualRequest,param_1,param_2,param_3);
  return pIVar1;
}

// SizeRequest @ 141712a90

IAsyncReadRequest * __thiscall
FLoggingAsyncReadFileHandle::SizeRequest
          (FLoggingAsyncReadFileHandle *this,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1)

{
  IAsyncReadRequest *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141712a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IAsyncReadRequest *)(**(code **)((longlong)*this->ActualRequest + 8))();
  return pIVar1;
}

// UsesCache @ 14171a7e0

bool __thiscall FLoggingAsyncReadFileHandle::UsesCache(FLoggingAsyncReadFileHandle *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014171a7e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->ActualRequest + 0x18))();
  return (bool)uVar1;
}

