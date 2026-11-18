// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticStruct @ 149ee0cf0

UScriptStruct * __cdecl FPCGOverrideInstancedPropertyBag::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGOverrideInstancedPropertyBag.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGOverrideInstancedPropertyBag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag,
                         (UObject *)pUVar1,L"PCGOverrideInstancedPropertyBag");
  }
  return Z_Registration_Info_UScriptStruct_FPCGOverrideInstancedPropertyBag.OuterSingleton;
}

// IsPropertyOverridden @ 149f08240

bool __thiscall
FPCGOverrideInstancedPropertyBag::IsPropertyOverridden
          (FPCGOverrideInstancedPropertyBag *this,FProperty *param_1)

{
  bool bVar1;
  int iVar2;
  FPropertyBagPropertyDesc *pFVar3;
  ulong64 uVar4;
  FName FVar5;
  
  if (param_1 != (FProperty *)0x0) {
    bVar1 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar1) {
      FVar5 = (FName)param_1->_padding_;
    }
    else {
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
    }
    pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,FVar5);
    if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
      uVar4 = CityHash64((char *)&pFVar3->ID,0x10);
      iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        (&this->PropertiesIDsOverridden,(uint)uVar4,&pFVar3->ID);
      if (iVar2 != -1) {
        return true;
      }
    }
  }
  return false;
}

// IsPropertyOverriddenAndNotDefault @ 149f082d0

bool __thiscall
FPCGOverrideInstancedPropertyBag::IsPropertyOverriddenAndNotDefault
          (FPCGOverrideInstancedPropertyBag *this,FProperty *param_1,FInstancedPropertyBag *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  FPropertyBagPropertyDesc *this_00;
  FPropertyBagPropertyDesc *pFVar7;
  ulong64 uVar8;
  FName FVar9;
  FName FVar10;
  
  if ((param_2 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentUserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0xbcf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = IsThisNotNull(param_1,"FField::GetFName");
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  FVar9 = FVar10;
  if (bVar3) {
    FVar9 = (FName)param_1->_padding_;
  }
  this_00 = FInstancedPropertyBag::FindPropertyDescByName(param_2,FVar9);
  bVar3 = IsThisNotNull(param_1,"FField::GetFName");
  if (bVar3) {
    FVar10 = (FName)param_1->_padding_;
  }
  pFVar7 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,FVar10);
  if ((this_00 != (FPropertyBagPropertyDesc *)0x0) && (pFVar7 != (FPropertyBagPropertyDesc *)0x0)) {
    uVar8 = CityHash64((char *)&pFVar7->ID,0x10);
    iVar6 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                      (&this->PropertiesIDsOverridden,(uint)uVar8,&pFVar7->ID);
    if (iVar6 != -1) {
      if (((((param_2->Value).StructMemory != (uchar *)0x0) &&
           ((param_2->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
          ((this->Parameters).Value.StructMemory != (uchar *)0x0)) &&
         ((((this->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
           (this_00->CachedProperty != (FProperty *)0x0)) &&
          ((pFVar7->CachedProperty != (FProperty *)0x0 &&
           (bVar3 = FPropertyBagPropertyDesc::CompatibleType(this_00,pFVar7), bVar3)))))) {
        pFVar1 = this_00->CachedProperty;
        cVar5 = (**(code **)(pFVar1->_padding_ + 0xb8))
                          (pFVar1,(param_2->Value).StructMemory + pFVar1->Offset_Internal,
                           (this->Parameters).Value.StructMemory +
                           pFVar7->CachedProperty->Offset_Internal,0);
        return cVar5 == '\0';
      }
      return true;
    }
  }
  return false;
}

// MigrateToNewBagInstance @ 149f087c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPCGOverrideInstancedPropertyBag::MigrateToNewBagInstance
          (FPCGOverrideInstancedPropertyBag *this,FInstancedPropertyBag *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UPropertyBag *pUVar5;
  FPropertyBagPropertyDesc *pFVar6;
  ulong64 uVar7;
  uint *puVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  ForElementType<FSetElementId> FVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FGuid local_f0;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_e0;
  TPairInitializer<FGuid_const_&,FPropertyBagPropertyDesc_const_&> local_d0;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FGuid local_a8;
  TSet<TTuple<FGuid,FPropertyBagPropertyDesc>,TDefaultMapHashableKeyFuncs<FGuid,FPropertyBagPropertyDesc,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_d0.Value = (FPropertyBagPropertyDesc *)param_1;
  pUVar5 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters);
  if (pUVar5 != (UPropertyBag *)0x0) {
    pUVar5 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters);
    iVar3 = (pUVar5->PropertyDescs).ArrayNum;
    pFVar10 = (pUVar5->PropertyDescs).AllocatorInstance.Data;
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar11 = pFVar10 + (longlong)iVar3 * 0x40;
    for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x40) {
      local_c0 = pFVar10 + 8;
      local_b8 = pFVar10;
      TSet<TTuple<FGuid,FPropertyBagPropertyDesc>,TDefaultMapHashableKeyFuncs<FGuid,FPropertyBagPropertyDesc,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FPropertyBagPropertyDesc_const_&>_>
                (&local_98,&local_d0,(bool *)&local_c0);
    }
  }
  FInstancedPropertyBag::MigrateToNewBagInstance(&this->Parameters,param_1);
  pUVar5 = FInstancedPropertyBag::GetPropertyBagStruct(param_1);
  if (pUVar5 != (UPropertyBag *)0x0) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Array
              (&this->PropertiesIDsOverridden,&local_e0);
    iVar3 = local_e0.ArrayNum;
    pFVar10 = local_e0.AllocatorInstance.Data + (longlong)iVar3 * 0x10;
    FVar12.Data = local_e0.AllocatorInstance.Data;
    while( true ) {
      if (local_e0.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8);
      }
      if (FVar12.Data == pFVar10) break;
      local_f0._0_8_ = *(undefined8 *)FVar12.Data;
      local_f0._8_8_ = *(undefined8 *)(FVar12.Data + 8);
      local_a8._0_8_ = local_f0._0_8_;
      local_a8._8_8_ = local_f0._8_8_;
      pFVar6 = FInstancedPropertyBag::FindPropertyDescByID(param_1,&local_a8);
      uVar7 = CityHash64((char *)&local_f0,0x10);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar13 = local_98.Hash.SecondaryData;
        }
        uVar4 = *(uint *)((longlong)FVar13 +
                         ((ulonglong)(local_98.HashSize - 1) & uVar7 & 0xffffffff) * 4);
        if (uVar4 != 0xffffffff) {
          do {
            puVar8 = (uint *)((longlong)(int)uVar4 * 0x58 + local_98.Elements._0_8_);
            if (((local_f0.D == puVar8[3] && local_f0.C == puVar8[2]) && local_f0.B == puVar8[1]) &&
                local_f0.A == *puVar8) goto LAB_149f089c1;
            uVar4 = puVar8[0x14];
          } while (uVar4 != 0xffffffff);
        }
      }
      puVar8 = (uint *)0x0;
LAB_149f089c1:
      puVar9 = puVar8 + 4;
      if (puVar8 == (uint *)0x0) {
        puVar9 = (uint *)0x0;
      }
      if (((pFVar6 == (FPropertyBagPropertyDesc *)0x0) ||
          (((puVar9 != (uint *)0x0 &&
            ((pFVar6->ValueType != *(EPropertyBagPropertyType *)(puVar9 + 8) ||
             ((pFVar6->ValueTypeObject).field0_0x0.DebugPtr != *(UObject **)puVar9)))) ||
           (pFVar6 == (FPropertyBagPropertyDesc *)0x0)))) &&
         (*(int *)&(this->PropertiesIDsOverridden).Elements.field_0x8 !=
          *(int *)&(this->PropertiesIDsOverridden).Elements.field_0x34)) {
        uVar7 = CityHash64((char *)&local_f0,0x10);
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                  (&this->PropertiesIDsOverridden,(uint)uVar7,&local_f0);
      }
      FVar12.Data = FVar12.Data + 0x10;
      param_1 = (FInstancedPropertyBag *)local_d0.Value;
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FPropertyBagPropertyDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FPropertyBagPropertyDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// RefreshParameters @ 149f0e670

bool __thiscall
FPCGOverrideInstancedPropertyBag::RefreshParameters
          (FPCGOverrideInstancedPropertyBag *this,FInstancedPropertyBag *param_1,
          EPCGGraphParameterEvent param_2,FName param_3)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FPropertyBagPropertyDesc *pFVar10;
  FPropertyBagPropertyDesc *pFVar11;
  UPropertyBag *pUVar12;
  UPropertyBag *pUVar13;
  FPropertyBagPropertyDesc *pFVar14;
  ulong64 uVar15;
  FName FVar16;
  FName FVar17;
  FName local_58;
  FGuid local_38;
  
  if ((param_1 == (FInstancedPropertyBag *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentUserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0xaf5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  puVar1 = (param_1->Value).StructMemory;
  bVar5 = false;
  if ((puVar1 == (uchar *)0x0) ||
     (pUVar2 = (param_1->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar2 == (UScriptStruct *)0x0)) {
    FInstancedStruct::Reset((FInstancedStruct *)this);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reset(&this->PropertiesIDsOverridden)
    ;
    return true;
  }
  switch(param_2) {
  case GraphChanged:
    bVar5 = true;
    if (this != (FPCGOverrideInstancedPropertyBag *)param_1) {
      FInstancedStruct::InitializeAs((FInstancedStruct *)this,pUVar2,puVar1);
    }
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reset(&this->PropertiesIDsOverridden)
    ;
    break;
  case GraphPostLoad:
  case MultiplePropertiesAdded:
  case UndoRedo:
    pUVar12 = FInstancedPropertyBag::GetPropertyBagStruct(param_1);
    pUVar13 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters);
    bVar5 = pUVar13 != pUVar12;
    if (bVar5) {
      MigrateToNewBagInstance(this,param_1);
    }
    pUVar12 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters);
    if (pUVar12 != (UPropertyBag *)0x0) {
      pUVar12 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters);
      iVar9 = (pUVar12->PropertyDescs).ArrayNum;
      pFVar10 = (FPropertyBagPropertyDesc *)(pUVar12->PropertyDescs).AllocatorInstance.Data;
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar11 = pFVar10 + iVar9;
      for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 1) {
        pFVar3 = pFVar10->CachedProperty;
        if (pFVar3 == (FProperty *)0x0) {
LAB_149f0ea34:
          local_38.A = (pFVar10->ID).A;
          local_38.B = (pFVar10->ID).B;
          local_38.C = (pFVar10->ID).C;
          local_38.D = (pFVar10->ID).D;
          pFVar14 = FInstancedPropertyBag::FindPropertyDescByID(param_1,&local_38);
          if ((((((param_1->Value).StructMemory != (uchar *)0x0) &&
                ((param_1->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
               ((this->Parameters).Value.StructMemory != (uchar *)0x0)) &&
              (((this->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
               (pFVar14 != (FPropertyBagPropertyDesc *)0x0)))) &&
             ((pFVar14->CachedProperty != (FProperty *)0x0 &&
              ((pFVar10->CachedProperty != (FProperty *)0x0 &&
               (bVar7 = FPropertyBagPropertyDesc::CompatibleType(pFVar14,pFVar10), bVar7)))))) {
            pFVar3 = pFVar14->CachedProperty;
            cVar8 = (**(code **)(pFVar3->_padding_ + 0xb8))
                              (pFVar3,(param_1->Value).StructMemory + pFVar3->Offset_Internal,
                               (this->Parameters).Value.StructMemory +
                               pFVar10->CachedProperty->Offset_Internal,0);
            if (cVar8 != '\0') goto LAB_149f0eabf;
          }
          bVar5 = true;
          PCGGraphUtils::CopyPropertyValue(pFVar14,param_1,pFVar10,&this->Parameters);
        }
        else {
          bVar7 = IsThisNotNull(pFVar3,"FField::GetFName");
          if (bVar7) {
            local_58 = (FName)pFVar3->_padding_;
          }
          else {
            local_58.ComparisonIndex.Value = 0;
            local_58.Number = 0;
          }
          pFVar14 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,local_58);
          if (pFVar14 == (FPropertyBagPropertyDesc *)0x0) goto LAB_149f0ea34;
          uVar15 = CityHash64((char *)&pFVar14->ID,0x10);
          iVar9 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            (&this->PropertiesIDsOverridden,(uint)uVar15,&pFVar14->ID);
          if (iVar9 == -1) goto LAB_149f0ea34;
        }
LAB_149f0eabf:
      }
    }
    break;
  case Added:
  case RemovedUnused:
  case RemovedUsed:
  case PropertyMoved:
  case PropertyRenamed:
  case PropertyTypeModified:
  case CategoryChanged:
    bVar5 = true;
    pFVar10 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,param_3);
    if ((pFVar10 != (FPropertyBagPropertyDesc *)0x0) &&
       (pFVar3 = pFVar10->CachedProperty, pFVar3 != (FProperty *)0x0)) {
      bVar7 = IsThisNotNull(pFVar3,"FField::GetFName");
      if (bVar7) {
        FVar16 = (FName)pFVar3->_padding_;
      }
      else {
        FVar16.ComparisonIndex.Value = 0;
        FVar16.Number = 0;
      }
      pFVar10 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,FVar16);
      if (pFVar10 != (FPropertyBagPropertyDesc *)0x0) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Remove
                  (&this->PropertiesIDsOverridden,&pFVar10->ID);
      }
      ResetPropertyToDefault(this,pFVar3,param_1);
    }
    MigrateToNewBagInstance(this,param_1);
    break;
  case ValueModifiedLocally:
    pFVar10 = FInstancedPropertyBag::FindPropertyDescByName(param_1,param_3);
    pFVar11 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,param_3);
    if ((param_3 == (FName)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InChangedPropertyName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                           ,0xb3f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (pFVar10 == (FPropertyBagPropertyDesc *)0x0) {
      iVar9 = 0xb40;
LAB_149f0e7da:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalPropertyDesc",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,iVar9,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else if ((pFVar11 != (FPropertyBagPropertyDesc *)0x0) &&
            (bVar5 = FPropertyBagPropertyDesc::CompatibleType(pFVar10,pFVar11), bVar5)) {
      bVar5 = PCGGraphUtils::ArePropertiesIdentical(pFVar10,param_1,pFVar11,&this->Parameters);
      if (bVar5) {
        return false;
      }
      pFVar3 = pFVar11->CachedProperty;
      if (pFVar3 == (FProperty *)0x0) {
        return true;
      }
      bVar5 = IsThisNotNull(pFVar3,"FField::GetFName");
      if (bVar5) {
        FVar17 = (FName)pFVar3->_padding_;
      }
      else {
        FVar17.ComparisonIndex.Value = 0;
        FVar17.Number = 0;
      }
      pFVar10 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,FVar17);
      if (pFVar10 == (FPropertyBagPropertyDesc *)0x0) {
        return true;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&this->PropertiesIDsOverridden,(FGuid *)&stack0x00000010,(bool *)&pFVar10->ID);
      return true;
    }
    goto LAB_149f0e7fa;
  case ValueModifiedByParent:
    pFVar10 = FInstancedPropertyBag::FindPropertyDescByName(param_1,param_3);
    pFVar11 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,param_3);
    if ((param_3 == (FName)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InChangedPropertyName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                           ,0xb2a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (pFVar10 == (FPropertyBagPropertyDesc *)0x0) {
      iVar9 = 0xb2b;
      goto LAB_149f0e7da;
    }
    if ((pFVar11 != (FPropertyBagPropertyDesc *)0x0) &&
       (bVar5 = FPropertyBagPropertyDesc::CompatibleType(pFVar10,pFVar11), bVar5)) {
      bVar5 = IsPropertyOverridden(this,pFVar11->CachedProperty);
      if (bVar5) {
        return false;
      }
      PCGGraphUtils::CopyPropertyValue(pFVar10,param_1,pFVar11,&this->Parameters);
      return true;
    }
LAB_149f0e7fa:
    bVar5 = true;
    MigrateToNewBagInstance(this,param_1);
  }
  return bVar5;
}

// Reset @ 149f10d20

void __thiscall FPCGOverrideInstancedPropertyBag::Reset(FPCGOverrideInstancedPropertyBag *this)

{
  FInstancedStruct::Reset((FInstancedStruct *)this);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reset(&this->PropertiesIDsOverridden);
  return;
}

// ResetPropertyToDefault @ 149f10e50

bool __thiscall
FPCGOverrideInstancedPropertyBag::ResetPropertyToDefault
          (FPCGOverrideInstancedPropertyBag *this,FProperty *param_1,FInstancedPropertyBag *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FPropertyBagPropertyDesc *this_00;
  FPropertyBagPropertyDesc *pFVar6;
  FName FVar7;
  FName FVar8;
  uchar *_Src;
  uchar *_Dst;
  
  if ((param_2 == (FInstancedPropertyBag *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentUserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGGraph.cpp"
                         ,0xb97,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = IsThisNotNull(param_1,"FField::GetFName");
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  FVar7 = FVar8;
  if (bVar3) {
    FVar7 = (FName)param_1->_padding_;
  }
  this_00 = FInstancedPropertyBag::FindPropertyDescByName(param_2,FVar7);
  bVar3 = IsThisNotNull(param_1,"FField::GetFName");
  if (bVar3) {
    FVar8 = (FName)param_1->_padding_;
  }
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,FVar8);
  if ((this_00 == (FPropertyBagPropertyDesc *)0x0) || (pFVar6 == (FPropertyBagPropertyDesc *)0x0)) {
LAB_149f10ff3:
    bVar3 = false;
  }
  else {
    if ((param_2->Value).StructMemory != (uchar *)0x0) {
      if (((((param_2->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0) &&
           ((this->Parameters).Value.StructMemory != (uchar *)0x0)) &&
          ((this->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
         (((this_00->CachedProperty != (FProperty *)0x0 &&
           (pFVar6->CachedProperty != (FProperty *)0x0)) &&
          (bVar3 = FPropertyBagPropertyDesc::CompatibleType(this_00,pFVar6), bVar3)))) {
        pFVar1 = this_00->CachedProperty;
        cVar5 = (**(code **)(pFVar1->_padding_ + 0xb8))
                          (pFVar1,(param_2->Value).StructMemory + pFVar1->Offset_Internal,
                           (this->Parameters).Value.StructMemory +
                           pFVar6->CachedProperty->Offset_Internal,0);
        if (cVar5 != '\0') goto LAB_149f10ff3;
      }
      if ((((param_2->Value).StructMemory != (uchar *)0x0) &&
          ((param_2->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
         ((((this->Parameters).Value.StructMemory != (uchar *)0x0 &&
           ((((this->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
             (this_00->CachedProperty != (FProperty *)0x0)) &&
            (pFVar6->CachedProperty != (FProperty *)0x0)))) &&
          (bVar3 = FPropertyBagPropertyDesc::CompatibleType(this_00,pFVar6), bVar3)))) {
        pFVar1 = this_00->CachedProperty;
        _Src = (param_2->Value).StructMemory + pFVar1->Offset_Internal;
        _Dst = (this->Parameters).Value.StructMemory + pFVar6->CachedProperty->Offset_Internal;
        if (_Dst != _Src) {
          if (((uint)(int)pFVar1->PropertyFlags >> 0x1e & 1) != 0) {
            memcpy(_Dst,_Src,(longlong)pFVar1->ElementSize * (longlong)pFVar1->ArrayDim);
            return true;
          }
          (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,_Dst,_Src,pFVar1->ArrayDim);
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// UpdatePropertyOverride @ 149f151c0

bool __thiscall
FPCGOverrideInstancedPropertyBag::UpdatePropertyOverride
          (FPCGOverrideInstancedPropertyBag *this,FProperty *param_1,bool param_2,
          FInstancedPropertyBag *param_3)

{
  bool bVar1;
  FPropertyBagPropertyDesc *pFVar2;
  FName FVar3;
  undefined8 local_res10;
  
  if (param_1 != (FProperty *)0x0) {
    bVar1 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar1) {
      FVar3 = (FName)param_1->_padding_;
    }
    else {
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
      local_res10._0_4_ = 0;
      local_res10._4_4_ = 0;
    }
    pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Parameters,FVar3);
    if (pFVar2 == (FPropertyBagPropertyDesc *)0x0) {
      if (!param_2) {
        bVar1 = ResetPropertyToDefault(this,param_1,param_3);
        return bVar1;
      }
    }
    else {
      if (!param_2) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Remove
                  (&this->PropertiesIDsOverridden,&pFVar2->ID);
        bVar1 = ResetPropertyToDefault(this,param_1,param_3);
        return bVar1;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&this->PropertiesIDsOverridden,(FGuid *)&local_res10,(bool *)&pFVar2->ID);
    }
  }
  return false;
}

