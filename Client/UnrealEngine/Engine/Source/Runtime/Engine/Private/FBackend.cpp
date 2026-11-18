// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FBackend @ 14861fb30

FBackend * __thiscall FSkeletalMeshUpdateChannel::FBackend::FBackend(FBackend *this)

{
  int iVar1;
  longlong lVar2;
  FBackend *pFVar3;
  FGlobalList *pFVar4;
  FBackend *pFVar5;
  FBackend *pFVar6;
  longlong *plVar7;
  
  pFVar5 = (FBackend *)&this->_padding_;
  pFVar6 = (FBackend *)0x0;
  pFVar3 = this;
  if (pFVar5 == (FBackend *)0x0) {
    pFVar3 = pFVar6;
  }
  *(FBackend **)pFVar5 = pFVar3;
  this->_padding_ = (longlong)pFVar3;
  this->GlobalListIndex = -1;
  this->_padding_ = (longlong)&___7FBackend_FSkeletalMeshUpdateChannel__6B_;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  pFVar4 = GetGlobalList();
  if (this == (FBackend *)0x0) {
    pFVar5 = pFVar6;
  }
  pFVar3 = (FBackend *)&pFVar4[-1].Num;
  if (pFVar4 == (FGlobalList *)0x0) {
    pFVar3 = pFVar6;
  }
  plVar7 = &pFVar3->_padding_;
  if (pFVar3 == (FBackend *)0x0) {
    plVar7 = (longlong *)&DAT_00000008;
  }
  lVar2 = *plVar7;
  pFVar5->_padding_ = (longlong)pFVar3;
  pFVar5->_padding_ = lVar2;
  pFVar3 = (FBackend *)&pFVar5[-1].Channels.ArrayNum;
  if (pFVar5 == (FBackend *)0x0) {
    pFVar3 = pFVar6;
  }
  *plVar7 = (longlong)pFVar3;
  pFVar5 = (FBackend *)(lVar2 + 8);
  if (lVar2 == 0) {
    pFVar5 = pFVar6;
  }
  pFVar5->_padding_ = (longlong)pFVar3;
  iVar1 = pFVar4->Num;
  pFVar4->Num = iVar1 + 1;
  this->GlobalListIndex = iVar1;
  return this;
}

// ~FBackend @ 148624ca0

void __thiscall FSkeletalMeshUpdateChannel::FBackend::~FBackend(FBackend *this)

{
  TArray<FSkeletalMeshUpdateChannel_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FBackend *pFVar7;
  undefined1 local_res8 [8];
  
  pTVar1 = &this->Channels;
  this->_padding_ = (longlong)&___7FBackend_FSkeletalMeshUpdateChannel__6B_;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  iVar4 = (this->Channels).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FSkeletalMeshUpdateChannel_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    lVar5 = *(longlong *)pFVar6;
    pFVar6 = pFVar6 + 8;
    *(undefined8 *)(lVar5 + 0x78) = 0;
  }
  piVar2 = &(this->Channels).ArrayMax;
  (this->Channels).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar7 = this;
  if (&this->_padding_ == (longlong *)0x0) {
    pFVar7 = (FBackend *)0x0;
  }
  this->_padding_ = (longlong)pFVar7;
  this->_padding_ = (longlong)pFVar7;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetGlobalList @ 14864b210

FGlobalList * __cdecl FSkeletalMeshUpdateChannel::FBackend::GetGlobalList(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      GlobalList.List.Sentinel.Next = (FBackend *)&::_TSS0;
      GlobalList.List.Sentinel.Prev = (FBackend *)&::_TSS0;
      _Init_thread_footer(&::_TSS0);
      return &GlobalList;
    }
  }
  return &GlobalList;
}

