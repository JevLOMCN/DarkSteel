// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ~FImageOverlappedAccumulator @ 14ddcade0

void __thiscall
FImageOverlappedAccumulator::~FImageOverlappedAccumulator(FImageOverlappedAccumulator *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->WeightPlane).ChannelData.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FImageOverlappedPlane,__int64>
            ((FImageOverlappedPlane *)(this->ChannelPlanes).AllocatorInstance.Data,
             (this->ChannelPlanes).ArrayNum);
  pFVar3 = (this->ChannelPlanes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WeightChannelStorage).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  _eh_vector_destructor_iterator_
            (this->UnpackedDataStorage,0x18,4,
             TArray<float,TSizedDefaultAllocator<64>_>::~TArray<float,TSizedDefaultAllocator<64>_>);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ddcae73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetName @ 14dde2110

FName __cdecl FImageOverlappedAccumulator::GetName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                      ::__l2::Name,"ImageOverlappedAccumulator");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      *(FName *)in_RCX =
           `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
           Name;
      return in_RCX;
    }
  }
  *(FName *)in_RCX =
       `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::Name;
  return in_RCX;
}

