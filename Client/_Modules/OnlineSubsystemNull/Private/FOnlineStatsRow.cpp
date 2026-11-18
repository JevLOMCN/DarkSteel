// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 1

// FOnlineStatsRow @ 14ed11590

FOnlineStatsRow * __thiscall
FOnlineStatsRow::FOnlineStatsRow(FOnlineStatsRow *this,FOnlineStatsRow *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  ::FString::FString(&this->NickName,&param_1->NickName);
  (this->PlayerId).Object = (param_1->PlayerId).Object;
  pTVar1 = (param_1->PlayerId).SharedReferenceCount.ReferenceController;
  (this->PlayerId).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Rank = param_1->Rank;
  *(undefined8 *)&(this->Columns).field_0x0 = 0;
  *(undefined8 *)&(this->Columns).field_0x8 = 0;
  *(undefined8 *)&(this->Columns).field_0x20 = 0;
  *(undefined4 *)&(this->Columns).field_0x28 = 0;
  *(undefined4 *)&(this->Columns).field_0x2c = 0x80;
  *(undefined4 *)&(this->Columns).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Columns).field_0x34 = 0;
  *(undefined8 *)&(this->Columns).field_0x40 = 0;
  *(undefined4 *)&(this->Columns).field_0x48 = 0;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
               *)&this->Columns,
              (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
               *)&param_1->Columns);
  return this;
}

