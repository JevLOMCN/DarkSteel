// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FCsvStreamWriter @ 141916c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FCsvStreamWriter * __thiscall
FCsvStreamWriter::FCsvStreamWriter
          (FCsvStreamWriter *this,TSharedRef<FArchive,1> *param_1,bool param_2,int param_3,
          long64 param_4,bool param_5,uint param_6,uint param_7,bool param_8)

{
  TReferenceControllerBase<1> *pTVar1;
  FCsvThreadGroupStatProcessor *pFVar2;
  FString *pFVar3;
  FCsvThreadGroupStatProcessor *pFVar4;
  FCsvThreadGroupStatProcessor *pFVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  FString local_18;
  
  pFVar5 = (FCsvThreadGroupStatProcessor *)0x0;
  *(undefined8 *)&this->Rows = 0;
  *(undefined8 *)&(this->Rows).field_0x8 = 0;
  *(undefined8 *)&(this->Rows).field_0x20 = 0;
  *(undefined4 *)&(this->Rows).field_0x28 = 0;
  *(undefined4 *)&(this->Rows).field_0x2c = 0x80;
  *(undefined4 *)&(this->Rows).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Rows).field_0x34 = 0;
  *(undefined8 *)&(this->Rows).field_0x40 = 0;
  *(undefined4 *)&(this->Rows).field_0x48 = 0;
  (this->Stream).OutputFile.Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Stream).OutputFile.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Stream).bIsLineStart = true;
  (this->Stream).BytesInBuffer = 0;
  this_00 = &(this->Stream).Buffer;
  (this->Stream).GZipBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stream).GZipBuffer.ArrayNum = 0;
  (this->Stream).GZipBuffer.ArrayMax = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Stream).Buffer.ArrayNum = 0;
  (this->Stream).Buffer.ArrayMax = 0;
  if ((0 < param_3) &&
     (TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (this_00,param_3,Default), param_5)) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&(this->Stream).GZipBuffer,param_3,Default);
  }
  this->NumFramesToBuffer = param_4;
  this->WriteFrameIndex = -1;
  this->ReadFrameIndex = -1;
  this->bContinuousWrites = param_2;
  this->bFirstRow = true;
  (this->AllSeries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllSeries).ArrayNum = 0;
  (this->AllSeries).ArrayMax = 0;
  (this->VisibleSeries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibleSeries).ArrayNum = 0;
  (this->VisibleSeries).ArrayMax = 0;
  (this->DataProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataProcessors).ArrayNum = 0;
  (this->DataProcessors).ArrayMax = 0;
  pFVar4 = pFVar5;
  if ((param_8) && (pFVar2 = ::operator_new(0x108), pFVar2 != (FCsvThreadGroupStatProcessor *)0x0))
  {
    pFVar3 = ::FString::FString(&local_18,L"AllWorkers");
    pFVar4 = FCsvThreadGroupStatProcessor::FCsvThreadGroupStatProcessor(pFVar2,this,pFVar3);
  }
  (this->TaskWorkerThreadGroupStatProcessor).Object = pFVar4;
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FCsvThreadGroupStatProcessor *)0x0) {
    *(undefined4 *)&(pFVar2->StatSeriesArray).AllocatorInstance.Data = 1;
    pFVar2->Writer =
         (FCsvStreamWriter *)
         &
         ___7__TReferenceControllerWithDeleter_VFCsvThreadGroupStatProcessor__U__DefaultDeleter_VFCsvThreadGroupStatProcessor___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&(pFVar2->StatSeriesArray).AllocatorInstance.Data + 4) = 1;
    *(FCsvThreadGroupStatProcessor **)&(pFVar2->StatSeriesArray).ArrayNum = pFVar4;
    pFVar5 = pFVar2;
  }
  (this->TaskWorkerThreadGroupStatProcessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar5;
  this->RenderThreadId = param_6;
  this->RHIThreadId = param_7;
  return this;
}

// ~FCsvStreamWriter @ 14191bb10

void __thiscall FCsvStreamWriter::~FCsvStreamWriter(FCsvStreamWriter *this)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->DataProcessors).AllocatorInstance.Data;
  iVar1 = (this->DataProcessors).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->DataProcessors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCsvProfilerThreadDataProcessor_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar3) break;
    plVar2 = *(longlong **)pFVar7;
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(longlong **)(*plVar2 + 0xa0) != plVar2) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThreadData->DataProcessor == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                           ,0xaea,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*plVar2 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined8 *)(*plVar2 + 0xa0) = 0;
      DestructItems<FCsvEvent,int>((FCsvEvent *)plVar2[0xf],(int)plVar2[0x10]);
      if ((void *)plVar2[0xf] != (void *)0x0) {
        FMemory::Free((void *)plVar2[0xf]);
      }
      if ((void *)plVar2[0xd] != (void *)0x0) {
        FMemory::Free((void *)plVar2[0xd]);
      }
      if ((void *)plVar2[0xb] != (void *)0x0) {
        FMemory::Free((void *)plVar2[0xb]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)plVar2[10]);
      if ((void *)plVar2[5] != (void *)0x0) {
        FMemory::Free((void *)plVar2[5]);
      }
      if ((void *)plVar2[3] != (void *)0x0) {
        FMemory::Free((void *)plVar2[3]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)plVar2[1]);
      ::operator_delete(plVar2,0x88);
    }
    pFVar7 = pFVar7 + 8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TaskWorkerThreadGroupStatProcessor).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->DataProcessors).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VisibleSeries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AllSeries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FCsvWriterHelper::Flush(&this->Stream);
  pFVar3 = (this->Stream).GZipBuffer.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Stream).Buffer.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Stream).OutputFile.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->Rows).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Rows).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddSeries @ 1419258c0

void __thiscall
FCsvStreamWriter::AddSeries(FCsvStreamWriter *this,FCsvStatSeries *param_1,bool param_2)

{
  int *piVar1;
  TArray<FCsvStatSeries_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCsvStatSeries *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1->ColumnIndex != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Series->ColumnIndex == -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0xb19,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2) {
    pTVar2 = &this->VisibleSeries;
    local_res10[0]->ColumnIndex = (this->VisibleSeries).ArrayNum;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar3 + (longlong)(this->VisibleSeries).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->VisibleSeries).ArrayNum;
    piVar1 = &(this->VisibleSeries).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->VisibleSeries).ArrayNum = iVar6 + 1;
    *(FCsvStatSeries **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  }
  pTVar2 = &this->AllSeries;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->AllSeries).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->AllSeries).ArrayNum;
  piVar1 = &(this->AllSeries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AllSeries).ArrayNum = iVar6 + 1;
  *(FCsvStatSeries **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  return;
}

// Finalize @ 14193aeb0

void __thiscall
FCsvStreamWriter::Finalize
          (FCsvStreamWriter *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  FCsvWriterHelper *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FString *pFVar15;
  undefined1 *puVar16;
  FString *pFVar17;
  uint *puVar18;
  uint uVar19;
  FString *pFVar20;
  undefined1 local_res8 [8];
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_res10 = param_1;
  if (this->ReadFrameIndex < this->WriteFrameIndex) {
    do {
      FinalizeNextRow(this);
    } while (this->ReadFrameIndex < this->WriteFrameIndex);
  }
  this_00 = &this->Stream;
  ::FString::FString(&local_90,"EVENTS");
  if ((this->Stream).bIsLineStart == false) {
    local_res8[0] = 0x2c;
    FCsvWriterHelper::SerializeInternal(this_00,local_res8,1);
  }
  (this->Stream).bIsLineStart = false;
  FCsvWriterHelper::WriteStringInternal(this_00,&local_90);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  pFVar13 = (this->VisibleSeries).AllocatorInstance.Data;
  iVar14 = (this->VisibleSeries).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar14 * 8;
  while( true ) {
    if ((this->VisibleSeries).ArrayNum != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FCsvStatSeries_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar13 == pFVar2) break;
    lVar9 = *(longlong *)pFVar13;
    if ((this->Stream).bIsLineStart == false) {
      local_res20[0] = 0x2c;
      FCsvWriterHelper::SerializeInternal(this_00,local_res20,1);
    }
    (this->Stream).bIsLineStart = false;
    FCsvWriterHelper::WriteStringInternal(this_00,(FString *)(lVar9 + 0x10));
    pFVar13 = pFVar13 + 8;
  }
  local_158[0] = 10;
  FCsvWriterHelper::SerializeInternal(this_00,local_158,1);
  (this->Stream).bIsLineStart = true;
  ::FString::FString(&local_70,L"1");
  ::FString::FString(&local_e0,L"HasHeaderRowAtEnd");
  ::FString::PrintfImpl(&local_f0,L"[%s]");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar11.Data = local_f0.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_80,(wchar_t *)FVar11.Data);
  if ((this->Stream).bIsLineStart == false) {
    local_150[0] = 0x2c;
    FCsvWriterHelper::SerializeInternal(this_00,local_150,1);
  }
  (this->Stream).bIsLineStart = false;
  FCsvWriterHelper::WriteStringInternal(this_00,&local_80);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if ((this->Stream).bIsLineStart == false) {
    local_148[0] = 0x2c;
    FCsvWriterHelper::SerializeInternal(this_00,local_148,1);
  }
  (this->Stream).bIsLineStart = false;
  FCsvWriterHelper::WriteStringInternal(this_00,&local_70);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  pTVar6 = local_res10;
  uStack_120 = 0;
  pFVar20 = (FString *)0x0;
  uVar4 = *(uint *)&local_res10->field_0x28;
  puVar1 = &local_res10->field_0x10;
  uStack_11c = 1;
  uStack_10c = uStack_120;
  local_108 = uStack_120;
  if (uVar4 != 0) {
    puVar18 = *(uint **)&local_res10->field_0x20;
    if (*(uint **)&local_res10->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar12 = *puVar18;
    pFVar15 = pFVar20;
    pFVar17 = pFVar20;
    local_108 = 0;
    uStack_120 = 0;
    while (uVar12 == 0) {
      iVar14 = (int)pFVar15;
      local_108 = (int)pFVar17 + 0x20;
      pFVar17 = (FString *)(ulonglong)local_108;
      uStack_120 = iVar14 + 1;
      pFVar15 = (FString *)(ulonglong)uStack_120;
      uStack_10c = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_120)
      goto LAB_14193b14e;
      uVar12 = puVar18[(longlong)iVar14 + 1];
    }
    uStack_11c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_11c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uStack_10c = (local_108 - 1) + local_f8;
    if ((int)uVar4 < (int)uStack_10c) {
      uStack_10c = uVar4;
    }
  }
LAB_14193b14e:
  uVar12 = *(uint *)&local_res10->field_0x28;
  iStack_100 = *(int *)&local_res10->field_0x8 - *(int *)&local_res10->field_0x34;
  local_128 = local_res10;
  uVar19 = uVar12 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_11c,uStack_120);
  uStack_110 = 0xffffffff;
  TStack_b8.CurrentBitIndex = uStack_10c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  local_c0 = local_res10;
  iVar14 = (int)uVar12 >> 5;
  TStack_b8._28_4_ = uStack_10c;
  TStack_b8.BaseBitIndex = local_108;
  uStack_98 = CONCAT44(uStack_fc,iStack_100);
  local_118 = puVar1;
  uStack_104 = uStack_10c;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || ((int)uVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar7 = local_res10;
  uVar4 = *(uint *)&pTVar6->field_0x28;
  if (uVar12 != uVar4) {
    puVar16 = *(undefined1 **)&pTVar6->field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14193b270;
      uVar12 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14193b270:
  while( true ) {
    pTVar6 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_130);
    }
    if (((TStack_b8.CurrentBitIndex == uVar12) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar7))
    break;
    lVar9 = *(longlong *)pTVar6;
    pFVar15 = (FString *)(lVar9 + (longlong)TStack_b8.CurrentBitIndex * 0x28);
    if (*(int *)(lVar9 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x28) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp(pwVar10,"Commandline");
    if (iVar14 != 0) {
      ::FString::PrintfImpl(&local_d0,L"[%s]");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        FVar11.Data = local_d0.Data.AllocatorInstance.Data;
      }
      ::FString::FString(local_60,(wchar_t *)FVar11.Data);
      if ((this->Stream).bIsLineStart == false) {
        local_140[0] = 0x2c;
        FCsvWriterHelper::SerializeInternal(this_00,local_140,1);
      }
      (this->Stream).bIsLineStart = false;
      FCsvWriterHelper::WriteStringInternal(this_00,local_60);
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if ((this->Stream).bIsLineStart == false) {
        local_138[0] = 0x2c;
        FCsvWriterHelper::SerializeInternal(this_00,local_138,1);
      }
      (this->Stream).bIsLineStart = false;
      FCsvWriterHelper::WriteStringInternal(this_00,pFVar15 + 1);
      pFVar15 = pFVar20;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    pFVar20 = pFVar15;
  }
  if (pFVar20 != (FString *)0x0) {
    FCsvWriterHelper::WriteMetadataEntry(this_00,pFVar20,pFVar20 + 1);
  }
  return;
}

// FinalizeNextRow @ 14193bd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014193c1e6) */

void __thiscall FCsvStreamWriter::FinalizeNextRow(FCsvStreamWriter *this)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  FCsvThreadGroupStatProcessor *pFVar5;
  long64 lVar6;
  code *pcVar7;
  double dVar8;
  FCsvStreamWriter *pFVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint extraout_EAX;
  uint uVar15;
  uint extraout_EAX_00;
  longlong *plVar16;
  FCsvCategoryData *lpCriticalSection;
  undefined7 extraout_var;
  int iVar17;
  longlong lVar18;
  undefined1 *puVar19;
  FScriptContainerElement *pFVar20;
  int *piVar21;
  char *pcVar22;
  FScriptContainerElement *pFVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  undefined1 auStackY_4b8 [32];
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined1 local_448 [8];
  undefined1 local_440 [8];
  undefined1 local_438;
  undefined1 local_437;
  undefined1 local_436 [6];
  undefined1 local_430 [8];
  undefined1 local_428 [8];
  undefined1 local_420 [8];
  undefined1 local_418 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_410;
  FString local_400;
  longlong *local_3f0;
  FCsvStreamWriter *local_3e8;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FCsvRow local_3b0;
  char local_388 [256];
  char local_288 [256];
  char local_188 [256];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  this->ReadFrameIndex = this->ReadFrameIndex + 1;
  local_3e8 = this;
  if (this->bFirstRow != false) {
    ::FString::FString(&local_3d0,"EVENTS");
    if ((this->Stream).bIsLineStart == false) {
      local_468[0] = 0x2c;
      FCsvWriterHelper::SerializeInternal(&this->Stream,local_468,1);
    }
    (this->Stream).bIsLineStart = false;
    FCsvWriterHelper::WriteStringInternal(&this->Stream,&local_3d0);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    pFVar20 = (this->VisibleSeries).AllocatorInstance.Data;
    iVar13 = (this->VisibleSeries).ArrayNum;
    pFVar23 = pFVar20 + (longlong)iVar13 * 8;
    while( true ) {
      if ((this->VisibleSeries).ArrayNum != iVar13) {
        local_460[0] = 0;
        `TCheckedPointerIterator<FCsvStatSeries_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_460);
      }
      if (pFVar20 == pFVar23) break;
      lVar3 = *(longlong *)pFVar20;
      if ((this->Stream).bIsLineStart == false) {
        local_458[0] = 0x2c;
        FCsvWriterHelper::SerializeInternal(&this->Stream,local_458,1);
      }
      (this->Stream).bIsLineStart = false;
      FCsvWriterHelper::WriteStringInternal(&this->Stream,(FString *)(lVar3 + 0x10));
      pFVar20 = pFVar20 + 8;
    }
    local_450[0] = 10;
    FCsvWriterHelper::SerializeInternal(&this->Stream,local_450,1);
    (this->Stream).bIsLineStart = true;
    this->bFirstRow = false;
  }
  lVar3 = this->ReadFrameIndex;
  if (*(int *)&(this->Rows).field_0x8 != *(int *)&(this->Rows).field_0x34) {
    puVar19 = *(undefined1 **)&(this->Rows).field_0x40;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->Rows).field_0x38;
    }
    iVar13 = *(int *)(puVar19 +
                     ((ulonglong)(*(int *)&(this->Rows).field_0x48 - 1) &
                     (lVar3 >> 0x20) * 0x17 + lVar3) * 4);
    if (iVar13 != -1) {
      do {
        plVar16 = (longlong *)((longlong)iVar13 * 0x30 + *(longlong *)&this->Rows);
        if (*plVar16 == lVar3) {
          local_3f0 = plVar16 + 1;
          if (plVar16 == (longlong *)0x0) {
            local_3f0 = (longlong *)0x0;
          }
          if (local_3f0 == (longlong *)0x0) {
            return;
          }
          if ((int)local_3f0[3] < 1) {
            if ((this->Stream).bIsLineStart == false) {
              local_440[0] = 0x2c;
              FCsvWriterHelper::SerializeInternal(&this->Stream,local_440,1);
            }
            (this->Stream).bIsLineStart = false;
          }
          else {
            local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_410.ArrayNum = 0;
            local_410.ArrayMax = 0;
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(int)local_3f0[3],&local_410.AllocatorInstance,0,&local_410.ArrayMax);
            plVar16 = local_3f0;
            lVar3 = local_3f0[3];
            piVar21 = (int *)local_3f0[2];
            piVar1 = piVar21 + (longlong)(int)lVar3 * 6;
            while( true ) {
              if ((int)plVar16[3] != (int)lVar3) {
                local_448[0] = 0;
                `TCheckedPointerIterator<FCsvProcessedEvent,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_448);
              }
              this = local_3e8;
              if (piVar21 == piVar1) break;
              if (piVar21[5] == 0) {
                iVar13 = piVar21[2];
                pvVar4 = *(void **)piVar21;
                local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_400.Data.ArrayNum = iVar13;
                if (iVar13 == 0) {
                  local_400.Data.ArrayNum = 0;
                  local_400.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar13,0,(ForAnyElementType *)&local_400,iVar13,
                             &local_400.Data.ArrayMax);
                  memcpy(local_400.Data.AllocatorInstance.Data,pvVar4,(longlong)iVar13 * 2);
                }
              }
              else {
                lpCriticalSection = FCsvCategoryData::Get();
                uVar2 = piVar21[5];
                if ((lpCriticalSection == (FCsvCategoryData *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mutex",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                        ,0x1b,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                uVar12 = 0;
                if ((int)uVar2 < (lpCriticalSection->CategoryNames).ArrayNum) {
                  uVar12 = ~uVar2 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar23 = (lpCriticalSection->CategoryNames).AllocatorInstance.Data;
                local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3e0.Data.ArrayNum = *(int *)(pFVar23 + (longlong)(int)uVar2 * 0x10 + 8);
                lVar18 = (longlong)local_3e0.Data.ArrayNum;
                pvVar4 = *(void **)(pFVar23 + (longlong)(int)uVar2 * 0x10);
                if (local_3e0.Data.ArrayNum == 0) {
                  local_3e0.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_3e0.Data.ArrayNum,0,(ForAnyElementType *)&local_3e0,
                             local_3e0.Data.ArrayNum,&local_3e0.Data.ArrayMax);
                  memcpy(local_3e0.Data.AllocatorInstance.Data,pvVar4,lVar18 * 2);
                }
                if (lpCriticalSection != (FCsvCategoryData *)0x0) {
                  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                }
                ::FString::ConcatFC(&local_3c0,&local_3e0,L"/");
                ::FString::ConcatFF(&local_400,&local_3c0,(FString *)piVar21);
                if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                }
                if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
                }
              }
              if (((local_410.AllocatorInstance.Data <= (FScriptContainerElement *)&local_400) &&
                  ((FScriptContainerElement *)&local_400 <
                   local_410.AllocatorInstance.Data + (longlong)local_410.ArrayMax * 0x10)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = local_410.ArrayNum;
              if (local_410.ArrayNum == local_410.ArrayMax) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_410.AllocatorInstance,&local_410.ArrayMax);
              }
              local_410.ArrayNum = iVar13 + 1;
              lVar18 = (longlong)iVar13;
              *(undefined8 *)(local_410.AllocatorInstance.Data + lVar18 * 0x10) = 0;
              *(FScriptContainerElement **)(local_410.AllocatorInstance.Data + lVar18 * 0x10) =
                   local_400.Data.AllocatorInstance.Data;
              local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(local_410.AllocatorInstance.Data + lVar18 * 0x10 + 8) =
                   local_400.Data.ArrayNum;
              *(int *)(local_410.AllocatorInstance.Data + lVar18 * 0x10 + 0xc) =
                   local_400.Data.ArrayMax;
              local_400.Data.ArrayNum = 0;
              local_400.Data.ArrayMax = 0;
              piVar21 = piVar21 + 6;
            }
            FCsvWriterHelper::WriteSemicolonSeparatedStringList(&local_3e8->Stream,&local_410);
            DestructItems<FString,int>
                      ((FString *)local_410.AllocatorInstance.Data,local_410.ArrayNum);
            if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_410.AllocatorInstance.Data);
            }
          }
          pFVar20 = (this->AllSeries).AllocatorInstance.Data;
          iVar13 = (this->AllSeries).ArrayNum;
          pFVar23 = pFVar20 + (longlong)iVar13 * 8;
          while( true ) {
            if ((this->AllSeries).ArrayNum != iVar13) {
              local_438 = 0;
              `TCheckedPointerIterator<FCsvStatSeries_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_438);
            }
            if (pFVar20 == pFVar23) break;
            plVar16 = *(longlong **)pFVar20;
            cVar11 = (**(code **)(*plVar16 + 0x10))(plVar16);
            if (cVar11 == '\0') {
              (**(code **)(*plVar16 + 8))(plVar16,this->ReadFrameIndex);
            }
            pFVar20 = pFVar20 + 8;
          }
          pFVar5 = (this->TaskWorkerThreadGroupStatProcessor).Object;
          if (pFVar5 != (FCsvThreadGroupStatProcessor *)0x0) {
            pFVar20 = (pFVar5->StatSeriesArray).AllocatorInstance.Data;
            iVar13 = (pFVar5->StatSeriesArray).ArrayNum;
            lVar6 = this->ReadFrameIndex;
            pFVar23 = pFVar20 + (longlong)iVar13 * 8;
            while( true ) {
              if ((pFVar5->StatSeriesArray).ArrayNum != iVar13) {
                local_437 = 0;
                `TCheckedPointerIterator<FCsvStatSeries_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_437);
              }
              if (pFVar20 == pFVar23) break;
              (**(code **)(**(longlong **)pFVar20 + 8))(*(longlong **)pFVar20,lVar6);
              pFVar20 = pFVar20 + 8;
            }
          }
          dVar8 = __real_3fb999999999999a;
          uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          pFVar23 = (this->VisibleSeries).AllocatorInstance.Data;
          iVar13 = (this->VisibleSeries).ArrayNum;
          local_3e8 = (FCsvStreamWriter *)(pFVar23 + (longlong)iVar13 * 8);
          while( true ) {
            pFVar9 = local_3e8;
            if ((this->VisibleSeries).ArrayNum != iVar13) {
              local_436[0] = 0;
              `TCheckedPointerIterator<FCsvStatSeries_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_436);
            }
            if ((FCsvStreamWriter *)pFVar23 == pFVar9) break;
            lVar3 = *(longlong *)pFVar23;
            uVar15 = *(uint *)(lVar3 + 0x38);
            if (((int)uVar15 < 0) || ((int)local_3f0[1] <= (int)uVar15)) {
              if ((this->Stream).bIsLineStart == false) {
                local_420[0] = 0x2c;
                FCsvWriterHelper::SerializeInternal(&this->Stream,local_420,1);
              }
              (this->Stream).bIsLineStart = false;
              iVar17 = TCString<char>::SnprintfImpl(local_188,0x100,"%.0f");
              pcVar22 = local_188;
            }
            else {
              uVar14 = ~uVar15;
              if ((int)uVar15 < 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar14 = (uint)CONCAT71(extraout_var,bVar10);
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              if (*(char *)(lVar3 + 0xc) == '\x01') {
                iVar17 = *(int *)(*local_3f0 + (longlong)(int)uVar15 * 4);
                dVar28 = (double)iVar17;
                if ((this->Stream).bIsLineStart == false) {
                  local_430[0] = 0x2c;
                  FCsvWriterHelper::SerializeInternal(&this->Stream,local_430,1);
                  uVar14 = extraout_EAX;
                }
                fVar27 = (float)iVar17;
                (this->Stream).bIsLineStart = false;
                iVar17 = (int)fVar27;
                fVar24 = fVar27;
                if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar27)) {
                  auVar25._4_4_ = fVar27;
                  auVar25._0_4_ = fVar27;
                  auVar25._8_8_ = 0;
                  uVar15 = movmskps(uVar14,auVar25);
                  fVar24 = (float)(int)(iVar17 - (uVar15 & 1));
                }
                if (fVar27 - fVar24 == 0.0) {
                  pcVar22 = "%.0f";
                }
                else {
                  pcVar22 = "%.6f";
                  if (dVar8 <= (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar12,
                                                SUB84(dVar28,0) & uVar2)) {
                    pcVar22 = "%.4f";
                  }
                }
                iVar17 = TCString<char>::SnprintfImpl(local_388,0x100,pcVar22);
                pcVar22 = local_388;
              }
              else {
                fVar24 = *(float *)(*local_3f0 + (longlong)(int)uVar15 * 4);
                if ((this->Stream).bIsLineStart == false) {
                  local_428[0] = 0x2c;
                  FCsvWriterHelper::SerializeInternal(&this->Stream,local_428,1);
                  uVar14 = extraout_EAX_00;
                }
                (this->Stream).bIsLineStart = false;
                iVar17 = (int)fVar24;
                fVar27 = fVar24;
                if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar24)) {
                  auVar26._4_4_ = fVar24;
                  auVar26._0_4_ = fVar24;
                  auVar26._8_8_ = 0;
                  uVar15 = movmskps(uVar14,auVar26);
                  fVar27 = (float)(int)(iVar17 - (uVar15 & 1));
                }
                if (fVar24 - fVar27 == 0.0) {
                  pcVar22 = "%.0f";
                }
                else {
                  pcVar22 = "%.6f";
                  if (dVar8 <= (double)CONCAT44((uint)((ulonglong)(double)fVar24 >> 0x20) & uVar12,
                                                SUB84((double)fVar24,0) & uVar2)) {
                    pcVar22 = "%.4f";
                  }
                }
                iVar17 = TCString<char>::SnprintfImpl(local_288,0x100,pcVar22);
                pcVar22 = local_288;
              }
            }
            FCsvWriterHelper::SerializeInternal(&this->Stream,pcVar22,iVar17);
            pFVar23 = pFVar23 + 8;
          }
          local_418[0] = 10;
          FCsvWriterHelper::SerializeInternal(&this->Stream,local_418,1);
          (this->Stream).bIsLineStart = true;
          TMap<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
          ::FindAndRemoveChecked(&this->Rows,&local_3b0,this->ReadFrameIndex);
          DestructItems<FCsvProcessedEvent,int>
                    ((FCsvProcessedEvent *)local_3b0.Events.AllocatorInstance.Data,
                     local_3b0.Events.ArrayNum);
          if ((FCsvProcessedEvent *)local_3b0.Events.AllocatorInstance.Data !=
              (FCsvProcessedEvent *)0x0) {
            FMemory::Free(local_3b0.Events.AllocatorInstance.Data);
          }
          if (local_3b0.Values.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_3b0.Values.AllocatorInstance.Data);
          return;
        }
        iVar13 = (int)plVar16[5];
      } while (iVar13 != -1);
    }
  }
  return;
}

// GetAllocatedSize @ 141944f10

ulong64 __thiscall FCsvStreamWriter::GetAllocatedSize(FCsvStreamWriter *this)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FCsvThreadGroupStatProcessor *pFVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong64 uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 *puVar28;
  uint *puVar29;
  ulong64 uVar30;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  ulonglong uVar27;
  
  uVar4 = *(uint *)&(this->Rows).field_0x48;
  uVar20 = 0;
  uVar18 = 0;
  uVar27 = uVar20;
  if (1 < uVar4) {
    uVar27 = (longlong)(int)uVar4 << 2;
  }
  pFVar7 = (this->TaskWorkerThreadGroupStatProcessor).Object;
  uVar30 = (longlong)(this->Stream).Buffer.ArrayMax +
           (longlong)(this->Stream).GZipBuffer.ArrayMax + uVar27 +
           (ulonglong)((*(int *)&(this->Rows).field_0x2c + 0x1fU >> 5) << 2) +
           ((longlong)(this->DataProcessors).ArrayMax +
            (longlong)*(int *)&(this->Rows).field_0xc * 6 + (longlong)(this->VisibleSeries).ArrayMax
           + (longlong)(this->AllSeries).ArrayMax) * 8;
  if (pFVar7 != (FCsvThreadGroupStatProcessor *)0x0) {
    uVar16 = FCsvThreadGroupStatProcessor::GetAllocatedSize(pFVar7);
    uVar30 = uVar30 + uVar16;
  }
  uVar4 = *(uint *)&(this->Rows).field_0x28;
  puVar1 = &(this->Rows).field_0x10;
  uVar13 = 1;
  uVar26 = 0;
  uVar14 = uVar18;
  if (uVar4 != 0) {
    puVar29 = *(uint **)&(this->Rows).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)puVar1;
    }
    uVar14 = *puVar29;
    uVar27 = uVar20;
    uVar26 = 0;
    uVar18 = 0;
    while (uVar14 == 0) {
      iVar19 = (int)uVar20;
      uVar26 = (int)uVar27 + 0x20;
      uVar27 = (ulonglong)uVar26;
      uVar18 = iVar19 + 1;
      uVar20 = (ulonglong)uVar18;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_14194501d;
      uVar14 = puVar29[(longlong)iVar19 + 1];
    }
    uVar13 = -uVar14 & uVar14;
    uVar20 = (ulonglong)uVar13 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar14 = (uVar26 - 1) + (int)lVar17;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14194501d:
  uVar15 = *(uint *)&(this->Rows).field_0x28;
  uVar23 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar13,uVar18);
  TStack_70.CurrentBitIndex = uVar14;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar15 >> 5;
  TStack_70._28_4_ = uVar14;
  TStack_70.BaseBitIndex = uVar26;
  uStack_50 = CONCAT44(uStack_a4,*(int *)&(this->Rows).field_0x8 - *(int *)&(this->Rows).field_0x34)
  ;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || ((int)uVar4 < (int)uVar15)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar30 = (*pcVar11)();
    return uVar30;
  }
  uVar4 = *(uint *)&(this->Rows).field_0x28;
  if (uVar15 != uVar4) {
    puVar28 = *(undefined1 **)&(this->Rows).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar17 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_141945120;
      uVar18 = *(uint *)(puVar28 + lVar17 * 4 + 4);
    }
    uVar20 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar15 = (int)lVar17 + -1 + uVar23;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_141945120:
  while( true ) {
    if (*(int *)&(this->Rows).field_0x8 - *(int *)&(this->Rows).field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar15) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Rows).field_0x10)) break;
    lVar24 = (longlong)TStack_70.CurrentBitIndex * 0x30 + *(longlong *)&this->Rows;
    iVar19 = *(int *)(lVar24 + 0x20);
    lVar21 = *(longlong *)(lVar24 + 0x18);
    lVar25 = ((longlong)*(int *)(lVar24 + 0x14) + (longlong)*(int *)(lVar24 + 0x24) * 6) * 4;
    lVar17 = lVar21 + (longlong)iVar19 * 0x18;
    while( true ) {
      if (*(int *)(lVar24 + 0x20) != iVar19) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FCsvProcessedEvent_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (lVar21 == lVar17) break;
      piVar2 = (int *)(lVar21 + 0xc);
      lVar21 = lVar21 + 0x18;
      lVar25 = lVar25 + (longlong)*piVar2 * 2;
    }
    uVar30 = uVar30 + lVar25;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  pFVar22 = (this->AllSeries).AllocatorInstance.Data;
  iVar19 = (this->AllSeries).ArrayNum;
  pFVar3 = pFVar22 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->AllSeries).ArrayNum != iVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FCsvStatSeries_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar22 == pFVar3) break;
    lVar17 = (**(code **)(**(longlong **)pFVar22 + 0x18))();
    uVar30 = uVar30 + lVar17;
    pFVar22 = pFVar22 + 8;
  }
  pFVar22 = (this->DataProcessors).AllocatorInstance.Data;
  iVar19 = (this->DataProcessors).ArrayNum;
  pFVar3 = pFVar22 + (longlong)iVar19 * 8;
  while( true ) {
    if ((this->DataProcessors).ArrayNum != iVar19) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FCsvProfilerThreadDataProcessor_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar22 == pFVar3) {
      return uVar30;
    }
    plVar8 = *(longlong **)pFVar22;
    iVar5 = *(int *)((longlong)plVar8 + 0x24);
    iVar6 = *(int *)((longlong)plVar8 + 0x34);
    if ((plVar8[9] == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar30 = (*pcVar11)();
      return uVar30;
    }
    pFVar7 = (FCsvThreadGroupStatProcessor *)plVar8[9];
    if ((*plVar8 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) break;
    lVar17 = *plVar8;
    lVar25 = *(longlong *)(lVar17 + 0x10);
    lVar21 = *(longlong *)(lVar17 + 0x20);
    lVar24 = *(longlong *)(lVar17 + 0x38);
    lVar9 = *(longlong *)(lVar17 + 0x48);
    lVar10 = *(longlong *)(lVar17 + 0x60);
    lVar17 = *(longlong *)(lVar17 + 0x70);
    uVar16 = FCsvThreadGroupStatProcessor::GetAllocatedSize(pFVar7);
    uVar30 = uVar30 + ((lVar25 - lVar21) + 0xffU >> 8) * 0x1808 +
             uVar16 + (((lVar10 - lVar17) + 0x1fU >> 5) * 0x2b + (longlong)iVar6 + (longlong)iVar5)
                      * 0x18 + ((lVar24 - lVar9) + 0xffU >> 8) * 0x2008;
    pFVar22 = pFVar22 + 8;
  }
  pcVar11 = (code *)swi(3);
  uVar30 = (*pcVar11)();
  return uVar30;
}

// Process @ 14195cee0

/* WARNING: Removing unreachable block (ram,0x00014195d3aa) */
/* WARNING: Removing unreachable block (ram,0x00014195d65c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCsvStreamWriter::Process(FCsvStreamWriter *this,FCsvProcessThreadDataStats *param_1)

{
  int *piVar1;
  TArray<FCsvProfilerThreadDataProcessor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCsvProfilerThreadData *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_3_::FStat_CSVProfiler_Writer_GetDataProcessors>
  FVar18;
  ulonglong uVar19;
  FCsvProfilerThreadDataProcessor *this_00;
  FCsvProfilerThreadDataProcessor *pFVar20;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_11_::FStat_CSVProfiler_Writer_ProcessDataProcessors>
  FVar21;
  FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_18_::FStat_CSVProfiler_Writer_FinalizeNextRow>
  FVar22;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar23;
  TSharedPtr<FCsvProfilerThreadData,1> *pTVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  FNameEntryId FVar28;
  ulonglong local_res18;
  undefined1 local_res20 [8];
  int local_138 [2];
  FCsvProfilerThreadDataProcessor *local_130;
  TArray<TSharedPtr<FCsvProfilerThreadData,1>,TSizedDefaultAllocator<32>_> local_128;
  FColor_u_0 local_118;
  FColor_u_0 local_114;
  FColor_u_0 local_110 [2];
  FName local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_c8;
  TSharedPtr<FCsvProfilerThreadData,1> *local_b8;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  TSharedPtr<FCsvProfilerThreadData,1> local_98;
  TSharedPtr<FCsvThreadGroupStatProcessor,1> local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  FCsvProfilerThreadData::GetTlsInstances(&local_128);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_CSVProfiler_Writer_GetDataProcessors =
         (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_3_::FStat_CSVProfiler_Writer_GetDataProcessors>
          )0x0;
    pFVar17 = ::FName::FName(&local_78,"CSVProfiler_Writer_GetDataProcessors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_CSVProfiler_Writer_GetDataProcessors,*pFVar17,
               L"CSVProfiler_Writer_GetDataProcessors","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
               ,true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_CSVProfiler_Writer_GetDataProcessors;
  if (StatPtr_CSVProfiler_Writer_GetDataProcessors ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_3_::FStat_CSVProfiler_Writer_GetDataProcessors>
       )0x0) {
    pFVar17 = ::FName::FName(&local_70,"CSVProfiler_Writer_GetDataProcessors");
    FVar18 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_3_::FStat_CSVProfiler_Writer_GetDataProcessors>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_CSVProfiler_Writer_GetDataProcessors
                          ,*pFVar17,L"CSVProfiler_Writer_GetDataProcessors","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar18;
  bVar13 = false;
  bVar12 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14195d108:
    bVar13 = bVar15;
    bVar12 = bVar14;
    bVar14 = false;
    local_f0 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_f8.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xbb5);
        bVar13 = true;
        bVar12 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14195d108;
    local_f0 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar14 = true;
  }
  iVar5 = local_128.ArrayNum;
  uVar19 = (ulonglong)local_128.ArrayNum;
  pTVar24 = (TSharedPtr<FCsvProfilerThreadData,1> *)
            (local_128.AllocatorInstance.Data + uVar19 * 0x10);
  FVar27.Data = local_128.AllocatorInstance.Data;
  local_b8 = pTVar24;
  while( true ) {
    if ((int)uVar19 != iVar5) {
      local_res18 = local_res18 & 0xffffffffffffff00;
      `TCheckedPointerIterator<TSharedPtr<FCsvProfilerThreadData,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res18);
    }
    FVar23 = local_f0;
    if ((TSharedPtr<FCsvProfilerThreadData,1> *)FVar27.Data == pTVar24) break;
    pTVar6 = (((TSharedPtr<FCsvProfilerThreadData,1> *)FVar27.Data)->SharedReferenceCount).
             ReferenceController;
    pFVar7 = ((TSharedPtr<FCsvProfilerThreadData,1> *)FVar27.Data)->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar7 == (FCsvProfilerThreadData *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (pFVar7->DataProcessor == (FCsvProfilerThreadDataProcessor *)0x0) {
      pTVar2 = &this->DataProcessors;
      this_00 = ::operator_new(0x88);
      pFVar20 = (FCsvProfilerThreadDataProcessor *)0x0;
      if (this_00 != (FCsvProfilerThreadDataProcessor *)0x0) {
        uVar3 = this->RHIThreadId;
        uVar4 = this->RenderThreadId;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.Object = pFVar7;
        local_98.SharedReferenceCount.ReferenceController = pTVar6;
        pFVar20 = FCsvProfilerThreadDataProcessor::FCsvProfilerThreadDataProcessor
                            (this_00,&local_98,this,uVar4,uVar3);
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      local_130 = pFVar20;
      if (((pFVar8 <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 <
           pFVar8 + (longlong)(this->DataProcessors).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar16 = (this->DataProcessors).ArrayNum;
      piVar1 = &(this->DataProcessors).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DataProcessors).ArrayNum = iVar16 + 1;
      *(FCsvProfilerThreadDataProcessor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 8)
           = local_130;
      pTVar24 = local_b8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    uVar19 = local_128._8_8_ & 0xffffffff;
    FVar27.Data = FVar27.Data + 0x10;
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  local_138[0] = 0x7fffffff;
  local_res18 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_res18 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1))
  {
    StatPtr_CSVProfiler_Writer_ProcessDataProcessors =
         (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_11_::FStat_CSVProfiler_Writer_ProcessDataProcessors>
          )0x0;
    pFVar17 = ::FName::FName(&local_68,"CSVProfiler_Writer_ProcessDataProcessors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_CSVProfiler_Writer_ProcessDataProcessors,
               *pFVar17,L"CSVProfiler_Writer_ProcessDataProcessors","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS2);
  }
  FVar21 = StatPtr_CSVProfiler_Writer_ProcessDataProcessors;
  if (StatPtr_CSVProfiler_Writer_ProcessDataProcessors ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_11_::FStat_CSVProfiler_Writer_ProcessDataProcessors>
       )0x0) {
    pFVar17 = ::FName::FName(&local_60,"CSVProfiler_Writer_ProcessDataProcessors");
    FVar21 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_11_::FStat_CSVProfiler_Writer_ProcessDataProcessors>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_CSVProfiler_Writer_ProcessDataProcessors,*pFVar17,
                          L"CSVProfiler_Writer_ProcessDataProcessors","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar21;
  bVar12 = false;
  bVar14 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14195d4e3:
    bVar13 = false;
    FVar23 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_114.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_114._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_e8.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xbc1);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14195d4e3;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar13 = true;
  }
  pFVar25 = (this->DataProcessors).AllocatorInstance.Data;
  iVar5 = (this->DataProcessors).ArrayNum;
  pFVar8 = pFVar25 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->DataProcessors).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FCsvProfilerThreadDataProcessor_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar25 == pFVar8) break;
    local_88.Object = (this->TaskWorkerThreadGroupStatProcessor).Object;
    pFVar20 = *(FCsvProfilerThreadDataProcessor **)pFVar25;
    local_88.SharedReferenceCount.ReferenceController =
         (this->TaskWorkerThreadGroupStatProcessor).SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FCsvProfilerThreadDataProcessor::Process(pFVar20,param_1,local_138,&local_88);
    pFVar25 = pFVar25 + 8;
  }
  FVar28.Value = 0;
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  if ((this->bContinuousWrites == false) ||
     (lVar26 = (longlong)local_138[0], 0x7ffffffe < local_138[0])) goto LAB_14195d88b;
  if ((*(int *)(local_res18 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1))
  {
    StatPtr_CSVProfiler_Writer_FinalizeNextRow =
         (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_18_::FStat_CSVProfiler_Writer_FinalizeNextRow>
          )0x0;
    pFVar17 = ::FName::FName(&local_58,"CSVProfiler_Writer_FinalizeNextRow");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_CSVProfiler_Writer_FinalizeNextRow,*pFVar17,
               L"CSVProfiler_Writer_FinalizeNextRow","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS4);
  }
  FVar22 = StatPtr_CSVProfiler_Writer_FinalizeNextRow;
  if (StatPtr_CSVProfiler_Writer_FinalizeNextRow ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_18_::FStat_CSVProfiler_Writer_FinalizeNextRow>
       )0x0) {
    pFVar17 = ::FName::FName(local_50,"CSVProfiler_Writer_FinalizeNextRow");
    FVar22 = (FThreadSafeStaticStat<_public:_void___cdecl_FCsvStreamWriter::Process(FCsvProcessThreadDataStats_&)_::_18_::FStat_CSVProfiler_Writer_FinalizeNextRow>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_CSVProfiler_Writer_FinalizeNextRow,
                          *pFVar17,L"CSVProfiler_Writer_FinalizeNextRow","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar22;
  bVar12 = false;
  bVar14 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14195d796:
    bVar13 = false;
    FVar23 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_e0.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                   ,0xbcb);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14195d796;
    local_108 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    FVar28 = local_108.ComparisonIndex.Value;
    bVar13 = true;
  }
  lVar9 = this->NumFramesToBuffer;
  lVar10 = this->ReadFrameIndex;
  while (lVar10 < lVar26 - lVar9) {
    FinalizeNextRow(this);
    lVar10 = this->ReadFrameIndex;
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_a8.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      local_a8.NameAndInfo.Index.Value = FVar28.Value;
      QueryPerformanceCounter(&local_b0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_a8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_14195d88b:
  DestructItems<TSharedPtr<FCsvProfilerThreadData,1>,int>
            ((TSharedPtr<FCsvProfilerThreadData,1> *)local_128.AllocatorInstance.Data,
             local_128.ArrayNum);
  if ((TSharedPtr<FCsvProfilerThreadData,1> *)local_128.AllocatorInstance.Data !=
      (TSharedPtr<FCsvProfilerThreadData,1> *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// PushEvent @ 14195ed10

void __thiscall FCsvStreamWriter::PushEvent(FCsvStreamWriter *this,FCsvProcessedEvent *param_1)

{
  int *piVar1;
  FScriptContainerElement *this_00;
  uint uVar2;
  FCsvProcessedEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong *puVar7;
  FCsvRow *pFVar8;
  undefined1 *puVar9;
  ulonglong local_res8;
  
  uVar2 = param_1->FrameNumber;
  local_res8 = (ulonglong)uVar2;
  if (*(int *)&(this->Rows).field_0x8 != *(int *)&(this->Rows).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Rows).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Rows).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->Rows).field_0x48 - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      do {
        puVar7 = (ulonglong *)((longlong)iVar6 * 0x30 + *(longlong *)&this->Rows);
        if (*puVar7 == local_res8) {
          if (puVar7 != (ulonglong *)0x0) {
            pFVar8 = (FCsvRow *)(puVar7 + 1);
            goto LAB_14195ed91;
          }
          break;
        }
        iVar6 = (int)puVar7[5];
      } while (iVar6 != -1);
    }
  }
  pFVar8 = TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
           ::EmplaceByHash<__int64>
                     ((TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
                       *)this,uVar2,(long64 *)&local_res8);
LAB_14195ed91:
  pFVar3 = (FCsvProcessedEvent *)(pFVar8->Events).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar8->Events).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar8->Events).ArrayNum;
  piVar1 = &(pFVar8->Events).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar8->Events).AllocatorInstance,piVar1);
  }
  (pFVar8->Events).ArrayNum = iVar6 + 1;
  this_00 = (pFVar8->Events).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
  ::FString::FString((FString *)this_00,&param_1->EventText);
  *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[0x10].field_0x0)->
            AllocatorInstance).Data = param_1->FrameNumber;
  *(uint *)&this_00[0x14].field_0x0 = param_1->CategoryIndex;
  return;
}

// PushValue @ 14195ee60

void __thiscall
FCsvStreamWriter::PushValue
          (FCsvStreamWriter *this,FCsvStatSeries *param_1,long64 param_2,
          FCsvStatSeriesValue *param_3)

{
  int *piVar1;
  <unnamed_type_Value> <Var2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  FCsvRow *pFVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  long64 local_res18 [2];
  
  local_res18[0] = param_2;
  if ((param_1->ColumnIndex == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Series->ColumnIndex != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0xb24,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar7 = this->WriteFrameIndex;
  if (this->WriteFrameIndex < local_res18[0]) {
    lVar7 = local_res18[0];
  }
  this->WriteFrameIndex = lVar7;
  uVar12 = (int)((ulonglong)local_res18[0] >> 0x20) * 0x17 + (int)local_res18[0];
  if (*(int *)&(this->Rows).field_0x8 != *(int *)&(this->Rows).field_0x34) {
    puVar10 = *(undefined1 **)&(this->Rows).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Rows).field_0x38;
    }
    iVar5 = *(int *)(puVar10 + (ulonglong)(*(int *)&(this->Rows).field_0x48 - 1U & uVar12) * 4);
    if (iVar5 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar5 * 0x30 + *(longlong *)&this->Rows);
        if (*plVar8 == local_res18[0]) {
          if (plVar8 != (longlong *)0x0) {
            pFVar9 = (FCsvRow *)(plVar8 + 1);
            goto LAB_14195ef41;
          }
          break;
        }
        iVar5 = (int)plVar8[5];
      } while (iVar5 != -1);
    }
  }
  pFVar9 = TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
           ::EmplaceByHash<__int64_const_&>
                     ((TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
                       *)this,uVar12,local_res18);
LAB_14195ef41:
  iVar5 = (pFVar9->Values).ArrayNum;
  piVar1 = &(pFVar9->Values).ArrayNum;
  iVar11 = (this->VisibleSeries).ArrayNum;
  if (iVar5 < iVar11) {
    iVar11 = iVar11 - iVar5;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar11,(ForAnyElementType *)pFVar9,piVar1,&(pFVar9->Values).ArrayMax);
    memset((pFVar9->Values).AllocatorInstance.Data + (longlong)iVar5 * 4,0,(longlong)iVar11 << 2);
  }
  uVar12 = param_1->ColumnIndex;
  <Var2 = param_3->Value;
  uVar6 = 0;
  if ((int)uVar12 < *piVar1) {
    uVar6 = ~uVar12 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(<unnamed_type_Value> *)((pFVar9->Values).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) =
       <Var2;
  return;
}

