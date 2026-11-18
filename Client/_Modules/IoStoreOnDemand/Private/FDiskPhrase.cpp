// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 3

// FDiskPhrase @ 1445a2b00

FDiskPhrase * __thiscall
UE::IoStore::JournaledCache::FDiskPhrase::FDiskPhrase
          (FDiskPhrase *this,
          TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,uint param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  
  (this->Buffer).Ptr = (uchar *)0x0;
  this->Entries = param_1;
  this->Cursor = 0;
  this->Index = param_1->ArrayNum;
  this->MaxEntries = param_2;
  puVar2 = operator_new__((ulonglong)param_3);
  if (this != (FDiskPhrase *)&stack0xffffffffffffffe8) {
    puVar1 = (this->Buffer).Ptr;
    (this->Buffer).Ptr = puVar2;
    puVar2 = (uchar *)0x0;
    operator_delete__(puVar1);
  }
  operator_delete__(puVar2);
  return this;
}

// Add @ 1445b2680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::IoStore::JournaledCache::FDiskPhrase::Add
          (FDiskPhrase *this,ulong64 param_1,FIoBuffer *param_2,uint param_3)

{
  uint uVar1;
  TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  ulong64 *local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulong64 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->MaxEntries < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxEntries > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x193,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar1 = ((param_2->CorePtr).Reference)->DataSizeLow;
  if (0x1ffffff < uVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataSize < (1 << SIZE_BITS)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                       ,0x195,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pTVar2 = this->Entries;
  uStack_50 = (ulonglong)(uVar1 + param_3 & 0x1ffffff) << 0x17 |
              (ulonglong)(this->Cursor + param_3 & 0x7fffff);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_58 = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) {
    local_70 = (longlong)pTVar2->ArrayNum;
    local_68 = 0x10;
    local_88 = &local_58;
    local_80 = pFVar3;
    local_78 = (longlong)pTVar2->ArrayMax;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = pTVar2->ArrayNum;
  if (iVar7 == pTVar2->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(ulong64 *)pFVar3 = local_58;
  *(ulonglong *)(pFVar3 + 8) = uStack_50;
  this->MaxEntries = this->MaxEntries + -1;
  memcpy((this->Buffer).Ptr + this->Cursor,((param_2->CorePtr).Reference)->DataPtr,(ulonglong)uVar1)
  ;
  this->Cursor = this->Cursor + uVar1;
  return 0 < this->MaxEntries;
}

// Drop @ 1445c9220

void __thiscall UE::IoStore::JournaledCache::FDiskPhrase::Drop(FDiskPhrase *this)

{
  int *piVar1;
  uint uVar2;
  TArray<UE::IoStore::JournaledCache::FDataEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  pTVar3 = this->Entries;
  uVar2 = this->Index;
  iVar6 = pTVar3->ArrayNum;
  piVar1 = &pTVar3->ArrayNum;
  if (iVar6 < (int)uVar2) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2 - iVar6,&pTVar3->AllocatorInstance,piVar1,&pTVar3->ArrayMax);
    return;
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((int)uVar2 < iVar6) {
    uVar7 = iVar6 - uVar2;
    if (((int)(uVar7 | uVar2) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar7 != 0) {
      _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x10;
      iVar6 = (*piVar1 - uVar2) - uVar7;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0x10,(longlong)iVar6 << 4);
      }
      *piVar1 = *piVar1 - uVar7;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar3->AllocatorInstance,*piVar1,&pTVar3->ArrayMax);
    }
  }
  return;
}

