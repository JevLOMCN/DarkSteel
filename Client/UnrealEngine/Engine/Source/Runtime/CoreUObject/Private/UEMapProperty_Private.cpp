// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// AnyEqual @ 142167220

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UEMapProperty_Private::AnyEqual
          (FScriptMapHelper *param_1,int param_2,int param_3,uchar *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  FProperty *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FScriptMapHelper *this;
  FScriptMapHelper *pFVar7;
  bool bVar8;
  char cVar9;
  uchar *puVar10;
  int iVar11;
  int iVar12;
  int local_res8 [2];
  TScriptContainerIterator<FScriptMapHelper> local_68;
  TScriptContainerIterator<FScriptMapHelper> local_58 [2];
  
  pFVar3 = param_1->ValueProp;
  pFVar4 = param_1->KeyProp;
  iVar1 = (param_1->MapLayout).ValueOffset;
  TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
            (&local_68,param_1,param_2);
  iVar11 = local_68.InternalIndex;
  this = local_68.Container;
  local_res8[0] = local_68.InternalIndex;
  bVar8 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (local_68.Container,(<lambda_1> *)local_res8);
  iVar12 = local_68.LogicalIndex;
  if (bVar8) {
    do {
      pFVar7 = local_68.Container;
      if (param_3 == 0) {
        return false;
      }
      uVar6._4_4_ = local_68.LogicalIndex;
      uVar6._0_4_ = local_68.InternalIndex;
      local_58[0].Container = local_68.Container;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0xb8);
      local_58[0]._8_8_ = uVar6;
      puVar10 = FScriptMapHelper::GetPairPtr(param_1,local_58);
      cVar9 = (*pcVar5)(pFVar4,puVar10,param_4,param_5);
      if (cVar9 != '\0') {
        local_58[0].Container = pFVar7;
        pcVar5 = *(code **)(pFVar3->_padding_ + 0xb8);
        local_58[0]._8_8_ = uVar6;
        puVar10 = FScriptMapHelper::GetPairPtr(param_1,local_58);
        cVar9 = (*pcVar5)(pFVar3,puVar10 + iVar1,param_4 + iVar1,param_5);
        if (cVar9 != '\0') {
          return true;
        }
      }
      iVar11 = iVar11 + 1;
      param_3 = param_3 + -1;
      iVar2 = (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
      local_68.InternalIndex = iVar11;
      while ((iVar11 < iVar2 &&
             (local_res8[0] = iVar11,
             bVar8 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (this,(<lambda_1> *)local_res8), !bVar8))) {
        iVar11 = iVar11 + 1;
      }
      local_res8[0] = iVar11;
      local_68.InternalIndex = iVar11;
      local_68.LogicalIndex = iVar12 + 1;
      bVar8 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (this,(<lambda_1> *)local_res8);
      iVar12 = iVar12 + 1;
    } while (bVar8);
  }
  return false;
}

// IsPermutation @ 142184130

bool __cdecl
UEMapProperty_Private::IsPermutation
          (FScriptMapHelper *param_1,FScriptMapHelper *param_2,uint param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptMapHelper *this;
  FScriptMapHelper *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uchar *puVar10;
  uchar *puVar11;
  int iVar12;
  FProperty *pFVar13;
  longlong lVar14;
  int iVar15;
  int local_res8;
  int local_res20 [2];
  int local_134;
  int iStack_120;
  int iStack_11c;
  int local_118;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  TScriptContainerIterator<FScriptMapHelper> local_d8;
  FProperty *local_c8;
  uchar *local_c0;
  FProperty *local_b8;
  TScriptContainerIterator<FScriptMapHelper> local_a8;
  TScriptContainerIterator<FScriptMapHelper> local_98;
  TScriptContainerIterator<FScriptMapHelper> local_88;
  TScriptContainerIterator<FScriptMapHelper> local_78;
  TScriptContainerIterator<FScriptMapHelper> local_68 [2];
  
  pFVar13 = param_1->KeyProp;
  pFVar2 = param_1->ValueProp;
  if ((pFVar13 != param_2->KeyProp) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyProp == MapHelperB.GetKeyProperty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x59,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((pFVar2 != param_2->ValueProp) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueProp == MapHelperB.GetValueProperty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x5a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pTVar3 = (param_1->field2_0x10).FreezableMap;
  iVar1 = (pTVar3->Pairs).Elements.Data.ArrayNum;
  if ((param_1->MapFlags & UsesMemoryImageAllocator) == None) {
    local_res8 = *(int *)&(pTVar3->Pairs).field_0x34;
  }
  else {
    local_res8 = (pTVar3->Pairs).Elements.NumFreeIndices;
  }
  local_res8 = iVar1 - local_res8;
  pTVar3 = (param_2->field2_0x10).FreezableMap;
  if ((param_2->MapFlags & UsesMemoryImageAllocator) == None) {
    iVar15 = *(int *)&(pTVar3->Pairs).field_0x34;
  }
  else {
    iVar15 = (pTVar3->Pairs).Elements.NumFreeIndices;
  }
  if (local_res8 == (pTVar3->Pairs).Elements.Data.ArrayNum - iVar15) {
    iVar15 = (param_1->MapLayout).ValueOffset;
    iVar12 = 0;
    iStack_120 = 0;
    local_134 = 0;
    if (0 < iVar1) {
      do {
        local_f8 = iVar12;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (param_1,(<lambda_1> *)&local_f8);
        iStack_120 = iVar12;
        if (bVar7) break;
        iVar12 = iVar12 + 1;
        iStack_120 = iVar12;
      } while (iVar12 < iVar1);
    }
    iVar12 = 0;
    iStack_11c = 0;
    iStack_100 = 0;
    iVar1 = (((param_2->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
    if (0 < iVar1) {
      do {
        local_f4 = iVar12;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (param_2,(<lambda_1> *)&local_f4);
        iStack_100 = iVar12;
        if (bVar7) break;
        iVar12 = iVar12 + 1;
        iStack_100 = iVar12;
      } while (iVar12 < iVar1);
    }
    iStack_fc = 0;
    iVar1 = iStack_11c;
    for (; local_res8 != 0; local_res8 = local_res8 + -1) {
      local_a8.InternalIndex = iStack_120;
      local_a8.LogicalIndex = iVar1;
      local_a8.Container = param_1;
      puVar10 = FScriptMapHelper::GetPairPtr(param_1,&local_a8);
      local_98.LogicalIndex = iStack_fc;
      local_98.InternalIndex = iStack_100;
      local_98.Container = param_2;
      puVar11 = FScriptMapHelper::GetPairPtr(param_2,&local_98);
      cVar9 = (**(code **)(pFVar13->_padding_ + 0xb8))(pFVar13,puVar10,puVar11,param_3);
      iStack_11c = iVar1;
      local_e0 = local_res8;
      if (cVar9 == '\0') goto LAB_1421843d0;
      cVar9 = (**(code **)(pFVar2->_padding_ + 0xb8))
                        (pFVar2,puVar10 + iVar15,puVar11 + iVar15,param_3);
      if (cVar9 == '\0') goto LAB_1421843d0;
      iVar12 = (((param_1->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
      do {
        iStack_120 = iStack_120 + 1;
        if (iVar12 <= iStack_120) break;
        local_f0 = iStack_120;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (param_1,(<lambda_1> *)&local_f0);
      } while (!bVar7);
      iVar1 = iVar1 + 1;
      iVar12 = (((param_2->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
      do {
        iStack_100 = iStack_100 + 1;
        if (iVar12 <= iStack_100) break;
        local_ec = iStack_100;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (param_2,(<lambda_1> *)&local_ec);
      } while (!bVar7);
      iStack_fc = iStack_fc + 1;
    }
LAB_1421843ae:
    bVar7 = true;
  }
  else {
LAB_14218456b:
    bVar7 = false;
  }
  return bVar7;
LAB_1421843d0:
  local_88.InternalIndex = iStack_120;
  local_88.LogicalIndex = iStack_11c;
  local_88.Container = param_1;
  puVar10 = FScriptMapHelper::GetPairPtr(param_1,&local_88);
  pFVar13 = param_1->KeyProp;
  local_c8 = param_1->ValueProp;
  local_e8 = (param_1->MapLayout).ValueOffset;
  local_118 = local_134;
  local_c0 = puVar10;
  local_b8 = pFVar13;
  TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
            (&local_d8,param_1,iVar1);
  iVar15 = local_d8.InternalIndex;
  this = local_d8.Container;
  local_res20[0] = local_d8.InternalIndex;
  bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (local_d8.Container,(<lambda_1> *)local_res20);
  if (bVar7) {
    do {
      pFVar6 = local_d8.Container;
      if (local_118 == 0) break;
      uVar5._4_4_ = local_d8.LogicalIndex;
      uVar5._0_4_ = local_d8.InternalIndex;
      local_78.Container = local_d8.Container;
      pcVar4 = *(code **)(pFVar13->_padding_ + 0xb8);
      local_78._8_8_ = uVar5;
      puVar11 = FScriptMapHelper::GetPairPtr(param_1,&local_78);
      cVar9 = (*pcVar4)(local_b8,puVar11,puVar10,param_3);
      if (cVar9 != '\0') {
        lVar14 = (longlong)local_e8;
        local_68[0].Container = pFVar6;
        puVar11 = local_c0 + lVar14;
        pcVar4 = *(code **)(local_c8->_padding_ + 0xb8);
        local_68[0]._8_8_ = uVar5;
        puVar10 = FScriptMapHelper::GetPairPtr(param_1,local_68);
        cVar9 = (*pcVar4)(local_c8,puVar10 + lVar14,puVar11,param_3);
        puVar10 = local_c0;
        if (cVar9 != '\0') goto LAB_14218459c;
      }
      local_118 = local_118 + -1;
      iVar12 = (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
      iVar15 = iVar15 + 1;
      local_d8.InternalIndex = iVar15;
      for (; iVar15 < iVar12; iVar15 = iVar15 + 1) {
        local_e4 = iVar15;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (this,(<lambda_1> *)&local_e4);
        if (bVar7) break;
      }
      local_d8.LogicalIndex = local_d8.LogicalIndex + 1;
      local_res20[0] = iVar15;
      local_d8.InternalIndex = iVar15;
      bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (this,(<lambda_1> *)local_res20);
      pFVar13 = local_b8;
    } while (bVar7);
  }
  bVar7 = RangesContainSameAmountsOfVal(param_1,iVar1,param_2,iStack_fc,local_e0,puVar10,param_3);
  if (!bVar7) goto LAB_14218456b;
LAB_14218459c:
  local_134 = local_134 + 1;
  local_res8 = local_res8 + -1;
  if (local_res8 == 0) goto LAB_1421843ae;
  iVar15 = (((param_1->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
  do {
    iStack_120 = iStack_120 + 1;
    if (iVar15 <= iStack_120) break;
    local_dc = iStack_120;
    bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)&local_dc);
  } while (!bVar7);
  iStack_11c = iStack_11c + 1;
  goto LAB_1421843d0;
}

// RangesContainSameAmountsOfVal @ 142187b20

bool __cdecl
UEMapProperty_Private::RangesContainSameAmountsOfVal
          (FScriptMapHelper *param_1,int param_2,FScriptMapHelper *param_3,int param_4,int param_5,
          uchar *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FScriptMapHelper *this;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  int iVar11;
  int local_a8;
  int local_a4;
  int local_9c;
  int local_98 [4];
  TScriptContainerIterator<FScriptMapHelper> local_88;
  TScriptContainerIterator<FScriptMapHelper> local_78;
  FProperty *local_68;
  FProperty *local_60;
  TScriptContainerIterator<FScriptMapHelper> local_58;
  TScriptContainerIterator<FScriptMapHelper> local_48;
  
  local_68 = param_1->KeyProp;
  pFVar3 = param_1->ValueProp;
  local_60 = pFVar3;
  if ((local_68 != param_3->KeyProp) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyProp == MapHelperB.GetKeyProperty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x30,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((pFVar3 != param_3->ValueProp) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueProp == MapHelperB.GetValueProperty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x31,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar1 = (param_1->MapLayout).ValueOffset;
  TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
            (&local_88,param_1,param_2);
  TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
            (&local_78,param_3,param_4);
  this = local_78.Container;
  local_a8 = 0;
  local_a4 = 0;
  iVar10 = local_88.InternalIndex;
  iVar11 = local_78.InternalIndex;
  for (; param_5 != 0; param_5 = param_5 + -1) {
    local_58.LogicalIndex = local_88.LogicalIndex;
    local_58.InternalIndex = local_88.InternalIndex;
    local_78.InternalIndex = iVar11;
    puVar8 = FScriptMapHelper::GetPairPtr(param_1,&local_58);
    local_48.LogicalIndex = local_78.LogicalIndex;
    local_48.InternalIndex = local_78.InternalIndex;
    local_48.Container = local_78.Container;
    puVar9 = FScriptMapHelper::GetPairPtr(param_3,&local_48);
    if ((puVar8 == param_6) ||
       ((cVar7 = (**(code **)(local_68->_padding_ + 0xb8))(local_68,puVar8,param_6,param_7),
        cVar7 != '\0' &&
        (cVar7 = (**(code **)(local_60->_padding_ + 0xb8))
                           (local_60,puVar8 + iVar1,param_6 + iVar1,param_7), cVar7 != '\0')))) {
      local_a8 = local_a8 + 1;
    }
    if ((puVar9 == param_6) ||
       ((cVar7 = (**(code **)(local_68->_padding_ + 0xb8))(local_68,puVar9,param_6,param_7),
        cVar7 != '\0' &&
        (cVar7 = (**(code **)(local_60->_padding_ + 0xb8))
                           (local_60,puVar9 + iVar1,param_6 + iVar1,param_7), cVar7 != '\0')))) {
      local_a4 = local_a4 + 1;
    }
    iVar10 = iVar10 + 1;
    iVar2 = ((((local_88.Container)->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
    local_88.InternalIndex = iVar10;
    while ((iVar10 < iVar2 &&
           (local_9c = iVar10,
           bVar5 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (local_88.Container,(<lambda_1> *)&local_9c), !bVar5))) {
      iVar10 = iVar10 + 1;
    }
    local_88.LogicalIndex = local_88.LogicalIndex + 1;
    iVar11 = iVar11 + 1;
    iVar2 = (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data.ArrayNum;
    local_78.InternalIndex = iVar11;
    local_88.InternalIndex = iVar10;
    while ((iVar11 < iVar2 &&
           (local_98[0] = iVar11,
           bVar5 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (this,(<lambda_1> *)local_98), !bVar5))) {
      iVar11 = iVar11 + 1;
    }
    local_78.LogicalIndex = local_78.LogicalIndex + 1;
  }
  return local_a8 == local_a4;
}

