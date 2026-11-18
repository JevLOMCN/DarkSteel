// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FStaticMeshUpdate @ 14877c790

FStaticMeshUpdate * __thiscall
FStaticMeshUpdate::FStaticMeshUpdate(FStaticMeshUpdate *this,UStaticMesh *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  FStaticMeshUpdate *pFVar7;
  
  *(undefined ***)this = &___7FRenderAssetUpdate__6B_;
  *(longlong *)&this->field_0x8 = param_1->_padding_;
  *(uint *)&this->field_0x10 =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  *(uint *)&this->field_0x14 =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 6);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x18,4000);
  *(UStaticMesh **)&this->field_0x50 = param_1;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined2 *)&this->field_0x5c = 0;
  this->field_0x5e = 0;
  *(undefined4 *)&this->field_0x60 = 4;
  *(undefined4 *)&this->field_0x64 = 0;
  if ((this->field_0x8 & 1) != 0) {
    bVar1 = this->field_0x9;
    if (((((bVar1 <= (byte)this->field_0xa) &&
          (bVar2 = this->field_0xb, (byte)this->field_0xa <= bVar2)) && (bVar2 < 0x11)) &&
        ((bVar3 = this->field_0xd, bVar1 <= bVar3 && (bVar3 <= bVar2)))) &&
       ((bVar4 = this->field_0xe, bVar1 <= bVar4 && ((bVar4 <= bVar2 && (bVar3 != bVar4))))))
    goto LAB_14877c883;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8014357864225177769>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                     ,0xa9,"ResourceState.IsValidForStreamingRequest()");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FStaticMeshUpdate *)(*pcVar5)();
    return pFVar7;
  }
  this->field_0x5c = 1;
LAB_14877c883:
  *(undefined ***)this = &___7FStaticMeshUpdate__6B_;
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  return this;
}

// ~FStaticMeshUpdate @ 14877fc30

void __thiscall FStaticMeshUpdate::~FStaticMeshUpdate(FStaticMeshUpdate *this)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FStaticMeshUpdate__6B_;
  if (*(longlong *)&this->field_0xb0 != 0) {
    plVar1 = (longlong *)&this->field_0xc0;
    if (*(longlong **)&this->field_0xd8 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0xd8;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)&this->field_0x70 != 0) {
    plVar1 = (longlong *)&this->field_0x80;
    if (*(longlong **)&this->field_0x98 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x98;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// Abort @ 148786080

void __thiscall FStaticMeshUpdate::Abort(FStaticMeshUpdate *this)

{
  if (*(int *)&this->field_0x60 != 0) {
    this->field_0x5c = 1;
  }
  return;
}

