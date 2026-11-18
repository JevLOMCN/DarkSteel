// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FObjectExport @ 1420e9830

FObjectExport * __thiscall
FObjectExport::FObjectExport(FObjectExport *this,UObject *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  EObjectFlags EVar3;
  longlong lVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar8 = 0;
  lVar4 = lVar8;
  if (param_1 != (UObject *)0x0) {
    lVar4 = *(longlong *)&param_1->field_0x18;
  }
  this->_padding_ = lVar4;
  this->_padding_ = 0;
  this->ClassIndex = 0;
  this->ThisIndex = 0;
  this->SuperIndex = 0;
  EVar3 = RF_NoFlags;
  (this->TemplateIndex).Index = 0;
  if (param_1 != (UObject *)0x0) {
    EVar3 = *(EObjectFlags *)&param_1->field_0x8 &
            (RF_MigratingAsset|RF_NonPIEDuplicateTransient|RF_DuplicateTransient|
             RF_InheritableComponentTemplate|RF_TextExportTransient|RF_DefaultSubObject|
             RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_Standalone|RF_Public);
  }
  this->bWasFiltered = false;
  this->ObjectFlags = EVar3;
  this->SerialSize = 0;
  this->SerialOffset = 0;
  this->ScriptSerializationStartOffset = 0;
  this->ScriptSerializationEndOffset = 0;
  this->Object = param_1;
  this->HashNext = -1;
  this->field_0x4c = param_2 << 3;
  this->PackageFlags = 0;
  this->FirstExportDependency = -1;
  this->SerializationBeforeSerializationDependencies = 0;
  this->CreateBeforeSerializationDependencies = 0;
  this->SerializationBeforeCreateDependencies = 0;
  this->CreateBeforeCreateDependencies = 0;
  if (param_1 != (UObject *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0x100))(param_1);
    bVar7 = 0;
    if (cVar1 == '\0') {
      bVar7 = 2;
    }
    this->bNotForClient = false;
    this->field_0x4c = this->field_0x4c | bVar7;
    cVar1 = (**(code **)(*(longlong *)this->Object + 0x108))();
    if (cVar1 == '\0') {
      lVar8 = 4;
    }
    this->bNotForServer = false;
    this->field_0x4c = this->field_0x4c | (byte)lVar8;
    cVar1 = (**(code **)(*(longlong *)this->Object + 0x1c0))();
    this->field_0x4c = this->field_0x4c ^ (cVar1 << 4 ^ this->field_0x4c) & 0x10U;
    pUVar5 = UObject::GetArchetype(this->Object);
    bVar2 = UObjectBaseUtility::IsDefaultSubobject((UObjectBaseUtility *)pUVar5);
    if (bVar2) {
      pUVar5 = *(UObject **)&pUVar5->field_0x20;
      pUVar6 = UObject::GetArchetype(*(UObject **)&this->Object->field_0x20);
      if (pUVar5 == pUVar6) {
        this->bIsInheritedInstance = true;
        return this;
      }
    }
  }
  return this;
}

// FObjectExport @ 1420e9960

FObjectExport * __thiscall FObjectExport::FObjectExport(FObjectExport *this)

{
  undefined1 *puVar1;
  
  this->bWasFiltered = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ClassIndex = 0;
  this->ThisIndex = 0;
  this->SuperIndex = 0;
  this->TemplateIndex = 0;
  this->ObjectFlags = RF_NoFlags;
  this->SerialSize = 0;
  this->SerialOffset = 0;
  this->ScriptSerializationStartOffset = 0;
  this->ScriptSerializationEndOffset = 0;
  this->Object = (UObject *)0x0;
  this->PackageFlags = 0;
  this->SerializationBeforeSerializationDependencies = 0;
  this->CreateBeforeSerializationDependencies = 0;
  this->SerializationBeforeCreateDependencies = 0;
  this->CreateBeforeCreateDependencies = 0;
  this->HashNext = -1;
  puVar1 = &this->field_0x4c;
  this->bForcedExport = false;
  this->bExportLoadFailed = false;
  this->bGeneratePublicHash = false;
  this->bIsInheritedInstance = false;
  this->bIsAsset = false;
  this->bNotAlwaysLoadedForEditorGame = true;
  this->bNotForServer = false;
  this->bNotForClient = false;
  this->FirstExportDependency = -1;
  return this;
}

// ResetObject @ 14210a520

void __thiscall FObjectExport::ResetObject(FObjectExport *this)

{
  this->bExportLoadFailed = false;
  this->bWasFiltered = false;
  this->Object = (UObject *)0x0;
  return;
}

