// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 21

// FCacheJournalSectioned @ 148cb3140

FCacheJournalSectioned * __thiscall
StorageServer::FCacheJournalSectioned::FCacheJournalSectioned
          (FCacheJournalSectioned *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  IFileHandle *pIVar4;
  bool bVar5;
  FString *pFVar6;
  IPlatformFile *pIVar7;
  IFileHandle *pIVar8;
  wchar_t *pwVar9;
  FString local_18;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pFVar1 = &this->JournalFilePath;
  pwVar9 = param_1->DataPtr;
  this->_padding_ = (longlong)&___7FCacheJournalSectioned_StorageServer__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JournalFilePath).Data.ArrayNum = 0;
  (this->JournalFilePath).Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_18,pwVar9,(int)uVar2);
  if (pFVar1 != pFVar6) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->JournalFilePath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->JournalFilePath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->JournalFileHandle).Ptr = (IFileHandle *)0x0;
  this->NextAvailableJournalPos = 0x20;
  this->FlushTask = (TTask<void>)0x0;
  this->bPagesModified = false;
  (this->ChunkPages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkPages).ArrayNum = 0;
  (this->ChunkPages).ArrayMax = 0;
  (this->ChunkInfoPages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkInfoPages).ArrayNum = 0;
  (this->ChunkInfoPages).ArrayMax = 0;
  this->CurrentChunkPage = (FJournalChunkPage *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  pIVar7 = IPlatformFile::GetPlatformPhysical();
  if ((this->JournalFilePath).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pIVar8 = (IFileHandle *)(**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,pwVar9,1);
  pIVar4 = (this->JournalFileHandle).Ptr;
  if ((pIVar4 != pIVar8) && ((this->JournalFileHandle).Ptr = pIVar8, pIVar4 != (IFileHandle *)0x0))
  {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  bVar5 = LoadCacheJournal(this);
  if (bVar5) {
    ValidateJournal(this);
  }
  else {
    InvalidateAll(this);
  }
  return this;
}

// ~FCacheJournalSectioned @ 148cb5f10

void __thiscall
StorageServer::FCacheJournalSectioned::~FCacheJournalSectioned(FCacheJournalSectioned *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TTask<void> TVar4;
  IFileHandle *pIVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  DestructItems<StorageServer::FJournalChunkInfoPage,int>
            ((FJournalChunkInfoPage *)(this->ChunkInfoPages).AllocatorInstance.Data,
             (this->ChunkInfoPages).ArrayNum);
  pFVar3 = (this->ChunkInfoPages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<StorageServer::FJournalChunkPage,int>
            ((FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data,
             (this->ChunkPages).ArrayNum);
  pFVar3 = (this->ChunkPages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TVar4 = this->FlushTask;
  if (TVar4 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  pIVar5 = (this->JournalFileHandle).Ptr;
  if (pIVar5 != (IFileHandle *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pFVar3 = (this->JournalFilePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// operator() @ 148cb8aa0

void __thiscall
`StorageServer::FCacheJournalSectioned::ValidateJournal'::__l2::<lambda_1>::operator()
          (void *this,FIoChunkId *param_1,FCacheEntry *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined1 local_38 [8];
  undefined1 local_30;
  undefined1 local_20;
  undefined1 local_14;
  
  local_30 = 0;
  local_20 = 0;
  local_14 = 0;
  cVar5 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x28))
                    (*(longlong **)((longlong)this + 8),param_1,local_38);
  if (cVar5 == '\0') {
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= param_1) &&
       (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0xc)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10c,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0xc) = *(undefined8 *)param_1->Id;
    *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = *(undefined4 *)(param_1->Id + 8);
  }
  return;
}

// operator() @ 148cb8e10

void __thiscall
`StorageServer::FCacheJournalSectioned::ValidateJournal'::__l2::<lambda_2>::operator()
          (void *this,FIoChunkId *param_1,FCacheChunkInfo *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> *this_00;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  
  if (((*(longlong *)param_1->Id == FIoChunkId::InvalidChunkId.Id._0_8_) &&
      (*(short *)(param_1->Id + 8) == FIoChunkId::InvalidChunkId.Id._8_2_)) &&
     (param_1->Id[10] == FIoChunkId::InvalidChunkId.Id[10])) {
    pFVar4 = *(ForAnyElementType **)this;
    if ((pFVar4->Data <= param_1) &&
       (param_1 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0xc)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10c,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar10 + 1;
    pFVar5 = pFVar4->Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0xc) = *(undefined8 *)param_1->Id;
    *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(param_1->Id + 8);
  }
  uVar3 = *(uint *)(param_1->Id + 8);
  uVar2 = *(undefined8 *)param_1->Id;
  this_00 = *(TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> **)
             ((longlong)this + 8);
  uVar8 = (uint)((ulonglong)uVar2 >> 0x20);
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar12 = (this_00->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar10 = *(int *)((longlong)FVar12 +
                     (ulonglong)
                     (this_00->HashSize - 1U &
                     (uVar3 >> 0x18) + 0x58a2c485 +
                     ((((((uVar8 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff))
                         * 0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar3 & 0xff)) *
                       0x21 + (uVar3 >> 8 & 0xff)) * 0x21 + (uVar3 >> 0x10 & 0xff)) * 0x21 +
                     (((uint)((ulonglong)uVar2 >> 8) & 0xff) * 0x21 +
                     ((uint)((ulonglong)uVar2 >> 0x10) & 0xff)) * 0x40a9121 +
                     (uVar8 & 0xff) * -0x13be2b1f +
                     ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 +
                     ((uint)uVar2 & 0xff) * 0x30f35d61) * 4);
    if (iVar10 != -1) {
      lVar6 = *(longlong *)&this_00->Elements;
      do {
        lVar11 = (longlong)iVar10;
        if ((*(longlong *)(lVar6 + lVar11 * 0x14) == *(longlong *)param_1->Id) &&
           (*(int *)(lVar6 + 8 + lVar11 * 0x14) == *(int *)(param_1->Id + 8))) {
          pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
          if ((pFVar4->Data <= param_1) &&
             (param_1 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0xc)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar10 = *(int *)&pFVar4[1].Data;
          piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10c,pFVar4,piVar1);
          }
          *(int *)&pFVar4[1].Data = iVar10 + 1;
          pFVar5 = pFVar4->Data;
          *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0xc) = *(undefined8 *)param_1->Id;
          *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(param_1->Id + 8);
          return;
        }
        iVar10 = *(int *)(lVar6 + 0xc + lVar11 * 0x14);
      } while (iVar10 != -1);
    }
  }
  TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator>::Emplace<FIoChunkId_const_&>
            (this_00,(FIoChunkId *)&stack0x00000008,(bool *)param_1);
  return;
}

// AddChunkInfoPage @ 148cbb220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FJournalChunkInfoPage * __thiscall
StorageServer::FCacheJournalSectioned::AddChunkInfoPage(FCacheJournalSectioned *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  FJournalChunkInfoPage *pFVar8;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [40];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98._0_8_ = &___7FJournalChunkInfoPage_StorageServer__6B_;
  local_98._8_8_ = -1;
  pFVar3 = (this->ChunkInfoPages).AllocatorInstance.Data;
  local_98._16_8_ = 0x20000;
  local_98._24_2_ = 2;
  local_98._32_4_ = 0xb86;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (void *)0x0;
  local_28 = 0;
  if ((pFVar3 <= (FScriptContainerElement *)local_98) &&
     ((FScriptContainerElement *)local_98 <
      pFVar3 + (longlong)(this->ChunkInfoPages).ArrayMax * 0x78)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FJournalChunkInfoPage *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (this->ChunkInfoPages).ArrayNum;
  piVar1 = &(this->ChunkInfoPages).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,&(this->ChunkInfoPages).AllocatorInstance,piVar1);
  }
  (this->ChunkInfoPages).ArrayNum = iVar7 + 1;
  pFVar8 = FJournalChunkInfoPage::FJournalChunkInfoPage
                     ((FJournalChunkInfoPage *)
                      ((this->ChunkInfoPages).AllocatorInstance.Data + (longlong)iVar7 * 0x78),
                      (FJournalChunkInfoPage *)local_98);
  local_28 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  uVar5 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar7 = local_60.MaxBits;
  uStack_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  uVar2 = this->NextAvailableJournalPos;
  this->NextAvailableJournalPos = (int)pFVar8->_padding_ + uVar2;
  pFVar8->_padding_ = (longlong)(int)uVar2;
  this->bPagesModified = true;
  return pFVar8;
}

// AddChunkPage @ 148cbb410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cbb5b1) */

FJournalChunkPage * __thiscall
StorageServer::FCacheJournalSectioned::AddChunkPage(FCacheJournalSectioned *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FJournalChunkPage *pFVar7;
  undefined1 auStackY_108 [32];
  undefined **local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined2 local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  int local_38;
  bool local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_b0 = -1;
  local_a8 = 0x20000;
  pFVar3 = (this->ChunkPages).AllocatorInstance.Data;
  local_a0 = 1;
  local_b8 = &___7FJournalChunkPage_StorageServer__6B_;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_48 = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_38 = 0x758;
  local_34 = false;
  if (((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 < pFVar3 + (longlong)(this->ChunkPages).ArrayMax * 0x88)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FJournalChunkPage *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = (this->ChunkPages).ArrayNum;
  piVar1 = &(this->ChunkPages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x888,&(this->ChunkPages).AllocatorInstance,piVar1);
  }
  pFVar3 = (this->ChunkPages).AllocatorInstance.Data;
  (this->ChunkPages).ArrayNum = iVar6 + 1;
  pFVar7 = (FJournalChunkPage *)(pFVar3 + (longlong)iVar6 * 0x88);
  pFVar7->_padding_ = (longlong)&___7FJournalPageBase_StorageServer__6B_;
  pFVar7->_padding_ = local_b0;
  pFVar7->_padding_ = local_a8;
  *(undefined1 *)&pFVar7->_padding_ = (undefined1)local_a0;
  *(undefined1 *)((longlong)&pFVar7->_padding_ + 1) = local_a0._1_1_;
  pFVar7->_padding_ = (longlong)&___7FJournalChunkPage_StorageServer__6B_;
  TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
              *)&pFVar7->ChunkMap,
             (TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
              *)local_98);
  (pFVar7->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar7->Entries).AllocatorInstance.Data = local_48;
  (pFVar7->Entries).ArrayNum = (int)local_40;
  (pFVar7->Entries).ArrayMax = local_40._4_4_;
  pFVar7->MaxEntryCount = local_38;
  pFVar7->bContainsInvalidEntries = local_34;
  local_40 = 0;
  local_48 = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar6 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  uVar2 = this->NextAvailableJournalPos;
  this->NextAvailableJournalPos = (int)pFVar7->_padding_ + uVar2;
  pFVar7->_padding_ = (longlong)(int)uVar2;
  this->bPagesModified = true;
  return pFVar7;
}

// AddEntry @ 148cbb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
StorageServer::FCacheJournalSectioned::AddEntry
          (FCacheJournalSectioned *this,FIoChunkId *param_1,FCacheEntry *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  EJournalPageResult EVar6;
  FJournalChunkPage *pFVar7;
  FJournalChunkPage *this_00;
  FJournalChunkPage *pFVar8;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  lpCriticalSection = &this->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_98 = local_80;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  cVar5 = (**(code **)(this->_padding_ + 0x38))
                    (this,param_1,param_2->ChunkOffset,param_2->ChunkSize);
  if (cVar5 != '\0') {
    bVar3 = false;
    goto LAB_148cbb9c2;
  }
  pFVar7 = (FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data;
  this_00 = (FJournalChunkPage *)0x0;
  iVar1 = (this->ChunkPages).ArrayNum;
  pFVar8 = pFVar7 + iVar1;
  while( true ) {
    if ((this->ChunkPages).ArrayNum != iVar1) {
      local_88[0] = 0;
      `TCheckedPointerIterator<StorageServer::FJournalChunkPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_88);
    }
    if (pFVar7 == pFVar8) break;
    cVar5 = (**(code **)(pFVar7->_padding_ + 0x10))(pFVar7);
    if ((cVar5 == '\0') &&
       (cVar5 = (**(code **)(pFVar7->_padding_ + 8))(pFVar7,param_1), this_00 = pFVar7,
       cVar5 != '\0')) goto LAB_148cbb95b;
    pFVar7 = pFVar7 + 1;
  }
  if (this_00 != (FJournalChunkPage *)0x0) goto LAB_148cbb960;
  pFVar7 = AddChunkPage(this);
LAB_148cbb95b:
  this_00 = pFVar7;
  if (pFVar7 == (FJournalChunkPage *)0x0) {
LAB_148cbb970:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Page != nullptr && !Page->IsFull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
                       ,199,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
LAB_148cbb960:
    cVar5 = (**(code **)(this_00->_padding_ + 0x10))(this_00);
    if (cVar5 != '\0') goto LAB_148cbb970;
  }
  EVar6 = FJournalChunkPage::Add(this_00,param_1,param_2);
  bVar3 = EVar6 == Ok;
LAB_148cbb9c2:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// FindOrAddChunkInfoPage @ 148cc4b90

FJournalChunkInfoPage * __thiscall
StorageServer::FCacheJournalSectioned::FindOrAddChunkInfoPage
          (FCacheJournalSectioned *this,FIoChunkId *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FJournalChunkInfoPage *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FJournalChunkInfoPage *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  pFVar6 = (this->ChunkInfoPages).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    cVar3 = (**(code **)(*(longlong *)pFVar6 + 8))(pFVar6,param_1);
    if ((cVar3 != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Page.Contains(ChunkId)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
                           ,0x1c7,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FJournalChunkInfoPage *)(*pcVar2)();
      return pFVar5;
    }
    pFVar6 = pFVar6 + 0x78;
  }
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  pFVar5 = (FJournalChunkInfoPage *)(this->ChunkInfoPages).AllocatorInstance.Data;
  pFVar8 = pFVar5 + iVar1;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar8) break;
    cVar3 = (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
    if (cVar3 == '\0') {
      return pFVar5;
    }
    pFVar5 = pFVar5 + 1;
  }
  pFVar5 = AddChunkInfoPage(this);
  return pFVar5;
}

// FindOrAddChunkPage @ 148cc4c70

FJournalChunkPage * __thiscall
StorageServer::FCacheJournalSectioned::FindOrAddChunkPage
          (FCacheJournalSectioned *this,FIoChunkId *param_1)

{
  int iVar1;
  char cVar2;
  FJournalChunkPage *pFVar3;
  FJournalChunkPage *pFVar4;
  FJournalChunkPage *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChunkPages).ArrayNum;
  pFVar3 = (FJournalChunkPage *)0x0;
  pFVar4 = (FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->ChunkPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    cVar2 = (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4);
    if ((cVar2 == '\0') &&
       (cVar2 = (**(code **)(pFVar4->_padding_ + 8))(pFVar4,param_1), pFVar3 = pFVar4, cVar2 != '\0'
       )) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  if (pFVar3 == (FJournalChunkPage *)0x0) {
    pFVar3 = AddChunkPage(this);
  }
  return pFVar3;
}

// Flush @ 148cc5210

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
StorageServer::FCacheJournalSectioned::Flush(FCacheJournalSectioned *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTask<void> *pTVar1;
  int *piVar2;
  int iVar3;
  TTask<void> TVar4;
  code *pcVar5;
  bool bVar6;
  TTask<void> this_00;
  undefined8 *puVar7;
  bool bVar8;
  longlong local_18 [2];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId47,"FCacheJournalSectioned::Flush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
               ,0x2f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId47);
  }
  if (param_1) {
    FlushImmediate(this);
    goto LAB_148cc53af;
  }
  lpCriticalSection = &this->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->FlushTask;
  if ((this->FlushTask == (TTask<void>)0x0) || (*(char *)((longlong)this->FlushTask + 0xd0) != '\0')
     ) {
    this_00 = (TTask<void>)
              TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (TTask<void>)0x0) {
      this_00 = (TTask<void>)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_00,2,true);
      *(undefined ***)this_00 =
           &UE::Tasks::Private::
            TExecutableTaskBase<`StorageServer::FCacheJournalSectioned::Flush'::`10'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                ((FTaskBase *)this_00,L"CacheJournalFlush",Default,None,None);
      ((FTaskBase *)((longlong)this_00 + 0xd8))->_padding_ = (longlong)this;
      *(undefined ***)this_00 =
           &UE::Tasks::Private::
            TExecutableTask<`StorageServer::FCacheJournalSectioned::Flush'::`10'::<lambda_1>_>::
            _vftable_;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
    if (pTVar1 == (TTask<void> *)local_18) {
      if (this_00 != (TTask<void>)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)this_00 + 0x30);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar7 = *(undefined8 **)this_00;
          goto LAB_148cc5390;
        }
      }
    }
    else {
      TVar4 = *pTVar1;
      *pTVar1 = this_00;
      if (TVar4 != (TTask<void>)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)TVar4 + 0x30);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar7 = *(undefined8 **)TVar4;
          this_00 = TVar4;
LAB_148cc5390:
          (*(code *)*puVar7)(this_00,1);
        }
      }
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
LAB_148cc53af:
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// FlushImmediate @ 148cc5cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall StorageServer::FCacheJournalSectioned::FlushImmediate(FCacheJournalSectioned *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IFileHandle *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FJournalPageBase *pFVar6;
  FJournalPageBase *pFVar7;
  byte bVar8;
  bool bVar9;
  undefined1 auStackY_148 [32];
  undefined1 local_118;
  undefined1 local_117 [7];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_110;
  undefined8 local_100;
  FArchiveState local_f8;
  undefined8 local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  FJournalHeader local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId66,"FCacheJournalSectioned::FlushImmediate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
               ,0x42);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId66);
  }
  lpCriticalSection = &this->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar8 = 0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  if (this->bPagesModified == false) {
LAB_148cc5ebe:
    pFVar7 = (FJournalPageBase *)(this->ChunkPages).AllocatorInstance.Data;
    iVar1 = (this->ChunkPages).ArrayNum;
    pFVar6 = (FJournalPageBase *)((longlong)pFVar7 + (longlong)iVar1 * 0x88);
    while( true ) {
      if ((this->ChunkPages).ArrayNum != iVar1) {
        `TCheckedPointerIterator<StorageServer::FJournalChunkPage,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_118);
      }
      if (pFVar7 == pFVar6) break;
      bVar4 = FJournalPageBase::Flush(pFVar7,(this->JournalFileHandle).Ptr,&local_110);
      bVar8 = bVar8 | bVar4;
      pFVar7 = (FJournalPageBase *)&pFVar7[4].FilePos;
    }
    iVar1 = (this->ChunkInfoPages).ArrayNum;
    pFVar7 = (FJournalPageBase *)(this->ChunkInfoPages).AllocatorInstance.Data;
    pFVar6 = (FJournalPageBase *)((longlong)pFVar7 + (longlong)iVar1 * 0x78);
    while( true ) {
      if ((this->ChunkInfoPages).ArrayNum != iVar1) {
        `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_117);
      }
      if (pFVar7 == pFVar6) break;
      bVar4 = FJournalPageBase::Flush(pFVar7,(this->JournalFileHandle).Ptr,&local_110);
      bVar8 = bVar8 | bVar4;
      pFVar7 = (FJournalPageBase *)&pFVar7[3].PageType;
    }
    if (bVar8 != 0) {
      pIVar2 = (this->JournalFileHandle).Ptr;
      (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,1);
    }
  }
  else {
    local_48.PageCount = (this->ChunkInfoPages).ArrayNum + (this->ChunkPages).ArrayNum;
    local_48.Magic = 0x5a454e43;
    local_48.Version = 3;
    local_100 = 0;
    local_f8._padding_ = 0;
    local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_f8._40_8_ = 0;
    local_f8.ArSerializingDefaults = 0;
    local_f8.ArPortFlags = 0;
    local_f8.ArMaxSerializeSize = 0;
    local_f8.ArUEVer.FileVersionUE4 = 0;
    local_f8.ArUEVer.FileVersionUE5 = 0;
    local_f8.ArLicenseeUEVer = 0;
    local_f8.ArEngineVer.Major = 0;
    local_f8.ArEngineVer.Minor = 0;
    local_f8.ArEngineVer.Patch = 0;
    local_f8.ArEngineVer._6_2_ = 0;
    local_f8.ArEngineVer.Changelist = 0;
    local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_f8.SerializedProperty = (FProperty *)0x0;
    local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_f8.bCustomVersionsAreReset = false;
    local_f8._129_7_ = 0;
    local_f8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_f8);
    local_68 = 0;
    local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_60 = &local_110;
    local_58 = 0;
    FArchiveState::SetIsSaving(&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
    local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    StorageServer::operator<<((FArchive *)&local_f8,&local_48);
    if (local_110.ArrayNum < 0x21) {
      pIVar2 = (this->JournalFileHandle).Ptr;
      cVar5 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,0);
      if (cVar5 != '\0') {
        pIVar2 = (this->JournalFileHandle).Ptr;
        cVar5 = (**(code **)((longlong)*pIVar2 + 0x30))
                          (pIVar2,local_110.AllocatorInstance.Data,(longlong)local_110.ArrayNum);
        if (cVar5 != '\0') {
          this->bPagesModified = false;
          bVar8 = 1;
          FArchive::~FArchive((FArchive *)&local_f8);
          goto LAB_148cc5ebe;
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6971948200311652267>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
                         ,0x55,"SerializationBuffer.Num() <= FJournalHeader::SerializedSize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FArchive::~FArchive((FArchive *)&local_f8);
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Invalidate @ 148ccb7d0

void __thiscall
StorageServer::FCacheJournalSectioned::Invalidate(FCacheJournalSectioned *this,FIoChunkId *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  FJournalChunkPage *pFVar6;
  FScriptContainerElement *pFVar7;
  FJournalChunkPage *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ChunkPages).ArrayNum;
  this_00 = (FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data;
  pFVar6 = this_00 + iVar1;
  while( true ) {
    if ((this->ChunkPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar6) break;
    FJournalChunkPage::Invalidate(this_00,param_1);
    this_00 = this_00 + 1;
  }
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  pFVar8 = (this->ChunkInfoPages).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar7) break;
    iVar5 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
            ::Remove((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                      *)(pFVar8 + 0x28),param_1);
    if (0 < iVar5) {
      __GTraceCounterZenJournalSectionedEntries.Value =
           __GTraceCounterZenJournalSectionedEntries.Value + -1;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterZenJournalSectionedEntries.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterZenJournalSectionedEntries.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterZenJournalSectionedEntries.CounterId._2_2_ = 0;
            __GTraceCounterZenJournalSectionedEntries.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterZenJournalSectionedEntries.CounterId._0_2_,
                   __GTraceCounterZenJournalSectionedEntries.Value);
      }
      pFVar8[0x19] = (FScriptContainerElement)0x1;
    }
    pFVar8 = pFVar8 + 0x78;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// InvalidateAll @ 148ccc080

void __thiscall StorageServer::FCacheJournalSectioned::InvalidateAll(FCacheJournalSectioned *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<StorageServer::FJournalChunkPage,int>
            ((FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data,
             (this->ChunkPages).ArrayNum);
  piVar1 = &(this->ChunkPages).ArrayMax;
  (this->ChunkPages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&(this->ChunkPages).AllocatorInstance,0,piVar1);
  }
  DestructItems<StorageServer::FJournalChunkInfoPage,int>
            ((FJournalChunkInfoPage *)(this->ChunkInfoPages).AllocatorInstance.Data,
             (this->ChunkInfoPages).ArrayNum);
  piVar1 = &(this->ChunkInfoPages).ArrayMax;
  (this->ChunkInfoPages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&(this->ChunkInfoPages).AllocatorInstance,0,piVar1);
  }
  this->NextAvailableJournalPos = 0x20;
  if ((__GTraceCounterZenJournalSectionedChunks.Value != 0) &&
     (__GTraceCounterZenJournalSectionedChunks.Value = 0, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterZenJournalSectionedChunks.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenJournalSectionedChunks.CounterName,TraceCounterType_Int,
                         __GTraceCounterZenJournalSectionedChunks.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenJournalSectionedChunks.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenJournalSectionedChunks.CounterId._2_2_ = 0;
        __GTraceCounterZenJournalSectionedChunks.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenJournalSectionedChunks.CounterId._0_2_,
               __GTraceCounterZenJournalSectionedChunks.Value);
  }
  if ((__GTraceCounterZenJournalSectionedEntries.Value != 0) &&
     (__GTraceCounterZenJournalSectionedEntries.Value = 0, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenJournalSectionedEntries.CounterName,TraceCounterType_Int,
                         __GTraceCounterZenJournalSectionedEntries.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenJournalSectionedEntries.CounterId._2_2_ = 0;
        __GTraceCounterZenJournalSectionedEntries.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenJournalSectionedEntries.CounterId._0_2_,
               __GTraceCounterZenJournalSectionedEntries.Value);
  }
  this->bPagesModified = true;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// IterateCacheEntries @ 148ccd060

void __thiscall
StorageServer::FCacheJournalSectioned::IterateCacheEntries
          (FCacheJournalSectioned *this,
          TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheEntry_const_&)> *param_1
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = (this->ChunkPages).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar11 = (this->ChunkPages).AllocatorInstance.Data;
  pFVar8 = pFVar11 + 0x78;
  pFVar9 = pFVar11 + uVar6 * 0x88;
  while( true ) {
    if ((this->ChunkPages).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar9) break;
    pcVar4 = *(code **)param_1;
    uVar3 = *(undefined8 *)&param_1->field_0x8;
    iVar2 = *(int *)pFVar8;
    lVar10 = *(longlong *)(pFVar8 + -8);
    lVar7 = (longlong)iVar2 * 0x50 + lVar10;
    while( true ) {
      if (*(int *)pFVar8 != iVar2) {
        `TCheckedPointerIterator<StorageServer::FJournalStoreEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (lVar10 == lVar7) break;
      (*pcVar4)(uVar3,lVar10,lVar10 + 0x10);
      lVar10 = lVar10 + 0x50;
    }
    pFVar11 = pFVar11 + 0x88;
    uVar6 = (ulonglong)uVar1;
    pFVar8 = pFVar8 + 0x88;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// IterateCacheEntriesForChunkId @ 148ccd6f0

void __thiscall
StorageServer::FCacheJournalSectioned::IterateCacheEntriesForChunkId
          (FCacheJournalSectioned *this,FIoChunkId *param_1,
          TFunctionRef<void___cdecl(StorageServer::FCacheEntry_const_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FJournalChunkPage *pFVar4;
  FJournalChunkPage *this_00;
  undefined1 local_res8 [8];
  TFunctionRef<void___cdecl(StorageServer::FCacheEntry_const_&)> local_38;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ChunkPages).ArrayNum;
  this_00 = (FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if ((this->ChunkPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    local_38._0_8_ = *(undefined8 *)param_2;
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    FJournalChunkPage::IterateCacheEntriesForChunkId(this_00,param_1,&local_38);
    this_00 = this_00 + 1;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// IterateChunkIds @ 148ccdc70

void __thiscall
StorageServer::FCacheJournalSectioned::IterateChunkIds
          (FCacheJournalSectioned *this,
          TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&)>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FJournalChunkInfoPage *pFVar4;
  FJournalChunkInfoPage *this_00;
  undefined1 local_res8 [8];
  TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&)> local_28;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  this_00 = (FJournalChunkInfoPage *)(this->ChunkInfoPages).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    local_28._0_8_ = *(undefined8 *)param_1;
    local_28._8_8_ = *(undefined8 *)&param_1->field_0x8;
    FJournalChunkInfoPage::IterateChunkIds(this_00,&local_28);
    this_00 = this_00 + 1;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// LoadCacheJournal @ 148ccebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148ccf62f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
StorageServer::FCacheJournalSectioned::LoadCacheJournal(FCacheJournalSectioned *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  IFileHandle *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  FBlake3Hash *pFVar16;
  FJournalChunkInfoPage *pFVar17;
  FStaticBasicLogRecord *pFVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStackY_448 [32];
  ForAnyElementType local_3f8;
  int local_3f0 [2];
  ulonglong local_3e8;
  ulonglong local_3e0;
  FArchiveState local_3d8;
  undefined8 local_348;
  ForAnyElementType *local_340;
  undefined8 local_338;
  FArchiveState local_328;
  undefined8 local_298;
  ForAnyElementType *local_290;
  undefined8 local_288;
  FArchiveState local_278;
  undefined8 local_1e8;
  ForAnyElementType *local_1e0;
  undefined8 local_1d8;
  longlong local_1c8;
  longlong lStack_1c0;
  int local_1b8;
  FJournalPageHeader local_1b4;
  FJournalHeader local_190 [2];
  undefined **local_178;
  longlong local_170;
  ulonglong local_168;
  undefined2 local_160;
  TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
  local_158;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_e8 [40];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  undefined8 uStack_90;
  void *local_80;
  undefined4 local_78;
  FBlake3Hash local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId252,"FCacheJournalSectioned::LoadCacheJournal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
               ,0xfc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId252);
  }
  lpCriticalSection = &this->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pIVar2 = (this->JournalFileHandle).Ptr;
  if ((pIVar2 == (IFileHandle *)0x0) ||
     (lVar14 = (**(code **)((longlong)*pIVar2 + 0x50))(), lVar14 < 0x20)) {
    bVar9 = false;
    goto LAB_148ccf894;
  }
  uVar21 = 0;
  local_3f8.Data = (FScriptContainerElement *)0x0;
  local_3f0[0] = 0;
  local_3f0[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x20000,&local_3f8,0,local_3f0 + 1);
  lVar14 = 0x20;
  if (local_3f0[0] < 0x20) {
    iVar19 = 0x20 - local_3f0[0];
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar19,&local_3f8,local_3f0,local_3f0 + 1);
    memset(local_3f8.Data + iVar12,0,(longlong)iVar19);
    iVar12 = local_3f0[0];
  }
  else {
    iVar12 = local_3f0[0];
    if (0x20 < local_3f0[0]) {
      iVar19 = local_3f0[0] + -0x20;
      if (iVar19 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
      else if (iVar19 == 0) goto LAB_148ccedd4;
      iVar13 = (local_3f0[0] - iVar19) + -0x20;
      iVar12 = local_3f0[0];
      if (iVar13 != 0) {
        memmove(local_3f8.Data + 0x20,local_3f8.Data + 0x20 + iVar19,(longlong)iVar13);
        iVar12 = local_3f0[0];
      }
      local_3f0[0] = iVar12 - iVar19;
      iVar12 = iVar12 - iVar19;
    }
  }
LAB_148ccedd4:
  pIVar2 = (this->JournalFileHandle).Ptr;
  cVar11 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,local_3f8.Data,(longlong)iVar12,0);
  if (cVar11 == '\0') {
    bVar9 = false;
  }
  else {
    local_3d8._padding_ = 0;
    local_3d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_3d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_3d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_3d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_3d8._40_8_ = 0;
    local_3d8.ArSerializingDefaults = 0;
    local_3d8.ArPortFlags = 0;
    local_3d8.ArMaxSerializeSize = 0;
    local_3d8.ArUEVer.FileVersionUE4 = 0;
    local_3d8.ArUEVer.FileVersionUE5 = 0;
    local_3d8.ArLicenseeUEVer = 0;
    local_3d8.ArEngineVer.Major = 0;
    local_3d8.ArEngineVer.Minor = 0;
    local_3d8.ArEngineVer.Patch = 0;
    local_3d8.ArEngineVer._6_2_ = 0;
    local_3d8.ArEngineVer.Changelist = 0;
    local_3d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_3d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_3d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_3d8.SerializedProperty = (FProperty *)0x0;
    local_3d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_3d8.bCustomVersionsAreReset = false;
    local_3d8._129_7_ = 0;
    local_3d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_3d8);
    local_348 = 0;
    local_3d8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_340 = &local_3f8;
    local_338 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_3d8,true);
    (**(code **)(local_3d8._padding_ + 0x108))(&local_3d8,0);
    StorageServer::operator<<((FArchive *)&local_3d8,local_190);
    if (local_190[0].Magic == 0x5a454e43) {
      if (local_190[0].Version == 3) {
        FArchive::~FArchive((FArchive *)&local_3d8);
        local_3e0 = 0;
        local_3e8 = 0;
        lVar15 = (**(code **)((longlong)*(this->JournalFileHandle).Ptr + 0x50))();
        uVar7 = _UNK_150631d98;
        uVar5 = ___xmm_00000000ffffffff0000008000000000;
        uVar20 = uVar21;
        uVar23 = uVar21;
        if (0x60 < lVar15) {
          do {
            if (local_190[0].PageCount <= uVar20) break;
            local_1b4.DataHash.Hash[0x10] = '\0';
            local_1b4.DataHash.Hash[0x11] = '\0';
            local_1b4.DataHash.Hash[0x12] = '\0';
            local_1b4.DataHash.Hash[0x13] = '\0';
            local_1b4.DataHash.Hash[0] = '\0';
            local_1b4.DataHash.Hash[1] = '\0';
            local_1b4.DataHash.Hash[2] = '\0';
            local_1b4.DataHash.Hash[3] = '\0';
            local_1b4.DataHash.Hash[4] = '\0';
            local_1b4.DataHash.Hash[5] = '\0';
            local_1b4.DataHash.Hash[6] = '\0';
            local_1b4.DataHash.Hash[7] = '\0';
            local_1b4.DataHash.Hash[8] = '\0';
            local_1b4.DataHash.Hash[9] = '\0';
            local_1b4.DataHash.Hash[10] = '\0';
            local_1b4.DataHash.Hash[0xb] = '\0';
            local_1b4.DataHash.Hash[0xc] = '\0';
            local_1b4.DataHash.Hash[0xd] = '\0';
            local_1b4.DataHash.Hash[0xe] = '\0';
            local_1b4.DataHash.Hash[0xf] = '\0';
            if (local_3f0[0] < 0x40) {
              iVar19 = 0x40 - local_3f0[0];
              iVar12 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (1,1,iVar19,&local_3f8,local_3f0,local_3f0 + 1);
              memset(local_3f8.Data + iVar12,0,(longlong)iVar19);
              iVar12 = local_3f0[0];
            }
            else {
              iVar12 = local_3f0[0];
              if (0x40 < local_3f0[0]) {
                iVar19 = local_3f0[0] + -0x40;
                if (iVar19 < 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    );
                  if (bVar9) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                }
                else if (iVar19 == 0) goto LAB_148ccf019;
                iVar13 = (local_3f0[0] - iVar19) + -0x40;
                iVar12 = local_3f0[0];
                if (iVar13 != 0) {
                  memmove(local_3f8.Data + 0x40,local_3f8.Data + 0x40 + iVar19,(longlong)iVar13);
                  iVar12 = local_3f0[0];
                }
                local_3f0[0] = iVar12 - iVar19;
                iVar12 = iVar12 - iVar19;
              }
            }
LAB_148ccf019:
            pIVar2 = (this->JournalFileHandle).Ptr;
            cVar11 = (**(code **)((longlong)*pIVar2 + 0x28))
                               (pIVar2,local_3f8.Data,(longlong)iVar12,lVar14);
            if (cVar11 == '\0') {
              if (2 < (byte)LogCacheJournal._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogCacheJournal);
              }
              bVar9 = false;
              goto LAB_148ccf880;
            }
            local_328._padding_ = 0;
            local_328.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            local_328.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
            local_328.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
            local_328.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
            local_328._40_8_ = 0;
            local_328.ArSerializingDefaults = 0;
            local_328.ArPortFlags = 0;
            local_328.ArMaxSerializeSize = 0;
            local_328.ArUEVer.FileVersionUE4 = 0;
            local_328.ArUEVer.FileVersionUE5 = 0;
            local_328.ArLicenseeUEVer = 0;
            local_328.ArEngineVer.Major = 0;
            local_328.ArEngineVer.Minor = 0;
            local_328.ArEngineVer.Patch = 0;
            local_328.ArEngineVer._6_2_ = 0;
            local_328.ArEngineVer.Changelist = 0;
            local_328.CustomVersionContainer = (FCustomVersionContainer *)0x0;
            local_328.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            local_328.SavePackageData = (FArchiveSavePackageData *)0x0;
            local_328.SerializedProperty = (FProperty *)0x0;
            local_328.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            local_328.bCustomVersionsAreReset = false;
            local_328._129_7_ = 0;
            local_328.NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(&local_328);
            local_298 = 0;
            local_328._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_290 = &local_3f8;
            local_288 = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading(&local_328,true);
            (**(code **)(local_328._padding_ + 0x108))(&local_328,0);
            StorageServer::operator<<((FArchive *)&local_328,&local_1b4);
            uVar8 = local_1b4.DataSize;
            if (local_1b4.Magic != 0x50414745) {
              if (2 < (byte)LogCacheJournal._0_1_) {
                pFVar18 = &::LOG_Static;
LAB_148ccf7eb:
                UE::Logging::Private::BasicLog<3>(pFVar18,(FLogCategoryBase *)&LogCacheJournal);
              }
LAB_148ccf7f7:
              (**(code **)(this->_padding_ + 0x10))(this);
              FArchive::~FArchive((FArchive *)&local_328);
              bVar9 = false;
              goto LAB_148ccf880;
            }
            if ((0x20000 < local_1b4.PageSize) || (local_1b4.PageSize <= local_1b4.DataSize)) {
              if (2 < (byte)LogCacheJournal._0_1_) {
                pFVar18 = &::LOG_Static;
                goto LAB_148ccf7eb;
              }
              goto LAB_148ccf7f7;
            }
            if (local_3f0[0] < (int)local_1b4.DataSize) {
              iVar19 = local_1b4.DataSize - local_3f0[0];
              iVar12 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (1,1,iVar19,&local_3f8,local_3f0,local_3f0 + 1);
              memset(local_3f8.Data + iVar12,0,(longlong)iVar19);
              iVar12 = local_3f0[0];
            }
            else {
              if ((int)local_1b4.DataSize < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1b4.DataSize);
              }
              iVar12 = local_3f0[0];
              if ((int)local_1b4.DataSize < local_3f0[0]) {
                uVar22 = local_3f0[0] - local_1b4.DataSize;
                if ((int)(uVar22 | local_1b4.DataSize) < 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    );
                  if (bVar9) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                  iVar12 = local_3f0[0];
                }
                uVar23 = local_3e8;
                if (uVar22 != 0) {
                  iVar19 = (iVar12 - uVar22) - uVar8;
                  if (iVar19 != 0) {
                    memmove(local_3f8.Data + (int)uVar8,local_3f8.Data + (int)uVar8 + (int)uVar22,
                            (longlong)iVar19);
                    iVar12 = local_3f0[0];
                  }
                  iVar12 = iVar12 - uVar22;
                  local_3f0[0] = iVar12;
                  uVar23 = local_3e8;
                }
              }
            }
            pIVar2 = (this->JournalFileHandle).Ptr;
            cVar11 = (**(code **)((longlong)*pIVar2 + 0x28))
                               (pIVar2,local_3f8.Data,(longlong)iVar12,lVar14 + 0x40);
            if (cVar11 == '\0') {
              if (2 < (byte)LogCacheJournal._0_1_) {
                pFVar18 = &::LOG_Static;
                goto LAB_148ccf7eb;
              }
              goto LAB_148ccf7f7;
            }
            pFVar16 = FBlake3::HashBuffer(&local_68,local_3f8.Data,(longlong)local_3f0[0]);
            uVar6 = ___xmm_00000000ffffffff0000008000000000;
            local_1c8 = *(longlong *)pFVar16->Hash;
            lStack_1c0 = *(longlong *)(pFVar16->Hash + 8);
            local_1b8 = *(int *)(pFVar16->Hash + 0x10);
            if (((local_1c8 != local_1b4.DataHash.Hash._0_8_) ||
                (lStack_1c0 != local_1b4.DataHash.Hash._8_8_)) ||
               (local_1b8 != local_1b4.DataHash.Hash._16_4_)) {
              if (2 < (byte)LogCacheJournal._0_1_) {
                pFVar18 = (FStaticBasicLogRecord *)&PTR_u_Page_has_invali_151cb6b88;
                goto LAB_148ccf7eb;
              }
              goto LAB_148ccf7f7;
            }
            if (local_1b4.Type == Chunk) {
              local_168 = (ulonglong)local_1b4.PageSize;
              pFVar3 = (this->ChunkPages).AllocatorInstance.Data;
              local_178 = &___7FJournalChunkPage_StorageServer__6B_;
              local_158.Elements._0_8_ = 0;
              local_158.Elements._8_8_ = 0;
              local_158.Elements._32_8_ = 0;
              local_158.Elements._40_4_ = 0;
              local_158.Elements._52_4_ = 0;
              local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_158.HashSize = 0;
              local_108 = 0;
              local_100 = 0;
              local_f4 = 0;
              local_170 = -1;
              local_160 = 1;
              local_158.Elements._44_4_ = 0x80;
              local_158.Elements._48_4_ = 0xffffffff;
              local_f8 = 0x758;
              if (((pFVar3 <= (FScriptContainerElement *)&local_178) &&
                  ((FScriptContainerElement *)&local_178 <
                   pFVar3 + (longlong)(this->ChunkPages).ArrayMax * 0x88)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar10 = (*pcVar4)();
                return (bool)uVar10;
              }
              iVar12 = (this->ChunkPages).ArrayNum;
              piVar1 = &(this->ChunkPages).ArrayMax;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x888,&(this->ChunkPages).AllocatorInstance,piVar1);
              }
              pFVar3 = (this->ChunkPages).AllocatorInstance.Data;
              (this->ChunkPages).ArrayNum = iVar12 + 1;
              pFVar17 = (FJournalChunkInfoPage *)(pFVar3 + (longlong)iVar12 * 0x88);
              pFVar17->_padding_ = (longlong)&___7FJournalPageBase_StorageServer__6B_;
              pFVar17->_padding_ = local_170;
              pFVar17->_padding_ = local_168;
              *(undefined1 *)&pFVar17->_padding_ = (undefined1)local_160;
              *(undefined1 *)((longlong)&pFVar17->_padding_ + 1) = local_160._1_1_;
              pFVar17->_padding_ = (longlong)&___7FJournalChunkPage_StorageServer__6B_;
              TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
              ::
              TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
                        ((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
                          *)&pFVar17->MaxEntryCount,&local_158);
              *(undefined8 *)&(pFVar17->Entries).field_0x48 = 0;
              *(undefined8 *)&(pFVar17->Entries).field_0x48 = local_108;
              *(undefined4 *)&pFVar17[1]._padding_ = (undefined4)local_100;
              *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 4) = local_100._4_4_;
              *(undefined4 *)&pFVar17[1]._padding_ = local_f8;
              *(undefined1 *)((longlong)&pFVar17[1]._padding_ + 4) = local_f4;
              local_100 = 0;
              local_108 = 0;
              local_158.HashSize = 0;
              if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_158.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_158.Elements);
              local_178 = &___7FJournalPageBase_StorageServer__6B_;
            }
            else {
              if (local_1b4.Type != ChunkInfo) {
                if (2 < (byte)LogCacheJournal._0_1_) {
                  pFVar18 = &::LOG_Static;
                  goto LAB_148ccf7eb;
                }
                goto LAB_148ccf7f7;
              }
              local_e8._16_8_ = ZEXT48(local_1b4.PageSize);
              pFVar3 = (this->ChunkInfoPages).AllocatorInstance.Data;
              local_e8._0_8_ = &___7FJournalChunkInfoPage_StorageServer__6B_;
              local_c0.Data = (FScriptContainerElement *)0x0;
              local_b8 = 0;
              local_b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
              local_80 = (void *)0x0;
              local_78 = 0;
              local_e8._8_8_ = -1;
              local_e8._24_2_ = 2;
              local_e8._32_4_ = 0xb86;
              ___xmm_00000000ffffffff0000008000000000 = (int)uVar5;
              _UNK_150631d94 = SUB84(uVar5,4);
              local_b0.NumBits = ___xmm_00000000ffffffff0000008000000000;
              local_b0.MaxBits = _UNK_150631d94;
              uStack_90 = uVar7;
              ___xmm_00000000ffffffff0000008000000000 = uVar6;
              if (((pFVar3 <= (FScriptContainerElement *)local_e8) &&
                  ((FScriptContainerElement *)local_e8 <
                   pFVar3 + (longlong)(this->ChunkInfoPages).ArrayMax * 0x78)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar10 = (*pcVar4)();
                return (bool)uVar10;
              }
              iVar12 = (this->ChunkInfoPages).ArrayNum;
              piVar1 = &(this->ChunkInfoPages).ArrayMax;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,&(this->ChunkInfoPages).AllocatorInstance,piVar1);
              }
              (this->ChunkInfoPages).ArrayNum = iVar12 + 1;
              pFVar17 = FJournalChunkInfoPage::FJournalChunkInfoPage
                                  ((FJournalChunkInfoPage *)
                                   ((this->ChunkInfoPages).AllocatorInstance.Data +
                                   (longlong)iVar12 * 0x78),(FJournalChunkInfoPage *)local_e8);
              local_78 = 0;
              if (local_80 != (void *)0x0) {
                FMemory::Free(local_80);
              }
              uVar20 = local_b8 >> 0x20;
              local_b8 = local_b8 & 0xffffffff00000000;
              if ((int)uVar20 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,8,0,&local_c0,0,(int *)((longlong)&local_b8 + 4));
              }
              iVar12 = local_b0.MaxBits;
              uStack_90 = 0xffffffff;
              local_b0._24_8_ = (ulonglong)(uint)local_b0.MaxBits << 0x20;
              if (0x80 < (uint)iVar12) {
                local_b0.NumBits = 0;
                local_b0.MaxBits = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b0,0);
              }
              if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
              }
              if (local_c0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data);
              }
              local_e8._0_8_ = &___7FJournalPageBase_StorageServer__6B_;
            }
            pFVar17->_padding_ = lVar14;
            local_278._padding_ = 0;
            local_278.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            local_278.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
            local_278.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
            local_278.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
            local_278._40_8_ = 0;
            local_278.ArSerializingDefaults = 0;
            local_278.ArPortFlags = 0;
            local_278.ArMaxSerializeSize = 0;
            local_278.ArUEVer.FileVersionUE4 = 0;
            local_278.ArUEVer.FileVersionUE5 = 0;
            local_278.ArLicenseeUEVer = 0;
            local_278.ArEngineVer.Major = 0;
            local_278.ArEngineVer.Minor = 0;
            local_278.ArEngineVer.Patch = 0;
            local_278.ArEngineVer._6_2_ = 0;
            local_278.ArEngineVer.Changelist = 0;
            local_278.CustomVersionContainer = (FCustomVersionContainer *)0x0;
            local_278.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            local_278.SavePackageData = (FArchiveSavePackageData *)0x0;
            local_278.SerializedProperty = (FProperty *)0x0;
            local_278.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            local_278.bCustomVersionsAreReset = false;
            local_278._129_7_ = 0;
            local_278.NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(&local_278);
            local_1e8 = 0;
            local_278._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_1e0 = &local_3f8;
            local_1d8 = 0x7fffffffffffffff;
            FArchiveState::SetIsLoading(&local_278,true);
            (**(code **)(local_278._padding_ + 0x108))(&local_278,0);
            (**(code **)(pFVar17->_padding_ + 0x18))(pFVar17,&local_278);
            local_3e0 = local_3e0 + 1;
            lVar14 = lVar14 + (ulonglong)local_1b4.PageSize;
            if (local_1b4.Type == Chunk) {
              uVar21 = uVar21 + (longlong)(int)pFVar17[1]._padding_;
            }
            else if (local_1b4.Type == ChunkInfo) {
              uVar23 = uVar23 + (longlong)
                                (*(int *)&(pFVar17->Entries).field_0x8 -
                                *(int *)&(pFVar17->Entries).field_0x34);
              local_3e8 = uVar23;
            }
            FArchive::~FArchive((FArchive *)&local_278);
            FArchive::~FArchive((FArchive *)&local_328);
            lVar15 = (**(code **)((longlong)*(this->JournalFileHandle).Ptr + 0x50))();
            uVar20 = local_3e0;
          } while (lVar14 + 0x40 < lVar15);
        }
        FCountersTrace::TCounter<__int64,0,__int64,0>::Set
                  (&__GTraceCounterZenJournalSectionedChunks,uVar21);
        FCountersTrace::TCounter<__int64,0,__int64,0>::Set
                  (&__GTraceCounterZenJournalSectionedEntries,uVar23);
        if (3 < (byte)LogCacheJournal._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCacheJournal);
        }
        bVar9 = true;
        goto LAB_148ccf880;
      }
      if (2 < (byte)LogCacheJournal._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCacheJournal);
      }
    }
    else if (2 < (byte)LogCacheJournal._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCacheJournal);
    }
    (**(code **)(this->_padding_ + 0x10))(this);
    FArchive::~FArchive((FArchive *)&local_3d8);
    bVar9 = false;
  }
LAB_148ccf880:
  if (local_3f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data);
  }
LAB_148ccf894:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// SetChunkInfo @ 148cdd9c0

bool __thiscall
StorageServer::FCacheJournalSectioned::SetChunkInfo
          (FCacheJournalSectioned *this,FIoChunkId *param_1,TOptional<unsigned___int64> *param_2,
          TOptional<__int64> *param_3,TOptional<int> *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  FCacheChunkInfo *pFVar3;
  ulong64 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  ushort uVar9;
  FCacheChunkInfo *pFVar10;
  FJournalChunkInfoPage *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FJournalChunkInfoPage *pFVar14;
  undefined1 local_res8 [8];
  FCacheChunkInfo *local_res10;
  undefined1 local_98;
  undefined1 local_97 [7];
  FCacheChunkInfo local_90;
  undefined1 local_68 [8];
  FCacheChunkInfo *local_60;
  FCacheChunkInfo *local_58;
  FCacheChunkInfo *local_50;
  FCacheChunkInfo *local_48;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = (FCacheChunkInfo *)param_1;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  pFVar12 = (this->ChunkInfoPages).AllocatorInstance.Data;
  local_90.ModTag.bIsSet = false;
  pFVar13 = pFVar12 + (longlong)iVar1 * 0x78;
  local_90.RawSize.bIsSet = false;
  local_90.RawBlockSize.bIsSet = false;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    pFVar3 = local_res10;
    if (pFVar12 == pFVar13) break;
    pFVar10 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
              ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                      *)(pFVar12 + 0x28),(FIoChunkId *)local_res10);
    pFVar3 = local_res10;
    if (pFVar10 != (FCacheChunkInfo *)0x0) {
      if ((pFVar10 != &local_90) && ((pFVar10->ModTag).bIsSet != false)) {
        local_90.ModTag.TypedValue = (pFVar10->ModTag).TypedValue;
        local_90.ModTag.bIsSet = true;
      }
      if ((&pFVar10->RawSize != &local_90.RawSize) && ((pFVar10->RawSize).bIsSet != false)) {
        local_90.RawSize.TypedValue = (pFVar10->RawSize).TypedValue;
        local_90.RawSize.bIsSet = true;
      }
      if ((&pFVar10->RawBlockSize != &local_90.RawBlockSize) &&
         ((pFVar10->RawBlockSize).bIsSet != false)) {
        local_90.RawBlockSize.TypedValue = (pFVar10->RawBlockSize).TypedValue;
        local_90.RawBlockSize.bIsSet = true;
      }
      bVar6 = true;
      if (param_2->bIsSet != false) {
        if (local_90.ModTag.bIsSet != false) {
          bVar6 = local_90.ModTag.TypedValue == param_2->TypedValue;
        }
        if ((FCacheChunkInfo *)param_2 != &local_90) {
          local_90.ModTag.TypedValue = param_2->TypedValue;
          local_90.ModTag.bIsSet = true;
        }
      }
      bVar5 = local_90.ModTag.bIsSet;
      uVar4 = local_90.ModTag.TypedValue;
      if ((param_3->bIsSet != false) && (param_3 != &local_90.RawSize)) {
        local_90.RawSize.TypedValue = param_3->TypedValue;
        local_90.RawSize.bIsSet = true;
      }
      if ((param_4->bIsSet != false) && (param_4 != &local_90.RawBlockSize)) {
        local_90.RawBlockSize.TypedValue = param_4->TypedValue;
        local_90.RawBlockSize.bIsSet = true;
      }
      pFVar10 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                        *)(pFVar12 + 0x28),(FIoChunkId *)local_res10);
      if (pFVar10 == (FCacheChunkInfo *)0x0) {
        if (*(int *)(pFVar12 + 0x30) - *(int *)(pFVar12 + 0x5c) < *(int *)(pFVar12 + 0x20)) {
          local_58 = &local_90;
          local_60 = pFVar3;
          TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>_>
                    ((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                      *)(pFVar12 + 0x28),
                     (TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&> *)
                     local_68,(bool *)&local_60);
          pFVar12[0x19] = (FScriptContainerElement)0x1;
        }
      }
      else {
        if (&local_90 != pFVar10) {
          if (bVar5 == false) {
            if ((pFVar10->ModTag).bIsSet != false) {
              (pFVar10->ModTag).bIsSet = false;
            }
          }
          else {
            (pFVar10->ModTag).TypedValue = uVar4;
            (pFVar10->ModTag).bIsSet = true;
          }
        }
        if (&local_90.RawSize != &pFVar10->RawSize) {
          if (local_90.RawSize.bIsSet == false) {
            if ((pFVar10->RawSize).bIsSet != false) {
              (pFVar10->RawSize).bIsSet = false;
            }
          }
          else {
            (pFVar10->RawSize).TypedValue = local_90.RawSize.TypedValue;
            (pFVar10->RawSize).bIsSet = true;
          }
        }
        if (&local_90.RawBlockSize != &pFVar10->RawBlockSize) {
          if (local_90.RawBlockSize.bIsSet == false) {
            if ((pFVar10->RawBlockSize).bIsSet != false) {
              (pFVar10->RawBlockSize).bIsSet = false;
            }
          }
          else {
            (pFVar10->RawBlockSize).TypedValue = local_90.RawBlockSize.TypedValue;
            (pFVar10->RawBlockSize).bIsSet = true;
          }
        }
      }
LAB_148cdde91:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return bVar6;
    }
    pFVar12 = pFVar12 + 0x78;
  }
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  pFVar12 = (this->ChunkInfoPages).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      local_98 = 0;
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_98);
    }
    if (pFVar12 == pFVar13) break;
    cVar8 = (**(code **)(*(longlong *)pFVar12 + 8))(pFVar12,pFVar3);
    if ((cVar8 != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Page.Contains(ChunkId)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
                           ,0x1c7,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    pFVar12 = pFVar12 + 0x78;
  }
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  pFVar11 = (FJournalChunkInfoPage *)(this->ChunkInfoPages).AllocatorInstance.Data;
  pFVar14 = pFVar11 + iVar1;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      local_97[0] = 0;
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_97);
    }
    if (pFVar11 == pFVar14) break;
    cVar8 = (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11);
    if (cVar8 == '\0') goto LAB_148cddcd9;
    pFVar11 = pFVar11 + 1;
  }
  pFVar11 = AddChunkInfoPage(this);
LAB_148cddcd9:
  if (((pFVar11 == (FJournalChunkInfoPage *)0x0) ||
      (cVar8 = (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11), cVar8 != '\0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Page != nullptr && !Page->IsFull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
                         ,0xa5,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((param_2->bIsSet != false) && ((FCacheChunkInfo *)param_2 != &local_90)) {
    local_90.ModTag.TypedValue = param_2->TypedValue;
    local_90.ModTag.bIsSet = true;
  }
  bVar6 = local_90.ModTag.bIsSet;
  uVar4 = local_90.ModTag.TypedValue;
  if ((param_3->bIsSet != false) && (param_3 != &local_90.RawSize)) {
    local_90.RawSize.TypedValue = param_3->TypedValue;
    local_90.RawSize.bIsSet = true;
  }
  if ((param_4->bIsSet != false) && (param_4 != &local_90.RawBlockSize)) {
    local_90.RawBlockSize.TypedValue = param_4->TypedValue;
    local_90.RawBlockSize.bIsSet = true;
  }
  pFVar10 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
            ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                    *)&pFVar11->Entries,(FIoChunkId *)pFVar3);
  if (pFVar10 == (FCacheChunkInfo *)0x0) {
    if (*(int *)&(pFVar11->Entries).field_0x8 - *(int *)&(pFVar11->Entries).field_0x34 <
        pFVar11->MaxEntryCount) {
      local_48 = &local_90;
      local_50 = pFVar3;
      TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>_>
                ((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                  *)&pFVar11->Entries,
                 (TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&> *)
                 (local_68 + 4),(bool *)&local_50);
      *(undefined1 *)((longlong)&pFVar11->_padding_ + 1) = 1;
    }
  }
  else {
    if (&local_90 != pFVar10) {
      if (bVar6 == false) {
        if ((pFVar10->ModTag).bIsSet != false) {
          (pFVar10->ModTag).bIsSet = false;
        }
      }
      else {
        (pFVar10->ModTag).TypedValue = uVar4;
        (pFVar10->ModTag).bIsSet = true;
      }
    }
    if (&local_90.RawSize != &pFVar10->RawSize) {
      if (local_90.RawSize.bIsSet == false) {
        if ((pFVar10->RawSize).bIsSet != false) {
          (pFVar10->RawSize).bIsSet = false;
        }
      }
      else {
        (pFVar10->RawSize).TypedValue = local_90.RawSize.TypedValue;
        (pFVar10->RawSize).bIsSet = true;
      }
    }
    if (&local_90.RawBlockSize != &pFVar10->RawBlockSize) {
      if (local_90.RawBlockSize.bIsSet == false) {
        if ((pFVar10->RawBlockSize).bIsSet != false) {
          (pFVar10->RawBlockSize).bIsSet = false;
        }
      }
      else {
        (pFVar10->RawBlockSize).TypedValue = local_90.RawBlockSize.TypedValue;
        (pFVar10->RawBlockSize).bIsSet = true;
      }
    }
  }
  __GTraceCounterZenJournalSectionedEntries.Value =
       __GTraceCounterZenJournalSectionedEntries.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenJournalSectionedEntries.CounterName,TraceCounterType_Int,
                         __GTraceCounterZenJournalSectionedEntries.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenJournalSectionedEntries.CounterId._2_2_ = 0;
        __GTraceCounterZenJournalSectionedEntries.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenJournalSectionedEntries.CounterId._0_2_,
               __GTraceCounterZenJournalSectionedEntries.Value);
  }
  bVar6 = true;
  goto LAB_148cdde91;
}

// TryGetChunkInfo @ 148ce1570

bool __thiscall
StorageServer::FCacheJournalSectioned::TryGetChunkInfo
          (FCacheJournalSectioned *this,FIoChunkId *param_1,FCacheChunkInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FCacheChunkInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ChunkInfoPages).ArrayNum;
  pFVar7 = (this->ChunkInfoPages).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->ChunkInfoPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkInfoPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    pFVar5 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
             ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                     *)(pFVar7 + 0x28),param_1);
    if (pFVar5 != (FCacheChunkInfo *)0x0) {
      FCacheChunkInfo::operator=(param_2,pFVar5);
      bVar3 = true;
LAB_148ce1615:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return bVar3;
    }
    pFVar7 = pFVar7 + 0x78;
  }
  bVar3 = false;
  goto LAB_148ce1615;
}

// TryGetEntry @ 148ce1730

bool __thiscall
StorageServer::FCacheJournalSectioned::TryGetEntry
          (FCacheJournalSectioned *this,FIoChunkId *param_1,ulong64 param_2,ulong64 param_3,
          FCacheEntry *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FJournalChunkPage *pFVar5;
  FJournalChunkPage *this_00;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ChunkPages).ArrayNum;
  this_00 = (FJournalChunkPage *)(this->ChunkPages).AllocatorInstance.Data;
  pFVar5 = this_00 + iVar1;
  while( true ) {
    if ((this->ChunkPages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalChunkPage,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar5) break;
    bVar3 = FJournalChunkPage::GetEntry(this_00,param_1,param_2,param_3,param_4);
    if (bVar3) {
      bVar3 = true;
LAB_148ce17ea:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return bVar3;
    }
    this_00 = this_00 + 1;
  }
  bVar3 = false;
  goto LAB_148ce17ea;
}

// ValidateJournal @ 148ce3390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall StorageServer::FCacheJournalSectioned::ValidateJournal(FCacheJournalSectioned *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  void *pvVar6;
  bool bVar7;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f7 [7];
  void *local_f0;
  ulonglong local_e8;
  void *local_e0;
  undefined8 local_d8;
  code *local_d0;
  void ***local_c8;
  void **local_c0;
  FCacheJournalSectioned *local_b8;
  code *local_b0;
  void ***local_a8;
  void **local_a0;
  TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_98;
  void **local_90;
  TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId392,"FCacheJournalSectioned::ValidateJournal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
               ,0x188);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId392);
  }
  lpCriticalSection = &this->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_c0 = &local_f0;
  local_f0 = (void *)0x0;
  local_a0 = &local_f0;
  local_e8 = 0;
  local_98 = &local_88;
  local_88._0_8_ = 0;
  local_90 = &local_e0;
  local_c8 = &local_a0;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`StorageServer::FCacheJournalSectioned::ValidateJournal'::__l2::<lambda_2>,void,FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>
             ::Call;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_b8 = this;
  (**(code **)(this->_padding_ + 0x40))(this,&local_d0);
  local_a8 = &local_c0;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`StorageServer::FCacheJournalSectioned::ValidateJournal'::__l2::<lambda_1>,void,FIoChunkId_const_&,StorageServer::FCacheEntry_const_&>
             ::Call;
  (**(code **)(this->_padding_ + 0x50))(this,&local_b0);
  iVar3 = (int)local_e8;
  uVar5 = (ulonglong)(int)local_e8;
  pvVar1 = (void *)((longlong)local_f0 + uVar5 * 0xc);
  pvVar6 = local_f0;
  while( true ) {
    if ((int)uVar5 != iVar3) {
      `TCheckedPointerIterator<FIoChunkId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_f8);
    }
    if (pvVar6 == pvVar1) break;
    (**(code **)(this->_padding_ + 0x18))(this,pvVar6);
    uVar5 = local_e8 & 0xffffffff;
    pvVar6 = (void *)((longlong)pvVar6 + 0xc);
  }
  iVar3 = (int)local_d8;
  pvVar1 = (void *)((longlong)local_e0 + (longlong)(int)local_d8 * 0xc);
  pvVar6 = local_e0;
  while( true ) {
    if ((int)local_d8 != iVar3) {
      `TCheckedPointerIterator<FIoChunkId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f7);
    }
    if (pvVar6 == pvVar1) break;
    (**(code **)(this->_padding_ + 0x18))(this,pvVar6);
    pvVar6 = (void *)((longlong)pvVar6 + 0xc);
  }
  if ((0 < (int)local_e8) && (2 < (byte)LogCacheJournal._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCacheJournal);
  }
  if ((0 < (int)local_d8) && (2 < (byte)LogCacheJournal._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCacheJournal);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

