// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// FLiveLinkCollectionSubjectItem @ 14d0111a0

FLiveLinkCollectionSubjectItem * __thiscall
FLiveLinkCollectionSubjectItem::FLiveLinkCollectionSubjectItem
          (FLiveLinkCollectionSubjectItem *this,FLiveLinkSubjectKey *param_1,
          ULiveLinkVirtualSubject *param_2,bool param_3)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Source).A;
  uVar3 = (param_1->Source).B;
  uVar4 = (param_1->Source).C;
  uVar5 = (param_1->Source).D;
  this->bEnabled = param_3;
  FVar1 = (param_1->SubjectName).Name;
  this->bPendingKill = false;
  (this->Key).Source.A = uVar2;
  (this->Key).Source.B = uVar3;
  (this->Key).Source.C = uVar4;
  (this->Key).Source.D = uVar5;
  (this->Key).SubjectName.Name = FVar1;
  (this->Setting).Object = (UObject *)0x0;
  (this->LiveSubject).Ptr = (FLiveLinkSubject *)0x0;
  (this->VirtualSubject).Object = (UObject *)0x0;
  if (param_2 != (ULiveLinkVirtualSubject *)0x0) {
    UObjectBase::AddRef((UObjectBase *)param_2);
    (this->VirtualSubject).Object = (UObject *)param_2;
  }
  return this;
}

// FLiveLinkCollectionSubjectItem @ 14d011200

FLiveLinkCollectionSubjectItem * __thiscall
FLiveLinkCollectionSubjectItem::FLiveLinkCollectionSubjectItem
          (FLiveLinkCollectionSubjectItem *this,FLiveLinkSubjectKey *param_1,
          TUniquePtr<FLiveLinkSubject,TDefaultDelete<FLiveLinkSubject>_> param_2,
          ULiveLinkSubjectSettings *param_3,bool param_4)

{
  FName FVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = (param_1->SubjectName).Name;
  this->bEnabled = param_4;
  this->bPendingKill = false;
  uVar3 = (param_1->Source).B;
  uVar4 = (param_1->Source).C;
  uVar5 = (param_1->Source).D;
  (this->Key).Source.A = (param_1->Source).A;
  (this->Key).Source.B = uVar3;
  (this->Key).Source.C = uVar4;
  (this->Key).Source.D = uVar5;
  (this->Key).SubjectName.Name = FVar1;
  (this->Setting).Object = (UObject *)0x0;
  if (param_3 != (ULiveLinkSubjectSettings *)0x0) {
    UObjectBase::AddRef((UObjectBase *)param_3);
    (this->Setting).Object = (UObject *)param_3;
  }
  (this->LiveSubject).Ptr = (FLiveLinkSubject *)(param_2.Ptr)->_padding_;
  (param_2.Ptr)->_padding_ = 0;
  (this->VirtualSubject).Object = (UObject *)0x0;
  puVar2 = (undefined8 *)(param_2.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

