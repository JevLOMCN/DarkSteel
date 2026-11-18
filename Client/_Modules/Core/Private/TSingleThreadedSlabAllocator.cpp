// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Construct<> @ 141474420

FIoFileBlockRequest * __thiscall
TSingleThreadedSlabAllocator<UE::FIoFileBlockRequest,1024>::Construct<>
          (TSingleThreadedSlabAllocator<UE::FIoFileBlockRequest,1024> *this)

{
  ushort uVar1;
  FSlab *pFVar2;
  code *pcVar3;
  FElement *pFVar4;
  uint uVar5;
  bool bVar6;
  FIoFileBlockRequest *pFVar7;
  FSlab *pFVar8;
  FSlab *pFVar9;
  longlong lVar10;
  FSlab *pFVar11;
  LARGE_INTEGER local_res8;
  
  lVar10 = 0x400;
  uVar1 = this->CurrentSlab->Allocated;
  this->CurrentSlab->Allocated = uVar1 + 1;
  if ((0x3ff < uVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < SlabSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x36,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FIoFileBlockRequest *)(*pcVar3)();
    return pFVar7;
  }
  pFVar2 = this->CurrentSlab;
  pFVar2->Elements[uVar1].Slab = pFVar2;
  if (this->CurrentSlab->Allocated == 0x400) {
    pFVar8 = ::operator_new(0x32008);
    pFVar11 = (FSlab *)0x0;
    if (pFVar8 != (FSlab *)0x0) {
      memset(&pFVar8->field_0x4,0,0x32004);
      pFVar8->Allocated = 0;
      pFVar8->Freed = 0;
      pFVar9 = pFVar8;
      do {
        pFVar9 = (FSlab *)&pFVar9->Elements[0].Slab;
        *(FSlab **)pFVar9 = (FSlab *)0x0;
        lVar10 = lVar10 + -1;
        pFVar11 = pFVar8;
      } while (lVar10 != 0);
    }
    this->CurrentSlab = pFVar11;
  }
  memset(pFVar2->Elements + uVar1,0,0xc0);
  pFVar4 = pFVar2->Elements + uVar1;
  (pFVar4->Data).Pad[0x4c] = '\b';
  (pFVar4->Data).Pad[0x4d] = '\0';
  (pFVar4->Data).Pad[0x4e] = '\0';
  (pFVar4->Data).Pad[0x4f] = '\0';
  QueryPerformanceCounter(&local_res8);
  *(LARGE_INTEGER *)(pFVar2->Elements[uVar1].Data.Pad + 0xa0) = local_res8;
  uVar5 = UE::FIoFileBlockRequest::NextSeqNo + 1;
  *(uint *)(pFVar2->Elements[uVar1].Data.Pad + 0xa8) = UE::FIoFileBlockRequest::NextSeqNo;
  UE::FIoFileBlockRequest::NextSeqNo = uVar5;
  pFVar4 = pFVar2->Elements + uVar1;
  (pFVar4->Data).Pad[0xac] = 0xff;
  (pFVar4->Data).Pad[0xad] = 0xff;
  (pFVar4->Data).Pad[0xae] = 0xff;
  (pFVar4->Data).Pad[0xaf] = 0xff;
  pFVar4 = pFVar2->Elements + uVar1;
  (pFVar4->Data).Pad[0xb0] = '\x01';
  (pFVar4->Data).Pad[0xb1] = '\0';
  (pFVar4->Data).Pad[0xb2] = '\0';
  (pFVar4->Data).Pad[0xb3] = '\0';
  (pFVar4->Data).Pad[0xb4] = '\0';
  (pFVar4->Data).Pad[0xb5] = '\0';
  (pFVar4->Data).Pad[0xb6] = '\0';
  (pFVar4->Data).Pad[0xb7] = '\0';
  pFVar2->Elements[uVar1].Data.Pad[0xb8] = '\0';
  return (FIoFileBlockRequest *)(pFVar2->Elements + uVar1);
}

// Alloc @ 141486400

FIoPlatformReadRequest * __thiscall
TSingleThreadedSlabAllocator<UE::FIoPlatformReadRequest,1024>::Alloc
          (TSingleThreadedSlabAllocator<UE::FIoPlatformReadRequest,1024> *this)

{
  ushort uVar1;
  FSlab *pFVar2;
  code *pcVar3;
  bool bVar4;
  FIoPlatformReadRequest *pFVar5;
  FSlab *pFVar6;
  FSlab *pFVar7;
  longlong lVar8;
  
  lVar8 = 0x400;
  uVar1 = this->CurrentSlab->Allocated;
  this->CurrentSlab->Allocated = uVar1 + 1;
  if ((0x3ff < uVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < SlabSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x36,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FIoPlatformReadRequest *)(*pcVar3)();
    return pFVar5;
  }
  pFVar2 = this->CurrentSlab;
  pFVar2->Elements[uVar1].Slab = pFVar2;
  if (this->CurrentSlab->Allocated == 0x400) {
    pFVar6 = ::operator_new(0x34010);
    if (pFVar6 == (FSlab *)0x0) {
      pFVar6 = (FSlab *)0x0;
    }
    else {
      memset(&pFVar6->field_0x4,0,0x3400c);
      pFVar6->Allocated = 0;
      pFVar6->Freed = 0;
      pFVar7 = pFVar6;
      do {
        pFVar7 = (FSlab *)&pFVar7->Elements[0].Slab;
        *(FSlab **)pFVar7 = (FSlab *)0x0;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    this->CurrentSlab = pFVar6;
  }
  return (FIoPlatformReadRequest *)(pFVar2->Elements + uVar1);
}

// Construct<FIoChunkBlockDecodeRequest> @ 1417892b0

FQueueEntry * __thiscall
TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512>::
Construct<FIoChunkBlockDecodeRequest>
          (TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512> *this,
          FIoChunkBlockDecodeRequest *param_1)

{
  ushort uVar1;
  FSlab *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  FElement *pFVar5;
  EIoSignatureHashFunction EVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  bool bVar22;
  FQueueEntry *pFVar23;
  FSlab *pFVar24;
  FSlab *pFVar25;
  longlong lVar26;
  FSlab *pFVar27;
  
  lVar26 = 0x200;
  uVar1 = this->CurrentSlab->Allocated;
  this->CurrentSlab->Allocated = uVar1 + 1;
  if ((0x1ff < uVar1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementIndex < SlabSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                          ,0x36,L""), bVar22)) {
    pcVar3 = (code *)swi(3);
    pFVar23 = (FQueueEntry *)(*pcVar3)();
    return pFVar23;
  }
  pFVar2 = this->CurrentSlab;
  pFVar2->Elements[uVar1].Slab = pFVar2;
  if (this->CurrentSlab->Allocated == 0x200) {
    pFVar24 = ::operator_new(0x14010);
    pFVar27 = (FSlab *)0x0;
    if (pFVar24 != (FSlab *)0x0) {
      memset(&pFVar24->field_0x4,0,0x1400c);
      pFVar24->Allocated = 0;
      pFVar24->Freed = 0;
      pFVar25 = pFVar24;
      do {
        pFVar25 = (FSlab *)&pFVar25->Elements[0].Slab;
        *(FSlab **)pFVar25 = (FSlab *)0x0;
        lVar26 = lVar26 + -1;
        pFVar27 = pFVar24;
      } while (lVar26 != 0);
    }
    this->CurrentSlab = pFVar27;
  }
  uVar4 = (param_1->Params).EncryptionKey.Size;
  *(void **)pFVar2->Elements[uVar1].Data.Pad = (param_1->Params).EncryptionKey.Data;
  *(ulong64 *)(pFVar2->Elements[uVar1].Data.Pad + 8) = uVar4;
  uVar4 = (param_1->Params).BlockHash.Size;
  *(void **)(pFVar2->Elements[uVar1].Data.Pad + 0x10) = (param_1->Params).BlockHash.Data;
  *(ulong64 *)(pFVar2->Elements[uVar1].Data.Pad + 0x18) = uVar4;
  EVar6 = (param_1->Params).HashFunction;
  uVar7 = (param_1->Params).field_0x29;
  uVar8 = (param_1->Params).field_0x2a;
  uVar9 = (param_1->Params).field_0x2b;
  uVar10 = (param_1->Params).field_0x2c;
  uVar11 = (param_1->Params).field_0x2d;
  uVar12 = (param_1->Params).field_0x2e;
  uVar13 = (param_1->Params).field_0x2f;
  *(FName *)(pFVar2->Elements[uVar1].Data.Pad + 0x20) = (param_1->Params).CompressionFormat;
  pFVar5 = pFVar2->Elements + uVar1;
  (pFVar5->Data).Pad[0x28] = EVar6;
  (pFVar5->Data).Pad[0x29] = uVar7;
  (pFVar5->Data).Pad[0x2a] = uVar8;
  (pFVar5->Data).Pad[0x2b] = uVar9;
  (pFVar5->Data).Pad[0x2c] = uVar10;
  (pFVar5->Data).Pad[0x2d] = uVar11;
  (pFVar5->Data).Pad[0x2e] = uVar12;
  (pFVar5->Data).Pad[0x2f] = uVar13;
  uVar4 = (param_1->EncodedBlock).Size;
  *(void **)(pFVar2->Elements[uVar1].Data.Pad + 0x30) = (param_1->EncodedBlock).Data;
  *(ulong64 *)(pFVar2->Elements[uVar1].Data.Pad + 0x38) = uVar4;
  uVar4 = (param_1->DecodedBlock).Size;
  *(void **)(pFVar2->Elements[uVar1].Data.Pad + 0x40) = (param_1->DecodedBlock).Data;
  *(ulong64 *)(pFVar2->Elements[uVar1].Data.Pad + 0x48) = uVar4;
  uVar7 = (param_1->OnDecoded).field_0x1;
  uVar8 = (param_1->OnDecoded).field_0x2;
  uVar9 = (param_1->OnDecoded).field_0x3;
  uVar10 = (param_1->OnDecoded).field_0x4;
  uVar11 = (param_1->OnDecoded).field_0x5;
  uVar12 = (param_1->OnDecoded).field_0x6;
  uVar13 = (param_1->OnDecoded).field_0x7;
  pFVar5 = pFVar2->Elements + uVar1;
  (pFVar5->Data).Pad[0x50] = (param_1->OnDecoded).field_0x0;
  (pFVar5->Data).Pad[0x51] = uVar7;
  (pFVar5->Data).Pad[0x52] = uVar8;
  (pFVar5->Data).Pad[0x53] = uVar9;
  (pFVar5->Data).Pad[0x54] = uVar10;
  (pFVar5->Data).Pad[0x55] = uVar11;
  (pFVar5->Data).Pad[0x56] = uVar12;
  (pFVar5->Data).Pad[0x57] = uVar13;
  uVar7 = (param_1->OnDecoded).field_0x29;
  uVar8 = (param_1->OnDecoded).field_0x2a;
  uVar9 = (param_1->OnDecoded).field_0x2b;
  uVar10 = (param_1->OnDecoded).field_0x2c;
  uVar11 = (param_1->OnDecoded).field_0x2d;
  uVar12 = (param_1->OnDecoded).field_0x2e;
  uVar13 = (param_1->OnDecoded).field_0x2f;
  pFVar5 = pFVar2->Elements + uVar1;
  (pFVar5->Data).Pad[0x78] = (param_1->OnDecoded).field_0x28;
  (pFVar5->Data).Pad[0x79] = uVar7;
  (pFVar5->Data).Pad[0x7a] = uVar8;
  (pFVar5->Data).Pad[0x7b] = uVar9;
  (pFVar5->Data).Pad[0x7c] = uVar10;
  (pFVar5->Data).Pad[0x7d] = uVar11;
  (pFVar5->Data).Pad[0x7e] = uVar12;
  (pFVar5->Data).Pad[0x7f] = uVar13;
  *(undefined8 *)&(param_1->OnDecoded).field_0x28 = 0;
  uVar7 = (param_1->OnDecoded).field_0x11;
  uVar8 = (param_1->OnDecoded).field_0x12;
  uVar9 = (param_1->OnDecoded).field_0x13;
  uVar10 = (param_1->OnDecoded).field_0x14;
  uVar11 = (param_1->OnDecoded).field_0x15;
  uVar12 = (param_1->OnDecoded).field_0x16;
  uVar13 = (param_1->OnDecoded).field_0x17;
  uVar14 = (param_1->OnDecoded).field_0x18;
  uVar15 = (param_1->OnDecoded).field_0x19;
  uVar16 = (param_1->OnDecoded).field_0x1a;
  uVar17 = (param_1->OnDecoded).field_0x1b;
  uVar18 = (param_1->OnDecoded).field_0x1c;
  uVar19 = (param_1->OnDecoded).field_0x1d;
  uVar20 = (param_1->OnDecoded).field_0x1e;
  uVar21 = (param_1->OnDecoded).field_0x1f;
  pFVar5 = pFVar2->Elements + uVar1;
  (pFVar5->Data).Pad[0x60] = (param_1->OnDecoded).field_0x10;
  (pFVar5->Data).Pad[0x61] = uVar7;
  (pFVar5->Data).Pad[0x62] = uVar8;
  (pFVar5->Data).Pad[99] = uVar9;
  (pFVar5->Data).Pad[100] = uVar10;
  (pFVar5->Data).Pad[0x65] = uVar11;
  (pFVar5->Data).Pad[0x66] = uVar12;
  (pFVar5->Data).Pad[0x67] = uVar13;
  pFVar5 = pFVar2->Elements + uVar1;
  (pFVar5->Data).Pad[0x68] = uVar14;
  (pFVar5->Data).Pad[0x69] = uVar15;
  (pFVar5->Data).Pad[0x6a] = uVar16;
  (pFVar5->Data).Pad[0x6b] = uVar17;
  (pFVar5->Data).Pad[0x6c] = uVar18;
  (pFVar5->Data).Pad[0x6d] = uVar19;
  (pFVar5->Data).Pad[0x6e] = uVar20;
  (pFVar5->Data).Pad[0x6f] = uVar21;
  uVar7 = (param_1->OnDecoded).field_0x21;
  uVar8 = (param_1->OnDecoded).field_0x22;
  uVar9 = (param_1->OnDecoded).field_0x23;
  uVar10 = (param_1->OnDecoded).field_0x24;
  uVar11 = (param_1->OnDecoded).field_0x25;
  uVar12 = (param_1->OnDecoded).field_0x26;
  uVar13 = (param_1->OnDecoded).field_0x27;
  pFVar5 = pFVar2->Elements + uVar1;
  (pFVar5->Data).Pad[0x70] = (param_1->OnDecoded).field_0x20;
  (pFVar5->Data).Pad[0x71] = uVar7;
  (pFVar5->Data).Pad[0x72] = uVar8;
  (pFVar5->Data).Pad[0x73] = uVar9;
  (pFVar5->Data).Pad[0x74] = uVar10;
  (pFVar5->Data).Pad[0x75] = uVar11;
  (pFVar5->Data).Pad[0x76] = uVar12;
  (pFVar5->Data).Pad[0x77] = uVar13;
  if (*(longlong *)(pFVar2->Elements[uVar1].Data.Pad + 0x50) != 0) {
    *(undefined8 *)&param_1->OnDecoded = 0;
  }
  pFVar5 = pFVar2->Elements + uVar1;
  (pFVar5->Data).Pad[0x80] = '\0';
  (pFVar5->Data).Pad[0x81] = '\0';
  (pFVar5->Data).Pad[0x82] = '\0';
  (pFVar5->Data).Pad[0x83] = '\0';
  (pFVar5->Data).Pad[0x84] = '\0';
  (pFVar5->Data).Pad[0x85] = '\0';
  (pFVar5->Data).Pad[0x86] = '\0';
  (pFVar5->Data).Pad[0x87] = '\0';
  return (FQueueEntry *)(pFVar2->Elements + uVar1);
}

// Destroy @ 1417c34e0

void __thiscall
TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512>::Destroy
          (TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512> *this,
          FQueueEntry *param_1)

{
  longlong *plVar1;
  short *psVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  if (*(longlong *)&(param_1->Request).OnDecoded != 0) {
    plVar1 = *(longlong **)&(param_1->Request).OnDecoded.field_0x28;
    plVar5 = (longlong *)&(param_1->Request).OnDecoded.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  psVar2 = param_1[1].Request.Params.EncryptionKey.Data;
  psVar2[1] = psVar2[1] + 1;
  if (psVar2[1] == 0x200) {
    if (*psVar2 != 0x200) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slab->Freed == Slab->Allocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x48,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ::operator_delete(psVar2,0x14010);
    return;
  }
  return;
}

