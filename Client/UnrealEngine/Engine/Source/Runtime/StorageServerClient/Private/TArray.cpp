// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// HeapPop<bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)> @ 148cb0800

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FIoRequestImpl_*,TSizedDefaultAllocator<32>_>::
HeapPop<bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>
          (TArray<FIoRequestImpl_*,TSizedDefaultAllocator<32>_> *this,FIoRequestImpl **param_1,
          _func___cdecl_bool_FIoRequestImpl_ptr_FIoRequestImpl_ptr *param_2,EAllowShrinking param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_1 = *(FIoRequestImpl **)(this->AllocatorInstance).Data;
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar8 = this->ArrayNum + -1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar1,pFVar1 + (longlong)(this->ArrayNum - iVar8) * 8,(longlong)iVar8 << 3);
  }
  iVar8 = this->ArrayNum + -1;
  this->ArrayNum = iVar8;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar8,&this->ArrayMax);
  }
  iVar8 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  iVar7 = 0;
  if (1 < iVar8) {
    do {
      iVar4 = iVar7 * 2;
      iVar6 = iVar4 + 1;
      if (iVar4 + 2 < iVar8) {
        bVar5 = (*param_2)(*(FIoRequestImpl **)(pFVar1 + (longlong)iVar6 * 8),
                           *(FIoRequestImpl **)(pFVar1 + (longlong)iVar4 * 8 + 0x10));
        if (bVar5) {
          iVar6 = iVar4;
        }
        iVar6 = iVar6 + 1;
      }
      bVar5 = (*param_2)(*(FIoRequestImpl **)(pFVar1 + (longlong)iVar6 * 8),
                         *(FIoRequestImpl **)(pFVar1 + (longlong)iVar7 * 8));
      if (!bVar5) {
        return;
      }
      uVar2 = *(undefined8 *)(pFVar1 + (longlong)iVar7 * 8);
      *(undefined8 *)(pFVar1 + (longlong)iVar7 * 8) = *(undefined8 *)(pFVar1 + (longlong)iVar6 * 8);
      *(undefined8 *)(pFVar1 + (longlong)iVar6 * 8) = uVar2;
      iVar7 = iVar6;
    } while (iVar6 * 2 + 1 < iVar8);
  }
  return;
}

// Empty @ 148cc2520

void __thiscall
TArray<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<StorageServer::FJournalStoreEntry,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 148cd9c90

void __thiscall
TArray<StorageServer::FCacheStorageMmap::FBackingFile,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<StorageServer::FCacheStorageMmap::FBackingFile,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FBackingFile *_Dst;
  
  _Dst = (FBackingFile *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<StorageServer::FCacheStorageMmap::FBackingFile,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 148cd9d10

void __thiscall
TArray<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,int>
            ((TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

