// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// Add @ 14e082530

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FHairStrandsBulkCommon::FQuery::Add
          (FQuery *this,FHairBulkContainer *param_1,wchar_t *param_2,uint *param_3,uint param_4)

{
  EQueryType EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  FChunk *pFVar6;
  TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_> *this_00;
  
  if (this->Type == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this->Type;
  if (EVar1 == ReadIO) {
    if (param_4 == 0) {
      *param_3 = 0;
      lVar5 = FBulkData::GetBulkDataSize((FBulkData *)&param_1->Data);
      param_4 = (uint)lVar5;
    }
    if (param_4 < *param_3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSize >= InOffset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                         ,299,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (this->StreamingRequest == (FHairStreamingRequest *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                         ,0x12d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = &this->StreamingRequest->Chunks;
    if ((int)(param_4 - *param_3) < 1) {
      pFVar6 = TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_>::
               AddDefaulted_GetRef(this_00);
      pFVar6->Status = Completed;
      pFVar6->Container = param_1;
      pFVar6->Size = param_4 - *param_3;
      pFVar6->Offset = *param_3;
      pFVar6->TotalSize = param_4;
      param_1->ChunkRequest = pFVar6;
    }
    else {
      pFVar6 = TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_>::
               AddDefaulted_GetRef(this_00);
      pFVar6->Status = Pending;
      pFVar6->Container = param_1;
      pFVar6->Size = param_4 - *param_3;
      pFVar6->Offset = *param_3;
      pFVar6->TotalSize = param_4;
      param_1->ChunkRequest = pFVar6;
      if (this->OutReadIO == (FBatchBuilder *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutReadIO",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                           ,0x13d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FBulkDataBatchRequest::FBatchBuilder::Read
                (this->OutReadIO,(FBulkData *)&param_1->Data,(ulonglong)*param_3,
                 (ulonglong)pFVar6->Size,AIOP_Normal,&pFVar6->Data_IO,(FBulkDataRequest *)0x0);
    }
  }
  else if (EVar1 == ReadWriteIO) {
    if (this->OutWriteIO == (FArchive *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutWriteIO",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                         ,0x14e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->OutWriteIO->field_0x28 & 4) != 0) {
      FBulkData::SetBulkDataFlags((FBulkData *)&param_1->Data,0x400);
    }
    FBulkData::Serialize((FBulkData *)&param_1->Data,this->OutWriteIO,this->Owner,false,1,None);
  }
  else if (EVar1 == UnloadData) {
    uVar4 = param_4;
    if (*param_3 < param_4) {
      uVar4 = *param_3;
    }
    *param_3 = uVar4;
    if (this->StreamingRequest == (FHairStreamingRequest *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingRequest != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                         ,0x15a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar6 = TArray<FHairStreamingRequest::FChunk,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
                       (&this->StreamingRequest->Chunks);
    pFVar6->Status = Unloading;
    pFVar6->Container = param_1;
    pFVar6->Size = param_4;
    pFVar6->Offset = *param_3;
    pFVar6->TotalSize = param_4;
    param_1->ChunkRequest = pFVar6;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\HairStrandsDatas.cpp"
                       ,0x165,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// GetPointCount @ 14e09cc80

uint __thiscall FHairStrandsBulkCommon::FQuery::GetPointCount(FQuery *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->StreamingRequest != (FHairStreamingRequest *)0x0) {
    return this->StreamingRequest->PointCount;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StreamingRequest",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\HairStrandsDatas.h"
                     ,0x1d5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->StreamingRequest->PointCount;
}

