// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 1

// operator<UClass_*,FTransformableRegistry::FTransformableInfo>_TTuple<UClass_*,FTransformableRegistry::FTransformableInfo> @ 14648f8b0

TTuple<UClass_*,FTransformableRegistry::FTransformableInfo> * __thiscall
TPairInitializer<UClass_*_&,FTransformableRegistry::FTransformableInfo_const_&>::
operator<UClass_*,FTransformableRegistry::FTransformableInfo>_TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>
          (TPairInitializer<UClass_*_&,FTransformableRegistry::FTransformableInfo_const_&> *this,
          TTuple<UClass_*,FTransformableRegistry::FTransformableInfo> *__return_storage_ptr__)

{
  FTransformableInfo *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pFVar1 = this->Value;
  *(UClass **)__return_storage_ptr__ = *this->Key;
  lVar2 = *(longlong *)&pFVar1->CreateHandleFunc;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)&(pFVar1->CreateHandleFunc).field_0x28;
    puVar4 = (undefined8 *)&(pFVar1->CreateHandleFunc).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    (**(code **)*puVar4)();
  }
  lVar2 = *(longlong *)&pFVar1->GetHashFunc;
  *(longlong *)&__return_storage_ptr__->field_0x40 = lVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)&(pFVar1->GetHashFunc).field_0x28;
    puVar4 = (undefined8 *)&(pFVar1->GetHashFunc).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    (**(code **)*puVar4)();
  }
  return __return_storage_ptr__;
}

