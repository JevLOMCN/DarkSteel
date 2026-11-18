// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 37

// FMaterialAttributeDefinitionMap @ 147eef870

FMaterialAttributeDefinitionMap * __thiscall
FMaterialAttributeDefinitionMap::FMaterialAttributeDefinitionMap
          (FMaterialAttributeDefinitionMap *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  uVar9 = 0;
  puVar1 = &(this->AttributeMap).field_0xc;
  *(undefined8 *)&this->AttributeMap = 0;
  *(undefined4 *)&(this->AttributeMap).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeMap).field_0x20 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&(this->AttributeMap).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AttributeMap).field_0x34 = 0;
  *(undefined8 *)&(this->AttributeMap).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeMap).field_0x48 = 0;
  (this->CustomAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomAttributes).ArrayNum = 0;
  (this->CustomAttributes).ArrayMax = 0;
  (this->OrderedVisibleAttributeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrderedVisibleAttributeList).ArrayNum = 0;
  (this->OrderedVisibleAttributeList).ArrayMax = 0;
  ::FString::FString(&this->AttributeDDCString,L"");
  this->bIsInitialized = false;
  for (lVar2 = 0x3f; 0x31UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  uVar13 = 1 << ((byte)lVar2 & 0x1f);
  iVar8 = *(int *)&(this->AttributeMap).field_0x48;
  if ((iVar8 < (int)uVar13) || ((int)uVar13 < iVar8)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this,0,*(int *)&(this->AttributeMap).field_0x8);
  *(undefined4 *)&(this->AttributeMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0x23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0x23,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  puVar1 = &(this->AttributeMap).field_0x10;
  *(undefined4 *)&(this->AttributeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AttributeMap).field_0x34 = 0;
  iVar8 = *(int *)&(this->AttributeMap).field_0x2c;
  *(undefined4 *)&(this->AttributeMap).field_0x28 = 0;
  if ((iVar8 < 0x40) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->AttributeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar1,0);
  }
  if (!bVar3) goto LAB_147eefb3c;
  *(uint *)&(this->AttributeMap).field_0x48 = uVar13;
  if (*(longlong *)&(this->AttributeMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->AttributeMap).field_0x40,0,0,4);
  }
  if (uVar13 != 0) {
    uVar10 = uVar13;
    if (uVar13 < 2) {
      if (*(longlong *)&(this->AttributeMap).field_0x40 != 0) {
        uVar10 = 0;
        goto LAB_147eef9c0;
      }
    }
    else {
LAB_147eef9c0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->AttributeMap).field_0x40,0,uVar10,4);
    }
    if (0 < (int)uVar13) {
      uVar11 = (ulonglong)uVar13;
      uVar6 = uVar9;
      do {
        puVar7 = *(undefined1 **)&(this->AttributeMap).field_0x40;
        puVar5 = &(this->AttributeMap).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar5 = puVar7;
        }
        uVar4 = uVar6 & (longlong)(int)uVar13 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(puVar5 + uVar4 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (*(int *)&(this->AttributeMap).field_0x48 != 0) {
    uVar13 = *(uint *)&(this->AttributeMap).field_0x28;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar13 != 0) {
      puVar12 = *(uint **)&(this->AttributeMap).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)puVar1;
      }
      uVar10 = *puVar12;
      uVar6 = uVar9;
      while (uVar10 == 0) {
        iVar8 = (int)uVar9;
        uStack_50 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_50;
        local_68 = iVar8 + 1;
        uVar9 = (ulonglong)local_68;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_147eefaae;
        uVar10 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_64 = -uVar10 & uVar10;
      uVar9 = (ulonglong)uStack_64 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_54 = (uStack_50 - 1) + (int)lVar2;
      uVar9 = (ulonglong)uStack_54;
      if ((int)uVar13 < (int)uStack_54) {
LAB_147eefaae:
        uVar9 = (ulonglong)uVar13;
        uStack_54 = uVar13;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.CurrentBitIndex = uStack_54;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((int)uVar9 < (int)uVar13) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar9 * 0x90 + *(longlong *)&this->AttributeMap);
        uVar13 = *(int *)&(this->AttributeMap).field_0x48 - 1U & *puVar12;
        puVar12[0x21] = uVar13;
        puVar1 = *(undefined1 **)&(this->AttributeMap).field_0x40;
        puVar7 = &(this->AttributeMap).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar7 = puVar1;
        }
        uVar6 = (longlong)*(int *)&(this->AttributeMap).field_0x48 - 1U & (longlong)(int)uVar13;
        puVar12[0x20] = *(uint *)(puVar7 + uVar6 * 4);
        *(int *)(puVar7 + uVar6 * 4) = (int)uVar9;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar9 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
LAB_147eefb3c:
  InitializeAttributeMap(this);
  return this;
}

// Add @ 147ef4170

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FMaterialAttributeDefinitionMap::Add
          (FMaterialAttributeDefinitionMap *this,FGuid *param_1,FString *param_2,
          EMaterialProperty param_3,EMaterialValueType param_4,TVector4<double> *param_5,
          EShaderFrequency param_6,int param_7,bool param_8,
          _func___cdecl_int_FMaterialCompiler_ptr_int_int_int *param_9)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FGuid *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  EMaterialProperty EVar6;
  bool bVar7;
  int iVar8;
  undefined1 *puVar9;
  EMaterialProperty local_res20 [2];
  EMaterialProperty *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  FString local_58;
  EMaterialProperty local_48;
  EMaterialValueType local_40;
  EShaderFrequency local_38;
  int local_34;
  _func___cdecl_int_FMaterialCompiler_ptr_int_int_int *local_30;
  bool local_28;
  
  local_res20[0] = param_3;
  if (*(int *)&(this->AttributeMap).field_0x8 != *(int *)&(this->AttributeMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AttributeMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AttributeMap).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->AttributeMap).field_0x48 - MP_Opacity & param_3) * 4)
    ;
    if (iVar8 != -1) {
      do {
        if (*(EMaterialProperty *)(*(longlong *)&this->AttributeMap + (longlong)iVar8 * 0x90) ==
            param_3) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttributeMap.Contains(Property)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                             ,0x18e,L"Tried to add duplicate material property.");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this->AttributeMap + 0x80 + (longlong)iVar8 * 0x90);
      } while (iVar8 != -1);
    }
  }
  EVar6 = local_res20[0];
  local_88._0_4_ = param_1->A;
  local_88._4_4_ = param_1->B;
  uStack_80._0_4_ = param_1->C;
  uStack_80._4_4_ = param_1->D;
  local_78 = (param_5->field0_0x0)._s_0.X;
  dStack_70 = (param_5->field0_0x0)._s_0.Y;
  local_68 = (param_5->field0_0x0)._s_0.Z;
  dStack_60 = (param_5->field0_0x0)._s_0.W;
  ::FString::FString(&local_58,param_2);
  local_38 = param_6;
  local_34 = param_7;
  local_30 = param_9;
  local_40 = param_4;
  local_28 = param_8;
  local_48 = EVar6;
  if (((((param_4 & MCT_Float) == 0) && (param_4 != MCT_ShadingModel)) && (param_4 != MCT_Substrate)
      ) && ((param_4 != MCT_MaterialAttributes &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("ValueType & MCT_Float || ValueType == MCT_ShadingModel || ValueType == MCT_Substrate || ValueType == MCT_MaterialAttributes"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                                ,0x29,L"Unsupported material attribute type %llu"), bVar7)))) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_98 = local_res20;
  local_90 = &local_88;
  TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EMaterialProperty_const_&,FMaterialAttributeDefintion_&&>_>
            (this,(TPairInitializer<EMaterialProperty_const_&,FMaterialAttributeDefintion_&&> *)
                  &stack0x00000008,(bool *)&local_98);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (!param_8) {
    pFVar3 = (FGuid *)(this->OrderedVisibleAttributeList).AllocatorInstance.Data;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->OrderedVisibleAttributeList).ArrayMax))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->OrderedVisibleAttributeList).ArrayNum;
    piVar1 = &(this->OrderedVisibleAttributeList).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&(this->OrderedVisibleAttributeList).AllocatorInstance,piVar1);
    }
    (this->OrderedVisibleAttributeList).ArrayNum = iVar8 + 1;
    uVar5 = *(undefined8 *)&param_1->C;
    pFVar2 = (this->OrderedVisibleAttributeList).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
  }
  return;
}

// AddCustomAttribute @ 147ef43e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
FMaterialAttributeDefinitionMap::AddCustomAttribute
          (FGuid *param_1,UClass *param_2,FString *param_3,FString *param_4,int param_5,
          EMaterialValueType param_6,TVector4<double> *param_7,EShaderFrequency param_8,bool param_9
          ,_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *param_10)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMaterialAttributeDefinitionMap *pFVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  FString local_128;
  undefined4 local_118;
  EMaterialValueType local_110;
  FScriptContainerElement local_108;
  undefined4 local_104;
  _func___cdecl_int_FMaterialCompiler_ptr_int_int_int *local_100;
  FScriptContainerElement local_f8;
  UClass *local_f0;
  FString local_e8;
  int local_d8;
  FScriptContainerElement local_d4;
  int local_c8;
  FMaterialAttributeDefinitionMap *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  FMaterialAttributeDefinitionMap *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar11 = 0;
  iVar6 = GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayNum + -1;
  if (GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  if ((iVar6 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaterialPropertyAttributesMap.AttributeDDCString.Len() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                         ,0x270,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_158._0_4_ = param_1->A;
  local_158._4_4_ = param_1->B;
  uStack_150._0_4_ = param_1->C;
  uStack_150._4_4_ = param_1->D;
  local_148 = (param_7->field0_0x0)._s_0.X;
  dStack_140 = (param_7->field0_0x0)._s_0.Y;
  local_138 = (param_7->field0_0x0)._s_0.Z;
  dStack_130 = (param_7->field0_0x0)._s_0.W;
  ::FString::FString(&local_128,param_3);
  local_108 = (FScriptContainerElement)param_8;
  local_100 = param_10;
  local_118 = 0x22;
  local_110 = param_6;
  local_104 = 0xffffffff;
  local_f8 = (FScriptContainerElement)0x0;
  if (((((param_6 & MCT_Float) == 0) && (param_6 != MCT_ShadingModel)) && (param_6 != MCT_Substrate)
      ) && ((param_6 != MCT_MaterialAttributes &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("ValueType & MCT_Float || ValueType == MCT_ShadingModel || ValueType == MCT_Substrate || ValueType == MCT_MaterialAttributes"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                                ,0x29,L"Unsupported material attribute type %llu"), bVar5)))) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_f0 = param_2;
  ::FString::FString(&local_e8,param_4);
  iVar6 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
  uStack_b4 = 1;
  local_d8 = param_5;
  local_a0 = 0;
  local_d4 = (FScriptContainerElement)param_9;
  iStack_a4 = 0;
  if (GMaterialPropertyAttributesMap.AttributeMap._40_4_ != 0) {
    puVar16 = (uint *)&GMaterialPropertyAttributesMap.AttributeMap.field_0x10;
    if (GMaterialPropertyAttributesMap.AttributeMap._32_8_ != 0) {
      puVar16 = (uint *)GMaterialPropertyAttributesMap.AttributeMap._32_8_;
    }
    uVar14 = *puVar16;
    local_a0 = 0;
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar11;
      local_a0 = local_a0 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_a4 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
      if ((int)(GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 +
               (GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
          iVar11) goto LAB_147ef45a0;
      uVar14 = puVar16[lVar8 + 1];
    }
    uStack_b4 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_b4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_a4 = local_a0 + -1 + local_res10;
    if ((int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ < iStack_a4) {
      iStack_a4 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
    }
  }
LAB_147ef45a0:
  local_c0 = &GMaterialPropertyAttributesMap;
  uStack_9c = local_44;
  iStack_98 = GMaterialPropertyAttributesMap.AttributeMap._8_4_ -
              GMaterialPropertyAttributesMap.AttributeMap._52_4_;
  TStack_88._padding_ = CONCAT44(uStack_b4,iVar11);
  local_b0 = 0x1552141d0;
  uStack_a8 = 0xffffffff;
  uVar14 = GMaterialPropertyAttributesMap.AttributeMap._40_4_ & 0xffffffe0;
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  local_90 = &GMaterialPropertyAttributesMap;
  iVar12 = (int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  bVar7 = GMaterialPropertyAttributesMap.AttributeMap._40_1_;
  TStack_88.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &GMaterialPropertyAttributesMap.AttributeMap.field_0x10;
  iStack_b8 = iVar11;
  if (((int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar6 != GMaterialPropertyAttributesMap.AttributeMap._40_4_) {
    lVar8 = 0x1552141d0;
    if (GMaterialPropertyAttributesMap.AttributeMap._32_8_ != 0) {
      lVar8 = GMaterialPropertyAttributesMap.AttributeMap._32_8_;
    }
    uVar15 = -1 << (bVar7 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
      if ((int)(GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 +
               (GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
          iVar12) goto LAB_147ef46c0;
      uVar15 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_c8 = (int)lVar8;
    iVar6 = local_c8 + -1 + uVar14;
    if ((int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ < iVar6) {
      iVar6 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
    }
  }
LAB_147ef46c0:
  while( true ) {
    pFVar4 = local_90;
    if (*(int *)&(local_90->AttributeMap).field_0x8 - *(int *)&(local_90->AttributeMap).field_0x34
        != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == iVar6) &&
        (TStack_88.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)
         &GMaterialPropertyAttributesMap.AttributeMap.field_0x10)) &&
       (pFVar4 == &GMaterialPropertyAttributesMap)) break;
    lVar8 = (longlong)TStack_88.CurrentBitIndex * 0x90 + *(longlong *)&pFVar4->AttributeMap;
    if ((((*(uint *)(lVar8 + 0x1c) == param_1->D && *(uint *)(lVar8 + 0x18) == param_1->C) &&
         *(uint *)(lVar8 + 0x14) == param_1->B) && *(uint *)(lVar8 + 0x10) == param_1->A) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute.Value.AttributeID != AttributeID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                           ,0x276,
                           L"Tried to add duplicate custom output attribute (%s) already in base attributes (%s)."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  if (GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data !=
      GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
      (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90) {
    FVar10.Data = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data;
    do {
      if (((uStack_150._4_4_ == *(int *)(FVar10.Data + 0xc) &&
           (int)uStack_150 == *(int *)(FVar10.Data + 8)) &&
          local_158._4_4_ == *(int *)(FVar10.Data + 4)) && (int)local_158 == *(int *)FVar10.Data) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GMaterialPropertyAttributesMap.CustomAttributes.Contains(UserAttribute)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                           ,0x278,L"Tried to add duplicate custom output attribute (%s).");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      FVar10.Data = FVar10.Data + 0x90;
    } while (FVar10.Data !=
             GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
             (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90);
  }
  if (((GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data <=
        (FScriptContainerElement *)&local_158) &&
      ((FScriptContainerElement *)&local_158 <
       GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
       (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayMax * 0x90)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum ==
      GMaterialPropertyAttributesMap.CustomAttributes.ArrayMax) {
    GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1090,&GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance,
                    &GMaterialPropertyAttributesMap.CustomAttributes.ArrayMax);
  }
  pFVar13 = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
            (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90;
  GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum =
       GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum + 1;
  *(undefined8 *)pFVar13 = local_158;
  *(undefined8 *)(pFVar13 + 8) = uStack_150;
  *(double *)(pFVar13 + 0x10) = local_148;
  *(double *)(pFVar13 + 0x18) = dStack_140;
  *(double *)(pFVar13 + 0x20) = local_138;
  *(double *)(pFVar13 + 0x28) = dStack_130;
  ::FString::FString((FString *)(pFVar13 + 0x30),&local_128);
  *(undefined4 *)(pFVar13 + 0x40) = local_118;
  *(EMaterialValueType *)(pFVar13 + 0x48) = local_110;
  pFVar13[0x50] = local_108;
  *(undefined4 *)(pFVar13 + 0x54) = local_104;
  *(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int **)(pFVar13 + 0x58) = local_100;
  pFVar13[0x60] = local_f8;
  *(UClass **)(pFVar13 + 0x68) = local_f0;
  ::FString::FString((FString *)(pFVar13 + 0x70),&local_e8);
  *(int *)(pFVar13 + 0x80) = local_d8;
  pFVar13[0x84] = local_d4;
  if (local_f8 == (FScriptContainerElement)0x0) {
    if (((GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.AllocatorInstance.Data <=
          param_1) &&
        (param_1 < (FGuid *)(GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.
                             AllocatorInstance.Data +
                            (longlong)
                            GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayMax *
                            0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum ==
        GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayMax) {
      GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.
                             AllocatorInstance,
                      &GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayMax);
    }
    uVar3 = *(undefined8 *)&param_1->C;
    pFVar13 = GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.AllocatorInstance.Data +
              (longlong)GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum * 0x10;
    GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum =
         GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum + 1;
    *(undefined8 *)pFVar13 = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar13 + 8) = uVar3;
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendDDCKey @ 147ef4ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMaterialAttributeDefinitionMap::AppendDDCKey(FShaderKeyGenerator *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMaterialAttributeDefinitionMap *pFVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  FGuid *pFVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FMaterialAttributeDefinitionMap *local_160;
  int iStack_158;
  uint uStack_154;
  undefined8 local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  longlong local_128;
  FScriptContainerElement *local_120;
  FMaterialAttributeDefinitionMap *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  uchar local_e8 [32];
  FSHA1 local_c8;
  ulonglong local_38;
  
  iVar5 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar17 = 0;
  uVar19 = 0;
  uVar14 = GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayNum - 1;
  if (GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayNum == 0) {
    uVar14 = uVar19;
  }
  if (uVar14 == 0) {
    uStack_154 = 1;
    local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.Data.ArrayNum = 0;
    local_190.Data.ArrayMax = 0;
    uStack_144 = uVar19;
    local_140 = uVar19;
    if (GMaterialPropertyAttributesMap.AttributeMap._40_4_ != 0) {
      puVar18 = (uint *)&GMaterialPropertyAttributesMap.AttributeMap.field_0x10;
      if (GMaterialPropertyAttributesMap.AttributeMap._32_8_ != 0) {
        puVar18 = (uint *)GMaterialPropertyAttributesMap.AttributeMap._32_8_;
      }
      uVar14 = *puVar18;
      local_140 = 0;
      iVar17 = 0;
      while (uVar14 == 0) {
        lVar8 = (longlong)iVar17;
        local_140 = local_140 + 0x20;
        iVar17 = iVar17 + 1;
        uStack_144 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
        if ((int)(GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 +
                 (GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
            iVar17) goto LAB_147ef4fbd;
        uVar14 = puVar18[lVar8 + 1];
      }
      uStack_154 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_154 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_130 = (int)lVar8;
      uStack_144 = (local_140 - 1) + local_130;
      if ((int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ < (int)uStack_144) {
        uStack_144 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
      }
    }
LAB_147ef4fbd:
    local_160 = &GMaterialPropertyAttributesMap;
    uVar14 = GMaterialPropertyAttributesMap.AttributeMap._40_4_ & 0xffffffe0;
    iStack_138 = GMaterialPropertyAttributesMap.AttributeMap._8_4_ -
                 GMaterialPropertyAttributesMap.AttributeMap._52_4_;
    uStack_148 = 0xffffffff;
    TStack_110._padding_ = CONCAT44(uStack_154,iVar17);
    local_150 = 0x1552141d0;
    TStack_110.CurrentBitIndex = uStack_144;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    local_118 = &GMaterialPropertyAttributesMap;
    iVar12 = (int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ >> 5;
    TStack_110._28_4_ = uStack_144;
    TStack_110.BaseBitIndex = local_140;
    uStack_f0 = CONCAT44(uStack_134,iStack_138);
    bVar7 = GMaterialPropertyAttributesMap.AttributeMap._40_1_;
    TStack_110.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &GMaterialPropertyAttributesMap.AttributeMap.field_0x10;
    iStack_158 = iVar17;
    uStack_13c = uStack_144;
    if (((int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar5 != GMaterialPropertyAttributesMap.AttributeMap._40_4_) {
      lVar8 = 0x1552141d0;
      if (GMaterialPropertyAttributesMap.AttributeMap._32_8_ != 0) {
        lVar8 = GMaterialPropertyAttributesMap.AttributeMap._32_8_;
      }
      uVar15 = -1 << (bVar7 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar12 * 4);
      while (uVar15 == 0) {
        lVar9 = (longlong)iVar12;
        uVar14 = uVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar5 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
        if ((int)(GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 +
                 (GMaterialPropertyAttributesMap.AttributeMap._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
            iVar12) goto LAB_147ef50e0;
        uVar15 = *(uint *)(lVar8 + 4 + lVar9 * 4);
      }
      uVar11 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_12c = (int)lVar8;
      iVar5 = local_12c + -1 + uVar14;
      if ((int)GMaterialPropertyAttributesMap.AttributeMap._40_4_ < iVar5) {
        iVar5 = GMaterialPropertyAttributesMap.AttributeMap._40_4_;
      }
    }
LAB_147ef50e0:
    while( true ) {
      pFVar3 = local_118;
      if (*(int *)&(local_118->AttributeMap).field_0x8 -
          *(int *)&(local_118->AttributeMap).field_0x34 != (int)uStack_f0) {
        local_1a8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
      }
      iVar17 = GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
      if (((TStack_110.CurrentBitIndex == iVar5) &&
          (TStack_110.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)
           &GMaterialPropertyAttributesMap.AttributeMap.field_0x10)) &&
         (pFVar3 == &GMaterialPropertyAttributesMap)) break;
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)((longlong)TStack_110.CurrentBitIndex * 0x90 +
                                   *(longlong *)&pFVar3->AttributeMap + 0x10),&local_180,Digits);
      iVar17 = local_180.Data.ArrayNum + -1;
      if (local_180.Data.ArrayNum == 0) {
        iVar17 = 0;
      }
      ::FString::AppendChars(&local_190,(wchar_t *)local_180.Data.AllocatorInstance.Data,iVar17);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
    uVar11 = (ulonglong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
    pFVar16 = (FGuid *)(GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
                       uVar11 * 0x90);
    FVar13.Data = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar17) {
        local_1a7[0] = 0;
        `TCheckedPointerIterator<FMaterialCustomOutputAttributeDefintion,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a7);
      }
      if ((FGuid *)FVar13.Data == pFVar16) break;
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)FVar13.Data,&local_170,Digits);
      iVar5 = local_170.Data.ArrayNum + -1;
      if (local_170.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_190,(wchar_t *)local_170.Data.AllocatorInstance.Data,iVar5);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)(uint)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
      FVar13.Data = FVar13.Data + 0x90;
    }
    FSHA1::FSHA1(&local_c8);
    uVar14 = local_190.Data.ArrayNum - 1;
    FVar13.Data = local_190.Data.AllocatorInstance.Data;
    if (local_190.Data.ArrayNum == 0) {
      uVar14 = 0;
      FVar13.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&local_c8,(wchar_t *)FVar13.Data,uVar14);
    FSHA1::Final(&local_c8);
    local_e8[0] = '\0';
    local_e8[1] = '\0';
    local_e8[2] = '\0';
    local_e8[3] = '\0';
    local_e8[4] = '\0';
    local_e8[5] = '\0';
    local_e8[6] = '\0';
    local_e8[7] = '\0';
    local_e8[8] = '\0';
    local_e8[9] = '\0';
    local_e8[10] = '\0';
    local_e8[0xb] = '\0';
    local_e8[0xc] = '\0';
    local_e8[0xd] = '\0';
    local_e8[0xe] = '\0';
    local_e8[0xf] = '\0';
    local_e8[0x10] = '\0';
    local_e8[0x11] = '\0';
    local_e8[0x12] = '\0';
    local_e8[0x13] = '\0';
    FSHA1::GetHash(&local_c8,local_e8);
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    BytesToHex(local_e8,0x14,&local_1a0);
    if (GMaterialPropertyAttributesMap.AttributeDDCString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(GMaterialPropertyAttributesMap.AttributeDDCString.Data.AllocatorInstance.Data);
    }
    GMaterialPropertyAttributesMap.AttributeDDCString.Data.AllocatorInstance.Data =
         local_1a0.Data.AllocatorInstance.Data;
    GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayNum = local_1a0.Data.ArrayNum;
    GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayMax = local_1a0.Data.ArrayMax;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FSHA1::~FSHA1(&local_c8);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayNum - 1;
  if (GMaterialPropertyAttributesMap.AttributeDDCString.Data.ArrayNum == 0) {
    uVar14 = uVar19;
  }
  if (param_1->OutputType == Text) {
    ::FString::AppendChars
              (param_1->ResultString,
               (wchar_t *)
               GMaterialPropertyAttributesMap.AttributeDDCString.Data.AllocatorInstance.Data,uVar14)
    ;
  }
  else if (param_1->OutputType == Binary) {
    local_128 = (longlong)(int)uVar14 * 2;
    local_120 = GMaterialPropertyAttributesMap.AttributeDDCString.Data.AllocatorInstance.Data;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->ResultFunc);
    plVar1 = *(longlong **)&(param_1->ResultFunc).field_0x28;
    pcVar2 = *(code **)&param_1->ResultFunc;
    plVar10 = (longlong *)&(param_1->ResultFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar10 = plVar1;
    }
    uVar6 = (**(code **)(*plVar10 + 8))();
    (*pcVar2)(uVar6,&local_120,&local_128);
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ShaderKeyGenerator.h"
                       ,0xac,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AppendDDCKeyString @ 147ef53a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMaterialAttributeDefinitionMap::AppendDDCKeyString(FString *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  longlong *local_30;
  FString *local_28;
  EOutputType local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ = 0;
  local_30 = (longlong *)0x0;
  local_20 = Text;
  local_28 = param_1;
  AppendDDCKey((FShaderKeyGenerator *)local_58);
  if (local_58._0_8_ != 0) {
    plVar1 = (longlong *)(local_58 + 0x10);
    if (local_30 != (longlong *)0x0) {
      plVar1 = local_30;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// CompileDefaultExpression @ 147ef6830

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

int __cdecl
FMaterialAttributeDefinitionMap::CompileDefaultExpression(FMaterialCompiler *param_1,FGuid *param_2)

{
  int iVar1;
  FMaterialAttributeDefintion *this;
  
  this = Find(&GMaterialPropertyAttributesMap,param_2);
  iVar1 = FMaterialAttributeDefintion::CompileDefaultValue(this,param_1);
  return iVar1;
}

// CompileDefaultExpression @ 147ef6860

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

int __cdecl
FMaterialAttributeDefinitionMap::CompileDefaultExpression
          (FMaterialCompiler *param_1,EMaterialProperty param_2)

{
  int iVar1;
  FMaterialAttributeDefintion *this;
  
  this = Find(&GMaterialPropertyAttributesMap,param_2);
  iVar1 = FMaterialAttributeDefintion::CompileDefaultValue(this,param_1);
  return iVar1;
}

// Find @ 147ef7260

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAttributeDefintion * __thiscall
FMaterialAttributeDefinitionMap::Find(FMaterialAttributeDefinitionMap *this,FGuid *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  FMaterialAttributeDefinitionMap *pFVar4;
  bool bVar5;
  FMaterialAttributeDefintion *pFVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  FMaterialAttributeDefintion *pFVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FString local_a8;
  FMaterialAttributeDefinitionMap *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FMaterialAttributeDefinitionMap *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = (this->CustomAttributes).ArrayNum;
  pFVar6 = (FMaterialAttributeDefintion *)(this->CustomAttributes).AllocatorInstance.Data;
  pFVar15 = (FMaterialAttributeDefintion *)((longlong)pFVar6 + (longlong)iVar10 * 0x90);
  while( true ) {
    if ((this->CustomAttributes).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMaterialCustomOutputAttributeDefintion,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar15) break;
    if ((((pFVar6->AttributeID).D == param_1->D && (pFVar6->AttributeID).C == param_1->C) &&
        (pFVar6->AttributeID).B == param_1->B) && param_1->A == (pFVar6->AttributeID).A) {
      return pFVar6;
    }
    pFVar6 = (FMaterialAttributeDefintion *)((longlong)&pFVar6[1].DefaultValue.field0_0x0 + 0x10);
  }
  iVar10 = *(int *)&(this->AttributeMap).field_0x28;
  iStack_90 = 0;
  puVar9 = &(this->AttributeMap).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar10 != 0) {
    puVar13 = *(uint **)&(this->AttributeMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar9;
    }
    uVar14 = *puVar13;
    local_78 = 0;
    while (uVar14 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_147ef736f;
      uVar14 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res20;
    if (iVar10 < iStack_7c) {
      iStack_7c = iVar10;
    }
  }
LAB_147ef736f:
  uVar14 = *(uint *)&(this->AttributeMap).field_0x28;
  uVar16 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&(this->AttributeMap).field_0x8 - *(int *)&(this->AttributeMap).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar9;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar9;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FMaterialAttributeDefintion *)(*pcVar3)();
    return pFVar6;
  }
  uVar2 = *(uint *)&(this->AttributeMap).field_0x28;
  if (uVar14 != uVar2) {
    puVar12 = *(undefined1 **)&(this->AttributeMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar9;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147ef7470;
      uVar14 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar14 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar14) {
      uVar14 = uVar2;
    }
  }
LAB_147ef7470:
  while( true ) {
    pFVar4 = local_68;
    if (*(int *)&(local_68->AttributeMap).field_0x8 - *(int *)&(local_68->AttributeMap).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar9)) && (pFVar4 == this))
    break;
    lVar8 = (longlong)TStack_60.CurrentBitIndex * 0x90 + *(longlong *)&pFVar4->AttributeMap;
    if (((*(uint *)(lVar8 + 0x1c) == param_1->D && *(uint *)(lVar8 + 0x18) == param_1->C) &&
        *(uint *)(lVar8 + 0x14) == param_1->B) && *(uint *)(lVar8 + 0x10) == param_1->A) {
      return (FMaterialAttributeDefintion *)(lVar8 + 0x10);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (2 < (byte)LogMaterial._0_1_) {
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(param_1,&local_a8,Digits);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->AttributeMap).field_0x8 != *(int *)&(this->AttributeMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AttributeMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AttributeMap).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->AttributeMap).field_0x48 - 1U & 0x23) * 4
                     );
    if (iVar10 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar10 * 0x90 + *(longlong *)&this->AttributeMap);
        if (*piVar7 == 0x23) {
          pFVar6 = (FMaterialAttributeDefintion *)(piVar7 + 4);
          if (piVar7 == (int *)0x0) {
            pFVar6 = (FMaterialAttributeDefintion *)0x0;
          }
          if (pFVar6 != (FMaterialAttributeDefintion *)0x0) {
            return pFVar6;
          }
          break;
        }
        iVar10 = piVar7[0x20];
      } while (iVar10 != -1);
    }
  }
  if (2 < (byte)LogMaterial._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  pFVar6 = Find(this,MP_MAX);
  return pFVar6;
}

// Find @ 147ef7600

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialAttributeDefintion * __thiscall
FMaterialAttributeDefinitionMap::Find
          (FMaterialAttributeDefinitionMap *this,EMaterialProperty param_1)

{
  undefined1 *puVar1;
  EMaterialProperty EVar2;
  EMaterialProperty *pEVar3;
  FMaterialAttributeDefintion *pFVar4;
  undefined1 *puVar5;
  
  do {
    if (*(int *)&(this->AttributeMap).field_0x8 != *(int *)&(this->AttributeMap).field_0x34) {
      puVar1 = *(undefined1 **)&(this->AttributeMap).field_0x40;
      puVar5 = &(this->AttributeMap).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar5 = puVar1;
      }
      EVar2 = *(EMaterialProperty *)
               (puVar5 + (ulonglong)
                         (*(int *)&(this->AttributeMap).field_0x48 - MP_Opacity & param_1) * 4);
      if (EVar2 != ~MP_EmissiveColor) {
        do {
          pEVar3 = (EMaterialProperty *)
                   ((longlong)(int)EVar2 * 0x90 + *(longlong *)&this->AttributeMap);
          if (*pEVar3 == param_1) {
            pFVar4 = (FMaterialAttributeDefintion *)(pEVar3 + 4);
            if (pEVar3 == (EMaterialProperty *)0x0) {
              pFVar4 = (FMaterialAttributeDefintion *)0x0;
            }
            if (pFVar4 != (FMaterialAttributeDefintion *)0x0) {
              return pFVar4;
            }
            break;
          }
          EVar2 = pEVar3[0x20];
        } while (EVar2 != ~MP_EmissiveColor);
      }
    }
    if (2 < (byte)LogMaterial._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    param_1 = MP_MAX;
  } while( true );
}

// GetAttributeName @ 147ef8ab0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FString * __cdecl FMaterialAttributeDefinitionMap::GetAttributeName(FGuid *param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  return &pFVar1->AttributeName;
}

// GetAttributeName @ 147ef8ae0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FString * __cdecl FMaterialAttributeDefinitionMap::GetAttributeName(EMaterialProperty param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  return &pFVar1->AttributeName;
}

// GetAttributeNameToIDList @ 147ef8b10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
FMaterialAttributeDefinitionMap::GetAttributeNameToIDList
          (TArray<TTuple<FString,FGuid>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  FMaterialAttributeDefintion *pFVar6;
  FScriptContainerElement *this;
  ForAnyElementType FVar7;
  FGuid *pFVar8;
  undefined1 local_res10 [8];
  
  iVar4 = GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum;
  if (-1 < GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum) {
    DestructItems<TTuple<FString,FGuid>,int>
              ((TTuple<FString,FGuid> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != iVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,&param_1->AllocatorInstance,0,piVar1);
    }
    iVar4 = GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum;
    pFVar8 = (FGuid *)(GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.AllocatorInstance.
                       Data + (longlong)
                              GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum *
                              0x10);
    FVar7.Data = GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.AllocatorInstance.Data;
    while( true ) {
      if (GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if ((FGuid *)FVar7.Data == pFVar8) break;
      pFVar6 = Find(&GMaterialPropertyAttributesMap,(FGuid *)FVar7.Data);
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      this = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
      ::FString::FString((FString *)this,&pFVar6->AttributeName);
      uVar2 = *(undefined8 *)FVar7.Data;
      uVar3 = *(undefined8 *)&((FGuid *)FVar7.Data)->C;
      FVar7.Data = FVar7.Data + 0x10;
      *(undefined8 *)&this[0x10].field_0x0 = uVar2;
      *(undefined8 *)(this + 0x18) = uVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum
            ((ulonglong)(uint)GMaterialPropertyAttributesMap.OrderedVisibleAttributeList.ArrayNum);
}

// GetAttributeOverrideForMaterial @ 147ef8c30

/* WARNING: Removing unreachable block (ram,0x000147ef9dd9) */
/* WARNING: Removing unreachable block (ram,0x000147ef92ed) */
/* WARNING: Removing unreachable block (ram,0x000147ef9af5) */
/* WARNING: Removing unreachable block (ram,0x000147ef99ca) */
/* WARNING: Removing unreachable block (ram,0x000147ef9768) */
/* WARNING: Removing unreachable block (ram,0x000147ef989f) */
/* WARNING: Removing unreachable block (ram,0x000147ef9c20) */
/* WARNING: Removing unreachable block (ram,0x000147ef95af) */
/* WARNING: Removing unreachable block (ram,0x000147ef8fca) */
/* WARNING: Removing unreachable block (ram,0x000147ef90f8) */
/* WARNING: Removing unreachable block (ram,0x000147ef9f04) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FText * __cdecl
FMaterialAttributeDefinitionMap::GetAttributeOverrideForMaterial
          (FText *__return_storage_ptr__,FGuid *param_1,UMaterial *param_2)

{
  EMaterialProperty EVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FMaterialAttributeDefintion *pFVar6;
  FText *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  ushort *puVar10;
  byte bVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined4 local_res20 [2];
  TArray<TKeyValuePair<EMaterialShadingModel,FString>,TSizedDefaultAllocator<32>_> local_308;
  TKeyValuePair<EMaterialShadingModel,FString> local_2f8;
  TKeyValuePair<EMaterialShadingModel,FString> local_2e0;
  TKeyValuePair<EMaterialShadingModel,FString> local_2c8;
  TKeyValuePair<EMaterialShadingModel,FString> local_2b0;
  TKeyValuePair<EMaterialShadingModel,FString> local_298;
  TKeyValuePair<EMaterialShadingModel,FString> local_280;
  TKeyValuePair<EMaterialShadingModel,FString> local_268;
  TKeyValuePair<EMaterialShadingModel,FString> local_250;
  TKeyValuePair<EMaterialShadingModel,FString> local_238;
  TKeyValuePair<EMaterialShadingModel,FString> local_220;
  TKeyValuePair<EMaterialShadingModel,FString> local_208;
  undefined1 local_1f0 [2];
  undefined1 local_1ee [2];
  undefined1 local_1ec [2];
  undefined1 local_1ea [2];
  FString local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FString local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FString local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FString local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  
  local_res20[0] = 0;
  local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.ArrayNum = 0;
  local_308.ArrayMax = 0;
  pFVar6 = Find(&GMaterialPropertyAttributesMap,param_1);
  EVar1 = pFVar6->Property;
  bVar3 = Substrate::IsSubstrateEnabled();
  switch(EVar1) {
  case MP_EmissiveColor:
    cVar4 = (**(code **)(param_2->_padding_ + 0x4c0))(param_2);
    pFVar7 = &local_c8;
    pwVar13 = L"Final Color";
    pwVar12 = L"UIOutputColor";
    if (cVar4 == '\0') {
      pwVar13 = L"Emissive Color";
      pwVar12 = L"EmissiveColor";
      pFVar7 = &local_188;
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(pFVar7,L"MaterialShared",pwVar12,pwVar13);
    FText::FText(__return_storage_ptr__,pFVar7);
    if (((2U - (cVar4 != '\0') & 2) != 0) && (local_188.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    if ((cVar4 != '\0') && (local_c8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_Opacity:
    pwVar13 = L"Opacity Override";
    pwVar12 = L"OpacityOverride";
    bVar11 = !bVar3 * '\x04' + 4;
    pFVar7 = &local_a8;
    if (!bVar3) {
      pwVar13 = L"Opacity";
      pwVar12 = L"Opacity";
      pFVar7 = &local_b8;
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(pFVar7,L"MaterialShared",pwVar12,pwVar13);
    FText::FText(__return_storage_ptr__,pFVar7);
    if (((bVar11 & 8) != 0) &&
       (bVar11 = bVar11 & 0xf7, local_b8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (((bVar11 & 4) != 0) && (local_a8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_OpacityMask:
    pwVar13 = L"Opacity Mask";
    pwVar12 = L"OpacityMask";
    break;
  case MP_DiffuseColor:
    pwVar13 = L"Diffuse Color";
    pwVar12 = L"DiffuseColor";
    break;
  case MP_SpecularColor:
    pwVar13 = L"Specular Color";
    pwVar12 = L"SpecularColor";
    break;
  case MP_BaseColor:
    bVar3 = (param_2->MaterialDomain).Value != '\x03';
    pwVar12 = L"Albedo";
    pwVar13 = L"Albedo";
    pFVar7 = &local_88;
    if (bVar3) {
      pwVar13 = L"Base Color";
      pwVar12 = L"BaseColor";
      pFVar7 = &local_98;
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(pFVar7,L"MaterialShared",pwVar12,pwVar13);
    FText::FText(__return_storage_ptr__,pFVar7);
    if ((bVar3) && (local_98.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if ((!bVar3) && (local_88.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_Metallic:
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"MaterialShared",L"Scatter",L"Scatter");
    pFVar8 = FText::ToString(pFVar7);
    local_2e0.Key = MSM_Hair;
    ::FString::FString(&local_2e0.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_2e0) &&
        (&local_2e0 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    iVar5 = local_308.ArrayNum;
    if (local_308.ArrayNum == local_308.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    lVar9 = (longlong)iVar5;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_2e0.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_2e0.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_2e0.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_2e0.Value.Data.ArrayMax
    ;
    local_2e0.Value.Data.ArrayNum = 0;
    local_2e0.Value.Data.ArrayMax = 0;
    local_2e0.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = iVar5 + 1;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"MaterialShared",L"Curvature",L"Curvature");
    pFVar8 = FText::ToString(pFVar7);
    local_2c8.Key = MSM_Eye;
    ::FString::FString(&local_2c8.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_2c8) &&
        (&local_2c8 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    if (local_308.ArrayNum == local_308.ArrayMax) {
      local_308.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    lVar9 = (longlong)local_308.ArrayNum;
    local_308.ArrayNum = local_308.ArrayNum + 1;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_2c8.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_2c8.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_2c8.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_2c8.Value.Data.ArrayMax
    ;
    local_2c8.Value.Data.ArrayNum = 0;
    local_2c8.Value.Data.ArrayMax = 0;
    local_2c8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MaterialShared",L"Metallic",L"Metallic");
    pFVar8 = FText::ToString(pFVar7);
    puVar10 = (ushort *)(**(code **)(param_2->_padding_ + 0x468))(param_2,local_res20);
    pFVar8 = GetPinNameFromShadingModelField
                       (&local_48,(FMaterialShadingModelField)*puVar10,&local_308,pFVar8);
    FText::FromString(__return_storage_ptr__,pFVar8);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_Specular:
    pwVar13 = L"Specular";
    pwVar12 = L"Specular";
    break;
  case MP_Roughness:
    pwVar13 = L"Roughness";
    pwVar12 = L"Roughness";
    break;
  case MP_Anisotropy:
    pwVar13 = L"Anisotropy";
    pwVar12 = L"Anisotropy";
    break;
  case MP_Normal:
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"MaterialShared",L"Tangent",L"Tangent");
    pFVar8 = FText::ToString(pFVar7);
    local_2b0.Key = MSM_Hair;
    ::FString::FString(&local_2b0.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_2b0) &&
        (&local_2b0 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    iVar5 = local_308.ArrayNum;
    if (local_308.ArrayNum == local_308.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    lVar9 = (longlong)iVar5;
    local_308.ArrayNum = iVar5 + 1;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_2b0.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_2b0.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_2b0.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_2b0.Value.Data.ArrayMax
    ;
    local_2b0.Value.Data.ArrayNum = 0;
    local_2b0.Value.Data.ArrayMax = 0;
    local_2b0.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_1d8,L"MaterialShared",L"Normal",L"Normal")
    ;
    pFVar8 = FText::ToString(pFVar7);
    puVar10 = (ushort *)(**(code **)(param_2->_padding_ + 0x468))(param_2,local_1f0);
    pFVar8 = GetPinNameFromShadingModelField
                       (&local_1e8,(FMaterialShadingModelField)*puVar10,&local_308,pFVar8);
    FText::FromString(__return_storage_ptr__,pFVar8);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_Tangent:
    pwVar13 = L"Tangent";
    pwVar12 = L"Tangent";
    break;
  case MP_WorldPositionOffset:
    cVar4 = (**(code **)(param_2->_padding_ + 0x4c0))(param_2);
    pFVar7 = &local_1b8;
    pwVar13 = L"Screen Position";
    pwVar12 = L"ScreenPosition";
    bVar11 = 0x40;
    if (cVar4 == '\0') {
      pwVar13 = L"World Position Offset";
      pwVar12 = L"WorldPositionOffset";
      pFVar7 = &local_1c8;
      bVar11 = 0x80;
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(pFVar7,L"MaterialShared",pwVar12,pwVar13);
    FText::FText(__return_storage_ptr__,pFVar7);
    if (((char)bVar11 < '\0') &&
       (bVar11 = bVar11 & 0x7f, local_1c8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
    }
    if (((bVar11 & 0x40) != 0) && (local_1b8.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_WorldDisplacement_DEPRECATED:
    pwVar13 = L"World Displacement";
    pwVar12 = L"WorldDisplacement";
    break;
  case MP_TessellationMultiplier_DEPRECATED:
    pwVar13 = L"Tessellation Multiplier";
    pwVar12 = L"TessellationMultiplier";
    break;
  case MP_SubsurfaceColor:
    if ((param_2->MaterialDomain).Value != '\x03') {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_1a8,L"MaterialShared",L"FuzzColor",L"Fuzz Color");
      pFVar8 = FText::ToString(pFVar7);
      local_298.Key = MSM_Cloth;
      ::FString::FString(&local_298.Value,pFVar8);
      if (((local_308.AllocatorInstance.Data <= &local_298) &&
          (&local_298 <
           (TKeyValuePair<EMaterialShadingModel,FString> *)
           (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar2)();
        return pFVar7;
      }
      iVar5 = local_308.ArrayNum;
      if (local_308.ArrayNum == local_308.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
      }
      lVar9 = (longlong)iVar5;
      local_308.ArrayNum = iVar5 + 1;
      *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
           local_298.Key;
      *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
      *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
           local_298.Value.Data.AllocatorInstance.Data;
      *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) =
           local_298.Value.Data.ArrayNum;
      *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) =
           local_298.Value.Data.ArrayMax;
      local_298.Value.Data.ArrayNum = 0;
      local_298.Value.Data.ArrayMax = 0;
      local_298.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"MaterialShared",L"SubsurfaceColor",L"Subsurface Color");
      pFVar8 = FText::ToString(pFVar7);
      puVar10 = (ushort *)(**(code **)(param_2->_padding_ + 0x468))(param_2,local_1ee);
      pFVar8 = GetPinNameFromShadingModelField
                         (&local_198,(FMaterialShadingModelField)*puVar10,&local_308,pFVar8);
      FText::FromString(__return_storage_ptr__,pFVar8);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      goto LAB_147efa0db;
    }
    pwVar13 = L"Extinction";
    pwVar12 = L"Extinction";
    break;
  case MP_CustomData0:
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_178,L"MaterialShared",L"ClearCoat",L"Clear Coat");
    pFVar8 = FText::ToString(pFVar7);
    local_280.Key = MSM_ClearCoat;
    ::FString::FString(&local_280.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_280) &&
        (&local_280 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    iVar5 = local_308.ArrayNum;
    if (local_308.ArrayNum == local_308.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    lVar9 = (longlong)iVar5;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_280.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_280.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_280.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_280.Value.Data.ArrayMax
    ;
    local_280.Value.Data.ArrayNum = 0;
    local_280.Value.Data.ArrayMax = 0;
    local_280.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = iVar5 + 1;
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_168,L"MaterialShared",L"Backlit",L"Backlit");
    pFVar8 = FText::ToString(pFVar7);
    local_2f8.Key = MSM_Hair;
    ::FString::FString(&local_2f8.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_2f8) &&
        (&local_2f8 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    if (local_308.ArrayNum == local_308.ArrayMax) {
      local_308.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    iVar5 = local_308.ArrayNum + 1;
    lVar9 = (longlong)local_308.ArrayNum;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_2f8.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_2f8.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_2f8.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_2f8.Value.Data.ArrayMax
    ;
    local_2f8.Value.Data.ArrayNum = 0;
    local_2f8.Value.Data.ArrayMax = 0;
    local_2f8.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = iVar5;
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_158,L"MaterialShared",L"Cloth",L"Cloth");
    pFVar8 = FText::ToString(pFVar7);
    local_268.Key = MSM_Cloth;
    ::FString::FString(&local_268.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_268) &&
        (&local_268 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    if (local_308.ArrayNum == local_308.ArrayMax) {
      local_308.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    iVar5 = local_308.ArrayNum + 1;
    lVar9 = (longlong)local_308.ArrayNum;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_268.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_268.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_268.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_268.Value.Data.ArrayMax
    ;
    local_268.Value.Data.ArrayNum = 0;
    local_268.Value.Data.ArrayMax = 0;
    local_268.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = iVar5;
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_148,L"MaterialShared",L"IrisMask",L"Iris Mask");
    pFVar8 = FText::ToString(pFVar7);
    local_250.Key = MSM_Eye;
    ::FString::FString(&local_250.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_250) &&
        (&local_250 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    if (local_308.ArrayNum == local_308.ArrayMax) {
      local_308.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    iVar5 = local_308.ArrayNum + 1;
    lVar9 = (longlong)local_308.ArrayNum;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_250.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_250.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_250.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_250.Value.Data.ArrayMax
    ;
    local_250.Value.Data.ArrayNum = 0;
    local_250.Value.Data.ArrayMax = 0;
    local_250.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = iVar5;
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_138,L"MaterialShared",L"Curvature",L"Curvature");
    pFVar8 = FText::ToString(pFVar7);
    local_238.Key = MSM_SubsurfaceProfile;
    ::FString::FString(&local_238.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_238) &&
        (&local_238 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    if (local_308.ArrayNum == local_308.ArrayMax) {
      local_308.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    lVar9 = (longlong)local_308.ArrayNum;
    local_308.ArrayNum = local_308.ArrayNum + 1;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_238.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_238.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_238.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_238.Value.Data.ArrayMax
    ;
    local_238.Value.Data.ArrayNum = 0;
    local_238.Value.Data.ArrayMax = 0;
    local_238.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_118,L"MaterialShared",L"CustomData0",L"Custom Data 0");
    pFVar8 = FText::ToString(pFVar7);
    puVar10 = (ushort *)(**(code **)(param_2->_padding_ + 0x468))(param_2,local_1ec);
    pFVar8 = GetPinNameFromShadingModelField
                       (&local_128,(FMaterialShadingModelField)*puVar10,&local_308,pFVar8);
    FText::FromString(__return_storage_ptr__,pFVar8);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_CustomData1:
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"MaterialShared",L"ClearCoatRoughness",L"Clear Coat Roughness");
    pFVar8 = FText::ToString(pFVar7);
    local_220.Key = MSM_ClearCoat;
    ::FString::FString(&local_220.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_220) &&
        (&local_220 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    iVar5 = local_308.ArrayNum;
    if (local_308.ArrayNum == local_308.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    lVar9 = (longlong)iVar5;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_220.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_220.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_220.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_220.Value.Data.ArrayMax
    ;
    local_220.Value.Data.ArrayNum = 0;
    local_220.Value.Data.ArrayMax = 0;
    local_220.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.ArrayNum = iVar5 + 1;
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_f8,L"MaterialShared",L"IrisDistance",L"Iris Distance");
    pFVar8 = FText::ToString(pFVar7);
    local_208.Key = MSM_Eye;
    ::FString::FString(&local_208.Value,pFVar8);
    if (((local_308.AllocatorInstance.Data <= &local_208) &&
        (&local_208 <
         (TKeyValuePair<EMaterialShadingModel,FString> *)
         (local_308.AllocatorInstance.Data + (longlong)local_308.ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    if (local_308.ArrayNum == local_308.ArrayMax) {
      local_308.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_308.AllocatorInstance,&local_308.ArrayMax);
    }
    lVar9 = (longlong)local_308.ArrayNum;
    local_308.ArrayNum = local_308.ArrayNum + 1;
    *(EMaterialShadingModel *)&local_308.AllocatorInstance.Data[lVar9 * 0x18].field_0x0 =
         local_208.Key;
    *(undefined8 *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) = 0;
    *(FScriptContainerElement **)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 8) =
         local_208.Value.Data.AllocatorInstance.Data;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x10) = local_208.Value.Data.ArrayNum
    ;
    *(int *)(local_308.AllocatorInstance.Data + lVar9 * 0x18 + 0x14) = local_208.Value.Data.ArrayMax
    ;
    local_208.Value.Data.ArrayNum = 0;
    local_208.Value.Data.ArrayMax = 0;
    local_208.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_d8,L"MaterialShared",L"CustomData1",L"Custom Data 1");
    pFVar8 = FText::ToString(pFVar7);
    puVar10 = (ushort *)(**(code **)(param_2->_padding_ + 0x468))(param_2,local_1ea);
    pFVar8 = GetPinNameFromShadingModelField
                       (&local_e8,(FMaterialShadingModelField)*puVar10,&local_308,pFVar8);
    FText::FromString(__return_storage_ptr__,pFVar8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    goto LAB_147efa0db;
  case MP_AmbientOcclusion:
    pwVar13 = L"Ambient Occlusion";
    pwVar12 = L"AmbientOcclusion";
    break;
  case MP_Refraction:
    pwVar13 = L"Refraction";
    pwVar12 = L"Refraction";
    break;
  case MP_CustomizedUVs0:
    pwVar13 = L"Customized UV 0";
    pwVar12 = L"CustomizedUV0";
    break;
  case MP_CustomizedUVs1:
    pwVar13 = L"Customized UV 1";
    pwVar12 = L"CustomizedUV1";
    break;
  case MP_CustomizedUVs2:
    pwVar13 = L"Customized UV 2";
    pwVar12 = L"CustomizedUV2";
    break;
  case MP_CustomizedUVs3:
    pwVar13 = L"Customized UV 3";
    pwVar12 = L"CustomizedUV3";
    break;
  case MP_CustomizedUVs4:
    pwVar13 = L"Customized UV 4";
    pwVar12 = L"CustomizedUV4";
    break;
  case MP_CustomizedUVs5:
    pwVar13 = L"Customized UV 5";
    pwVar12 = L"CustomizedUV5";
    break;
  case MP_CustomizedUVs6:
    pwVar13 = L"Customized UV 6";
    pwVar12 = L"CustomizedUV6";
    break;
  case MP_CustomizedUVs7:
    pwVar13 = L"Customized UV 7";
    pwVar12 = L"CustomizedUV7";
    break;
  case MP_PixelDepthOffset:
    pwVar13 = L"Pixel Depth Offset";
    pwVar12 = L"PixelDepthOffset";
    break;
  case MP_ShadingModel:
    pwVar13 = L"Shading Model";
    pwVar12 = L"ShadingModel";
    break;
  case MP_FrontMaterial:
    pwVar13 = L"Front Material";
    pwVar12 = L"FrontMaterial";
    break;
  case MP_SurfaceThickness:
    pwVar13 = L"Surface Thickness";
    pwVar12 = L"SurfaceThickness";
    break;
  case MP_Displacement:
    pwVar13 = L"Displacement";
    pwVar12 = L"Displacement";
    break;
  default:
    pwVar13 = L"Missing";
    pwVar12 = L"Missing";
    break;
  case MP_CustomOutput:
    pFVar6 = Find(&GMaterialPropertyAttributesMap,param_1);
    FText::FromString(__return_storage_ptr__,&pFVar6->AttributeName);
    goto LAB_147efa0db;
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"MaterialShared",pwVar12,pwVar13);
LAB_147efa0db:
  DestructItems<TKeyValuePair<enum_EMaterialShadingModel,FString>,int>
            ((TKeyValuePair<EMaterialShadingModel,FString> *)local_308.AllocatorInstance.Data,
             local_308.ArrayNum);
  if ((TKeyValuePair<EMaterialShadingModel,FString> *)local_308.AllocatorInstance.Data !=
      (TKeyValuePair<EMaterialShadingModel,FString> *)0x0) {
    FMemory::Free(local_308.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBitmask @ 147efa1e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

ulong64 __cdecl FMaterialAttributeDefinitionMap::GetBitmask(FGuid *param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  ulong64 uVar2;
  EMaterialProperty EVar3;
  ForAnyElementType FVar4;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  if (pFVar1 == (FMaterialAttributeDefintion *)0x0) {
    return 0;
  }
  EVar3 = pFVar1->Property;
  if (EVar3 == MP_CustomOutput) {
    if (GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data !=
        GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
        (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90) {
      FVar4 = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance;
      do {
        if ((((pFVar1->AttributeID).D == *(uint *)(FVar4.Data + 0xc) &&
             (pFVar1->AttributeID).C == *(uint *)(FVar4.Data + 8)) &&
            (pFVar1->AttributeID).B == *(uint *)(FVar4.Data + 4)) &&
            (pFVar1->AttributeID).A == *(uint *)FVar4.Data) {
          EVar3 = (int)(((longlong)FVar4.Data -
                        (longlong)
                        GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data) /
                       0x90) + MP_MAX;
          goto LAB_147efa2af;
        }
        FVar4.Data = FVar4.Data + 0x90;
      } while (FVar4.Data !=
               GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
               (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90);
    }
    EVar3 = MP_CustomOutput;
  }
  else if (EVar3 == MP_MAX) {
    return 0;
  }
LAB_147efa2af:
  uVar2 = 0;
  if (EVar3 != ~MP_EmissiveColor) {
    uVar2 = 1L << ((byte)EVar3 & 0x3f);
  }
  return uVar2;
}

// GetBitmask @ 147efa2e0

ulong64 __cdecl FMaterialAttributeDefinitionMap::GetBitmask(EMaterialProperty param_1)

{
  ulong64 uVar1;
  
  if (1 < param_1 - MP_CustomOutput) {
    uVar1 = 0;
    if (param_1 != ~MP_EmissiveColor) {
      uVar1 = 1L << ((byte)param_1 & 0x3f);
    }
    return uVar1;
  }
  return 0;
}

// GetBlendFunction @ 147efa310

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

_func___cdecl_int_FMaterialCompiler_ptr_int_int_int * __cdecl
FMaterialAttributeDefinitionMap::GetBlendFunction(FGuid *param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  return pFVar1->BlendFunction;
}

// GetCustomAttribute @ 147efa720

FMaterialCustomOutputAttributeDefintion * __cdecl
FMaterialAttributeDefinitionMap::GetCustomAttribute(FGuid *param_1)

{
  ForAnyElementType FVar1;
  FMaterialCustomOutputAttributeDefintion *pFVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  
  iVar3 = GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
  pFVar2 = (FMaterialCustomOutputAttributeDefintion *)
           (GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
           (longlong)iVar3 * 0x90);
  FVar1.Data = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data;
  uVar4 = GMaterialPropertyAttributesMap.CustomAttributes._8_8_;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<FMaterialCustomOutputAttributeDefintion,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      uVar4 = GMaterialPropertyAttributesMap.CustomAttributes._8_8_;
    }
    if ((FMaterialCustomOutputAttributeDefintion *)FVar1.Data == pFVar2) break;
    if (((*(uint *)&((FMaterialCustomOutputAttributeDefintion *)FVar1.Data)->field_0xc == param_1->D
         && *(uint *)&((FMaterialCustomOutputAttributeDefintion *)FVar1.Data)->field_0x8 ==
            param_1->C) &&
        *(uint *)&((FMaterialCustomOutputAttributeDefintion *)FVar1.Data)->field_0x4 == param_1->B)
        && *(uint *)FVar1.Data == param_1->A) {
      return (FMaterialCustomOutputAttributeDefintion *)FVar1.Data;
    }
    FVar1.Data = FVar1.Data + 0x90;
  }
  return (FMaterialCustomOutputAttributeDefintion *)0x0;
}

// GetCustomAttribute @ 147efa7c0

FMaterialCustomOutputAttributeDefintion * __cdecl
FMaterialAttributeDefinitionMap::GetCustomAttribute(FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FMaterialCustomOutputAttributeDefintion *pFVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  
  iVar2 = GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
  pFVar5 = (FMaterialCustomOutputAttributeDefintion *)
           (GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
           (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90);
  FVar4.Data = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data;
  while( true ) {
    if (GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMaterialCustomOutputAttributeDefintion,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if ((FMaterialCustomOutputAttributeDefintion *)FVar4.Data == pFVar5) {
      return (FMaterialCustomOutputAttributeDefintion *)0x0;
    }
    iVar3 = *(int *)&((FMaterialCustomOutputAttributeDefintion *)FVar4.Data)->field_0x38;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        return (FMaterialCustomOutputAttributeDefintion *)FVar4.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)
                          &((FMaterialCustomOutputAttributeDefintion *)FVar4.Data)->field_0x30,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
    }
    else {
      bVar6 = iVar3 + iVar1 == 1;
    }
    if (bVar6) break;
    FVar4.Data = FVar4.Data + 0x90;
  }
  return (FMaterialCustomOutputAttributeDefintion *)FVar4.Data;
}

// GetCustomAttributeID @ 147efa860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FGuid * __cdecl
FMaterialAttributeDefinitionMap::GetCustomAttributeID
          (FGuid *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  FMaterialAttributeDefintion *pFVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res18 [16];
  
  iVar2 = GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
  pFVar8 = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
           (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90;
  FVar7.Data = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data;
  do {
    if (GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMaterialCustomOutputAttributeDefintion,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (FVar7.Data == pFVar8) {
      if (GMaterialPropertyAttributesMap.AttributeMap._8_4_ ==
          GMaterialPropertyAttributesMap.AttributeMap._52_4_) goto LAB_147efa953;
      lVar6 = 0x1552141f8;
      if (GMaterialPropertyAttributesMap.AttributeMap._64_8_ != 0) {
        lVar6 = GMaterialPropertyAttributesMap.AttributeMap._64_8_;
      }
      iVar2 = *(int *)(lVar6 + (ulonglong)
                               (GMaterialPropertyAttributesMap.AttributeMap._72_4_ - 1 & 0x23) * 4);
      break;
    }
    iVar3 = *(int *)(FVar7.Data + 0x38);
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) goto LAB_147efa8dc;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(FVar7.Data + 0x30),
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar9 = iVar3 == 0;
    }
    else {
      bVar9 = iVar3 + iVar1 == 1;
    }
    if (bVar9) goto LAB_147efa8dc;
    FVar7.Data = FVar7.Data + 0x90;
  } while( true );
joined_r0x000147efa918:
  if (iVar2 == -1) goto LAB_147efa953;
  piVar4 = (int *)((longlong)iVar2 * 0x90 + GMaterialPropertyAttributesMap.AttributeMap._0_8_);
  if (*piVar4 == 0x23) {
    pFVar5 = (FMaterialAttributeDefintion *)(piVar4 + 4);
    if (piVar4 == (int *)0x0) {
      pFVar5 = (FMaterialAttributeDefintion *)0x0;
    }
    if (pFVar5 != (FMaterialAttributeDefintion *)0x0) goto LAB_147efa989;
    goto LAB_147efa953;
  }
  iVar2 = piVar4[0x20];
  goto joined_r0x000147efa918;
LAB_147efa8dc:
  uVar10 = *(uint *)FVar7.Data;
  uVar11 = *(uint *)(FVar7.Data + 4);
  uVar12 = *(uint *)(FVar7.Data + 8);
  uVar13 = *(uint *)(FVar7.Data + 0xc);
  goto LAB_147efa98c;
LAB_147efa953:
  if (2 < (byte)LogMaterial._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  pFVar5 = Find(&GMaterialPropertyAttributesMap,MP_MAX);
LAB_147efa989:
  uVar10 = (pFVar5->AttributeID).A;
  uVar11 = (pFVar5->AttributeID).B;
  uVar12 = (pFVar5->AttributeID).C;
  uVar13 = (pFVar5->AttributeID).D;
LAB_147efa98c:
  __return_storage_ptr__->A = uVar10;
  __return_storage_ptr__->B = uVar11;
  __return_storage_ptr__->C = uVar12;
  __return_storage_ptr__->D = uVar13;
  return __return_storage_ptr__;
}

// GetCustomAttributeList @ 147efa9b0

void __cdecl
FMaterialAttributeDefinitionMap::GetCustomAttributeList
          (TArray<FMaterialCustomOutputAttributeDefintion,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FMaterialCustomOutputAttributeDefintion *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FMaterialCustomOutputAttributeDefintion *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res10 [8];
  
  iVar4 = GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
  if (GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum
              ((ulonglong)(uint)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum);
  }
  DestructItems<FMaterialCustomOutputAttributeDefintion,int>
            ((FMaterialCustomOutputAttributeDefintion *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != iVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,iVar4,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum;
  pFVar7 = (FMaterialCustomOutputAttributeDefintion *)
           (GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
           (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90);
  FVar8.Data = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data;
  while( true ) {
    if (GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMaterialCustomOutputAttributeDefintion,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if ((FMaterialCustomOutputAttributeDefintion *)FVar8.Data == pFVar7) break;
    pFVar2 = (FMaterialCustomOutputAttributeDefintion *)(param_1->AllocatorInstance).Data;
    if ((pFVar2 <= FVar8.Data) && (FVar8.Data < pFVar2 + *piVar1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1090,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar6 + 1;
    FMaterialCustomOutputAttributeDefintion::FMaterialCustomOutputAttributeDefintion
              ((FMaterialCustomOutputAttributeDefintion *)
               ((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x90),
               (FMaterialCustomOutputAttributeDefintion *)FVar8.Data);
    FVar8.Data = FVar8.Data + 0x90;
  }
  return;
}

// GetDefaultID @ 147efab50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FGuid * __cdecl FMaterialAttributeDefinitionMap::GetDefaultID(FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FMaterialAttributeDefintion *pFVar4;
  
  pFVar4 = Find(&GMaterialPropertyAttributesMap,MP_MAX);
  uVar1 = (pFVar4->AttributeID).B;
  uVar2 = (pFVar4->AttributeID).C;
  uVar3 = (pFVar4->AttributeID).D;
  __return_storage_ptr__->A = (pFVar4->AttributeID).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetDefaultValue @ 147efac00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TVector4<float> * __cdecl
FMaterialAttributeDefinitionMap::GetDefaultValue
          (TVector4<float> *__return_storage_ptr__,FGuid *param_1)

{
  double dVar1;
  double dVar2;
  FMaterialAttributeDefintion *pFVar3;
  
  pFVar3 = Find(&GMaterialPropertyAttributesMap,param_1);
  dVar1 = (pFVar3->DefaultValue).field0_0x0._s_0.Z;
  dVar2 = (pFVar3->DefaultValue).field0_0x0._s_0.W;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)(pFVar3->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar3->DefaultValue).field0_0x0._s_0.X);
  *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) =
       CONCAT44((float)dVar2,(float)dVar1);
  return __return_storage_ptr__;
}

// GetDefaultValue @ 147efac40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TVector4<float> * __cdecl
FMaterialAttributeDefinitionMap::GetDefaultValue
          (TVector4<float> *__return_storage_ptr__,EMaterialProperty param_1)

{
  double dVar1;
  double dVar2;
  FMaterialAttributeDefintion *pFVar3;
  
  pFVar3 = Find(&GMaterialPropertyAttributesMap,param_1);
  dVar1 = (pFVar3->DefaultValue).field0_0x0._s_0.Z;
  dVar2 = (pFVar3->DefaultValue).field0_0x0._s_0.W;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)(pFVar3->DefaultValue).field0_0x0._s_0.Y,
                (float)(pFVar3->DefaultValue).field0_0x0._s_0.X);
  *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) =
       CONCAT44((float)dVar2,(float)dVar1);
  return __return_storage_ptr__;
}

// GetDisplayNameForMaterial @ 147efad50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FText * __cdecl
FMaterialAttributeDefinitionMap::GetDisplayNameForMaterial
          (FText *__return_storage_ptr__,FGuid *param_1,UMaterial *param_2)

{
  FMaterialAttributeDefintion *pFVar1;
  
  if (param_2 == (UMaterial *)0x0) {
    pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
    FText::FromString(__return_storage_ptr__,&pFVar1->AttributeName);
    return __return_storage_ptr__;
  }
  Find(&GMaterialPropertyAttributesMap,param_1);
  GetAttributeOverrideForMaterial(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetDisplayNameForMaterial @ 147efadd0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FText * __cdecl
FMaterialAttributeDefinitionMap::GetDisplayNameForMaterial
          (FText *__return_storage_ptr__,EMaterialProperty param_1,UMaterial *param_2)

{
  FMaterialAttributeDefintion *pFVar1;
  
  if (param_2 == (UMaterial *)0x0) {
    pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
    FText::FromString(__return_storage_ptr__,&pFVar1->AttributeName);
    return __return_storage_ptr__;
  }
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  GetAttributeOverrideForMaterial(__return_storage_ptr__,&pFVar1->AttributeID,param_2);
  return __return_storage_ptr__;
}

// GetID @ 147efb190

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FGuid * __cdecl
FMaterialAttributeDefinitionMap::GetID(FGuid *__return_storage_ptr__,EMaterialProperty param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FMaterialAttributeDefintion *pFVar4;
  
  pFVar4 = Find(&GMaterialPropertyAttributesMap,param_1);
  uVar1 = (pFVar4->AttributeID).B;
  uVar2 = (pFVar4->AttributeID).C;
  uVar3 = (pFVar4->AttributeID).D;
  __return_storage_ptr__->A = (pFVar4->AttributeID).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetIndex @ 147efb1c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

int __cdecl FMaterialAttributeDefinitionMap::GetIndex(FGuid *param_1)

{
  EMaterialProperty EVar1;
  EMaterialProperty EVar2;
  FMaterialAttributeDefintion *pFVar3;
  ForAnyElementType FVar4;
  
  pFVar3 = Find(&GMaterialPropertyAttributesMap,param_1);
  if (pFVar3 == (FMaterialAttributeDefintion *)0x0) {
    return -1;
  }
  EVar1 = pFVar3->Property;
  if (EVar1 == MP_CustomOutput) {
    if (GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data !=
        GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
        (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90) {
      FVar4 = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance;
      do {
        if ((((pFVar3->AttributeID).D == *(uint *)(FVar4.Data + 0xc) &&
             (pFVar3->AttributeID).C == *(uint *)(FVar4.Data + 8)) &&
            (pFVar3->AttributeID).B == *(uint *)(FVar4.Data + 4)) &&
            (pFVar3->AttributeID).A == *(uint *)FVar4.Data) {
          return (int)(((longlong)FVar4.Data -
                       (longlong)
                       GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data) /
                      0x90) + 0x23;
        }
        FVar4.Data = FVar4.Data + 0x90;
      } while (FVar4.Data !=
               GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
               (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90);
    }
    return 0x22;
  }
  EVar2 = ~MP_EmissiveColor;
  if (EVar1 != MP_MAX) {
    EVar2 = EVar1;
  }
  return EVar2;
}

// GetIndex @ 147efb2b0

int __cdecl FMaterialAttributeDefinitionMap::GetIndex(EMaterialProperty param_1)

{
  EMaterialProperty EVar1;
  
  EVar1 = ~MP_EmissiveColor;
  if ((param_1 != MP_CustomOutput) && (EVar1 = ~MP_EmissiveColor, param_1 != MP_MAX)) {
    EVar1 = param_1;
  }
  return EVar1;
}

// GetPinNameFromShadingModelField @ 147efd460

FString * __cdecl
FMaterialAttributeDefinitionMap::GetPinNameFromShadingModelField
          (FString *__return_storage_ptr__,FMaterialShadingModelField param_1,
          TArray<TKeyValuePair<EMaterialShadingModel,FString>,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 local_res10 [16];
  FString *local_res20;
  
  uVar7 = (uint)param_1.ShadingModelField;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar9 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)iVar9 * 0x18;
  local_res20 = param_3;
  while( true ) {
    if (param_2->ArrayNum != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TKeyValuePair<enum_EMaterialShadingModel,FString>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pFVar4 = local_res20;
    if (pFVar6 == pFVar1) break;
    if ((uVar7 >> ((byte)*pFVar6 & 0x1f) & 1) != 0) {
      if (1 < (__return_storage_ptr__->Data).ArrayNum) {
        ::FString::AppendChars(__return_storage_ptr__," or ",4);
      }
      iVar8 = *(int *)(pFVar6 + 0x10) + -1;
      if (*(int *)(pFVar6 + 0x10) == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)(pFVar6 + 8),iVar8);
      uVar7 = uVar7 & ~(1 << (*(ushort *)pFVar6 & 0x1f));
    }
    pFVar6 = pFVar6 + 0x18;
  }
  uVar5 = (ulonglong)uVar7 - ((ulonglong)(uVar7 >> 1) & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  if ((char)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\0') {
    if (1 < (__return_storage_ptr__->Data).ArrayNum) {
      ::FString::AppendChars(__return_storage_ptr__," or ",4);
    }
    iVar8 = (pFVar4->Data).ArrayNum;
    iVar9 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar9);
  }
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8766178897113907767>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                       ,0x237,"!OutPinName.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetProperty @ 147efdb60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

EMaterialProperty __cdecl FMaterialAttributeDefinitionMap::GetProperty(FGuid *param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  if (pFVar1 != (FMaterialAttributeDefintion *)0x0) {
    return pFVar1->Property;
  }
  return MP_MAX;
}

// GetShaderFrequency @ 147efdce0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

EShaderFrequency __cdecl FMaterialAttributeDefinitionMap::GetShaderFrequency(FGuid *param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  return pFVar1->ShaderFrequency;
}

// GetShaderFrequency @ 147efdd10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

EShaderFrequency __cdecl
FMaterialAttributeDefinitionMap::GetShaderFrequency(EMaterialProperty param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  return pFVar1->ShaderFrequency;
}

// GetValueType @ 147eff130

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

EMaterialValueType __cdecl FMaterialAttributeDefinitionMap::GetValueType(FGuid *param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  return pFVar1->ValueType;
}

// GetValueType @ 147eff160

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

EMaterialValueType __cdecl FMaterialAttributeDefinitionMap::GetValueType(EMaterialProperty param_1)

{
  FMaterialAttributeDefintion *pFVar1;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_1);
  return pFVar1->ValueType;
}

// InitializeAttributeMap @ 147f00240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FMaterialAttributeDefinitionMap::InitializeAttributeMap(FMaterialAttributeDefinitionMap *this)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  UClass *pUVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  FLLMScope local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_d88 [2];
  FGuid local_d80;
  FGuid local_d70;
  FGuid local_d60;
  FGuid local_d50;
  FGuid local_d40;
  FGuid local_d30;
  FGuid local_d20;
  FGuid local_d10;
  FGuid local_d00;
  FGuid local_cf0;
  FGuid local_ce0;
  FGuid local_cd0;
  FGuid local_cc0;
  FGuid local_cb0;
  FGuid local_ca0;
  FGuid local_c90;
  FGuid local_c80;
  FGuid local_c70;
  FGuid local_c60;
  FGuid local_c50;
  FGuid local_c40;
  FGuid local_c30;
  FGuid local_c20;
  FGuid local_c10;
  FGuid local_c00;
  FGuid local_bf0;
  FGuid local_be0;
  undefined4 local_bd0;
  undefined4 uStack_bcc;
  undefined4 uStack_bc8;
  undefined4 uStack_bc4;
  FGuid local_bc0;
  FGuid local_bb0;
  FGuid local_ba0;
  FGuid local_b90;
  FGuid local_b80;
  FGuid local_b70;
  FGuid local_b60;
  FGuid local_b50;
  undefined4 local_b40;
  undefined4 uStack_b3c;
  undefined4 uStack_b38;
  undefined4 uStack_b34;
  undefined4 local_b30;
  undefined4 uStack_b2c;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined4 local_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  FGuid local_b10;
  FGuid local_b00;
  FGuid local_af0;
  FGuid local_ae0;
  FGuid local_ad0;
  undefined4 local_ac0;
  undefined1 local_abc [8];
  undefined1 local_ab4 [12];
  FMemScope local_aa8;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  FString local_a00;
  FString local_9f0;
  FString local_9e0;
  FString local_9d0;
  FString local_9c0;
  FString local_9b0;
  FString local_9a0;
  FString local_990;
  FString local_980;
  FString local_970;
  FString local_960;
  FString local_950;
  FString local_940;
  FString local_930;
  FString local_920;
  undefined4 *local_910;
  undefined8 *local_908;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  FString local_8c0;
  FString local_8b0;
  FString local_8a0;
  FString local_890;
  undefined4 *local_880;
  undefined8 *local_878;
  undefined4 *local_870;
  undefined8 *local_868;
  undefined4 *local_860;
  undefined8 *local_858;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString local_740;
  FString local_730;
  FString local_720;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  ForAnyElementType local_6d8;
  int local_6cc;
  undefined4 local_6c8;
  undefined8 local_6c0;
  undefined1 local_6b8;
  undefined4 local_6b4;
  undefined8 local_6b0;
  undefined1 local_6a8;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  ForAnyElementType local_668;
  int local_65c;
  undefined4 local_658;
  undefined8 local_650;
  undefined1 local_648;
  undefined4 local_644;
  undefined8 local_640;
  undefined1 local_638;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  ForAnyElementType local_5f8;
  int local_5ec;
  undefined4 local_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined4 local_5d4;
  undefined8 local_5d0;
  undefined1 local_5c8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  ForAnyElementType local_588;
  int local_57c;
  undefined4 local_578;
  undefined8 local_570;
  undefined1 local_568;
  undefined4 local_564;
  undefined8 local_560;
  undefined1 local_558;
  TVector4<double>_u_0 local_548;
  TVector4<double>_u_0 local_528;
  TVector4<double>_u_0 local_508;
  TVector4<double>_u_0 local_4e8;
  TVector4<double>_u_0 local_4c8;
  TVector4<double>_u_0 local_4a8;
  TVector4<double>_u_0 local_488;
  TVector4<double>_u_0 local_468;
  TVector4<double>_u_0 local_448;
  TVector4<double>_u_0 local_428;
  TVector4<double>_u_0 local_408;
  TVector4<double>_u_0 local_3e8;
  TVector4<double>_u_0 local_3c8;
  TVector4<double>_u_0 local_3a8;
  TVector4<double>_u_0 local_388;
  TVector4<double>_u_0 local_368;
  TVector4<double>_u_0 local_348;
  TVector4<double>_u_0 local_328;
  TVector4<double>_u_0 local_308;
  TVector4<double>_u_0 local_2e8;
  TVector4<double>_u_0 local_2c8;
  TVector4<double>_u_0 local_2a8;
  TVector4<double>_u_0 local_288;
  TVector4<double>_u_0 local_268;
  TVector4<double>_u_0 local_248;
  TVector4<double>_u_0 local_228;
  TVector4<double>_u_0 local_208;
  TVector4<double>_u_0 local_1e8;
  TVector4<double>_u_0 local_1c8;
  TVector4<double>_u_0 local_1a8;
  TVector4<double>_u_0 local_188;
  TVector4<double>_u_0 local_168;
  TVector4<double>_u_0 local_148;
  TVector4<double>_u_0 local_128;
  TVector4<double>_u_0 local_108;
  TVector4<double>_u_0 local_e8;
  TVector4<double>_u_0 local_c8;
  TVector4<double>_u_0 local_a8;
  TVector4<double>_u_0 local_88;
  TVector4<double>_u_0 local_68;
  
  if ((this->bIsInitialized != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                         ,0x145,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bIsInitialized = true;
  FLLMScope::FLLMScope(local_res8,Materials,false,None,Default,true);
  FMemScope::FMemScope(&local_aa8,Materials,true);
  for (lVar1 = 0x3f; 0x33UL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  iVar11 = 1 << ((byte)lVar1 & 0x1f);
  local_ac0 = (undefined4)lVar1;
  iVar10 = *(int *)&(this->AttributeMap).field_0x48;
  if ((iVar10 < iVar11) || (iVar11 < iVar10)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
    TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this,0,*(int *)&(this->AttributeMap).field_0x8);
  puVar9 = &(this->AttributeMap).field_0xc;
  *(undefined4 *)&(this->AttributeMap).field_0x8 = 0;
  if (*(int *)puVar9 != 0x24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0x24,(ForAnyElementType *)this,0,(int *)puVar9);
  }
  *(undefined4 *)&(this->AttributeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AttributeMap).field_0x34 = 0;
  iVar10 = *(int *)&(this->AttributeMap).field_0x2c;
  *(undefined4 *)&(this->AttributeMap).field_0x28 = 0;
  if ((iVar10 < 0x40) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->AttributeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AttributeMap).field_0x10,0);
  }
  if (bVar7) {
    *(int *)&(this->AttributeMap).field_0x48 = iVar11;
    TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
    ::Rehash(this);
  }
  local_528._s_0.X = 0.0;
  local_528._s_0.Y = 0.0;
  local_528._s_0.Z = 0.0;
  local_528._s_0.W = 0.0;
  ::FString::FString(&local_a60,L"BaseColor");
  local_d20.A = 0x69b8d336;
  local_d20.B = 0x16ed4d49;
  local_d20.C = 0x9aa49729;
  local_d20.D = 0x2f050f7a;
  Add(this,&local_d20,&local_a60,MP_BaseColor,MCT_Float3,(TVector4<double> *)&local_528._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a60.Data.AllocatorInstance.Data);
  }
  local_c8._s_0.X = 0.0;
  local_c8._s_0.Y = 0.0;
  local_c8._s_0.Z = 0.0;
  local_c8._s_0.W = 0.0;
  ::FString::FString(&local_a50,L"Metallic");
  local_d10.A = 0x57c3a161;
  local_d10.B = 0x7f064296;
  local_d10.C = 0xb00b24a5;
  local_d10.D = 0xa496f34c;
  Add(this,&local_d10,&local_a50,MP_Metallic,MCT_Float,(TVector4<double> *)&local_c8._s_0,SF_Pixel,
      -1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a50.Data.AllocatorInstance.Data);
  }
  dVar4 = _UNK_150978bb8;
  dVar3 = ___xmm_00000000000000003fe0000000000000;
  local_a8._s_0.X = ___xmm_00000000000000003fe0000000000000;
  local_a8._s_0.Y = _UNK_150978bb8;
  local_a8._s_0.Z = 0.0;
  local_a8._s_0.W = 0.0;
  ::FString::FString(&local_a40,L"Specular");
  local_d00.A = 0x9fdab399;
  local_d00.B = 0x25564cc9;
  local_d00.C = 0x8cd2d572;
  local_d00.D = 0xc12c8fed;
  Add(this,&local_d00,&local_a40,MP_Specular,MCT_Float,(TVector4<double> *)&local_a8._s_0,SF_Pixel,
      -1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a40.Data.AllocatorInstance.Data);
  }
  local_88._s_0.X = dVar3;
  local_88._s_0.Y = dVar4;
  local_88._s_0.Z = 0.0;
  local_88._s_0.W = 0.0;
  ::FString::FString(&local_a30,L"Roughness");
  local_cf0.A = 0xd1dd967c;
  local_cf0.B = 0x4cad47d3;
  local_cf0.C = 0x9e6346fb;
  local_cf0.D = 0x8ecf210;
  Add(this,&local_cf0,&local_a30,MP_Roughness,MCT_Float,(TVector4<double> *)&local_88._s_0,SF_Pixel,
      -1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a30.Data.AllocatorInstance.Data);
  }
  local_548._s_0.X = 0.0;
  local_548._s_0.Y = 0.0;
  local_548._s_0.Z = 0.0;
  local_548._s_0.W = 0.0;
  ::FString::FString(&local_a20,L"Anisotropy");
  local_ce0.A = 0x55e2b4fb;
  local_ce0.B = 0xc1c54db2;
  local_ce0.C = 0x9f11875f;
  local_ce0.D = 0x7231eb1e;
  Add(this,&local_ce0,&local_a20,MP_Anisotropy,MCT_Float,(TVector4<double> *)&local_548._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Data.AllocatorInstance.Data);
  }
  local_2c8._s_0.X = 0.0;
  local_2c8._s_0.Y = 0.0;
  local_2c8._s_0.Z = 0.0;
  local_2c8._s_0.W = 0.0;
  ::FString::FString(&local_a10,L"EmissiveColor");
  local_d30.A = 0xb769b54d;
  local_d30.B = 0xd08d4440;
  local_d30.C = 0xabc21ba6;
  local_d30.D = 0xcd27d0e2;
  Add(this,&local_d30,&local_a10,MP_EmissiveColor,MCT_Float3,(TVector4<double> *)&local_2c8._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a10.Data.AllocatorInstance.Data);
  }
  dVar4 = _UNK_150689518;
  dVar3 = ___xmm_00000000000000003ff0000000000000;
  local_508._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_508._s_0.Y = _UNK_150689518;
  local_508._s_0.Z = 0.0;
  local_508._s_0.W = 0.0;
  ::FString::FString(&local_a00,L"Opacity");
  local_cc0.A = 0xb8f50fba;
  local_cc0.B = 0x2a754ec1;
  local_cc0.C = 0x9ef672cf;
  local_cc0.D = 0xeb27bf51;
  Add(this,&local_cc0,&local_a00,MP_Opacity,MCT_Float,(TVector4<double> *)&local_508._s_0,SF_Pixel,
      -1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a00.Data.AllocatorInstance.Data);
  }
  local_4e8._s_0.X = dVar3;
  local_4e8._s_0.Y = dVar4;
  local_4e8._s_0.Z = 0.0;
  local_4e8._s_0.W = 0.0;
  ::FString::FString(&local_9f0,L"OpacityMask");
  local_cb0.A = 0x679ffb17;
  local_cb0.B = 0x2bb5422c;
  local_cb0.C = 0xad520483;
  local_cb0.D = 0x166e0c75;
  Add(this,&local_cb0,&local_9f0,MP_OpacityMask,MCT_Float,(TVector4<double> *)&local_4e8._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_9f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f0.Data.AllocatorInstance.Data);
  }
  local_4c8._s_0.Z = dVar3;
  local_4c8._s_0.W = dVar4;
  local_4c8._s_0.X = 0.0;
  local_4c8._s_0.Y = 0.0;
  ::FString::FString(&local_9e0,L"Normal");
  local_ca0.A = 0xfa2821a;
  local_ca0.B = 0x200f4a4a;
  local_ca0.C = 0xb719b789;
  local_ca0.D = 0xc1259c64;
  Add(this,&local_ca0,&local_9e0,MP_Normal,MCT_Float3,(TVector4<double> *)&local_4c8._s_0,SF_Pixel,
      -1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_9e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e0.Data.AllocatorInstance.Data);
  }
  local_4a8._s_0.X = dVar3;
  local_4a8._s_0.Y = dVar4;
  local_4a8._s_0.Z = 0.0;
  local_4a8._s_0.W = 0.0;
  ::FString::FString(&local_9d0,L"Tangent");
  local_c90.A = 0xd5f8e9cf;
  local_c90.B = 0xcdc3468d;
  local_c90.C = 0xb10e4465;
  local_c90.D = 0x596a7bba;
  Add(this,&local_c90,&local_9d0,MP_Tangent,MCT_Float3,(TVector4<double> *)&local_4a8._s_0,SF_Pixel,
      -1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_9d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d0.Data.AllocatorInstance.Data);
  }
  local_488._s_0.X = 0.0;
  local_488._s_0.Y = 0.0;
  local_488._s_0.Z = 0.0;
  local_488._s_0.W = 0.0;
  ::FString::FString(&local_9c0,L"WorldPositionOffset");
  local_c80.A = 0xf905f895;
  local_c80.B = 0xd5814314;
  local_c80.C = 0x916d2434;
  local_c80.D = 0x8c40ce9e;
  Add(this,&local_c80,&local_9c0,MP_WorldPositionOffset,MCT_Float3,
      (TVector4<double> *)&local_488._s_0,SF_Vertex,-1,false,
      (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
  }
  local_468._s_0.X = ___xmm_00000000000000003fe0000000000000;
  local_468._s_0.Y = _UNK_150978bb8;
  local_468._s_0.Z = 0.0;
  local_468._s_0.W = 0.0;
  ::FString::FString(&local_9b0,L"Displacement");
  local_c70.A = 0x199a7166;
  local_c70.B = 0xc67041dc;
  local_c70.C = 0xa68ead0d;
  local_c70.D = 0x7017d0ad;
  Add(this,&local_c70,&local_9b0,MP_Displacement,MCT_Float,(TVector4<double> *)&local_468._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
  }
  local_448._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_448._s_0.Y = _UNK_150689688;
  local_448._s_0.Z = dVar3;
  local_448._s_0.W = dVar4;
  ::FString::FString(&local_9a0,L"SubsurfaceColor");
  local_c60.A = 0x5b8fc679;
  local_c60.B = 0x51ce4082;
  local_c60.C = 0x9d777bee;
  local_c60.D = 0xf4f72c44;
  Add(this,&local_c60,&local_9a0,MP_SubsurfaceColor,MCT_Float3,(TVector4<double> *)&local_448._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
  }
  local_428._s_0.X = dVar3;
  local_428._s_0.Y = dVar4;
  local_428._s_0.Z = 0.0;
  local_428._s_0.W = 0.0;
  ::FString::FString(&local_990,L"CustomData0");
  local_c50.A = 0x9e502e69;
  local_c50.B = 0x3c8f48fa;
  local_c50.C = 0x94645cfd;
  local_c50.D = 0x28e5428d;
  Add(this,&local_c50,&local_990,MP_CustomData0,MCT_Float,(TVector4<double> *)&local_428._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_990.Data.AllocatorInstance.Data);
  }
  local_408._s_0.X = ___xmm_00000000000000003fb999999999999a;
  local_408._s_0.Y = _UNK_15076ac58;
  local_408._s_0.Z = 0.0;
  local_408._s_0.W = 0.0;
  ::FString::FString(&local_980,L"CustomData1");
  local_c40.A = 0xbe4f2ffd;
  local_c40.B = 0x12fc4296;
  local_c40.C = 0xb0124eea;
  local_c40.D = 0x12c28d92;
  Add(this,&local_c40,&local_980,MP_CustomData1,MCT_Float,(TVector4<double> *)&local_408._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_980.Data.AllocatorInstance.Data);
  }
  local_3e8._s_0.X = dVar3;
  local_3e8._s_0.Y = dVar4;
  local_3e8._s_0.Z = 0.0;
  local_3e8._s_0.W = 0.0;
  ::FString::FString(&local_970,L"AmbientOcclusion");
  local_c30.A = 0xe8ebd0ad;
  local_c30.B = 0xb1654cbe;
  local_c30.C = 0xb079c3a8;
  local_c30.D = 0xb39b9f15;
  Add(this,&local_c30,&local_970,MP_AmbientOcclusion,MCT_Float,(TVector4<double> *)&local_3e8._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_970.Data.AllocatorInstance.Data);
  }
  local_3c8._s_0.X = dVar3;
  local_3c8._s_0.Y = dVar4;
  local_3c8._s_0.Z = 0.0;
  local_3c8._s_0.W = 0.0;
  ::FString::FString(&local_960,L"Refraction");
  local_c20.A = 0xd0b0fa03;
  local_c20.B = 0x14d74455;
  local_c20.C = 0xa851bac5;
  local_c20.D = 0x81a0788b;
  Add(this,&local_c20,&local_960,MP_Refraction,MCT_Float3,(TVector4<double> *)&local_3c8._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_960.Data.AllocatorInstance.Data);
  }
  local_3a8._s_0.X = 0.0;
  local_3a8._s_0.Y = 0.0;
  local_3a8._s_0.Z = 0.0;
  local_3a8._s_0.W = 0.0;
  ::FString::FString(&local_950,L"PixelDepthOffset");
  local_c10.A = 0xac97ec3;
  local_c10.B = 0xe3d047ba;
  local_c10.C = 0xb610167d;
  local_c10.D = 0xc4d919ff;
  Add(this,&local_c10,&local_950,MP_PixelDepthOffset,MCT_Float,(TVector4<double> *)&local_3a8._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_950.Data.AllocatorInstance.Data);
  }
  local_388._s_0.X = 0.0;
  local_388._s_0.Y = 0.0;
  local_388._s_0.Z = 0.0;
  local_388._s_0.W = 0.0;
  ::FString::FString(&local_940,L"ShadingModel");
  local_c00.A = 0xd9423fff;
  local_c00.B = 0xd77e4d82;
  local_c00.C = 0x8ff9cf5e;
  local_c00.D = 0x55d1255;
  Add(this,&local_c00,&local_940,MP_ShadingModel,MCT_ShadingModel,
      (TVector4<double> *)&local_388._s_0,SF_Pixel,-1,false,CompileShadingModelBlendFunction);
  if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.Data.AllocatorInstance.Data);
  }
  local_368._s_0.X = ___xmm_00000000000000003f847ae140000000;
  local_368._s_0.Y = _UNK_15199bd98;
  local_368._s_0.Z = 0.0;
  local_368._s_0.W = 0.0;
  ::FString::FString(&local_930,L"SurfaceThickness");
  local_bf0.A = 0x42bdd2e0;
  local_bf0.B = 0xbe714189;
  local_bf0.C = 0xa0984bc3;
  local_bf0.D = 0xdd0be872;
  Add(this,&local_bf0,&local_930,MP_SurfaceThickness,MCT_Float,(TVector4<double> *)&local_368._s_0,
      SF_Pixel,-1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_930.Data.AllocatorInstance.Data);
  }
  local_348._s_0.X = 0.0;
  local_348._s_0.Y = 0.0;
  local_348._s_0.Z = 0.0;
  local_348._s_0.W = 0.0;
  ::FString::FString(&local_920,L"FrontMaterial");
  local_be0.A = 0x5973a03e;
  local_be0.B = 0x13a74e08;
  local_be0.C = 0x92d0cedd;
  local_be0.D = 0xf2936cf8;
  Add(this,&local_be0,&local_920,MP_FrontMaterial,MCT_Substrate,(TVector4<double> *)&local_348._s_0,
      SF_Pixel,-1,false,CompileSubstrateBlendFunction);
  if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_aa0,L"MaterialAttributes");
  local_bd0 = 0xe0ed040b;
  uStack_bcc = 0x82794d93;
  uStack_bc8 = 0xbd2d59b2;
  uStack_bc4 = 0xa5bbf41c;
  local_res10[0] = 0x21;
  if (*(int *)&(this->AttributeMap).field_0x8 != *(int *)&(this->AttributeMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AttributeMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AttributeMap).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->AttributeMap).field_0x48 - 1U & 0x21) * 4
                     );
    if (iVar10 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttributeMap + (longlong)iVar10 * 0x90) == 0x21) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttributeMap.Contains(Property)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                             ,0x18e,L"Tried to add duplicate material property.");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this->AttributeMap + 0x80 + (longlong)iVar10 * 0x90);
      } while (iVar10 != -1);
    }
  }
  FVar6.Data = local_aa0.Data.AllocatorInstance.Data;
  uVar5 = local_res10[0];
  local_698 = CONCAT44(uStack_bcc,local_bd0);
  uStack_690 = CONCAT44(uStack_bc4,uStack_bc8);
  local_678 = 0;
  uStack_670 = 0;
  local_688 = 0;
  uStack_680 = 0;
  local_668.Data = (FScriptContainerElement *)0x0;
  if (local_aa0.Data.ArrayNum == 0) {
    local_65c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_aa0.Data.ArrayNum,0,&local_668,local_aa0.Data.ArrayNum,&local_65c);
    memcpy(local_668.Data,FVar6.Data,(longlong)local_aa0.Data.ArrayNum * 2);
  }
  local_910 = local_res10;
  local_658 = uVar5;
  local_908 = &local_698;
  local_650 = 0x800;
  local_648 = 3;
  local_644 = 0xffffffff;
  local_640 = 0;
  local_638 = 1;
  TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EMaterialProperty_const_&,FMaterialAttributeDefintion_&&>_>
            (this,(TPairInitializer<EMaterialProperty_const_&,FMaterialAttributeDefintion_&&> *)
                  local_abc,(bool *)&local_910);
  if (local_668.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data);
  }
  if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
  }
  local_328._s_0.X = 0.0;
  local_328._s_0.Y = 0.0;
  local_328._s_0.Z = 0.0;
  local_328._s_0.W = 0.0;
  ::FString::FString(&local_900,L"CustomizedUV0");
  local_bc0.A = 0xd30ec284;
  local_bc0.B = 0xe13a4160;
  local_bc0.C = 0x87bb5230;
  local_bc0.D = 0x2ed115dc;
  Add(this,&local_bc0,&local_900,MP_CustomizedUVs0,MCT_Float2,(TVector4<double> *)&local_328._s_0,
      SF_Vertex,0,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_900.Data.AllocatorInstance.Data);
  }
  local_308._s_0.X = 0.0;
  local_308._s_0.Y = 0.0;
  local_308._s_0.Z = 0.0;
  local_308._s_0.W = 0.0;
  ::FString::FString(&local_8f0,L"CustomizedUV1");
  local_bb0.A = 0xc67b093c;
  local_bb0.B = 0x2a5249aa;
  local_bb0.C = 0xabc97ade;
  local_bb0.D = 0x4a1f49c5;
  Add(this,&local_bb0,&local_8f0,MP_CustomizedUVs1,MCT_Float2,(TVector4<double> *)&local_308._s_0,
      SF_Vertex,1,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
  }
  local_2e8._s_0.X = 0.0;
  local_2e8._s_0.Y = 0.0;
  local_2e8._s_0.Z = 0.0;
  local_2e8._s_0.W = 0.0;
  ::FString::FString(&local_8e0,L"CustomizedUV2");
  local_ba0.A = 0x85c15b24;
  local_ba0.B = 0xf3e047ca;
  local_ba0.C = 0x85856872;
  local_ba0.D = 0x1ae0f4f;
  Add(this,&local_ba0,&local_8e0,MP_CustomizedUVs2,MCT_Float2,(TVector4<double> *)&local_2e8._s_0,
      SF_Vertex,2,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
  }
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_68._s_0.Z = 0.0;
  local_68._s_0.W = 0.0;
  ::FString::FString(&local_8d0,L"CustomizedUV3");
  local_b90.A = 0x777819dc;
  local_b90.B = 0x31ae4676;
  local_b90.C = 0xb864ef77;
  local_b90.D = 0xb807e873;
  Add(this,&local_b90,&local_8d0,MP_CustomizedUVs3,MCT_Float2,(TVector4<double> *)&local_68._s_0,
      SF_Vertex,3,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
  }
  local_2a8._s_0.X = 0.0;
  local_2a8._s_0.Y = 0.0;
  local_2a8._s_0.Z = 0.0;
  local_2a8._s_0.W = 0.0;
  ::FString::FString(&local_8c0,L"CustomizedUV4");
  local_b80.A = 0xda63b233;
  local_b80.B = 0xddf44cad;
  local_b80.C = 0xb93d867b;
  local_b80.D = 0x8dafdbcc;
  Add(this,&local_b80,&local_8c0,MP_CustomizedUVs4,MCT_Float2,(TVector4<double> *)&local_2a8._s_0,
      SF_Vertex,4,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
  }
  local_288._s_0.X = 0.0;
  local_288._s_0.Y = 0.0;
  local_288._s_0.Z = 0.0;
  local_288._s_0.W = 0.0;
  ::FString::FString(&local_8b0,L"CustomizedUV5");
  local_b70.A = 0xc2f52b76;
  local_b70.B = 0x4a034388;
  local_b70.C = 0x89119528;
  local_b70.D = 0x2071b190;
  Add(this,&local_b70,&local_8b0,MP_CustomizedUVs5,MCT_Float2,(TVector4<double> *)&local_288._s_0,
      SF_Vertex,5,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
  }
  local_268._s_0.X = 0.0;
  local_268._s_0.Y = 0.0;
  local_268._s_0.Z = 0.0;
  local_268._s_0.W = 0.0;
  ::FString::FString(&local_8a0,L"CustomizedUV6");
  local_b60.A = 0x8214a8ca;
  local_b60.B = 0xcb944cf;
  local_b60.C = 0x9dfd78db;
  local_b60.D = 0xe48bb55f;
  Add(this,&local_b60,&local_8a0,MP_CustomizedUVs6,MCT_Float2,(TVector4<double> *)&local_268._s_0,
      SF_Vertex,6,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  local_248._s_0.X = 0.0;
  local_248._s_0.Y = 0.0;
  local_248._s_0.Z = 0.0;
  local_248._s_0.W = 0.0;
  ::FString::FString(&local_890,L"CustomizedUV7");
  local_b50.A = 0xd8f8d01f;
  local_b50.B = 0xc6f74715;
  local_b50.C = 0xa3cfb4ff;
  local_b50.D = 0x9ef51fac;
  Add(this,&local_b50,&local_890,MP_CustomizedUVs7,MCT_Float2,(TVector4<double> *)&local_248._s_0,
      SF_Vertex,7,false,(_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a90,L"DiffuseColor");
  local_b40 = 0x68934e1b;
  uStack_b3c = 0x70eb411b;
  uStack_b38 = 0x86df5aa5;
  uStack_b34 = 0xdf2f626c;
  local_res18[0] = 3;
  if (*(int *)&(this->AttributeMap).field_0x8 != *(int *)&(this->AttributeMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AttributeMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AttributeMap).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->AttributeMap).field_0x48 - 1U & 3) * 4);
    if (iVar10 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttributeMap + (longlong)iVar10 * 0x90) == 3) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttributeMap.Contains(Property)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                             ,0x18e,L"Tried to add duplicate material property.");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this->AttributeMap + 0x80 + (longlong)iVar10 * 0x90);
      } while (iVar10 != -1);
    }
  }
  FVar6.Data = local_a90.Data.AllocatorInstance.Data;
  uVar5 = local_res18[0];
  local_628 = CONCAT44(uStack_b3c,local_b40);
  uStack_620 = CONCAT44(uStack_b34,uStack_b38);
  local_608 = 0;
  uStack_600 = 0;
  local_618 = 0;
  uStack_610 = 0;
  local_5f8.Data = (FScriptContainerElement *)0x0;
  if (local_a90.Data.ArrayNum == 0) {
    local_5ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a90.Data.ArrayNum,0,&local_5f8,local_a90.Data.ArrayNum,&local_5ec);
    memcpy(local_5f8.Data,FVar6.Data,(longlong)local_a90.Data.ArrayNum * 2);
  }
  local_880 = local_res18;
  local_5e8 = uVar5;
  local_878 = &local_628;
  local_5e0 = 4;
  local_5d8 = 3;
  local_5d4 = 0xffffffff;
  local_5d0 = 0;
  local_5c8 = 1;
  TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EMaterialProperty_const_&,FMaterialAttributeDefintion_&&>_>
            (this,(TPairInitializer<EMaterialProperty_const_&,FMaterialAttributeDefintion_&&> *)
                  (local_abc + 4),(bool *)&local_880);
  if (local_5f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data);
  }
  if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a90.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a80,L"SpecularColor");
  local_b30 = 0xe89cbd84;
  uStack_b2c = 0x62ea48be;
  uStack_b28 = 0x80f88521;
  uStack_b24 = 0x2b0c403c;
  local_res20[0] = 4;
  if (*(int *)&(this->AttributeMap).field_0x8 != *(int *)&(this->AttributeMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AttributeMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AttributeMap).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->AttributeMap).field_0x48 - 1U & 4) * 4);
    if (iVar10 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttributeMap + (longlong)iVar10 * 0x90) == 4) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttributeMap.Contains(Property)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                             ,0x18e,L"Tried to add duplicate material property.");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this->AttributeMap + 0x80 + (longlong)iVar10 * 0x90);
      } while (iVar10 != -1);
    }
  }
  FVar6.Data = local_a80.Data.AllocatorInstance.Data;
  uVar5 = local_res20[0];
  local_5b8 = CONCAT44(uStack_b2c,local_b30);
  uStack_5b0 = CONCAT44(uStack_b24,uStack_b28);
  local_598 = 0;
  uStack_590 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_588.Data = (FScriptContainerElement *)0x0;
  if (local_a80.Data.ArrayNum == 0) {
    local_57c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a80.Data.ArrayNum,0,&local_588,local_a80.Data.ArrayNum,&local_57c);
    memcpy(local_588.Data,FVar6.Data,(longlong)local_a80.Data.ArrayNum * 2);
  }
  local_870 = local_res20;
  local_578 = uVar5;
  local_868 = &local_5b8;
  local_570 = 4;
  local_568 = 3;
  local_564 = 0xffffffff;
  local_560 = 0;
  local_558 = 1;
  TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EMaterialProperty_const_&,FMaterialAttributeDefintion_&&>_>
            (this,(TPairInitializer<EMaterialProperty_const_&,FMaterialAttributeDefintion_&&> *)
                  local_ab4,(bool *)&local_870);
  if (local_588.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data);
  }
  if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a80.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a70,L"Missing");
  local_b20 = 0x5bf6ba94;
  uStack_b1c = 0xa3264629;
  uStack_b18 = 0xa253a05b;
  uStack_b14 = 0xeabbb86;
  local_d88[0] = 0x23;
  if (*(int *)&(this->AttributeMap).field_0x8 != *(int *)&(this->AttributeMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->AttributeMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AttributeMap).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->AttributeMap).field_0x48 - 1U & 0x23) * 4
                     );
    if (iVar10 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->AttributeMap + (longlong)iVar10 * 0x90) == 0x23) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AttributeMap.Contains(Property)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                             ,0x18e,L"Tried to add duplicate material property.");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)&this->AttributeMap + 0x80 + (longlong)iVar10 * 0x90);
      } while (iVar10 != -1);
    }
  }
  FVar6.Data = local_a70.Data.AllocatorInstance.Data;
  uVar5 = local_d88[0];
  local_708 = CONCAT44(uStack_b1c,local_b20);
  uStack_700 = CONCAT44(uStack_b14,uStack_b18);
  local_6e8 = 0;
  uStack_6e0 = 0;
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_6d8.Data = (FScriptContainerElement *)0x0;
  if (local_a70.Data.ArrayNum == 0) {
    local_6cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a70.Data.ArrayNum,0,&local_6d8,local_a70.Data.ArrayNum,&local_6cc);
    memcpy(local_6d8.Data,FVar6.Data,(longlong)local_a70.Data.ArrayNum * 2);
  }
  local_860 = local_d88;
  local_6c8 = uVar5;
  local_858 = &local_708;
  local_6c0 = 0xf;
  local_6b8 = 3;
  local_6b4 = 0xffffffff;
  local_6b0 = 0;
  local_6a8 = 1;
  TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EMaterialProperty_const_&,FMaterialAttributeDefintion_&&>_>
            (this,(TPairInitializer<EMaterialProperty_const_&,FMaterialAttributeDefintion_&&> *)
                  (local_ab4 + 4),(bool *)&local_860);
  if (local_6d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data);
  }
  if (local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a70.Data.AllocatorInstance.Data);
  }
  local_228._s_0.X = 0.0;
  local_228._s_0.Y = 0.0;
  local_228._s_0.Z = 0.0;
  local_228._s_0.W = 0.0;
  ::FString::FString(&local_850,L"WorldDisplacement");
  local_b10.A = 0x2091eca2;
  local_b10.B = 0xb59248ee;
  local_b10.C = 0x8e2cd578;
  local_b10.D = 0xd371926d;
  Add(this,&local_b10,&local_850,MP_WorldDisplacement_DEPRECATED,MCT_Float3,
      (TVector4<double> *)&local_228._s_0,SF_Vertex,-1,true,
      (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_850.Data.AllocatorInstance.Data);
  }
  local_208._s_0.X = dVar3;
  local_208._s_0.Y = dVar4;
  local_208._s_0.Z = 0.0;
  local_208._s_0.W = 0.0;
  ::FString::FString(&local_840,L"TessellationMultiplier");
  local_b00.A = 0xa0119d44;
  local_b00.B = 0xc456450d;
  local_b00.C = 0x9c39c933;
  local_b00.D = 0x1f72d8d1;
  Add(this,&local_b00,&local_840,MP_TessellationMultiplier_DEPRECATED,MCT_Float,
      (TVector4<double> *)&local_208._s_0,SF_Vertex,-1,true,
      (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_840.Data.AllocatorInstance.Data);
  }
  local_1e8._s_0.Z = dVar3;
  local_1e8._s_0.W = dVar4;
  local_1e8._s_0.X = 0.0;
  local_1e8._s_0.Y = 0.0;
  ::FString::FString(&local_820,"GetBentNormal");
  ::FString::FString(&local_830,"BentNormal");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionBentNormalCustomOutput_NoRegister();
  local_af0.A = 0xfbd7b46e;
  local_af0.B = 0xb1234824;
  local_af0.C = 0xbde76b23;
  local_af0.D = 0x609f984c;
  AddCustomAttribute(&local_af0,pUVar8,&local_830,&local_820,0,MCT_Float3,
                     (TVector4<double> *)&local_1e8._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_830.Data.AllocatorInstance.Data);
  }
  if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.Data.AllocatorInstance.Data);
  }
  local_1c8._s_0.Z = dVar3;
  local_1c8._s_0.W = dVar4;
  local_1c8._s_0.X = 0.0;
  local_1c8._s_0.Y = 0.0;
  ::FString::FString(&local_800,"ClearCoatBottomNormal");
  ::FString::FString(&local_810,"ClearCoatBottomNormal");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister();
  local_ae0.A = 0xaa3d5c04;
  local_ae0.B = 0x16294716;
  local_ae0.C = 0xbbdec869;
  local_ae0.D = 0x6a27dd72;
  AddCustomAttribute(&local_ae0,pUVar8,&local_810,&local_800,0,MCT_Float3,
                     (TVector4<double> *)&local_1c8._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_810.Data.AllocatorInstance.Data);
  }
  if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.Data.AllocatorInstance.Data);
  }
  local_1a8._s_0.X = 0.0;
  local_1a8._s_0.Y = 0.0;
  local_1a8._s_0.Z = 0.0;
  local_1a8._s_0.W = 0.0;
  ::FString::FString(&local_7e0,"GetTangentOutput");
  ::FString::FString(&local_7f0,"CustomEyeTangent");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionTangentOutput_NoRegister();
  local_ad0.A = 0x8eab2cb2;
  local_ad0.B = 0x73634a24;
  local_ad0.C = 0x8cd14f47;
  local_ad0.D = 0x3f9c8e55;
  AddCustomAttribute(&local_ad0,pUVar8,&local_7f0,&local_7e0,0,MCT_Float3,
                     (TVector4<double> *)&local_1a8._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
  }
  if (local_7e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e0.Data.AllocatorInstance.Data);
  }
  local_188._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_188._s_0.Y = _UNK_150689678;
  local_188._s_0.Z = ___xmm_00000000000000003fe0000000000000;
  local_188._s_0.W = _UNK_150978bb8;
  ::FString::FString(&local_7c0,"GetThinTranslucentMaterialOutput");
  ::FString::FString(&local_7d0,"TransmittanceColor");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister();
  local_d80.A = 0xf2d8c70e;
  local_d80.B = 0x42eca0d1;
  local_d80.C = 0x4652d0ad;
  local_d80.D = 0xb785a065;
  AddCustomAttribute(&local_d80,pUVar8,&local_7d0,&local_7c0,0,MCT_Float3,
                     (TVector4<double> *)&local_188._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
  }
  if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
  }
  local_168._s_0.X = dVar3;
  local_168._s_0.Y = dVar4;
  local_168._s_0.Z = 0.0;
  local_168._s_0.W = 0.0;
  ::FString::FString(&local_7a0,"GetThinTranslucentMaterialOutput");
  ::FString::FString(&local_7b0,"ThinTranslucentSurfaceCoverage");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister();
  local_d70.A = 0xaaa1d0e0;
  local_d70.B = 0xe312458e;
  local_d70.C = 0xf3556bad;
  local_d70.D = 0xa01277cd;
  AddCustomAttribute(&local_d70,pUVar8,&local_7b0,&local_7a0,1,MCT_Float,
                     (TVector4<double> *)&local_168._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
  }
  if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
  }
  local_148._s_0.X = dVar3;
  local_148._s_0.Y = dVar4;
  local_148._s_0.Z = 0.0;
  local_148._s_0.W = 0.0;
  ::FString::FString(&local_780,"GetFirstPersonOutput");
  ::FString::FString(&local_790,"FirstPersonInterpolationAlpha");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionFirstPersonOutput_NoRegister();
  local_d60.A = 0xdb380e51;
  local_d60.B = 0xbded47b6;
  local_d60.C = 0xb185a8be;
  local_d60.D = 0x8eacbfa4;
  AddCustomAttribute(&local_d60,pUVar8,&local_790,&local_780,0,MCT_Float,
                     (TVector4<double> *)&local_148._s_0,SF_Vertex,true,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_790.Data.AllocatorInstance.Data);
  }
  if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_780.Data.AllocatorInstance.Data);
  }
  local_128._s_0.X = 0.0;
  local_128._s_0.Y = 0.0;
  local_128._s_0.Z = 0.0;
  local_128._s_0.W = 0.0;
  ::FString::FString(&local_760,"MaterialCache");
  ::FString::FString(&local_770,"MaterialCache");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionMaterialCache_NoRegister();
  local_d50.A = 0x6b1237ca;
  local_d50.B = 0x1b8c43c2;
  local_d50.C = 0xa9c8a020;
  local_d50.D = 0x430f1258;
  AddCustomAttribute(&local_d50,pUVar8,&local_770,&local_760,0,MCT_Float4,
                     (TVector4<double> *)&local_128._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.Data.AllocatorInstance.Data);
  }
  if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_760.Data.AllocatorInstance.Data);
  }
  local_108._s_0.X = 0.0;
  local_108._s_0.Y = 0.0;
  local_108._s_0.Z = 0.0;
  local_108._s_0.W = 0.0;
  ::FString::FString(&local_740,"GetTemporalResponsivenessOutput");
  ::FString::FString(&local_750,"TemporalResponsiveness");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionTemporalResponsivenessOutput_NoRegister();
  local_d40.A = 0xb58cd3fb;
  local_d40.B = 0x8cb4411d;
  local_d40.C = 0x83c4c11e;
  local_d40.D = 0xf89953ad;
  AddCustomAttribute(&local_d40,pUVar8,&local_750,&local_740,0,MCT_Float,
                     (TVector4<double> *)&local_108._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_750.Data.AllocatorInstance.Data);
  }
  if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_740.Data.AllocatorInstance.Data);
  }
  local_e8._s_0.X = 0.0;
  local_e8._s_0.Y = 0.0;
  local_e8._s_0.Z = 0.0;
  local_e8._s_0.W = 0.0;
  ::FString::FString(&local_720,"GetMotionVectorWorldOffsetOutput");
  ::FString::FString(&local_730,"MotionVectorWorldOffset");
  pUVar8 = Z_Construct_UClass_UMaterialExpressionMotionVectorWorldOffsetOutput_NoRegister();
  local_cd0.A = 0x48a2ceab;
  local_cd0.B = 0x8e63473f;
  local_cd0.C = 0x821345bc;
  local_cd0.D = 0x6fa907f7;
  AddCustomAttribute(&local_cd0,pUVar8,&local_730,&local_720,0,MCT_Float3,
                     (TVector4<double> *)&local_e8._s_0,SF_Pixel,false,
                     (_func___cdecl_int_FMaterialCompiler_ptr_int_int_int *)0x0);
  if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_730.Data.AllocatorInstance.Data);
  }
  if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_720.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_aa8);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// IsAttributeInBitmask @ 147f02590

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl FMaterialAttributeDefinitionMap::IsAttributeInBitmask(ulong64 param_1,FGuid *param_2)

{
  FMaterialAttributeDefintion *pFVar1;
  ulonglong uVar2;
  EMaterialProperty EVar3;
  ForAnyElementType FVar4;
  
  pFVar1 = Find(&GMaterialPropertyAttributesMap,param_2);
  if (pFVar1 != (FMaterialAttributeDefintion *)0x0) {
    EVar3 = pFVar1->Property;
    if (EVar3 == MP_CustomOutput) {
      if (GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data !=
          GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
          (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90) {
        FVar4 = GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance;
        do {
          if ((((pFVar1->AttributeID).D == *(uint *)(FVar4.Data + 0xc) &&
               (pFVar1->AttributeID).C == *(uint *)(FVar4.Data + 8)) &&
              (pFVar1->AttributeID).B == *(uint *)(FVar4.Data + 4)) &&
              (pFVar1->AttributeID).A == *(uint *)FVar4.Data) {
            EVar3 = (int)(((longlong)FVar4.Data -
                          (longlong)
                          GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data) /
                         0x90) + MP_MAX;
            goto LAB_147f02666;
          }
          FVar4.Data = FVar4.Data + 0x90;
        } while (FVar4.Data !=
                 GMaterialPropertyAttributesMap.CustomAttributes.AllocatorInstance.Data +
                 (longlong)GMaterialPropertyAttributesMap.CustomAttributes.ArrayNum * 0x90);
      }
      EVar3 = MP_CustomOutput;
      goto LAB_147f02666;
    }
    if (EVar3 != MP_MAX) goto LAB_147f02666;
  }
  EVar3 = ~MP_EmissiveColor;
LAB_147f02666:
  uVar2 = 1L << ((byte)EVar3 & 0x3f);
  if (EVar3 == ~MP_EmissiveColor) {
    uVar2 = 0;
  }
  return (param_1 & uVar2) != 0;
}

// IsAttributeInBitmask @ 147f02690

bool __cdecl
FMaterialAttributeDefinitionMap::IsAttributeInBitmask(ulong64 param_1,EMaterialProperty param_2)

{
  ulonglong uVar1;
  EMaterialProperty EVar2;
  
  EVar2 = ~MP_EmissiveColor;
  if (1 < param_2 - MP_CustomOutput) {
    EVar2 = param_2;
  }
  uVar1 = 1L << ((byte)EVar2 & 0x3f);
  if (EVar2 == ~MP_EmissiveColor) {
    uVar1 = 0;
  }
  return (param_1 & uVar1) != 0;
}

