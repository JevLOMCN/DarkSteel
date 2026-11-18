// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FindOrAdd @ 141e9c4d0

FPackageCustomVersionsHandle * __thiscall
UE::AssetRegistry::FPackageCustomVersionRegistry::FindOrAdd
          (FPackageCustomVersionRegistry *this,FPackageCustomVersionsHandle *__return_storage_ptr__,
          TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> *param_1)

{
  FPlatformRWLock *SRWLock;
  undefined8 *puVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPackageCustomVersionsHandle *pFVar8;
  TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> *pTVar9;
  FIdentityFunctor local_res8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->Ptr).DataPtr = (FPackageCustomVersion *)0x0;
  (__return_storage_ptr__->Ptr).ArrayNum = 0;
  AlgoImpl::
  IntroSortInternal<UE::AssetRegistry::FPackageCustomVersion,int,FIdentityFunctor,TLess<void>_>
            ((FPackageCustomVersion *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8
             ,(TLess<void>)local_res8);
  uVar6 = AssetRegistry::GetTypeHash(param_1);
  SRWLock = &this->Lock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPackageCustomVersionsHandle *)(*pcVar4)();
      return pFVar8;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar7 = TSet<TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>_>
                    (&this->RegisteredValues,uVar6,param_1);
  if ((iVar7 == -1) ||
     (puVar1 = (undefined8 *)
               (*(longlong *)&(this->RegisteredValues).Elements + (longlong)iVar7 * 0x18),
     puVar1 == (undefined8 *)0x0)) {
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPackageCustomVersionsHandle *)(*pcVar4)();
        return pFVar8;
      }
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar9 = TSet<TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::
             FindOrAddByHash<TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>_>
                       (&this->RegisteredValues,uVar6,param_1,(bool *)0x0);
    pFVar3 = (pTVar9->AllocatorInstance).Data;
    iVar7 = pTVar9->ArrayNum;
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPackageCustomVersionsHandle *)(*pcVar4)();
        return pFVar8;
      }
    }
    local_28 = SUB84(pFVar3,0);
    uStack_24 = (undefined4)((ulonglong)pFVar3 >> 0x20);
    *(undefined4 *)&(__return_storage_ptr__->Ptr).DataPtr = local_28;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Ptr).DataPtr + 4) = uStack_24;
    (__return_storage_ptr__->Ptr).ArrayNum = iVar7;
    *(undefined4 *)&(__return_storage_ptr__->Ptr).field_0xc = uStack_1c;
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  else {
    uVar2 = *puVar1;
    iVar7 = *(int *)(puVar1 + 1);
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FPackageCustomVersionsHandle *)(*pcVar4)();
        return pFVar8;
      }
    }
    local_38 = (undefined4)uVar2;
    uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)&(__return_storage_ptr__->Ptr).DataPtr = local_38;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Ptr).DataPtr + 4) = uStack_34;
    (__return_storage_ptr__->Ptr).ArrayNum = iVar7;
    *(undefined4 *)&(__return_storage_ptr__->Ptr).field_0xc = uStack_2c;
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  return __return_storage_ptr__;
}

