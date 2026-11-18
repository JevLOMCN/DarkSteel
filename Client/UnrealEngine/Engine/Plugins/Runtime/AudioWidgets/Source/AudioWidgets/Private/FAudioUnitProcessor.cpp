// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// GetDefaultOutputRange @ 14d92d410

TVector2<double> * __thiscall
FAudioUnitProcessor::GetDefaultOutputRange
          (FAudioUnitProcessor *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  return __return_storage_ptr__;
}

// GetOutputRange @ 14d932130

TVector2<double> * __thiscall
FAudioUnitProcessor::GetOutputRange
          (FAudioUnitProcessor *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetOutputValue @ 14d932230

float __thiscall
FAudioUnitProcessor::GetOutputValue
          (FAudioUnitProcessor *this,TVector2<double> *param_1,float param_2)

{
  double dVar1;
  
  dVar1 = (double)param_2;
  if (__real_3ff0000000000000 <= (double)param_2) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return (float)(dVar1 * ((param_1->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.X) +
                (param_1->field0_0x0)._s_0.X);
}

// GetOutputValueForText @ 14d9329e0

float __thiscall
FAudioUnitProcessor::GetOutputValueForText
          (FAudioUnitProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->field0_0x0;
  uStack_14 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  fVar1 = (float)(**(code **)((longlong)*this + 8))(local_18,&local_18);
  return fVar1;
}

// GetSliderValue @ 14d935a80

float __thiscall
FAudioUnitProcessor::GetSliderValue
          (FAudioUnitProcessor *this,TVector2<double> *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = dVar3 - (param_1->field0_0x0)._s_0.X;
  uVar1 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar2,uVar1) &&
      (double)CONCAT44(uVar2,uVar1) != __real_3e45798ee2308c3a) {
    dVar4 = ((double)param_2 - (param_1->field0_0x0)._s_0.X) / dVar4;
    if (__real_3ff0000000000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    return (float)dVar4;
  }
  if ((double)param_2 < dVar3) {
    dVar3 = 0.0;
    if (__real_3ff0000000000000 <= 0.0) {
      dVar3 = __real_3ff0000000000000;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    return (float)dVar3;
  }
  dVar3 = __real_3ff0000000000000;
  if (__real_3ff0000000000000 <= 0.0) {
    dVar3 = 0.0;
  }
  return (float)dVar3;
}

// GetSliderValueForText @ 14d936330

float __thiscall
FAudioUnitProcessor::GetSliderValueForText
          (FAudioUnitProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->field0_0x0;
  uStack_14 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  fVar1 = (float)(**(code **)((longlong)*this + 0x18))(local_18,&local_18);
  return fVar1;
}

// GetUnitsText @ 14d9380e0

FText * __thiscall
FAudioUnitProcessor::GetUnitsText(FAudioUnitProcessor *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

