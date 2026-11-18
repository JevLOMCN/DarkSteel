// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// FRigVMObjectArchiveWriter @ 14a0bdc20

FRigVMObjectArchiveWriter * __thiscall
FRigVMObjectArchiveWriter::FRigVMObjectArchiveWriter
          (FRigVMObjectArchiveWriter *this,FRigVMObjectArchive *param_1,UObject *param_2)

{
  byte *pbVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->Archive = param_1;
  this->_padding_ = (longlong)&___7FRigVMObjectArchiveWriter__6B_;
  this->Offset = 0;
  this->Root = param_2;
  bVar3 = param_2 == (UObject *)0x0;
  if (bVar3) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    pFVar2 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_18,(UObject *)0x0)
    ;
  }
  (this->RootPathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootPathName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootPathName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->RootPathName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)&(this->VisitedObjects).Elements = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x34 = 0;
  (this->VisitedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedObjects).HashSize = 0;
  *(undefined8 *)&this->NameToOffset = 0;
  *(undefined8 *)&(this->NameToOffset).field_0x8 = 0;
  *(undefined8 *)&(this->NameToOffset).field_0x20 = 0;
  *(undefined4 *)&(this->NameToOffset).field_0x28 = 0;
  *(undefined4 *)&(this->NameToOffset).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToOffset).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameToOffset).field_0x34 = 0;
  *(undefined8 *)&(this->NameToOffset).field_0x40 = 0;
  *(undefined4 *)&(this->NameToOffset).field_0x48 = 0;
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 200))(this,0);
  FArchive::UsingCustomVersion((FArchive *)this,&FUE5MainStreamObjectVersion::GUID);
  FArchive::UsingCustomVersion((FArchive *)this,&FRigVMObjectVersion::GUID);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  return this;
}

// ~FRigVMObjectArchiveWriter @ 14a0c2e20

void __thiscall
FRigVMObjectArchiveWriter::~FRigVMObjectArchiveWriter(FRigVMObjectArchiveWriter *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->NameToOffset).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameToOffset).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToOffset);
  (this->VisitedObjects).HashSize = 0;
  FVar2 = (this->VisitedObjects).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisitedObjects).Elements);
  pFVar3 = (this->RootPathName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 14a0c7ba0

FArchive * __thiscall
FRigVMObjectArchiveWriter::operator<<(FRigVMObjectArchiveWriter *this,UObject **param_1)

{
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *this_00;
  UObjectBaseUtility *pUVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  FName *pFVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  ForElementType<FSetElementId> FVar12;
  wchar_t *pwVar13;
  int iVar14;
  int iVar15;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  
  bVar4 = false;
  iVar6 = 0;
  iVar15 = 0;
  local_res8[0] = 0;
  pUVar1 = (UObjectBaseUtility *)*param_1;
  if (pUVar1 == (UObjectBaseUtility *)0x0) {
    plVar2 = (longlong *)this->_padding_;
    local_res8[0] = 0;
    if (*plVar2 + 1U <= (ulonglong)plVar2[1]) {
      *plVar2 = *plVar2 + 1;
      return (FArchive *)this;
    }
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
    return (FArchive *)this;
  }
  pwVar13 = L"";
  this_00 = &this->VisitedObjects;
  uVar9 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  iVar14 = 0;
  if (*(int *)&(this->VisitedObjects).Elements.field_0x8 !=
      *(int *)&(this->VisitedObjects).Elements.field_0x34) {
    FVar12 = (this->VisitedObjects).Hash.SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&(this->VisitedObjects).Hash;
    }
    iVar5 = *(int *)((longlong)FVar12 +
                    (ulonglong)((this->VisitedObjects).HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4)
    ;
    if (iVar5 != -1) {
      do {
        if (*(UObjectBaseUtility **)(*(longlong *)&this_00->Elements + (longlong)iVar5 * 0x10) ==
            pUVar1) goto LAB_14a0c7f75;
        iVar5 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (pUVar1 != (UObjectBaseUtility *)this->Root) {
    pFVar7 = UObjectBaseUtility::GetPathName(pUVar1,&local_58,(UObject *)0x0);
    iVar5 = (this->RootPathName).Data.ArrayNum;
    if (iVar5 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->RootPathName).Data.AllocatorInstance.Data;
      iVar6 = iVar5 + -1;
    }
    bVar4 = true;
    bVar3 = ::FString::StartsWith(pFVar7,pwVar10,iVar6,CaseSensitive);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_14a0c7cb0;
    }
  }
  bVar3 = true;
LAB_14a0c7cb0:
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              (this_00,(UObject **)&local_res18,(bool *)param_1);
    plVar2 = (longlong *)this->_padding_;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8);
    }
    else {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*plVar2);
      *plVar2 = *plVar2 + 1;
    }
    pFVar7 = UObjectBaseUtility::GetPathName
                       (*(UObjectBaseUtility **)&(*param_1)->field_0x10,&local_58,(UObject *)0x0);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_78,pwVar10);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x178))(this,&local_78);
    local_res18.ComparisonIndex.Value = *(uint *)&(*param_1)->field_0x18;
    local_res18.Number = *(uint *)&(*param_1)->field_0x1c;
    ::FName::ToString(&local_res18,&local_68);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar11.Data = local_68.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_70,(wchar_t *)FVar11.Data);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x178))(this,&local_70);
    local_res10.ComparisonIndex.Value = *(uint *)&(*param_1)->field_0x8;
    plVar2 = (longlong *)this->_padding_;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,&local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,(uint *)&local_res10);
      }
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    pUVar1 = *(UObjectBaseUtility **)&(*param_1)->field_0x20;
    if ((pUVar1 != (UObjectBaseUtility *)0x0) &&
       (uVar9 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
                -0x7a143595, uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb,
       *(int *)&(this->VisitedObjects).Elements.field_0x8 !=
       *(int *)&(this->VisitedObjects).Elements.field_0x34)) {
      FVar12 = (this->VisitedObjects).Hash.SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&(this->VisitedObjects).Hash;
      }
      iVar6 = *(int *)((longlong)FVar12 +
                      (ulonglong)((this->VisitedObjects).HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                      4);
      if (iVar6 != -1) {
        do {
          if (*(UObjectBaseUtility **)(*(longlong *)&this_00->Elements + (longlong)iVar6 * 0x10) ==
              pUVar1) {
            UObjectBaseUtility::GetPathName(pUVar1,&local_68,(UObject *)0x0);
            iVar6 = (this->RootPathName).Data.ArrayNum;
            if (iVar6 != 0) {
              pwVar13 = (wchar_t *)(this->RootPathName).Data.AllocatorInstance.Data;
              iVar15 = iVar6 + -1;
            }
            bVar4 = ::FString::StartsWith(&local_68,pwVar13,iVar15,CaseSensitive);
            if (bVar4) {
              iVar6 = (this->RootPathName).Data.ArrayNum;
              iVar15 = iVar6 + -1;
              if (iVar6 == 0) {
                iVar15 = iVar14;
              }
              ::FString::RightChop(&local_68,&local_58,iVar15);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
              local_68.Data.ArrayNum = local_58.Data.ArrayNum;
              local_68.Data.ArrayMax = local_58.Data.ArrayMax;
            }
            if (local_68.Data.ArrayNum < 2) {
              local_res18.ComparisonIndex.Value = 0;
              local_res18.Number = 0;
              pFVar8 = &local_res18;
            }
            else {
              pFVar8 = ::FName::FName(&local_res18,(wchar_t *)local_68.Data.AllocatorInstance.Data);
            }
            local_res20 = *pFVar8;
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            break;
          }
          iVar6 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    (**(code **)(this->_padding_ + 0x178))(this,&local_res20);
    (**(code **)(*(longlong *)*param_1 + 200))(*param_1,this);
  }
  else {
LAB_14a0c7f75:
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*param_1,&local_68,(UObject *)0x0);
    iVar6 = (this->RootPathName).Data.ArrayNum;
    if (iVar6 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->RootPathName).Data.AllocatorInstance.Data;
      iVar14 = iVar6 + -1;
    }
    bVar4 = ::FString::StartsWith(&local_68,pwVar10,iVar14,CaseSensitive);
    if (bVar4) {
      iVar6 = (this->RootPathName).Data.ArrayNum;
      iVar14 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar14 = iVar15;
      }
      ::FString::RightChop(&local_68,&local_58,iVar14);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      local_68.Data.ArrayNum = local_58.Data.ArrayNum;
      local_68.Data.ArrayMax = local_58.Data.ArrayMax;
    }
    plVar2 = (longlong *)this->_padding_;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
    }
    else {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*plVar2);
      *plVar2 = *plVar2 + 1;
    }
    if (local_68.Data.ArrayNum != 0) {
      pwVar13 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res10,pwVar13);
    (**(code **)(this->_padding_ + 0x178))(this,&local_res10);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 14a0c80c0

FArchive * __thiscall
FRigVMObjectArchiveWriter::operator<<(FRigVMObjectArchiveWriter *this,FName *param_1)

{
  longlong lVar1;
  FName FVar2;
  longlong lVar3;
  uint3 uVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  int local_res8 [2];
  TPairInitializer<FName_const_&,__int64_&&> local_res10;
  undefined1 local_68 [8];
  long64 **local_60;
  FString local_58;
  FString local_48;
  
  local_res8[0] = 0;
  FVar2 = *param_1;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar4 = local_res8[0]._1_3_;
  if (*(int *)&(this->NameToOffset).field_0x8 != *(int *)&(this->NameToOffset).field_0x34) {
    puVar9 = *(undefined1 **)&(this->NameToOffset).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->NameToOffset).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->NameToOffset).field_0x48 - 1U & FVar2.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->NameToOffset).field_0x0;
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar3 + (longlong)iVar6 * 0x18) == FVar2) {
          plVar8 = (longlong *)this->_padding_;
          puVar10 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          if (puVar10 != (undefined8 *)0x0) {
            local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
            if ((undefined1 *)plVar8[1] < (undefined1 *)*plVar8 + 1) {
              (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
            }
            else {
              local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*plVar8);
              *plVar8 = *plVar8 + 1;
            }
            plVar8 = (longlong *)this->_padding_;
            local_res10.Key = (FName *)*puVar10;
            if (*plVar8 + 8U <= (ulonglong)plVar8[1]) {
              *plVar8 = *plVar8 + 8;
              return (FArchive *)this;
            }
            if ((this->_padding_ & 0x10000) == 0) {
              (**(code **)(this->_padding_ + 0x188))(this,&local_res10,8);
              return (FArchive *)this;
            }
            FArchive::SerializeByteOrderSwapped((FArchive *)this,(ulong64 *)&local_res10);
            return (FArchive *)this;
          }
          goto LAB_14a0c814c;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  plVar8 = (longlong *)this->_padding_;
LAB_14a0c814c:
  local_res8[0] = (uint)local_res8[0]._1_3_ << 8;
  if ((undefined1 *)plVar8[1] < (undefined1 *)*plVar8 + 1) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,1);
  }
  else {
    local_res8[0] = CONCAT31(uVar4,*(undefined1 *)*plVar8);
    *plVar8 = *plVar8 + 1;
  }
  local_res10.Value = (long64 *)(**(code **)(this->_padding_ + 0x28))(this);
  local_60 = &local_res10.Value;
  local_68 = (undefined1  [8])param_1;
  TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,__int64_&&>_>
            ((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
              *)&this->NameToOffset,&local_res10,(bool *)local_68);
  bVar11 = *param_1 != (FName)0x0;
  if (bVar11) {
    pFVar7 = ::FName::ToString(param_1,&local_48);
  }
  else {
    local_68 = (undefined1  [8])0x0;
    pFVar7 = (FString *)local_68;
    local_60 = (long64 **)0x0;
  }
  local_58.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_58.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if ((bVar11) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar11) && (local_68 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_68);
  }
  ::operator<<((FArchive *)this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 14a0c82f0

FArchive * __thiscall
FRigVMObjectArchiveWriter::operator<<(FRigVMObjectArchiveWriter *this,FText *param_1)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FString local_18;
  
  pFVar1 = FText::ToString(param_1);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::operator<<((FArchive *)this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// Seek @ 14a10dc60

void __thiscall FRigVMObjectArchiveWriter::Seek(FRigVMObjectArchiveWriter *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((-1 < param_1) && (param_1 <= (this->Archive->Buffer).ArrayNum)) {
    this->Offset = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(InPos >= 0) && (InPos <= Archive.Buffer.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                     ,0x90,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Offset = param_1;
  return;
}

// Serialize @ 14a10e330

void __thiscall
FRigVMObjectArchiveWriter::Serialize(FRigVMObjectArchiveWriter *this,void *param_1,long64 param_2)

{
  FRigVMObjectArchive **ppFVar1;
  FRigVMObjectArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  if (param_2 == 0) {
    if ((param_1 != (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("V == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                           ,0x67,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((param_1 == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("V",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                           ,0x6b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = this->Offset;
    iVar8 = (int)uVar7;
    if ((uVar7 != (longlong)iVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppFVar1 = &this->Archive;
    if ((iVar8 < 0) || (((*ppFVar1)->Buffer).ArrayNum <= iVar8)) {
      pFVar2 = *ppFVar1;
      if (iVar8 == (pFVar2->Buffer).ArrayNum) {
        iVar8 = IntCastChecked<int,__int64>(param_2);
        uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar8,(ForAnyElementType *)pFVar2,&(pFVar2->Buffer).ArrayNum,
                           &(pFVar2->Buffer).ArrayMax);
        uVar7 = (ulonglong)uVar5;
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMObjectArchive.cpp"
                           ,0x7c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      if ((param_2 != (int)param_2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *ppFVar1;
      iVar8 = (iVar8 - (pFVar2->Buffer).ArrayNum) + (int)param_2;
      if (0 < iVar8) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar8,(ForAnyElementType *)pFVar2,&(pFVar2->Buffer).ArrayNum,
                   &(pFVar2->Buffer).ArrayMax);
      }
    }
    pFVar2 = *ppFVar1;
    uVar6 = (uint)uVar7;
    uVar5 = 0;
    if ((int)uVar6 < (pFVar2->Buffer).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    memcpy((pFVar2->Buffer).AllocatorInstance.Data + (int)uVar6,param_1,param_2);
    this->Offset = this->Offset + param_2;
  }
  return;
}

// Tell @ 14a111f40

long64 __thiscall FRigVMObjectArchiveWriter::Tell(FRigVMObjectArchiveWriter *this)

{
  return this->Offset;
}

// TotalSize @ 14a112240

long64 __thiscall FRigVMObjectArchiveWriter::TotalSize(FRigVMObjectArchiveWriter *this)

{
  return (longlong)(this->Archive->Buffer).ArrayNum;
}

