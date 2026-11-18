// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 2

// StaticStruct @ 14a69c100

UScriptStruct * __cdecl FWN_CS_AnimHashingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_AnimHashingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_AnimHashingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_AnimHashingData,(UObject *)pUVar1,
                         L"WN_CS_AnimHashingData");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_AnimHashingData.OuterSingleton;
}

// FWN_CS_AnimHashingData @ 14a6a1660

FWN_CS_AnimHashingData * __thiscall
FWN_CS_AnimHashingData::FWN_CS_AnimHashingData(FWN_CS_AnimHashingData *this,UAnimSequence *param_1)

{
  FString *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FWN_CS_AnimHashingData *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined7 uVar10;
  FName local_res10;
  FString local_198;
  void *local_188;
  undefined8 local_180;
  FString local_178;
  FArchiveState local_168;
  undefined8 local_d8;
  void **local_d0;
  undefined8 local_c8;
  FObjectAndNameAsStringProxyArchive local_b8;
  
  this_00 = &this->AnimName;
  this->AnimPathHash = 0;
  this->AllWarningDatasHash = 0;
  ::FString::FString(this_00,"");
  if ((param_1 == (UAnimSequence *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7986910441928392273>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_CS\\Source\\WN_CS\\Private\\WN_CS_CharacterDescs.cpp"
                         ,0x1af,"InAnim != nullptr"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FWN_CS_AnimHashingData *)(*pcVar3)();
    return pFVar6;
  }
  pFVar7 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_178,(UObject *)0x0);
  iVar1 = (pFVar7->Data).ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar9 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar8);
  this->AnimPathHash = uVar5;
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  local_188 = (void *)0x0;
  local_180 = 0;
  local_168._padding_ = 0;
  local_168.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_168.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_168._40_8_ = 0;
  local_168.ArSerializingDefaults = 0;
  local_168.ArPortFlags = 0;
  local_168.ArMaxSerializeSize = 0;
  local_168.ArUEVer.FileVersionUE4 = 0;
  local_168.ArUEVer.FileVersionUE5 = 0;
  local_168.ArLicenseeUEVer = 0;
  local_168.ArEngineVer.Major = 0;
  local_168.ArEngineVer.Minor = 0;
  local_168.ArEngineVer.Patch = 0;
  local_168.ArEngineVer._6_2_ = 0;
  local_168.ArEngineVer.Changelist = 0;
  local_168.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_168.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_168.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_168.SerializedProperty = (FProperty *)0x0;
  local_168.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_168.bCustomVersionsAreReset = false;
  local_168._129_7_ = 0;
  local_168.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_168);
  local_d8 = 0;
  local_168._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_d0 = &local_188;
  local_c8 = 0;
  uVar10 = (undefined7)((ulonglong)pwVar8 >> 8);
  FArchiveState::SetIsSaving(&local_168,true);
  (**(code **)(local_168._padding_ + 0x108))(&local_168,CONCAT71(uVar10,1));
  local_168._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive
            (&local_b8,(FArchive *)&local_168,false);
  local_b8._padding_._3_1_ = local_b8._padding_._3_1_ & 0xbf;
  (**(code **)(param_1->_padding_ + 200))(param_1,&local_b8);
  uVar5 = (*FCrc::MemCrc32Func)(local_188,(int)local_180,0);
  this->AllWarningDatasHash = uVar5;
  local_res10 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res10,&local_198);
  if (this_00 != &local_198) {
    pFVar2 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this_00->Data).AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
    (this->AnimName).Data.ArrayNum = local_198.Data.ArrayNum;
    (this->AnimName).Data.ArrayMax = local_198.Data.ArrayMax;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_b8);
  FArchive::~FArchive((FArchive *)&local_168);
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  return this;
}

