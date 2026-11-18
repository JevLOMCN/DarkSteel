// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 6

// FMaterialExpressionParameter @ 14e62acf0

FMaterialExpressionParameter * __thiscall
GLTF::FMaterialExpressionParameter::FMaterialExpressionParameter
          (FMaterialExpressionParameter *this,int param_1)

{
  *(int *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)&___7FMaterialExpressionParameter_GLTF__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->GroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupName).Data.ArrayNum = 0;
  (this->GroupName).Data.ArrayMax = 0;
  return this;
}

// ~FMaterialExpressionParameter @ 14e62be20

void __thiscall
GLTF::FMaterialExpressionParameter::~FMaterialExpressionParameter
          (FMaterialExpressionParameter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMaterialExpressionParameter_GLTF__6B_;
  pFVar1 = (this->GroupName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  return;
}

// GetGroupName @ 14e63b6f0

wchar_t * __thiscall
GLTF::FMaterialExpressionParameter::GetGroupName(FMaterialExpressionParameter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_589650665588916130>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                       ,0x5e,
                       "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar2)();
      return pwVar4;
    }
  }
  if ((this->GroupName).Data.ArrayNum != 0) {
    return (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
  }
  return L"";
}

// GetName @ 14e63d4b0

wchar_t * __thiscall GLTF::FMaterialExpressionParameter::GetName(FMaterialExpressionParameter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_589650665588916144>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                       ,0x50,
                       "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar2)();
      return pwVar4;
    }
  }
  if ((this->Name).Data.ArrayNum != 0) {
    return (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
  }
  return L"";
}

// SetGroupName @ 14e64a840

void __thiscall
GLTF::FMaterialExpressionParameter::SetGroupName
          (FMaterialExpressionParameter *this,wchar_t *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_589650665588916137>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                       ,0x57,
                       "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FString::operator=(&this->GroupName,param_1);
  return;
}

// SetName @ 14e64b170

void __thiscall
GLTF::FMaterialExpressionParameter::SetName(FMaterialExpressionParameter *this,wchar_t *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_589650665588916151>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                       ,0x49,
                       "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FString::operator=(&this->Name,param_1);
  return;
}

