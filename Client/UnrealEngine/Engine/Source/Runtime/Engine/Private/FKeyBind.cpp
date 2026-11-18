// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1488ee440

UScriptStruct * __cdecl FKeyBind::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKeyBind.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKeyBind.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKeyBind,(UObject *)pUVar1,L"KeyBind");
  }
  return Z_Registration_Info_UScriptStruct_FKeyBind.OuterSingleton;
}

// FKeyBind @ 148907a00

FKeyBind * __thiscall FKeyBind::FKeyBind(FKeyBind *this,FKeyBind *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  byte bVar2;
  
  (this->Key).KeyName = (param_1->Key).KeyName;
  (this->Key).KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&this->Command,&param_1->Command);
  bVar2 = (this->Control ^ param_1->Control) & 1 ^ this->field_0x28;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 2 ^ bVar2;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 4 ^ bVar2;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 8 ^ bVar2;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 0x10 ^ bVar2;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 0x20 ^ bVar2;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 0x40 ^ bVar2;
  this->field_0x28 = bVar2;
  this->field_0x28 = (bVar2 ^ param_1->field_0x28) & 0x7f ^ param_1->field_0x28;
  this->field_0x29 = this->field_0x29 ^ (this->bDisabled ^ param_1->bDisabled) & 1;
  return this;
}

// operator= @ 14890f420

FKeyBind * __thiscall FKeyBind::operator=(FKeyBind *this,FKeyBind *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  byte bVar4;
  
  (this->Key).KeyName = (param_1->Key).KeyName;
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Key).KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Key).KeyDetails.Object = pFVar2;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  ::FString::operator=(&this->Command,&param_1->Command);
  bVar4 = (this->Control ^ param_1->Control) & 1 ^ this->field_0x28;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 2 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 4 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 8 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 0x10 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 0x20 ^ bVar4;
  this->field_0x28 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x28) & 0x40 ^ bVar4;
  this->field_0x28 = bVar4;
  this->field_0x28 = (bVar4 ^ param_1->field_0x28) & 0x7f ^ param_1->field_0x28;
  this->field_0x29 = this->field_0x29 ^ (this->bDisabled ^ param_1->bDisabled) & 1;
  return this;
}

