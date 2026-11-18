// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// operator() @ 147fade40

void __thiscall
`FUniformParameterOverrides::SetTextureOverride'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FTextureParameterKey *pFVar1;
  UTexture *pUVar2;
  uint uVar3;
  UTexture **ppUVar4;
  TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
  *this_00;
  
  pFVar1 = (FTextureParameterKey *)((longlong)this + 0xc);
  pUVar2 = *(UTexture **)((longlong)this + 0x28);
  this_00 = (TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
             *)(((ulonglong)*(uint *)((longlong)this + 8) + 8) * 0x50 + *(longlong *)this);
  if (pUVar2 != (UTexture *)0x0) {
    uVar3 = ::GetTypeHash(pFVar1);
    ppUVar4 = TMapBase<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>_>
              ::FindOrAddImpl<FUniformParameterOverrides::FTextureParameterKey_const_&>
                        ((TMapBase<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>_>
                          *)this_00,uVar3,pFVar1);
    *ppUVar4 = pUVar2;
    return;
  }
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    uVar3 = ::GetTypeHash(pFVar1);
    TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FUniformParameterOverrides::FTextureParameterKey>(this_00,uVar3,pFVar1);
  }
  return;
}

// ClearNumericOverride @ 147fb9cb0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
FUniformParameterOverrides::ClearNumericOverride
          (FUniformParameterOverrides *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FNumericParameterKey local_28;
  
  local_28.ParameterInfo.Association.Value = (param_2->Association).Value;
  local_28.ParameterInfo._17_3_ = *(undefined3 *)&param_2->field_0x11;
  local_28.ParameterInfo.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
  local_28.ParameterInfo.Name.DisplayIndex.Value = (param_2->Name).DisplayIndex.Value;
  local_28.ParameterInfo._8_8_ = *(undefined8 *)&(param_2->Name).Number;
  if (*(int *)&(this->NumericOverrides).field_0x8 != *(int *)&(this->NumericOverrides).field_0x34) {
    local_28.ParameterType = param_1;
    uVar1 = ::GetTypeHash(&local_28.ParameterInfo);
    iVar2 = uVar1 - param_1;
    uVar4 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar1;
    uVar1 = (param_1 - uVar4) - iVar2 ^ uVar4 >> 0xd;
    uVar3 = (iVar2 - uVar1) - uVar4 ^ uVar1 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 << 0x10;
    uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 << 10;
    TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
    ::RemoveImpl<FUniformParameterOverrides::FNumericParameterKey>
              ((TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
                *)this,(uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xf,&local_28);
  }
  return;
}

// GetNumericOverride @ 147fd4340

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FUniformParameterOverrides::GetNumericOverride
          (FUniformParameterOverrides *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FValue *param_3)

{
  uint uVar1;
  longlong lVar2;
  FValue *pFVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FNumericParameterKey local_28;
  
  local_28.ParameterInfo.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
  local_28.ParameterInfo.Name.DisplayIndex.Value = (param_2->Name).DisplayIndex.Value;
  local_28.ParameterInfo._8_8_ = *(undefined8 *)&(param_2->Name).Number;
  local_28.ParameterInfo.Association.Value = (param_2->Association).Value;
  local_28.ParameterInfo._17_3_ = *(undefined3 *)&param_2->field_0x11;
  local_28.ParameterType = param_1;
  uVar1 = ::GetTypeHash(&local_28.ParameterInfo);
  iVar4 = uVar1 - param_1;
  uVar6 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar1;
  uVar1 = (param_1 - uVar6) - iVar4 ^ uVar6 >> 0xd;
  uVar5 = (iVar4 - uVar1) - uVar6 ^ uVar1 >> 0xc;
  uVar6 = (uVar6 - uVar5) - uVar1 ^ uVar5 << 0x10;
  uVar1 = (uVar1 - uVar5) - uVar6 ^ uVar6 >> 5;
  uVar5 = (uVar5 - uVar1) - uVar6 ^ uVar1 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar1 ^ uVar5 << 10;
  iVar4 = TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniformParameterOverrides::FNumericParameterKey>
                    ((TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
                      *)this,(uVar1 - uVar6) - uVar5 ^ uVar6 >> 0xf,&local_28);
  if (iVar4 != -1) {
    lVar2 = (longlong)iVar4 * 200 + *(longlong *)&this->NumericOverrides;
    pFVar3 = (FValue *)(lVar2 + 0x18);
    if (lVar2 == 0) {
      pFVar3 = (FValue *)0x0;
    }
    if (pFVar3 != (FValue *)0x0) {
      UE::Shader::FValue::operator=(param_3,pFVar3);
      return true;
    }
  }
  return false;
}

// GetTextureOverride_GameThread @ 147fd8f70

UTexture * __thiscall
FUniformParameterOverrides::GetTextureOverride_GameThread
          (FUniformParameterOverrides *this,EMaterialTextureParameterType param_1,
          FMaterialTextureParameterInfo *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UTexture *pUVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  TMap<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>_>
  *pTVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FMemoryImageMaterialParameterInfo local_28;
  uint local_14;
  
  bVar4 = IsInGameThread();
  if (((!bVar4) && (bVar4 = IsInParallelGameThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0xe8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UTexture *)(*pcVar3)();
    return pUVar6;
  }
  local_28.Association.Value = (param_2->ParameterInfo).Association.Value;
  local_28._17_3_ = *(undefined3 *)&(param_2->ParameterInfo).field_0x11;
  local_28.Name.ComparisonIndex.Value = (param_2->ParameterInfo).Name.ComparisonIndex.Value;
  local_28.Name.DisplayIndex.Value = (param_2->ParameterInfo).Name.DisplayIndex.Value;
  local_28._8_8_ = *(undefined8 *)&(param_2->ParameterInfo).Name.Number;
  uVar2 = param_2->TextureIndex;
  pTVar9 = this->GameThreadTextureOverides + param_1;
  local_14 = uVar2;
  uVar5 = ::GetTypeHash(&local_28);
  uVar10 = uVar5 - uVar2 ^ uVar2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar10) - uVar2 ^ uVar10 << 8;
  uVar12 = (uVar2 - uVar5) - uVar10 ^ uVar5 >> 0xd;
  uVar10 = (uVar10 - uVar12) - uVar5 ^ uVar12 >> 0xc;
  uVar5 = (uVar5 - uVar10) - uVar12 ^ uVar10 << 0x10;
  uVar12 = (uVar12 - uVar5) - uVar10 ^ uVar5 >> 5;
  uVar10 = (uVar10 - uVar12) - uVar5 ^ uVar12 >> 3;
  uVar5 = (uVar5 - uVar10) - uVar12 ^ uVar10 << 10;
  if (*(int *)&pTVar9->field_0x8 != *(int *)&pTVar9->field_0x34) {
    puVar8 = *(undefined1 **)&pTVar9->field_0x40;
    if (*(undefined1 **)&pTVar9->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &pTVar9->field_0x38;
    }
    iVar11 = *(int *)(puVar8 + (ulonglong)
                               (*(int *)&pTVar9->field_0x48 - 1U &
                               ((uVar12 - uVar5) - uVar10 ^ uVar5 >> 0xf)) * 4);
    if (iVar11 != -1) {
      do {
        lVar1 = *(longlong *)pTVar9 + (longlong)iVar11 * 0x28;
        if (((*(uint *)(*(longlong *)pTVar9 + (longlong)iVar11 * 0x28) ==
              local_28.Name.ComparisonIndex.Value) && (*(uint *)(lVar1 + 8) == local_28.Name.Number)
            ) && ((*(uchar *)(lVar1 + 0x10) == local_28.Association.Value &&
                  ((*(int *)(lVar1 + 0xc) == local_28.Index && (*(uint *)(lVar1 + 0x14) == uVar2))))
                 )) {
          if (iVar11 == -1) {
            return (UTexture *)0x0;
          }
          puVar7 = (undefined8 *)(lVar1 + 0x18);
          if (lVar1 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 == (undefined8 *)0x0) {
            return (UTexture *)0x0;
          }
          return (UTexture *)*puVar7;
        }
        iVar11 = *(int *)(lVar1 + 0x20);
      } while (iVar11 != -1);
    }
  }
  return (UTexture *)0x0;
}

// GetTextureOverride_RenderThread @ 147fd9140

UTexture * __thiscall
FUniformParameterOverrides::GetTextureOverride_RenderThread
          (FUniformParameterOverrides *this,EMaterialTextureParameterType param_1,
          FMaterialTextureParameterInfo *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UTexture *pUVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  TMap<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>_>
  *pTVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FMemoryImageMaterialParameterInfo local_28;
  uint local_14;
  
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0xf1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UTexture *)(*pcVar3)();
    return pUVar6;
  }
  local_28.Association.Value = (param_2->ParameterInfo).Association.Value;
  local_28._17_3_ = *(undefined3 *)&(param_2->ParameterInfo).field_0x11;
  local_28.Name.ComparisonIndex.Value = (param_2->ParameterInfo).Name.ComparisonIndex.Value;
  local_28.Name.DisplayIndex.Value = (param_2->ParameterInfo).Name.DisplayIndex.Value;
  local_28._8_8_ = *(undefined8 *)&(param_2->ParameterInfo).Name.Number;
  uVar2 = param_2->TextureIndex;
  pTVar9 = this->RenderThreadTextureOverrides + param_1;
  local_14 = uVar2;
  uVar5 = ::GetTypeHash(&local_28);
  uVar10 = uVar5 - uVar2 ^ uVar2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar10) - uVar2 ^ uVar10 << 8;
  uVar12 = (uVar2 - uVar5) - uVar10 ^ uVar5 >> 0xd;
  uVar10 = (uVar10 - uVar12) - uVar5 ^ uVar12 >> 0xc;
  uVar5 = (uVar5 - uVar10) - uVar12 ^ uVar10 << 0x10;
  uVar12 = (uVar12 - uVar5) - uVar10 ^ uVar5 >> 5;
  uVar10 = (uVar10 - uVar12) - uVar5 ^ uVar12 >> 3;
  uVar5 = (uVar5 - uVar10) - uVar12 ^ uVar10 << 10;
  if (*(int *)&pTVar9->field_0x8 != *(int *)&pTVar9->field_0x34) {
    puVar8 = *(undefined1 **)&pTVar9->field_0x40;
    if (*(undefined1 **)&pTVar9->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &pTVar9->field_0x38;
    }
    iVar11 = *(int *)(puVar8 + (ulonglong)
                               (*(int *)&pTVar9->field_0x48 - 1U &
                               ((uVar12 - uVar5) - uVar10 ^ uVar5 >> 0xf)) * 4);
    if (iVar11 != -1) {
      do {
        lVar1 = *(longlong *)pTVar9 + (longlong)iVar11 * 0x28;
        if ((((*(uint *)(*(longlong *)pTVar9 + (longlong)iVar11 * 0x28) ==
               local_28.Name.ComparisonIndex.Value) &&
             (*(uint *)(lVar1 + 8) == local_28.Name.Number)) &&
            (*(uchar *)(lVar1 + 0x10) == local_28.Association.Value)) &&
           ((*(int *)(lVar1 + 0xc) == local_28.Index && (*(uint *)(lVar1 + 0x14) == uVar2)))) {
          if (iVar11 == -1) {
            return (UTexture *)0x0;
          }
          puVar7 = (undefined8 *)(lVar1 + 0x18);
          if (lVar1 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 == (undefined8 *)0x0) {
            return (UTexture *)0x0;
          }
          return (UTexture *)*puVar7;
        }
        iVar11 = *(int *)(lVar1 + 0x20);
      } while (iVar11 != -1);
    }
  }
  return (UTexture *)0x0;
}

// SetNumericOverride @ 147ff6670

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
FUniformParameterOverrides::SetNumericOverride
          (FUniformParameterOverrides *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FValue *param_3)

{
  EValueType EVar1;
  code *pcVar2;
  EMaterialParameterType EVar3;
  bool bVar4;
  uint uVar5;
  FType *pFVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FNumericParameterKey *local_res8;
  int local_res10 [2];
  FNumericParameterKey local_38;
  FType local_20;
  
  local_38.ParameterInfo.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
  local_38.ParameterInfo.Name.DisplayIndex.Value = (param_2->Name).DisplayIndex.Value;
  local_38.ParameterInfo._8_8_ = *(undefined8 *)&(param_2->Name).Number;
  local_38.ParameterInfo.Association.Value = (param_2->Association).Value;
  local_38.ParameterInfo._17_3_ = *(undefined3 *)&param_2->field_0x11;
  local_38.ParameterType = param_1;
  pFVar6 = GetShaderValueType(&local_20,param_1);
  EVar1 = (param_3->Type).ValueType;
  if ((EVar1 == Struct) || (pFVar6->ValueType != EVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType == Value.GetType()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                       ,0xb2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar3 = local_38.ParameterType;
  uVar5 = ::GetTypeHash(&local_38.ParameterInfo);
  iVar8 = uVar5 - EVar3;
  uVar10 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar5;
  uVar9 = (EVar3 - uVar10) - iVar8 ^ uVar10 >> 0xd;
  uVar5 = (iVar8 - uVar9) - uVar10 ^ uVar9 >> 0xc;
  uVar10 = (uVar10 - uVar5) - uVar9 ^ uVar5 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar10 ^ uVar10 >> 5;
  uVar5 = (uVar5 - uVar9) - uVar10 ^ uVar9 >> 3;
  uVar10 = (uVar10 - uVar5) - uVar9 ^ uVar5 << 10;
  uVar5 = (uVar9 - uVar10) - uVar5 ^ uVar10 >> 0xf;
  iVar8 = TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniformParameterOverrides::FNumericParameterKey>
                    ((TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
                      *)this,uVar5,&local_38);
  if ((iVar8 == -1) ||
     (lVar7 = (longlong)iVar8 * 200 + *(longlong *)&this->NumericOverrides, lVar7 == 0)) {
    local_res8 = &local_38;
    TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FUniformParameterOverrides::FNumericParameterKey_const_&>_>
              ((TSet<TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue,0>,FDefaultSetAllocator>
                *)this,(uint)local_res10,
               (TKeyInitializer<FUniformParameterOverrides::FNumericParameterKey_const_&> *)
               (ulonglong)uVar5,(bool *)&local_res8);
    lVar7 = (longlong)local_res10[0] * 200 + *(longlong *)&this->NumericOverrides;
  }
  UE::Shader::FValue::operator=((FValue *)(lVar7 + 0x18),param_3);
  return;
}

// SetTextureOverride @ 147ff6ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniformParameterOverrides::SetTextureOverride
          (FUniformParameterOverrides *this,EMaterialTextureParameterType param_1,
          FMaterialTextureParameterInfo *param_2,UTexture *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
  *this_02;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FTextureParameterKey local_118;
  int local_100 [2];
  FTextureParameterKey *local_f8;
  FUniformParameterOverrides *local_f0;
  EMaterialTextureParameterType EStack_e8;
  FNameEntryId FStack_e4;
  FNameEntryId FStack_e0;
  uint uStack_dc;
  int iStack_d8;
  TEnumAsByte<EMaterialParameterAssociation> TStack_d4;
  undefined3 uStack_d3;
  uint uStack_d0;
  undefined4 uStack_cc;
  UTexture *pUStack_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialUniformExpressions.cpp"
                         ,0xca,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_118.ParameterInfo.Association.Value = (param_2->ParameterInfo).Association.Value;
  local_118.ParameterInfo._17_3_ = *(undefined3 *)&(param_2->ParameterInfo).field_0x11;
  local_118.ParameterInfo.Name.ComparisonIndex.Value =
       (param_2->ParameterInfo).Name.ComparisonIndex.Value;
  local_118.ParameterInfo.Name.DisplayIndex.Value = (param_2->ParameterInfo).Name.DisplayIndex.Value
  ;
  local_118.ParameterInfo._8_8_ = *(undefined8 *)&(param_2->ParameterInfo).Name.Number;
  uVar7 = param_2->TextureIndex;
  this_02 = (TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
             *)(this->GameThreadTextureOverides + param_1);
  local_118.TextureIndex = uVar7;
  if (param_3 == (UTexture *)0x0) {
    if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
      uVar3 = ::GetTypeHash(&local_118.ParameterInfo);
      uVar3 = uVar3 - uVar7 ^ uVar7 >> 0xd;
      uVar11 = (-0x61c88647 - uVar7) - uVar3 ^ uVar3 << 8;
      uVar10 = (uVar7 - uVar11) - uVar3 ^ uVar11 >> 0xd;
      uVar7 = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 0xc;
      uVar11 = (uVar11 - uVar7) - uVar10 ^ uVar7 << 0x10;
      uVar3 = (uVar10 - uVar11) - uVar7 ^ uVar11 >> 5;
      uVar7 = (uVar7 - uVar3) - uVar11 ^ uVar3 >> 3;
      uVar10 = (uVar11 - uVar7) - uVar3 ^ uVar7 << 10;
      TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FUniformParameterOverrides::FTextureParameterKey>
                (this_02,(uVar3 - uVar10) - uVar7 ^ uVar10 >> 0xf,&local_118);
    }
  }
  else {
    uVar3 = ::GetTypeHash(&local_118.ParameterInfo);
    uVar3 = uVar3 - uVar7 ^ uVar7 >> 0xd;
    uVar11 = (-0x61c88647 - uVar3) - uVar7 ^ uVar3 << 8;
    uVar10 = (uVar7 - uVar11) - uVar3 ^ uVar11 >> 0xd;
    uVar7 = (uVar3 - uVar10) - uVar11 ^ uVar10 >> 0xc;
    uVar11 = (uVar11 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar3 = (uVar10 - uVar11) - uVar7 ^ uVar11 >> 5;
    uVar7 = (uVar7 - uVar3) - uVar11 ^ uVar3 >> 3;
    uVar10 = (uVar11 - uVar7) - uVar3 ^ uVar7 << 10;
    uVar7 = (uVar3 - uVar10) - uVar7 ^ uVar10 >> 0xf;
    if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
      FVar8 = (this_02->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this_02->Hash;
      }
      iVar12 = *(int *)((longlong)FVar8 + (ulonglong)(this_02->HashSize - 1U & uVar7) * 4);
      if (iVar12 != -1) {
        do {
          lVar4 = *(longlong *)&this_02->Elements + (longlong)iVar12 * 0x28;
          if ((((*(uint *)(*(longlong *)&this_02->Elements + (longlong)iVar12 * 0x28) ==
                 local_118.ParameterInfo.Name.ComparisonIndex.Value) &&
               (*(uint *)(lVar4 + 8) == local_118.ParameterInfo.Name.Number)) &&
              (*(uchar *)(lVar4 + 0x10) == local_118.ParameterInfo.Association.Value)) &&
             ((*(int *)(lVar4 + 0xc) == local_118.ParameterInfo.Index &&
              (*(uint *)(lVar4 + 0x14) == local_118.TextureIndex)))) {
            if ((iVar12 != -1) && (lVar4 != 0)) goto LAB_147ff70e7;
            break;
          }
          iVar12 = *(int *)(lVar4 + 0x20);
        } while (iVar12 != -1);
      }
    }
    local_f8 = &local_118;
    local_128 = 0;
    TSet<TTuple<FUniformParameterOverrides::FTextureParameterKey,UTexture_*>,TDefaultMapHashableKeyFuncs<FUniformParameterOverrides::FTextureParameterKey,UTexture_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FUniformParameterOverrides::FTextureParameterKey_const_&>_>
              (this_02,(uint)local_100,
               (TKeyInitializer<FUniformParameterOverrides::FTextureParameterKey_const_&> *)
               (ulonglong)uVar7,(bool *)&local_f8);
    lVar4 = *(longlong *)&this_02->Elements + (longlong)local_100[0] * 0x28;
LAB_147ff70e7:
    *(UTexture **)(lVar4 + 0x18) = param_3;
  }
  FStack_e4.Value = local_118.ParameterInfo.Name.ComparisonIndex.Value;
  FStack_e0.Value = local_118.ParameterInfo.Name.DisplayIndex.Value;
  uStack_dc = local_118.ParameterInfo.Name.Number;
  iStack_d8 = local_118.ParameterInfo.Index;
  TStack_d4.Value = local_118.ParameterInfo.Association.Value;
  uStack_d3 = local_118.ParameterInfo._17_3_;
  uStack_d0 = local_118.TextureIndex;
  local_b8[0] = (code *)0x0;
  local_f0 = this;
  EStack_e8 = param_1;
  pUStack_c8 = param_3;
  local_90 = FMemory::Malloc(0x38,8);
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FUniformParameterOverrides::SetTextureOverride'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_90[1] = (code *)local_f0;
  local_90[2] = (code *)CONCAT44(FStack_e4.Value,EStack_e8);
  local_90[3] = (code *)CONCAT44(uStack_dc,FStack_e0.Value);
  local_90[4] = (code *)CONCAT44(_TStack_d4,iStack_d8);
  local_90[5] = (code *)CONCAT44(uStack_cc,uStack_d0);
  local_90[6] = (code *)pUStack_c8;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FUniformParameterOverrides::SetTextureOverride'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FUniformParameterOverrides::SetTextureOverride_::__l2::TSTR_SetTextureOverrideCommand216>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FUniformParameterOverrides::SetTextureOverride'::__l2::TSTR_SetTextureOverrideCommand216>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar9 = (ulonglong)local_58;
    if ((2 < uVar9) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar6 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar6 = local_60;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar6 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar6 = local_90;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  return;
}

