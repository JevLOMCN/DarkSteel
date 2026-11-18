// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 12

// HeapPush<bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)> @ 142a481f0

int __thiscall
TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_>::
HeapPush<bool___cdecl(FFileIoStoreReadRequest_const_&,FFileIoStoreReadRequest_const_&)>
          (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *this,
          FFileIoStoreReadRequest **param_1,
          _func___cdecl_bool_FFileIoStoreReadRequest_ptr_FFileIoStoreReadRequest_ptr *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  pFVar2 = (this->AllocatorInstance).Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)this->ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  *(FFileIoStoreReadRequest **)((this->AllocatorInstance).Data + (longlong)iVar6 * 8) = *param_1;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar6 = this->ArrayNum + -1;
  if (0 < iVar6) {
    do {
      iVar7 = (iVar6 + -1) / 2;
      pFVar1 = pFVar2 + (longlong)iVar6 * 8;
      bVar5 = (*param_2)(*(FFileIoStoreReadRequest **)pFVar1,
                         *(FFileIoStoreReadRequest **)(pFVar2 + (longlong)iVar7 * 8));
      if (!bVar5) {
        return iVar6;
      }
      uVar3 = *(undefined8 *)pFVar1;
      *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8);
      *(undefined8 *)(pFVar2 + (longlong)iVar7 * 8) = uVar3;
      iVar6 = iVar7;
    } while (0 < iVar7);
    return iVar7;
  }
  return iVar6;
}

// AddDefaulted @ 142a5c360

int __thiscall
TArray<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
AddDefaulted(TArray<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// Empty @ 142a6ad40

void __thiscall
TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPakCompressedBlock,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Remove @ 142a96b30

int __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Remove
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,ulong64 *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(ulong64 *)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(ulong64 *)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 142a97190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 142a97260

void __thiscall
TArray<FPakFile::FArchiveAndLastAccessTime,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPakFile::FArchiveAndLastAccessTime,TSizedDefaultAllocator<32>_> *this,int param_1
          ,int param_2)

{
  int iVar1;
  FArchiveAndLastAccessTime *_Dst;
  
  _Dst = (FArchiveAndLastAccessTime *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<FPakFile::FArchiveAndLastAccessTime,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 142a972e0

void __thiscall
TArray<FFileIoStoreContainerFilePartition,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FFileIoStoreContainerFilePartition,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FFileIoStoreContainerFilePartition *_Dst;
  
  _Dst = (FFileIoStoreContainerFilePartition *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<FFileIoStoreContainerFilePartition,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 142a97350

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
TArray<FPakPrecacher::FPakData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPakPrecacher::FPakData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2
          )

{
  int iVar1;
  FPakData *_Dst;
  
  _Dst = (FPakData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x98);
  DestructItems<FPakPrecacher::FPakData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x98);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 142a973d0

void __thiscall
TArray<FPakEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPakEntry,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FPakEntry *_Dst;
  
  _Dst = (FPakEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<FPakEntry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 142a97450

void __thiscall
TArray<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,int>
            ((TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 142a974c0

void __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  pvVar2 = *(void **)_Dst;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x10,(longlong)iVar3 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumUninitialized @ 142a9fef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>::
SetNumUninitialized(TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x10,(longlong)iVar4 << 4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

