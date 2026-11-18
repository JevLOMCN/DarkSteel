// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 1

// FMediaPacket @ 148d24dd0

FMediaPacket * __thiscall
AVEncoder::FMediaPacket::FMediaPacket(FMediaPacket *this,FMediaPacket *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  pTVar1 = &this->Data;
  this->Type = param_1->Type;
  (this->Timestamp).Ticks = (param_1->Timestamp).Ticks;
  (this->Duration).Ticks = (param_1->Duration).Ticks;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Data).ArrayMax;
  iVar3 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  uVar4 = *(undefined8 *)((longlong)&param_1->field4_0x28 + 8);
  *(undefined8 *)&this->field4_0x28 = *(undefined8 *)&param_1->field4_0x28;
  *(undefined8 *)((longlong)&this->field4_0x28 + 8) = uVar4;
  (this->field4_0x28).Video.Framerate = (param_1->field4_0x28).Video.Framerate;
  return this;
}

