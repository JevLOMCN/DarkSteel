// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 8

// CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector4<float>_> @ 14e624f20

FMaterialExpression * __thiscall
GLTF::FPBRMapFactory::CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector4<float>_>
          (FPBRMapFactory *this,FTexture *param_1,int param_2,TVector4<float> *param_3,
          wchar_t *param_4,wchar_t *param_5,ETextureMode param_6,FMaterialExpressionInput *param_7,
          FTextureTransform *param_8)

{
  code *pcVar1;
  bool bVar2;
  FMaterialExpression *pFVar3;
  FMaterialExpressionParameter *this_00;
  FString *pFVar4;
  FLinearColor *pFVar5;
  FMaterialExpressionTexture *pFVar6;
  FMaterialExpressionParameter *pFVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  FString local_58;
  FString local_48;
  FString local_38;
  FLinearColor local_28;
  
  if (param_4 == (wchar_t *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"MapName");
    if (bVar2) {
code_r0x00014e624fb1:
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMaterialExpression *)(*pcVar1)();
      return pFVar3;
    }
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else if (this->CurrentMaterialElement == (FMaterialElement *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"CurrentMaterialElement");
    if (bVar2) goto code_r0x00014e624fb1;
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else {
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,ConstantColor);
    pwVar10 = L"";
    if (param_5 == (wchar_t *)0x0) {
      FMaterialExpressionParameter::SetName(this_00,param_4);
    }
    else {
      pFVar4 = ::FString::FString(&local_38,param_4);
      ::FString::ConcatFC(&local_48,pFVar4,L" ");
      ::FString::ConcatFC(&local_58,&local_48,param_5);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      FMaterialExpressionParameter::SetName(this_00,(wchar_t *)FVar9.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((this->GroupName).Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
    }
    FMaterialExpressionParameter::SetGroupName(this_00,pwVar10);
    pFVar5 = FLinearColor::FLinearColor(&local_28,param_3);
    lVar8 = *(longlong *)((longlong)&pFVar5->field0_0x0 + 8);
    this_00[1]._padding_ = *(longlong *)&pFVar5->field0_0x0;
    this_00[1]._padding_ = lVar8;
    pFVar6 = CreateTextureMap(this,param_1,param_2,param_4,param_6,param_8);
    if (pFVar6 == (FMaterialExpressionTexture *)0x0) {
      param_7->Expression = (FMaterialExpression *)this_00;
      param_7->OutputIndex = 0;
    }
    else {
      pFVar7 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=(&pFVar7->Name,L"Multiply");
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,0);
      *(FMaterialExpressionTexture **)(lVar8 + 0x10) = pFVar6;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
      *(FMaterialExpressionParameter **)(lVar8 + 0x10) = this_00;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      param_7->Expression = (FMaterialExpression *)pFVar7;
      param_7->OutputIndex = 0;
      this_00 = pFVar7;
    }
  }
  return (FMaterialExpression *)this_00;
}

// CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector<float>_> @ 14e625170

FMaterialExpression * __thiscall
GLTF::FPBRMapFactory::CreateMap<GLTF::FMaterialExpressionColor,UE::Math::TVector<float>_>
          (FPBRMapFactory *this,FTexture *param_1,int param_2,TVector<float> *param_3,
          wchar_t *param_4,wchar_t *param_5,ETextureMode param_6,FMaterialExpressionInput *param_7,
          FTextureTransform *param_8)

{
  code *pcVar1;
  bool bVar2;
  FMaterialExpression *pFVar3;
  FMaterialExpressionParameter *this_00;
  FString *pFVar4;
  FLinearColor *pFVar5;
  FMaterialExpressionTexture *pFVar6;
  FMaterialExpressionParameter *pFVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  FString local_58;
  FString local_48;
  FString local_38;
  FLinearColor local_28;
  
  if (param_4 == (wchar_t *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"MapName");
    if (bVar2) {
code_r0x00014e625201:
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMaterialExpression *)(*pcVar1)();
      return pFVar3;
    }
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else if (this->CurrentMaterialElement == (FMaterialElement *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"CurrentMaterialElement");
    if (bVar2) goto code_r0x00014e625201;
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else {
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,ConstantColor);
    pwVar10 = L"";
    if (param_5 == (wchar_t *)0x0) {
      FMaterialExpressionParameter::SetName(this_00,param_4);
    }
    else {
      pFVar4 = ::FString::FString(&local_38,param_4);
      ::FString::ConcatFC(&local_48,pFVar4,L" ");
      ::FString::ConcatFC(&local_58,&local_48,param_5);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      FMaterialExpressionParameter::SetName(this_00,(wchar_t *)FVar9.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((this->GroupName).Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
    }
    FMaterialExpressionParameter::SetGroupName(this_00,pwVar10);
    pFVar5 = FLinearColor::FLinearColor(&local_28,param_3);
    lVar8 = *(longlong *)((longlong)&pFVar5->field0_0x0 + 8);
    this_00[1]._padding_ = *(longlong *)&pFVar5->field0_0x0;
    this_00[1]._padding_ = lVar8;
    pFVar6 = CreateTextureMap(this,param_1,param_2,param_4,param_6,param_8);
    if (pFVar6 == (FMaterialExpressionTexture *)0x0) {
      param_7->Expression = (FMaterialExpression *)this_00;
      param_7->OutputIndex = 0;
    }
    else {
      pFVar7 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=(&pFVar7->Name,L"Multiply");
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,0);
      *(FMaterialExpressionTexture **)(lVar8 + 0x10) = pFVar6;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
      *(FMaterialExpressionParameter **)(lVar8 + 0x10) = this_00;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      param_7->Expression = (FMaterialExpression *)pFVar7;
      param_7->OutputIndex = 0;
      this_00 = pFVar7;
    }
  }
  return (FMaterialExpression *)this_00;
}

// FPBRMapFactory @ 14e62b810

FPBRMapFactory * __thiscall
GLTF::FPBRMapFactory::FPBRMapFactory(FPBRMapFactory *this,ITextureFactory *param_1)

{
  this->TextureFactory = param_1;
  this->CurrentMaterialElement = (FMaterialElement *)0x0;
  (this->GroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupName).Data.ArrayNum = 0;
  (this->GroupName).Data.ArrayMax = 0;
  this->ParentPackage = (UObject *)0x0;
  this->Flags = RF_NoFlags;
  return this;
}

// CreateColorMap @ 14e6323f0

FMaterialExpression * __thiscall
GLTF::FPBRMapFactory::CreateColorMap
          (FPBRMapFactory *this,FTexture *param_1,int param_2,TVector4<float> *param_3,
          wchar_t *param_4,wchar_t *param_5,ETextureMode param_6,FMaterialExpressionInput *param_7,
          FTextureTransform *param_8)

{
  code *pcVar1;
  bool bVar2;
  FMaterialExpression *pFVar3;
  FMaterialExpressionParameter *this_00;
  FString *pFVar4;
  FLinearColor *pFVar5;
  FMaterialExpressionTexture *pFVar6;
  FMaterialExpressionParameter *pFVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FLinearColor FStack_28;
  
  if (param_4 == (wchar_t *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"MapName");
    if (bVar2) {
code_r0x00014e624fb1:
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMaterialExpression *)(*pcVar1)();
      return pFVar3;
    }
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else if (this->CurrentMaterialElement == (FMaterialElement *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"CurrentMaterialElement");
    if (bVar2) goto code_r0x00014e624fb1;
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else {
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,ConstantColor);
    pwVar10 = L"";
    if (param_5 == (wchar_t *)0x0) {
      FMaterialExpressionParameter::SetName(this_00,param_4);
    }
    else {
      pFVar4 = ::FString::FString(&FStack_38,param_4);
      ::FString::ConcatFC(&FStack_48,pFVar4,L" ");
      ::FString::ConcatFC(&FStack_58,&FStack_48,param_5);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (FStack_58.Data.ArrayNum != 0) {
        FVar9.Data = FStack_58.Data.AllocatorInstance.Data;
      }
      FMaterialExpressionParameter::SetName(this_00,(wchar_t *)FVar9.Data);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
    }
    if ((this->GroupName).Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
    }
    FMaterialExpressionParameter::SetGroupName(this_00,pwVar10);
    pFVar5 = FLinearColor::FLinearColor(&FStack_28,param_3);
    lVar8 = *(longlong *)((longlong)&pFVar5->field0_0x0 + 8);
    this_00[1]._padding_ = *(longlong *)&pFVar5->field0_0x0;
    this_00[1]._padding_ = lVar8;
    pFVar6 = CreateTextureMap(this,param_1,param_2,param_4,param_6,param_8);
    if (pFVar6 == (FMaterialExpressionTexture *)0x0) {
      param_7->Expression = (FMaterialExpression *)this_00;
      param_7->OutputIndex = 0;
    }
    else {
      pFVar7 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=(&pFVar7->Name,L"Multiply");
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,0);
      *(FMaterialExpressionTexture **)(lVar8 + 0x10) = pFVar6;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
      *(FMaterialExpressionParameter **)(lVar8 + 0x10) = this_00;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      param_7->Expression = (FMaterialExpression *)pFVar7;
      param_7->OutputIndex = 0;
      this_00 = pFVar7;
    }
  }
  return (FMaterialExpression *)this_00;
}

// CreateColorMap @ 14e632400

FMaterialExpression * __thiscall
GLTF::FPBRMapFactory::CreateColorMap
          (FPBRMapFactory *this,FTexture *param_1,int param_2,TVector<float> *param_3,
          wchar_t *param_4,wchar_t *param_5,ETextureMode param_6,FMaterialExpressionInput *param_7,
          FTextureTransform *param_8)

{
  code *pcVar1;
  bool bVar2;
  FMaterialExpression *pFVar3;
  FMaterialExpressionParameter *this_00;
  FString *pFVar4;
  FLinearColor *pFVar5;
  FMaterialExpressionTexture *pFVar6;
  FMaterialExpressionParameter *pFVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FLinearColor FStack_28;
  
  if (param_4 == (wchar_t *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"MapName");
    if (bVar2) {
code_r0x00014e625201:
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMaterialExpression *)(*pcVar1)();
      return pFVar3;
    }
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else if (this->CurrentMaterialElement == (FMaterialElement *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x143,"CurrentMaterialElement");
    if (bVar2) goto code_r0x00014e625201;
    this_00 = (FMaterialExpressionParameter *)0x0;
  }
  else {
    this_00 = (FMaterialExpressionParameter *)
              FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,ConstantColor);
    pwVar10 = L"";
    if (param_5 == (wchar_t *)0x0) {
      FMaterialExpressionParameter::SetName(this_00,param_4);
    }
    else {
      pFVar4 = ::FString::FString(&FStack_38,param_4);
      ::FString::ConcatFC(&FStack_48,pFVar4,L" ");
      ::FString::ConcatFC(&FStack_58,&FStack_48,param_5);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (FStack_58.Data.ArrayNum != 0) {
        FVar9.Data = FStack_58.Data.AllocatorInstance.Data;
      }
      FMaterialExpressionParameter::SetName(this_00,(wchar_t *)FVar9.Data);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
    }
    if ((this->GroupName).Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
    }
    FMaterialExpressionParameter::SetGroupName(this_00,pwVar10);
    pFVar5 = FLinearColor::FLinearColor(&FStack_28,param_3);
    lVar8 = *(longlong *)((longlong)&pFVar5->field0_0x0 + 8);
    this_00[1]._padding_ = *(longlong *)&pFVar5->field0_0x0;
    this_00[1]._padding_ = lVar8;
    pFVar6 = CreateTextureMap(this,param_1,param_2,param_4,param_6,param_8);
    if (pFVar6 == (FMaterialExpressionTexture *)0x0) {
      param_7->Expression = (FMaterialExpression *)this_00;
      param_7->OutputIndex = 0;
    }
    else {
      pFVar7 = (FMaterialExpressionParameter *)
               FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=(&pFVar7->Name,L"Multiply");
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,0);
      *(FMaterialExpressionTexture **)(lVar8 + 0x10) = pFVar6;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar8 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
      *(FMaterialExpressionParameter **)(lVar8 + 0x10) = this_00;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      param_7->Expression = (FMaterialExpression *)pFVar7;
      param_7->OutputIndex = 0;
      this_00 = pFVar7;
    }
  }
  return (FMaterialExpression *)this_00;
}

// CreateMultiMap @ 14e632bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GLTF::FPBRMapFactory::CreateMultiMap
          (FPBRMapFactory *this,FTexture *param_1,int param_2,wchar_t *param_3,FMapChannel *param_4,
          uint param_5,ETextureMode param_6,FTextureTransform *param_7)

{
  EChannel EVar1;
  undefined8 uVar2;
  code *pcVar3;
  TTypeCompatibleBytes<GLTF::FMaterialExpression_*> TVar4;
  bool bVar5;
  EMaterialExpressionType EVar6;
  uint uVar7;
  uchar auVar8 [8];
  FLinearColor *pFVar9;
  FMaterialExpressionTexture *pFVar10;
  FMaterialExpression *pFVar11;
  FMaterialExpression *pFVar12;
  FMaterialExpressionInput *pFVar13;
  longlong lVar14;
  FMaterialExpression **ppFVar15;
  wchar_t *pwVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_f8 [32];
  ForElementType<GLTF::FMaterialExpression_*> local_a8;
  FTextureTransform *local_88;
  wchar_t *local_80;
  FLinearColor local_78;
  ForElementType<GLTF::FMaterialExpression_*> local_68;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_88 = param_7;
  local_a8.InlineData[2].Pad = (uchar  [8])param_4;
  local_a8.InlineData[1].Pad._0_4_ = param_6;
  local_48 = 0;
  local_44 = 4;
  local_a8.InlineData[3].Pad = (uchar  [8])param_1;
  local_80 = param_3;
  if (param_5 != 0) {
    uVar18 = (ulonglong)param_5;
    do {
      EVar1 = param_4->Channel;
      if (((EVar1 == All) || (EVar1 == RG)) || (EVar1 == RGB)) {
        auVar8 = (uchar  [8])
                 FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,ConstantColor)
        ;
        pFVar9 = FLinearColor::FLinearColor(&local_78,(TVector<float> *)param_4);
        uVar2 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
        ((FMaterialExpression *)((longlong)auVar8 + 0x30))->_padding_ =
             *(longlong *)&pFVar9->field0_0x0;
        *(undefined8 *)&((FMaterialExpression *)((longlong)auVar8 + 0x30))->Type = uVar2;
        if ((this->GroupName).Data.ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
        }
        EVar6 = *(EMaterialExpressionType *)((longlong)auVar8 + 8);
      }
      else {
        auVar8 = (uchar  [8])
                 FMaterialElement::AddMaterialExpression
                           (this->CurrentMaterialElement,ConstantScalar);
        *(float *)&((FMaterialExpression *)((longlong)auVar8 + 0x30))->_padding_ =
             (param_4->field0_0x0).Value;
        if ((this->GroupName).Data.ArrayNum == 0) {
          EVar6 = *(EMaterialExpressionType *)((longlong)auVar8 + 8);
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
          EVar6 = *(EMaterialExpressionType *)((longlong)auVar8 + 8);
        }
      }
      if (((EVar6 != ConstantColor) && (EVar6 != ConstantScalar)) &&
         ((EVar6 != Texture &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_589650665588916137>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                              ,0x57,
                              "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                             ), bVar5)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::operator=((FString *)((longlong)auVar8 + 0x20),pwVar16);
      EVar6 = *(EMaterialExpressionType *)((longlong)auVar8 + 8);
      pwVar16 = param_4->ValueName;
      if (((EVar6 != ConstantColor) && (EVar6 != ConstantScalar)) &&
         ((EVar6 != Texture &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_589650665588916151>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                              ,0x49,
                              "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                             ), bVar5)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::operator=((FString *)((longlong)auVar8 + 0x10),pwVar16);
      local_a8.InlineData[0].Pad = auVar8;
      if (((&local_68 <= &local_a8) && (&local_a8 < local_68.InlineData + local_44)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<GLTF::FMaterialExpression_*>_>
                             (0x808,&local_68,&local_44);
      }
      param_4 = param_4 + 1;
      lVar14 = (longlong)local_48;
      local_48 = local_48 + 1;
      *&local_68.InlineData[lVar14].Pad = local_a8.InlineData[0].Pad;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  TVar4.Pad = local_a8.InlineData[2].Pad;
  uVar17 = 0;
  pFVar10 = CreateTextureMap(this,(FTexture *)local_a8.InlineData[3].Pad,param_2,local_80,
                             local_a8.InlineData[1].Pad._0_4_,local_88);
  if (pFVar10 == (FMaterialExpressionTexture *)0x0) {
    uVar17 = 0;
    if (param_5 != 0) {
      ppFVar15 = (FMaterialExpression **)((longlong)TVar4.Pad + 0x28);
      do {
        if (*ppFVar15 == (FMaterialExpression *)0x0) {
          uVar7 = 0;
          if ((int)uVar17 < local_48) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar13 = (FMaterialExpressionInput *)ppFVar15[-1];
          pFVar13->Expression = *(FMaterialExpression **)local_68.InlineData[(int)uVar17].Pad;
          pFVar13->OutputIndex = 0;
        }
        else {
          uVar7 = 0;
          if ((int)uVar17 < local_48) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = *(FMaterialExpression **)local_68.InlineData[(int)uVar17].Pad;
          pFVar13 = (FMaterialExpressionInput *)
                    (**(code **)((*ppFVar15)->_padding_ + 8))(*ppFVar15,0);
          if (pFVar13->Expression != (FMaterialExpression *)0x0) {
            pFVar13 = GLTF::`anonymous_namespace'::GetFirstInput(pFVar13->Expression);
          }
          pFVar13->Expression = pFVar11;
          pFVar13->OutputIndex = 0;
          pFVar13 = (FMaterialExpressionInput *)ppFVar15[-1];
          pFVar13->Expression = *ppFVar15;
          pFVar13->OutputIndex = 0;
        }
        uVar17 = uVar17 + 1;
        ppFVar15 = ppFVar15 + 6;
      } while (uVar17 < param_5);
    }
  }
  else if (param_5 != 0) {
    ppFVar15 = (FMaterialExpression **)((longlong)TVar4.Pad + 0x28);
    do {
      pFVar11 = FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=((FString *)(pFVar11 + 1),L"Multiply");
      EVar1 = *(EChannel *)(ppFVar15 + -2);
      if (EVar1 == All) {
        lVar14 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,0);
        *(undefined4 *)(lVar14 + 0x18) = 5;
LAB_14e632f55:
        *(FMaterialExpressionTexture **)(lVar14 + 0x10) = pFVar10;
      }
      else {
        if (EVar1 != RG) {
          if (EVar1 == RGB) {
            lVar14 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,0);
            *(undefined4 *)(lVar14 + 0x18) = 0;
          }
          else {
            lVar14 = (**(code **)(pFVar11->_padding_ + 8))();
            if (EVar1 == ~All) goto LAB_14e632f59;
            *(EChannel *)(lVar14 + 0x18) = EVar1;
          }
          goto LAB_14e632f55;
        }
        pFVar12 = FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,FunctionCall)
        ;
        ::FString::operator=
                  ((FString *)(pFVar12 + 1),
                   L"/Engine/Functions/Engine_MaterialFunctions02/Utility/MakeFloat2.MakeFloat2");
        lVar14 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
        *(FMaterialExpressionTexture **)(lVar14 + 0x10) = pFVar10;
        *(undefined4 *)(lVar14 + 0x18) = 1;
        lVar14 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12,1);
        *(FMaterialExpressionTexture **)(lVar14 + 0x10) = pFVar10;
        *(undefined4 *)(lVar14 + 0x18) = 2;
        lVar14 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,0);
        *(FMaterialExpression **)(lVar14 + 0x10) = pFVar12;
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
LAB_14e632f59:
      uVar7 = 0;
      if ((int)uVar17 < local_48) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(undefined8 *)local_68.InlineData[(int)uVar17].Pad;
      lVar14 = (**(code **)(pFVar11->_padding_ + 8))(pFVar11,1);
      *(undefined8 *)(lVar14 + 0x10) = uVar2;
      *(undefined4 *)(lVar14 + 0x18) = 0;
      pFVar12 = *ppFVar15;
      if (pFVar12 == (FMaterialExpression *)0x0) {
        pFVar13 = (FMaterialExpressionInput *)ppFVar15[-1];
        pFVar13->Expression = pFVar11;
        pFVar13->OutputIndex = 0;
      }
      else {
        pFVar13 = (FMaterialExpressionInput *)(**(code **)(pFVar12->_padding_ + 8))(pFVar12,0);
        if (pFVar13->Expression != (FMaterialExpression *)0x0) {
          pFVar13 = GLTF::`anonymous_namespace'::GetFirstInput(pFVar13->Expression);
        }
        pFVar13->Expression = pFVar11;
        pFVar13->OutputIndex = 0;
        pFVar13 = (FMaterialExpressionInput *)ppFVar15[-1];
        pFVar13->Expression = *ppFVar15;
        pFVar13->OutputIndex = 0;
      }
      uVar17 = uVar17 + 1;
      ppFVar15 = ppFVar15 + 6;
    } while (uVar17 < param_5);
  }
  return;
}

// CreateNormalMap @ 14e633150

void __thiscall
GLTF::FPBRMapFactory::CreateNormalMap
          (FPBRMapFactory *this,FTexture *param_1,int param_2,float param_3,
          FTextureTransform *param_4)

{
  int iVar1;
  FMaterialElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMaterialExpressionTexture *pFVar5;
  FMaterialExpressionParameter *this_00;
  FMaterialExpression *pFVar6;
  longlong lVar7;
  FMaterialExpression *pFVar8;
  FMaterialExpression *pFVar9;
  wchar_t *pwVar10;
  undefined1 local_res8 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  FString *local_f8;
  undefined1 *local_f0;
  FString local_e8;
  FString *local_d8;
  undefined1 *local_d0;
  FString local_c8;
  FString *local_b8;
  undefined1 *local_b0;
  FString local_a8;
  FString *local_98;
  undefined1 *local_90;
  FString local_88;
  FString *local_78;
  undefined1 *local_70;
  FString local_68;
  FString *local_58;
  undefined1 *local_50;
  FString local_48 [2];
  
  if (this->CurrentMaterialElement == (FMaterialElement *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8339567255960420482>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMapFactory.cpp"
                       ,0x82,"CurrentMaterialElement");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar5 = CreateTextureMap(this,param_1,param_2,L"Normal Map",Normal,param_4);
    if (pFVar5 != (FMaterialExpressionTexture *)0x0) {
      this_00 = (FMaterialExpressionParameter *)
                FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,ConstantScalar)
      ;
      iVar1 = (int)this_00->_padding_;
      if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_589650665588916151>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                             ,0x49,
                             "Type == EMaterialExpressionType::ConstantColor || Type == EMaterialExpressionType::ConstantScalar || Type == EMaterialExpressionType::Texture"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::operator=(&this_00->Name,L"Normal Scale");
      if ((this->GroupName).Data.ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
      }
      FMaterialExpressionParameter::SetGroupName(this_00,pwVar10);
      *(float *)&this_00[1]._padding_ = param_3;
      pFVar6 = FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=((FString *)(pFVar6 + 1),L"ComponentMask");
      local_res8[0] = 1;
      ::FString::FString(&local_e8,L"R");
      local_f8 = &local_e8;
      local_f0 = local_res8;
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,bool_const_&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)(pFVar6 + 3),(TPairInitializer<FString_&&,bool_const_&> *)local_110,
                 (bool *)&local_f8);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_138[0] = 1;
      ::FString::FString(&local_c8,L"G");
      local_d8 = &local_c8;
      local_d0 = local_138;
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,bool_const_&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)(pFVar6 + 3),(TPairInitializer<FString_&&,bool_const_&> *)(local_110 + 4),
                 (bool *)&local_d8);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_130[0] = 0;
      ::FString::FString(&local_a8,L"B");
      local_b8 = &local_a8;
      local_b0 = local_130;
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,bool_const_&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)(pFVar6 + 3),(TPairInitializer<FString_&&,bool_const_&> *)local_108,
                 (bool *)&local_b8);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      lVar7 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,0);
      *(FMaterialExpressionTexture **)(lVar7 + 0x10) = pFVar5;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      pFVar8 = FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=((FString *)(pFVar8 + 1),L"ComponentMask");
      local_128[0] = 0;
      ::FString::FString(&local_88,L"R");
      local_98 = &local_88;
      local_90 = local_128;
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,bool_const_&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)(pFVar8 + 3),(TPairInitializer<FString_&&,bool_const_&> *)(local_108 + 4),
                 (bool *)&local_98);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_120[0] = 0;
      ::FString::FString(&local_68,L"G");
      local_70 = local_120;
      local_78 = &local_68;
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,bool_const_&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)(pFVar8 + 3),(TPairInitializer<FString_&&,bool_const_&> *)local_100,
                 (bool *)&local_78);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_118[0] = 1;
      ::FString::FString(local_48,L"B");
      local_58 = local_48;
      local_50 = local_118;
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,bool_const_&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)(pFVar8 + 3),(TPairInitializer<FString_&&,bool_const_&> *)(local_100 + 4),
                 (bool *)&local_58);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      lVar7 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,0);
      *(FMaterialExpressionTexture **)(lVar7 + 0x10) = pFVar5;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      pFVar9 = FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=((FString *)(pFVar9 + 1),L"Multiply");
      lVar7 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,0);
      *(FMaterialExpression **)(lVar7 + 0x10) = pFVar6;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      lVar7 = (**(code **)(pFVar9->_padding_ + 8))(pFVar9,1);
      *(FMaterialExpressionParameter **)(lVar7 + 0x10) = this_00;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      pFVar6 = FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=((FString *)(pFVar6 + 1),L"AppendVector");
      lVar7 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,0);
      *(FMaterialExpression **)(lVar7 + 0x10) = pFVar9;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      lVar7 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
      *(FMaterialExpression **)(lVar7 + 0x10) = pFVar8;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      pFVar8 = FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Generic);
      ::FString::operator=((FString *)(pFVar8 + 1),L"Normalize");
      lVar7 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,0);
      *(FMaterialExpression **)(lVar7 + 0x10) = pFVar6;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      pFVar2 = this->CurrentMaterialElement;
      (pFVar2->Normal).Expression = pFVar8;
      (pFVar2->Normal).OutputIndex = 0;
    }
  }
  return;
}

// CreateTextureMap @ 14e6335f0

FMaterialExpressionTexture * __thiscall
GLTF::FPBRMapFactory::CreateTextureMap
          (FPBRMapFactory *this,FTexture *param_1,int param_2,wchar_t *param_3,ETextureMode param_4,
          FTextureTransform *param_5)

{
  ITextureElement *pIVar1;
  FMaterialExpressionTexture *this_00;
  FString *pFVar2;
  FMaterialExpressionTextureCoordinate *pFVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  pIVar1 = (ITextureElement *)
           (**(code **)((longlong)*this->TextureFactory + 8))
                     (this->TextureFactory,param_1,this->ParentPackage,this->Flags,param_4);
  this_00 = (FMaterialExpressionTexture *)0x0;
  if (pIVar1 != (ITextureElement *)0x0) {
    this_00 = (FMaterialExpressionTexture *)
              FMaterialElement::AddMaterialExpression(this->CurrentMaterialElement,Texture);
    this_00->Texture = pIVar1;
    pFVar2 = ::FString::FString(&local_18,param_3);
    ::FString::ConcatFC(&local_28,pFVar2,L" Map");
    pwVar5 = L"";
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    FMaterialExpressionParameter::SetName
              ((FMaterialExpressionParameter *)this_00,(wchar_t *)FVar4.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((this->GroupName).Data.ArrayNum != 0) {
      pwVar5 = (wchar_t *)(this->GroupName).Data.AllocatorInstance.Data;
    }
    FMaterialExpressionParameter::SetGroupName((FMaterialExpressionParameter *)this_00,pwVar5);
    if (param_2 != 0) {
      pFVar3 = FMaterialElement::AddMaterialExpression<GLTF::FMaterialExpressionTextureCoordinate>
                         (this->CurrentMaterialElement);
      pFVar3->CoordinateIndex = param_2;
      (this_00->InputCoordinate).Expression = (FMaterialExpression *)pFVar3;
      (this_00->InputCoordinate).OutputIndex = 0;
    }
    if (param_5 != (FTextureTransform *)0x0) {
      GLTF::`anonymous_namespace'::CreateTextureTransform
                (param_5,this_00,this->CurrentMaterialElement);
    }
  }
  return this_00;
}

