// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// ~FStringFormatArg @ 1417a7a50

void __thiscall FStringFormatArg::~FStringFormatArg(FStringFormatArg *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// FStringFormatArg @ 141917cd0

FStringFormatArg * __thiscall FStringFormatArg::FStringFormatArg(FStringFormatArg *this,int param_1)

{
  this->field1_0x8 = (FStringFormatArg_u_8)(longlong)param_1;
  this->Type = Int;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  return this;
}

// FStringFormatArg @ 141917cf0

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,uint param_1)

{
  FStringFormatArg_u_8 FVar1;
  
  FVar1.IntValue._4_4_ = 0;
  FVar1.UIntValue._0_4_ = param_1;
  this->field1_0x8 = FVar1;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  this->Type = UInt;
  return this;
}

// FStringFormatArg @ 141917d10

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,float param_1)

{
  this->Type = Double;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->field1_0x8).DoubleValue = (double)param_1;
  return this;
}

// FStringFormatArg @ 141917d40

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,double param_1)

{
  (this->field1_0x8).DoubleValue = param_1;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  this->Type = Double;
  return this;
}

// FStringFormatArg @ 141917d60

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,char *param_1)

{
  this->Type = StringLiteralANSI;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->field1_0x8).StringLiteralANSIValue = param_1;
  return this;
}

// FStringFormatArg @ 141917d80

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,ushort *param_1)

{
  this->Type = StringLiteralUCS2;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->field1_0x8).StringLiteralUCS2Value = param_1;
  return this;
}

// FStringFormatArg @ 141917da0

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,uchar *param_1)

{
  this->Type = StringLiteralUTF8;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->field1_0x8).StringLiteralUTF8Value = param_1;
  return this;
}

// FStringFormatArg @ 141917dc0

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,wchar_t *param_1)

{
  this->Type = StringLiteralWIDE;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->field1_0x8).StringLiteralWIDEValue = param_1;
  return this;
}

// FStringFormatArg @ 141917de0

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  FString local_18;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pFVar1 = &this->StringValue;
  pwVar3 = param_1->DataPtr;
  this->Type = String;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize(&local_18,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar5) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->StringValue).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->StringValue).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FStringFormatArg @ 141917e80

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->Type = String;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->StringValue).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FStringFormatArg @ 141917ed0

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,long64 param_1)

{
  (this->field1_0x8).IntValue = param_1;
  this->Type = Int;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  return this;
}

// FStringFormatArg @ 141917ef0

FStringFormatArg * __thiscall
FStringFormatArg::FStringFormatArg(FStringFormatArg *this,ulong64 param_1)

{
  this->Type = UInt;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->field1_0x8).UIntValue = param_1;
  return this;
}

// operator= @ 14191d8b0

FStringFormatArg * __thiscall
FStringFormatArg::operator=(FStringFormatArg *this,FStringFormatArg *param_1)

{
  EType EVar1;
  
  if (this != param_1) {
    EVar1 = param_1->Type;
    this->Type = EVar1;
    switch(EVar1) {
    case Int:
    case UInt:
    case Double:
    case StringLiteralANSI:
    case StringLiteralWIDE:
    case StringLiteralUCS2:
    case StringLiteralUTF8:
      this->field1_0x8 = param_1->field1_0x8;
      break;
    case String:
      ::FString::operator=(&this->StringValue,&param_1->StringValue);
      return this;
    }
  }
  return this;
}

// operator= @ 14191d930

FStringFormatArg * __thiscall
FStringFormatArg::operator=(FStringFormatArg *this,FStringFormatArg *param_1)

{
  EType EVar1;
  
  if (this != param_1) {
    EVar1 = param_1->Type;
    this->Type = EVar1;
    switch(EVar1) {
    case Int:
    case UInt:
    case Double:
    case StringLiteralANSI:
    case StringLiteralWIDE:
    case StringLiteralUCS2:
    case StringLiteralUTF8:
      this->field1_0x8 = param_1->field1_0x8;
      break;
    case String:
      ::FString::operator=(&this->StringValue,&param_1->StringValue);
      return this;
    }
  }
  return this;
}

