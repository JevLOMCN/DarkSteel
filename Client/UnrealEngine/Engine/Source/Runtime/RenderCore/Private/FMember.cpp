// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// HashLayout<FXxHash64Builder,FXxHash64> @ 145e7ab20

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FShaderParametersMetadata::FMember::HashLayout<FXxHash64Builder,FXxHash64>
          (FMember *this,TMemoryHasher<FXxHash64Builder,FXxHash64> *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  EUniformBufferBaseType EVar3;
  uint *puVar4;
  EUniformBufferBaseType *pEVar5;
  Type *pTVar6;
  bool bVar7;
  size_t sVar8;
  
  puVar1 = &this->Offset;
  puVar4 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  pbVar2 = (byte *)((longlong)&param_1->_padding_ + 2);
  pEVar5 = *(EUniformBufferBaseType **)param_1->_padding_;
  if ((EUniformBufferBaseType *)((undefined8 *)param_1->_padding_)[1] < pEVar5 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->BaseType,1);
  }
  else {
    this->BaseType = *pEVar5;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
  }
  sVar8 = wcslen(this->Name);
  (**(code **)(param_1->_padding_ + 0x188))(param_1,this->Name,(longlong)(int)sVar8);
  puVar1 = &this->NumElements;
  puVar4 = *(uint **)param_1->_padding_;
  if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
    if ((*pbVar2 & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  EVar3 = this->BaseType;
  if ((EVar3 == EUniformBufferBaseType_NumBits) ||
     (((EVar3 - UBMT_SRV & 0xed) == 0 && (EVar3 != UBMT_REFERENCED_STRUCT)))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((byte)(EVar3 - UBMT_INT32) < 3) {
    pTVar6 = *(Type **)param_1->_padding_;
    if ((Type *)((undefined8 *)param_1->_padding_)[1] < pTVar6 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,&this->Precision,1);
    }
    else {
      this->Precision = *pTVar6;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
    }
    puVar1 = &this->NumRows;
    puVar4 = *(uint **)param_1->_padding_;
    if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
      if ((*pbVar2 & 1) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar4;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
    puVar1 = &this->NumColumns;
    puVar4 = *(uint **)param_1->_padding_;
    if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
      if ((*pbVar2 & 1) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar4;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
  }
  else if ((byte)(EVar3 - UBMT_NESTED_STRUCT) < 2) {
    FShaderParametersMetadata::HashLayout<FXxHash64Builder,FXxHash64>(this->Struct,param_1);
  }
  else if ((bVar7) || ((byte)(EVar3 - UBMT_RDG_TEXTURE) < 0xb)) {
    sVar8 = wcslen(this->ShaderType);
    (**(code **)(param_1->_padding_ + 0x188))(param_1,this->ShaderType,(longlong)(int)sVar8);
  }
  return;
}

// GenerateShaderParameterType @ 145e9c570

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderParametersMetadata::FMember::GenerateShaderParameterType
          (FMember *this,FString *param_1,EShaderPlatform param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GenerateShaderParameterType
            (param_1,FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel == ES3_1,
             this->BaseType,this->Precision,this->NumRows,this->NumColumns);
  return;
}

// GenerateShaderParameterType @ 145e9c610

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FShaderParametersMetadata::FMember::GenerateShaderParameterType
          (FMember *this,FString *param_1,bool param_2)

{
  GenerateShaderParameterType
            (param_1,param_2,this->BaseType,this->Precision,this->NumRows,this->NumColumns);
  return;
}

// GenerateShaderParameterType @ 145e9c650

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FShaderParametersMetadata::FMember::GenerateShaderParameterType
          (FString *param_1,bool param_2,EUniformBufferBaseType param_3,Type param_4,uint param_5,
          uint param_6)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  FString local_28;
  FString local_18;
  
  if (param_3 == UBMT_INT32) {
    pwVar3 = L"int";
  }
  else if (param_3 == UBMT_UINT32) {
    pwVar3 = L"uint";
  }
  else {
    if (param_3 != UBMT_FLOAT32) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      goto LAB_145e9c6c9;
    }
    if ((param_4 == Float) || (!param_2)) {
      pwVar3 = L"float";
    }
    else if (param_4 == Half) {
      pwVar3 = L"half";
    }
    else {
      if (param_4 != Fixed) goto LAB_145e9c6c9;
      pwVar3 = L"fixed";
    }
  }
  ::FString::operator=(param_1,pwVar3);
LAB_145e9c6c9:
  if (param_5 < 2) {
    if (param_6 < 2) {
      return;
    }
    ::FString::PrintfImpl(&local_18,L"%s%u");
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (param_1 != &local_18) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar2.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    ::FString::PrintfImpl(&local_28,L"%s%ux%u");
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
    if (param_1 != &local_28) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar2.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return;
}

