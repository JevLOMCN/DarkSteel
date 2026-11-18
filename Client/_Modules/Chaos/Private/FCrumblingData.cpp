// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FCrumblingData @ 143f451a0

FCrumblingData * __thiscall
Chaos::FCrumblingData::FCrumblingData(FCrumblingData *this,FCrumblingData *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  pTVar2 = &this->Children;
  *(undefined4 *)this = *(undefined4 *)param_1;
  this->Proxy = param_1->Proxy;
  uVar4 = *(undefined8 *)&(param_1->Location).field_0x8;
  *(undefined8 *)&this->Location = *(undefined8 *)&param_1->Location;
  *(undefined8 *)&(this->Location).field_0x8 = uVar4;
  *(undefined8 *)&(this->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
  uVar4 = *(undefined8 *)&(param_1->Orientation).field_0x8;
  *(undefined8 *)&this->Orientation = *(undefined8 *)&param_1->Orientation;
  *(undefined8 *)&(this->Orientation).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->Orientation).field_0x18;
  *(undefined8 *)&(this->Orientation).field_0x10 = *(undefined8 *)&(param_1->Orientation).field_0x10
  ;
  *(undefined8 *)&(this->Orientation).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->LinearVelocity).field_0x8;
  *(undefined8 *)&this->LinearVelocity = *(undefined8 *)&param_1->LinearVelocity;
  *(undefined8 *)&(this->LinearVelocity).field_0x8 = uVar4;
  *(undefined8 *)&(this->LinearVelocity).field_0x10 =
       *(undefined8 *)&(param_1->LinearVelocity).field_0x10;
  uVar4 = *(undefined8 *)&(param_1->AngularVelocity).field_0x8;
  *(undefined8 *)&this->AngularVelocity = *(undefined8 *)&param_1->AngularVelocity;
  *(undefined8 *)&(this->AngularVelocity).field_0x8 = uVar4;
  *(undefined8 *)&(this->AngularVelocity).field_0x10 =
       *(undefined8 *)&(param_1->AngularVelocity).field_0x10;
  this->Mass = param_1->Mass;
  piVar1 = &(this->Children).ArrayMax;
  uVar4 = *(undefined8 *)&(param_1->LocalBounds).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBounds).MMin = *(undefined8 *)&(param_1->LocalBounds).MMin;
  *(undefined8 *)&(this->LocalBounds).MMin.field_0x8 = uVar4;
  *(undefined8 *)&(this->LocalBounds).MMin.field_0x10 =
       *(undefined8 *)&(param_1->LocalBounds).MMin.field_0x10;
  uVar4 = *(undefined8 *)&(param_1->LocalBounds).MMax.field_0x8;
  *(undefined8 *)&(this->LocalBounds).MMax = *(undefined8 *)&(param_1->LocalBounds).MMax;
  *(undefined8 *)&(this->LocalBounds).MMax.field_0x8 = uVar4;
  *(undefined8 *)&(this->LocalBounds).MMax.field_0x10 =
       *(undefined8 *)&(param_1->LocalBounds).MMax.field_0x10;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Children).ArrayNum;
  _Src = (param_1->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

