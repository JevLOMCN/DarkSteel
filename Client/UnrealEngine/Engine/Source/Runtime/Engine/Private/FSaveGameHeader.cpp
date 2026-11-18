// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FSaveGameHeader @ 147c2ccf0

FSaveGameHeader * __thiscall
FSaveGameHeader::FSaveGameHeader(FSaveGameHeader *this,TSubclassOf<USaveGame> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FEngineVersion *pFVar4;
  UClass *pUVar5;
  UObjectBaseUtility *this_00;
  
  this->FileTypeTag = 0x53415647;
  this->SaveGameFileVersion = 3;
  this->PackageFileUEVersion = GPackageFileUEVersion;
  pFVar4 = FEngineVersion::Current();
  (this->SavedEngineVersion)._padding_ = pFVar4->_padding_;
  *(int *)&(this->SavedEngineVersion)._padding_ = (int)pFVar4->_padding_;
  ::FString::FString(&(this->SavedEngineVersion).Branch,&pFVar4->Branch);
  this->CustomVersionFormat = 3;
  FCurrentCustomVersions::GetAll(&this->CustomVersions);
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_USaveGame_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        this_00 = *(UObjectBaseUtility **)param_1.Class.field0_0x0;
        goto LAB_147c2cd8b;
      }
    }
  }
  this_00 = (UObjectBaseUtility *)0x0;
LAB_147c2cd8b:
  UObjectBaseUtility::GetPathName(this_00,&this->SaveGameClassName,(UObject *)0x0);
  return this;
}

// FSaveGameHeader @ 147c2cdb0

FSaveGameHeader * __thiscall FSaveGameHeader::FSaveGameHeader(FSaveGameHeader *this)

{
  this->FileTypeTag = 0;
  this->SaveGameFileVersion = 0;
  (this->PackageFileUEVersion).FileVersionUE4 = 0;
  (this->PackageFileUEVersion).FileVersionUE5 = 0;
  *(undefined4 *)&(this->SavedEngineVersion)._padding_ = 0;
  *(undefined2 *)((longlong)&(this->SavedEngineVersion)._padding_ + 4) = 0;
  *(undefined4 *)&(this->SavedEngineVersion)._padding_ = 0;
  (this->SavedEngineVersion).Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedEngineVersion).Branch.Data.ArrayNum = 0;
  (this->SavedEngineVersion).Branch.Data.ArrayMax = 0;
  this->CustomVersionFormat = 0;
  (this->CustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomVersions).Versions.ArrayNum = 0;
  (this->CustomVersions).Versions.ArrayMax = 0;
  (this->SaveGameClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SaveGameClassName).Data.ArrayNum = 0;
  (this->SaveGameClassName).Data.ArrayMax = 0;
  return this;
}

// Empty @ 147c4d240

void __thiscall FSaveGameHeader::Empty(FSaveGameHeader *this)

{
  this->FileTypeTag = 0;
  this->SaveGameFileVersion = 0;
  (this->PackageFileUEVersion).FileVersionUE4 = 0;
  (this->PackageFileUEVersion).FileVersionUE5 = 0;
  FEngineVersion::Empty(&this->SavedEngineVersion);
  this->CustomVersionFormat = 0;
  FCustomVersionContainer::Empty(&this->CustomVersions);
  ::FString::Empty(&this->SaveGameClassName);
  return;
}

// IsEmpty @ 147c68f10

bool __thiscall FSaveGameHeader::IsEmpty(FSaveGameHeader *this)

{
  return this->FileTypeTag == 0;
}

// Read @ 147c78180

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __thiscall FSaveGameHeader::Read(FSaveGameHeader *this,FMemoryReader *param_1)

{
  byte *pbVar1;
  int *piVar2;
  longlong *plVar3;
  FPackageFileVersion FVar4;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  
  this->FileTypeTag = 0;
  this->SaveGameFileVersion = 0;
  (this->PackageFileUEVersion).FileVersionUE4 = 0;
  (this->PackageFileUEVersion).FileVersionUE5 = 0;
  FEngineVersion::Empty(&this->SavedEngineVersion);
  this->CustomVersionFormat = 0;
  FCustomVersionContainer::Empty(&this->CustomVersions);
  ::FString::Empty(&this->SaveGameClassName);
  piVar2 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)this);
    }
  }
  else {
    this->FileTypeTag = *piVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pbVar1 = (byte *)((longlong)&param_1->_padding_ + 2);
  if (this->FileTypeTag == 0x53415647) {
    piVar2 = *(int **)param_1->_padding_;
    if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar2 + 1) {
      if ((*pbVar1 & 1) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->SaveGameFileVersion,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&this->SaveGameFileVersion);
      }
    }
    else {
      this->SaveGameFileVersion = *piVar2;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
    if (this->SaveGameFileVersion < 3) {
      plVar3 = (longlong *)param_1->_padding_;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((*pbVar1 & 1) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      FVar4 = FPackageFileVersion::CreateUE4Version((int)local_res10);
      this->PackageFileUEVersion = *(FPackageFileVersion *)FVar4;
    }
    else {
      ::operator<<((FArchive *)param_1,&this->PackageFileUEVersion);
    }
    ::operator<<((FArchive *)param_1,&this->SavedEngineVersion);
    (**(code **)(param_1->_padding_ + 0x110))(param_1,this->PackageFileUEVersion);
    (**(code **)(param_1->_padding_ + 0x120))(param_1,&this->SavedEngineVersion);
    if (1 < this->SaveGameFileVersion) {
      ::operator<<((FArchive *)param_1,&this->CustomVersionFormat);
      FCustomVersionContainer::Serialize
                (&this->CustomVersions,(FArchive *)param_1,
                 (ECustomVersionSerializationFormat)this->CustomVersionFormat);
      (**(code **)(param_1->_padding_ + 0x68))(param_1,&this->CustomVersions);
    }
  }
  else {
    param_1->_padding_ = 0;
    this->SaveGameFileVersion = 1;
  }
  ::operator<<((FArchive *)param_1,&this->SaveGameClassName);
  return;
}

// Write @ 147c8ffe0

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __thiscall FSaveGameHeader::Write(FSaveGameHeader *this,FMemoryWriter *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)this);
    }
  }
  else {
    this->FileTypeTag = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->SaveGameFileVersion;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<((FArchive *)param_1,&this->PackageFileUEVersion);
  ::operator<<((FArchive *)param_1,&this->SavedEngineVersion);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->CustomVersionFormat,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&this->CustomVersionFormat);
    }
  }
  else {
    this->CustomVersionFormat = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FCustomVersionContainer::Serialize
            (&this->CustomVersions,(FArchive *)param_1,
             (ECustomVersionSerializationFormat)this->CustomVersionFormat);
  ::operator<<((FArchive *)param_1,&this->SaveGameClassName);
  return;
}

