// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 5

// IsExactlyDefault @ 14e601a00

bool __thiscall FGLTFJsonTextureTransform::IsExactlyDefault(FGLTFJsonTextureTransform *this)

{
  float fStack_24;
  float fStack_14;
  
  if ((((FGLTFJsonVector2::Zero._8_4_ == *(float *)&(this->Offset).field_0x8) &&
       (fStack_24 = FGLTFJsonVector2::Zero._12_4_, fStack_24 == *(float *)&(this->Offset).field_0xc)
       ) && (FGLTFJsonVector2::One._8_4_ == *(float *)&(this->Scale).field_0x8)) &&
     ((fStack_14 = FGLTFJsonVector2::One._12_4_, fStack_14 == *(float *)&(this->Scale).field_0xc &&
      (this->Rotation == 0.0)))) {
    return true;
  }
  return false;
}

// IsExactlyEqual @ 14e601a70

bool __thiscall
FGLTFJsonTextureTransform::IsExactlyEqual
          (FGLTFJsonTextureTransform *this,FGLTFJsonTextureTransform *param_1)

{
  if ((((*(float *)&(param_1->Offset).field_0x8 == *(float *)&(this->Offset).field_0x8) &&
       (*(float *)&(param_1->Offset).field_0xc == *(float *)&(this->Offset).field_0xc)) &&
      (*(float *)&(param_1->Scale).field_0x8 == *(float *)&(this->Scale).field_0x8)) &&
     ((*(float *)&(param_1->Scale).field_0xc == *(float *)&(this->Scale).field_0xc &&
      (param_1->Rotation == this->Rotation)))) {
    return true;
  }
  return false;
}

// IsNearlyDefault @ 14e601ae0

bool __thiscall
FGLTFJsonTextureTransform::IsNearlyDefault(FGLTFJsonTextureTransform *this,float param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float local_28 [4];
  float local_18 [6];
  
  local_28._0_8_ = FGLTFJsonVector2::Zero._8_8_;
  local_18._0_8_ = FGLTFJsonVector2::One._8_8_;
  uVar1 = 0;
  uVar2 = uVar1;
  do {
    if (param_1 < (float)((uint)(*(float *)(&(this->Offset).field_0x8 + uVar2 * 4) - local_28[uVar2]
                                ) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  do {
    if (param_1 < (float)((uint)(*(float *)(&(this->Scale).field_0x8 + uVar1 * 4) - local_18[uVar1])
                         & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  if (param_1 < (float)((uint)this->Rotation & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return false;
  }
  return true;
}

// IsNearlyEqual @ 14e601b90

bool __thiscall
FGLTFJsonTextureTransform::IsNearlyEqual
          (FGLTFJsonTextureTransform *this,FGLTFJsonTextureTransform *param_1,float param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  pfVar1 = (float *)&(param_1->Offset).field_0x8;
  uVar3 = uVar2;
  do {
    if (param_2 < (float)((uint)(*(float *)(((longlong)this - (longlong)param_1) + (longlong)pfVar1)
                                - *pfVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    uVar3 = uVar3 + 1;
    pfVar1 = pfVar1 + 1;
  } while (uVar3 < 2);
  pfVar1 = (float *)&(param_1->Scale).field_0x8;
  do {
    if (param_2 < (float)((uint)(*(float *)(((longlong)this - (longlong)param_1) + (longlong)pfVar1)
                                - *pfVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return false;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 1;
  } while (uVar2 < 2);
  if (param_2 < (float)((uint)(this->Rotation - param_1->Rotation) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return false;
  }
  return true;
}

// WriteObject @ 14e61ef00

void __thiscall
FGLTFJsonTextureTransform::WriteObject(FGLTFJsonTextureTransform *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  FString local_38 [3];
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar4 = 0;
  uVar3 = uVar4;
  do {
    if (param_1->DefaultTolerance <
        (float)((uint)(*(float *)(&(this->Offset).field_0x8 + uVar3) -
                      *(float *)(&FGLTFJsonVector2::Zero.field_0x8 + uVar3)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      ::FString::FString(local_38,L"offset");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
      (**(code **)(*(longlong *)&this->Offset + 8))(&this->Offset,param_1);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 8);
  do {
    if (param_1->DefaultTolerance <
        (float)((uint)(*(float *)(&(this->Scale).field_0x8 + uVar4) -
                      *(float *)(&FGLTFJsonVector2::One.field_0x8 + uVar4)) & uVar2)) {
      ::FString::FString(local_38,L"scale");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
      (**(code **)(*(longlong *)&this->Scale + 8))(&this->Scale,param_1);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      break;
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 8);
  fVar1 = this->Rotation;
  fVar5 = (float)((uint)fVar1 & uVar2);
  if (param_1->DefaultTolerance <= fVar5 && fVar5 != param_1->DefaultTolerance) {
    ::FString::FString(local_38,L"rotation");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_38);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

