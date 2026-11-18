// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// GetBool @ 14163eae0

bool __thiscall FConsoleVariableBitRef::GetBool(FConsoleVariableBitRef *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 200))();
  return iVar1 != 0;
}

// GetFloat @ 141642400

float __thiscall FConsoleVariableBitRef::GetFloat(FConsoleVariableBitRef *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 200))();
  return (float)iVar1;
}

// GetInt @ 141642e90

int __thiscall FConsoleVariableBitRef::GetInt(FConsoleVariableBitRef *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0x760,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  uVar2 = this->BitNumber >> 3;
  bVar6 = '\x01' << ((byte)this->BitNumber & 7);
  bVar5 = this->Force1MaskPtr[uVar2] & bVar6;
  if (((this->Force0MaskPtr[uVar2] & bVar6) == 0) && (bVar5 == 0)) {
    return 2;
  }
  return (int)(bVar5 != 0);
}

// GetString @ 141646b20

FString * __thiscall
FConsoleVariableBitRef::GetString(FConsoleVariableBitRef *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 200))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// Release @ 141656820

void __thiscall FConsoleVariableBitRef::Release(FConsoleVariableBitRef *this)

{
  if (this != (FConsoleVariableBitRef *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165682d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this->_padding_)(this,1);
    return;
  }
  return;
}

// Set @ 14165cab0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableBitRef::Set(FConsoleVariableBitRef *this,wchar_t *param_1,FResolvedContext *param_2)

{
  EConsoleVariableFlags EVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  
  EVar1 = param_2->Flags;
  bVar3 = FConsoleVariableExtendedData<int>::TrackHistory
                    ((FConsoleVariableExtendedData<int> *)this,param_1,EVar1,param_2->Tag);
  if (bVar3) {
    bVar3 = FConsoleVariableBase::CanChange((FConsoleVariableBase *)this,EVar1);
    if (bVar3) {
      iVar5 = _wtoi(param_1);
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                           ,0x751,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      bVar4 = '\x01' << ((byte)this->BitNumber & 7);
      bVar6 = this->Force0MaskPtr[this->BitNumber >> 3];
      if (iVar5 == 0) {
        bVar6 = bVar6 | bVar4;
      }
      else {
        bVar6 = bVar6 & ~bVar4;
      }
      this->Force0MaskPtr[this->BitNumber >> 3] = bVar6;
      bVar4 = '\x01' << ((byte)this->BitNumber & 7);
      bVar6 = this->Force1MaskPtr[this->BitNumber >> 3];
      if (iVar5 == 1) {
        bVar6 = bVar6 | bVar4;
      }
      else {
        bVar6 = bVar6 & ~bVar4;
      }
      this->Force1MaskPtr[this->BitNumber >> 3] = bVar6;
      (**(code **)(this->_padding_ + 0x128))(this,param_2->Flags,0);
    }
  }
  return;
}

// SetInternal @ 14165d980

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableBitRef::SetInternal
          (FConsoleVariableBitRef *this,int *param_1,EConsoleVariableFlags param_2)

{
  uchar *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = '\x01' << ((byte)this->BitNumber & 7);
  bVar4 = this->Force0MaskPtr[this->BitNumber >> 3];
  if (*param_1 == 0) {
    bVar4 = bVar4 | bVar3;
  }
  else {
    bVar4 = bVar4 & ~bVar3;
  }
  this->Force0MaskPtr[this->BitNumber >> 3] = bVar4;
  puVar1 = this->Force1MaskPtr;
  uVar2 = this->BitNumber >> 3;
  bVar4 = '\x01' << ((byte)this->BitNumber & 7);
  if (*param_1 == 1) {
    puVar1[uVar2] = puVar1[uVar2] | bVar4;
    return;
  }
  puVar1[uVar2] = ~bVar4 & puVar1[uVar2];
  return;
}

