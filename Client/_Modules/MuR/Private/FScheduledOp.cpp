// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// FScheduledOp @ 14a976b60

FScheduledOp * __thiscall
UE::Mutable::Private::FScheduledOp::FScheduledOp
          (FScheduledOp *this,uint param_1,FScheduledOp *param_2,uchar param_3,uint param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FScheduledOp *pFVar4;
  
  this->At = 0;
  this->CustomState = 0;
  this->ExecutionIndex = 0;
  this->ExecutionOptions = '\0';
  if (0x77 < param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStage < 120",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x65,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScheduledOp *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->At = param_1;
  this->ExecutionOptions = param_2->ExecutionOptions;
  uVar1 = param_2->ExecutionIndex;
  this->field_0xb = this->field_0xb ^ (this->Stage ^ param_3) & 0x7f;
  this->ExecutionIndex = uVar1;
  this->CustomState = param_4;
  this->field_0xb = (param_2->Stage ^ param_3) & 0x7f ^ param_2->field_0xb;
  return this;
}

// FromOpAndOptions @ 14a9a5020

FScheduledOp * __cdecl
UE::Mutable::Private::FScheduledOp::FromOpAndOptions
          (FScheduledOp *__return_storage_ptr__,uint param_1,FScheduledOp *param_2,uchar param_3)

{
  undefined1 uVar1;
  
  __return_storage_ptr__->ExecutionIndex = param_2->ExecutionIndex;
  __return_storage_ptr__->CustomState = param_2->CustomState;
  __return_storage_ptr__->At = param_1;
  __return_storage_ptr__->Stage = '\0';
  __return_storage_ptr__->Type = param_2->Type;
  __return_storage_ptr__->ExecutionOptions = param_3;
  return __return_storage_ptr__;
}

