// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// operator* @ 14266b0f0

TGuardedInt<__int64> * __thiscall
TGuardedInt<__int64>::operator*
          (TGuardedInt<__int64> *this,TGuardedInt<__int64> *__return_storage_ptr__,long64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  long64 lVar4;
  ulonglong uVar5;
  
  if (this->bIsValid == false) {
    *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
    __return_storage_ptr__->Value = 0;
    __return_storage_ptr__->bIsValid = false;
    return __return_storage_ptr__;
  }
  uVar1 = this->Value;
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar5 = uVar1;
    if ((longlong)uVar1 < 0) {
      uVar5 = -uVar1;
    }
    uVar2 = (ulonglong)(byte)((byte)(uVar1 >> 0x3f) ^ 1);
    if (-1 < param_1) {
      uVar2 = uVar1 >> 0x3f;
    }
    uVar3 = -param_1;
    if (-1 < param_1) {
      uVar3 = param_1;
    }
    if ((uVar2 + 0x7fffffffffffffff) / uVar3 < uVar5) {
      *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
      __return_storage_ptr__->Value = 0;
      __return_storage_ptr__->bIsValid = false;
      return __return_storage_ptr__;
    }
    lVar4 = uVar1 * param_1;
  }
  __return_storage_ptr__->Value = lVar4;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bIsValid = true;
  return __return_storage_ptr__;
}

