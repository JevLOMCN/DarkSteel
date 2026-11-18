// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1472ed010

UScriptStruct * __cdecl FMaterialParameterInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialParameterInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialParameterInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterInfo,(UObject *)pUVar1,
                         L"MaterialParameterInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialParameterInfo.OuterSingleton;
}

// Append @ 147f6e310

void __thiscall
FMaterialParameterInfo::Append(FMaterialParameterInfo *this,FShaderKeyGenerator *param_1)

{
  FShaderKeyGenerator::Append(param_1,this->Name);
  FShaderKeyGenerator::Append(param_1,(uint)(this->Association).Value);
  FShaderKeyGenerator::Append(param_1,this->Index);
  return;
}

// AppendString @ 147f6f030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMaterialParameterInfo::AppendString(FMaterialParameterInfo *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  uint local_88 [2];
  int local_80 [2];
  undefined8 local_78;
  uint *local_70;
  undefined8 local_68;
  int *local_60;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  FString *local_28;
  EOutputType local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58[0] = (code *)0x0;
  local_30 = (longlong *)0x0;
  local_20 = Text;
  local_28 = param_1;
  FShaderKeyGenerator::Append((FShaderKeyGenerator *)local_58,this->Name);
  local_88[0] = (uint)(this->Association).Value;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_70 = local_88;
    local_78 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar1 = local_58[0];
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_70,&local_78);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xf0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_80[0] = this->Index;
  if (local_20 == Text) {
    ::FString::AppendfImpl(local_28,L"%d");
  }
  else if (local_20 == Binary) {
    local_60 = local_80;
    local_68 = 4;
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar1 = local_58[0];
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_60,&local_68);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xf0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_58[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// RemapLayerIndex @ 147f84c80

bool __thiscall
FMaterialParameterInfo::RemapLayerIndex
          (FMaterialParameterInfo *this,TArrayView<int_const_,int> *param_1,
          FMaterialParameterInfo *param_2)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  TEnumAsByte<EMaterialParameterAssociation> TVar6;
  undefined3 uVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  
  piVar5 = param_1->DataPtr;
  piVar4 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  uVar1 = (this->Association).Value;
  if (uVar1 == '\0') {
    uVar12 = this->Index;
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar2)) {
      uVar11 = 0;
      if ((int)uVar12 < iVar2) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
      }
      iVar2 = piVar5[(int)uVar12];
      if (iVar2 != -1) {
        TVar6.Value = (this->Association).Value;
        uVar7 = *(undefined3 *)&this->field_0x9;
        iVar8 = this->Index;
        param_2->Name = this->Name;
        param_2->Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar6.Value;
        *(undefined3 *)&param_2->field_0x9 = uVar7;
        param_2->Index = iVar8;
        param_2->Index = iVar2;
        return true;
      }
    }
  }
  else if (uVar1 == '\x01') {
    uVar12 = this->Index + 1;
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar2)) {
      uVar11 = 0;
      if ((int)uVar12 < iVar2) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
      }
      iVar2 = piVar4[(int)uVar12];
      if (iVar2 != -1) {
        if (iVar2 < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                             ,0x164a,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
        }
        TVar6.Value = (this->Association).Value;
        uVar7 = *(undefined3 *)&this->field_0x9;
        iVar8 = this->Index;
        param_2->Name = this->Name;
        param_2->Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar6.Value;
        *(undefined3 *)&param_2->field_0x9 = uVar7;
        param_2->Index = iVar8;
        param_2->Index = iVar2 + -1;
        return true;
      }
    }
  }
  else {
    if (uVar1 == '\x02') {
      TVar6.Value = (this->Association).Value;
      uVar7 = *(undefined3 *)&this->field_0x9;
      iVar2 = this->Index;
      param_2->Name = this->Name;
      param_2->Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar6.Value;
      *(undefined3 *)&param_2->field_0x9 = uVar7;
      param_2->Index = iVar2;
      return true;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x1652,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
  }
  return false;
}

