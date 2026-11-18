// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// Init @ 1482014f0

void __thiscall
FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::Init
          (FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *this,wchar_t *param_1,
          wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *pFVar2;
  FString local_18;
  
  pFVar2 = (FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *)
           ::FString::FString(&local_18,param_1);
  if (this != pFVar2) {
    pFVar1 = (this->CVarName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->CVarName).Data.AllocatorInstance.Data = (pFVar2->CVarName).Data.AllocatorInstance.Data;
    (pFVar2->CVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CVarName).Data.ArrayNum = (pFVar2->CVarName).Data.ArrayNum;
    (this->CVarName).Data.ArrayMax = (pFVar2->CVarName).Data.ArrayMax;
    (pFVar2->CVarName).Data.ArrayNum = 0;
    (pFVar2->CVarName).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Init @ 148201560

void __thiscall
FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::Init
          (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *this,wchar_t *param_1,
          wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *pFVar2;
  FString local_18;
  
  pFVar2 = (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *)
           ::FString::FString(&local_18,param_1);
  if (this != pFVar2) {
    pFVar1 = (this->CVarName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->CVarName).Data.AllocatorInstance.Data = (pFVar2->CVarName).Data.AllocatorInstance.Data;
    (pFVar2->CVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CVarName).Data.ArrayNum = (pFVar2->CVarName).Data.ArrayNum;
    (this->CVarName).Data.ArrayMax = (pFVar2->CVarName).Data.ArrayMax;
    (pFVar2->CVarName).Data.ArrayNum = 0;
    (pFVar2->CVarName).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SerializeFromMismatchedTag @ 1482159e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::SerializeFromMismatchedTag
          (FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *this,FPropertyTag *param_1,
          FArchive *param_2)

{
  int iVar1;
  FName FVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  FName FVar7;
  int *piVar8;
  undefined1 auStackY_e8 [32];
  uint local_a8 [4];
  FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> local_98;
  uint local_88;
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FVar2 = param_1->Type;
  FVar6 = FNameEntryId::FromValidEName((EName)local_a8);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  if (FVar2 == FVar7) {
    plVar3 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_a8);
      }
    }
    else {
      local_a8[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_58 = ___xmm_00000000ffffffff0000008000000000;
    uStack_50 = _UNK_150631d98;
    local_88 = local_a8[0];
    local_98.CVarName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CVarName.Data.ArrayNum = 0;
    local_98.CVarName.Data.ArrayMax = 0;
    local_80._0_8_ = (FScriptContainerElement *)0x0;
    local_80._8_8_ = 0;
    local_60 = (void *)0x0;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    if (this != &local_98) {
      iVar1 = (this->CVarName).Data.ArrayMax;
      piVar8 = &(this->CVarName).Data.ArrayMax;
      (this->CVarName).Data.ArrayNum = 0;
      if (iVar1 == 0) {
        *piVar8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,iVar1,(ForAnyElementType *)this,0,piVar8);
      }
    }
    *(uint *)&this[1].CVarName.Data.AllocatorInstance.Data = local_88;
    piVar8 = &this[1].CVarName.Data.ArrayNum;
    if (piVar8 != (int *)local_80) {
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
      Move<TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)piVar8,
                 (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)local_80);
    }
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    iVar1 = SUB84(local_80._8_8_,4);
    local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
    }
    uVar4 = local_58._4_4_;
    uStack_50 = 0xffffffff;
    local_58 = (ulonglong)local_58._4_4_ << 0x20;
    if (0x80 < uVar4) {
      local_58 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_80._0_8_);
    }
    if (local_98.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.CVarName.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// SerializeFromMismatchedTag @ 148215bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::SerializeFromMismatchedTag
          (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *this,FPropertyTag *param_1,
          FArchive *param_2)

{
  int iVar1;
  FName FVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  FName FVar7;
  int *piVar8;
  undefined1 auStackY_e8 [32];
  uint local_a8 [4];
  FPerQualityLevelProperty<FPerQualityLevelInt,int,2> local_98;
  uint local_88;
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FVar2 = param_1->Type;
  FVar6 = FNameEntryId::FromValidEName((EName)local_a8);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  if (FVar2 == FVar7) {
    plVar3 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_a8);
      }
    }
    else {
      local_a8[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    local_98.CVarName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CVarName.Data.ArrayNum = 0;
    local_98.CVarName.Data.ArrayMax = 0;
    local_80._0_8_ = (FScriptContainerElement *)0x0;
    local_80._8_8_ = 0;
    local_60 = (void *)0x0;
    local_58 = ___xmm_00000000ffffffff0000008000000000;
    uStack_50 = _UNK_150631d98;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    local_88 = local_a8[0];
    if (this != &local_98) {
      iVar1 = (this->CVarName).Data.ArrayMax;
      piVar8 = &(this->CVarName).Data.ArrayMax;
      (this->CVarName).Data.ArrayNum = 0;
      if (iVar1 == 0) {
        *piVar8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,iVar1,(ForAnyElementType *)this,0,piVar8);
      }
    }
    *(uint *)&this[1].CVarName.Data.AllocatorInstance.Data = local_88;
    piVar8 = &this[1].CVarName.Data.ArrayNum;
    if (piVar8 != (int *)local_80) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)piVar8,
                 (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_80);
    }
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    iVar1 = SUB84(local_80._8_8_,4);
    local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
    }
    uVar4 = local_58._4_4_;
    uStack_50 = 0xffffffff;
    local_58 = (ulonglong)local_58._4_4_ << 0x20;
    if (0x80 < uVar4) {
      local_58 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_80._0_8_);
    }
    if (local_98.CVarName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.CVarName.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// StreamArchive @ 1482205d0

void __thiscall
FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::StreamArchive
          (FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *this,FArchive *param_1)

{
  FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *pFVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint local_res8 [2];
  
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  if (puVar2[1] < *puVar2 + 4) {
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  pFVar1 = this + 1;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
    }
  }
  else {
    *(uint *)&(pFVar1->CVarName).Data.AllocatorInstance.Data = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TSetPrivateFriend::
  Serialize<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                      *)&this[1].CVarName.Data.ArrayNum);
  return;
}

// StreamArchive @ 148220690

void __thiscall
FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::StreamArchive
          (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *this,FArchive *param_1)

{
  FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *pFVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint local_res8 [2];
  
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  if (puVar2[1] < *puVar2 + 4) {
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  pFVar1 = this + 1;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
    }
  }
  else {
    *(uint *)&(pFVar1->CVarName).Data.AllocatorInstance.Data = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TSetPrivateFriend::
  Serialize<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&this[1].CVarName.Data.ArrayNum);
  return;
}

// StreamStructuredArchive @ 148220750

void __thiscall
FPerQualityLevelProperty<FPerQualityLevelFloat,float,4>::StreamStructuredArchive
          (FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *this,
          FStructuredArchiveSlot param_1)

{
  FPerQualityLevelProperty<FPerQualityLevelFloat,float,4> *pFVar1;
  FArchive *this_00;
  uint *puVar2;
  FSlotBase FVar3;
  bool local_res8 [8];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FVar3.StructuredArchive = local_res10.StructuredArchive;
  local_res8[0] = false;
  ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,local_res8);
  pFVar1 = this + 1;
  this_00 = (FVar3.StructuredArchive)->Formatter->Inner;
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)pFVar1);
    }
  }
  else {
    *(uint *)&(pFVar1->CVarName).Data.AllocatorInstance.Data = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  TSetPrivateFriend::
  SerializeStructured<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
            ((FStructuredArchiveSlot)FVar3.StructuredArchive,
             (TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)&this[1].CVarName.Data.ArrayNum);
  return;
}

// StreamStructuredArchive @ 1482207f0

void __thiscall
FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::StreamStructuredArchive
          (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *this,FStructuredArchiveSlot param_1)

{
  FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *pFVar1;
  FArchive *this_00;
  uint *puVar2;
  FSlotBase FVar3;
  bool local_res8 [8];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FVar3.StructuredArchive = local_res10.StructuredArchive;
  local_res8[0] = false;
  ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,local_res8);
  pFVar1 = this + 1;
  this_00 = (FVar3.StructuredArchive)->Formatter->Inner;
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)pFVar1);
    }
  }
  else {
    *(uint *)&(pFVar1->CVarName).Data.AllocatorInstance.Data = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  TSetPrivateFriend::
  SerializeStructured<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
            ((FStructuredArchiveSlot)FVar3.StructuredArchive,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this[1].CVarName.Data.ArrayNum);
  return;
}

// GetLowestValue @ 1485c5880

int __thiscall
FPerQualityLevelProperty<FPerQualityLevelInt,int,2>::GetLowestValue
          (FPerQualityLevelProperty<FPerQualityLevelInt,int,2> *this)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar8 = *(int *)&this[4].CVarName.Data.AllocatorInstance.Data;
  piVar1 = &this[2].CVarName.Data.ArrayNum;
  iVar3 = *(int *)&this[1].CVarName.Data.AllocatorInstance.Data;
  iVar12 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    piVar10 = *(int **)&this[3].CVarName.Data.ArrayNum;
    if (piVar10 == (int *)0x0) {
      piVar10 = piVar1;
    }
    uVar11 = *piVar10;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar8;
      if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < iVar12) goto LAB_1485c591e;
      uVar11 = piVar10[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_1485c591e:
  uVar11 = *(uint *)&this[4].CVarName.Data.AllocatorInstance.Data;
  uVar14 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&this[2].CVarName.Data.AllocatorInstance.Data -
                       this[4].CVarName.Data.ArrayMax);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)piVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar6 = *(uint *)&this[4].CVarName.Data.AllocatorInstance.Data;
  if (uVar11 != uVar6) {
    piVar10 = *(int **)&this[3].CVarName.Data.ArrayNum;
    if (piVar10 == (int *)0x0) {
      piVar10 = piVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & piVar10[iVar12];
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar12) goto LAB_1485c5a20;
      uVar11 = piVar10[lVar9 + 1];
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1485c5a20:
  while( true ) {
    iVar8 = iVar3;
    if (*(int *)&this[2].CVarName.Data.AllocatorInstance.Data - this[4].CVarName.Data.ArrayMax !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)piVar1)) break;
    iVar3 = *(int *)(*(longlong *)&this[1].CVarName.Data.ArrayNum + 4 +
                    (longlong)TStack_60.CurrentBitIndex * 0x10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    if (iVar8 <= iVar3) {
      iVar3 = iVar8;
    }
  }
  return iVar8;
}

