// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1473ca680

UScriptStruct * __cdecl FSoftAnimBankItem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftAnimBankItem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoftAnimBankItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftAnimBankItem,(UObject *)pUVar1,
                         L"SoftAnimBankItem");
  }
  return Z_Registration_Info_UScriptStruct_FSoftAnimBankItem.OuterSingleton;
}

// FSoftAnimBankItem @ 1473d7440

FSoftAnimBankItem * __thiscall
FSoftAnimBankItem::FSoftAnimBankItem(FSoftAnimBankItem *this,FSoftAnimBankItem *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  undefined1 *this_00;
  UObject *local_res8;
  
  this_00 = &(this->BankAsset).SoftObjectPtr.field_0x18;
  local_res8 = (UObject *)0x0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = (UObject *)0x0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->SequenceIndex = 0;
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UAnimBank::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       (local_res8 = pUVar2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_1473d74cb;
  }
  local_res8 = (UObject *)0x0;
LAB_1473d74cb:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->SequenceIndex = param_1->SequenceIndex;
  return this;
}

// FSoftAnimBankItem @ 1473d7520

FSoftAnimBankItem * __thiscall
FSoftAnimBankItem::FSoftAnimBankItem(FSoftAnimBankItem *this,FAnimBankItem *param_1)

{
  undefined1 *this_00;
  UAnimBank *local_res8;
  
  this_00 = &(this->BankAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = (UAnimBank *)0x0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->SequenceIndex = 0;
  local_res8 = (param_1->BankAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UAnimBank *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->SequenceIndex = param_1->SequenceIndex;
  return this;
}

// FSoftAnimBankItem @ 1473d75b0

FSoftAnimBankItem * __thiscall FSoftAnimBankItem::FSoftAnimBankItem(FSoftAnimBankItem *this)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  this_00 = &(this->BankAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->BankAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)this,(FObjectPtr)&local_res8);
  this->SequenceIndex = 0;
  return this;
}

// operator== @ 1473dc580

bool __thiscall FSoftAnimBankItem::operator==(FSoftAnimBankItem *this,FSoftAnimBankItem *param_1)

{
  bool bVar1;
  
  bVar1 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->BankAsset).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_1->BankAsset).SoftObjectPtr.field_0x8);
  if ((bVar1) && (this->SequenceIndex == param_1->SequenceIndex)) {
    return true;
  }
  return false;
}

// operator!= @ 1473dc6e0

bool __thiscall FSoftAnimBankItem::operator!=(FSoftAnimBankItem *this,FSoftAnimBankItem *param_1)

{
  bool bVar1;
  
  bVar1 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->BankAsset).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_1->BankAsset).SoftObjectPtr.field_0x8);
  if ((bVar1) && (this->SequenceIndex == param_1->SequenceIndex)) {
    return false;
  }
  return true;
}

