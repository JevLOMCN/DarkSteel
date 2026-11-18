// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyPath
// Functions: 2

// StaticStruct @ 14446d8d0

UScriptStruct * __cdecl FPropertyPathTestInnerStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyPathTestInnerStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyPath();
    Z_Registration_Info_UScriptStruct_FPropertyPathTestInnerStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct,(UObject *)pUVar1,
                         L"PropertyPathTestInnerStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyPathTestInnerStruct.OuterSingleton;
}

// ~FPropertyPathTestInnerStruct @ 14448a880

void __thiscall
FPropertyPathTestInnerStruct::~FPropertyPathTestInnerStruct(FPropertyPathTestInnerStruct *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_18;
  
  this->Float = -1.5;
  this->_padding_ = (longlong)&___7FPropertyPathTestInnerStruct__6B_;
  this->Bool = true;
  this->EnumOne = '\x03';
  this->EnumTwo = '\x03';
  this->EnumThree = '\x03';
  (this->EnumFour).Value = '\x03';
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
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FPropertyPathTestBaseStruct__6B_;
  return;
}

