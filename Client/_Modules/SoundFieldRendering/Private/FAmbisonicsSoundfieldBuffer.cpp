// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFieldRendering
// Functions: 4

// ~FAmbisonicsSoundfieldBuffer @ 1464c81d0

void __thiscall
FAmbisonicsSoundfieldBuffer::~FAmbisonicsSoundfieldBuffer(FAmbisonicsSoundfieldBuffer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsSoundfieldBuffer__6B_;
  pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISoundfieldAudioPacket__6B_;
  return;
}

// Duplicate @ 1464c9520

TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> __thiscall
FAmbisonicsSoundfieldBuffer::Duplicate(FAmbisonicsSoundfieldBuffer *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  double dVar2;
  double dVar3;
  ISoundfieldAudioPacket IVar4;
  ISoundfieldAudioPacket *in_RDX;
  
  IVar4 = (ISoundfieldAudioPacket)::operator_new(0x60);
  if (IVar4 != (ISoundfieldAudioPacket)0x0) {
    *(undefined ***)IVar4 = &___7FAmbisonicsSoundfieldBuffer__6B_;
    *(undefined8 *)((longlong)IVar4 + 8) = 0;
    iVar1 = (this->AudioBuffer).ArrayNum;
    _Src = (this->AudioBuffer).AllocatorInstance.Data;
    *(int *)((longlong)IVar4 + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)IVar4 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar1,0,(ForAnyElementType *)((longlong)IVar4 + 8),iVar1,
                 (int *)((longlong)IVar4 + 0x14));
      memcpy(((ForAnyElementType *)((longlong)IVar4 + 8))->Data,_Src,(longlong)iVar1 << 2);
    }
    *(int *)((longlong)IVar4 + 0x18) = this->NumChannels;
    dVar2 = (this->Rotation).X;
    dVar3 = (this->Rotation).Y;
    *in_RDX = IVar4;
    *(double *)((longlong)IVar4 + 0x20) = dVar2;
    *(double *)((longlong)IVar4 + 0x28) = dVar3;
    dVar2 = (this->Rotation).W;
    *(double *)((longlong)IVar4 + 0x30) = (this->Rotation).Z;
    *(double *)((longlong)IVar4 + 0x38) = dVar2;
    dVar2 = (this->PreviousRotation).Y;
    *(double *)((longlong)IVar4 + 0x40) = (this->PreviousRotation).X;
    *(double *)((longlong)IVar4 + 0x48) = dVar2;
    dVar2 = (this->PreviousRotation).W;
    *(double *)((longlong)IVar4 + 0x50) = (this->PreviousRotation).Z;
    *(double *)((longlong)IVar4 + 0x58) = dVar2;
    return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
  }
  *in_RDX = (ISoundfieldAudioPacket)0x0;
  return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
}

// Reset @ 1464cb050

void __thiscall FAmbisonicsSoundfieldBuffer::Reset(FAmbisonicsSoundfieldBuffer *this)

{
  (this->AudioBuffer).ArrayNum = 0;
  if ((this->AudioBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->AudioBuffer).AllocatorInstance,0,&(this->AudioBuffer).ArrayMax);
  }
  this->NumChannels = 0;
  return;
}

// Serialize @ 1464cb5b0

void __thiscall
FAmbisonicsSoundfieldBuffer::Serialize(FAmbisonicsSoundfieldBuffer *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  TArrayPrivateFriend::Serialize<float,TAlignedHeapAllocator<16>_>(param_1,&this->AudioBuffer);
  piVar1 = &this->NumChannels;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001464cb615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

