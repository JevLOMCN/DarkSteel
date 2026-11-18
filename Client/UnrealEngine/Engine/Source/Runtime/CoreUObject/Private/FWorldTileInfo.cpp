// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// Read @ 141f09790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FWorldTileInfo::Read(FString *param_1,FWorldTileInfo *param_2)

{
  FWorldTileLayer *pFVar1;
  FString *pFVar2;
  TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TIntPoint<int>_u_0 TVar5;
  bool bVar6;
  IFileManager *pIVar7;
  FArchive *pFVar8;
  wchar_t *pwVar9;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int iStack_224;
  double local_220;
  double dStack_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined1 local_1f0;
  undefined4 uStack_1ef;
  undefined2 uStack_1eb;
  undefined1 uStack_1e9;
  FString local_1e8;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  bool local_1c8;
  bool local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  FScriptContainerElement *local_1a8;
  undefined8 local_1a0;
  int local_198;
  FPackageFileSummary local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238 = 0;
  iStack_230 = 0;
  uStack_22c = 0;
  local_220 = 0.0;
  local_1f8 = 0.0;
  dStack_218 = 0.0;
  dStack_210 = 0.0;
  uStack_228 = 0;
  iStack_224 = 0;
  local_208 = 0.0;
  dStack_200 = 0.0;
  local_1f0 = 0;
  uStack_1ef = 0;
  uStack_1eb = 0;
  uStack_1e9 = 0;
  ::FString::FString(&local_1e8,L"Uncategorized");
  pFVar1 = &param_2->Layer;
  local_1d8 = (int)___xmm_0000c350000000000000000000000000;
  uStack_1d4 = (undefined4)((ulonglong)___xmm_0000c350000000000000000000000000 >> 0x20);
  uStack_1d0 = (undefined4)_UNK_1507f03a8;
  iStack_1cc = (int)((ulonglong)_UNK_1507f03a8 >> 0x20);
  *(undefined8 *)&(param_2->Position).field0_0x0 = local_238;
  *(ulonglong *)&(param_2->AbsolutePosition).field0_0x0 = CONCAT44(uStack_228,uStack_22c);
  (param_2->Position).field0_0x0._s_0.Z = iStack_230;
  (param_2->Bounds).Min.field0_0x0._s_0.X = local_220;
  (param_2->Bounds).Min.field0_0x0._s_0.Y = dStack_218;
  (param_2->AbsolutePosition).field0_0x0._s_0.Z = iStack_224;
  local_1c8 = true;
  local_1c0 = false;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  local_1a8 = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  local_198 = 0;
  (param_2->Bounds).Min.field0_0x0._s_0.Z = dStack_210;
  (param_2->Bounds).Max.field0_0x0._s_0.X = local_208;
  (param_2->Bounds).Max.field0_0x0._s_0.Y = dStack_200;
  (param_2->Bounds).Max.field0_0x0._s_0.Z = local_1f8;
  (param_2->Bounds).IsValid = local_1f0;
  (param_2->Bounds).Pad[0] = (char)uStack_1ef;
  (param_2->Bounds).Pad[1] = (char)((uint)uStack_1ef >> 8);
  (param_2->Bounds).Pad[2] = (char)((uint)uStack_1ef >> 0x10);
  (param_2->Bounds).Pad[3] = (char)((uint)uStack_1ef >> 0x18);
  (param_2->Bounds).Pad[4] = (char)uStack_1eb;
  (param_2->Bounds).Pad[5] = (char)((ushort)uStack_1eb >> 8);
  (param_2->Bounds).Pad[6] = uStack_1e9;
  if (pFVar1 != (FWorldTileLayer *)&local_1e8) {
    pFVar4 = (pFVar1->Name).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Name).Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
    (param_2->Layer).Name.Data.ArrayNum = local_1e8.Data.ArrayNum;
    (param_2->Layer).Name.Data.ArrayMax = local_1e8.Data.ArrayMax;
    local_1e8.Data.ArrayNum = 0;
    local_1e8.Data.ArrayMax = 0;
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  (param_2->Layer).Reserved0 = local_1d8;
  TVar5._s_0.Y = uStack_1d0;
  TVar5._s_0.X = uStack_1d4;
  (param_2->Layer).Reserved1.field0_0x0 = TVar5;
  (param_2->Layer).StreamingDistance = iStack_1cc;
  (param_2->Layer).DistanceStreamingEnabled = local_1c8;
  pFVar2 = &param_2->ParentTilePackageName;
  param_2->bHideInTileView = local_1c0;
  if (pFVar2 != (FString *)&local_1b8) {
    pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_1b8.Data;
    (param_2->ParentTilePackageName).Data.ArrayNum = (int)local_1b0;
    (param_2->ParentTilePackageName).Data.ArrayMax = local_1b0._4_4_;
    local_1b0 = 0;
    local_1b8.Data = (FScriptContainerElement *)0x0;
  }
  pTVar3 = &param_2->LODList;
  if (pTVar3 != (TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *)&local_1a8) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = local_1a8;
    (param_2->LODList).ArrayNum = (int)local_1a0;
    local_1a8 = (FScriptContainerElement *)0x0;
    (param_2->LODList).ArrayMax = local_1a0._4_4_;
    local_1a0 = 0;
  }
  param_2->ZOrder = local_198;
  if (local_1a8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pIVar7 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar8 = (FArchive *)(**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,pwVar9,0);
  bVar6 = false;
  if (pFVar8 != (FArchive *)0x0) {
    FPackageFileSummary::FPackageFileSummary(&local_188);
    ::operator<<(pFVar8,&local_188);
    if (local_188.Tag == -0x61d57c3f) {
      if (local_188.WorldTileInfoDataOffset != 0) {
        (**(code **)(*(longlong *)pFVar8 + 0x1b8))
                  (pFVar8,(longlong)local_188.WorldTileInfoDataOffset);
        (**(code **)(*(longlong *)pFVar8 + 0x110))(pFVar8,local_188.FileVersionUE);
        (**(code **)(*(longlong *)pFVar8 + 0x120))(pFVar8,&local_188.SavedByEngineVersion);
        (**(code **)(*(longlong *)pFVar8 + 0x118))(pFVar8,local_188.FileVersionLicenseeUE);
        (**(code **)(*(longlong *)pFVar8 + 0x68))(pFVar8,&local_188.CustomVersionContainer);
        StreamArchive(param_2,pFVar8);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_188.ChunkIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.ChunkIDs.AllocatorInstance.Data);
    }
    if (local_188.CompatibleWithEngineVersion.Branch.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.CompatibleWithEngineVersion.Branch.Data.AllocatorInstance.Data);
    }
    if (local_188.SavedByEngineVersion.Branch.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.SavedByEngineVersion.Branch.Data.AllocatorInstance.Data);
    }
    if (local_188.Generations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Generations.AllocatorInstance.Data);
    }
    if (local_188.LocalizationId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.LocalizationId.Data.AllocatorInstance.Data);
    }
    if (local_188.PackageName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.PackageName.Data.AllocatorInstance.Data);
    }
    if (local_188.CustomVersionContainer.Versions.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.CustomVersionContainer.Versions.AllocatorInstance.Data);
    }
    (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
  }
  return bVar6;
}

// StreamArchive @ 141f146e0

void __thiscall FWorldTileInfo::StreamArchive(FWorldTileInfo *this,FArchive *param_1)

{
  uchar *puVar1;
  int *piVar2;
  uchar *puVar3;
  int *piVar4;
  int iVar5;
  FArchive *pFVar6;
  TIntPoint<int>_u_0 local_res8;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar5 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar5 < 1) {
      UE::Math::operator<<(param_1,(TIntPoint<int> *)&local_res8._s_0);
      (this->Position).field0_0x0._s_0.X = local_res8._s_0.X;
      (this->Position).field0_0x0._s_0.Y = local_res8._s_0.Y;
      (this->Position).field0_0x0._s_0.Z = 0;
      goto LAB_141f14756;
    }
  }
  UE::Math::operator<<(param_1,&this->Position);
LAB_141f14756:
  puVar1 = &(this->Bounds).IsValid;
  pFVar6 = UE::Math::operator<<(param_1,&(this->Bounds).Min);
  pFVar6 = UE::Math::operator<<(pFVar6,&(this->Bounds).Max);
  puVar3 = (uchar *)**(undefined8 **)&pFVar6->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,puVar1,1);
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 1;
  }
  piVar2 = &(this->Layer).Reserved0;
  pFVar6 = ::operator<<(param_1,&(this->Layer).Name);
  piVar4 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar4 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  UE::Math::operator<<(pFVar6,&(this->Layer).Reserved1);
  if (0x10b < *(int *)&param_1->field_0x40) {
    piVar2 = &(this->Layer).StreamingDistance;
    piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  if (0x148 < *(int *)&param_1->field_0x40) {
    ::operator<<(param_1,&(this->Layer).DistanceStreamingEnabled);
  }
  if (0x10b < *(int *)&param_1->field_0x40) {
    pFVar6 = ::operator<<(param_1,&this->bHideInTileView);
    ::operator<<(pFVar6,&this->ParentTilePackageName);
  }
  if (0x13b < *(int *)&param_1->field_0x40) {
    TArrayPrivateFriend::Serialize<FWorldTileLODInfo,TSizedDefaultAllocator<32>_>
              (param_1,&this->LODList);
  }
  if (0x13e < *(int *)&param_1->field_0x40) {
    piVar2 = &this->ZOrder;
    piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  if ((*(uint *)&param_1->field_0x34 & 0x400000) != 0) {
    UE::Math::operator<<(param_1,&this->AbsolutePosition);
  }
  return;
}

// StreamStructuredArchive @ 141f14930

void __thiscall
FWorldTileInfo::StreamStructuredArchive(FWorldTileInfo *this,FStructuredArchiveSlot param_1)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  FStructuredArchiveSlot FVar4;
  longlong *plVar5;
  uchar *puVar6;
  int *piVar7;
  FArchive *pFVar8;
  FStructuredArchiveRecord *pFVar9;
  FStructuredArchiveSlot local_res8;
  FSlotBase local_res10;
  TNamedValue<UE::Math::TIntVector3<int>_> local_38;
  
  local_res8 = param_1;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  iVar3 = (int)*(undefined8 *)&pFVar8->field_0x40;
  local_38.Value = &this->Position;
  pFVar9 = FStructuredArchiveRecord::operator<<<UE::Math::TIntVector3<int>_>(&local_res8,&local_38);
  FVar4 = *(FStructuredArchiveSlot *)pFVar9;
  UE::Math::operator<<(FVar4,&(this->Bounds).Min);
  UE::Math::operator<<(FVar4,&(this->Bounds).Max);
  puVar1 = &(this->Bounds).IsValid;
  plVar5 = *(longlong **)(*(longlong *)FVar4 + 8);
  puVar6 = *(uchar **)plVar5[1];
  if ((uchar *)((undefined8 *)plVar5[1])[1] < puVar6 + 1) {
    (**(code **)(*plVar5 + 0x188))(plVar5,puVar1,1);
  }
  else {
    *puVar1 = *puVar6;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 1;
  }
  ::operator<<(*(FStructuredArchiveSlot *)pFVar9,&this->Layer);
  if (0x10b < iVar3) {
    ::operator<<(*(FArchive **)(*(longlong *)local_res8 + 8),&this->bHideInTileView);
    ::operator<<(*(FArchive **)(*(longlong *)local_res8 + 8),&this->ParentTilePackageName);
  }
  if (0x13b < iVar3) {
    operator<<<FWorldTileLODInfo>(local_res8,&this->LODList);
  }
  if (0x13e < iVar3) {
    piVar2 = &this->ZOrder;
    pFVar8 = *(FArchive **)(*(longlong *)local_res8 + 8);
    piVar7 = (int *)**(undefined8 **)&pFVar8->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar8->field_0x8)[1] < piVar7 + 1) {
      if ((pFVar8->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar8 + 0x188))(pFVar8,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar8,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar7;
      **(longlong **)&pFVar8->field_0x8 = **(longlong **)&pFVar8->field_0x8 + 4;
    }
  }
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((*(uint *)&pFVar8->field_0x34 & 0x400000) != 0) {
    local_38.Value = &this->AbsolutePosition;
    FStructuredArchiveRecord::operator<<<UE::Math::TIntVector3<int>_>(&local_res8,&local_38);
  }
  return;
}

