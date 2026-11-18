// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FPropertyTempVal @ 142162080

FPropertyTempVal * __thiscall
FPropertyTempVal::FPropertyTempVal(FPropertyTempVal *this,FProperty *param_1)

{
  uint uVar1;
  void *_Dst;
  
  uVar1 = (**(code **)(param_1->_padding_ + 0x168))(param_1);
  _Dst = FMemory::Malloc((longlong)(param_1->ArrayDim * param_1->ElementSize),uVar1);
  if (((uint)(int)param_1->PropertyFlags >> 9 & 1) == 0) {
    (**(code **)(param_1->_padding_ + 0x150))(param_1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)param_1->ArrayDim * (longlong)param_1->ElementSize);
  }
  this->Prop = param_1;
  this->Value = _Dst;
  return this;
}

// ~FPropertyTempVal @ 142163660

void __thiscall FPropertyTempVal::~FPropertyTempVal(FPropertyTempVal *this)

{
  void *pvVar1;
  FProperty *pFVar2;
  
  pvVar1 = this->Value;
  pFVar2 = this->Prop;
  if ((pFVar2->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    (**(code **)(pFVar2->_padding_ + 0x138))(pFVar2,pvVar1);
  }
  FMemory::Free(pvVar1);
  return;
}

// ExportText @ 142175cc0

void __thiscall
FPropertyTempVal::ExportText
          (FPropertyTempVal *this,FString *param_1,void *param_2,UObject *param_3,int param_4,
          UObject *param_5)

{
  (**(code **)(this->Prop->_padding_ + 0xe0))
            (this->Prop,param_1,this->Value,0,param_2,param_3,param_4,param_5);
  return;
}

// Serialize @ 14218a6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPropertyTempVal::Serialize(FPropertyTempVal *this,FArchive *param_1,void *param_2)

{
  FProperty *pFVar1;
  void *pvVar2;
  code *pcVar3;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1d8 [40];
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar1 = this->Prop;
  pvVar2 = this->Value;
  pcVar3 = *(code **)(pFVar1->_padding_ + 0xc0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this_00);
  (*pcVar3)(pFVar1,*(undefined8 *)FVar4,pvVar2,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return;
}

