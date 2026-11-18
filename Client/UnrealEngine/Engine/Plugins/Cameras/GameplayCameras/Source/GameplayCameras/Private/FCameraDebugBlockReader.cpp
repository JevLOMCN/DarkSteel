// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// Read @ 14d5c8e30

FCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockReader::Read(FCameraDebugBlockReader *this)

{
  FArchive *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FCameraDebugBlock *pFVar5;
  byte *pbVar6;
  uchar local_res8 [32];
  
  if ((this->Archive->field_0x28 & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Archive.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                       ,0xa0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FCameraDebugBlock *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = this->Archive;
  puVar2 = (uchar *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  if (local_res8[0] != FCameraDebugBlockSerializer::TokenBufferStart) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Token == TokenBufferStart",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                       ,0xa5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FCameraDebugBlock *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = this->Archive;
  puVar2 = (uchar *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  if (local_res8[0] != FCameraDebugBlockSerializer::TokenSerializerVersion) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Token == TokenSerializerVersion",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FCameraDebugBlock *)(*pcVar3)();
      return pFVar5;
    }
  }
  while( true ) {
    pFVar1 = this->Archive;
    puVar2 = (uchar *)**(undefined8 **)&pFVar1->field_0x8;
    if ((uchar *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar2 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
    }
    else {
      local_res8[0] = *puVar2;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    if (local_res8[0] == FCameraDebugBlockSerializer::TokenBufferEnd) goto LAB_14d5c8fd7;
    if (local_res8[0] != FCameraDebugBlockSerializer::TokenBlockStart) break;
    ReadImpl(this);
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<657926107131019447>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                     ,0xb7,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FCameraDebugBlock *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d5c8fd7:
  SetupRelatedBlocks(this);
  if (0 < *(int *)&(this->BlocksByIndex).field_0x28) {
    pbVar6 = *(byte **)&(this->BlocksByIndex).field_0x20;
    if (pbVar6 == (byte *)0x0) {
      pbVar6 = &(this->BlocksByIndex).field_0x10;
    }
    if ((*pbVar6 & 1) != 0) goto LAB_14d5c9026;
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<657926107131019454>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                     ,0xbe,"BlocksByIndex.IsValidIndex(0)");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FCameraDebugBlock *)(*pcVar3)();
    return pFVar5;
  }
LAB_14d5c9026:
  return (FCameraDebugBlock *)**(undefined8 **)&this->BlocksByIndex;
}

// ReadImpl @ 14d5c92a0

void __thiscall UE::Cameras::FCameraDebugBlockReader::ReadImpl(FCameraDebugBlockReader *this)

{
  FArchive *pFVar1;
  FCameraObjectTypeRegistry *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  longlong *plVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uchar local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [4];
  FName local_88;
  longlong *local_80;
  longlong **local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FSparseArrayAllocationInfo local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  pFVar1 = this->Archive;
  puVar6 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar6 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar6;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  lVar10 = 0;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  (**(code **)(*(longlong *)this->Archive + 0x178))(this->Archive,&local_88);
  if ((local_88 == (FName)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockTypeName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                         ,0xcb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar6 = TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
           ::Find((TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                   *)this->TypeRegistry,local_88);
  if (puVar6 == (uint *)0x0) {
    uVar9 = 0xffffffff;
LAB_14d5c9369:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockTypeID.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                       ,0xce,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar9 = *puVar6;
    if (uVar9 == 0xffffffff) goto LAB_14d5c9369;
  }
  pFVar2 = this->TypeRegistry;
  if (((uVar9 == 0xffffffff) || ((int)uVar9 < 0)) ||
     (*(int *)&(pFVar2->TypeInfos).field_0x28 <= (int)uVar9)) {
LAB_14d5c9407:
    local_res10[0] = 0;
    bVar5 = `UE::Cameras::FCameraObjectTypeRegistry::GetTypeInfo'::__l3::<lambda_1>::operator()
                      (local_res10);
    if (bVar5) goto LAB_14d5c9418;
  }
  else {
    if ((*(int *)&(pFVar2->TypeInfos).field_0x28 <= (int)uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar11 = *(undefined1 **)&(pFVar2->TypeInfos).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(pFVar2->TypeInfos).field_0x10;
    }
    if ((*(uint *)(puVar11 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) == 0) goto LAB_14d5c9407;
LAB_14d5c9418:
    lVar10 = (longlong)(int)uVar9 * 0x20 + *(longlong *)&pFVar2->TypeInfos;
    if (lVar10 != 0) goto LAB_14d5c9450;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("BlockTypeInfo",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                     ,0xd0,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d5c9450:
  plVar7 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this->Storage,
                      *(uint *)(lVar10 + 8),*(uint *)(lVar10 + 0xc));
  if ((plVar7 == (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewBlockPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                         ,0xd3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(lVar10 + 0x10))(plVar7);
  local_80 = plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7,this->Archive);
  pFVar1 = this->Archive;
  puVar3 = (uchar *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  if ((local_res8[0] != FCameraDebugBlockSerializer::TokenRelatedIndices) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Token == TokenRelatedIndices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                         ,0xdf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(this->Archive,&local_58);
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(this->Archive,&local_48);
  local_78 = &local_80;
  local_70 = &local_58;
  TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices_&&>_>
            ((TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices,0>,FDefaultSetAllocator>
              *)&this->RelatedIndices,
             (TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices_&&>
              *)(local_res18 + 2),(bool *)&local_78);
  pFVar1 = this->Archive;
  puVar3 = (uchar *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res8,1);
  }
  else {
    local_res8[0] = *puVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  if ((local_res8[0] != FCameraDebugBlockSerializer::TokenBlockEnd) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Token == TokenBlockEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                         ,0xe7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar7 = local_80;
  pFVar8 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->BlocksByIndex,
                      &local_68,local_res18[0]);
  if (pFVar8->Pointer != (undefined8 *)0x0) {
    *(longlong **)pFVar8->Pointer = plVar7;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// SetupRelatedBlocks @ 14d5cfae0

void __thiscall
UE::Cameras::FCameraDebugBlockReader::SetupRelatedBlocks(FCameraDebugBlockReader *this)

{
  ulonglong uVar1;
  int iVar2;
  FCameraDebugBlock *this_00;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar2 = *(int *)&(this->RelatedIndices).field_0x28;
  puVar3 = &(this->RelatedIndices).field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->RelatedIndices).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar3;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d5cfb7d;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar14 + -1 + (int)lVar8;
    if (iVar2 < iVar7) {
      iVar7 = iVar2;
    }
  }
LAB_14d5cfb7d:
  uVar11 = *(uint *)&(this->RelatedIndices).field_0x28;
  uVar9 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar13);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_84,
                       *(int *)&(this->RelatedIndices).field_0x8 -
                       *(int *)&(this->RelatedIndices).field_0x34);
  local_res20 = uVar11;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->RelatedIndices).field_0x28;
  if (uVar11 != uVar6) {
    puVar12 = *(undefined1 **)&(this->RelatedIndices).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar3;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar6;
      local_res20 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d5cfc81;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar9;
    local_res20 = uVar11;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
      local_res20 = uVar6;
    }
  }
LAB_14d5cfc81:
  do {
    if (*(int *)&(this->RelatedIndices).field_0x8 - *(int *)&(this->RelatedIndices).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Cameras::FCameraDebugBlock_*,UE::Cameras::FCameraDebugBlockReader::FRelatedIndices>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar11) &&
       (TStack_70.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->RelatedIndices).field_0x10)) {
      return;
    }
    puVar16 = (undefined8 *)
              ((longlong)TStack_70.CurrentBitIndex * 0x30 + *(longlong *)&this->RelatedIndices);
    puVar10 = (uint *)puVar16[1];
    iVar2 = *(int *)(puVar16 + 2);
    this_00 = (FCameraDebugBlock *)*puVar16;
    puVar15 = puVar10 + iVar2;
    while( true ) {
      if (*(int *)(puVar16 + 2) != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar10 == puVar15) break;
      uVar6 = *puVar10;
      lVar8 = (longlong)(int)uVar6;
      if (((int)uVar6 < 0) || (*(int *)&(this->BlocksByIndex).field_0x28 <= (int)uVar6)) {
LAB_14d5cfd53:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BlocksByIndex.IsValidIndex(AttachmentIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                           ,0xf4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if ((*(int *)&(this->BlocksByIndex).field_0x28 <= (int)uVar6) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined1 **)&(this->BlocksByIndex).field_0x20;
        puVar12 = &(this->BlocksByIndex).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar12 = puVar3;
        }
        uVar11 = uVar6 & 0x1f;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0x1f;
        }
        if ((*(uint *)(puVar12 + (longlong)((int)uVar6 >> 5) * 4) >> uVar11 & 1) == 0)
        goto LAB_14d5cfd53;
      }
      FCameraDebugBlock::Attach
                (this_00,*(FCameraDebugBlock **)(*(longlong *)&this->BlocksByIndex + lVar8 * 8));
      puVar10 = puVar10 + 1;
    }
    puVar10 = (uint *)puVar16[3];
    iVar2 = *(int *)(puVar16 + 4);
    puVar15 = puVar10 + iVar2;
    while( true ) {
      if (*(int *)(puVar16 + 4) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar10 == puVar15) break;
      uVar6 = *puVar10;
      lVar8 = (longlong)(int)uVar6;
      if (((int)uVar6 < 0) || (*(int *)&(this->BlocksByIndex).field_0x28 <= (int)uVar6)) {
LAB_14d5cfe1f:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BlocksByIndex.IsValidIndex(ChildIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                           ,0xfb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if ((*(int *)&(this->BlocksByIndex).field_0x28 <= (int)uVar6) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined1 **)&(this->BlocksByIndex).field_0x20;
        puVar12 = &(this->BlocksByIndex).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar12 = puVar3;
        }
        uVar11 = uVar6 & 0x1f;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0x1f;
        }
        if ((*(uint *)(puVar12 + (longlong)((int)uVar6 >> 5) * 4) >> uVar11 & 1) == 0)
        goto LAB_14d5cfe1f;
      }
      FCameraDebugBlock::AddChild
                (this_00,*(FCameraDebugBlock **)(*(longlong *)&this->BlocksByIndex + lVar8 * 8));
      puVar10 = puVar10 + 1;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    uVar11 = local_res20;
  } while( true );
}

