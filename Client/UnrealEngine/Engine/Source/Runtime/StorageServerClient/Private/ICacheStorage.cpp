// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// ~ICacheStorage @ 148cb6bc0

void __thiscall StorageServer::ICacheStorage::~ICacheStorage(ICacheStorage *this)

{
  return;
}

// GetBackingFileNames @ 148cc6aa0

TArray<TTuple<FString,unsigned___int64>,TSizedDefaultAllocator<32>_> * __cdecl
StorageServer::ICacheStorage::GetBackingFileNames
          (TArray<TTuple<FString,unsigned___int64>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,wchar_t *param_1,ulong64 param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<TTuple<FString,unsigned___int64>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  longlong local_38;
  
  uVar12 = 0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar8 = param_2 + 0x7fffffff >> 0x1f;
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
    }
  }
  else {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar7,&__return_storage_ptr__->AllocatorInstance,piVar1,
                       &__return_storage_ptr__->ArrayMax);
    DefaultConstructItems<TTuple<FString,unsigned___int64>,int>
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x18,iVar7);
  }
  iVar7 = *piVar1;
  uVar8 = uVar12;
  if (0 < iVar7) {
    do {
      uVar11 = (uint)uVar12;
      ::FString::PrintfImpl(&local_58,L"%s%u");
      _Src.Data = local_58.Data.AllocatorInstance.Data;
      local_48.Data = (FScriptContainerElement *)0x0;
      lVar10 = 0x80000000;
      if (uVar11 == *piVar1 - 1U) {
        lVar10 = param_2 + (longlong)(iVar7 + -1) * -0x80000000;
      }
      iVar4 = local_58.Data.ArrayNum;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (iVar4 == 0) {
        local_40 = local_58.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,&local_48,iVar4,(int *)((longlong)&local_40 + 4));
        memcpy(local_48.Data,_Src.Data,(longlong)iVar4 * 2);
      }
      uVar5 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      local_38 = lVar10;
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TTuple<FString,unsigned___int64>,TSizedDefaultAllocator<32>_> *)(*pcVar2)()
        ;
        return pTVar6;
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + uVar8;
      if (pFVar9 != (FScriptContainerElement *)&local_48) {
        if (*(void **)pFVar9 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar9);
        }
        *(FScriptContainerElement **)pFVar9 = local_48.Data;
        local_48.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(pFVar9 + 8) = (undefined4)local_40;
        *(undefined4 *)(pFVar9 + 0xc) = local_40._4_4_;
        local_40 = 0;
      }
      *(longlong *)(pFVar9 + 0x10) = local_38;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar8 = uVar8 + 0x18;
    } while ((int)(uVar11 + 1) < *piVar1);
  }
  return __return_storage_ptr__;
}

// IsNewlyCreatedStorage @ 148cccc00

bool __thiscall StorageServer::ICacheStorage::IsNewlyCreatedStorage(ICacheStorage *this)

{
  return this->bNewlyCreatedStorage;
}

