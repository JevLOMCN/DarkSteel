// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 30

// StaticStruct @ 1468d9d40

UScriptStruct * __cdecl FWidgetStateBitfield::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetStateBitfield.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetStateBitfield.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetStateBitfield,(UObject *)pUVar1,
                         L"WidgetStateBitfield");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetStateBitfield.OuterSingleton;
}

// FWidgetStateBitfield @ 1468ffec0

FWidgetStateBitfield * __thiscall
FWidgetStateBitfield::FWidgetStateBitfield(FWidgetStateBitfield *this,FName param_1)

{
  this->BinaryStates = 0;
  SetBinaryStateSlow(this,param_1,true);
  return this;
}

// FWidgetStateBitfield @ 1468ffef0

FWidgetStateBitfield * __thiscall
FWidgetStateBitfield::FWidgetStateBitfield(FWidgetStateBitfield *this,FName param_1,uchar param_2)

{
  this->BinaryStates = 0;
  return this;
}

// FWidgetStateBitfield @ 1468fff10

FWidgetStateBitfield * __thiscall
FWidgetStateBitfield::FWidgetStateBitfield(FWidgetStateBitfield *this)

{
  this->BinaryStates = 0;
  return this;
}

// operator_bool @ 146905700

bool __thiscall FWidgetStateBitfield::operator_bool(FWidgetStateBitfield *this)

{
  return this->BinaryStates != 0;
}

// operator~ @ 146905e60

FWidgetStateBitfield __thiscall FWidgetStateBitfield::operator~(FWidgetStateBitfield *this)

{
  ulonglong *in_RDX;
  
  *in_RDX = ~this->BinaryStates;
  return (FWidgetStateBitfield)(ulong64)in_RDX;
}

// ClearEnumState @ 146910450

void __thiscall
FWidgetStateBitfield::ClearEnumState(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return;
}

// ClearEnumState @ 146910460

void __thiscall FWidgetStateBitfield::ClearEnumState(FWidgetStateBitfield *this,uchar param_1)

{
  return;
}

// ClearEnumState @ 146910470

void __thiscall FWidgetStateBitfield::ClearEnumState(FWidgetStateBitfield *this,FName param_1)

{
  return;
}

// HasAllBinaryFlags @ 146928c10

bool __thiscall
FWidgetStateBitfield::HasAllBinaryFlags(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return (param_1->BinaryStates & this->BinaryStates) == param_1->BinaryStates;
}

// HasAllEnumFlags @ 146928c30

bool __thiscall
FWidgetStateBitfield::HasAllEnumFlags(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return false;
}

// HasAllFlags @ 146928c40

bool __thiscall
FWidgetStateBitfield::HasAllFlags(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return (param_1->BinaryStates & this->BinaryStates) == param_1->BinaryStates;
}

// HasAnyBinaryFlags @ 146928c60

bool __thiscall
FWidgetStateBitfield::HasAnyBinaryFlags(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return (this->BinaryStates & param_1->BinaryStates) != 0;
}

// HasAnyEnumFlags @ 146928c70

bool __thiscall
FWidgetStateBitfield::HasAnyEnumFlags(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return false;
}

// HasAnyFlags @ 146928c80

bool __thiscall
FWidgetStateBitfield::HasAnyFlags(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return (this->BinaryStates & param_1->BinaryStates) != 0;
}

// HasBinaryStates @ 146928e90

bool __thiscall FWidgetStateBitfield::HasBinaryStates(FWidgetStateBitfield *this)

{
  return this->BinaryStates != 0;
}

// HasEmptyUsedEnumStates @ 146928ea0

bool __thiscall FWidgetStateBitfield::HasEmptyUsedEnumStates(FWidgetStateBitfield *this)

{
  return false;
}

// HasEnumStates @ 146928eb0

bool __thiscall FWidgetStateBitfield::HasEnumStates(FWidgetStateBitfield *this)

{
  return false;
}

// Intersect @ 14692c420

FWidgetStateBitfield __thiscall
FWidgetStateBitfield::Intersect(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  ulonglong *in_R8;
  
  param_1->BinaryStates = *in_R8 & this->BinaryStates;
  return (FWidgetStateBitfield)(ulong64)param_1;
}

// NegateBinaryStates @ 14692df30

void __thiscall FWidgetStateBitfield::NegateBinaryStates(FWidgetStateBitfield *this)

{
  this->BinaryStates = ~this->BinaryStates;
  return;
}

// NegateEnumStates @ 14692df40

void __thiscall FWidgetStateBitfield::NegateEnumStates(FWidgetStateBitfield *this)

{
  return;
}

// NegateStates @ 14692df50

void __thiscall FWidgetStateBitfield::NegateStates(FWidgetStateBitfield *this)

{
  this->BinaryStates = ~this->BinaryStates;
  return;
}

// SetBinaryState @ 146942050

void __thiscall
FWidgetStateBitfield::SetBinaryState
          (FWidgetStateBitfield *this,FWidgetStateBitfield *param_1,bool param_2)

{
  if (param_2) {
    this->BinaryStates = this->BinaryStates | param_1->BinaryStates;
    return;
  }
  this->BinaryStates = ~param_1->BinaryStates & this->BinaryStates;
  return;
}

// SetBinaryState @ 146942080

void __thiscall
FWidgetStateBitfield::SetBinaryState(FWidgetStateBitfield *this,uchar param_1,bool param_2)

{
  this->BinaryStates =
       (ulonglong)param_2 << (param_1 & 0x3f) |
       this->BinaryStates & ~(1L << ((ulonglong)param_1 & 0x3f));
  return;
}

// SetBinaryStateSlow @ 1469420b0

void __thiscall
FWidgetStateBitfield::SetBinaryStateSlow(FWidgetStateBitfield *this,FName param_1,bool param_2)

{
  UClass *this_00;
  byte *pbVar1;
  
  this_00 = UWidgetStateSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pbVar1 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,param_1
                        );
  this->BinaryStates =
       (ulonglong)param_2 << (*pbVar1 & 0x3f) |
       this->BinaryStates & ~(1L << ((ulonglong)*pbVar1 & 0x3f));
  return;
}

// SetEnumState @ 146942b80

void __thiscall
FWidgetStateBitfield::SetEnumState(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  return;
}

// SetEnumState @ 146942b90

void __thiscall
FWidgetStateBitfield::SetEnumState(FWidgetStateBitfield *this,uchar param_1,uchar param_2)

{
  return;
}

// SetEnumStateSlow @ 146942ba0

void __thiscall
FWidgetStateBitfield::SetEnumStateSlow(FWidgetStateBitfield *this,FName param_1,uchar param_2)

{
  return;
}

// SetState @ 146944290

void __thiscall
FWidgetStateBitfield::SetState(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  this->BinaryStates = param_1->BinaryStates;
  return;
}

// Union @ 14694a250

FWidgetStateBitfield __thiscall
FWidgetStateBitfield::Union(FWidgetStateBitfield *this,FWidgetStateBitfield *param_1)

{
  ulonglong *in_R8;
  
  param_1->BinaryStates = *in_R8 | this->BinaryStates;
  return (FWidgetStateBitfield)(ulong64)param_1;
}

