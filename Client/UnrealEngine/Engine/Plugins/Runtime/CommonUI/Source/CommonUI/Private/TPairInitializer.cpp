// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// operator<FString,FInlineIconEntry>_TTuple<FString,FInlineIconEntry> @ 14a78c990

TTuple<FString,FInlineIconEntry> * __thiscall
TPairInitializer<FString_&&,FInlineIconEntry_&&>::
operator<FString,FInlineIconEntry>_TTuple<FString,FInlineIconEntry>
          (TPairInitializer<FString_&&,FInlineIconEntry_&&> *this,
          TTuple<FString,FInlineIconEntry> *__return_storage_ptr__)

{
  FString *pFVar1;
  FInlineIconEntry *pFVar2;
  double dVar3;
  undefined8 uVar4;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  FText::FText((FText *)&__return_storage_ptr__->field_0x10,&pFVar2->Name);
  dVar3 = (pFVar2->ImageSize).field0_0x0._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x20 = (pFVar2->ImageSize).field0_0x0._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 =
       *(undefined8 *)&(pFVar2->ResourceObject).SoftObjectPtr;
  uVar4 = *(undefined8 *)&(pFVar2->ResourceObject).SoftObjectPtr.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 =
       *(undefined8 *)&(pFVar2->ResourceObject).SoftObjectPtr.field_0x8;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 =
       *(undefined8 *)&(pFVar2->ResourceObject).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(pFVar2->ResourceObject).SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 =
       *(undefined4 *)&(pFVar2->ResourceObject).SoftObjectPtr.field_0x20;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 =
       *(undefined4 *)&(pFVar2->ResourceObject).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(pFVar2->ResourceObject).SoftObjectPtr.field_0x20 = 0;
  return __return_storage_ptr__;
}

