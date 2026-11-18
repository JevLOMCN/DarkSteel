// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// LoadFromArchive @ 1417690e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTextLocalizationMetaDataResource::LoadFromArchive
          (FTextLocalizationMetaDataResource *this,FArchive *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  byte local_res20 [8];
  FGuid local_28;
  
  local_res20[0] = 0;
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  ::operator<<(param_1,&local_28);
  if (((local_28.C == 0xbd464c6c && local_28.A == 0xa14cee4f) && local_28.B == 0x83554868) &&
      local_28.D == 0x7c50da70) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20);
    }
    else {
      local_res20[0] = *(byte *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
    if (local_res20[0] < 3) {
      ::operator<<(param_1,&this->NativeCulture);
      ::operator<<(param_1,&this->NativeLocRes);
      if (local_res20[0] == 0) {
        pFVar4 = (this->CompiledCultures).AllocatorInstance.Data;
        iVar2 = (this->CompiledCultures).ArrayNum;
        piVar1 = &(this->CompiledCultures).ArrayMax;
        if ((this->CompiledCultures).ArrayMax < 0) {
          DestructItems<FString,int>((FString *)pFVar4,iVar2);
          (this->CompiledCultures).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->CompiledCultures).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FString,int>((FString *)pFVar4,iVar2);
          (this->CompiledCultures).ArrayNum = 0;
        }
      }
      else {
        TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                  (param_1,&this->CompiledCultures);
      }
      if (1 < local_res20[0]) {
        ::operator<<(param_1,&this->bIsUGC);
        return true;
      }
      this->bIsUGC = false;
      return true;
    }
    if (1 < (byte)LogTextLocalizationResource._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
    }
  }
  else if (2 < (byte)LogTextLocalizationResource._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
    return false;
  }
  return false;
}

// LoadFromFile @ 14176a180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTextLocalizationMetaDataResource::LoadFromFile
          (FTextLocalizationMetaDataResource *this,FString *param_1)

{
  bool bVar1;
  byte bVar2;
  FArchiveState *this_00;
  wchar_t *pwVar3;
  FArchiveState *pFVar4;
  undefined1 local_18 [16];
  
  pFVar4 = (FArchiveState *)0x0;
  local_18._0_8_ = (FScriptContainerElement *)0x0;
  local_18._8_8_ = (uchar *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::LoadFileToArray
                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_18,pwVar3,0);
  if (bVar1) {
    this_00 = ::operator_new(0xa8);
    if (this_00 != (FArchiveState *)0x0) {
      this_00->_padding_ = 0;
      this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this_00->field_0x28 = 0;
      this_00->ArSerializingDefaults = 0;
      this_00->ArPortFlags = 0;
      this_00->ArMaxSerializeSize = 0;
      (this_00->ArUEVer).FileVersionUE4 = 0;
      (this_00->ArUEVer).FileVersionUE5 = 0;
      this_00->ArLicenseeUEVer = 0;
      (this_00->ArEngineVer).Major = 0;
      (this_00->ArEngineVer).Minor = 0;
      (this_00->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
      (this_00->ArEngineVer).Changelist = 0;
      this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
      this_00->SerializedProperty = (FProperty *)0x0;
      this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
      this_00->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this_00);
      this_00[1]._padding_ = 0;
      this_00->_padding_ = (longlong)&___7FMemoryReader__6B_;
      this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)local_18;
      this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x7fffffffffffffff;
      FArchiveState::SetIsLoading(this_00,true);
      (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
      pFVar4 = this_00;
    }
    if (pFVar4 != (FArchiveState *)0x0) {
      bVar1 = LoadFromArchive(this,(FArchive *)pFVar4,param_1);
      bVar2 = (**(code **)(pFVar4->_padding_ + 0x210))(pFVar4);
      bVar1 = (bool)(bVar2 & bVar1);
      goto LAB_14176a2b8;
    }
  }
  if (4 < (byte)LogTextLocalizationResource._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
  }
  bVar1 = false;
LAB_14176a2b8:
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  if (pFVar4 != (FArchiveState *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  return bVar1;
}

// SaveToArchive @ 141777ff0

bool __thiscall
FTextLocalizationMetaDataResource::SaveToArchive
          (FTextLocalizationMetaDataResource *this,FArchive *param_1,FString *param_2)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  FGuid local_18;
  
  local_18 = FTextLocalizationResourceVersion::LocMetaMagic;
  ::operator<<(param_1,&local_18);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = 2;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  ::operator<<(param_1,&this->NativeCulture);
  ::operator<<(param_1,&this->NativeLocRes);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,&this->CompiledCultures);
  ::operator<<(param_1,&this->bIsUGC);
  return true;
}

// SaveToFile @ 141778e80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTextLocalizationMetaDataResource::SaveToFile
          (FTextLocalizationMetaDataResource *this,FString *param_1)

{
  longlong *plVar1;
  byte bVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  FGuid local_18;
  
  pIVar3 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,pwVar5,0);
  if (pFVar4 == (FArchive *)0x0) {
    if (4 < (byte)LogTextLocalizationResource._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogTextLocalizationResource);
    }
    bVar6 = false;
  }
  else {
    local_18 = FTextLocalizationResourceVersion::LocMetaMagic;
    ::operator<<(pFVar4,&local_18);
    plVar1 = *(longlong **)&pFVar4->field_0x8;
    local_res10[0] = 2;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res10,1);
    }
    else {
      local_res10[0] = *(undefined1 *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    ::operator<<(pFVar4,&this->NativeCulture);
    ::operator<<(pFVar4,&this->NativeLocRes);
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              (pFVar4,&this->CompiledCultures);
    ::operator<<(pFVar4,&this->bIsUGC);
    bVar2 = (**(code **)(*(longlong *)pFVar4 + 0x210))(pFVar4);
    bVar6 = (bool)(bVar2 & 1);
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
  }
  return bVar6;
}

