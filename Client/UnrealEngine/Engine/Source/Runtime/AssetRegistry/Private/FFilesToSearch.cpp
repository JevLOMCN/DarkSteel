// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 13

// PopFront<TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_> @ 142acd0f0

/* WARNING: Removing unreachable block (ram,0x000142acd32d) */
/* WARNING: Removing unreachable block (ram,0x000142acd54d) */
/* WARNING: Removing unreachable block (ram,0x000142acd55b) */
/* WARNING: Removing unreachable block (ram,0x000142acd33b) */

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::
PopFront<TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
          (FFilesToSearch *this,
          TArray<UE::AssetDataGather::Private::FGatheredPathData,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
          *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<UE::AssetDataGather::Private::FGatheredPathData> FVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  FGatheredPathData *pFVar14;
  longlong lVar15;
  ForElementType<UE::AssetDataGather::Private::FGatheredPathData> FVar16;
  int iVar17;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  undefined8 local_70;
  long64 local_68;
  uchar local_60;
  EGatherableFileType local_5f;
  FScriptContainerElement *local_58;
  undefined8 local_50;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  long64 local_38;
  uchar local_30;
  EGatherableFileType local_2f;
  
  for (iVar17 = param_2; 0 < iVar17; iVar17 = iVar17 + -1) {
    uVar4 = (this->BlockingFiles).Front;
    uVar5 = (this->BlockingFiles).AfterBack;
    pFVar8 = local_58;
    uVar9 = local_50;
    pFVar10 = local_48;
    uVar11 = local_40;
    if (uVar5 == uVar4) goto LAB_142acd350;
    if ((uVar5 == uVar4) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PopCount <= static_cast<SizeType>(Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3ec,
                            L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar14 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::operator[](&this->BlockingFiles,0);
    local_88 = (pFVar14->LocalAbsPath).Data.AllocatorInstance.Data;
    (pFVar14->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80._0_4_ = (pFVar14->LocalAbsPath).Data.ArrayNum;
    local_80._4_4_ = (pFVar14->LocalAbsPath).Data.ArrayMax;
    (pFVar14->LocalAbsPath).Data.ArrayNum = 0;
    (pFVar14->LocalAbsPath).Data.ArrayMax = 0;
    local_78 = (pFVar14->LongPackageName).Data.AllocatorInstance.Data;
    (pFVar14->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = (pFVar14->LongPackageName).Data.ArrayNum;
    local_70._4_4_ = (pFVar14->LongPackageName).Data.ArrayMax;
    (pFVar14->LongPackageName).Data.ArrayNum = 0;
    (pFVar14->LongPackageName).Data.ArrayMax = 0;
    local_68 = (pFVar14->PackageTimestamp).Ticks;
    local_60 = pFVar14->bIsReadOnly;
    local_5f = pFVar14->Type;
    uVar4 = (this->BlockingFiles).Front;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange(&this->BlockingFiles,uVar4,uVar4 + 1);
    puVar1 = &(this->BlockingFiles).Front;
    *puVar1 = *puVar1 + 1;
    FVar6 = (param_1->AllocatorInstance).SecondaryData;
    FVar16 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)param_1;
    if (FVar6 != (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
      FVar16 = FVar6;
    }
    if ((ulonglong)FVar16 <= &local_88) {
      FVar16 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)param_1;
      if (FVar6 != (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
        FVar16 = FVar6;
      }
      if ((&local_88 <
           (FScriptContainerElement **)((longlong)param_1->ArrayMax * 0x30 + (longlong)FVar16)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar13 = param_1->ArrayNum;
    if (iVar13 == param_1->ArrayMax) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetDataGather::Private::FGatheredPathData>_>
                         (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar13 + 1;
    FVar6 = (param_1->AllocatorInstance).SecondaryData;
    lVar15 = (longlong)iVar13;
    FVar16 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)param_1;
    if (FVar6 != (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
      FVar16 = FVar6;
    }
    *(undefined8 *)((longlong)FVar16 + lVar15 * 0x30) = 0;
    *(FScriptContainerElement **)((longlong)FVar16 + lVar15 * 0x30) = local_88;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 8) + lVar15 * 0x30) = (undefined4)local_80;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 0xc) + lVar15 * 0x30) = local_80._4_4_;
    puVar3 = (uchar *)((longlong)FVar16 + 0x10) + lVar15 * 0x30;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    *(FScriptContainerElement **)((uchar *)((longlong)FVar16 + 0x10) + lVar15 * 0x30) = local_78;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 0x18) + lVar15 * 0x30) = (undefined4)local_70;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 0x1c) + lVar15 * 0x30) = local_70._4_4_;
    *(long64 *)((uchar *)((longlong)FVar16 + 0x20) + lVar15 * 0x30) = local_68;
    ((uchar *)((longlong)FVar16 + 0x28))[lVar15 * 0x30] = local_60;
    ((uchar *)((longlong)FVar16 + 0x29))[lVar15 * 0x30] = local_5f;
    local_70 = 0;
    local_78 = (FScriptContainerElement *)0x0;
    local_80 = 0;
    local_88 = (FScriptContainerElement *)0x0;
  }
  goto LAB_142acd57a;
  while( true ) {
    if ((uVar5 == uVar4) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PopCount <= static_cast<SizeType>(Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3ec,
                            L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar14 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::operator[](&this->NormalPriorityFiles,0);
    local_58 = (pFVar14->LocalAbsPath).Data.AllocatorInstance.Data;
    (pFVar14->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = (pFVar14->LocalAbsPath).Data.ArrayNum;
    local_50._4_4_ = (pFVar14->LocalAbsPath).Data.ArrayMax;
    (pFVar14->LocalAbsPath).Data.ArrayNum = 0;
    (pFVar14->LocalAbsPath).Data.ArrayMax = 0;
    local_48 = (pFVar14->LongPackageName).Data.AllocatorInstance.Data;
    (pFVar14->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = (pFVar14->LongPackageName).Data.ArrayNum;
    local_40._4_4_ = (pFVar14->LongPackageName).Data.ArrayMax;
    (pFVar14->LongPackageName).Data.ArrayNum = 0;
    (pFVar14->LongPackageName).Data.ArrayMax = 0;
    local_38 = (pFVar14->PackageTimestamp).Ticks;
    local_30 = pFVar14->bIsReadOnly;
    local_2f = pFVar14->Type;
    uVar4 = (this->NormalPriorityFiles).Front;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    DestructRange(&this->NormalPriorityFiles,uVar4,uVar4 + 1);
    puVar1 = &(this->NormalPriorityFiles).Front;
    *puVar1 = *puVar1 + 1;
    FVar6 = (param_1->AllocatorInstance).SecondaryData;
    FVar16 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)param_1;
    if (FVar6 != (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
      FVar16 = FVar6;
    }
    if ((ulonglong)FVar16 <= &local_58) {
      FVar16 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)param_1;
      if (FVar6 != (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
        FVar16 = FVar6;
      }
      if ((&local_58 <
           (FScriptContainerElement **)((longlong)param_1->ArrayMax * 0x30 + (longlong)FVar16)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar13 = param_1->ArrayNum;
    if (iVar13 == param_1->ArrayMax) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AssetDataGather::Private::FGatheredPathData>_>
                         (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar13 + 1;
    FVar6 = (param_1->AllocatorInstance).SecondaryData;
    lVar15 = (longlong)iVar13;
    FVar16 = (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)param_1;
    if (FVar6 != (ForElementType<UE::AssetDataGather::Private::FGatheredPathData>)0x0) {
      FVar16 = FVar6;
    }
    *(undefined8 *)((longlong)FVar16 + lVar15 * 0x30) = 0;
    *(FScriptContainerElement **)((longlong)FVar16 + lVar15 * 0x30) = local_58;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 8) + lVar15 * 0x30) = (undefined4)local_50;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 0xc) + lVar15 * 0x30) = local_50._4_4_;
    puVar3 = (uchar *)((longlong)FVar16 + 0x10) + lVar15 * 0x30;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    *(FScriptContainerElement **)((uchar *)((longlong)FVar16 + 0x10) + lVar15 * 0x30) = local_48;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 0x18) + lVar15 * 0x30) = (undefined4)local_40;
    *(undefined4 *)((uchar *)((longlong)FVar16 + 0x1c) + lVar15 * 0x30) = local_40._4_4_;
    *(long64 *)((uchar *)((longlong)FVar16 + 0x20) + lVar15 * 0x30) = local_38;
    ((uchar *)((longlong)FVar16 + 0x28))[lVar15 * 0x30] = local_30;
    ((uchar *)((longlong)FVar16 + 0x29))[lVar15 * 0x30] = local_2f;
    local_40 = 0;
    uVar11 = local_40;
    local_48 = (FScriptContainerElement *)0x0;
    pFVar10 = local_48;
    local_50 = 0;
    uVar9 = local_50;
    local_58 = (FScriptContainerElement *)0x0;
    pFVar8 = local_58;
    local_40 = 0;
    local_48 = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_58 = (FScriptContainerElement *)0x0;
    iVar17 = iVar17 + -1;
    if (iVar17 < 1) break;
LAB_142acd350:
    local_40 = uVar11;
    local_48 = pFVar10;
    local_50 = uVar9;
    local_58 = pFVar8;
    uVar4 = (this->NormalPriorityFiles).Front;
    uVar5 = (this->NormalPriorityFiles).AfterBack;
    if (uVar5 == uVar4) break;
  }
LAB_142acd57a:
  piVar2 = &this->AvailableFilesNum;
  *piVar2 = *piVar2 + (iVar17 - param_2);
  if ((*piVar2 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AvailableFilesNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x184b,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// AddFileAgainAfterTimeout @ 142ae9610

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::AddFileAgainAfterTimeout
          (FFilesToSearch *this,FGatheredPathData *param_1)

{
  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_> *this_00;
  uint *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  
  this->AvailableFilesNum = this->AvailableFilesNum + 1;
  this_00 = &this->BlockingFiles;
  uVar2 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
          NormalizeCapacity(this_00,((this->BlockingFiles).AfterBack - (this->BlockingFiles).Front)
                                    + 1);
  if ((this->BlockingFiles).IndexMask + 1 < uVar2) {
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate(this_00,uVar2);
  }
  puVar1 = &(this->BlockingFiles).Front;
  *puVar1 = *puVar1 - 1;
  pFVar3 = (this_00->AllocatorInstance).Data +
           (ulonglong)((this->BlockingFiles).IndexMask & (this->BlockingFiles).Front) * 0x30;
  *(undefined8 *)pFVar3 = 0;
  *(FScriptContainerElement **)pFVar3 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
  (param_1->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + 8) = (param_1->LocalAbsPath).Data.ArrayNum;
  *(int *)(pFVar3 + 0xc) = (param_1->LocalAbsPath).Data.ArrayMax;
  (param_1->LocalAbsPath).Data.ArrayNum = 0;
  (param_1->LocalAbsPath).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + 0x10) =
       (param_1->LongPackageName).Data.AllocatorInstance.Data;
  (param_1->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + 0x18) = (param_1->LongPackageName).Data.ArrayNum;
  *(int *)(pFVar3 + 0x1c) = (param_1->LongPackageName).Data.ArrayMax;
  (param_1->LongPackageName).Data.ArrayNum = 0;
  (param_1->LongPackageName).Data.ArrayMax = 0;
  *(long64 *)(pFVar3 + 0x20) = (param_1->PackageTimestamp).Ticks;
  pFVar3[0x28] = (FScriptContainerElement)param_1->bIsReadOnly;
  pFVar3[0x29] = (FScriptContainerElement)param_1->Type;
  return;
}

// AddFileForLaterRetry @ 142ae96d0

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::AddFileForLaterRetry
          (FFilesToSearch *this,FGatheredPathData *param_1)

{
  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  FScriptContainerElement *this_01;
  
  this_00 = &this->LaterRetryFiles;
  uVar1 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
          NormalizeCapacity(this_00,((this->LaterRetryFiles).AfterBack -
                                    (this->LaterRetryFiles).Front) + 1);
  if ((this->LaterRetryFiles).IndexMask + 1 < uVar1) {
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    Reallocate(this_00,uVar1);
  }
  uVar1 = (this->LaterRetryFiles).AfterBack;
  (this->LaterRetryFiles).AfterBack = uVar1 + 1;
  this_01 = (this_00->AllocatorInstance).Data +
            (ulonglong)(uVar1 & (this->LaterRetryFiles).IndexMask) * 0x30;
  ::FString::FString((FString *)this_01,&param_1->LocalAbsPath);
  ::FString::FString((FString *)(this_01 + 0x10),&param_1->LongPackageName);
  *(long64 *)&this_01[0x20].field_0x0 = (param_1->PackageTimestamp).Ticks;
  this_01[0x28] = (FScriptContainerElement)param_1->bIsReadOnly;
  this_01[0x29] = (FScriptContainerElement)param_1->Type;
  return;
}

// AddFiles @ 142ae9770

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::AddFiles
          (FFilesToSearch *this,
          TArray<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
          *param_1)

{
  if (param_1->ArrayNum != 0) {
    this->AvailableFilesNum = this->AvailableFilesNum + param_1->ArrayNum;
    TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
    MoveAppendRange(&this->NormalPriorityFiles,
                    (FGatheredPathData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    return;
  }
  return;
}

// AddPriorityFile @ 142ae9ed0

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::AddPriorityFile
          (FFilesToSearch *this,FGatheredPathData *param_1)

{
  this->AvailableFilesNum = this->AvailableFilesNum + 1;
  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::Add
            (&this->BlockingFiles,param_1);
  return;
}

// GetAllocatedSize @ 142afafc0

ulong64 __thiscall
UE::AssetDataGather::Private::FFilesToSearch::GetAllocatedSize(FFilesToSearch *this)

{
  uint uVar1;
  uint uVar2;
  FGatheredPathData *pFVar3;
  longlong lVar4;
  ulong64 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar1 = (this->NormalPriorityFiles).AfterBack;
  lVar4 = (longlong)(int)((this->NormalPriorityFiles).IndexMask + 1) * 0x30;
  uVar2 = (this->NormalPriorityFiles).Front;
  for (iVar6 = 0; iVar6 != uVar1 - uVar2; iVar6 = iVar6 + 1) {
    pFVar3 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
             ::operator[](&this->NormalPriorityFiles,iVar6);
    lVar4 = lVar4 + ((longlong)(pFVar3->LongPackageName).Data.ArrayMax +
                    (longlong)(pFVar3->LocalAbsPath).Data.ArrayMax) * 2;
  }
  uVar1 = (this->BlockingFiles).AfterBack;
  lVar4 = lVar4 + (longlong)(int)((this->BlockingFiles).IndexMask + 1) * 0x30;
  uVar2 = (this->BlockingFiles).Front;
  for (iVar6 = 0; iVar6 != uVar1 - uVar2; iVar6 = iVar6 + 1) {
    pFVar3 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
             ::operator[](&this->BlockingFiles,iVar6);
    lVar4 = lVar4 + ((longlong)(pFVar3->LongPackageName).Data.ArrayMax +
                    (longlong)(pFVar3->LocalAbsPath).Data.ArrayMax) * 2;
  }
  uVar1 = (this->LaterRetryFiles).AfterBack;
  uVar5 = lVar4 + (longlong)(int)((this->LaterRetryFiles).IndexMask + 1) * 0x30;
  uVar2 = (this->LaterRetryFiles).Front;
  for (; iVar7 != uVar1 - uVar2; iVar7 = iVar7 + 1) {
    pFVar3 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
             ::operator[](&this->LaterRetryFiles,iVar7);
    uVar5 = uVar5 + ((longlong)(pFVar3->LongPackageName).Data.ArrayMax +
                    (longlong)(pFVar3->LocalAbsPath).Data.ArrayMax) * 2;
  }
  return uVar5;
}

// GetNumAvailable @ 142affb80

int __thiscall UE::AssetDataGather::Private::FFilesToSearch::GetNumAvailable(FFilesToSearch *this)

{
  return this->AvailableFilesNum;
}

// Num @ 142b0a630

int __thiscall UE::AssetDataGather::Private::FFilesToSearch::Num(FFilesToSearch *this)

{
  return (this->AvailableFilesNum - (this->LaterRetryFiles).Front) +
         (this->LaterRetryFiles).AfterBack;
}

// NumBlockingFiles @ 142b0a640

int __thiscall UE::AssetDataGather::Private::FFilesToSearch::NumBlockingFiles(FFilesToSearch *this)

{
  return (this->BlockingFiles).AfterBack - (this->BlockingFiles).Front;
}

// PopPriorityDirectories @ 142b0bbf0

/* WARNING: Removing unreachable block (ram,0x000142b0bd9c) */

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::PopPriorityDirectories
          (FFilesToSearch *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar4 = (this->PriorityDirectories).AfterBack;
  uVar6 = (this->PriorityDirectories).Front;
  if (uVar4 != uVar6) {
    do {
      if ((uVar4 == uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PopCount <= static_cast<SizeType>(Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3ec,
                             L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((int)((this->PriorityDirectories).AfterBack - (this->PriorityDirectories).Front) < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x3e3,
                             L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->PriorityDirectories).AllocatorInstance.Data +
               (ulonglong)
               ((this->PriorityDirectories).Front & (this->PriorityDirectories).IndexMask) * 0x10;
      local_18 = *(undefined8 *)pFVar7;
      *(undefined8 *)pFVar7 = 0;
      local_10 = *(undefined8 *)(pFVar7 + 8);
      *(undefined8 *)(pFVar7 + 8) = 0;
      uVar4 = (this->PriorityDirectories).Front;
      TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
                (&this->PriorityDirectories,uVar4,uVar4 + 1);
      puVar1 = &(this->PriorityDirectories).Front;
      *puVar1 = *puVar1 + 1;
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_18) &&
          ((FScriptContainerElement *)&local_18 < pFVar7 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)pFVar7 = local_18;
      local_18 = 0;
      *(undefined4 *)(pFVar7 + 8) = (undefined4)local_10;
      *(undefined4 *)(pFVar7 + 0xc) = local_10._4_4_;
      local_10 = 0;
      uVar4 = (this->PriorityDirectories).AfterBack;
      uVar6 = (this->PriorityDirectories).Front;
    } while (uVar4 != uVar6);
  }
  return;
}

// PrioritizePath @ 142b0be90

/* WARNING: Enum "EPriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::PrioritizePath
          (FFilesToSearch *this,FPathExistence *param_1,EPriority param_2)

{
  ForAnyElementType _Src;
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FString local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  RetryLaterRetryFiles(this);
  if (param_2 == Blocking) {
    local_38.Data.ArrayNum = (param_1->LocalAbsPath).Data.ArrayNum;
    lVar4 = (longlong)local_38.Data.ArrayNum;
    pFVar5 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar5,lVar4 * 2);
    }
    FPathExistence::LoadExistenceData(param_1);
    if (param_1->PathType != Directory) {
      local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
      local_28.Size = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        local_28.Size = 0;
      }
      FPathViews::GetPath(&local_18,&local_28);
      iVar6 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      iVar2 = iVar6;
      if (local_18.Size < iVar6) {
        iVar2 = local_18.Size;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      ::FString::RemoveAt(&local_38,iVar3,iVar6 - iVar3,Default);
    }
    uVar1 = TRingBuffer<FString,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                      (&this->PriorityDirectories,
                       ((this->PriorityDirectories).AfterBack - (this->PriorityDirectories).Front) +
                       1);
    if ((this->PriorityDirectories).IndexMask + 1 < uVar1) {
      TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate(&this->PriorityDirectories,uVar1)
      ;
    }
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    uVar1 = (this->PriorityDirectories).AfterBack;
    (this->PriorityDirectories).AfterBack = uVar1 + 1;
    pFVar5 = (this->PriorityDirectories).AllocatorInstance.Data +
             (ulonglong)(uVar1 & (this->PriorityDirectories).IndexMask) * 0x10;
    *(undefined8 *)&pFVar5->field_0x0 = 0;
    lVar4 = (longlong)local_38.Data.ArrayNum;
    *(int *)&pFVar5[8].field_0x0 = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      *(int *)(pFVar5 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar5,local_38.Data.ArrayNum,
                 (int *)(pFVar5 + 0xc));
      memcpy(*(void **)&pFVar5->field_0x0,_Src.Data,lVar4 * 2);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RetryLaterRetryFiles @ 142b18b60

void __thiscall
UE::AssetDataGather::Private::FFilesToSearch::RetryLaterRetryFiles(FFilesToSearch *this)

{
  uint *puVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  long64 lVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  FGatheredPathData *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  
  uVar14 = (this->LaterRetryFiles).AfterBack;
  uVar16 = (this->LaterRetryFiles).Front;
  if (uVar14 != uVar16) {
    do {
      if ((uVar14 == uVar16) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("PopCount <= static_cast<SizeType>(Num())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                              ,0x3ec,
                              L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i")
         , bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar15 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                ::operator[](&this->LaterRetryFiles,0);
      pFVar8 = (pFVar15->LocalAbsPath).Data.AllocatorInstance.Data;
      (pFVar15->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (pFVar15->LocalAbsPath).Data.ArrayNum;
      iVar5 = (pFVar15->LocalAbsPath).Data.ArrayMax;
      (pFVar15->LocalAbsPath).Data.ArrayNum = 0;
      (pFVar15->LocalAbsPath).Data.ArrayMax = 0;
      pFVar9 = (pFVar15->LongPackageName).Data.AllocatorInstance.Data;
      (pFVar15->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = (pFVar15->LongPackageName).Data.ArrayMax;
      iVar7 = (pFVar15->LongPackageName).Data.ArrayNum;
      (pFVar15->LongPackageName).Data.ArrayNum = 0;
      (pFVar15->LongPackageName).Data.ArrayMax = 0;
      uVar14 = (this->LaterRetryFiles).Front;
      lVar10 = (pFVar15->PackageTimestamp).Ticks;
      FVar2 = (FScriptContainerElement)pFVar15->bIsReadOnly;
      FVar3 = (FScriptContainerElement)pFVar15->Type;
      TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
      DestructRange(&this->LaterRetryFiles,uVar14,uVar14 + 1);
      puVar1 = &(this->LaterRetryFiles).Front;
      *puVar1 = *puVar1 + 1;
      this->AvailableFilesNum = this->AvailableFilesNum + 1;
      uVar14 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
               ::NormalizeCapacity(&this->NormalPriorityFiles,
                                   ((this->NormalPriorityFiles).AfterBack -
                                   (this->NormalPriorityFiles).Front) + 1);
      if ((this->NormalPriorityFiles).IndexMask + 1 < uVar14) {
        TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
        Reallocate(&this->NormalPriorityFiles,uVar14);
      }
      uVar14 = (this->NormalPriorityFiles).AfterBack;
      (this->NormalPriorityFiles).AfterBack = uVar14 + 1;
      uVar17 = (ulonglong)(uVar14 & (this->NormalPriorityFiles).IndexMask);
      pFVar11 = (this->NormalPriorityFiles).AllocatorInstance.Data;
      *(FScriptContainerElement **)(pFVar11 + uVar17 * 0x30) = pFVar8;
      *(int *)(pFVar11 + uVar17 * 0x30 + 8) = iVar4;
      *(int *)(pFVar11 + uVar17 * 0x30 + 0xc) = iVar5;
      *(FScriptContainerElement **)(pFVar11 + uVar17 * 0x30 + 0x10) = pFVar9;
      *(int *)(pFVar11 + uVar17 * 0x30 + 0x1c) = iVar6;
      *(int *)(pFVar11 + uVar17 * 0x30 + 0x18) = iVar7;
      pFVar11[uVar17 * 0x30 + 0x28] = FVar2;
      *(long64 *)(pFVar11 + uVar17 * 0x30 + 0x20) = lVar10;
      pFVar11[uVar17 * 0x30 + 0x29] = FVar3;
      uVar14 = (this->LaterRetryFiles).AfterBack;
      uVar16 = (this->LaterRetryFiles).Front;
    } while (uVar14 != uVar16);
  }
  return;
}

// Shrink @ 142b21ce0

void __thiscall UE::AssetDataGather::Private::FFilesToSearch::Shrink(FFilesToSearch *this)

{
  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  FGatheredPathData *pFVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_> local_68;
  
  iVar23 = 0;
  uVar17 = (this->NormalPriorityFiles).AfterBack - (this->NormalPriorityFiles).Front;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar20 = 1;
  if (uVar17 != 0) {
    uVar20 = uVar17;
  }
  local_68.IndexMask = 0xffffffff;
  local_68.Front = 0;
  local_68.AfterBack = 0;
  uVar1 = (ulonglong)(uVar20 - 1) * 2 + 1;
  lVar12 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  uVar20 = (uint)(uVar17 != 0) << ((byte)lVar12 & 0x1f);
  if (0x7fffffff < uVar20 || uVar20 < uVar17) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                        ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar15) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
  Reallocate(&local_68,uVar20);
  uVar20 = (this->NormalPriorityFiles).AfterBack;
  uVar17 = (this->NormalPriorityFiles).Front;
  iVar22 = iVar23;
  do {
    if (iVar22 == uVar20 - uVar17) {
      uVar3 = (this->NormalPriorityFiles).AllocatorInstance;
      uVar6 = (this->NormalPriorityFiles).IndexMask;
      uVar9 = (this->NormalPriorityFiles).Front;
      uVar2 = *(undefined8 *)&(this->NormalPriorityFiles).AfterBack;
      uVar14 = CONCAT44(local_68._20_4_,local_68.AfterBack);
      local_68.AfterBack = (uint)uVar2;
      local_68._20_4_ = SUB84((ulonglong)uVar2 >> 0x20,0);
      (this->NormalPriorityFiles).AllocatorInstance.Data = local_68.AllocatorInstance.Data;
      (this->NormalPriorityFiles).IndexMask = local_68.IndexMask;
      (this->NormalPriorityFiles).Front = local_68.Front;
      *(undefined8 *)&(this->NormalPriorityFiles).AfterBack = uVar14;
      uVar17 = (this->BlockingFiles).AfterBack - (this->BlockingFiles).Front;
      uVar20 = local_68.AfterBack - uVar9;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)uVar3;
      local_68.IndexMask = uVar6;
      local_68.Front = uVar9;
      if (uVar6 + 1 < uVar20) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x37f,L"");
        if (bVar15) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      else if (uVar20 != 0) {
        uVar18 = local_68.AfterBack & uVar6;
        uVar21 = uVar6 & uVar9;
        pFVar16 = (FGatheredPathData *)(uVar3 + (ulonglong)uVar21 * 0x30);
        if (uVar18 <= uVar21) {
          DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
                    ((FGatheredPathData *)(uVar3 + (ulonglong)uVar21 * 0x30),(uVar6 + 1) - uVar21);
          pFVar16 = (FGatheredPathData *)uVar3;
          uVar20 = uVar18;
        }
        DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>(pFVar16,uVar20);
      }
      local_68.Front = 0;
      local_68.AfterBack = 0;
      uVar20 = 1;
      if (uVar17 != 0) {
        uVar20 = uVar17;
      }
      uVar1 = (ulonglong)(uVar20 - 1) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar20 = (uint)(uVar17 != 0) << ((byte)lVar12 & 0x1f);
      if (0x7fffffff < uVar20 || uVar20 < uVar17) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x39f,L"Integer overflow in TRingBuffer capacity");
        if (bVar15) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
      Reallocate(&local_68,uVar20);
      uVar20 = (this->BlockingFiles).AfterBack;
      uVar17 = (this->BlockingFiles).Front;
      iVar22 = iVar23;
      do {
        if (iVar22 == uVar20 - uVar17) {
          uVar4 = (this->BlockingFiles).AllocatorInstance;
          uVar7 = (this->BlockingFiles).IndexMask;
          uVar10 = (this->BlockingFiles).Front;
          uVar2 = *(undefined8 *)&(this->BlockingFiles).AfterBack;
          uVar14 = CONCAT44(local_68._20_4_,local_68.AfterBack);
          local_68.AfterBack = (uint)uVar2;
          local_68._20_4_ = SUB84((ulonglong)uVar2 >> 0x20,0);
          (this->BlockingFiles).AllocatorInstance.Data = local_68.AllocatorInstance.Data;
          (this->BlockingFiles).IndexMask = local_68.IndexMask;
          (this->BlockingFiles).Front = local_68.Front;
          *(undefined8 *)&(this->BlockingFiles).AfterBack = uVar14;
          uVar17 = (this->LaterRetryFiles).AfterBack - (this->LaterRetryFiles).Front;
          uVar20 = local_68.AfterBack - uVar10;
          local_68.AllocatorInstance.Data = (FScriptContainerElement *)uVar4;
          local_68.IndexMask = uVar7;
          local_68.Front = uVar10;
          if (uVar7 + 1 < uVar20) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x37f,L"");
            if (bVar15) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          else if (uVar20 != 0) {
            uVar18 = local_68.AfterBack & uVar7;
            uVar21 = uVar7 & uVar10;
            pFVar16 = (FGatheredPathData *)(uVar4 + (ulonglong)uVar21 * 0x30);
            if (uVar18 <= uVar21) {
              DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
                        ((FGatheredPathData *)(uVar4 + (ulonglong)uVar21 * 0x30),
                         (uVar7 + 1) - uVar21);
              pFVar16 = (FGatheredPathData *)uVar4;
              uVar20 = uVar18;
            }
            DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
                      (pFVar16,uVar20);
          }
          local_68.Front = 0;
          local_68.AfterBack = 0;
          uVar20 = 1;
          if (uVar17 != 0) {
            uVar20 = uVar17;
          }
          uVar1 = (ulonglong)(uVar20 - 1) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar20 = (uint)(uVar17 != 0) << ((byte)lVar12 & 0x1f);
          if (0x7fffffff < uVar20 || uVar20 < uVar17) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x39f,L"Integer overflow in TRingBuffer capacity");
            if (bVar15) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
          Reallocate(&local_68,uVar20);
          uVar20 = (this->LaterRetryFiles).AfterBack;
          this_00 = &this->LaterRetryFiles;
          uVar17 = (this->LaterRetryFiles).Front;
          do {
            if (iVar23 == uVar20 - uVar17) {
              uVar5 = this_00->AllocatorInstance;
              uVar8 = this_00->IndexMask;
              uVar11 = this_00->Front;
              uVar14 = CONCAT44(local_68._20_4_,local_68.AfterBack);
              uVar2 = *(undefined8 *)&(this->LaterRetryFiles).AfterBack;
              local_68.AfterBack = (uint)uVar2;
              local_68._20_4_ = SUB84((ulonglong)uVar2 >> 0x20,0);
              (this_00->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
              (this->LaterRetryFiles).IndexMask = local_68.IndexMask;
              (this->LaterRetryFiles).Front = local_68.Front;
              *(undefined8 *)&(this->LaterRetryFiles).AfterBack = uVar14;
              uVar20 = local_68.AfterBack - uVar11;
              local_68.AllocatorInstance.Data = (FScriptContainerElement *)uVar5;
              local_68.IndexMask = uVar8;
              local_68.Front = uVar11;
              if (uVar8 + 1 < uVar20) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                    ,0x37f,L"");
                if (bVar15) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              else if (uVar20 != 0) {
                uVar17 = uVar8 & uVar11;
                uVar21 = local_68.AfterBack & uVar8;
                pFVar16 = (FGatheredPathData *)(uVar5 + (ulonglong)uVar17 * 0x30);
                if (uVar21 <= uVar17) {
                  DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
                            ((FGatheredPathData *)(uVar5 + (ulonglong)uVar17 * 0x30),
                             (uVar8 + 1) - uVar17);
                  pFVar16 = (FGatheredPathData *)uVar5;
                  uVar20 = uVar21;
                }
                DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
                          (pFVar16,uVar20);
              }
              local_68.Front = 0;
              local_68.AfterBack = 0;
              TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::Reallocate(&local_68,0);
              if ((FGatheredPathData *)local_68.AllocatorInstance.Data != (FGatheredPathData *)0x0)
              {
                FMemory::Free(local_68.AllocatorInstance.Data);
              }
              return;
            }
            pFVar16 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                      ::operator[](this_00,iVar23);
            uVar18 = (local_68.AfterBack - local_68.Front) + 1;
            uVar21 = 1;
            if (uVar18 != 0) {
              uVar21 = uVar18;
            }
            uVar1 = (ulonglong)(uVar21 - 1) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar21 = (uint)(uVar18 != 0) << ((byte)lVar12 & 0x1f);
            if (0x7fffffff < uVar21 || uVar21 < uVar18) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                  ,0x39f,L"Integer overflow in TRingBuffer capacity");
              if (bVar15) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            if (local_68.IndexMask + 1 < uVar21) {
              TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::Reallocate(&local_68,uVar21);
            }
            pFVar19 = local_68.AllocatorInstance.Data +
                      (ulonglong)(local_68.AfterBack & local_68.IndexMask) * 0x30;
            iVar23 = iVar23 + 1;
            *(undefined8 *)&pFVar19->field_0x0 = 0;
            *(FScriptContainerElement **)&pFVar19->field_0x0 =
                 (pFVar16->LocalAbsPath).Data.AllocatorInstance.Data;
            (pFVar16->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar19 + 8) = (pFVar16->LocalAbsPath).Data.ArrayNum;
            *(int *)(pFVar19 + 0xc) = (pFVar16->LocalAbsPath).Data.ArrayMax;
            (pFVar16->LocalAbsPath).Data.ArrayNum = 0;
            (pFVar16->LocalAbsPath).Data.ArrayMax = 0;
            *(undefined8 *)(pFVar19 + 0x10) = 0;
            *(FScriptContainerElement **)(pFVar19 + 0x10) =
                 (pFVar16->LongPackageName).Data.AllocatorInstance.Data;
            (pFVar16->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar19 + 0x18) = (pFVar16->LongPackageName).Data.ArrayNum;
            *(int *)(pFVar19 + 0x1c) = (pFVar16->LongPackageName).Data.ArrayMax;
            (pFVar16->LongPackageName).Data.ArrayNum = 0;
            (pFVar16->LongPackageName).Data.ArrayMax = 0;
            *(long64 *)(pFVar19 + 0x20) = (pFVar16->PackageTimestamp).Ticks;
            pFVar19[0x28] = (FScriptContainerElement)pFVar16->bIsReadOnly;
            pFVar19[0x29] = (FScriptContainerElement)pFVar16->Type;
            local_68.AfterBack = local_68.AfterBack + 1;
          } while( true );
        }
        pFVar16 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                  ::operator[](&this->BlockingFiles,iVar22);
        uVar18 = (local_68.AfterBack - local_68.Front) + 1;
        uVar21 = 1;
        if (uVar18 != 0) {
          uVar21 = uVar18;
        }
        uVar1 = (ulonglong)(uVar21 - 1) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar21 = (uint)(uVar18 != 0) << ((byte)lVar12 & 0x1f);
        if (0x7fffffff < uVar21 || uVar21 < uVar18) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                              ,0x39f,L"Integer overflow in TRingBuffer capacity");
          if (bVar15) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        if (local_68.IndexMask + 1 < uVar21) {
          TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
          Reallocate(&local_68,uVar21);
        }
        pFVar19 = local_68.AllocatorInstance.Data +
                  (ulonglong)(local_68.AfterBack & local_68.IndexMask) * 0x30;
        iVar22 = iVar22 + 1;
        *(undefined8 *)&pFVar19->field_0x0 = 0;
        *(FScriptContainerElement **)&pFVar19->field_0x0 =
             (pFVar16->LocalAbsPath).Data.AllocatorInstance.Data;
        (pFVar16->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar19 + 8) = (pFVar16->LocalAbsPath).Data.ArrayNum;
        *(int *)(pFVar19 + 0xc) = (pFVar16->LocalAbsPath).Data.ArrayMax;
        (pFVar16->LocalAbsPath).Data.ArrayNum = 0;
        (pFVar16->LocalAbsPath).Data.ArrayMax = 0;
        *(undefined8 *)(pFVar19 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar19 + 0x10) =
             (pFVar16->LongPackageName).Data.AllocatorInstance.Data;
        (pFVar16->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar19 + 0x18) = (pFVar16->LongPackageName).Data.ArrayNum;
        *(int *)(pFVar19 + 0x1c) = (pFVar16->LongPackageName).Data.ArrayMax;
        (pFVar16->LongPackageName).Data.ArrayNum = 0;
        (pFVar16->LongPackageName).Data.ArrayMax = 0;
        *(long64 *)(pFVar19 + 0x20) = (pFVar16->PackageTimestamp).Ticks;
        pFVar19[0x28] = (FScriptContainerElement)pFVar16->bIsReadOnly;
        pFVar19[0x29] = (FScriptContainerElement)pFVar16->Type;
        local_68.AfterBack = local_68.AfterBack + 1;
      } while( true );
    }
    pFVar16 = TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              ::operator[](&this->NormalPriorityFiles,iVar22);
    uVar18 = (local_68.AfterBack - local_68.Front) + 1;
    uVar21 = 1;
    if (uVar18 != 0) {
      uVar21 = uVar18;
    }
    uVar1 = (ulonglong)(uVar21 - 1) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar21 = (uint)(uVar18 != 0) << ((byte)lVar12 & 0x1f);
    if (0x7fffffff < uVar21 || uVar21 < uVar18) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                          ,0x39f,L"Integer overflow in TRingBuffer capacity");
      if (bVar15) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    if (local_68.IndexMask + 1 < uVar21) {
      TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
      Reallocate(&local_68,uVar21);
    }
    pFVar19 = local_68.AllocatorInstance.Data +
              (ulonglong)(local_68.AfterBack & local_68.IndexMask) * 0x30;
    iVar22 = iVar22 + 1;
    *(undefined8 *)pFVar19 = 0;
    *(FScriptContainerElement **)pFVar19 = (pFVar16->LocalAbsPath).Data.AllocatorInstance.Data;
    (pFVar16->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar19 + 8) = (pFVar16->LocalAbsPath).Data.ArrayNum;
    *(int *)(pFVar19 + 0xc) = (pFVar16->LocalAbsPath).Data.ArrayMax;
    (pFVar16->LocalAbsPath).Data.ArrayNum = 0;
    (pFVar16->LocalAbsPath).Data.ArrayMax = 0;
    *(undefined8 *)(pFVar19 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar19 + 0x10) =
         (pFVar16->LongPackageName).Data.AllocatorInstance.Data;
    (pFVar16->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar19 + 0x18) = (pFVar16->LongPackageName).Data.ArrayNum;
    *(int *)(pFVar19 + 0x1c) = (pFVar16->LongPackageName).Data.ArrayMax;
    (pFVar16->LongPackageName).Data.ArrayNum = 0;
    (pFVar16->LongPackageName).Data.ArrayMax = 0;
    *(long64 *)(pFVar19 + 0x20) = (pFVar16->PackageTimestamp).Ticks;
    pFVar19[0x28] = (FScriptContainerElement)pFVar16->bIsReadOnly;
    pFVar19[0x29] = (FScriptContainerElement)pFVar16->Type;
    local_68.AfterBack = local_68.AfterBack + 1;
  } while( true );
}

