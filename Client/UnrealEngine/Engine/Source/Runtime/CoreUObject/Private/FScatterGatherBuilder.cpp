// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FScatterGatherBuilder @ 141f22440

FScatterGatherBuilder * __thiscall
FBulkDataBatchRequest::FScatterGatherBuilder::FScatterGatherBuilder
          (FScatterGatherBuilder *this,int param_1)

{
  int *piVar1;
  
  this->_padding_ = 0;
  piVar1 = &(this->Requests).ArrayMax;
  *(int *)&this->_padding_ = param_1;
  this->_padding_ = 0;
  (this->Requests).AllocatorInstance.SecondaryData =
       (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0;
  *piVar1 = 8;
  (this->Requests).ArrayNum = 0;
  if (8 < param_1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>_>
              (0x18,8,param_1,&(this->Requests).AllocatorInstance,0,piVar1);
  }
  return this;
}

// Issue @ 141f3aad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::FScatterGatherBuilder::Issue
          (FScatterGatherBuilder *this,FIoBuffer *param_1,EAsyncIOPriorityAndFlags param_2,
          TFunction<void___cdecl(FBulkDataRequest::EStatus)> *param_3,FBulkDataBatchRequest *param_4
          )

{
  int *piVar1;
  ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> FVar2;
  undefined8 *puVar3;
  BufCore *pBVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FIoBuffer *pFVar12;
  FBatchHandle *pFVar13;
  FIoRequest FVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> FVar20;
  uchar *puVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  uchar *puVar24;
  FScatterGatherBuilder *this_00;
  undefined1 auStackY_158 [32];
  TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *in_stack_fffffffffffffec8;
  int iVar25;
  undefined1 local_128;
  undefined1 local_127 [3];
  uint local_124;
  EAsyncIOPriorityAndFlags local_120;
  uint local_11c;
  undefined4 local_118;
  FIoBuffer local_110;
  FIoReadOptions *local_108;
  undefined1 local_100 [16];
  ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> *local_f0;
  TFunction<void___cdecl(FBulkDataRequest::EStatus)> *local_e8;
  FBulkDataBatchRequest *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  uchar *local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e0 = param_4;
  local_120 = param_2;
  local_100._8_8_ = this;
  local_e8 = param_3;
  if ((this->Requests).ArrayNum == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Requests.IsEmpty() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                       ,0x3b8,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar20 = (this->Requests).AllocatorInstance.SecondaryData;
  iVar25 = (this->Requests).ArrayNum;
  uVar22 = 0;
  if (FVar20 == (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
    FVar20 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)&this->Requests
    ;
  }
  FVar2 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)
          ((longlong)FVar20 + (longlong)iVar25 * 0x18);
  while( true ) {
    if ((this->Requests).ArrayNum != iVar25) {
      local_128 = 0;
      `TCheckedPointerIterator<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_128);
    }
    if (FVar20 == FVar2) break;
    uVar22 = uVar22 + *(longlong *)((longlong)FVar20 + 0x10);
    FVar20 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)
             ((longlong)FVar20 + 0x18);
  }
  pBVar4 = (param_1->CorePtr).Reference;
  uVar17 = (ulonglong)CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow);
  if ((uVar17 != 0) && (uVar17 != uVar22)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dst.GetSize() == 0 || Dst.GetSize() == TotalSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                       ,0x3c0,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pBVar4 = (param_1->CorePtr).Reference;
  if (CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow) != uVar22) {
    pFVar12 = FIoBuffer::FIoBuffer(&local_110,uVar22);
    FIoBuffer::operator=(param_1,pFVar12);
    if (local_110.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_110.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_110.CorePtr.Reference + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_110.CorePtr.Reference);
        ::operator_delete((void *)local_110.CorePtr.Reference,0x20);
      }
    }
  }
  uVar7 = _UNK_1507f9e48;
  uVar6 = ___xmm_00000000ffffffffc000000080000000;
  pBVar4 = (param_1->CorePtr).Reference;
  FVar20 = (this->Requests).AllocatorInstance.SecondaryData;
  local_124 = (this->Requests).ArrayNum;
  uVar23 = (ulonglong)(int)local_124;
  puVar24 = pBVar4->DataPtr;
  uVar17 = (ulonglong)CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow);
  if (FVar20 == (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
    FVar20 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)&this->Requests
    ;
  }
  local_f0 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> *)
             ((longlong)FVar20 + uVar23 * 0x18);
  puVar21 = (uchar *)((longlong)FVar20 + 0x10);
  this_00 = this;
  while( true ) {
    pFVar8 = local_f0;
    iVar25 = (int)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
    if ((this->Requests).ArrayNum != (int)uVar23) {
      local_127[0] = 0;
      `TCheckedPointerIterator<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_127);
    }
    if ((ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> *)(puVar21 + -0x10)
        == pFVar8) break;
    pFVar13 = FBuilder::GetBatch((FBuilder *)this_00);
    local_c0 = *(ulonglong *)(puVar21 + -8);
    local_98 = 0;
    local_70 = (longlong *)0x0;
    local_a8 = 0;
    local_108 = (FIoReadOptions *)
                (*(ulonglong *)
                  ((ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> *)
                  (puVar21 + -0x10))->InlineData + 0x18);
    local_b8 = *(ulonglong *)puVar21;
    local_d8 = uVar6;
    uStack_d0 = uVar7;
    local_c8 = 0x3fffffff;
    local_c4 = 0x7fffffff;
    local_118 = *(undefined4 *)
                 ((longlong)&local_d8 + (ulonglong)(local_120 & AIOP_PRIORITY_MASK) * 4);
    local_b0 = puVar24;
    iVar10 = TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::Add
                       (&pFVar13->Requests,1);
    local_11c = iVar10 >> 0x1f & 7;
    uVar11 = iVar10 + local_11c;
    local_11c = (uVar11 & 7) - local_11c;
    uVar19 = (int)uVar11 >> 3;
    uVar16 = 0;
    if ((int)uVar19 < (pFVar13->Requests).Chunks.Array.ArrayNum) {
      uVar16 = ~uVar19 >> 0x1f;
    }
    if (uVar16 == 0) {
      iVar25 = (int)uVar11 >> 0x1f;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar3 = (undefined8 *)
             (*(longlong *)
               ((pFVar13->Requests).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar19 * 8)
             + (ulonglong)local_11c * 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = pFVar13;
      *puVar3 = &___7FChunkBatchReadRequest__6B_;
      puVar3[2] = 0;
    }
    in_stack_fffffffffffffec8 =
         (TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)CONCAT44(iVar25,local_118);
    FVar14 = FIoBatch::ReadWithCallback
                       (&pFVar13->IoBatch,(FIoChunkId *)local_100,local_108,(int)&local_c0,
                        in_stack_fffffffffffffec8);
    FIoRequest::operator=((FIoRequest *)(puVar3 + 2),(FIoRequest *)FVar14.Impl);
    FIoRequest::~FIoRequest((FIoRequest *)local_100);
    if (local_98 != 0) {
      plVar18 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar18 = local_70;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    uVar23 = (ulonglong)local_124;
    uVar15 = *(ulonglong *)puVar21;
    if (uVar17 < *(ulonglong *)puVar21) {
      uVar15 = uVar17;
    }
    puVar24 = puVar24 + uVar15;
    uVar17 = uVar17 - uVar15;
    puVar21 = puVar21 + 0x18;
    this_00 = (FScatterGatherBuilder *)local_100._8_8_;
  }
  FBuilder::IssueBatch((FBuilder *)this_00,local_e0,local_e8);
  return;
}

// Read @ 141f416e0

FScatterGatherBuilder * __thiscall
FBulkDataBatchRequest::FScatterGatherBuilder::Read
          (FScatterGatherBuilder *this,FBulkData *param_1,ulong64 param_2,ulong64 param_3)

{
  TArray<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FScatterGatherBuilder *pFVar10;
  ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> FVar11;
  ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest> FVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  FBulkData *local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  if (((param_3 != 0xffffffffffffffff) && (*(uint5 *)(param_1->BulkMeta).Data < param_3)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == ((uint64) 0xffffffffffffffff) || Size <= uint64(BulkData.GetBulkDataSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x39c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FScatterGatherBuilder *)(*pcVar6)();
    return pFVar10;
  }
  uVar13 = (ulonglong)*(uint5 *)((param_1->BulkMeta).Data + 5);
  if (0xfffffffffe < uVar13) {
    uVar13 = 0xffffffffffffffff;
  }
  lVar14 = uVar13 + param_2;
  pTVar1 = &this->Requests;
  iVar9 = (this->Requests).ArrayNum;
  uVar13 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(CONCAT11((param_1->BulkMeta).Data[4],
                                               (param_1->BulkMeta).Data[3]),
                                      (param_1->BulkMeta).Data[2]),(param_1->BulkMeta).Data[1]),
                    (param_1->BulkMeta).Data[0]);
  if (uVar13 < param_3) {
    param_3 = uVar13;
  }
  if (0 < iVar9) {
    uVar8 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar8 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FScatterGatherBuilder *)(*pcVar6)();
      return pFVar10;
    }
    FVar12 = (this->Requests).AllocatorInstance.SecondaryData;
    lVar15 = (longlong)(this->Requests).ArrayNum;
    if (FVar12 == (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
      FVar12 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)pTVar1;
    }
    lVar3 = (longlong)FVar12 + lVar15 * 0x18;
    if (((*(longlong *)(lVar3 + -0x10) + ((longlong *)((longlong)FVar12 + -8))[lVar15 * 3] == lVar14
         ) && (lVar5 = *(longlong *)(lVar3 + -0x18),
              *(int *)(lVar5 + 0x14) == *(int *)((param_1->BulkMeta).Data + 0xc))) &&
       ((*(longlong *)(lVar5 + 0x18) == *(longlong *)(param_1->BulkChunkId).Id &&
        (*(int *)(lVar5 + 0x20) == *(int *)((param_1->BulkChunkId).Id + 8))))) {
      *(ulong64 *)(lVar3 + -8) = ((longlong *)((longlong)FVar12 + -8))[lVar15 * 3] + param_3;
      return this;
    }
  }
  FVar12 = (this->Requests).AllocatorInstance.SecondaryData;
  FVar11 = FVar12;
  if (FVar12 == (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
    FVar11 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)pTVar1;
  }
  local_28 = param_1;
  lStack_20 = lVar14;
  local_18 = param_3;
  if ((ulonglong)FVar11 <= &local_28) {
    if (FVar12 == (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
      FVar12 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)pTVar1;
    }
    if ((&local_28 < (FBulkData **)((longlong)FVar12 + (longlong)(this->Requests).ArrayMax * 0x18))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FScatterGatherBuilder *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (this->Requests).ArrayNum;
  piVar2 = &(this->Requests).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>_>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Requests).ArrayNum = iVar9 + 1;
  FVar12 = (this->Requests).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
    FVar12 = (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)pTVar1;
  }
  puVar4 = (undefined8 *)((longlong)FVar12 + (longlong)iVar9 * 0x18);
  *puVar4 = local_28;
  puVar4[1] = lStack_20;
  *(ulonglong *)((uchar *)((longlong)FVar12 + 0x10) + (longlong)iVar9 * 0x18) = local_18;
  return this;
}

