// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// CrossProduct @ 1438ac610

TVector<double,3> * __cdecl
Chaos::TVector<double,3>::CrossProduct
          (TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)&param_1->field_0x10;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  dVar4 = *(double *)param_2;
  dVar5 = *(double *)&param_2->field_0x8;
  dVar6 = *(double *)param_1;
  *(double *)__return_storage_ptr__ = dVar2 * dVar3 - dVar1 * dVar5;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar4 * dVar1 - dVar6 * dVar3;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar6 * dVar5 - dVar4 * dVar2;
  return __return_storage_ptr__;
}

// GetUnsafeNormal @ 1438bd3b0

TVector<double> * __thiscall
UE::Math::TVector<double>::GetUnsafeNormal
          (TVector<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar3 = (this->field0_0x0)._s_0.Z;
  dVar4 = __real_3ff0000000000000 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar4;
  return __return_storage_ptr__;
}

// SafeNormalize @ 143b39f40

float __thiscall Chaos::TVector<float,3>::SafeNormalize(TVector<float,3> *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)&this->field_0x8;
  fVar3 = *(float *)&this->field_0x4 * *(float *)&this->field_0x4 + fVar1 * fVar1 + fVar2 * fVar2;
  if (fVar3 < param_1) {
    *(undefined8 *)this = 0x3f800000;
    *(undefined4 *)&this->field_0x8 = 0;
    return 0.0;
  }
  fVar3 = SQRT(fVar3);
  fVar4 = __real_3f800000 / fVar3;
  *(float *)this = fVar4 * fVar1;
  *(float *)&this->field_0x4 = fVar4 * *(float *)&this->field_0x4;
  *(float *)&this->field_0x8 = fVar4 * fVar2;
  return fVar3;
}

// operator[] @ 143c466b0

TGeometryParticleHandleImp<double,3,1> ** __thiscall
Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[]
          (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticleHandleImp<double,3,1> **ppTVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x86,L"");
    if (!bVar2) {
      return this->V + param_1;
    }
code_r0x000143c46721:
    pcVar1 = (code *)swi(3);
    ppTVar3 = (TGeometryParticleHandleImp<double,3,1> **)(*pcVar1)();
    return ppTVar3;
  }
  if (1 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x87,L"");
    if (bVar2) goto code_r0x000143c46721;
  }
  return this->V + param_1;
}

// CrossProduct @ 143da4010

TVector<float,3> * __cdecl
Chaos::TVector<float,3>::CrossProduct
          (TVector<float,3> *__return_storage_ptr__,TVector<float,3> *param_1,
          TVector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)&param_1->field_0x8;
  fVar2 = *(float *)&param_1->field_0x4;
  fVar3 = *(float *)&param_2->field_0x8;
  fVar4 = *(float *)param_2;
  fVar5 = *(float *)&param_2->field_0x4;
  fVar6 = *(float *)param_1;
  *(float *)__return_storage_ptr__ = fVar2 * fVar3 - fVar1 * fVar5;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar4 * fVar1 - fVar6 * fVar3;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar6 * fVar5 - fVar4 * fVar2;
  return __return_storage_ptr__;
}

// AxisVector @ 143eb76d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __cdecl
Chaos::TVector<double,3>::AxisVector(TVector<double,3> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_1 == 0) {
    local_28 = ___xmm_00000000000000003ff0000000000000;
    uStack_20 = _UNK_150689518;
    uVar1 = 0;
  }
  else if (param_1 == 1) {
    local_28 = ___xmm_3ff00000000000000000000000000000;
    uStack_20 = _UNK_15061cbc8;
    uVar1 = 0;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    uVar1 = __real_3ff0000000000000;
  }
  *(undefined8 *)__return_storage_ptr__ = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uStack_20;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// operator[] @ 1440cd970

TGeometryParticleHandleImp<double,3,1> ** __thiscall
Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>::operator[]
          (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticleHandleImp<double,3,1> **ppTVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x90,L"");
    if (!bVar2) {
      return this->V + param_1;
    }
code_r0x0001440cd9e1:
    pcVar1 = (code *)swi(3);
    ppTVar3 = (TGeometryParticleHandleImp<double,3,1> **)(*pcVar1)();
    return ppTVar3;
  }
  if (1 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x91,L"");
    if (bVar2) goto code_r0x0001440cd9e1;
  }
  return this->V + param_1;
}

