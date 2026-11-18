// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14773ae10

UScriptStruct * __cdecl FDataCacheDuplicatedObjectData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataCacheDuplicatedObjectData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDataCacheDuplicatedObjectData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData,(UObject *)pUVar1,
                         L"DataCacheDuplicatedObjectData");
  }
  return Z_Registration_Info_UScriptStruct_FDataCacheDuplicatedObjectData.OuterSingleton;
}

// FDataCacheDuplicatedObjectData @ 1477ec390

FDataCacheDuplicatedObjectData * __thiscall
FDataCacheDuplicatedObjectData::FDataCacheDuplicatedObjectData
          (FDataCacheDuplicatedObjectData *this,UObject *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  this->DuplicatedObject = param_1;
  this->ObjectPathDepth = 0;
  for (; param_1 != (UObject *)0x0; param_1 = *(UObject **)&param_1->field_0x20) {
    iVar1 = iVar1 + 1;
    this->ObjectPathDepth = iVar1;
  }
  return this;
}

// Serialize @ 147863ef0

bool __thiscall
FDataCacheDuplicatedObjectData::Serialize(FDataCacheDuplicatedObjectData *this,FArchive *param_1)

{
  longlong *plVar1;
  UStruct *this_00;
  UObjectBaseUtility *this_01;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  EObjectFlags EVar5;
  TStringView<wchar_t> *pTVar6;
  size_t sVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FString *pFVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint local_res10 [2];
  EObjectFlags local_res18 [2];
  FName local_res20;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_198;
  FArchiveState local_188;
  undefined8 local_f8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_f0;
  FScriptContainerElement *local_e8;
  FObjectAndNameAsStringProxyArchive local_d8;
  
  bVar4 = false;
  bVar2 = false;
  plVar1 = *(longlong **)&param_1->field_0x8;
  bVar3 = true;
  local_res10[0] = 0;
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10);
  }
  else {
    local_res10[0] = (uint)*(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((char)local_res10[0] != '\0') {
    FArchiveState::SetError((FArchiveState *)param_1);
    return true;
  }
  local_1a8.DataPtr = (wchar_t *)0x0;
  local_1a8.Size = 0;
  local_1a8._12_4_ = 0;
  local_1b8.DataPtr = (wchar_t *)0x0;
  local_1b8.Size = 0;
  local_1b8._12_4_ = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_res18[0] = RF_NoFlags;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  if (((param_1->field_0x28 & 4) != 0) && (this->DuplicatedObject != (UObject *)0x0)) {
    this_00 = *(UStruct **)&this->DuplicatedObject->field_0x10;
    if (this_00 == (UStruct *)0x0) {
      bVar2 = true;
      local_1d8.DataPtr = (wchar_t *)0x0;
      bVar3 = false;
      local_1d8.Size = 0;
      local_1d8._12_4_ = 0;
      pTVar6 = &local_1d8;
LAB_147864027:
      if ((FScriptContainerElement *)local_1a8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.DataPtr);
      }
      local_1a8.DataPtr =
           (wchar_t *)
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->DataPtr)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->DataPtr)->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      local_1a8.Size = pTVar6->Size;
      local_1a8._8_8_ = *(undefined8 *)&pTVar6->Size;
      *(undefined8 *)&pTVar6->Size = 0;
      if ((bVar2) &&
         (bVar3 = bVar4,
         (FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1d8.DataPtr);
      }
      if (bVar3) goto LAB_14786406c;
    }
    else {
      pTVar6 = (TStringView<wchar_t> *)
               UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)this_00,(FString *)&local_1c8,(UObject *)0x0);
      if (&local_1a8 != pTVar6) {
        bVar4 = true;
        goto LAB_147864027;
      }
LAB_14786406c:
      if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.DataPtr);
      }
    }
    this_01 = *(UObjectBaseUtility **)&this->DuplicatedObject->field_0x20;
    if (this_01 == (UObjectBaseUtility *)0x0) {
      pTVar6 = &local_1d8;
      local_1d8.DataPtr = (wchar_t *)0x0;
      bVar3 = false;
      bVar2 = true;
      local_1d8.Size = 0;
      local_1d8._12_4_ = 0;
LAB_1478640c1:
      if ((FScriptContainerElement *)local_1b8.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.DataPtr);
      }
      local_1b8.DataPtr =
           (wchar_t *)
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->DataPtr)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->DataPtr)->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      local_1b8.Size = pTVar6->Size;
      local_1b8._8_8_ = *(undefined8 *)&pTVar6->Size;
      *(undefined8 *)&pTVar6->Size = 0;
    }
    else {
      pTVar6 = (TStringView<wchar_t> *)
               UObjectBaseUtility::GetPathName(this_01,(FString *)&local_1c8,(UObject *)0x0);
      bVar3 = true;
      bVar2 = false;
      if (&local_1b8 != pTVar6) goto LAB_1478640c1;
    }
    if ((bVar2) && ((FScriptContainerElement *)local_1d8.DataPtr != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_1d8.DataPtr);
    }
    if ((bVar3) && ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_1c8.DataPtr);
    }
    pUVar10 = this->DuplicatedObject;
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
    local_res20.Number = *(uint *)&pUVar10->field_0x1c;
    local_res18[0] =
         *(EObjectFlags *)&pUVar10->field_0x8 &
         (RF_MigratingAsset|RF_NonPIEDuplicateTransient|RF_DuplicateTransient|
          RF_InheritableComponentTemplate|RF_TextExportTransient|RF_DefaultSubObject|
          RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_Standalone|RF_Public);
    if (this_00 != (UStruct *)0x0) {
      local_1d8.DataPtr = (wchar_t *)0x0;
      local_188._padding_ = 0;
      local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_188._40_8_ = 0;
      local_188.ArSerializingDefaults = 0;
      local_188.ArPortFlags = 0;
      local_188.ArMaxSerializeSize = 0;
      local_188.ArUEVer.FileVersionUE4 = 0;
      local_188.ArUEVer.FileVersionUE5 = 0;
      local_188.ArLicenseeUEVer = 0;
      local_188.ArEngineVer.Major = 0;
      local_188.ArEngineVer.Minor = 0;
      local_188.ArEngineVer.Patch = 0;
      local_188.ArEngineVer._6_2_ = 0;
      local_188.ArEngineVer.Changelist = 0;
      local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_188.SerializedProperty = (FProperty *)0x0;
      local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_188.bCustomVersionsAreReset = false;
      local_188._129_7_ = 0;
      local_188.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_188);
      local_f8 = 0;
      local_188._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_f0 = &local_198;
      local_e8 = (FScriptContainerElement *)local_1d8.DataPtr;
      FArchiveState::SetIsSaving(&local_188,true);
      (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
      local_188._padding_ = (longlong)&___7FMemoryWriter__6B_;
      FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
                (&local_d8,(FArchive *)&local_188,false);
      UStruct::SerializeTaggedProperties
                (this_00,(FArchive *)&local_d8,(uchar *)this->DuplicatedObject,this_00,(uchar *)0x0,
                 (UObject *)0x0);
      FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_d8);
      FArchive::~FArchive((FArchive *)&local_188);
    }
  }
  ::operator<<(param_1,(FString *)&local_1a8);
  ::operator<<(param_1,(FString *)&local_1b8);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((EObjectFlags *)plVar1[1] < (EObjectFlags *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(EObjectFlags *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_198);
  if ((param_1->field_0x28 & 1) == 0) goto LAB_14786448f;
  this->DuplicatedObject = (UObject *)0x0;
  if (local_1a8.Size < 2) goto LAB_14786448f;
  iVar14 = 0;
  local_1d8.Size = 0;
  local_1d8._12_4_ = 0;
  local_1d8.DataPtr = (wchar_t *)0x0;
  local_1c8.DataPtr = local_1a8.DataPtr;
  if ((FScriptContainerElement *)local_1a8.DataPtr != (FScriptContainerElement *)0x0) {
    sVar7 = wcslen(local_1a8.DataPtr);
    iVar14 = (int)sVar7;
  }
  local_1c8.Size = iVar14;
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  pUVar8 = (UClass *)
           StaticLoadObject(pUVar8,(UObject *)0x0,&local_1c8,&local_1d8,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if (pUVar8 == (UClass *)0x0) goto LAB_14786448f;
  pwVar13 = L"";
  if (local_1b8.Size == 0) {
    local_1d8.DataPtr = L"";
LAB_147864344:
    sVar7 = wcslen(local_1d8.DataPtr);
    iVar14 = (int)sVar7;
  }
  else {
    iVar14 = 0;
    local_1d8.DataPtr = local_1b8.DataPtr;
    if ((FScriptContainerElement *)local_1b8.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_147864344;
  }
  local_1d8.Size = iVar14;
  pUVar9 = Z_Construct_UClass_UObject_NoRegister();
  local_1c8.DataPtr = local_1d8.DataPtr;
  local_1c8.Size = local_1d8.Size;
  local_1c8._12_4_ = local_1d8._12_4_;
  pUVar10 = StaticFindObject(pUVar9,(UObject *)0x0,&local_1c8,None);
  EVar5 = local_res18[0];
  if (pUVar10 != (UObject *)0x0) {
    pFVar11 = ::FName::ToString(&local_res20,(FString *)&local_1c8);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar12 = ::FName::FName((FName *)&local_1d8,pwVar13);
    pUVar10 = NewObject<UObject>(pUVar10,pUVar8,*pFVar12,EVar5,(UObject *)0x0,false,
                                 (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    this->DuplicatedObject = pUVar10;
    if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.DataPtr);
    }
    local_188._padding_ = 0;
    local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_188._40_8_ = 0;
    local_188.ArSerializingDefaults = 0;
    local_188.ArPortFlags = 0;
    local_188.ArMaxSerializeSize = 0;
    local_188.ArUEVer.FileVersionUE4 = 0;
    local_188.ArUEVer.FileVersionUE5 = 0;
    local_188.ArLicenseeUEVer = 0;
    local_188.ArEngineVer.Major = 0;
    local_188.ArEngineVer.Minor = 0;
    local_188.ArEngineVer.Patch = 0;
    local_188.ArEngineVer._6_2_ = 0;
    local_188.ArEngineVer.Changelist = 0;
    local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_188.SerializedProperty = (FProperty *)0x0;
    local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_188.bCustomVersionsAreReset = false;
    local_188._129_7_ = 0;
    local_188.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_188);
    local_f8 = 0;
    local_188._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_f0 = &local_198;
    local_e8 = (FScriptContainerElement *)0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_188,true);
    (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
    FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
              (&local_d8,(FArchive *)&local_188,false);
    UStruct::SerializeTaggedProperties
              ((UStruct *)pUVar8,(FArchive *)&local_d8,(uchar *)this->DuplicatedObject,
               (UStruct *)pUVar8,(uchar *)0x0,(UObject *)0x0);
    FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_d8);
    FArchive::~FArchive((FArchive *)&local_188);
  }
LAB_14786448f:
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_1b8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.DataPtr);
  }
  if ((FScriptContainerElement *)local_1a8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.DataPtr);
  }
  return true;
}

