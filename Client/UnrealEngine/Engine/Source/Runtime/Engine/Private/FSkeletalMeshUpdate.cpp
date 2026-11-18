// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FSkeletalMeshUpdate @ 147340770

FSkeletalMeshUpdate * __thiscall
FSkeletalMeshUpdate::FSkeletalMeshUpdate(FSkeletalMeshUpdate *this,USkeletalMesh *param_1)

{
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined ***)this = &___7FSkeletalMeshUpdate__6B_;
  return this;
}

// ~FSkeletalMeshUpdate @ 147342050

void __thiscall FSkeletalMeshUpdate::~FSkeletalMeshUpdate(FSkeletalMeshUpdate *this)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FSkeletalMeshUpdate__6B_;
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

// Abort @ 147344df0

void __thiscall FSkeletalMeshUpdate::Abort(FSkeletalMeshUpdate *this)

{
  if (*(int *)&this->field_0x60 != 0) {
    this->field_0x5c = 1;
  }
  return;
}

