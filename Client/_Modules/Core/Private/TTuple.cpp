// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~TTuple<FString,FString> @ 1415895e0

void __thiscall TTuple<FString,FString>::~TTuple<FString,FString>(TTuple<FString,FString> *this)

{
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue> @ 141722450

TTuple<FString,FFormatArgumentValue> * __thiscall
TTuple<FString,FFormatArgumentValue>::
TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>
          (TTuple<FString,FFormatArgumentValue> *this,FString *param_1,FFormatArgumentValue *param_2
          )

{
  *(undefined8 *)this = 0;
  *(FScriptContainerElement **)this = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->field_0x8 = (param_1->Data).ArrayNum;
  *(int *)&this->field_0xc = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  *(Type *)&this->field_0x10 = param_2->Type;
  *(FFormatArgumentValue_u_8 *)&this->field_0x18 = param_2->field1_0x8;
  *(FFormatArgumentValue_u_8 *)&this->field_0x18 = param_2->field1_0x8;
  *(float *)&this->field_0x18 = (param_2->field1_0x8).FloatValue;
  *(FFormatArgumentValue_u_8 *)&this->field_0x18 = param_2->field1_0x8;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((param_2->TextValue).field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&this->field_0x20,(FText *)&param_2->TextValue);
  }
  return this;
}

