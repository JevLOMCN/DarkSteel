// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 3

// StaticStruct @ 1494bcfb0

UScriptStruct * __cdecl FShaderParamTypeDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderParamTypeDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FShaderParamTypeDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderParamTypeDefinition,(UObject *)pUVar1,
                         L"ShaderParamTypeDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FShaderParamTypeDefinition.OuterSingleton;
}

// ParseResource @ 1494d4c30

EShaderResourceType __cdecl FShaderParamTypeDefinition::ParseResource(FString *param_1)

{
  int iVar1;
  size_t sVar2;
  TTuple<EShaderResourceType,FString> *pTVar3;
  wchar_t *_Str;
  
  pTVar3 = ResTypeStringMap;
  do {
    if (*(int *)&pTVar3->field_0x10 == 0) {
      _Str = L"";
LAB_1494d4c78:
      sVar2 = wcslen(_Str);
      iVar1 = ::FString::Find(param_1,_Str,(int)sVar2,IgnoreCase,FromStart,-1);
      if (iVar1 != -1) {
        return pTVar3->field_0x0;
      }
    }
    else {
      _Str = *(wchar_t **)&pTVar3->field_0x8;
      if (_Str != (wchar_t *)0x0) goto LAB_1494d4c78;
    }
    pTVar3 = pTVar3 + 1;
    if ((Rect<__int64> *)pTVar3 == &Clipper2Lib::MaxInvalidRect64) {
      return None;
    }
  } while( true );
}

// ResetTypeDeclaration @ 1494d6ab0

void __thiscall FShaderParamTypeDefinition::ResetTypeDeclaration(FShaderParamTypeDefinition *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  TTuple<EShaderResourceType,FString> *pTVar7;
  int iVar8;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (this->BindingType == ReadWriteResource) {
    ::FString::AppendChars(&local_38,L"RW",2);
  }
  if ((this->BindingType == ReadOnlyResource) || (this->BindingType == ReadWriteResource)) {
    bVar4 = true;
    pTVar7 = ResTypeStringMap;
    do {
      if (pTVar7->field_0x0 == this->ResourceType) goto LAB_1494d6b59;
      pTVar7 = pTVar7 + 1;
    } while ((Rect<__int64> *)pTVar7 != &Clipper2Lib::MaxInvalidRect64);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("foundItem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                       ,0x2e7,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_1494d6b59:
    ::FString::AppendfImpl(&local_38,L"%s<");
  }
  else {
    bVar4 = false;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar6 = FShaderValueType::ToString((this->ValueType).ValueTypePtr,&local_28,&local_res8);
  iVar1 = (pFVar6->Data).ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    ::FString::AppendChar(&local_38,L'>');
  }
  if (this != (FShaderParamTypeDefinition *)&local_38) {
    pFVar2 = (this->TypeDeclaration).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->TypeDeclaration).Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->TypeDeclaration).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->TypeDeclaration).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

