// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Serialize @ 141f455c0

void __thiscall
FFormatContainer::Serialize
          (FFormatContainer *this,FArchive *param_1,UObject *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,bool param_4,ushort param_5,
          bool param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  TBulkData<unsigned_char> **ppTVar10;
  FBulkData *pFVar11;
  TTuple<FName,TBulkData<unsigned_char>_*> *pTVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FBulkData *this_00;
  uint uVar15;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res10 [8];
  UObject *local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 local_68 [4];
  uint local_64;
  uint local_60;
  uint local_5c;
  FName local_58;
  FName local_50;
  longlong local_48 [2];
  FBulkData *pFVar16;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((((*(longlong *)&param_1->field_0x68 == 0) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) ||
        (param_3 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsCooking() && FormatsToSave",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x6af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = (this->Formats).Pairs.ArrayNum;
    local_64 = 0;
    pFVar17 = (this->Formats).Pairs.AllocatorInstance.Data;
    pFVar18 = pFVar17 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->Formats).Pairs.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TBulkData<unsigned_char>_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar17 == pFVar18) break;
      lVar4 = *(longlong *)(pFVar17 + 8);
      lVar5 = *(longlong *)pFVar17;
      if ((lVar4 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bulk",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                             ,0x6b6,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (local_res20->AllocatorInstance).Data;
      pFVar1 = pFVar14 + (longlong)local_res20->ArrayNum * 8;
      if (pFVar14 == pFVar1) {
LAB_141f4580b:
        pFVar17 = pFVar17 + 0x10;
      }
      else {
        do {
          if (*(longlong *)pFVar14 == lVar5) {
            if (*(int *)(lVar4 + 9) != 0 || *(char *)(lVar4 + 8) != '\0') {
              local_64 = local_64 + 1;
            }
            goto LAB_141f4580b;
          }
          pFVar14 = pFVar14 + 8;
        } while (pFVar14 != pFVar1);
        pFVar17 = pFVar17 + 0x10;
      }
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_64);
      }
    }
    else {
      local_64 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    pTVar7 = local_res20;
    local_5c = (this->Formats).Pairs.ArrayNum;
    uVar13 = (ulonglong)(int)local_5c;
    pFVar17 = (this->Formats).Pairs.AllocatorInstance.Data;
    pFVar18 = pFVar17 + uVar13 * 0x10;
    while( true ) {
      if ((this->Formats).Pairs.ArrayNum != (int)uVar13) {
        local_68[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TBulkData<unsigned_char>_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_68);
      }
      if (pFVar17 == pFVar18) break;
      pFVar14 = (pTVar7->AllocatorInstance).Data;
      local_48[0] = *(longlong *)pFVar17;
      pFVar16 = *(FBulkData **)(pFVar17 + 8);
      pFVar1 = pFVar14 + (longlong)pTVar7->ArrayNum * 8;
      if (pFVar14 == pFVar1) {
LAB_141f45963:
        uVar13 = (ulonglong)local_5c;
        pFVar17 = pFVar17 + 0x10;
      }
      else {
        do {
          if (*(longlong *)pFVar14 == local_48[0]) {
            if (*(int *)((pFVar16->BulkMeta).Data + 1) != 0 || (pFVar16->BulkMeta).Data[0] != '\0')
            {
              local_64 = local_64 - 1;
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_48);
              uVar15 = *(uint *)((pFVar16->BulkMeta).Data + 0xc);
              if (param_6) {
                uVar9 = uVar15 & 0xffffebff | 0x40;
              }
              else {
                uVar9 = uVar15 | 0x400;
                if (param_7) {
                  uVar9 = uVar15 | 0x1400;
                }
                uVar9 = uVar9 & 0xffffffbf;
              }
              *(uint *)((pFVar16->BulkMeta).Data + 0xc) = uVar9;
              if (param_4) {
                *(uint *)((pFVar16->BulkMeta).Data + 0xc) = uVar9 | 8;
              }
              FBulkData::Serialize(pFVar16,param_1,local_res18,false,1,None);
              *(uint *)((pFVar16->BulkMeta).Data + 0xc) = uVar15;
            }
            goto LAB_141f45963;
          }
          pFVar14 = pFVar14 + 8;
        } while (pFVar14 != pFVar1);
        uVar13 = (ulonglong)local_5c;
        pFVar17 = pFVar17 + 0x10;
      }
    }
    if ((local_64 != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFormats == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                           ,0x6df,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_60 = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_60,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_60);
      }
    }
    else {
      local_60 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    pFVar16 = (FBulkData *)0x0;
    if (0 < (int)local_60) {
      do {
        local_58.ComparisonIndex.Value = 0;
        local_58.Number = 0;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_58);
        local_50 = local_58;
        ppTVar10 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
                   ::Find(&this->Formats,local_58);
        if ((ppTVar10 == (TBulkData<unsigned_char> **)0x0) ||
           (this_00 = (FBulkData *)*ppTVar10, this_00 == (FBulkData *)0x0)) {
          pFVar11 = ::operator_new(0x28);
          this_00 = (FBulkData *)0x0;
          if (pFVar11 != (FBulkData *)0x0) {
            (pFVar11->DataAllocation).Allocation.RawData = (void *)0x0;
            (pFVar11->BulkMeta).Data[0] = '\0';
            (pFVar11->BulkMeta).Data[1] = '\0';
            (pFVar11->BulkMeta).Data[2] = '\0';
            (pFVar11->BulkMeta).Data[3] = '\0';
            (pFVar11->BulkMeta).Data[4] = '\0';
            (pFVar11->BulkMeta).Data[5] = '\0';
            (pFVar11->BulkMeta).Data[6] = '\0';
            (pFVar11->BulkMeta).Data[7] = '\0';
            (pFVar11->BulkMeta).Data[8] = '\0';
            (pFVar11->BulkMeta).Data[9] = '\0';
            (pFVar11->BulkMeta).Data[10] = '\0';
            (pFVar11->BulkMeta).Data[0xb] = '\0';
            (pFVar11->BulkMeta).Data[0xc] = '\0';
            (pFVar11->BulkMeta).Data[0xd] = '\0';
            (pFVar11->BulkMeta).Data[0xe] = '\0';
            (pFVar11->BulkMeta).Data[0xf] = '\0';
            (pFVar11->BulkMeta).Data[5] = 0xff;
            (pFVar11->BulkMeta).Data[6] = 0xff;
            (pFVar11->BulkMeta).Data[7] = 0xff;
            (pFVar11->BulkMeta).Data[8] = 0xff;
            (pFVar11->BulkMeta).Data[9] = 0xff;
            *(undefined8 *)(pFVar11->BulkChunkId).Id = FIoChunkId::InvalidChunkId.Id._0_8_;
            *(undefined4 *)((pFVar11->BulkChunkId).Id + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
            this_00 = pFVar11;
          }
          pTVar12 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::AllocateMemoryForEmplace<FName_const_&>(&this->Formats,&local_50);
          *(uint *)&pTVar12->field_0x0 = local_50.ComparisonIndex.Value;
          *(uint *)&pTVar12->field_0x4 = local_50.Number;
          *(FBulkData **)&pTVar12->field_0x8 = this_00;
        }
        FBulkData::Serialize(this_00,param_1,param_2,false,1,None);
        uVar15 = (int)pFVar16 + 1;
        pFVar16 = (FBulkData *)(ulonglong)uVar15;
      } while ((int)uVar15 < (int)local_60);
      return;
    }
  }
  return;
}

// SerializeAttemptMappedLoad @ 141f45a80

void __thiscall
FFormatContainer::SerializeAttemptMappedLoad
          (FFormatContainer *this,FArchive *param_1,UObject *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TBulkData<unsigned_char> **ppTVar4;
  FBulkData *pFVar5;
  TTuple<FName,TBulkData<unsigned_char>_*> *pTVar6;
  FBulkData *this_00;
  uint uVar7;
  FBulkData *pFVar8;
  uint local_res10 [4];
  FName local_res20;
  FName local_38 [2];
  
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkData.cpp"
                         ,0x6e5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  pFVar8 = (FBulkData *)0x0;
  if (0 < (int)local_res10[0]) {
    do {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
      local_38[0] = local_res20;
      ppTVar4 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
                ::Find(&this->Formats,local_res20);
      if ((ppTVar4 == (TBulkData<unsigned_char> **)0x0) ||
         (this_00 = (FBulkData *)*ppTVar4, this_00 == (FBulkData *)0x0)) {
        pFVar5 = ::operator_new(0x28);
        this_00 = (FBulkData *)0x0;
        if (pFVar5 != (FBulkData *)0x0) {
          (pFVar5->DataAllocation).Allocation.RawData = (void *)0x0;
          (pFVar5->BulkMeta).Data[0] = '\0';
          (pFVar5->BulkMeta).Data[1] = '\0';
          (pFVar5->BulkMeta).Data[2] = '\0';
          (pFVar5->BulkMeta).Data[3] = '\0';
          (pFVar5->BulkMeta).Data[4] = '\0';
          (pFVar5->BulkMeta).Data[5] = '\0';
          (pFVar5->BulkMeta).Data[6] = '\0';
          (pFVar5->BulkMeta).Data[7] = '\0';
          (pFVar5->BulkMeta).Data[8] = '\0';
          (pFVar5->BulkMeta).Data[9] = '\0';
          (pFVar5->BulkMeta).Data[10] = '\0';
          (pFVar5->BulkMeta).Data[0xb] = '\0';
          (pFVar5->BulkMeta).Data[0xc] = '\0';
          (pFVar5->BulkMeta).Data[0xd] = '\0';
          (pFVar5->BulkMeta).Data[0xe] = '\0';
          (pFVar5->BulkMeta).Data[0xf] = '\0';
          (pFVar5->BulkMeta).Data[5] = 0xff;
          (pFVar5->BulkMeta).Data[6] = 0xff;
          (pFVar5->BulkMeta).Data[7] = 0xff;
          (pFVar5->BulkMeta).Data[8] = 0xff;
          (pFVar5->BulkMeta).Data[9] = 0xff;
          *(undefined8 *)(pFVar5->BulkChunkId).Id = FIoChunkId::InvalidChunkId.Id._0_8_;
          *(undefined4 *)((pFVar5->BulkChunkId).Id + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
          this_00 = pFVar5;
        }
        pTVar6 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::AllocateMemoryForEmplace<FName_const_&>(&this->Formats,local_38);
        *(uint *)&pTVar6->field_0x0 = local_38[0].ComparisonIndex.Value;
        *(uint *)&pTVar6->field_0x4 = local_38[0].Number;
        *(FBulkData **)&pTVar6->field_0x8 = this_00;
      }
      FBulkData::Serialize(this_00,param_1,param_2,true,1,None);
      uVar7 = (int)pFVar8 + 1;
      pFVar8 = (FBulkData *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)local_res10[0]);
  }
  return;
}

