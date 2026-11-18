// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 6

// StaticStruct @ 14446d910

UScriptStruct * __cdecl FPropertyPathTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct,(UObject *)pUVar1,
                         L"PropertyPathTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyPathTestStruct.OuterSingleton;
}

// FPropertyPathTestStruct @ 14448a5a0

FPropertyPathTestStruct * __thiscall
FPropertyPathTestStruct::FPropertyPathTestStruct
          (FPropertyPathTestStruct *this,FPropertyPathTestStruct *param_1)

{
  UPropertyPathTestObject *pUVar1;
  
  this->_padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  this->Bool = param_1->Bool;
  this->Integer = param_1->Integer;
  (this->EnumOne).Value = (param_1->EnumOne).Value;
  (this->EnumTwo).Value = (param_1->EnumTwo).Value;
  (this->EnumThree).Value = (param_1->EnumThree).Value;
  (this->EnumFour).Value = (param_1->EnumFour).Value;
  ::FString::FString(&this->String,&param_1->String);
  this->Float = param_1->Float;
  (this->InnerStruct)._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  (this->InnerStruct).Float = (param_1->InnerStruct).Float;
  (this->InnerStruct).Bool = (param_1->InnerStruct).Bool;
  (this->InnerStruct).EnumOne.Value = (param_1->InnerStruct).EnumOne.Value;
  (this->InnerStruct).EnumTwo.Value = (param_1->InnerStruct).EnumTwo.Value;
  (this->InnerStruct).EnumThree.Value = (param_1->InnerStruct).EnumThree.Value;
  (this->InnerStruct).EnumFour.Value = (param_1->InnerStruct).EnumFour.Value;
  (this->InnerStruct).Integer = (param_1->InnerStruct).Integer;
  ::FString::FString(&(this->InnerStruct).String,&(param_1->InnerStruct).String);
  pUVar1 = (param_1->InnerObject).field0_0x0.DebugPtr;
  (this->InnerObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UPropertyPathTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// FPropertyPathTestStruct @ 14448a670

FPropertyPathTestStruct * __thiscall
FPropertyPathTestStruct::FPropertyPathTestStruct(FPropertyPathTestStruct *this)

{
  this->Bool = false;
  this->_padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  this->Integer = 0;
  this->EnumOne = '\0';
  this->EnumTwo = '\0';
  this->EnumThree = '\0';
  this->EnumFour = '\0';
  ::FString::FString(&this->String,"Default");
  this->Float = 0.0;
  *(undefined2 *)&(this->InnerStruct).field_0x11 = 0;
  (this->InnerStruct).field_0x13 = 0;
  (this->InnerStruct).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InnerStruct).String.Data.ArrayNum = 0;
  (this->InnerStruct).String.Data.ArrayMax = 0;
  (this->InnerStruct)._padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  (this->InnerStruct).Float = 0.5;
  (this->InnerStruct).Bool = false;
  (this->InnerStruct).EnumOne = '\x02';
  (this->InnerStruct).EnumTwo = '\x02';
  (this->InnerStruct).EnumThree = '\x02';
  (this->InnerStruct).EnumFour.Value = '\x02';
  (this->InnerStruct).Integer = 0;
  ::FString::FString(&(this->InnerStruct).String,"Default");
  (this->InnerObject).field0_0x0.DebugPtr = (UPropertyPathTestObject *)0x0;
  return this;
}

// ~FPropertyPathTestStruct @ 14448a940

void __thiscall FPropertyPathTestStruct::~FPropertyPathTestStruct(FPropertyPathTestStruct *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_18;
  
  this->Float = -1.5;
  this->_padding_ = (longlong)&___7FPropertyPathTestStruct__6B_;
  this->Bool = true;
  this->EnumOne = '\x01';
  this->EnumTwo = '\x01';
  this->EnumThree = '\x01';
  this->EnumFour = '\x01';
  this->Integer = -1;
  ::FString::FString(&local_18,"Destructed");
  pFVar1 = &this->String;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->String).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->String).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FPropertyPathTestInnerStruct::~FPropertyPathTestInnerStruct(&this->InnerStruct);
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FPropertyPathTestBaseStruct__6B_;
  return;
}

// operator= @ 14448aa00

FPropertyPathTestStruct * __thiscall
FPropertyPathTestStruct::operator=(FPropertyPathTestStruct *this,FPropertyPathTestStruct *param_1)

{
  UPropertyPathTestObject *pUVar1;
  
  this->Bool = param_1->Bool;
  this->Integer = param_1->Integer;
  (this->EnumOne).Value = (param_1->EnumOne).Value;
  (this->EnumTwo).Value = (param_1->EnumTwo).Value;
  (this->EnumThree).Value = (param_1->EnumThree).Value;
  (this->EnumFour).Value = (param_1->EnumFour).Value;
  ::FString::operator=(&this->String,&param_1->String);
  this->Float = param_1->Float;
  (this->InnerStruct).Float = (param_1->InnerStruct).Float;
  (this->InnerStruct).Bool = (param_1->InnerStruct).Bool;
  (this->InnerStruct).EnumOne.Value = (param_1->InnerStruct).EnumOne.Value;
  (this->InnerStruct).EnumTwo.Value = (param_1->InnerStruct).EnumTwo.Value;
  (this->InnerStruct).EnumThree.Value = (param_1->InnerStruct).EnumThree.Value;
  (this->InnerStruct).EnumFour.Value = (param_1->InnerStruct).EnumFour.Value;
  (this->InnerStruct).Integer = (param_1->InnerStruct).Integer;
  ::FString::operator=(&(this->InnerStruct).String,&(param_1->InnerStruct).String);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->InnerObject).field0_0x0.DebugPtr, pUVar1 != (UPropertyPathTestObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->InnerObject).field0_0x0 = (param_1->InnerObject).field0_0x0;
  return this;
}

// operator== @ 14448aad0

bool __thiscall
FPropertyPathTestStruct::operator==(FPropertyPathTestStruct *this,FPropertyPathTestStruct *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (this->Bool != param_1->Bool) {
    return false;
  }
  if (this->Integer != param_1->Integer) {
    return false;
  }
  if ((this->EnumOne).Value != (param_1->EnumOne).Value) {
    return false;
  }
  if ((this->EnumTwo).Value != (param_1->EnumTwo).Value) {
    return false;
  }
  if ((this->EnumThree).Value != (param_1->EnumThree).Value) {
    return false;
  }
  if ((this->EnumFour).Value != (param_1->EnumFour).Value) {
    return false;
  }
  iVar2 = (this->String).Data.ArrayNum;
  iVar1 = (param_1->String).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->String).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->String).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14448ab52;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14448ab52:
    if (!bVar3) {
      return false;
    }
  }
  if (param_1->Float != this->Float) {
    return false;
  }
  if ((this->InnerStruct).Bool != (param_1->InnerStruct).Bool) {
    return false;
  }
  if ((this->InnerStruct).Integer != (param_1->InnerStruct).Integer) {
    return false;
  }
  if ((this->InnerStruct).EnumOne.Value != (param_1->InnerStruct).EnumOne.Value) {
    return false;
  }
  if ((this->InnerStruct).EnumTwo.Value != (param_1->InnerStruct).EnumTwo.Value) {
    return false;
  }
  if ((this->InnerStruct).EnumThree.Value != (param_1->InnerStruct).EnumThree.Value) {
    return false;
  }
  if ((this->InnerStruct).EnumFour.Value != (param_1->InnerStruct).EnumFour.Value) {
    return false;
  }
  iVar2 = (this->InnerStruct).String.Data.ArrayNum;
  iVar1 = (param_1->InnerStruct).String.Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14448abc9;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->InnerStruct).String.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->InnerStruct).String.Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14448abc9:
  if ((param_1->InnerStruct).Float != (this->InnerStruct).Float) {
    return false;
  }
  return true;
}

