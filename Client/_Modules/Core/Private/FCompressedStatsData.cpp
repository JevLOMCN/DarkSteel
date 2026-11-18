// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ReadCompressed @ 141a12ae0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FCompressedStatsData::ReadCompressed(FCompressedStatsData *this,FArchive *param_1)

{
  longlong *plVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  longlong lVar9;
  longlong lVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res18[0] = 0;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
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
  if (local_res18[0] == 0xe0f0da4a) {
    if (local_res10[0] == 0xe0f0da4a) {
      this->bEndOfCompressedData = true;
      return;
    }
  }
  else if (local_res18[0] == 0) {
    pTVar2 = this->DestData;
    if (-1 < (int)local_res10[0]) {
      pTVar2->ArrayNum = 0;
      if (pTVar2->ArrayMax < (int)local_res10[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_res10[0],&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
      }
      pTVar2 = this->DestData;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res10[0],&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->DestData->AllocatorInstance).Data,(longlong)(int)local_res10[0]);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
  }
  pTVar2 = this->SrcData;
  if (-1 < (int)local_res18[0]) {
    pTVar2->ArrayNum = 0;
    if (pTVar2->ArrayMax < (int)local_res18[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res18[0],&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
    }
    pTVar2 = this->DestData;
    if (-1 < (int)local_res10[0]) {
      pTVar2->ArrayNum = 0;
      if (pTVar2->ArrayMax < (int)local_res10[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_res10[0],&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
      }
      pTVar2 = this->SrcData;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res18[0],&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
      pTVar2 = this->DestData;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res10[0],&pTVar2->AllocatorInstance,&pTVar2->ArrayNum,&pTVar2->ArrayMax);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->SrcData->AllocatorInstance).Data,(longlong)(int)local_res18[0]);
      lVar9 = (longlong)(int)local_res18[0];
      lVar10 = (longlong)(int)local_res10[0];
      pFVar3 = (this->SrcData->AllocatorInstance).Data;
      pFVar4 = (this->DestData->AllocatorInstance).Data;
      FVar8 = FNameEntryId::FromValidEName((EName)local_res20);
      FVar6.Number = 0;
      FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
      bVar7 = FCompression::UncompressMemory(FVar6,pFVar4,lVar10,pFVar3,lVar9,COMPRESS_NoFlags,0);
      if (!bVar7) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsFile.h"
                           ,0xcb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
}

// WriteCompressed @ 141a30150

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall FCompressedStatsData::WriteCompressed(FCompressedStatsData *this,FArchive *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  uint uVar6;
  bool bVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 local_38 [8];
  uint local_30;
  undefined4 uStack_2c;
  
  local_res8[0] = this->SrcData->ArrayNum;
  if ((int)local_res8[0] < 0xffc01) {
    pTVar9 = this->DestData;
    if (pTVar9->ArrayMax < 0x100000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x100000,&pTVar9->AllocatorInstance,pTVar9->ArrayNum,&pTVar9->ArrayMax);
    }
    uVar6 = local_res8[0];
    local_res18[0] = this->DestData->ArrayMax;
    pFVar2 = (this->DestData->AllocatorInstance).Data;
    pFVar3 = (this->SrcData->AllocatorInstance).Data;
    FVar8 = FNameEntryId::FromValidEName((EName)local_38);
    local_30 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
    uStack_2c = 0;
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = local_30;
    bVar7 = FCompression::CompressMemory
                      (FVar5,pFVar2,(int *)local_res18,pFVar3,uVar6,COMPRESS_NoFlags,0);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsFile.h"
                         ,0xaa,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    lVar10 = (longlong)(int)local_res18[0];
    pTVar9 = this->DestData;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
        lVar10 = (longlong)(int)local_res8[0];
        pTVar9 = this->SrcData;
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
        lVar10 = (longlong)(int)local_res8[0];
        pTVar9 = this->SrcData;
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
      lVar10 = (longlong)(int)local_res8[0];
      pTVar9 = this->SrcData;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(pTVar9->AllocatorInstance).Data,lVar10);
  return;
}

