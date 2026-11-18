// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FindOrAdd @ 141e9c690

FPackageCustomVersionsHandle * __cdecl
UE::AssetRegistry::FPackageCustomVersionsHandle::FindOrAdd
          (FPackageCustomVersionsHandle *__return_storage_ptr__,
          TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> *param_1)

{
  FPackageCustomVersionRegistry::FindOrAdd
            (&GFPackageCustomVersionRegistry,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindOrAdd @ 141e9c6c0

FPackageCustomVersionsHandle * __cdecl
UE::AssetRegistry::FPackageCustomVersionsHandle::FindOrAdd
          (FPackageCustomVersionsHandle *__return_storage_ptr__,
          TArrayView<FCustomVersion_const_,int> *param_1)

{
  FCustomVersion *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FCustomVersion *pFVar6;
  TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> local_18;
  
  uVar3 = param_1->ArrayNum;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,uVar3,&local_18.AllocatorInstance,0,&local_18.ArrayMax);
    }
    pFVar6 = param_1->DataPtr;
    pFVar1 = pFVar6 + (int)uVar3;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      if (local_18.ArrayNum == local_18.ArrayMax) {
        local_18.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x414,&local_18.AllocatorInstance,&local_18.ArrayMax);
      }
      uVar4 = *(undefined8 *)&pFVar6->Key;
      uVar5 = *(undefined8 *)&(pFVar6->Key).C;
      pFVar2 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x14;
      *(int *)(pFVar2 + 0x10) = pFVar6->Version;
      *(undefined8 *)pFVar2 = uVar4;
      *(undefined8 *)(pFVar2 + 8) = uVar5;
      local_18.ArrayNum = local_18.ArrayNum + 1;
    }
    FPackageCustomVersionRegistry::FindOrAdd
              (&GFPackageCustomVersionRegistry,__return_storage_ptr__,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// FindOrAdd @ 141e9c7c0

FPackageCustomVersionsHandle * __cdecl
UE::AssetRegistry::FPackageCustomVersionsHandle::FindOrAdd
          (FPackageCustomVersionsHandle *__return_storage_ptr__,
          TArrayView<UE::AssetRegistry::FPackageCustomVersion_const_,int> *param_1)

{
  FPackageCustomVersion *_Src;
  longlong lVar1;
  TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = param_1->ArrayNum;
  lVar1 = (longlong)local_18.ArrayNum;
  _Src = param_1->DataPtr;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 * 0x14);
  }
  FPackageCustomVersionRegistry::FindOrAdd
            (&GFPackageCustomVersionRegistry,__return_storage_ptr__,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

