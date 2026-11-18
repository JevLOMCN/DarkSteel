// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 2

// ~FCodecPacket @ 148d011f0

void __thiscall AVEncoder::FCodecPacket::~FCodecPacket(FCodecPacket *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  return;
}

// Create @ 148d05460

FCodecPacket * __cdecl
AVEncoder::FCodecPacket::Create(FCodecPacket *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  uchar *_Dst;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  _Dst = FMemory::Malloc((ulonglong)param_2,0);
  memcpy(_Dst,param_1,(ulonglong)param_2);
  pTVar1 = ::operator_new(0x18);
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<unsigned_char,`AVEncoder::FCodecPacket::Create'::`2'::<lambda_1>,1>
          ::_vftable_;
    pTVar1[1]._padding_ = (longlong)_Dst;
    pTVar2 = pTVar1;
  }
  (__return_storage_ptr__->Data).Object = (uchar *)0x0;
  (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->DataSize = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FCodecPacket_AVEncoder__6B_;
  (__return_storage_ptr__->Timings).StartTs.Ticks = 0;
  (__return_storage_ptr__->Timings).FinishTs.Ticks = 0;
  __return_storage_ptr__->IsKeyFrame = false;
  __return_storage_ptr__->VideoQP = 0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Data).Object = _Dst;
  (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  __return_storage_ptr__->DataSize = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

