// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// NetSerialize @ 142144fa0

bool __thiscall
UE::Math::TPlane<float>::NetSerialize
          (TPlane<float> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  float fVar1;
  longlong *plVar2;
  ushort local_res10 [8];
  ushort local_res20 [4];
  ushort local_38 [2];
  ushort local_34 [6];
  
  if ((param_1->field_0x28 & 1) == 0) {
    fVar1 = *(float *)((longlong)&this->_padding_ + 4);
    local_res10[0] =
         (ushort)((int)ROUND(*(float *)&this->_padding_ + *(float *)&this->_padding_ +
                             __real_3f000000) >> 1);
    local_res20[0] = (ushort)((int)ROUND(fVar1 + fVar1 + __real_3f000000) >> 1);
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_34[0] = (ushort)((int)ROUND((float)this->_padding_ + (float)this->_padding_ +
                                      __real_3f000000) >> 1);
    local_38[0] = (ushort)((int)ROUND(this->W + this->W + __real_3f000000) >> 1);
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_34,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_34);
      }
    }
    else {
      local_34[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ulonglong)plVar2[1] < *plVar2 + 2U) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_38);
      }
    }
    else {
      *plVar2 = *plVar2 + 2;
    }
  }
  else {
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_34,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_34);
      }
    }
    else {
      local_34[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_38);
      }
    }
    else {
      local_38[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    *(float *)&this->_padding_ = (float)(int)(short)local_34[0];
    *(float *)((longlong)&this->_padding_ + 4) = (float)(int)(short)local_res10[0];
    this->_padding_ = (int)(float)(int)(short)local_res20[0];
    this->W = (float)(int)(short)local_38[0];
  }
  *param_3 = true;
  return true;
}

// NetSerialize @ 1421452b0

bool __thiscall
UE::Math::TPlane<double>::NetSerialize
          (TPlane<double> *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  ushort local_res10 [8];
  ushort local_res20 [4];
  ushort local_38 [2];
  ushort local_34 [6];
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] =
         (ushort)((longlong)
                  ROUND((double)this->_padding_ + (double)this->_padding_ + __real_3fe0000000000000)
                 >> 1);
    local_res20[0] =
         (ushort)((longlong)
                  ROUND((double)this->_padding_ + (double)this->_padding_ + __real_3fe0000000000000)
                 >> 1);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_34[0] = (ushort)((longlong)
                           ROUND((double)this->_padding_ + (double)this->_padding_ +
                                 __real_3fe0000000000000) >> 1);
    local_38[0] = (ushort)((longlong)ROUND(this->W + this->W + __real_3fe0000000000000) >> 1);
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_34,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_34);
      }
    }
    else {
      local_34[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ulonglong)plVar1[1] < *plVar1 + 2U) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_38);
      }
    }
    else {
      *plVar1 = *plVar1 + 2;
    }
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_34,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_34);
      }
    }
    else {
      local_34[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_38);
      }
    }
    else {
      local_38[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    this->_padding_ = (longlong)(double)(int)(short)local_34[0];
    this->_padding_ = (longlong)(double)(int)(short)local_res10[0];
    this->_padding_ = (longlong)(double)(int)(short)local_res20[0];
    this->W = (double)(int)(short)local_38[0];
  }
  *param_3 = true;
  return true;
}

// Serialize @ 14214c440

bool __thiscall UE::Math::TPlane<float>::Serialize(TPlane<float> *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  FArchive *this_00;
  
  pfVar1 = &this->W;
  this_00 = Math::operator<<(param_1,(TVector<float> *)this);
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

// Serialize @ 14214c4c0

bool __thiscall UE::Math::TPlane<double>::Serialize(TPlane<double> *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float local_res10 [6];
  
  Math::operator<<(param_1,(TVector<double> *)this);
  if (0x3eb < (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20)) {
    ::operator<<(param_1,&this->W);
    return true;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Plane.h"
                       ,0x18a,L"float -> double conversion applied outside of load!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
    }
  }
  else {
    local_res10[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  this->W = (double)local_res10[0];
  return true;
}

