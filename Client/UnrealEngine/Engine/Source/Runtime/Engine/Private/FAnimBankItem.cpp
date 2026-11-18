// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1473ca1c0

UScriptStruct * __cdecl FAnimBankItem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimBankItem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimBankItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimBankItem,(UObject *)pUVar1,L"AnimBankItem");
  }
  return Z_Registration_Info_UScriptStruct_FAnimBankItem.OuterSingleton;
}

// FAnimBankItem @ 1473d4b60

FAnimBankItem * __thiscall FAnimBankItem::FAnimBankItem(FAnimBankItem *this,FAnimBankItem *param_1)

{
  UAnimBank *pUVar1;
  
  (this->BankAsset).field0_0x0.DebugPtr = (UAnimBank *)0x0;
  this->SequenceIndex = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->BankAsset).field0_0x0.DebugPtr, pUVar1 != (UAnimBank *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->BankAsset).field0_0x0 = (param_1->BankAsset).field0_0x0;
  this->SequenceIndex = param_1->SequenceIndex;
  return this;
}

// FAnimBankItem @ 1473d4bb0

FAnimBankItem * __thiscall
FAnimBankItem::FAnimBankItem(FAnimBankItem *this,FSoftAnimBankItem *param_1)

{
  int iVar1;
  UAnimBank *pUVar2;
  UClass *pUVar3;
  
  (this->BankAsset).field0_0x0.DebugPtr = (UAnimBank *)0x0;
  this->SequenceIndex = 0;
  pUVar2 = (UAnimBank *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar2 == (UAnimBank *)0x0) {
    if (*(longlong *)&(param_1->BankAsset).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(param_1->BankAsset).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar2 = (UAnimBank *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
      goto LAB_1473d4bff;
    }
  }
  else {
LAB_1473d4bff:
    if (pUVar2 != (UAnimBank *)0x0) {
      pUVar3 = UAnimBank::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_1473d4c29;
    }
  }
  pUVar2 = (UAnimBank *)0x0;
LAB_1473d4c29:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimBank *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->BankAsset).field0_0x0.DebugPtr = pUVar2;
  this->SequenceIndex = param_1->SequenceIndex;
  return this;
}

// FAnimBankItem @ 1473d4c70

FAnimBankItem * __thiscall FAnimBankItem::FAnimBankItem(FAnimBankItem *this)

{
  (this->BankAsset).field0_0x0.DebugPtr = (UAnimBank *)0x0;
  this->SequenceIndex = 0;
  return this;
}

// operator== @ 1473dbf60

bool __thiscall FAnimBankItem::operator==(FAnimBankItem *this,FAnimBankItem *param_1)

{
  if (((this->BankAsset).field0_0x0.DebugPtr == (param_1->BankAsset).field0_0x0.DebugPtr) &&
     (this->SequenceIndex == param_1->SequenceIndex)) {
    return true;
  }
  return false;
}

// operator!= @ 1473dc650

bool __thiscall FAnimBankItem::operator!=(FAnimBankItem *this,FAnimBankItem *param_1)

{
  if (((this->BankAsset).field0_0x0.DebugPtr == (param_1->BankAsset).field0_0x0.DebugPtr) &&
     (this->SequenceIndex == param_1->SequenceIndex)) {
    return false;
  }
  return true;
}

