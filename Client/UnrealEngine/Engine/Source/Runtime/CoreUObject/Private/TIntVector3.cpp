// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// Serialize @ 14214bf80

bool __thiscall UE::Math::TIntVector3<int>::Serialize(TIntVector3<int> *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    (this->field0_0x0)._s_0.X = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->field0_0x0)._s_0.Y;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->field0_0x0)._s_0.Z;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return true;
}

// Serialize @ 14214c0b0

bool __thiscall
UE::Math::TIntVector3<unsigned_int>::Serialize(TIntVector3<unsigned_int> *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    (this->field0_0x0)._s_0.X = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &(this->field0_0x0)._s_0.Y;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &(this->field0_0x0)._s_0.Z;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return true;
}

// Serialize @ 14214c1e0

bool __thiscall
UE::Math::TIntVector3<__int64>::Serialize(TIntVector3<__int64> *this,FArchive *param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
    }
  }
  else {
    (this->field0_0x0)._s_0.X = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar1 = &(this->field0_0x0)._s_0.Y;
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar1 = &(this->field0_0x0)._s_0.Z;
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar2 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *plVar1 = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
  return true;
}

// Serialize @ 14214c310

bool __thiscall
UE::Math::TIntVector3<unsigned___int64>::Serialize
          (TIntVector3<unsigned___int64> *this,FArchive *param_1)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
    }
  }
  else {
    (this->field0_0x0)._s_0.X = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &(this->field0_0x0)._s_0.Y;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &(this->field0_0x0)._s_0.Z;
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,8);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return true;
}

