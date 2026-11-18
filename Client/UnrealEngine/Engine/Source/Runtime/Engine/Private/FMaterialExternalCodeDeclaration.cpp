// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147f0de00

UScriptStruct * __cdecl FMaterialExternalCodeDeclaration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialExternalCodeDeclaration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialExternalCodeDeclaration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialExternalCodeDeclaration,
                         (UObject *)pUVar1,L"MaterialExternalCodeDeclaration");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialExternalCodeDeclaration.OuterSingleton;
}

// UpdateHash @ 147f539f0

void __thiscall
FMaterialExternalCodeDeclaration::UpdateHash(FMaterialExternalCodeDeclaration *this,FSHA1 *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FName *this_00;
  uint uVar7;
  byte local_res8 [8];
  uint local_res18 [4];
  FString local_48;
  FString local_38;
  
  local_res8[0] = this->bIsInlined;
  FSHA1::Update(param_1,local_res8,1);
  FSHA1::Update(param_1,(uchar *)&this->ReturnType,8);
  ::FName::ToString(&this->Name,&local_38);
  uVar7 = local_38.Data.ArrayNum - 1;
  FVar4.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    uVar7 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(param_1,(wchar_t *)FVar4.Data,uVar7);
  iVar3 = (this->Definition).Data.ArrayNum;
  uVar7 = iVar3 - 1;
  if (iVar3 == 0) {
    uVar7 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->Definition).Data.AllocatorInstance.Data;
  }
  FSHA1::UpdateWithString(param_1,pwVar5,uVar7);
  FSHA1::Update(param_1,&this->Derivative,1);
  FSHA1::Update(param_1,&this->ShaderFrequency,1);
  pFVar6 = (this->Domains).AllocatorInstance.Data;
  iVar3 = (this->Domains).ArrayNum;
  pFVar1 = pFVar6 + iVar3;
  while( true ) {
    if ((this->Domains).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TEnumAsByte<enum_EMaterialDomain>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar6 == pFVar1) break;
    local_res18[0] = (uint)(byte)*pFVar6;
    FSHA1::Update(param_1,(uchar *)local_res18,4);
    pFVar6 = pFVar6 + 1;
  }
  iVar3 = (this->EnvironmentDefines).ArrayNum;
  this_00 = (FName *)(this->EnvironmentDefines).AllocatorInstance.Data;
  pFVar2 = (FName *)((longlong)this_00 + (longlong)iVar3 * 0xc);
  while( true ) {
    if ((this->EnvironmentDefines).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMaterialExternalCodeEnvironmentDefine_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (this_00 == pFVar2) break;
    ::FName::ToString(this_00,&local_48);
    uVar7 = local_48.Data.ArrayNum - 1;
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) {
      uVar7 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(param_1,(wchar_t *)FVar4.Data,uVar7);
    FSHA1::Update(param_1,(uchar *)(this_00 + 1),1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    this_00 = (FName *)&this_00[1].Number;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

