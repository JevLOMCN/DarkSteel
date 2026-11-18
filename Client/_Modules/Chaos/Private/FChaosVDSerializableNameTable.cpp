// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// ~FChaosVDSerializableNameTable @ 14373f0a0

void __thiscall
Chaos::VisualDebugger::FChaosVDSerializableNameTable::~FChaosVDSerializableNameTable
          (FChaosVDSerializableNameTable *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->NamesByIDLock);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->NamesByIDLock);
  }
  *(undefined4 *)&(this->NamesByID).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NamesByID).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamesByID);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// AddNameToTable @ 143752730

ulong64 __thiscall
Chaos::VisualDebugger::FChaosVDSerializableNameTable::AddNameToTable
          (FChaosVDSerializableNameTable *this,FChaosVDSerializedNameEntry *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FName *pFVar5;
  int iVar6;
  TPairInitializer<unsigned___int64_const_&,FName_&&> local_res8;
  FName local_res18 [2];
  FChaosVDSerializedNameEntry *local_28;
  FName **local_20;
  
  SRWLock = &this->NamesByIDLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = (param_1->Name).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FName::FName(local_res18,iVar6,(wchar_t *)(param_1->Name).Data.AllocatorInstance.Data,
                          param_1->NameNumber);
  local_res8.Value = *(FName **)pFVar5;
  local_20 = &local_res8.Value;
  local_28 = param_1;
  TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,FName_&&>_>
            ((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
              *)&this->NamesByID,&local_res8,(bool *)&local_28);
  uVar4 = param_1->NameID;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return uVar4;
}

// AddNameToTable @ 1437527f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
Chaos::VisualDebugger::FChaosVDSerializableNameTable::AddNameToTable
          (FChaosVDSerializableNameTable *this,FName param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  undefined1 *puVar8;
  FName local_res10;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [8];
  FName local_2b0;
  FMemMark local_2a8;
  FName local_280;
  uint local_278 [2];
  FString local_270;
  undefined8 local_260;
  TPairInitializer<unsigned___int64_const_&,FName_const_&> local_258;
  TMemoryWriterBase<TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_248;
  FName *local_198;
  FName *local_190;
  code *local_188;
  undefined1 *local_180;
  TArray<unsigned_char,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TStringView<wchar_t> local_168;
  TArrayView<unsigned_char_const_,int> local_158;
  TArray<unsigned_char,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if (param_1 == (FName)0x0) {
    local_2b0.ComparisonIndex.Value = 0;
    local_2b0.Number = 0;
  }
  else {
    SRWLock = &this->NamesByIDLock;
    local_res10 = param_1;
    local_2b0 = param_1;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    FVar2 = local_2b0;
    if (*(int *)&(this->NamesByID).field_0x8 != *(int *)&(this->NamesByID).field_0x34) {
      puVar8 = *(undefined1 **)&(this->NamesByID).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->NamesByID).field_0x38;
      }
      iVar4 = *(int *)(puVar8 + (((ulonglong)local_2b0 >> 0x20) * 0x17 + (longlong)local_2b0 &
                                (ulonglong)(*(int *)&(this->NamesByID).field_0x48 - 1)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this->NamesByID + (longlong)iVar4 * 0x18) == local_2b0) {
            if (SRWLock == (FPlatformRWLock *)0x0) {
              return (ulong64)local_2b0;
            }
            ReleaseSRWLockShared((PSRWLOCK)SRWLock);
            return (ulong64)FVar2;
          }
          iVar4 = *(int *)(*(longlong *)&this->NamesByID + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_198 = &local_2b0;
    local_190 = &local_res10;
    TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,FName_const_&>_>
              ((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
                *)&this->NamesByID,&local_258,(bool *)&local_198);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    local_280 = local_2b0;
    local_278[0] = local_res10.Number;
    ::FName::GetPlainNameString(&local_res10,&local_270);
    puVar6 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_180 = local_2b8;
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar7 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_188,puVar6);
    local_260 = 0;
    local_2a8.Mem = (FMemStackBase *)(pFVar7 + 2);
    local_2a8.Top = (local_2a8.Mem)->Top;
    local_2a8.SavedChunk = *(FTaggedMemory **)(pFVar7 + 4);
    local_2a8.bPopped = false;
    local_2a8.NextTopmostMark = *(FMemMark **)(pFVar7 + 5);
    pFVar7[5] = (FTlsAutoCleanup)&local_2a8;
    *(int *)(pFVar7 + 6) = *(int *)(pFVar7 + 6) + 1;
    local_148.AllocatorInstance.SecondaryData.Data = (uchar *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0x100;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248._padding_ = 0;
    local_248._padding_ =
         (longlong)
         &
         ___7__TMemoryWriterBase_V__TSizedInlineAllocator__0BAA__0CA_V__TMemStackAllocator__0A_______6B_
    ;
    local_248.Bytes = &local_148;
    local_248.ArchiveName.ComparisonIndex.Value = 0;
    local_248.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_248,true);
    if (*(FName **)(local_248._padding_ + 8) < *(FName **)local_248._padding_ + 1) {
      if ((local_248._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_248._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::Serialize) {
          TMemoryWriterBase<TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::Serialize
                    (&local_248,&local_280,8);
        }
        else {
          (**(code **)(local_248._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,(ulong64 *)&local_280);
      }
    }
    else {
      local_280 = **(FName **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 8;
    }
    if (*(uint **)(local_248._padding_ + 8) < *(uint **)local_248._padding_ + 1) {
      if ((local_248._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_248._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::Serialize) {
          TMemoryWriterBase<TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::Serialize
                    (&local_248,local_278,4);
        }
        else {
          (**(code **)(local_248._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_248,local_278);
      }
    }
    else {
      local_278[0] = **(uint **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 4;
    }
    ::operator<<((FArchive *)&local_248,&local_270);
    iStack_170 = local_148.ArrayNum;
    local_168 = FChaosVDSerializedNameEntry::WrapperTypeName;
    local_178 = &local_148;
    if ((TArray<unsigned_char,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
        local_148.AllocatorInstance.SecondaryData.Data !=
        (TArray<unsigned_char,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
      local_178 = (TArray<unsigned_char,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
                  local_148.AllocatorInstance.SecondaryData.Data;
    }
    if ((local_148.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    local_158._12_4_ = uStack_16c;
    local_158.ArrayNum = iStack_170;
    local_158.DataPtr = (uchar *)local_178;
    FChaosVisualDebuggerTrace::TraceBinaryData(&local_158,&local_168,None);
    FArchive::~FArchive((FArchive *)&local_248);
    if (local_2a8.bPopped == false) {
      if (((local_2a8.Mem)->TopMark != &local_2a8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      local_2a8.bPopped = true;
      (local_2a8.Mem)->NumMarks = (local_2a8.Mem)->NumMarks + -1;
      if (local_2a8.SavedChunk != (local_2a8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_2a8.Mem,local_2a8.SavedChunk);
      }
      (local_2a8.Mem)->Top = local_2a8.Top;
      (local_2a8.Mem)->TopMark = local_2a8.NextTopmostMark;
      local_2a8.Top = (uchar *)0x0;
    }
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
  }
  return (ulong64)local_2b0;
}

// GetNameFromTable @ 143791c60

FName __thiscall
Chaos::VisualDebugger::FChaosVDSerializableNameTable::GetNameFromTable
          (FChaosVDSerializableNameTable *this,ulong64 param_1)

{
  FPlatformRWLock *SRWLock;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName FVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong in_R8;
  
  if (in_R8 == 0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    SRWLock = &this->NamesByIDLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FName)(*pcVar2)();
      return FVar5;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    if (*(int *)&(this->NamesByID).field_0x8 != *(int *)&(this->NamesByID).field_0x34) {
      puVar7 = *(undefined1 **)&(this->NamesByID).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->NamesByID).field_0x38;
      }
      iVar4 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->NamesByID).field_0x48 - 1U &
                                (int)((ulonglong)in_R8 >> 0x20) * 0x17 + (int)in_R8) * 4);
      if (iVar4 != -1) {
        do {
          lVar1 = *(longlong *)&this->NamesByID + (longlong)iVar4 * 0x18;
          if (*(longlong *)(*(longlong *)&this->NamesByID + (longlong)iVar4 * 0x18) == in_R8) {
            puVar6 = (undefined8 *)(lVar1 + 8);
            if (lVar1 == 0) {
              puVar6 = (undefined8 *)0x0;
            }
            if (puVar6 != (undefined8 *)0x0) {
              *(undefined8 *)param_1 = *puVar6;
              if (SRWLock == (FPlatformRWLock *)0x0) {
                return (FName)param_1;
              }
              ReleaseSRWLockShared((PSRWLOCK)SRWLock);
              return (FName)param_1;
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0x10);
        } while (iVar4 != -1);
      }
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    *(undefined8 *)param_1 = 0;
  }
  return (FName)param_1;
}

// ResetTable @ 1437a6cd0

void __thiscall
Chaos::VisualDebugger::FChaosVDSerializableNameTable::ResetTable
          (FChaosVDSerializableNameTable *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMap<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
  *this_00;
  
  SRWLock = &this->NamesByIDLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->NamesByID;
  bVar4 = 1 < *(int *)&(this->NamesByID).field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->NamesByID).field_0xc;
  *(undefined4 *)&(this->NamesByID).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NamesByID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamesByID).field_0x34 = 0;
  iVar2 = *(int *)&(this->NamesByID).field_0x2c;
  *(undefined4 *)&(this->NamesByID).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NamesByID).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NamesByID).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->NamesByID).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

