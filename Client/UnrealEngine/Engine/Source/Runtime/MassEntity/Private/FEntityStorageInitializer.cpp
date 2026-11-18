// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// operator() @ 1471e83b0

void __thiscall
UE::Mass::Private::FEntityStorageInitializer::operator()
          (FEntityStorageInitializer *this,FMassEntityManager_InitParams_SingleThreaded *param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FEntityData *pFVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  pTVar4 = this->EntityStorage;
  bVar2 = pTVar4->TypeIndex;
  if (2 < (ulonglong)bVar2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar2])(pTVar4);
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  pTVar4->_padding_ = (longlong)&___7FSingleThreadedEntityStorage_Mass_UE__6B_;
  *(undefined4 *)&pTVar4->_padding_ = 0;
  TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
              *)&pTVar4->_padding_,0);
  pTVar4->_padding_ = 0;
  pTVar4->_padding_ = 0;
  pTVar4->TypeIndex = '\x01';
  pTVar4 = this->EntityStorage;
  if (pTVar4->TypeIndex != '\x01') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name121,L"Mass/SingleThreadedStorage");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name121,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name121,true);
  LOCK();
  plVar1 = &pTVar4->_padding_;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  if ((int)pTVar4->_padding_ < 1) {
    iVar8 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
            ::Add((TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
                   *)&pTVar4->_padding_,1);
  }
  else {
    iVar3 = (int)pTVar4->_padding_;
    iVar8 = *(int *)(pTVar4->_padding_ + -4 + (longlong)iVar3 * 4);
    *(int *)&pTVar4->_padding_ = iVar3 + -1;
  }
  pFVar9 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[]((TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
                         *)&pTVar4->_padding_,iVar8);
  pFVar9->SerialNumber = (int)lVar6;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (iVar8 != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SentinelEntity.Index == UE::Mass::Private::InvalidEntityIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x27,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

