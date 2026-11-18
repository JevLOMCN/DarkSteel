// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 5

// Empty @ 14458bb80

void __thiscall
TArray<UE::IoStore::FOnDemandTocAdditionalFile,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::IoStore::FOnDemandTocAdditionalFile,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::IoStore::FOnDemandTocAdditionalFile,int>
              ((FOnDemandTocAdditionalFile *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14458bbf0

void __thiscall
TArray<UE::IoStore::FOnDemandTocContainerEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::IoStore::FOnDemandTocContainerEntry,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::IoStore::FOnDemandTocContainerEntry,int>
              ((FOnDemandTocContainerEntry *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14458bc60

void __thiscall
TArray<UE::IoStore::FOnDemandTocEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::IoStore::FOnDemandTocEntry,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14458bcb0

void __thiscall
TArray<UE::IoStore::FOnDemandTocTagSet,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::IoStore::FOnDemandTocTagSet,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::IoStore::FOnDemandTocTagSet,int>
              ((FOnDemandTocTagSet *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14458bd20

void __thiscall
TArray<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::IoStore::FOnDemandTocTagSetPackageList,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::IoStore::FOnDemandTocTagSetPackageList,int>
              ((FOnDemandTocTagSetPackageList *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

