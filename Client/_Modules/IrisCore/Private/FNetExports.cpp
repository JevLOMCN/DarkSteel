// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// ~FNetExports @ 1441f9ae0

void __thiscall UE::Net::Private::FNetExports::~FNetExports(FNetExports *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->AcknowledgedExports).AcknowledgedExportedNetTokens.HashSize = 0;
  FVar1 = (this->AcknowledgedExports).AcknowledgedExportedNetTokens.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetToken>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetToken>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements);
  (this->AcknowledgedExports).AcknowledgedExportedHandles.HashSize = 0;
  FVar1 = (this->AcknowledgedExports).AcknowledgedExportedHandles.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Net::FNetRefHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AcknowledgedExports);
  TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
  ~TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>(&this->NetTokenExports);
  TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::
  ~TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>
            (&this->NetHandleExports);
  TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>::
  ~TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
            (&this->ExportRecord);
  return;
}

// FNetExports @ 144266a10

FNetExports * __thiscall UE::Net::Private::FNetExports::FNetExports(FNetExports *this)

{
  (this->ExportRecord).Head = 0;
  (this->ExportRecord).Tail = 0;
  (this->ExportRecord).IndexMask = 0;
  (this->ExportRecord).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportRecord).Storage.ArrayNum = 0;
  (this->ExportRecord).Storage.ArrayMax = 0;
  (this->NetHandleExports).Head = 0;
  (this->NetHandleExports).Tail = 0;
  (this->NetHandleExports).IndexMask = 0;
  (this->NetHandleExports).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetHandleExports).Storage.ArrayNum = 0;
  (this->NetHandleExports).Storage.ArrayMax = 0;
  (this->NetTokenExports).Head = 0;
  (this->NetTokenExports).Tail = 0;
  (this->NetTokenExports).IndexMask = 0;
  (this->NetTokenExports).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetTokenExports).Storage.ArrayNum = 0;
  (this->NetTokenExports).Storage.ArrayMax = 0;
  *(undefined8 *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements = 0;
  *(undefined8 *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x2c = 0x80
  ;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x30 =
       0xffffffff;
  (this->AcknowledgedExports).AcknowledgedExportedHandles.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->AcknowledgedExports).AcknowledgedExportedHandles.HashSize = 0;
  *(undefined8 *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements = 0;
  *(undefined8 *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x2c =
       0x80;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x30 =
       0xffffffff;
  (this->AcknowledgedExports).AcknowledgedExportedNetTokens.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->AcknowledgedExports).AcknowledgedExportedNetTokens.HashSize = 0;
  return this;
}

// AcknowledgeBatchExports @ 14426aa00

void __thiscall
UE::Net::Private::FNetExports::AcknowledgeBatchExports(FNetExports *this,FBatchExports *param_1)

{
  TSet<UE::Net::FNetToken,DefaultKeyFuncs<UE::Net::FNetToken,0>,FDefaultSetAllocator> *this_00;
  FNetToken *pFVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ForElementType<UE::Net::FNetRefHandle> FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArrayView<UE::Net::FNetToken_const_,int> *pTVar11;
  ForElementType<UE::Net::FNetRefHandle> FVar12;
  FNetToken *pFVar13;
  int iVar14;
  uint uVar15;
  FNetRefHandle local_res8;
  FNetToken local_res10 [2];
  TArrayView<UE::Net::FNetToken_const_,int> local_38;
  
  FVar5 = (param_1->HandlesExportedInCurrentBatch).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->HandlesExportedInCurrentBatch).ArrayNum;
  FVar12 = (ForElementType<UE::Net::FNetRefHandle>)param_1;
  if (FVar5 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FVar12 = FVar5;
  }
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = 1;
  uVar9 = *(int *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x8 -
          *(int *)&(this->AcknowledgedExports).AcknowledgedExportedHandles.Elements.field_0x34;
  uVar15 = uVar9 + iVar3;
  if (uVar9 < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->AcknowledgedExports,uVar15);
    if (uVar15 < 4) {
      iVar10 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar6 & 0x1f);
    }
    iVar4 = (this->AcknowledgedExports).AcknowledgedExportedHandles.HashSize;
    if ((iVar4 == 0) || (iVar4 < iVar10)) {
      (this->AcknowledgedExports).AcknowledgedExportedHandles.HashSize = iVar10;
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Rehash(&(this->AcknowledgedExports).AcknowledgedExportedHandles);
    }
  }
  FVar5 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar12 + (longlong)iVar3 * 8);
  for (; FVar12 != FVar5; FVar12 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar12 + 8)) {
    TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
    Emplace<UE::Net::FNetRefHandle_const_&>
              (&(this->AcknowledgedExports).AcknowledgedExportedHandles,&local_res8,(bool *)FVar12);
  }
  this_00 = &(this->AcknowledgedExports).AcknowledgedExportedNetTokens;
  pTVar11 = TArrayView<UE::Net::FNetToken_const_,int>::
            TArrayView<UE::Net::FNetToken_const_,int><TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<UE::Net::FNetToken,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_38,&param_1->NetTokensExportedInCurrentBatch);
  pFVar13 = pTVar11->DataPtr;
  iVar3 = pTVar11->ArrayNum;
  uVar9 = *(int *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x8 -
          *(int *)&(this->AcknowledgedExports).AcknowledgedExportedNetTokens.Elements.field_0x34;
  uVar15 = uVar9 + iVar3;
  if (uVar9 < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar15);
    if (3 < uVar15) {
      uVar2 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar6 & 0x1f);
    }
    iVar10 = (this->AcknowledgedExports).AcknowledgedExportedNetTokens.HashSize;
    if ((iVar10 == 0) || (iVar10 < iVar14)) {
      (this->AcknowledgedExports).AcknowledgedExportedNetTokens.HashSize = iVar14;
      TSet<UE::Net::FNetToken,DefaultKeyFuncs<UE::Net::FNetToken,0>,FDefaultSetAllocator>::Rehash
                (this_00);
    }
  }
  pFVar1 = pFVar13 + iVar3;
  for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
    TSet<UE::Net::FNetToken,DefaultKeyFuncs<UE::Net::FNetToken,0>,FDefaultSetAllocator>::
    Emplace<UE::Net::FNetToken_const_&>(this_00,local_res10,(bool *)pFVar13);
  }
  return;
}

// CommitExportsToRecord @ 144271010

void __thiscall
UE::Net::Private::FNetExports::CommitExportsToRecord(FNetExports *this,FExportScope *param_1)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ForElementType<UE::Net::FNetRefHandle> FVar6;
  undefined8 uVar7;
  ulong64 uVar8;
  ForElementType<UE::Net::FNetRefHandle> FVar9;
  undefined8 *puVar10;
  undefined1 local_res10 [8];
  
  FVar6 = (ForElementType<UE::Net::FNetRefHandle>)(param_1->ExportContext).BatchExports;
  iVar3 = *(int *)((longlong)FVar6 + 0x108);
  FVar9 = *(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar6 + 0x100);
  if (*(ForElementType<UE::Net::FNetRefHandle> *)((longlong)FVar6 + 0x100) ==
      (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FVar9 = FVar6;
  }
  FVar1 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar9 + (longlong)iVar3 * 8);
  while( true ) {
    if (*(int *)((longlong)FVar6 + 0x108) != iVar3) {
      `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar9 == FVar1) break;
    uVar8 = (ulonglong)((this->NetHandleExports).Head - (this->NetHandleExports).Tail) + 1;
    uVar7 = *(undefined8 *)FVar9;
    if ((ulonglong)(longlong)(this->NetHandleExports).Storage.ArrayNum < uVar8) {
      TResizableCircularQueue<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_>::SetCapacity
                (&this->NetHandleExports,uVar8);
    }
    uVar4 = (this->NetHandleExports).Head;
    FVar9 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar9 + 8);
    (this->NetHandleExports).Head = uVar4 + 1;
    *(undefined8 *)
     ((this->NetHandleExports).Storage.AllocatorInstance.Data +
     (ulonglong)((this->NetHandleExports).IndexMask & uVar4) * 8) = uVar7;
  }
  iVar3 = *(int *)((longlong)FVar6 + 0x198);
  puVar10 = *(undefined8 **)((longlong)FVar6 + 400);
  if (*(undefined8 **)((longlong)FVar6 + 400) == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)((longlong)FVar6 + 0x110);
  }
  puVar2 = (undefined8 *)((longlong)puVar10 + (longlong)iVar3 * 4);
  while( true ) {
    if (*(int *)((longlong)FVar6 + 0x198) != iVar3) {
      `TCheckedPointerIterator<UE::Net::FNetToken_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar10 == puVar2) break;
    uVar8 = (ulonglong)((this->NetTokenExports).Head - (this->NetTokenExports).Tail) + 1;
    uVar5 = *(undefined4 *)puVar10;
    if ((ulonglong)(longlong)(this->NetTokenExports).Storage.ArrayNum < uVar8) {
      TResizableCircularQueue<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::SetCapacity
                (&this->NetTokenExports,uVar8);
    }
    uVar4 = (this->NetTokenExports).Head;
    puVar10 = (undefined8 *)((longlong)puVar10 + 4);
    (this->NetTokenExports).Head = uVar4 + 1;
    *(undefined4 *)
     ((this->NetTokenExports).Storage.AllocatorInstance.Data +
     (ulonglong)((this->NetTokenExports).IndexMask & uVar4) * 4) = uVar5;
  }
  return;
}

// InitExportRecordForPacket @ 14427e400

void __thiscall UE::Net::Private::FNetExports::InitExportRecordForPacket(FNetExports *this)

{
  (this->CurrentExportInfo).NetHandleExportCount =
       (this->NetHandleExports).Head - (this->NetHandleExports).Tail;
  (this->CurrentExportInfo).NetTokenExportCount =
       (this->NetTokenExports).Head - (this->NetTokenExports).Tail;
  return;
}

// PopExportRecord @ 144286260

FExportInfo __thiscall UE::Net::Private::FNetExports::PopExportRecord(FNetExports *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FExportInfo FVar4;
  FExportInfo in_RDX;
  
  if ((this->ExportRecord).Head == (this->ExportRecord).Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExportRecord.Count()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetExports.cpp"
                       ,0x2c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FExportInfo)(*pcVar2)();
      return FVar4;
    }
  }
  if ((this->ExportRecord).Head == (this->ExportRecord).Tail) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset < Count()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x4c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FExportInfo)(*pcVar2)();
      return FVar4;
    }
  }
  uVar1 = (this->ExportRecord).Tail;
  *(undefined8 *)in_RDX =
       *(undefined8 *)
        ((this->ExportRecord).Storage.AllocatorInstance.Data +
        (ulonglong)((this->ExportRecord).IndexMask & uVar1) * 8);
  if ((this->ExportRecord).Head == uVar1) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FExportInfo)(*pcVar2)();
      return FVar4;
    }
  }
  else {
    (this->ExportRecord).Tail = uVar1 + 1;
  }
  return in_RDX;
}

// ProcessPacketDeliveryStatus @ 144287de0

void __thiscall
UE::Net::Private::FNetExports::ProcessPacketDeliveryStatus
          (FNetExports *this,EPacketDeliveryStatus param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FNetRefHandle local_res8;
  undefined4 local_res10 [2];
  FNetToken local_res18 [2];
  undefined8 local_res20;
  undefined8 local_38 [3];
  ulonglong uVar6;
  
  if (((this->ExportRecord).Head == (this->ExportRecord).Tail) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportRecord.Count()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetExports.cpp"
                         ,0x2c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->ExportRecord).Head == (this->ExportRecord).Tail) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < Count()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x4c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = (this->ExportRecord).Tail;
  uVar6 = *(ulonglong *)
           ((this->ExportRecord).Storage.AllocatorInstance.Data +
           (ulonglong)((this->ExportRecord).IndexMask & uVar4) * 8);
  local_res20 = uVar6;
  if ((this->ExportRecord).Head == uVar4) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (this->ExportRecord).Tail = uVar4 + 1;
  }
  uVar4 = (uint)uVar6;
  if (param_1 == Delivered) {
    while (uVar4 != 0) {
      local_38[0] = *(undefined8 *)
                     ((this->NetHandleExports).Storage.AllocatorInstance.Data +
                     (ulonglong)((this->NetHandleExports).Tail & (this->NetHandleExports).IndexMask)
                     * 8);
      TSet<UE::Net::FNetRefHandle,DefaultKeyFuncs<UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>::
      Emplace<UE::Net::FNetRefHandle_const_&>
                (&(this->AcknowledgedExports).AcknowledgedExportedHandles,&local_res8,
                 (bool *)local_38);
      puVar1 = &(this->NetHandleExports).Tail;
      *puVar1 = *puVar1 + 1;
      uVar4 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar4;
    }
    local_res20._4_4_ = (uint)(local_res20 >> 0x20);
    for (iVar5 = local_res20._4_4_; iVar5 != 0; iVar5 = iVar5 + -1) {
      local_res10[0] =
           *(undefined4 *)
            ((this->NetTokenExports).Storage.AllocatorInstance.Data +
            (ulonglong)((this->NetTokenExports).Tail & (this->NetTokenExports).IndexMask) * 4);
      TSet<UE::Net::FNetToken,DefaultKeyFuncs<UE::Net::FNetToken,0>,FDefaultSetAllocator>::
      Emplace<UE::Net::FNetToken_const_&>
                (&(this->AcknowledgedExports).AcknowledgedExportedNetTokens,local_res18,
                 (bool *)local_res10);
      puVar1 = &(this->NetTokenExports).Tail;
      *puVar1 = *puVar1 + 1;
    }
    return;
  }
  if ((0xffffffff < (ulonglong)(this->NetHandleExports).Tail + (uVar6 & 0xffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = &(this->NetHandleExports).Tail;
  *puVar1 = *puVar1 + uVar4;
  uVar4 = local_res20._4_4_;
  if ((0xffffffff < (ulonglong)(this->NetTokenExports).Tail + (ulonglong)local_res20._4_4_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x107,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = &(this->NetTokenExports).Tail;
  *puVar1 = *puVar1 + uVar4;
  return;
}

// PushExportRecordForPacket @ 144288420

void __thiscall UE::Net::Private::FNetExports::PushExportRecordForPacket(FNetExports *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulong64 uVar9;
  
  uVar1 = (this->NetHandleExports).Head;
  uVar2 = (this->NetHandleExports).Tail;
  uVar3 = (this->CurrentExportInfo).NetHandleExportCount;
  uVar9 = (ulonglong)((this->ExportRecord).Head - (this->ExportRecord).Tail) + 1;
  uVar4 = (this->NetTokenExports).Head;
  uVar5 = (this->NetTokenExports).Tail;
  uVar6 = (this->CurrentExportInfo).NetTokenExportCount;
  if ((ulonglong)(longlong)(this->ExportRecord).Storage.ArrayNum < uVar9) {
    TResizableCircularQueue<UE::Net::Private::FNetExports::FExportInfo,TSizedDefaultAllocator<32>_>
    ::SetCapacity(&this->ExportRecord,uVar9);
  }
  uVar7 = (this->ExportRecord).Head;
  pFVar8 = (this->ExportRecord).Storage.AllocatorInstance.Data;
  (this->ExportRecord).Head = uVar7 + 1;
  *(ulonglong *)(pFVar8 + (ulonglong)((this->ExportRecord).IndexMask & uVar7) * 8) =
       CONCAT44((uVar4 - uVar5) - uVar6,(uVar1 - uVar2) - uVar3);
  return;
}

