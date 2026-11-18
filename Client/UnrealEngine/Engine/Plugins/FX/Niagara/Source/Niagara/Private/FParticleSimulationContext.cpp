// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 28

// GetDistributionRandomValue<float> @ 14941ed30

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

float __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *param_1,uint param_2,
          uint param_3)

{
  float fVar1;
  float local_res10;
  float local_res14;
  uint local_18;
  uint local_14 [3];
  
  fVar1 = RandomFloat(this,param_2,param_3);
  FNiagaraStatelessBuiltDistribution::ConvertRandomToLookup
            (param_1,fVar1,&local_18,local_14,&local_res10);
  GetDistributionTableValues<float>(this,param_1,local_18,local_14[0],&local_res10,&local_res14);
  if (((param_1->field0_0x0)._s_0.X & 0x40000000) != 0) {
    fVar1 = RandomFloat(this,param_2,param_3);
    local_res10 = fVar1 * (local_res14 - local_res10) + local_res10;
  }
  return local_res10;
}

// GetDistributionRandomValue<UE::Math::TVector<float>_> @ 14941edf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector<float> * __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<UE::Math::TVector<float>_>
          (FParticleSimulationContext *this,TVector<float> *__return_storage_ptr__,
          TIntVector3<unsigned_int> *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  float local_res18 [2];
  undefined1 local_48 [32];
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_1c;
  
  fVar2 = RandomFloat(this,param_2,param_3);
  FNiagaraStatelessBuiltDistribution::ConvertRandomToLookup
            (param_1,fVar2,(uint *)((TVector<float>_u_0 *)local_48)->XYZ,
             (uint *)&(((TVector<float>_u_0 *)local_48)->_s_0).Y,local_res18);
  GetDistributionTableValues<UE::Math::TVector<float>_>
            (this,param_1,local_48._0_4_,local_48._4_4_,(TVector<float> *)&local_28._s_0,
             (TVector<float> *)&local_1c._s_0);
  uVar1 = (param_1->field0_0x0)._s_0.X;
  if ((uVar1 >> 0x1e & 1) == 0) {
    *(ulonglong *)&__return_storage_ptr__->field0_0x0 = CONCAT44(local_28._s_0.Y,local_28._s_0.X);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  }
  else {
    RandomFloat3(this,(TVector<float> *)&((TVector<float>_u_0 *)local_48)->_s_0,param_2,param_3);
    if ((uVar1 >> 0x1c & 1) != 0) {
      local_48._8_4_ = local_48._0_4_;
      local_48._4_4_ = local_48._0_4_;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (local_1c._s_0.X - local_28._s_0.X) * (float)local_48._0_4_ + local_28._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (local_1c._s_0.Y - local_28._s_0.Y) * (float)local_48._4_4_ + local_28._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (local_1c._s_0.Z - local_28._s_0.Z) * (float)local_48._8_4_ + local_28._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetDistributionTableValues<float> @ 14941ef40

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<float>
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *param_1,uint param_2,
          uint param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  
  uVar3 = (param_1->field0_0x0)._s_0.X;
  uVar4 = uVar3 & 0x1ffff;
  iVar1 = uVar4 + param_2;
  iVar2 = uVar4 + param_3;
  if ((int)uVar3 < 0) {
    pfVar5 = TArrayView<float_const_,int>::operator[](&this->StaticFloatData,iVar1);
    *param_4 = *pfVar5;
    pfVar5 = TArrayView<float_const_,int>::operator[](&this->StaticFloatData,iVar2);
  }
  else {
    pfVar5 = (float *)TArrayView<unsigned_char_const_,int>::operator[]
                                (&this->DynamicBufferData,iVar1 * 4);
    *param_4 = *pfVar5;
    pfVar5 = (float *)TArrayView<unsigned_char_const_,int>::operator[]
                                (&this->DynamicBufferData,iVar2 * 4);
  }
  *param_5 = *pfVar5;
  return;
}

// GetDistributionTableValues<UE::Math::TVector2<float>_> @ 14941efe0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<UE::Math::TVector2<float>_>
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *param_1,uint param_2,
          uint param_3,TVector2<float> *param_4,TVector2<float> *param_5)

{
  TArrayView<float_const_,int> *this_00;
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  uint uVar7;
  float *pfVar8;
  TVector2<float>_u_0 *pTVar9;
  
  uVar4 = (param_1->field0_0x0)._s_0.X;
  uVar7 = uVar4 & 0x1ffff;
  iVar1 = uVar7 + param_2 * 2;
  iVar2 = uVar7 + param_3 * 2;
  if ((int)uVar4 < 0) {
    this_00 = &this->StaticFloatData;
    pfVar8 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 1);
    fVar3 = *pfVar8;
    pfVar8 = TArrayView<float_const_,int>::operator[](this_00,iVar1);
    TVar5._s_0.Y = fVar3;
    TVar5._s_0.X = *pfVar8;
    param_4->field0_0x0 = TVar5;
    pfVar8 = TArrayView<float_const_,int>::operator[](this_00,iVar2 + 1);
    fVar3 = *pfVar8;
    pfVar8 = TArrayView<float_const_,int>::operator[](this_00,iVar2);
    TVar6._s_0.Y = fVar3;
    TVar6._s_0.X = *pfVar8;
    param_5->field0_0x0 = TVar6;
    return;
  }
  pTVar9 = (TVector2<float>_u_0 *)
           TArrayView<unsigned_char_const_,int>::operator[](&this->DynamicBufferData,iVar1 * 4);
  param_4->field0_0x0 = *pTVar9;
  pTVar9 = (TVector2<float>_u_0 *)
           TArrayView<unsigned_char_const_,int>::operator[](&this->DynamicBufferData,iVar2 * 4);
  param_5->field0_0x0 = *pTVar9;
  return;
}

// GetDistributionTableValues<UE::Math::TVector<float>_> @ 14941f0f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<UE::Math::TVector<float>_>
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *param_1,uint param_2,
          uint param_3,TVector<float> *param_4,TVector<float> *param_5)

{
  TArrayView<float_const_,int> *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uchar *puVar6;
  uint uVar7;
  
  uVar4 = (param_1->field0_0x0)._s_0.X;
  uVar7 = uVar4 & 0x1ffff;
  iVar1 = uVar7 + param_2 * 3;
  if ((int)uVar4 < 0) {
    this_00 = &this->StaticFloatData;
    pfVar5 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 2);
    fVar2 = *pfVar5;
    pfVar5 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 1);
    fVar3 = *pfVar5;
    pfVar5 = TArrayView<float_const_,int>::operator[](this_00,iVar1);
    iVar1 = uVar7 + param_3 * 3;
    (param_4->field0_0x0)._s_0.X = *pfVar5;
    (param_4->field0_0x0)._s_0.Y = fVar3;
    (param_4->field0_0x0)._s_0.Z = fVar2;
    pfVar5 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 2);
    fVar2 = *pfVar5;
    pfVar5 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 1);
    fVar3 = *pfVar5;
    pfVar5 = TArrayView<float_const_,int>::operator[](this_00,iVar1);
    (param_5->field0_0x0)._s_0.X = *pfVar5;
    (param_5->field0_0x0)._s_0.Y = fVar3;
    (param_5->field0_0x0)._s_0.Z = fVar2;
  }
  else {
    puVar6 = TArrayView<unsigned_char_const_,int>::operator[](&this->DynamicBufferData,iVar1 * 4);
    fVar2 = *(float *)(puVar6 + 8);
    *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)puVar6;
    (param_4->field0_0x0)._s_0.Z = fVar2;
    puVar6 = TArrayView<unsigned_char_const_,int>::operator[]
                       (&this->DynamicBufferData,(uVar7 + param_3 * 3) * 4);
    fVar2 = *(float *)(puVar6 + 8);
    *(undefined8 *)&param_5->field0_0x0 = *(undefined8 *)puVar6;
    (param_5->field0_0x0)._s_0.Z = fVar2;
  }
  return;
}

// GetDistributionTableValues<FLinearColor> @ 14941f240

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<FLinearColor>
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *param_1,uint param_2,
          uint param_3,FLinearColor *param_4,FLinearColor *param_5)

{
  TArrayView<float_const_,int> *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined8 uVar6;
  float *pfVar7;
  uchar *puVar8;
  uint uVar9;
  
  uVar5 = (param_1->field0_0x0)._s_0.X;
  uVar9 = uVar5 & 0x1ffff;
  iVar1 = uVar9 + param_2 * 4;
  if ((int)uVar5 < 0) {
    this_00 = &this->StaticFloatData;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 3);
    fVar2 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 2);
    fVar3 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 1);
    fVar4 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1);
    iVar1 = uVar9 + param_3 * 4;
    (param_4->field0_0x0)._s_0.R = *pfVar7;
    (param_4->field0_0x0)._s_0.G = fVar4;
    (param_4->field0_0x0)._s_0.B = fVar3;
    (param_4->field0_0x0)._s_0.A = fVar2;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 3);
    fVar2 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 2);
    fVar3 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1 + 1);
    fVar4 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](this_00,iVar1);
    (param_5->field0_0x0)._s_0.R = *pfVar7;
    (param_5->field0_0x0)._s_0.G = fVar4;
    (param_5->field0_0x0)._s_0.B = fVar3;
    (param_5->field0_0x0)._s_0.A = fVar2;
  }
  else {
    puVar8 = TArrayView<unsigned_char_const_,int>::operator[](&this->DynamicBufferData,iVar1 * 4);
    uVar6 = *(undefined8 *)(puVar8 + 8);
    *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)puVar8;
    *(undefined8 *)((longlong)&param_4->field0_0x0 + 8) = uVar6;
    puVar8 = TArrayView<unsigned_char_const_,int>::operator[]
                       (&this->DynamicBufferData,(uVar9 + param_3 * 4) * 4);
    uVar6 = *(undefined8 *)(puVar8 + 8);
    *(undefined8 *)&param_5->field0_0x0 = *(undefined8 *)puVar8;
    *(undefined8 *)((longlong)&param_5->field0_0x0 + 8) = uVar6;
  }
  return;
}

// GetDistributionTimeValue<float> @ 14941f3b0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

float __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *param_1,float param_2)

{
  float local_res20 [2];
  uint local_18;
  uint local_14;
  float local_10;
  float local_c;
  
  FNiagaraStatelessBuiltDistribution::ConvertTimeToLookup
            (param_1,param_2,&local_18,&local_14,local_res20);
  GetDistributionTableValues<float>(this,param_1,local_18,local_14,&local_10,&local_c);
  return (local_c - local_10) * local_res20[0] + local_10;
}

// GetDistributionTimeValue<UE::Math::TVector2<float>_> @ 14941f440

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector2<float> __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<UE::Math::TVector2<float>_>
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *param_1,float param_2)

{
  TIntVector3<unsigned_int> *in_R8;
  float in_XMM3_Da;
  float local_res10 [2];
  uint local_28;
  uint local_24;
  TVector2<float>_u_0 local_20;
  TVector2<float>_u_0 local_18 [2];
  
  FNiagaraStatelessBuiltDistribution::ConvertTimeToLookup
            (in_R8,in_XMM3_Da,&local_28,&local_24,local_res10);
  GetDistributionTableValues<UE::Math::TVector2<float>_>
            (this,in_R8,local_28,local_24,(TVector2<float> *)&local_20._s_0,
             (TVector2<float> *)&local_18[0]._s_0);
  *(float *)&param_1->field0_0x0 =
       ((float)local_18[0]._0_4_ - local_20._s_0.X) * local_res10[0] + local_20._s_0.X;
  *(float *)((longlong)&param_1->field0_0x0 + 4) =
       ((float)local_18[0]._4_4_ - local_20._s_0.Y) * local_res10[0] + local_20._s_0.Y;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetDistributionTimeValue<UE::Math::TVector<float>_> @ 14941f500

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector<float> * __thiscall
NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<UE::Math::TVector<float>_>
          (FParticleSimulationContext *this,TVector<float> *__return_storage_ptr__,
          TIntVector3<unsigned_int> *param_1,float param_2)

{
  float local_res10 [2];
  uint local_28;
  uint local_24;
  TVector<float>_u_0 local_20;
  TVector<float>_u_0 local_14;
  
  FNiagaraStatelessBuiltDistribution::ConvertTimeToLookup
            (param_1,param_2,&local_28,&local_24,local_res10);
  GetDistributionTableValues<UE::Math::TVector<float>_>
            (this,param_1,local_28,local_24,(TVector<float> *)&local_20._s_0,
             (TVector<float> *)&local_14._s_0);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (local_14._s_0.X - local_20._s_0.X) * local_res10[0] + local_20._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (local_14._s_0.Z - local_20._s_0.Z) * local_res10[0] + local_20._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (local_14._s_0.Y - local_20._s_0.Y) * local_res10[0] + local_20._s_0.Y;
  return __return_storage_ptr__;
}

// ReadParticleVariableComponent<float> @ 149424190

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

float __thiscall
NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
          (FParticleSimulationContext *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<unsigned_char_*> FVar4;
  float fVar5;
  
  uVar3 = 0;
  if (param_1 < (this->VariableComponents).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  FVar4 = (this->VariableComponents).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_char_*>)0x0) {
    FVar4 = (ForElementType<unsigned_char_*>)&this->VariableComponents;
  }
  return *(float *)((ulonglong)(param_3 * this->BufferStride) +
                    *(longlong *)((longlong)FVar4 + (longlong)param_1 * 8) + (longlong)param_2 * 4);
}

// ConvertRangeToScaleBias @ 14943e620

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::ConvertRangeToScaleBias
          (FParticleSimulationContext *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  float local_10;
  
  if (param_1->ParameterOffset == -1) {
    local_10 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
    local_18 = CONCAT44((param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y,
                        (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X);
  }
  else {
    local_18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  *(undefined8 *)&param_2->field0_0x0 = local_18;
  (param_2->field0_0x0)._s_0.Z = local_10;
  if (param_1->ParameterOffset == -1) {
    uVar3 = *(undefined8 *)&(param_1->Min).field0_0x0;
    fVar1 = (param_1->Min).field0_0x0._s_0.Z;
  }
  else {
    puVar2 = TArrayView<unsigned_char_const_,int>::operator[]
                       (&this->DynamicBufferData,param_1->ParameterOffset * 4);
    uVar3 = *(undefined8 *)puVar2;
    fVar1 = *(float *)(puVar2 + 8);
  }
  *(undefined8 *)&param_3->field0_0x0 = uVar3;
  (param_3->field0_0x0)._s_0.Z = fVar1;
  return;
}

// RandomUnitFloat3 @ 149461710

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector<float> * __thiscall
NiagaraStateless::FParticleSimulationContext::RandomUnitFloat3
          (FParticleSimulationContext *this,TVector<float> *__return_storage_ptr__,uint param_1,
          uint param_2)

{
  TVector<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  
  pTVar1 = RandomFloat3(this,(TVector<float> *)&local_18,param_1,param_2);
  fVar3 = (pTVar1->field0_0x0)._s_0.X - __real_3f000000;
  fVar4 = (pTVar1->field0_0x0)._s_0.Y - __real_3f000000;
  fVar5 = (pTVar1->field0_0x0)._s_0.Z - __real_3f000000;
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
  if (__real_38d1b717 <= fVar2) {
    fVar2 = __real_3f800000 / SQRT(fVar2);
    local_10 = fVar2 * fVar5;
    fStack_14 = fVar2 * fVar4;
    local_18 = fVar2 * fVar3;
  }
  else {
    _local_18 = 0x3f800000;
    local_10 = 0.0;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = _local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)local_10;
  return __return_storage_ptr__;
}

// WriteParticleVariableComponent @ 14946eab0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
          (FParticleSimulationContext *this,int param_1,int param_2,int param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<unsigned_char_*> FVar4;
  
  uVar3 = 0;
  if (param_1 < (this->VariableComponents).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (this->VariableComponents).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_char_*>)0x0) {
    FVar4 = (ForElementType<unsigned_char_*>)&this->VariableComponents;
  }
  *(float *)((ulonglong)(param_3 * this->BufferStride) +
             *(longlong *)((longlong)FVar4 + (longlong)param_1 * 8) + (longlong)param_2 * 4) =
       param_4;
  return;
}

// FParticleSimulationContext @ 149476380

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FParticleSimulationContext * __thiscall
NiagaraStateless::FParticleSimulationContext::FParticleSimulationContext
          (FParticleSimulationContext *this,FNiagaraStatelessEmitterData *param_1,void *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  FNiagaraStatelessEmitterData *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  FParticleSimulationContext *pFVar5;
  int iVar6;
  
  this->EmitterData = param_1;
  this->NumInstances = 0;
  this->DeltaTime = 0.0;
  this->InvDeltaTime = 0.0;
  this->EmitterRandomSeed = 0;
  this->ModuleRandomSeed = 0;
  this->BufferStride = 0;
  this->BufferFloatData = (uchar *)0x0;
  this->BufferInt32Data = (uchar *)0x0;
  this->bNeedsParticleKillCompaction = false;
  this->RequiredComponents[0] = (void *)0x0;
  this->RequiredComponents[1] = (void *)0x0;
  this->RequiredComponents[2] = (void *)0x0;
  this->RequiredComponents[3] = (void *)0x0;
  this->RequiredComponents[4] = (void *)0x0;
  this->RequiredComponents[5] = (void *)0x0;
  this->RequiredComponents[6] = (void *)0x0;
  this->RequiredComponents[7] = (void *)0x0;
  (this->VariableComponents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_char_*>)0x0;
  (this->VariableComponents).ArrayNum = 0;
  (this->VariableComponents).ArrayMax = 0x10;
  (this->BuiltData).DataPtr = (uchar *)(this->EmitterData->BuiltData).AllocatorInstance.Data;
  iVar6 = (this->EmitterData->BuiltData).ArrayNum;
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParticleSimulationContext *)(*pcVar2)();
      return pFVar5;
    }
  }
  (this->BuiltData).ArrayNum = iVar6;
  this->BuiltDataOffset = 0;
  this->ShaderParametersData = param_2;
  this->ShaderParameterOffset = 0;
  iVar6 = (this->EmitterData->StaticDataBufferCpu).ArrayNum;
  (this->StaticFloatData).DataPtr =
       (float *)(this->EmitterData->StaticDataBufferCpu).AllocatorInstance.Data;
  iVar6 = (int)((ulonglong)(longlong)iVar6 >> 2);
  (this->StaticFloatData).ArrayNum = iVar6;
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParticleSimulationContext *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar6 = param_3->ArrayNum;
  uVar3 = *(undefined4 *)&param_3->field_0xc;
  pFVar1 = this->EmitterData;
  (this->DynamicBufferData).DataPtr = param_3->DataPtr;
  (this->DynamicBufferData).ArrayNum = iVar6;
  *(undefined4 *)&(this->DynamicBufferData).field_0xc = uVar3;
  if (pFVar1->ParticleSimExecData == (FParticleSimulationExecData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EmitterData->ParticleSimExecData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessParticleSimContext.cpp"
                       ,0x2f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParticleSimulationContext *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// CompactDeadParticles @ 149479050

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::CompactDeadParticles(FParticleSimulationContext *this)

{
  ushort uVar1;
  FParticleSimulationExecData *pFVar2;
  void *pvVar3;
  ForElementType<unsigned_char_*> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<unsigned_char_*> FVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar12 = this->NumInstances - 1;
  lVar13 = (longlong)iVar12;
  pFVar2 = this->EmitterData->ParticleSimExecData;
  pvVar3 = this->RequiredComponents[0];
  if (-1 < iVar12) {
    lVar14 = lVar13 * 4;
    do {
      uVar8 = 0;
      if (*(int *)((longlong)pvVar3 + lVar13 * 4) == 0) {
        uVar7 = this->NumInstances - 1;
        this->NumInstances = uVar7;
        if (iVar12 < (int)uVar7) {
          *(undefined4 *)((longlong)this->RequiredComponents[0] + lVar14) =
               *(undefined4 *)((longlong)this->RequiredComponents[0] + (ulonglong)uVar7 * 4);
          *(undefined4 *)((longlong)this->RequiredComponents[1] + lVar13 * 4) =
               *(undefined4 *)
                ((longlong)this->RequiredComponents[1] + (ulonglong)this->NumInstances * 4);
          *(undefined4 *)((longlong)this->RequiredComponents[2] + lVar13 * 4) =
               *(undefined4 *)
                ((longlong)this->RequiredComponents[2] + (ulonglong)this->NumInstances * 4);
          *(undefined4 *)((longlong)this->RequiredComponents[3] + lVar13 * 4) =
               *(undefined4 *)
                ((longlong)this->RequiredComponents[3] + (ulonglong)this->NumInstances * 4);
          *(undefined4 *)((longlong)this->RequiredComponents[4] + lVar13 * 4) =
               *(undefined4 *)
                ((longlong)this->RequiredComponents[4] + (ulonglong)this->NumInstances * 4);
          *(undefined4 *)((longlong)this->RequiredComponents[5] + lVar13 * 4) =
               *(undefined4 *)
                ((longlong)this->RequiredComponents[5] + (ulonglong)this->NumInstances * 4);
          *(undefined4 *)((longlong)this->RequiredComponents[6] + lVar13 * 4) =
               *(undefined4 *)
                ((longlong)this->RequiredComponents[6] + (ulonglong)this->NumInstances * 4);
          *(undefined4 *)((longlong)this->RequiredComponents[7] + lVar13 * 4) =
               *(undefined4 *)
                ((longlong)this->RequiredComponents[7] + (ulonglong)this->NumInstances * 4);
          uVar15 = uVar8;
          uVar16 = uVar8;
          if (0 < (this->VariableComponents).ArrayNum) {
            do {
              uVar11 = (uint)uVar8;
              uVar7 = 0;
              if ((int)uVar11 < (this->VariableComponents).ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar4 = (this->VariableComponents).AllocatorInstance.SecondaryData;
              FVar9 = (ForElementType<unsigned_char_*>)&this->VariableComponents;
              if (FVar4 != (ForElementType<unsigned_char_*>)0x0) {
                FVar9 = FVar4;
              }
              uVar7 = 0;
              if ((int)uVar11 < (pFVar2->VariableComponentOffsets).ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              lVar10 = *(longlong *)(uVar16 + (longlong)FVar9);
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar1 = *(ushort *)
                       ((pFVar2->VariableComponentOffsets).AllocatorInstance.Data + uVar15 + 2);
              if (uVar1 != 0) {
                uVar8 = (ulonglong)uVar1;
                do {
                  *(undefined4 *)(lVar10 + lVar13 * 4) =
                       *(undefined4 *)(lVar10 + (ulonglong)this->NumInstances * 4);
                  lVar10 = lVar10 + (ulonglong)this->BufferStride;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              uVar8 = (ulonglong)(uVar11 + 1);
              uVar15 = uVar15 + 4;
              uVar16 = uVar16 + 8;
            } while ((int)(uVar11 + 1) < (this->VariableComponents).ArrayNum);
          }
        }
      }
      iVar12 = iVar12 + -1;
      lVar14 = lVar14 + -4;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  return;
}

// GetRequiredComponents @ 14947b280

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TArrayView<FNiagaraVariableBase_const_,int> * __cdecl
NiagaraStateless::FParticleSimulationContext::GetRequiredComponents
          (TArrayView<FNiagaraVariableBase_const_,int> *__return_storage_ptr__)

{
  FNiagaraStatelessGlobals *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RequireComponents[0].TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&RequireComponents[0].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      RequireComponents[1].Name.ComparisonIndex.Value = 0;
      RequireComponents[1].Name.Number = 0;
      RequireComponents[1].TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&RequireComponents[1].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      RequireComponents[2].Name.ComparisonIndex.Value = 0;
      RequireComponents[2].Name.Number = 0;
      RequireComponents[2].TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&RequireComponents[2].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      RequireComponents[3].Name.ComparisonIndex.Value = 0;
      RequireComponents[3].Name.Number = 0;
      RequireComponents[3].TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&RequireComponents[3].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      RequireComponents[4].Name.ComparisonIndex.Value = 0;
      RequireComponents[4].Name.Number = 0;
      RequireComponents[4].TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&RequireComponents[4].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      RequireComponents[5].Name.ComparisonIndex.Value = 0;
      RequireComponents[5].Name.Number = 0;
      RequireComponents[5].TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&RequireComponents[5].TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      pFVar1 = FNiagaraStatelessGlobals::Get();
      RequireComponents[6].Name = (pFVar1->UniqueIDVariable).Name;
      RequireComponents[6].TypeDefHandle.RegisteredTypeIndex =
           (pFVar1->UniqueIDVariable).TypeDefHandle.RegisteredTypeIndex;
      pFVar1 = FNiagaraStatelessGlobals::Get();
      RequireComponents[7].Name = (pFVar1->MaterialRandomVariable).Name;
      RequireComponents[7].TypeDefHandle.RegisteredTypeIndex =
           (pFVar1->MaterialRandomVariable).TypeDefHandle.RegisteredTypeIndex;
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 8;
  __return_storage_ptr__->DataPtr = RequireComponents;
  return __return_storage_ptr__;
}

// GetToSimulationRotation @ 14947b6b0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TQuat<float> * __thiscall
NiagaraStateless::FParticleSimulationContext::GetToSimulationRotation
          (FParticleSimulationContext *this,ENiagaraCoordinateSpace param_1)

{
  return (TQuat<float> *)(this->ShaderParametersData + ((ulonglong)param_1 + 1) * 0x10);
}

// RandomFloat2 @ 14947da40

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector2<float> __thiscall
NiagaraStateless::FParticleSimulationContext::RandomFloat2
          (FParticleSimulationContext *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar2;
  int iVar3;
  uint uVar4;
  int in_R9D;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  TVar2._s_0.Y = (float)in_register_00000014;
  TVar2._s_0.X = (float)param_1;
  iVar6 = this->EmitterRandomSeed * 0x19660d + 0x3c6ef35f;
  iVar8 = this->ModuleRandomSeed * 0x19660d + -0x481ac960;
  iVar3 = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_2 * 4) * 0x19660d +
          -0x604888c8;
  uVar5 = in_R9D * 0x19660d + -0xde90ea + iVar6 * iVar8;
  uVar1 = uVar5 * iVar3 + iVar6;
  uVar7 = uVar1 * uVar5 + iVar3;
  uVar4 = uVar1 >> 0x10 ^ uVar1;
  uVar1 = uVar7 * uVar1 + iVar8;
  uVar1 = (uVar1 ^ uVar1 >> 0x10) * uVar4 + (uVar5 >> 0x10 ^ uVar5);
  *(float *)TVar2 = (float)(uVar1 >> 8) * __real_33800000;
  *(float *)((longlong)TVar2 + 4) =
       (float)((uVar7 >> 0x10 ^ uVar7) * uVar1 + uVar4 >> 8) * __real_33800000;
  return (TVector2<float>)TVar2;
}

// RandomFloat3 @ 14947db20

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector<float> * __thiscall
NiagaraStateless::FParticleSimulationContext::RandomFloat3
          (FParticleSimulationContext *this,TVector<float> *__return_storage_ptr__,uint param_1,
          uint param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  fVar1 = __real_33800000;
  iVar7 = this->EmitterRandomSeed * 0x19660d + 0x3c6ef35f;
  iVar9 = this->ModuleRandomSeed * 0x19660d + -0x481ac960;
  iVar5 = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_1 * 4) * 0x19660d +
          -0x604888c8;
  uVar4 = param_2 * 0x19660d + -0xde90ea + iVar7 * iVar9;
  uVar2 = uVar4 * iVar5 + iVar7;
  uVar6 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = uVar2 * uVar4 + iVar5;
  uVar8 = uVar3 >> 0x10 ^ uVar3;
  uVar2 = uVar3 * uVar2 + iVar9;
  uVar2 = (uVar2 >> 0x10 ^ uVar2) * uVar6 + (uVar4 >> 0x10 ^ uVar4);
  uVar6 = uVar2 * uVar8 + uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(uVar2 >> 8) * __real_33800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(uVar6 >> 8) * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar8 + uVar6 * uVar2 >> 8) * fVar1;
  return __return_storage_ptr__;
}

// RandomFloat4 @ 14947dc30

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector4<float> * __thiscall
NiagaraStateless::FParticleSimulationContext::RandomFloat4
          (FParticleSimulationContext *this,TVector4<float> *__return_storage_ptr__,uint param_1,
          uint param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  fVar1 = __real_33800000;
  iVar9 = this->ModuleRandomSeed * 0x19660d + -0x481ac960;
  iVar7 = this->EmitterRandomSeed * 0x19660d + 0x3c6ef35f;
  iVar5 = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_1 * 4) * 0x19660d +
          -0x604888c8;
  uVar4 = param_2 * 0x19660d + -0xde90ea + iVar7 * iVar9;
  uVar2 = uVar4 * iVar5 + iVar7;
  uVar8 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = uVar2 * uVar4 + iVar5;
  uVar6 = uVar3 >> 0x10 ^ uVar3;
  uVar3 = uVar3 * uVar2 + iVar9;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar2 = (uVar4 >> 0x10 ^ uVar4) + uVar3 * uVar8;
  uVar8 = uVar2 * uVar6 + uVar8;
  uVar6 = uVar8 * uVar2 + uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(uVar2 >> 8) * __real_33800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(uVar8 >> 8) * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar6 >> 8) * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.W = (float)(uVar3 + uVar6 * uVar8 >> 8) * fVar1;
  return __return_storage_ptr__;
}

// RandomFloat @ 14947dd60

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

float __thiscall
NiagaraStateless::FParticleSimulationContext::RandomFloat
          (FParticleSimulationContext *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = this->EmitterRandomSeed * 0x19660d + 0x3c6ef35f;
  iVar6 = this->ModuleRandomSeed * 0x19660d + -0x481ac960;
  iVar3 = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_1 * 4) * 0x19660d +
          -0x604888c8;
  uVar4 = param_2 * 0x19660d + -0xde90ea + iVar5 * iVar6;
  uVar2 = uVar4 * iVar3 + iVar5;
  uVar1 = (uVar2 * uVar4 + iVar3) * uVar2 + iVar6;
  return (float)((uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 0x10 ^ uVar1) * (uVar2 >> 0x10 ^ uVar2) >> 8) *
         __real_33800000;
}

// RandomUInt2 @ 14947de00

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TIntVector2<unsigned_int> __thiscall
NiagaraStateless::FParticleSimulationContext::RandomUInt2
          (FParticleSimulationContext *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_register_00000014;
  TIntVector2<unsigned_int>_u_0 TVar2;
  int iVar3;
  uint uVar4;
  int in_R9D;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  TVar2._s_0.Y = in_register_00000014;
  TVar2._s_0.X = param_1;
  iVar6 = this->EmitterRandomSeed * 0x19660d + 0x3c6ef35f;
  iVar8 = this->ModuleRandomSeed * 0x19660d + -0x481ac960;
  iVar3 = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_2 * 4) * 0x19660d +
          -0x604888c8;
  uVar5 = in_R9D * 0x19660d + -0xde90ea + iVar6 * iVar8;
  uVar1 = uVar5 * iVar3 + iVar6;
  uVar7 = uVar1 * uVar5 + iVar3;
  uVar4 = uVar1 >> 0x10 ^ uVar1;
  uVar1 = uVar7 * uVar1 + iVar8;
  iVar3 = (uVar1 ^ uVar1 >> 0x10) * uVar4 + (uVar5 >> 0x10 ^ uVar5);
  *(int *)TVar2 = iVar3;
  *(uint *)((longlong)TVar2 + 4) = (uVar7 >> 0x10 ^ uVar7) * iVar3 + uVar4;
  return (TIntVector2<unsigned_int>)TVar2;
}

// RandomUInt3 @ 14947dec0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TIntVector3<unsigned_int> * __thiscall
NiagaraStateless::FParticleSimulationContext::RandomUInt3
          (FParticleSimulationContext *this,TIntVector3<unsigned_int> *__return_storage_ptr__,
          uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = this->EmitterRandomSeed * 0x19660d + 0x3c6ef35f;
  iVar8 = this->ModuleRandomSeed * 0x19660d + -0x481ac960;
  iVar4 = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_1 * 4) * 0x19660d +
          -0x604888c8;
  uVar3 = param_2 * 0x19660d + -0xde90ea + iVar6 * iVar8;
  uVar1 = uVar3 * iVar4 + iVar6;
  uVar5 = uVar1 >> 0x10 ^ uVar1;
  uVar2 = uVar1 * uVar3 + iVar4;
  uVar7 = uVar2 >> 0x10 ^ uVar2;
  uVar1 = uVar2 * uVar1 + iVar8;
  uVar1 = (uVar1 >> 0x10 ^ uVar1) * uVar5 + (uVar3 >> 0x10 ^ uVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.X = uVar1;
  uVar5 = uVar1 * uVar7 + uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = uVar5 * uVar1 + uVar7;
  return __return_storage_ptr__;
}

// RandomUInt4 @ 14947df90

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TIntVector4<unsigned_int> * __thiscall
NiagaraStateless::FParticleSimulationContext::RandomUInt4
          (FParticleSimulationContext *this,TIntVector4<unsigned_int> *__return_storage_ptr__,
          uint param_1,uint param_2)

{
  TIntVector4<unsigned_int>_u_0 local_18;
  
  local_18._s_0.X = param_2 + 0x1bd3;
  local_18._s_0.Y = this->EmitterRandomSeed;
  local_18._s_0.Z = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_1 * 4) + 0xdfd
  ;
  local_18._s_0.W = this->ModuleRandomSeed + 0x1905;
  Rand4DPCG32(__return_storage_ptr__,(TIntVector4<unsigned_int> *)&local_18._s_0);
  return __return_storage_ptr__;
}

// RandomUInt @ 14947dff0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

uint __thiscall
NiagaraStateless::FParticleSimulationContext::RandomUInt
          (FParticleSimulationContext *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = this->EmitterRandomSeed * 0x19660d + 0x3c6ef35f;
  iVar5 = this->ModuleRandomSeed * 0x19660d + -0x481ac960;
  iVar2 = *(int *)((longlong)this->RequiredComponents[6] + (ulonglong)param_1 * 4) * 0x19660d +
          -0x604888c8;
  uVar6 = param_2 * 0x19660d + -0xde90ea + iVar4 * iVar5;
  uVar3 = uVar6 * iVar2 + iVar4;
  uVar1 = (uVar3 * uVar6 + iVar2) * uVar3 + iVar5;
  return (uVar1 >> 0x10 ^ uVar1) * (uVar3 >> 0x10 ^ uVar3) + (uVar6 >> 0x10 ^ uVar6);
}

// Simulate @ 14947e800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::Simulate
          (FParticleSimulationContext *this,int param_1,float param_2,float param_3,
          TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> *param_4,
          FNiagaraDataBuffer *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStackY_198 [32];
  float local_168;
  undefined1 local_164;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_158;
  FSpawnInfoShaderParameters local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148.SpawnInfo_Time.Elements[0].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Time.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Time.Elements[1].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Time.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Rate.Elements[0].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Rate.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Rate.Elements[1].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Rate.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Probability.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Probability.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Probability.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Probability.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeScale.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeScale.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeScale.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeScale.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeBias.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeBias.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeBias.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeBias.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_158.DataPtr = param_4->DataPtr;
  local_158.ArrayNum = param_4->ArrayNum;
  local_158._12_4_ = *(undefined4 *)&param_4->field_0xc;
  this->NumInstances = 0;
  local_164 = 1;
  local_168 = param_2;
  uVar3 = FNiagaraStatelessEmitterData::CalculateActiveParticles
                    (this->EmitterData,param_1,&local_158,(TOptional<float>)&local_168,&local_148);
  if (uVar3 != 0) {
    FNiagaraDataBuffer::Allocate(param_5,uVar3,false);
    this->BufferStride = param_5->FloatStride;
    this->BufferFloatData = (uchar *)(param_5->FloatData).AllocatorInstance.Data;
    this->BufferInt32Data = (uchar *)(param_5->Int32Data).AllocatorInstance.Data;
    SimulateInternal(this,param_1,param_2,param_3,&local_148,uVar3);
  }
  uVar3 = this->NumInstances;
  if (param_5->NumInstancesAllocated < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumInstances <= NumInstancesAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_5->NumInstances = uVar3;
  return;
}

// SimulateGPU @ 14947e990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::SimulateGPU
          (FParticleSimulationContext *this,FRHICommandListBase *param_1,int param_2,float param_3,
          float param_4,TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> *param_5,
          FNiagaraDataBuffer *param_6)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  undefined1 auStackY_198 [32];
  float local_168;
  undefined1 local_164;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_158;
  FSpawnInfoShaderParameters local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148.SpawnInfo_Time.Elements[0].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Time.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Time.Elements[1].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Time.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Rate.Elements[0].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Rate.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Rate.Elements[1].field0_0x0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Rate.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  puVar6 = (uchar *)0x0;
  local_148.SpawnInfo_Probability.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Probability.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_Probability.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_Probability.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeScale.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeScale.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeScale.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeScale.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeBias.Elements[0].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeBias.Elements[0].field0_0x0._8_8_ = _UNK_150689648;
  local_148.SpawnInfo_LifetimeBias.Elements[1].field0_0x0._0_8_ =
       ___xmm_3f800000000000000000000000000000;
  local_148.SpawnInfo_LifetimeBias.Elements[1].field0_0x0._8_8_ = _UNK_150689648;
  local_158.DataPtr = param_5->DataPtr;
  local_158.ArrayNum = param_5->ArrayNum;
  local_158._12_4_ = *(undefined4 *)&param_5->field_0xc;
  this->NumInstances = 0;
  local_164 = 1;
  local_168 = param_3;
  uVar4 = FNiagaraStatelessEmitterData::CalculateActiveParticles
                    (this->EmitterData,param_2,&local_158,(TOptional<float>)&local_168,&local_148);
  if (uVar4 != 0) {
    if ((uVar4 < param_6->NumInstancesAllocated) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DestinationData->GetNumInstancesAllocated() <= ActiveParticles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessParticleSimContext.cpp"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->BufferStride = param_6->FloatStride;
    uVar1 = (param_6->GPUBufferFloat).NumBytes;
    puVar5 = puVar6;
    if (uVar1 != 0) {
      puVar5 = FRHICommandListBase::LockBuffer
                         (param_1,(param_6->GPUBufferFloat).Buffer.Reference,0,uVar1,RLM_WriteOnly);
    }
    this->BufferFloatData = puVar5;
    uVar1 = (param_6->GPUBufferInt).NumBytes;
    if (uVar1 != 0) {
      puVar6 = FRHICommandListBase::LockBuffer
                         (param_1,(param_6->GPUBufferInt).Buffer.Reference,0,uVar1,RLM_WriteOnly);
    }
    this->BufferInt32Data = puVar6;
    SimulateInternal(this,param_2,param_3,param_4,&local_148,uVar4);
    if (this->BufferFloatData != (uchar *)0x0) {
      FRHICommandListBase::UnlockBuffer(param_1,(param_6->GPUBufferFloat).Buffer.Reference);
    }
    if (this->BufferInt32Data != (uchar *)0x0) {
      FRHICommandListBase::UnlockBuffer(param_1,(param_6->GPUBufferInt).Buffer.Reference);
    }
  }
  uVar4 = this->NumInstances;
  if ((param_6->NumInstancesAllocated < uVar4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumInstances <= NumInstancesAllocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x9c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_6->NumInstances = uVar4;
  return;
}

// SimulateInternal @ 14947ebc0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FParticleSimulationContext::SimulateInternal
          (FParticleSimulationContext *this,int param_1,float param_2,float param_3,
          FSpawnInfoShaderParameters *param_4,uint param_5)

{
  TArray<unsigned_char_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  float fVar2;
  ushort uVar3;
  FParticleSimulationExecData *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  ForElementType<unsigned_char_*> FVar14;
  ForElementType<unsigned_char_*> FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uchar *puVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  void **local_res8;
  undefined1 local_res10 [8];
  
  this->NumInstances = 0;
  fVar6 = __real_3f800000;
  this->DeltaTime = param_3;
  if (param_3 <= 0.0) {
    fVar32 = 0.0;
  }
  else {
    fVar32 = fVar6 / param_3;
  }
  pTVar1 = &this->VariableComponents;
  this->EmitterRandomSeed = param_1;
  this->InvDeltaTime = fVar32;
  this->ModuleRandomSeed = 0;
  pFVar4 = this->EmitterData->ParticleSimExecData;
  iVar21 = (pFVar4->VariableComponentOffsets).ArrayNum;
  iVar9 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_*>_>
                    (8,8,iVar21,&pTVar1->AllocatorInstance,&(this->VariableComponents).ArrayNum,
                     &(this->VariableComponents).ArrayMax);
  FVar14 = (this->VariableComponents).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_char_*>)0x0) {
    FVar14 = (ForElementType<unsigned_char_*>)pTVar1;
  }
  memset((void *)((longlong)FVar14 + (longlong)iVar9 * 8),0,(longlong)iVar21 << 3);
  iVar21 = (pFVar4->VariableComponentOffsets).ArrayNum;
  uVar20 = 0;
  if (0 < iVar21) {
    lVar31 = 0;
    lVar23 = 0;
    do {
      uVar24 = ~uVar20 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar20 < iVar21) {
        uVar28 = uVar24;
      }
      if ((uVar28 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(ushort *)((pFVar4->VariableComponentOffsets).AllocatorInstance.Data + lVar23);
      uVar28 = 0;
      if ((int)uVar20 < (pFVar4->VariableComponentOffsets).ArrayNum) {
        uVar28 = uVar24;
      }
      if ((uVar28 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar28 = this->BufferStride;
      if (((byte)(pFVar4->VariableComponentOffsets).AllocatorInstance.Data[lVar23] & 1) == 0) {
        puVar30 = this->BufferFloatData;
      }
      else {
        puVar30 = this->BufferInt32Data;
      }
      uVar27 = 0;
      if ((int)uVar20 < (this->VariableComponents).ArrayNum) {
        uVar27 = uVar24;
      }
      if ((uVar27 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar14 = (this->VariableComponents).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_char_*>)pTVar1;
      if (FVar14 != (ForElementType<unsigned_char_*>)0x0) {
        FVar15 = FVar14;
      }
      uVar20 = uVar20 + 1;
      lVar23 = lVar23 + 4;
      *(uchar **)((longlong)FVar15 + lVar31) = puVar30 + (uVar3 >> 1) * uVar28;
      lVar31 = lVar31 + 8;
      iVar21 = (pFVar4->VariableComponentOffsets).ArrayNum;
    } while ((int)uVar20 < iVar21);
  }
  pvVar11 = FMemory::Malloc((ulonglong)(pFVar4->RequiredComponentByteSize * this->BufferStride),0);
  local_res8 = this->RequiredComponents;
  iVar21 = 0;
  lVar23 = 0;
  do {
    if (((pFVar4->RequiredComponentOffsets).ArrayNum <= iVar21) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (pFVar4->RequiredComponentOffsets).ArrayNum;
    if (((byte)(pFVar4->RequiredComponentOffsets).AllocatorInstance.Data[lVar23] & 1) == 0) {
      if ((iVar9 <= iVar21) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar20 = (uint)(*(ushort *)
                       ((pFVar4->RequiredComponentOffsets).AllocatorInstance.Data + lVar23) >> 1);
      if (((this->VariableComponents).ArrayNum <= (int)uVar20) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar14 = (this->VariableComponents).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_char_*>)&this->VariableComponents;
      if (FVar14 != (ForElementType<unsigned_char_*>)0x0) {
        FVar15 = FVar14;
      }
      pvVar12 = *(void **)((longlong)FVar15 + (ulonglong)uVar20 * 8);
    }
    else {
      if ((iVar9 <= iVar21) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar12 = (void *)((ulonglong)
                         ((uint)(*(ushort *)
                                  ((pFVar4->RequiredComponentOffsets).AllocatorInstance.Data +
                                  lVar23) >> 1) * this->BufferStride) + (longlong)pvVar11);
    }
    iVar21 = iVar21 + 1;
    lVar23 = lVar23 + 2;
    *local_res8 = pvVar12;
    fVar7 = __real_33800000;
    fVar32 = __real_bf800000;
    local_res8 = local_res8 + 1;
  } while (iVar21 < 8);
  uVar20 = 0;
  if (param_5 != 0) {
    do {
      uVar19 = 0;
      uVar28 = uVar20;
      do {
        uVar24 = *(uint *)(&(param_4->SpawnInfo_NumActive).Elements[0].field_0x0 + uVar19 * 4);
        uVar10 = (uint)uVar19;
        uVar19 = uVar19 >> 2;
        uVar27 = uVar10 & 3;
        iVar21 = *(int *)(&(param_4->SpawnInfo_ParticleOffset).Elements[uVar19].field_0x0 +
                         (ulonglong)(uVar10 & 3) * 4);
        fVar33 = (param_4->SpawnInfo_Probability).Elements[uVar19].field0_0x0.XYZW[uVar27];
        fVar35 = (param_4->SpawnInfo_LifetimeScale).Elements[uVar19].field0_0x0.XYZW[uVar27];
        fVar34 = (param_4->SpawnInfo_LifetimeBias).Elements[uVar19].field0_0x0.XYZW[uVar27];
        if (uVar28 < uVar24) {
          fVar36 = (param_4->SpawnInfo_Rate).Elements[uVar19].field0_0x0.XYZW[uVar27];
          fVar2 = (param_4->SpawnInfo_Time).Elements[uVar19].field0_0x0.XYZW[uVar27];
          *(uint *)((longlong)this->RequiredComponents[6] + (ulonglong)this->NumInstances * 4) =
               *(int *)(&(param_4->SpawnInfo_UniqueOffset).Elements[uVar19].field_0x0 +
                       (ulonglong)(uVar10 & 3) * 4) + iVar21 + uVar28;
          iVar9 = this->EmitterRandomSeed * 0x19660d;
          iVar25 = this->ModuleRandomSeed * 0x19660d;
          fVar36 = param_2 - ((float)(iVar21 + uVar28) * fVar36 + fVar2);
          iVar29 = (iVar9 + 0x3c6ef35f) * (iVar25 + -0x481ac960);
          iVar21 = *(int *)((longlong)this->RequiredComponents[6] +
                           (ulonglong)this->NumInstances * 4) * 0x19660d;
          uVar28 = iVar29 - 0xde90ea;
          uVar17 = iVar9 + 0x3c6ef35f + (iVar21 + -0x604888c8) * uVar28;
          uVar27 = iVar25 + -0x481ac960 + (iVar21 + -0x604888c8 + uVar17 * uVar28) * uVar17;
          uVar24 = iVar29 - 0xabc4d0;
          uVar18 = iVar9 + 0x3c6ef35f + uVar24 * (iVar21 + -0x604888c8);
          uVar10 = iVar25 + -0x481ac960 + (iVar21 + -0x604888c8 + uVar18 * uVar24) * uVar18;
          fVar35 = (float)((uVar28 >> 0x10 ^ uVar28) +
                           (uVar27 >> 0x10 ^ uVar27) * (uVar17 >> 0x10 ^ uVar17) >> 8) * fVar7 *
                   fVar35 + fVar34;
          if (fVar33 < (float)((uVar24 >> 0x10 ^ uVar24) +
                               (uVar10 >> 0x10 ^ uVar10) * (uVar18 >> 0x10 ^ uVar18) >> 8) * fVar7)
          {
            fVar35 = fVar32;
          }
          if (((0.0 <= fVar36) && (0.0 < fVar35)) && (fVar36 < fVar35)) {
            fVar33 = fVar6 / fVar35;
            fVar34 = fVar36 - this->DeltaTime;
            *(undefined4 *)
             ((longlong)this->RequiredComponents[0] + (ulonglong)this->NumInstances * 4) = 1;
            if (fVar34 <= 0.0) {
              fVar34 = 0.0;
            }
            *(float *)((longlong)this->RequiredComponents[1] + (ulonglong)this->NumInstances * 4) =
                 fVar35;
            *(float *)((longlong)this->RequiredComponents[2] + (ulonglong)this->NumInstances * 4) =
                 fVar36;
            *(float *)((longlong)this->RequiredComponents[3] + (ulonglong)this->NumInstances * 4) =
                 fVar33 * fVar36;
            *(float *)((longlong)this->RequiredComponents[4] + (ulonglong)this->NumInstances * 4) =
                 fVar34;
            *(float *)((longlong)this->RequiredComponents[5] + (ulonglong)this->NumInstances * 4) =
                 fVar33 * fVar34;
            iVar9 = this->EmitterRandomSeed * 0x19660d;
            iVar25 = this->ModuleRandomSeed * 0x19660d;
            iVar21 = *(int *)((longlong)this->RequiredComponents[6] +
                             (ulonglong)this->NumInstances * 4) * 0x19660d;
            uVar27 = (iVar9 + 0x3c6ef35f) * (iVar25 + -0x481ac960) - 0xc52add;
            uVar24 = iVar9 + 0x3c6ef35f + (iVar21 + -0x604888c8) * uVar27;
            uVar28 = iVar25 + -0x481ac960 + (iVar21 + -0x604888c8 + uVar24 * uVar27) * uVar24;
            *(float *)((longlong)this->RequiredComponents[7] + (ulonglong)this->NumInstances * 4) =
                 (float)((uVar27 >> 0x10 ^ uVar27) +
                         (uVar28 >> 0x10 ^ uVar28) * (uVar24 >> 0x10 ^ uVar24) >> 8) * fVar7;
            this->NumInstances = this->NumInstances + 1;
          }
          break;
        }
        uVar28 = uVar28 - uVar24;
        uVar19 = (ulonglong)(uVar10 + 1);
      } while (uVar10 + 1 < 8);
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_5);
  }
  if (this->NumInstances != 0) {
    iVar21 = (pFVar4->SimulateFunctions).ArrayNum;
    pFVar22 = (pFVar4->SimulateFunctions).AllocatorInstance.Data;
    pFVar26 = pFVar22 + (longlong)iVar21 * 0x40;
    while( true ) {
      if ((pFVar4->SimulateFunctions).ArrayNum != iVar21) {
        `TCheckedPointerIterator<NiagaraStateless::FParticleSimulationExecData::FCallback_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar22 == pFVar26) break;
      this->BuiltDataOffset = *(int *)(pFVar22 + 0x30);
      this->ShaderParameterOffset = *(int *)(pFVar22 + 0x34);
      this->ModuleRandomSeed = *(uint *)(pFVar22 + 0x38);
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar22);
      pFVar16 = *(FScriptContainerElement **)(pFVar22 + 0x28);
      pcVar5 = *(code **)pFVar22;
      if (pFVar16 == (FScriptContainerElement *)0x0) {
        pFVar16 = pFVar22 + 0x10;
      }
      uVar13 = (**(code **)(*(longlong *)pFVar16 + 8))();
      (*pcVar5)(uVar13,this);
      pFVar22 = pFVar22 + 0x40;
    }
    if (this->bNeedsParticleKillCompaction != false) {
      CompactDeadParticles(this);
    }
  }
  FMemory::Free(pvVar11);
  return;
}

