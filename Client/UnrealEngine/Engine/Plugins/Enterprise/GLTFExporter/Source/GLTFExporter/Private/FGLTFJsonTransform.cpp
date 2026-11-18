// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteValue @ 14e61fe60

void __thiscall FGLTFJsonTransform::WriteValue(FGLTFJsonTransform *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FString local_28 [2];
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar5 = 0;
  uVar4 = uVar5;
  do {
    if (param_1->DefaultTolerance <
        (float)((uint)(*(float *)(&(this->Translation).field_0x8 + uVar4) -
                      *(float *)(&FGLTFJsonVector3::Zero.field_0x8 + uVar4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      ::FString::FString(local_28,L"translation");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
      (**(code **)(*(longlong *)&this->Translation + 8))(this,param_1);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0xc);
  fVar1 = *(float *)&(this->Rotation).field_0x8;
  fVar2 = param_1->DefaultTolerance;
  if (((((fVar2 < (float)((uint)(fVar1 - FGLTFJsonQuaternion::Identity.field0_0x0._s_0.X) & uVar3))
        || (fVar2 < (float)((uint)(*(float *)&(this->Rotation).field_0xc -
                                  FGLTFJsonQuaternion::Identity.field0_0x0._s_0.Y) & uVar3))) ||
       (fVar2 < (float)((uint)(*(float *)&(this->Rotation).field_0x10 -
                              FGLTFJsonQuaternion::Identity.field0_0x0._s_0.Z) & uVar3))) ||
      (fVar2 < (float)((uint)(*(float *)&(this->Rotation).field_0x14 -
                             FGLTFJsonQuaternion::Identity.field0_0x0._s_0.W) & uVar3))) &&
     (((fVar2 < (float)((uint)(fVar1 + FGLTFJsonQuaternion::Identity.field0_0x0._s_0.X) & uVar3) ||
       (fVar2 < (float)((uint)(FGLTFJsonQuaternion::Identity.field0_0x0._s_0.Y +
                              *(float *)&(this->Rotation).field_0xc) & uVar3))) ||
      ((fVar2 < (float)((uint)(FGLTFJsonQuaternion::Identity.field0_0x0._s_0.Z +
                              *(float *)&(this->Rotation).field_0x10) & uVar3) ||
       (fVar2 < (float)((uint)(FGLTFJsonQuaternion::Identity.field0_0x0._s_0.W +
                              *(float *)&(this->Rotation).field_0x14) & uVar3))))))) {
    ::FString::FString(local_28,L"rotation");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(*(longlong *)&this->Rotation + 8))(&this->Rotation,param_1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  do {
    if (param_1->DefaultTolerance <
        (float)((uint)(*(float *)(&(this->Scale).field_0x8 + uVar5) -
                      *(float *)(&FGLTFJsonVector3::One.field_0x8 + uVar5)) & uVar3)) {
      ::FString::FString(local_28,L"scale");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
      (**(code **)(*(longlong *)&this->Scale + 8))(&this->Scale,param_1);
      if (local_28[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      return;
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0xc);
  return;
}

