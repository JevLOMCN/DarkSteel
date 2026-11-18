// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Serialize @ 14214c5a0

bool __thiscall UE::Math::TSphere<float>::Serialize(TSphere<float> *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  FArchive *this_00;
  
  pfVar1 = &this->W;
  this_00 = Math::operator<<(param_1,&this->Center);
  pfVar2 = (float *)**(undefined8 **)&this_00->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return true;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,pfVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)pfVar1);
  return true;
}

// Serialize @ 14214c620

bool __thiscall UE::Math::TSphere<double>::Serialize(TSphere<double> *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float local_res8 [2];
  
  Math::operator<<(param_1,&this->Center);
  if (0x3eb < (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20)) {
    ::operator<<(param_1,&this->W);
    return true;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Sphere.h"
                       ,0x11d,L"float -> double conversion applied outside of load!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  this->W = (double)local_res8[0];
  return true;
}

