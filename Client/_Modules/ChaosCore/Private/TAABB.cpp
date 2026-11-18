// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCore
// Functions: 156

// TAABB<float,3> @ 143623ed0

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::TAABB<float,3>(TAABB<float,3> *this,TAABB<float,3> *param_1)

{
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined4 *)&(this->MMin).field_0x8 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)&(this->MMax).field_0x8 = *(undefined4 *)&(param_1->MMax).field_0x8;
  return this;
}

// TAABB<float,3> @ 143623f00

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::TAABB<float,3>(TAABB<float,3> *this,TAABB<float,3> *param_1)

{
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined4 *)&(this->MMin).field_0x8 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)&(this->MMax).field_0x8 = *(undefined4 *)&(param_1->MMax).field_0x8;
  return this;
}

// TAABB<float,3> @ 143623f30

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::TAABB<float,3>
          (TAABB<float,3> *this,TVector<float,3> *param_1,TVector<float,3> *param_2)

{
  *(undefined8 *)&this->MMin = *(undefined8 *)param_1;
  *(undefined4 *)&(this->MMin).field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)param_2;
  *(undefined4 *)&(this->MMax).field_0x8 = *(undefined4 *)&param_2->field_0x8;
  return this;
}

// TAABB<float,3> @ 143623f60

TAABB<float,3> * __thiscall Chaos::TAABB<float,3>::TAABB<float,3>(TAABB<float,3> *this)

{
  *(undefined4 *)&this->MMin = 0x7f7fffff;
  *(undefined4 *)&(this->MMin).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->MMin).field_0x8 = 0x7f7fffff;
  *(undefined4 *)&this->MMax = 0xff7fffff;
  *(undefined4 *)&(this->MMax).field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->MMax).field_0x8 = 0xff7fffff;
  return this;
}

// TAABB<double,3> @ 143623fa0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::TAABB<double,3>(TAABB<double,3> *this,TAABB<double,3> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(this->MMin).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMin).field_0x10 = *(undefined8 *)&(param_1->MMin).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined8 *)&(this->MMax).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMax).field_0x10 = *(undefined8 *)&(param_1->MMax).field_0x10;
  return this;
}

// TAABB<double,3> @ 143623fd0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::TAABB<double,3>(TAABB<double,3> *this,TAABB<double,3> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(this->MMin).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMin).field_0x10 = *(undefined8 *)&(param_1->MMin).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined8 *)&(this->MMax).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMax).field_0x10 = *(undefined8 *)&(param_1->MMax).field_0x10;
  return this;
}

// TAABB<double,3> @ 143624000

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::TAABB<double,3>
          (TAABB<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->MMin = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MMin).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMin).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)param_2;
  *(undefined8 *)&(this->MMax).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMax).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  return this;
}

// TAABB<double,3> @ 143624030

TAABB<double,3> * __thiscall Chaos::TAABB<double,3>::TAABB<double,3>(TAABB<double,3> *this)

{
  *(undefined8 *)&this->MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MMin).field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MMin).field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&this->MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MMax).field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MMax).field_0x10 = 0xffefffffffffffff;
  return this;
}

// operator= @ 143624160

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::operator=(TAABB<float,3> *this,TAABB<float,3> *param_1)

{
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined4 *)&(this->MMin).field_0x8 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)&(this->MMax).field_0x8 = *(undefined4 *)&(param_1->MMax).field_0x8;
  return this;
}

// operator= @ 143624190

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::operator=(TAABB<float,3> *this,TAABB<float,3> *param_1)

{
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined4 *)&(this->MMin).field_0x8 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)&(this->MMax).field_0x8 = *(undefined4 *)&(param_1->MMax).field_0x8;
  return this;
}

// operator= @ 1436241c0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::operator=(TAABB<double,3> *this,TAABB<double,3> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(this->MMin).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMin).field_0x10 = *(undefined8 *)&(param_1->MMin).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined8 *)&(this->MMax).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMax).field_0x10 = *(undefined8 *)&(param_1->MMax).field_0x10;
  return this;
}

// operator= @ 1436241f0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::operator=(TAABB<double,3> *this,TAABB<double,3> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&this->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(this->MMin).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMin).field_0x10 = *(undefined8 *)&(param_1->MMin).field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&this->MMax = *(undefined8 *)&param_1->MMax;
  *(undefined8 *)&(this->MMax).field_0x8 = uVar1;
  *(undefined8 *)&(this->MMax).field_0x10 = *(undefined8 *)&(param_1->MMax).field_0x10;
  return this;
}

// BoundingBox @ 143624790

TAABB<float,3> * __thiscall Chaos::TAABB<float,3>::BoundingBox(TAABB<float,3> *this)

{
  return this;
}

// BoundingBox @ 1436247a0

TAABB<double,3> * __thiscall Chaos::TAABB<double,3>::BoundingBox(TAABB<double,3> *this)

{
  return this;
}

// Center @ 143625140

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::Center(TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_3f000000;
  fVar5 = (*(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4) * __real_3f000000;
  fVar1 = *(float *)&(this->MMin).field_0x4;
  *(float *)__return_storage_ptr__ =
       (*(float *)&this->MMax - *(float *)&this->MMin) * __real_3f000000 + *(float *)&this->MMin;
  fVar2 = *(float *)&(this->MMax).field_0x8;
  fVar3 = *(float *)&(this->MMin).field_0x8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar5 + fVar1;
  *(float *)&__return_storage_ptr__->field_0x8 =
       (fVar2 - fVar3) * fVar4 + *(float *)&(this->MMin).field_0x8;
  return __return_storage_ptr__;
}

// Center @ 1436251a0

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::Center(TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  dVar5 = (*(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar1 = *(double *)&(this->MMin).field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&this->MMax - *(double *)&this->MMin) * __real_3fe0000000000000 +
       *(double *)&this->MMin;
  dVar2 = *(double *)&(this->MMax).field_0x10;
  dVar3 = *(double *)&(this->MMin).field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5 + dVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar2 - dVar3) * dVar4 + *(double *)&(this->MMin).field_0x10;
  return __return_storage_ptr__;
}

// CenterRadius @ 143625200

float __thiscall Chaos::TAABB<float,3>::CenterRadius(TAABB<float,3> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4;
  fVar2 = *(float *)&this->MMax - *(float *)&this->MMin;
  fVar3 = *(float *)&(this->MMax).field_0x8 - *(float *)&(this->MMin).field_0x8;
  return SQRT((fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) * __real_3e800000);
}

// CenterRadius @ 143625250

double __thiscall Chaos::TAABB<double,3>::CenterRadius(TAABB<double,3> *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar4 = *(double *)&this->MMax - *(double *)&this->MMin;
  dVar1 = *(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8;
  dVar5 = *(double *)&(this->MMax).field_0x10 - *(double *)&(this->MMin).field_0x10;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (dVar4 * dVar4 + auVar2._0_8_ + dVar5 * dVar5) * __real_3fd0000000000000;
  auVar3 = sqrtpd(auVar2,auVar3);
  return auVar3._0_8_;
}

// Clear @ 1436252a0

void __thiscall Chaos::TAABB<float,3>::Clear(TAABB<float,3> *this)

{
  *(undefined4 *)&this->MMin = 0x7f7fffff;
  *(undefined4 *)&(this->MMin).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->MMin).field_0x8 = 0x7f7fffff;
  *(undefined4 *)&this->MMax = 0xff7fffff;
  *(undefined4 *)&(this->MMax).field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->MMax).field_0x8 = 0xff7fffff;
  return;
}

// Clear @ 1436252d0

void __thiscall Chaos::TAABB<double,3>::Clear(TAABB<double,3> *this)

{
  *(undefined8 *)&this->MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MMin).field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MMin).field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&this->MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MMax).field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MMax).field_0x10 = 0xffefffffffffffff;
  return;
}

// ComputeLocalSamplePoints @ 143625310

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TAABB<float,3>::ComputeLocalSamplePoints
          (TAABB<float,3> *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = __real_3f000000;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  fVar9 = *(float *)&(this->MMin).field_0x8;
  fVar10 = *(float *)&(this->MMin).field_0x4;
  fVar11 = *(float *)&(this->MMax).field_0x8;
  fVar12 = *(float *)&this->MMin;
  fVar13 = *(float *)&(this->MMax).field_0x4;
  fVar14 = *(float *)&this->MMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  fVar6 = (fVar11 - fVar9) * fVar15 + fVar9;
  __return_storage_ptr__->ArrayMax = 0;
  fVar7 = (fVar13 - fVar10) * fVar15 + fVar10;
  fVar8 = (fVar14 - fVar12) * fVar15 + fVar12;
  fVar9 = fVar9 - fVar6;
  fVar11 = fVar11 - fVar6;
  fVar10 = fVar10 - fVar7;
  fVar13 = fVar13 - fVar7;
  fVar12 = fVar12 - fVar8;
  fVar14 = fVar14 - fVar8;
  fVar6 = (fVar11 - fVar9) * fVar15 + fVar9;
  fVar7 = (fVar13 - fVar10) * fVar15 + fVar10;
  fVar15 = (fVar14 - fVar12) * fVar15 + fVar12;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0x1a,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  if (*piVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)pFVar2 = fVar12;
  *(float *)(pFVar2 + 4) = fVar10;
  *(float *)(pFVar2 + 8) = fVar9;
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xc) = fVar15;
  *(float *)(pFVar2 + 0x10) = fVar10;
  *(float *)(pFVar2 + 0x14) = fVar9;
  if (*piVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x18) = fVar14;
  *(float *)(pFVar2 + 0x1c) = fVar10;
  *(float *)(pFVar2 + 0x20) = fVar9;
  if (*piVar1 < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x24) = fVar12;
  *(float *)(pFVar2 + 0x28) = fVar7;
  *(float *)(pFVar2 + 0x2c) = fVar9;
  if (*piVar1 < 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x30) = fVar15;
  *(float *)(pFVar2 + 0x34) = fVar7;
  *(float *)(pFVar2 + 0x38) = fVar9;
  if (*piVar1 < 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x3c) = fVar14;
  *(float *)(pFVar2 + 0x40) = fVar7;
  *(float *)(pFVar2 + 0x44) = fVar9;
  if (*piVar1 < 7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x48) = fVar12;
  *(float *)(pFVar2 + 0x4c) = fVar13;
  *(float *)(pFVar2 + 0x50) = fVar9;
  if (*piVar1 < 8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x54) = fVar15;
  *(float *)(pFVar2 + 0x58) = fVar13;
  *(float *)(pFVar2 + 0x5c) = fVar9;
  if (*piVar1 < 9) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x60) = fVar14;
  *(float *)(pFVar2 + 100) = fVar13;
  *(float *)(pFVar2 + 0x68) = fVar9;
  if (*piVar1 < 10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x6c) = fVar12;
  *(float *)(pFVar2 + 0x70) = fVar10;
  *(float *)(pFVar2 + 0x74) = fVar6;
  if (*piVar1 < 0xb) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x78) = fVar15;
  *(float *)(pFVar2 + 0x7c) = fVar10;
  *(float *)(pFVar2 + 0x80) = fVar6;
  if (*piVar1 < 0xc) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x84) = fVar14;
  *(float *)(pFVar2 + 0x88) = fVar10;
  *(float *)(pFVar2 + 0x8c) = fVar6;
  if (*piVar1 < 0xd) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x90) = fVar12;
  *(float *)(pFVar2 + 0x94) = fVar7;
  *(float *)(pFVar2 + 0x98) = fVar6;
  if (*piVar1 < 0xe) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x9c) = fVar14;
  *(float *)(pFVar2 + 0xa0) = fVar7;
  *(float *)(pFVar2 + 0xa4) = fVar6;
  if (*piVar1 < 0xf) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xa8) = fVar12;
  *(float *)(pFVar2 + 0xac) = fVar13;
  *(float *)(pFVar2 + 0xb0) = fVar6;
  if (*piVar1 < 0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xb4) = fVar15;
  *(float *)(pFVar2 + 0xb8) = fVar13;
  *(float *)(pFVar2 + 0xbc) = fVar6;
  if (*piVar1 < 0x11) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xc0) = fVar14;
  *(float *)(pFVar2 + 0xc4) = fVar13;
  *(float *)(pFVar2 + 200) = fVar6;
  if (*piVar1 < 0x12) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xcc) = fVar12;
  *(float *)(pFVar2 + 0xd0) = fVar10;
  *(float *)(pFVar2 + 0xd4) = fVar11;
  if (*piVar1 < 0x13) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xd8) = fVar15;
  *(float *)(pFVar2 + 0xdc) = fVar10;
  *(float *)(pFVar2 + 0xe0) = fVar11;
  if (*piVar1 < 0x14) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xe4) = fVar14;
  *(float *)(pFVar2 + 0xe8) = fVar10;
  *(float *)(pFVar2 + 0xec) = fVar11;
  if (*piVar1 < 0x15) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xf0) = fVar12;
  *(float *)(pFVar2 + 0xf4) = fVar7;
  *(float *)(pFVar2 + 0xf8) = fVar11;
  if (*piVar1 < 0x16) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0xfc) = fVar15;
  *(float *)(pFVar2 + 0x100) = fVar7;
  *(float *)(pFVar2 + 0x104) = fVar11;
  if (*piVar1 < 0x17) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x108) = fVar14;
  *(float *)(pFVar2 + 0x10c) = fVar7;
  *(float *)(pFVar2 + 0x110) = fVar11;
  if (*piVar1 < 0x18) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x114) = fVar12;
  *(float *)(pFVar2 + 0x118) = fVar13;
  *(float *)(pFVar2 + 0x11c) = fVar11;
  if (*piVar1 < 0x19) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 0x120) = fVar15;
  *(float *)(pFVar2 + 0x124) = fVar13;
  *(float *)(pFVar2 + 0x128) = fVar11;
  if (*piVar1 < 0x1a) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar2 + 300) = fVar14;
  *(float *)(pFVar2 + 0x130) = fVar13;
  *(float *)(pFVar2 + 0x134) = fVar11;
  return __return_storage_ptr__;
}

// ComputeLocalSamplePoints @ 143625d30

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TAABB<double,3>::ComputeLocalSamplePoints
          (TAABB<double,3> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar10 = __real_3fe0000000000000;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  dVar2 = *(double *)&(this->MMin).field_0x10;
  dVar3 = *(double *)&(this->MMin).field_0x8;
  dVar4 = *(double *)&(this->MMax).field_0x10;
  dVar5 = *(double *)&this->MMin;
  dVar6 = *(double *)&(this->MMax).field_0x8;
  dVar7 = *(double *)&this->MMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  dVar13 = (dVar4 - dVar2) * dVar10 + dVar2;
  dVar14 = (dVar6 - dVar3) * dVar10 + dVar3;
  dVar15 = (dVar7 - dVar5) * dVar10 + dVar5;
  dVar2 = dVar2 - dVar13;
  dVar3 = dVar3 - dVar14;
  dVar4 = dVar4 - dVar13;
  dVar6 = dVar6 - dVar14;
  dVar5 = dVar5 - dVar15;
  dVar7 = dVar7 - dVar15;
  dVar13 = (dVar4 - dVar2) * dVar10 + dVar2;
  dVar14 = (dVar6 - dVar3) * dVar10 + dVar3;
  dVar10 = (dVar7 - dVar5) * dVar10 + dVar5;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x1a,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  if (*piVar1 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)pFVar8 = dVar5;
  *(double *)(pFVar8 + 8) = dVar3;
  *(double *)(pFVar8 + 0x10) = dVar2;
  if (*piVar1 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x18) = dVar10;
  *(double *)(pFVar8 + 0x20) = dVar3;
  *(double *)(pFVar8 + 0x28) = dVar2;
  if (*piVar1 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x30) = dVar7;
  *(double *)(pFVar8 + 0x38) = dVar3;
  *(double *)(pFVar8 + 0x40) = dVar2;
  if (*piVar1 < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x48) = dVar5;
  *(double *)(pFVar8 + 0x50) = dVar14;
  *(double *)(pFVar8 + 0x58) = dVar2;
  if (*piVar1 < 5) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x60) = dVar10;
  *(double *)(pFVar8 + 0x68) = dVar14;
  *(double *)(pFVar8 + 0x70) = dVar2;
  if (*piVar1 < 6) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x78) = dVar7;
  *(double *)(pFVar8 + 0x80) = dVar14;
  *(double *)(pFVar8 + 0x88) = dVar2;
  if (*piVar1 < 7) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x90) = dVar5;
  *(double *)(pFVar8 + 0x98) = dVar6;
  *(double *)(pFVar8 + 0xa0) = dVar2;
  if (*piVar1 < 8) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0xa8) = dVar10;
  *(double *)(pFVar8 + 0xb0) = dVar6;
  *(double *)(pFVar8 + 0xb8) = dVar2;
  if (*piVar1 < 9) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0xc0) = dVar7;
  *(double *)(pFVar8 + 200) = dVar6;
  *(double *)(pFVar8 + 0xd0) = dVar2;
  if (*piVar1 < 10) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0xd8) = dVar5;
  *(double *)(pFVar8 + 0xe0) = dVar3;
  *(double *)(pFVar8 + 0xe8) = dVar13;
  if (*piVar1 < 0xb) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0xf0) = dVar10;
  *(double *)(pFVar8 + 0xf8) = dVar3;
  *(double *)(pFVar8 + 0x100) = dVar13;
  if (*piVar1 < 0xc) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x108) = dVar7;
  *(double *)(pFVar8 + 0x110) = dVar3;
  *(double *)(pFVar8 + 0x118) = dVar13;
  if (*piVar1 < 0xd) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x120) = dVar5;
  *(double *)(pFVar8 + 0x128) = dVar14;
  *(double *)(pFVar8 + 0x130) = dVar13;
  if (*piVar1 < 0xe) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x138) = dVar7;
  *(double *)(pFVar8 + 0x140) = dVar14;
  *(double *)(pFVar8 + 0x148) = dVar13;
  if (*piVar1 < 0xf) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x150) = dVar5;
  *(double *)(pFVar8 + 0x158) = dVar6;
  *(double *)(pFVar8 + 0x160) = dVar13;
  if (*piVar1 < 0x10) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x168) = dVar10;
  *(double *)(pFVar8 + 0x170) = dVar6;
  *(double *)(pFVar8 + 0x178) = dVar13;
  if (*piVar1 < 0x11) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x180) = dVar7;
  *(double *)(pFVar8 + 0x188) = dVar6;
  *(double *)(pFVar8 + 400) = dVar13;
  if (*piVar1 < 0x12) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x198) = dVar5;
  *(double *)(pFVar8 + 0x1a0) = dVar3;
  *(double *)(pFVar8 + 0x1a8) = dVar4;
  if (*piVar1 < 0x13) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x1b0) = dVar10;
  *(double *)(pFVar8 + 0x1b8) = dVar3;
  *(double *)(pFVar8 + 0x1c0) = dVar4;
  if (*piVar1 < 0x14) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x1c8) = dVar7;
  *(double *)(pFVar8 + 0x1d0) = dVar3;
  *(double *)(pFVar8 + 0x1d8) = dVar4;
  if (*piVar1 < 0x15) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x1e0) = dVar5;
  *(double *)(pFVar8 + 0x1e8) = dVar14;
  *(double *)(pFVar8 + 0x1f0) = dVar4;
  if (*piVar1 < 0x16) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x1f8) = dVar10;
  *(double *)(pFVar8 + 0x200) = dVar14;
  *(double *)(pFVar8 + 0x208) = dVar4;
  if (*piVar1 < 0x17) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x210) = dVar7;
  *(double *)(pFVar8 + 0x218) = dVar14;
  *(double *)(pFVar8 + 0x220) = dVar4;
  if (*piVar1 < 0x18) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x228) = dVar5;
  *(double *)(pFVar8 + 0x230) = dVar6;
  *(double *)(pFVar8 + 0x238) = dVar4;
  if (*piVar1 < 0x19) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 0x240) = dVar10;
  *(double *)(pFVar8 + 0x248) = dVar6;
  *(double *)(pFVar8 + 0x250) = dVar4;
  if (*piVar1 < 0x1a) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar8 + 600) = dVar7;
  *(double *)(pFVar8 + 0x260) = dVar6;
  *(double *)(pFVar8 + 0x268) = dVar4;
  return __return_storage_ptr__;
}

// ComputeSamplePoints @ 143626780

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TAABB<float,3>::ComputeSamplePoints
          (TAABB<float,3> *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar10 = __real_3f000000;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  fVar13 = *(float *)&(this->MMax).field_0x8;
  fVar2 = *(float *)&(this->MMin).field_0x8;
  fVar14 = *(float *)&(this->MMax).field_0x4;
  fVar15 = *(float *)&(this->MMin).field_0x4;
  fVar3 = *(float *)&this->MMax;
  fVar4 = *(float *)&this->MMin;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  fVar14 = (fVar14 - fVar15) * fVar10 + *(float *)&(this->MMin).field_0x4;
  fVar15 = (fVar3 - fVar4) * fVar10 + *(float *)&this->MMin;
  fVar13 = (fVar13 - fVar2) * fVar10 + *(float *)&(this->MMin).field_0x8;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0x1a,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)pFVar8 = uVar5;
  *(undefined4 *)(pFVar8 + 4) = uVar6;
  *(undefined4 *)(pFVar8 + 8) = uVar7;
  uVar5 = *(undefined4 *)&(this->MMin).field_0x4;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 2) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0xc) = fVar15;
  *(undefined4 *)(pFVar8 + 0x10) = uVar5;
  *(undefined4 *)(pFVar8 + 0x14) = uVar6;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 3) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x18) = uVar5;
  *(undefined4 *)(pFVar8 + 0x1c) = uVar6;
  *(undefined4 *)(pFVar8 + 0x20) = uVar7;
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 4) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x24) = uVar5;
  *(float *)(pFVar8 + 0x28) = fVar14;
  *(undefined4 *)(pFVar8 + 0x2c) = uVar6;
  uVar5 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 5) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0x30) = fVar15;
  *(float *)(pFVar8 + 0x34) = fVar14;
  *(undefined4 *)(pFVar8 + 0x38) = uVar5;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 6) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x3c) = uVar5;
  *(float *)(pFVar8 + 0x40) = fVar14;
  *(undefined4 *)(pFVar8 + 0x44) = uVar6;
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 7) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x48) = uVar5;
  *(undefined4 *)(pFVar8 + 0x4c) = uVar6;
  *(undefined4 *)(pFVar8 + 0x50) = uVar7;
  uVar5 = *(undefined4 *)&(this->MMax).field_0x4;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 8) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0x54) = fVar15;
  *(undefined4 *)(pFVar8 + 0x58) = uVar5;
  *(undefined4 *)(pFVar8 + 0x5c) = uVar6;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMin).field_0x8;
  if (*piVar1 < 9) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x60) = uVar5;
  *(undefined4 *)(pFVar8 + 100) = uVar6;
  *(undefined4 *)(pFVar8 + 0x68) = uVar7;
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x4;
  if (*piVar1 < 10) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x6c) = uVar5;
  *(undefined4 *)(pFVar8 + 0x70) = uVar6;
  *(float *)(pFVar8 + 0x74) = fVar13;
  uVar5 = *(undefined4 *)&(this->MMin).field_0x4;
  if (*piVar1 < 0xb) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0x78) = fVar15;
  *(undefined4 *)(pFVar8 + 0x7c) = uVar5;
  *(float *)(pFVar8 + 0x80) = fVar13;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x4;
  if (*piVar1 < 0xc) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x84) = uVar5;
  *(undefined4 *)(pFVar8 + 0x88) = uVar6;
  *(float *)(pFVar8 + 0x8c) = fVar13;
  uVar5 = *(undefined4 *)&this->MMin;
  if (*piVar1 < 0xd) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x90) = uVar5;
  *(float *)(pFVar8 + 0x94) = fVar14;
  *(float *)(pFVar8 + 0x98) = fVar13;
  uVar5 = *(undefined4 *)&this->MMax;
  if (*piVar1 < 0xe) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x9c) = uVar5;
  *(float *)(pFVar8 + 0xa0) = fVar14;
  *(float *)(pFVar8 + 0xa4) = fVar13;
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x4;
  if (*piVar1 < 0xf) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0xa8) = uVar5;
  *(undefined4 *)(pFVar8 + 0xac) = uVar6;
  *(float *)(pFVar8 + 0xb0) = fVar13;
  uVar5 = *(undefined4 *)&(this->MMax).field_0x4;
  if (*piVar1 < 0x10) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0xb4) = fVar15;
  *(undefined4 *)(pFVar8 + 0xb8) = uVar5;
  *(float *)(pFVar8 + 0xbc) = fVar13;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x4;
  if (*piVar1 < 0x11) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0xc0) = uVar5;
  *(undefined4 *)(pFVar8 + 0xc4) = uVar6;
  *(float *)(pFVar8 + 200) = fVar13;
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x12) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0xcc) = uVar5;
  *(undefined4 *)(pFVar8 + 0xd0) = uVar6;
  *(undefined4 *)(pFVar8 + 0xd4) = uVar7;
  uVar5 = *(undefined4 *)&(this->MMin).field_0x4;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x13) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0xd8) = fVar15;
  *(undefined4 *)(pFVar8 + 0xdc) = uVar5;
  *(undefined4 *)(pFVar8 + 0xe0) = uVar6;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMin).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x14) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0xe4) = uVar5;
  *(undefined4 *)(pFVar8 + 0xe8) = uVar6;
  *(undefined4 *)(pFVar8 + 0xec) = uVar7;
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x15) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0xf0) = uVar5;
  *(float *)(pFVar8 + 0xf4) = fVar14;
  *(undefined4 *)(pFVar8 + 0xf8) = uVar6;
  uVar5 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x16) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0xfc) = fVar15;
  *(float *)(pFVar8 + 0x100) = fVar14;
  *(undefined4 *)(pFVar8 + 0x104) = uVar5;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x17) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x108) = uVar5;
  *(float *)(pFVar8 + 0x10c) = fVar14;
  *(undefined4 *)(pFVar8 + 0x110) = uVar6;
  uVar5 = *(undefined4 *)&this->MMin;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x18) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 0x114) = uVar5;
  *(undefined4 *)(pFVar8 + 0x118) = uVar6;
  *(undefined4 *)(pFVar8 + 0x11c) = uVar7;
  uVar5 = *(undefined4 *)&(this->MMax).field_0x4;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x19) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(float *)(pFVar8 + 0x120) = fVar15;
  *(undefined4 *)(pFVar8 + 0x124) = uVar5;
  *(undefined4 *)(pFVar8 + 0x128) = uVar6;
  uVar5 = *(undefined4 *)&this->MMax;
  uVar6 = *(undefined4 *)&(this->MMax).field_0x4;
  uVar7 = *(undefined4 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x1a) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar12;
    }
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)(pFVar8 + 300) = uVar5;
  *(undefined4 *)(pFVar8 + 0x130) = uVar6;
  *(undefined4 *)(pFVar8 + 0x134) = uVar7;
  return __return_storage_ptr__;
}

// ComputeSamplePoints @ 143627240

TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TAABB<double,3>::ComputeSamplePoints
          (TAABB<double,3> *this,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar15;
  
  dVar13 = __real_3fe0000000000000;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  dVar2 = *(double *)&(this->MMax).field_0x10;
  dVar3 = *(double *)&(this->MMin).field_0x10;
  dVar4 = *(double *)&(this->MMax).field_0x8;
  dVar5 = *(double *)&(this->MMin).field_0x8;
  dVar6 = *(double *)&this->MMax;
  dVar7 = *(double *)&this->MMin;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  dVar6 = (dVar6 - dVar7) * dVar13 + *(double *)&this->MMin;
  dVar4 = (dVar4 - dVar5) * dVar13 + *(double *)&(this->MMin).field_0x8;
  dVar2 = (dVar2 - dVar3) * dVar13 + *(double *)&(this->MMin).field_0x10;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x1a,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)pFVar11 = uVar8;
  *(undefined8 *)(pFVar11 + 8) = uVar9;
  *(undefined8 *)(pFVar11 + 0x10) = uVar10;
  uVar8 = *(undefined8 *)&(this->MMin).field_0x8;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0x18) = dVar6;
  *(undefined8 *)(pFVar11 + 0x20) = uVar8;
  *(undefined8 *)(pFVar11 + 0x28) = uVar9;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 3) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x30) = uVar8;
  *(undefined8 *)(pFVar11 + 0x38) = uVar9;
  *(undefined8 *)(pFVar11 + 0x40) = uVar10;
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 4) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x48) = uVar8;
  *(double *)(pFVar11 + 0x50) = dVar4;
  *(undefined8 *)(pFVar11 + 0x58) = uVar9;
  uVar8 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 5) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0x60) = dVar6;
  *(double *)(pFVar11 + 0x68) = dVar4;
  *(undefined8 *)(pFVar11 + 0x70) = uVar8;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 6) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x78) = uVar8;
  *(double *)(pFVar11 + 0x80) = dVar4;
  *(undefined8 *)(pFVar11 + 0x88) = uVar9;
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 7) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x90) = uVar8;
  *(undefined8 *)(pFVar11 + 0x98) = uVar9;
  *(undefined8 *)(pFVar11 + 0xa0) = uVar10;
  uVar8 = *(undefined8 *)&(this->MMax).field_0x8;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 8) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0xa8) = dVar6;
  *(undefined8 *)(pFVar11 + 0xb0) = uVar8;
  *(undefined8 *)(pFVar11 + 0xb8) = uVar9;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMin).field_0x10;
  if (*piVar1 < 9) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0xc0) = uVar8;
  *(undefined8 *)(pFVar11 + 200) = uVar9;
  *(undefined8 *)(pFVar11 + 0xd0) = uVar10;
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x8;
  if (*piVar1 < 10) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0xd8) = uVar8;
  *(undefined8 *)(pFVar11 + 0xe0) = uVar9;
  *(double *)(pFVar11 + 0xe8) = dVar2;
  uVar8 = *(undefined8 *)&(this->MMin).field_0x8;
  if (*piVar1 < 0xb) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0xf0) = dVar6;
  *(undefined8 *)(pFVar11 + 0xf8) = uVar8;
  *(double *)(pFVar11 + 0x100) = dVar2;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x8;
  if (*piVar1 < 0xc) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x108) = uVar8;
  *(undefined8 *)(pFVar11 + 0x110) = uVar9;
  *(double *)(pFVar11 + 0x118) = dVar2;
  uVar8 = *(undefined8 *)&this->MMin;
  if (*piVar1 < 0xd) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x120) = uVar8;
  *(double *)(pFVar11 + 0x128) = dVar4;
  *(double *)(pFVar11 + 0x130) = dVar2;
  uVar8 = *(undefined8 *)&this->MMax;
  if (*piVar1 < 0xe) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x138) = uVar8;
  *(double *)(pFVar11 + 0x140) = dVar4;
  *(double *)(pFVar11 + 0x148) = dVar2;
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0xf) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x150) = uVar8;
  *(undefined8 *)(pFVar11 + 0x158) = uVar9;
  *(double *)(pFVar11 + 0x160) = dVar2;
  uVar8 = *(undefined8 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x10) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0x168) = dVar6;
  *(undefined8 *)(pFVar11 + 0x170) = uVar8;
  *(double *)(pFVar11 + 0x178) = dVar2;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x8;
  if (*piVar1 < 0x11) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x180) = uVar8;
  *(undefined8 *)(pFVar11 + 0x188) = uVar9;
  *(double *)(pFVar11 + 400) = dVar2;
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x12) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x198) = uVar8;
  *(undefined8 *)(pFVar11 + 0x1a0) = uVar9;
  *(undefined8 *)(pFVar11 + 0x1a8) = uVar10;
  uVar8 = *(undefined8 *)&(this->MMin).field_0x8;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x13) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0x1b0) = dVar6;
  *(undefined8 *)(pFVar11 + 0x1b8) = uVar8;
  *(undefined8 *)(pFVar11 + 0x1c0) = uVar9;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMin).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x14) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x1c8) = uVar8;
  *(undefined8 *)(pFVar11 + 0x1d0) = uVar9;
  *(undefined8 *)(pFVar11 + 0x1d8) = uVar10;
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x15) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x1e0) = uVar8;
  *(double *)(pFVar11 + 0x1e8) = dVar4;
  *(undefined8 *)(pFVar11 + 0x1f0) = uVar9;
  uVar8 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x16) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0x1f8) = dVar6;
  *(double *)(pFVar11 + 0x200) = dVar4;
  *(undefined8 *)(pFVar11 + 0x208) = uVar8;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x17) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x210) = uVar8;
  *(double *)(pFVar11 + 0x218) = dVar4;
  *(undefined8 *)(pFVar11 + 0x220) = uVar9;
  uVar8 = *(undefined8 *)&this->MMin;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x18) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 0x228) = uVar8;
  *(undefined8 *)(pFVar11 + 0x230) = uVar9;
  *(undefined8 *)(pFVar11 + 0x238) = uVar10;
  uVar8 = *(undefined8 *)&(this->MMax).field_0x8;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x19) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(double *)(pFVar11 + 0x240) = dVar6;
  *(undefined8 *)(pFVar11 + 0x248) = uVar8;
  *(undefined8 *)(pFVar11 + 0x250) = uVar9;
  uVar8 = *(undefined8 *)&this->MMax;
  uVar9 = *(undefined8 *)&(this->MMax).field_0x8;
  uVar10 = *(undefined8 *)&(this->MMax).field_0x10;
  if (*piVar1 < 0x1a) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      pTVar15 = (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)(*pcVar12)();
      return pTVar15;
    }
  }
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined8 *)(pFVar11 + 600) = uVar8;
  *(undefined8 *)(pFVar11 + 0x260) = uVar9;
  *(undefined8 *)(pFVar11 + 0x268) = uVar10;
  return __return_storage_ptr__;
}

// Contains @ 143627d80

bool __thiscall Chaos::TAABB<float,3>::Contains(TAABB<float,3> *this,TAABB<float,3> *param_1)

{
  float *pfVar1;
  float fVar2;
  TVector<float,3> *pTVar3;
  longlong lVar4;
  TAABB<float,3> *pTVar5;
  longlong lVar6;
  
  lVar4 = 0;
  pTVar5 = param_1;
  lVar6 = lVar4;
  while( true ) {
    fVar2 = *(float *)&pTVar5->MMin;
    if (fVar2 < *(float *)((longlong)pTVar5 + ((longlong)this - (longlong)param_1))) {
      return false;
    }
    pfVar1 = (float *)((longlong)pTVar5 + (0xc - (longlong)param_1) + (longlong)this);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) break;
    lVar6 = lVar6 + 1;
    pTVar5 = (TAABB<float,3> *)&(pTVar5->MMin).field_0x4;
    if (2 < lVar6) {
      pTVar3 = &param_1->MMax;
      lVar6 = (longlong)this + (0xc - (longlong)pTVar3);
      while ((fVar2 = *(float *)pTVar3, *(float *)(lVar6 + -0xc + (longlong)pTVar3) <= fVar2 &&
             (pfVar1 = (float *)(lVar6 + (longlong)pTVar3), fVar2 < *pfVar1 || fVar2 == *pfVar1))) {
        lVar4 = lVar4 + 1;
        pTVar3 = (TVector<float,3> *)&pTVar3->field_0x4;
        if (2 < lVar4) {
          return true;
        }
      }
      return false;
    }
  }
  return false;
}

// Contains @ 143627df0

bool __thiscall Chaos::TAABB<float,3>::Contains(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float *pfVar1;
  float fVar2;
  TVector<float,3> *pTVar3;
  longlong lVar4;
  
  lVar4 = 0;
  pTVar3 = param_1;
  while ((fVar2 = *(float *)pTVar3,
         *(float *)((longlong)pTVar3 + ((longlong)this - (longlong)param_1)) <= fVar2 &&
         (pfVar1 = (float *)((longlong)this + (0xc - (longlong)param_1) + (longlong)pTVar3),
         fVar2 < *pfVar1 || fVar2 == *pfVar1))) {
    lVar4 = lVar4 + 1;
    pTVar3 = (TVector<float,3> *)&pTVar3->field_0x4;
    if (2 < lVar4) {
      return true;
    }
  }
  return false;
}

// Contains @ 143627e40

bool __thiscall
Chaos::TAABB<float,3>::Contains(TAABB<float,3> *this,TVector<float,3> *param_1,float param_2)

{
  TVector<float,3> *pTVar1;
  longlong lVar2;
  
  lVar2 = 0;
  pTVar1 = param_1;
  while ((*(float *)((longlong)pTVar1 + ((longlong)this - (longlong)param_1)) - param_2 <=
          *(float *)pTVar1 &&
         (*(float *)pTVar1 <=
          param_2 + *(float *)((longlong)this + (0xc - (longlong)param_1) + (longlong)pTVar1)))) {
    lVar2 = lVar2 + 1;
    pTVar1 = (TVector<float,3> *)&pTVar1->field_0x4;
    if (2 < lVar2) {
      return true;
    }
  }
  return false;
}

// Contains @ 143627ea0

bool __thiscall Chaos::TAABB<double,3>::Contains(TAABB<double,3> *this,TAABB<double,3> *param_1)

{
  double *pdVar1;
  double dVar2;
  TVector<double,3> *pTVar3;
  longlong lVar4;
  TAABB<double,3> *pTVar5;
  longlong lVar6;
  
  lVar4 = 0;
  pTVar5 = param_1;
  lVar6 = lVar4;
  while( true ) {
    dVar2 = *(double *)&pTVar5->MMin;
    if (dVar2 < *(double *)((longlong)pTVar5 + ((longlong)this - (longlong)param_1))) {
      return false;
    }
    pdVar1 = (double *)((longlong)pTVar5 + (0x18 - (longlong)param_1) + (longlong)this);
    if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) break;
    lVar6 = lVar6 + 1;
    pTVar5 = (TAABB<double,3> *)&(pTVar5->MMin).field_0x8;
    if (2 < lVar6) {
      pTVar3 = &param_1->MMax;
      lVar6 = (longlong)this + (0x18 - (longlong)pTVar3);
      while ((dVar2 = *(double *)pTVar3, *(double *)(lVar6 + -0x18 + (longlong)pTVar3) <= dVar2 &&
             (pdVar1 = (double *)(lVar6 + (longlong)pTVar3), dVar2 < *pdVar1 || dVar2 == *pdVar1)))
      {
        lVar4 = lVar4 + 1;
        pTVar3 = (TVector<double,3> *)&pTVar3->field_0x8;
        if (2 < lVar4) {
          return true;
        }
      }
      return false;
    }
  }
  return false;
}

// Contains @ 143627f10

bool __thiscall Chaos::TAABB<double,3>::Contains(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double *pdVar1;
  double dVar2;
  TVector<double,3> *pTVar3;
  longlong lVar4;
  
  lVar4 = 0;
  pTVar3 = param_1;
  while ((dVar2 = *(double *)pTVar3,
         *(double *)((longlong)pTVar3 + ((longlong)this - (longlong)param_1)) <= dVar2 &&
         (pdVar1 = (double *)((longlong)this + (0x18 - (longlong)param_1) + (longlong)pTVar3),
         dVar2 < *pdVar1 || dVar2 == *pdVar1))) {
    lVar4 = lVar4 + 1;
    pTVar3 = (TVector<double,3> *)&pTVar3->field_0x8;
    if (2 < lVar4) {
      return true;
    }
  }
  return false;
}

// Contains @ 143627f60

bool __thiscall
Chaos::TAABB<double,3>::Contains(TAABB<double,3> *this,TVector<double,3> *param_1,double param_2)

{
  TVector<double,3> *pTVar1;
  longlong lVar2;
  
  lVar2 = 0;
  pTVar1 = param_1;
  while ((*(double *)((longlong)pTVar1 + ((longlong)this - (longlong)param_1)) - param_2 <=
          *(double *)pTVar1 &&
         (*(double *)pTVar1 <=
          param_2 + *(double *)((longlong)this + (0x18 - (longlong)param_1) + (longlong)pTVar1)))) {
    lVar2 = lVar2 + 1;
    pTVar1 = (TVector<double,3> *)&pTVar1->field_0x8;
    if (2 < lVar2) {
      return true;
    }
  }
  return false;
}

// EmptyAABB @ 143627fc0

TAABB<float,3> * __cdecl Chaos::TAABB<float,3>::EmptyAABB(TAABB<float,3> *__return_storage_ptr__)

{
  *(undefined4 *)&__return_storage_ptr__->MMin = 0x7f7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = 0x7f7fffff;
  *(undefined4 *)&__return_storage_ptr__->MMax = 0xff7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x4 = 0xff7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = 0xff7fffff;
  return __return_storage_ptr__;
}

// EmptyAABB @ 143628000

TAABB<double,3> * __cdecl Chaos::TAABB<double,3>::EmptyAABB(TAABB<double,3> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&__return_storage_ptr__->MMax = 0xffefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = 0xffefffffffffffff;
  return __return_storage_ptr__;
}

// Extents @ 143628040

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::Extents(TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)&(this->MMax).field_0x4;
  fVar2 = *(float *)&(this->MMin).field_0x4;
  *(float *)__return_storage_ptr__ = *(float *)&this->MMax - *(float *)&this->MMin;
  fVar3 = *(float *)&(this->MMax).field_0x8;
  fVar4 = *(float *)&(this->MMin).field_0x8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar1 - fVar2;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar3 - fVar4;
  return __return_storage_ptr__;
}

// Extents @ 143628080

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::Extents(TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)&(this->MMax).field_0x8;
  dVar2 = *(double *)&(this->MMin).field_0x8;
  *(double *)__return_storage_ptr__ = *(double *)&this->MMax - *(double *)&this->MMin;
  dVar3 = *(double *)&(this->MMax).field_0x10;
  dVar4 = *(double *)&(this->MMin).field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar1 - dVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar3 - dVar4;
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 1436283f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TAABB<float,3>::FindClosestIntersectionImp
          (TAABB<float,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  Pair<Chaos::TVector<double,3>,bool> *pPVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  Pair<double,Chaos::TVector<double,3>_> *pPVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 local_298;
  FIdentityFunctor local_297 [7];
  ForAnyElementType local_290;
  int local_288;
  int iStack_284;
  undefined1 local_280 [32];
  undefined1 local_260 [16];
  double local_250;
  bool bStack_248;
  undefined1 local_240 [16];
  double dStack_230;
  double dStack_228;
  double local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double local_1f0 [9];
  undefined1 local_1a8 [16];
  double local_198;
  TVector<double,3> local_190;
  double local_170;
  undefined8 uStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  double local_f0;
  Pair<Chaos::TVector<double,3>,bool> local_e8 [6];
  
  uVar8 = _UNK_150689518;
  dVar22 = ___xmm_00000000000000003ff0000000000000;
  uVar7 = _UNK_15061cbc8;
  dVar19 = ___xmm_3ff00000000000000000000000000000;
  uVar3 = __real_3ff0000000000000;
  iVar13 = 0;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  iStack_284 = 0;
  local_170 = ___xmm_00000000000000003ff0000000000000;
  uStack_168 = _UNK_150689518;
  do {
    if (iVar13 == 0) {
      local_150 = 0;
      pdVar11 = &local_160;
      local_160 = dVar22;
      uStack_158 = uVar8;
    }
    else {
      if (iVar13 == 1) {
        local_210 = 0;
        local_220 = dVar19;
        uStack_218 = uVar7;
      }
      else {
        local_210 = uVar3;
        local_220 = 0.0;
        uStack_218 = 0;
      }
      pdVar11 = &local_220;
    }
    local_100 = *(uint *)pdVar11;
    uStack_fc = *(uint *)((longlong)pdVar11 + 4);
    uStack_f8 = *(uint *)(pdVar11 + 1);
    uStack_f4 = *(uint *)((longlong)pdVar11 + 0xc);
    local_f0 = pdVar11[2];
    local_1a8._0_8_ = (double)*(float *)&this->MMin - param_3;
    local_1a8._8_8_ = (double)*(float *)&(this->MMin).field_0x4 - param_3;
    local_198 = (double)*(float *)&(this->MMin).field_0x8 - param_3;
    local_190._20_4_ =
         (uint)((ulonglong)local_f0 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_190._16_4_ = SUB84(local_f0,0) ^ (uint)__xmm_80000000000000008000000000000000;
    local_190._0_4_ = local_100 ^ (uint)__xmm_80000000000000008000000000000000;
    local_190._4_4_ = uStack_fc ^ __xmm_80000000000000008000000000000000._4_4_;
    local_190._12_4_ = uStack_f4 ^ __xmm_80000000000000008000000000000000._4_4_;
    local_190._8_4_ = uStack_f8 ^ (uint)__xmm_80000000000000008000000000000000;
    TCorePlane<double,3>::FindClosestIntersection
              ((TCorePlane<double,3> *)local_1a8,(Pair<Chaos::TVector<double,3>,bool> *)local_260,
               param_1,param_2,0.0);
    if (bStack_248 != false) {
      local_280._16_4_ = (undefined4)local_260._8_8_;
      local_280._20_4_ = SUB84(local_260._8_8_,4);
      local_280._24_8_ = local_250;
      dVar18 = (double)local_260._8_8_ - *(double *)&param_1->field_0x8;
      dVar5 = local_250 - *(double *)&param_1->field_0x10;
      auVar20._0_8_ = dVar18 * dVar18;
      auVar20._8_8_ = 0;
      auVar21._8_8_ = 0;
      auVar21._0_8_ =
           ((double)local_260._0_8_ - *(double *)param_1) *
           ((double)local_260._0_8_ - *(double *)param_1) + auVar20._0_8_ + dVar5 * dVar5;
      auVar21 = sqrtpd(auVar20,auVar21);
      local_280._0_8_ = auVar21._0_8_;
      local_280._8_4_ = local_260._0_4_;
      local_280._12_4_ = local_260._4_4_;
      if (((local_290.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_280) &&
          ((FScriptContainerElement *)local_280 < local_290.Data + (longlong)iStack_284 * 0x20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        pPVar10 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
        return pPVar10;
      }
      if (local_288 == iStack_284) {
        local_288 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_290,&iStack_284);
      }
      *(undefined8 *)&local_290.Data[(longlong)local_288 * 0x20].field_0x0 = local_280._0_8_;
      *(ulonglong *)(local_290.Data + (longlong)local_288 * 0x20 + 8) =
           CONCAT44(local_280._12_4_,local_280._8_4_);
      *(ulonglong *)(local_290.Data + (longlong)local_288 * 0x20 + 0x10) =
           CONCAT44(local_280._20_4_,local_280._16_4_);
      *(undefined8 *)(local_290.Data + (longlong)local_288 * 0x20 + 0x10 + 8) = local_280._24_8_;
      local_288 = local_288 + 1;
    }
    if (iVar13 == 0) {
      local_138 = 0;
      pdVar11 = &local_148;
      local_148 = dVar22;
      uStack_140 = uVar8;
    }
    else {
      if (iVar13 == 1) {
        local_1f8 = 0;
        local_208 = dVar19;
        uStack_200 = uVar7;
      }
      else {
        local_1f8 = uVar3;
        local_208 = 0.0;
        uStack_200 = 0;
      }
      pdVar11 = &local_208;
    }
    local_130 = (double)*(float *)&this->MMax + param_3;
    local_128 = (double)*(float *)&(this->MMax).field_0x4 + param_3;
    local_108 = pdVar11[2];
    local_120 = (double)*(float *)&(this->MMax).field_0x8 + param_3;
    local_118 = *pdVar11;
    dStack_110 = pdVar11[1];
    pPVar10 = TCorePlane<double,3>::FindClosestIntersection
                        ((TCorePlane<double,3> *)&local_130,local_e8,param_1,param_2,0.0);
    local_260._0_8_ = *(undefined8 *)&pPVar10->First;
    local_260._8_8_ = *(undefined8 *)&(pPVar10->First).field_0x8;
    local_250 = *(double *)&(pPVar10->First).field_0x10;
    bStack_248 = pPVar10->Second;
    unique0x10000e74 = *(undefined7 *)&pPVar10->field_0x19;
    if ((char)*(undefined4 *)&pPVar10->Second != '\0') {
      dVar5 = (double)local_260._8_8_ - *(double *)&param_1->field_0x8;
      dVar18 = local_250 - *(double *)&param_1->field_0x10;
      local_240._0_8_ =
           SQRT(((double)local_260._0_8_ - *(double *)param_1) *
                ((double)local_260._0_8_ - *(double *)param_1) + dVar5 * dVar5 + dVar18 * dVar18);
      local_240._8_8_ = local_260._0_8_;
      dStack_230 = (double)local_260._8_8_;
      dStack_228 = local_250;
      if (((local_290.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_240) &&
          ((FScriptContainerElement *)local_240 < local_290.Data + (longlong)iStack_284 * 0x20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        pPVar10 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar4)();
        return pPVar10;
      }
      if (local_288 == iStack_284) {
        local_288 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_290,&iStack_284);
      }
      *(undefined8 *)&local_290.Data[(longlong)local_288 * 0x20].field_0x0 = local_240._0_8_;
      *(undefined8 *)(local_290.Data + (longlong)local_288 * 0x20 + 8) = local_240._8_8_;
      *(double *)(local_290.Data + (longlong)local_288 * 0x20 + 0x10) = dStack_230;
      *(double *)(local_290.Data + (longlong)local_288 * 0x20 + 0x10 + 8) = dStack_228;
      local_288 = local_288 + 1;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 3);
  AlgoImpl::
  IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<float,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
            ((Pair<double,Chaos::TVector<double,3>_> *)local_290.Data,local_288,local_297[0],
             (<lambda_1> *)local_297);
  iVar13 = local_288;
  pFVar16 = local_290.Data + 0x18;
  pPVar15 = (Pair<double,Chaos::TVector<double,3>_> *)(local_290.Data + (longlong)local_288 * 0x20);
  lVar17 = 0;
  FVar14.Data = local_290.Data;
  while( true ) {
    if (local_288 != iVar13) {
      `TCheckedPointerIterator<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_298);
    }
    if ((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data == pPVar15) {
      *(undefined8 *)&__return_storage_ptr__->First = 0;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
      __return_storage_ptr__->Second = false;
      goto LAB_143628b53;
    }
    dVar19 = *(double *)(pFVar16 + -0x10);
    dVar22 = *(double *)pFVar16;
    dVar5 = *(double *)(pFVar16 + -8);
    fVar1 = *(float *)&(this->MMin).field_0x4;
    fVar2 = *(float *)&(this->MMin).field_0x8;
    local_1f0[2] = dVar22 - (double)*(float *)&(this->MMax).field_0x8;
    auVar23._0_8_ = dVar19 - (double)*(float *)&this->MMax;
    auVar23._8_8_ = 0;
    local_1f0[1] = dVar5 - (double)*(float *)&(this->MMax).field_0x4;
    local_1f0[0] = auVar23._0_8_;
    local_1f0[3] = (double)(*(float *)&this->MMin - (float)dVar19);
    local_1f0[4] = (double)(fVar1 - (float)dVar5);
    local_1f0[5] = (double)(fVar2 - (float)dVar22);
    lVar12 = lVar17;
    if ((((double)*(float *)&this->MMax < dVar19) ||
        ((double)*(float *)&(this->MMax).field_0x4 < dVar5)) ||
       (((double)*(float *)&(this->MMax).field_0x8 < dVar22 ||
        (((dVar19 < (double)*(float *)&this->MMin || (dVar5 < (double)fVar1)) ||
         (dVar22 < (double)fVar2)))))) {
      do {
        dVar19 = *(double *)((longlong)local_1f0 + lVar12);
        if (dVar19 <= 0.0) {
          dVar19 = *(double *)((longlong)local_1f0 + lVar12 + 0x18);
          if (dVar19 <= 0.0) {
            dVar19 = 0.0;
          }
          else {
            dVar19 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar19,0) ^ (uint)__xmm_80000000000000008000000000000000
                                     );
          }
        }
        *(double *)((longlong)local_1f0 + lVar12 + 0x30) = dVar19;
        lVar12 = lVar12 + 8;
      } while (lVar12 < 0x18);
      dVar19 = local_1f0[6] * local_1f0[6] + local_1f0[7] * local_1f0[7] +
               local_1f0[8] * local_1f0[8];
      if (__real_3f1a36e2e0000000 <= dVar19) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar19;
        auVar21 = sqrtpd(auVar23,auVar6);
        dVar19 = auVar21._0_8_;
      }
      else {
        dVar19 = 0.0;
      }
    }
    else {
      dVar19 = local_1f0[1];
      if (local_1f0[1] <= local_1f0[4]) {
        dVar19 = local_1f0[4];
      }
      dVar22 = auVar23._0_8_;
      if (auVar23._0_8_ <= local_1f0[3]) {
        dVar22 = local_1f0[3];
      }
      dVar5 = local_1f0[2];
      if (local_1f0[2] <= local_1f0[5]) {
        dVar5 = local_1f0[5];
      }
      if (dVar19 < dVar22) {
        dVar19 = dVar22;
      }
      if (dVar19 <= dVar5) {
        dVar19 = dVar5;
      }
    }
    if (dVar19 < param_3 + __real_3f1a36e2eb1c432d) break;
    FVar14.Data = FVar14.Data + 0x20;
    pFVar16 = pFVar16 + 0x20;
  }
  uVar7 = *(undefined8 *)&((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data)->Second;
  uVar8 = *(undefined8 *)
           &(((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data)->Second).field_0x8;
  __return_storage_ptr__->Second = true;
  uVar3 = *(undefined8 *)
           &(((Pair<double,Chaos::TVector<double,3>_> *)FVar14.Data)->Second).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->First = uVar7;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = uVar8;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = uVar3;
LAB_143628b53:
  if ((Pair<double,Chaos::TVector<double,3>_> *)local_290.Data !=
      (Pair<double,Chaos::TVector<double,3>_> *)0x0) {
    FMemory::Free(local_290.Data);
  }
  return __return_storage_ptr__;
}

// FindClosestIntersectionImp @ 143628be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TAABB<double,3>::FindClosestIntersectionImp
          (TAABB<double,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  Pair<Chaos::TVector<double,3>,bool> *pPVar8;
  double *pdVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType FVar12;
  Pair<double,Chaos::TVector<double,3>_> *pPVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar21;
  undefined1 auVar20 [16];
  undefined1 local_2b8;
  FIdentityFunctor local_2b7 [7];
  ForAnyElementType local_2b0;
  int local_2a8;
  int iStack_2a4;
  undefined1 local_2a0 [32];
  undefined1 local_280 [16];
  double local_270;
  bool bStack_268;
  undefined1 local_260 [16];
  double dStack_250;
  double dStack_248;
  double local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  double local_210;
  undefined8 uStack_208;
  double local_200;
  double local_1f8 [9];
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  TVector<double,3> local_180;
  double local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_f8;
  Pair<Chaos::TVector<double,3>,bool> local_f0 [6];
  
  uVar5 = _UNK_150689518;
  dVar16 = ___xmm_00000000000000003ff0000000000000;
  uVar4 = _UNK_15061cbc8;
  dVar6 = ___xmm_3ff00000000000000000000000000000;
  uVar1 = __real_3ff0000000000000;
  iVar11 = 0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = 0;
  iStack_2a4 = 0;
  local_160 = ___xmm_00000000000000003ff0000000000000;
  uStack_158 = _UNK_150689518;
  do {
    if (iVar11 == 0) {
      local_140 = 0;
      pdVar9 = &local_150;
      local_150 = dVar16;
      uStack_148 = uVar5;
    }
    else {
      if (iVar11 == 1) {
        local_230 = 0;
        local_240 = dVar6;
        uStack_238 = uVar4;
      }
      else {
        local_230 = uVar1;
        local_240 = 0.0;
        uStack_238 = 0;
      }
      pdVar9 = &local_240;
    }
    local_1b0 = *(uint *)pdVar9;
    uStack_1ac = *(uint *)((longlong)pdVar9 + 4);
    uStack_1a8 = *(uint *)(pdVar9 + 1);
    uStack_1a4 = *(uint *)((longlong)pdVar9 + 0xc);
    local_f8 = *(double *)&(this->MMin).field_0x10;
    local_1a0 = pdVar9[2];
    local_198 = *(double *)&this->MMin - param_3;
    local_190 = *(double *)&(this->MMin).field_0x8 - param_3;
    local_188 = local_f8 - param_3;
    uVar19 = (uint)__xmm_80000000000000008000000000000000;
    uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_180._20_4_ = (uint)((ulonglong)local_1a0 >> 0x20) ^ uVar21;
    local_180._16_4_ = SUB84(local_1a0,0) ^ uVar19;
    local_180._0_4_ = local_1b0 ^ uVar19;
    local_180._4_4_ = uStack_1ac ^ uVar21;
    local_180._12_4_ = uStack_1a4 ^ uVar21;
    local_180._8_4_ = uStack_1a8 ^ uVar19;
    TCorePlane<double,3>::FindClosestIntersection
              ((TCorePlane<double,3> *)&local_198,(Pair<Chaos::TVector<double,3>,bool> *)local_280,
               param_1,param_2,0.0);
    if (bStack_268 != false) {
      local_2a0._16_4_ = (undefined4)local_280._8_8_;
      local_2a0._20_4_ = SUB84(local_280._8_8_,4);
      local_2a0._24_8_ = local_270;
      dVar15 = (double)local_280._8_8_ - *(double *)&param_1->field_0x8;
      dVar3 = local_270 - *(double *)&param_1->field_0x10;
      auVar17._0_8_ = dVar15 * dVar15;
      auVar17._8_8_ = 0;
      auVar18._8_8_ = 0;
      auVar18._0_8_ =
           ((double)local_280._0_8_ - *(double *)param_1) *
           ((double)local_280._0_8_ - *(double *)param_1) + auVar17._0_8_ + dVar3 * dVar3;
      auVar18 = sqrtpd(auVar17,auVar18);
      local_2a0._0_8_ = auVar18._0_8_;
      local_2a0._8_4_ = local_280._0_4_;
      local_2a0._12_4_ = local_280._4_4_;
      if (((local_2b0.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_2a0) &&
          ((FScriptContainerElement *)local_2a0 < local_2b0.Data + (longlong)iStack_2a4 * 0x20)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        pPVar8 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar2)();
        return pPVar8;
      }
      if (local_2a8 == iStack_2a4) {
        local_2a8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_2b0,&iStack_2a4);
      }
      *(undefined8 *)&local_2b0.Data[(longlong)local_2a8 * 0x20].field_0x0 = local_2a0._0_8_;
      *(ulonglong *)(local_2b0.Data + (longlong)local_2a8 * 0x20 + 8) =
           CONCAT44(local_2a0._12_4_,local_2a0._8_4_);
      *(ulonglong *)(local_2b0.Data + (longlong)local_2a8 * 0x20 + 0x10) =
           CONCAT44(local_2a0._20_4_,local_2a0._16_4_);
      *(undefined8 *)(local_2b0.Data + (longlong)local_2a8 * 0x20 + 0x10 + 8) = local_2a0._24_8_;
      local_2a8 = local_2a8 + 1;
    }
    if (iVar11 == 0) {
      local_200 = 0.0;
      pdVar9 = &local_210;
      local_210 = dVar16;
      uStack_208 = uVar5;
    }
    else {
      if (iVar11 == 1) {
        local_218 = 0;
        local_228 = dVar6;
        uStack_220 = uVar4;
      }
      else {
        local_218 = uVar1;
        local_228 = 0.0;
        uStack_220 = 0;
      }
      pdVar9 = &local_228;
    }
    local_f8 = *(double *)&(this->MMax).field_0x10;
    local_138 = *(double *)&this->MMax + param_3;
    local_130 = *(double *)&(this->MMax).field_0x8 + param_3;
    local_128 = local_f8 + param_3;
    local_120 = *pdVar9;
    dStack_118 = pdVar9[1];
    local_110 = pdVar9[2];
    pPVar8 = TCorePlane<double,3>::FindClosestIntersection
                       ((TCorePlane<double,3> *)&local_138,local_f0,param_1,param_2,0.0);
    local_280._0_8_ = *(undefined8 *)&pPVar8->First;
    local_280._8_8_ = *(undefined8 *)&(pPVar8->First).field_0x8;
    local_270 = *(double *)&(pPVar8->First).field_0x10;
    bStack_268 = pPVar8->Second;
    unique0x10000bf0 = *(undefined7 *)&pPVar8->field_0x19;
    if ((char)*(undefined4 *)&pPVar8->Second != '\0') {
      dVar3 = (double)local_280._8_8_ - *(double *)&param_1->field_0x8;
      dVar15 = local_270 - *(double *)&param_1->field_0x10;
      local_260._0_8_ =
           SQRT(((double)local_280._0_8_ - *(double *)param_1) *
                ((double)local_280._0_8_ - *(double *)param_1) + dVar3 * dVar3 + dVar15 * dVar15);
      local_260._8_8_ = local_280._0_8_;
      dStack_250 = (double)local_280._8_8_;
      dStack_248 = local_270;
      if (((local_2b0.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_260) &&
          ((FScriptContainerElement *)local_260 < local_2b0.Data + (longlong)iStack_2a4 * 0x20)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        pPVar8 = (Pair<Chaos::TVector<double,3>,bool> *)(*pcVar2)();
        return pPVar8;
      }
      if (local_2a8 == iStack_2a4) {
        local_2a8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_2b0,&iStack_2a4);
      }
      *(undefined8 *)&local_2b0.Data[(longlong)local_2a8 * 0x20].field_0x0 = local_260._0_8_;
      *(undefined8 *)(local_2b0.Data + (longlong)local_2a8 * 0x20 + 8) = local_260._8_8_;
      *(double *)(local_2b0.Data + (longlong)local_2a8 * 0x20 + 0x10) = dStack_250;
      *(double *)(local_2b0.Data + (longlong)local_2a8 * 0x20 + 0x10 + 8) = dStack_248;
      local_2a8 = local_2a8 + 1;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  AlgoImpl::
  IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
            ((Pair<double,Chaos::TVector<double,3>_> *)local_2b0.Data,local_2a8,local_2b7[0],
             (<lambda_1> *)local_2b7);
  iVar11 = local_2a8;
  dVar6 = __real_3f1a36e2e0000000;
  pFVar14 = local_2b0.Data + 0x18;
  pPVar13 = (Pair<double,Chaos::TVector<double,3>_> *)(local_2b0.Data + (longlong)local_2a8 * 0x20);
  FVar12.Data = local_2b0.Data;
  while( true ) {
    if (local_2a8 != iVar11) {
      `TCheckedPointerIterator<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_2b8);
    }
    if ((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data == pPVar13) {
      *(undefined8 *)&__return_storage_ptr__->First = 0;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
      __return_storage_ptr__->Second = false;
      goto LAB_143629305;
    }
    dVar16 = *(double *)(pFVar14 + -0x10);
    dVar3 = *(double *)pFVar14;
    dVar15 = *(double *)(pFVar14 + -8);
    local_200 = *(double *)&(this->MMin).field_0x10;
    local_1f8[5] = *(double *)&(this->MMin).field_0x10 - dVar3;
    local_1f8[4] = *(double *)&(this->MMin).field_0x8 - dVar15;
    local_1f8[2] = dVar3 - *(double *)&(this->MMax).field_0x10;
    local_1f8[1] = dVar15 - *(double *)&(this->MMax).field_0x8;
    local_1f8[0] = dVar16 - *(double *)&this->MMax;
    local_1f8[3] = *(double *)&this->MMin - dVar16;
    local_1a0 = *(double *)&(this->MMax).field_0x10;
    if (((*(double *)&this->MMax < dVar16) || (*(double *)&(this->MMax).field_0x8 < dVar15)) ||
       ((local_1a0 < dVar3 ||
        (((dVar16 < *(double *)&this->MMin || (dVar15 < *(double *)&(this->MMin).field_0x8)) ||
         (dVar3 < local_200)))))) {
      lVar10 = 0;
      do {
        dVar16 = *(double *)((longlong)local_1f8 + lVar10);
        if (dVar16 <= 0.0) {
          dVar16 = *(double *)((longlong)local_1f8 + lVar10 + 0x18);
          if (dVar16 <= 0.0) {
            dVar16 = 0.0;
          }
          else {
            dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^
                                      (uint)((ulonglong)__xmm_80000000000000008000000000000000 >>
                                            0x20),
                                      SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000
                                     );
          }
        }
        *(double *)((longlong)local_1f8 + lVar10 + 0x30) = dVar16;
        lVar10 = lVar10 + 8;
      } while (lVar10 < 0x18);
      auVar20._0_8_ =
           local_1f8[6] * local_1f8[6] + local_1f8[7] * local_1f8[7] + local_1f8[8] * local_1f8[8];
      auVar20._8_8_ = 0;
      if (dVar6 <= auVar20._0_8_) {
        auVar18 = sqrtpd(auVar20,auVar20);
        dVar16 = auVar18._0_8_;
      }
      else {
        dVar16 = 0.0;
      }
    }
    else {
      dVar16 = local_1f8[4];
      if (local_1f8[4] <= local_1f8[1]) {
        dVar16 = local_1f8[1];
      }
      dVar3 = local_1f8[0];
      if (local_1f8[0] <= local_1f8[3]) {
        dVar3 = local_1f8[3];
      }
      dVar15 = local_1f8[5];
      if (local_1f8[5] <= local_1f8[2]) {
        dVar15 = local_1f8[2];
      }
      if (dVar16 < dVar3) {
        dVar16 = dVar3;
      }
      if (dVar16 <= dVar15) {
        dVar16 = dVar15;
      }
    }
    if (dVar16 < param_3 + __real_3f1a36e2eb1c432d) break;
    FVar12.Data = FVar12.Data + 0x20;
    pFVar14 = pFVar14 + 0x20;
  }
  uVar4 = *(undefined8 *)&((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data)->Second;
  uVar5 = *(undefined8 *)
           &(((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data)->Second).field_0x8;
  __return_storage_ptr__->Second = true;
  uVar1 = *(undefined8 *)
           &(((Pair<double,Chaos::TVector<double,3>_> *)FVar12.Data)->Second).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->First = uVar4;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = uVar5;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = uVar1;
LAB_143629305:
  if ((Pair<double,Chaos::TVector<double,3>_> *)local_2b0.Data !=
      (Pair<double,Chaos::TVector<double,3>_> *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  return __return_storage_ptr__;
}

// FindClosestPoint @ 143629390

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::FindClosestPoint
          (TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__,TVector<float,3> *param_1,
          float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  TVector<float,3> *pTVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  FIdentityFunctor local_res10 [8];
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  Pair<float,Chaos::TVector<float,3>_> local_108;
  Pair<float,Chaos::TVector<float,3>_> local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  uint local_a4;
  undefined8 local_94;
  float local_8c;
  float fVar5;
  
  iVar20 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  fVar26 = *(float *)param_1;
  fVar29 = *(float *)&this->MMin;
  fVar30 = fVar26;
  if (fVar26 < fVar29) {
    fVar30 = fVar29;
  }
  fVar2 = *(float *)&this->MMax;
  fVar21 = fVar30;
  if (fVar2 < fVar30) {
    fVar21 = fVar2;
  }
  *(float *)__return_storage_ptr__ = fVar21;
  fVar21 = *(float *)&param_1->field_0x4;
  fVar3 = *(float *)&(this->MMin).field_0x4;
  fVar5 = fVar21;
  if (fVar21 < fVar3) {
    fVar5 = fVar3;
  }
  fVar4 = *(float *)&(this->MMax).field_0x4;
  fVar22 = fVar5;
  if (fVar4 < fVar5) {
    fVar22 = fVar4;
  }
  *(float *)&__return_storage_ptr__->field_0x4 = fVar22;
  fVar22 = *(float *)&param_1->field_0x8;
  fVar6 = *(float *)&(this->MMin).field_0x8;
  fVar25 = fVar22;
  if (fVar22 < fVar6) {
    fVar25 = fVar6;
  }
  fVar7 = *(float *)&(this->MMax).field_0x8;
  if (fVar25 <= fVar7) {
    *(float *)&__return_storage_ptr__->field_0x8 = fVar25;
    uVar13 = __xmm_80000000800000008000000080000000;
    if (fVar22 >= fVar6 &&
        (fVar5 <= fVar4 && (fVar21 >= fVar3 && (fVar30 <= fVar2 && fVar29 <= fVar26)))) {
      lVar19 = 0x10;
      local_148.Data = (FScriptContainerElement *)0x0;
      local_140 = 0;
      local_13c = 0;
      do {
        if (iVar20 == 0) {
          local_e8 = 0x3f800000;
          puVar18 = &local_e8;
          local_e0 = 0;
        }
        else {
          if (iVar20 == 1) {
            local_138._0_4_ = 0;
            local_138._4_4_ = 0x3f800000;
            uStack_130 = 0;
          }
          else {
            local_138._0_4_ = 0;
            local_138._4_4_ = 0;
            uStack_130 = 0x3f800000;
          }
          local_138._0_4_ = 0;
          puVar18 = &local_138;
        }
        local_b8 = *puVar18;
        local_b0 = *(uint *)(puVar18 + 1);
        fVar30 = (float)((uint)local_b8 ^ uVar13);
        fVar29 = (float)((uint)((ulonglong)local_b8 >> 0x20) ^ uVar13);
        dVar28 = (double)*(float *)&__return_storage_ptr__->field_0x4;
        dVar12 = (double)*(float *)__return_storage_ptr__;
        dVar27 = (double)*(float *)&__return_storage_ptr__->field_0x8;
        fVar26 = (float)((dVar28 - (double)(*(float *)&(this->MMin).field_0x4 - param_2)) *
                         (double)fVar29 +
                         (dVar12 - (double)(*(float *)&this->MMin - param_2)) * (double)fVar30 +
                        (dVar27 - (double)(*(float *)&(this->MMin).field_0x8 - param_2)) *
                        (double)(float)(local_b0 ^ uVar13));
        auVar23._0_8_ = (double)(fVar30 * fVar26);
        auVar23._8_8_ = 0;
        if (iVar20 == 0) {
          local_dc = 0x3f800000;
          puVar18 = &local_dc;
          local_d4 = 0;
        }
        else {
          if (iVar20 == 1) {
            local_12c = 0;
            uStack_128 = 0x3f800000;
            uStack_124 = 0;
          }
          else {
            local_12c = 0;
            uStack_128 = 0;
            uStack_124 = 0x3f800000;
          }
          local_12c = 0;
          puVar18 = (undefined8 *)&local_12c;
        }
        local_ac = *puVar18;
        dVar12 = (dVar12 - auVar23._0_8_) - dVar12;
        local_a4 = *(uint *)(puVar18 + 1);
        dVar28 = (dVar28 - (double)(fVar29 * fVar26)) - dVar28;
        dVar27 = (dVar27 - (double)((float)(local_b0 ^ uVar13) * fVar26)) - dVar27;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = dVar12 * dVar12 + dVar28 * dVar28 + dVar27 * dVar27;
        auVar23 = sqrtpd(auVar23,auVar10);
        local_108.Second._0_4_ = (uint)local_ac ^ uVar13;
        local_108.First = (float)auVar23._0_8_;
        local_108.Second._4_4_ = (uint)((ulonglong)local_ac >> 0x20) ^ uVar13;
        local_108.Second._8_4_ = local_a4 ^ uVar13;
        if (((local_148.Data <= &local_108) &&
            (&local_108 <
             (Pair<float,Chaos::TVector<float,3>_> *)(local_148.Data + (longlong)local_13c * 0x10)))
           && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TVector<float,3> *)(*pcVar9)();
          return pTVar16;
        }
        if (local_140 == local_13c) {
          local_140 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&local_148,&local_13c);
        }
        lVar17 = (longlong)local_140;
        local_140 = local_140 + 1;
        *(ulonglong *)(local_148.Data + lVar17 * 0x10) =
             CONCAT44(local_108.Second._0_4_,local_108.First);
        *(ulonglong *)(local_148.Data + lVar17 * 0x10 + 8) =
             CONCAT44(local_108.Second._8_4_,local_108.Second._4_4_);
        if (iVar20 == 0) {
          local_d0 = 0x3f800000;
          puVar18 = &local_d0;
          local_c8 = 0;
        }
        else {
          if (iVar20 == 1) {
            local_120 = 0;
            uStack_11c = 0x3f800000;
            uStack_118 = 0;
          }
          else {
            local_120 = 0;
            uStack_11c = 0;
            uStack_118 = 0x3f800000;
          }
          local_120 = 0;
          puVar18 = (undefined8 *)&local_120;
        }
        uVar8 = *puVar18;
        local_8c = *(float *)(puVar18 + 1);
        local_94._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
        dVar27 = (double)*(float *)__return_storage_ptr__;
        dVar12 = (double)*(float *)&__return_storage_ptr__->field_0x4;
        dVar28 = (double)*(float *)&__return_storage_ptr__->field_0x8;
        fVar26 = (float)((dVar27 - (double)(param_2 + *(float *)&this->MMax)) * (double)(float)uVar8
                         + (dVar12 - (double)(param_2 + *(float *)&(this->MMax).field_0x4)) *
                           (double)local_94._4_4_ +
                        (dVar28 - (double)(param_2 + *(float *)&(this->MMax).field_0x8)) *
                        (double)local_8c);
        auVar24._0_8_ = (double)(fVar26 * (float)uVar8);
        auVar24._8_8_ = 0;
        if (iVar20 == 0) {
          local_c4 = 0x3f800000;
          puVar18 = &local_c4;
          local_bc = 0;
        }
        else {
          if (iVar20 == 1) {
            local_114 = 0;
            uStack_110 = 0x3f800000;
            uStack_10c = 0;
          }
          else {
            local_114 = 0;
            uStack_110 = 0;
            uStack_10c = 0x3f800000;
          }
          local_114 = 0;
          puVar18 = (undefined8 *)&local_114;
        }
        dVar12 = (dVar12 - (double)(fVar26 * local_94._4_4_)) - dVar12;
        dVar27 = (dVar27 - auVar24._0_8_) - dVar27;
        dVar28 = (dVar28 - (double)(fVar26 * local_8c)) - dVar28;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar12 * dVar12 + dVar27 * dVar27 + dVar28 * dVar28;
        auVar23 = sqrtpd(auVar24,auVar11);
        local_f8.Second._8_4_ = *(undefined4 *)(puVar18 + 1);
        local_f8.First = (float)auVar23._0_8_;
        local_f8.Second._0_4_ = SUB84(*puVar18,0);
        local_f8.Second._4_4_ = SUB84((ulonglong)*puVar18 >> 0x20,0);
        local_94 = uVar8;
        if (((local_148.Data <= &local_f8) &&
            (&local_f8 <
             (Pair<float,Chaos::TVector<float,3>_> *)(local_148.Data + (longlong)local_13c * 0x10)))
           && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TVector<float,3> *)(*pcVar9)();
          return pTVar16;
        }
        if (local_140 == local_13c) {
          local_140 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&local_148,&local_13c);
        }
        iVar1 = local_140 + 1;
        iVar20 = iVar20 + 1;
        *(ulonglong *)(local_148.Data + (longlong)local_140 * 0x10) =
             CONCAT44(local_f8.Second._0_4_,local_f8.First);
        *(ulonglong *)(local_148.Data + (longlong)local_140 * 0x10 + 8) =
             CONCAT44(local_f8.Second._8_4_,local_f8.Second._4_4_);
        local_140 = iVar1;
      } while (iVar20 < 3);
      AlgoImpl::
      IntroSortInternal<Chaos::Pair<float,Chaos::TVector<float,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,_Chaos::TAABB<float,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
                ((Pair<float,Chaos::TVector<float,3>_> *)local_148.Data,iVar1,local_res10[0],
                 (<lambda_1> *)local_res10);
      if ((local_140 < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        pTVar16 = (TVector<float,3> *)(*pcVar9)();
        return pTVar16;
      }
      uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar26 = __real_322bcc77;
      if (__real_322bcc77 <
          (float)((uint)*(float *)local_148.Data & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if ((local_140 < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TVector<float,3> *)(*pcVar9)();
          return pTVar16;
        }
        fVar29 = *(float *)local_148.Data;
        if ((local_140 < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TVector<float,3> *)(*pcVar9)();
          return pTVar16;
        }
        FVar14.Data = local_148.Data;
        if ((local_140 < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          pTVar16 = (TVector<float,3> *)(*pcVar9)();
          return pTVar16;
        }
        fVar30 = *(float *)local_148.Data;
        fVar2 = *(float *)(FVar14.Data + 0xc);
        fVar21 = *(float *)(FVar14.Data + 4);
        iVar20 = 1;
        *(float *)&__return_storage_ptr__->field_0x4 =
             fVar30 * *(float *)(FVar14.Data + 8) + *(float *)&__return_storage_ptr__->field_0x4;
        *(float *)&__return_storage_ptr__->field_0x8 =
             fVar30 * fVar2 + *(float *)&__return_storage_ptr__->field_0x8;
        *(float *)__return_storage_ptr__ = fVar30 * fVar21 + *(float *)__return_storage_ptr__;
        do {
          if ((local_140 <= iVar20) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            pTVar16 = (TVector<float,3> *)(*pcVar9)();
            return pTVar16;
          }
          if (fVar26 < (float)((uint)(fVar29 - *(float *)(local_148.Data + lVar19)) & uVar13))
          break;
          if ((local_140 <= iVar20) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            pTVar16 = (TVector<float,3> *)(*pcVar9)();
            return pTVar16;
          }
          FVar14.Data = local_148.Data;
          if ((local_140 <= iVar20) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            pTVar16 = (TVector<float,3> *)(*pcVar9)();
            return pTVar16;
          }
          iVar20 = iVar20 + 1;
          fVar30 = *(float *)(local_148.Data + lVar19);
          lVar17 = lVar19 + 8;
          fVar2 = *(float *)(FVar14.Data + lVar19 + 0xc);
          fVar21 = *(float *)(FVar14.Data + lVar19 + 4);
          lVar19 = lVar19 + 0x10;
          *(float *)&__return_storage_ptr__->field_0x4 =
               fVar30 * *(float *)(FVar14.Data + lVar17) +
               *(float *)&__return_storage_ptr__->field_0x4;
          *(float *)&__return_storage_ptr__->field_0x8 =
               fVar30 * fVar2 + *(float *)&__return_storage_ptr__->field_0x8;
          *(float *)__return_storage_ptr__ = fVar30 * fVar21 + *(float *)__return_storage_ptr__;
        } while (iVar20 < 3);
      }
      if ((Pair<float,Chaos::TVector<float,3>_> *)local_148.Data !=
          (Pair<float,Chaos::TVector<float,3>_> *)0x0) {
        FMemory::Free(local_148.Data);
      }
    }
  }
  else {
    *(float *)&__return_storage_ptr__->field_0x8 = fVar7;
  }
  return __return_storage_ptr__;
}

// FindClosestPoint @ 143629c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::FindClosestPoint
          (TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  TVector<double,3> *pTVar20;
  longlong lVar21;
  double *pdVar22;
  int iVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
  FIdentityFunctor local_res10 [8];
  ForAnyElementType local_228;
  int local_220;
  int iStack_21c;
  Pair<double,Chaos::TVector<double,3>_> local_218;
  undefined1 local_1f8 [16];
  double dStack_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190 [16];
  undefined8 local_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  double local_108;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  double local_f0;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dVar6;
  
  iVar23 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  dVar2 = *(double *)param_1;
  dVar3 = *(double *)&this->MMin;
  dVar10 = dVar2;
  if (dVar2 < dVar3) {
    dVar10 = dVar3;
  }
  dVar4 = *(double *)&this->MMax;
  dVar31 = dVar10;
  if (dVar4 < dVar10) {
    dVar31 = dVar4;
  }
  *(double *)__return_storage_ptr__ = dVar31;
  dVar31 = *(double *)&param_1->field_0x8;
  dVar32 = *(double *)&(this->MMin).field_0x8;
  dVar6 = dVar31;
  if (dVar31 < dVar32) {
    dVar6 = dVar32;
  }
  dVar5 = *(double *)&(this->MMax).field_0x8;
  dVar7 = dVar6;
  if (dVar5 < dVar6) {
    dVar7 = dVar5;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar7;
  dVar7 = *(double *)&param_1->field_0x10;
  uVar25 = SUB84(dVar7,0);
  uVar28 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = *(double *)&(this->MMin).field_0x10;
  if (dVar7 < dVar8) {
    uVar25 = SUB84(dVar8,0);
    uVar28 = (undefined4)((ulonglong)dVar8 >> 0x20);
  }
  dVar9 = *(double *)&(this->MMax).field_0x10;
  if ((double)CONCAT44(uVar28,uVar25) < dVar9 || (double)CONCAT44(uVar28,uVar25) == dVar9) {
    *(ulonglong *)&__return_storage_ptr__->field_0x10 = CONCAT44(uVar28,uVar25);
    uVar17 = _UNK_150689518;
    dVar16 = ___xmm_00000000000000003ff0000000000000;
    uVar15 = _UNK_15061cbc8;
    dVar9 = ___xmm_3ff00000000000000000000000000000;
    uVar14 = __real_3ff0000000000000;
    if (dVar7 >= dVar8 &&
        (dVar6 <= dVar5 && (dVar31 >= dVar32 && (dVar10 <= dVar4 && dVar3 <= dVar2)))) {
      lVar24 = 0x20;
      uVar33 = (uint)__xmm_80000000000000008000000000000000;
      uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_228.Data = (FScriptContainerElement *)0x0;
      local_220 = 0;
      iStack_21c = 0;
      do {
        if (iVar23 == 0) {
          local_150 = 0;
          pdVar22 = &local_160;
          local_160 = dVar16;
          uStack_158 = uVar17;
        }
        else {
          if (iVar23 == 1) {
            local_1c8 = 0;
            local_1d8 = dVar9;
            uStack_1d0 = uVar15;
          }
          else {
            local_1c8 = uVar14;
            local_1d8 = 0.0;
            uStack_1d0 = 0;
          }
          pdVar22 = &local_1d8;
        }
        local_108 = pdVar22[2];
        dVar2 = *(double *)&__return_storage_ptr__->field_0x8;
        dVar3 = *(double *)__return_storage_ptr__;
        dVar10 = *(double *)&__return_storage_ptr__->field_0x10;
        uVar29 = SUB84(local_108,0) ^ uVar33;
        uVar30 = (uint)((ulonglong)local_108 >> 0x20) ^ uVar34;
        local_118 = *(uint *)pdVar22;
        uStack_114 = *(uint *)((longlong)pdVar22 + 4);
        uStack_110 = *(uint *)(pdVar22 + 1);
        uStack_10c = *(uint *)((longlong)pdVar22 + 0xc);
        dVar31 = (double)CONCAT44(uStack_114 ^ uVar34,local_118 ^ uVar33);
        dVar4 = (dVar2 - (*(double *)&(this->MMin).field_0x8 - param_2)) *
                (double)CONCAT44(uStack_10c ^ uVar34,uStack_110 ^ uVar33) +
                (dVar3 - (*(double *)&this->MMin - param_2)) * dVar31 +
                (dVar10 - (*(double *)&(this->MMin).field_0x10 - param_2)) *
                (double)CONCAT44(uVar30,uVar29);
        auVar26._0_8_ = dVar4 * (double)CONCAT44(uVar30,uVar29);
        auVar26._8_8_ = 0;
        dVar32 = dVar10 - auVar26._0_8_;
        if (iVar23 == 0) {
          local_138 = 0;
          pdVar22 = &local_148;
          local_148 = dVar16;
          uStack_140 = uVar17;
        }
        else {
          if (iVar23 == 1) {
            local_1b0 = 0;
            local_1c0._8_8_ = uVar15;
            local_1c0._0_8_ = dVar9;
          }
          else {
            auVar26 = ZEXT816(0);
            local_1b0 = uVar14;
            local_1c0 = auVar26;
          }
          pdVar22 = (double *)local_1c0;
        }
        local_100 = *(uint *)pdVar22;
        uStack_fc = *(uint *)((longlong)pdVar22 + 4);
        uStack_f8 = *(uint *)(pdVar22 + 1);
        uStack_f4 = *(uint *)((longlong)pdVar22 + 0xc);
        local_f0 = pdVar22[2];
        dVar3 = (dVar3 - dVar4 * dVar31) - dVar3;
        dVar2 = (dVar2 - dVar4 * (double)CONCAT44(uStack_10c ^ uVar34,uStack_110 ^ uVar33)) - dVar2;
        dVar32 = dVar32 - dVar10;
        local_218.Second._20_4_ = (uint)((ulonglong)local_f0 >> 0x20) ^ uVar34;
        local_218.Second._16_4_ = SUB84(local_f0,0) ^ uVar33;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = dVar3 * dVar3 + dVar2 * dVar2 + dVar32 * dVar32;
        auVar26 = sqrtpd(auVar26,auVar13);
        local_218.First = auVar26._0_8_;
        local_218.Second._0_4_ = local_100 ^ uVar33;
        local_218.Second._4_4_ = uStack_fc ^ uVar34;
        local_218.Second._12_4_ = uStack_f4 ^ uVar34;
        local_218.Second._8_4_ = uStack_f8 ^ uVar33;
        if (((local_228.Data <= &local_218) &&
            (&local_218 <
             (Pair<double,Chaos::TVector<double,3>_> *)
             (local_228.Data + (longlong)iStack_21c * 0x20))) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TVector<double,3> *)(*pcVar11)();
          return pTVar20;
        }
        if (local_220 == iStack_21c) {
          local_220 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&local_228,&iStack_21c);
        }
        lVar21 = (longlong)local_220;
        local_220 = local_220 + 1;
        *(double *)&local_228.Data[lVar21 * 0x20].field_0x0 = local_218.First;
        *(undefined8 *)(local_228.Data + lVar21 * 0x20 + 8) = local_218.Second._0_8_;
        *(undefined8 *)(local_228.Data + lVar21 * 0x20 + 0x10) = local_218.Second._8_8_;
        *(undefined8 *)(local_228.Data + lVar21 * 0x20 + 0x10 + 8) = local_218.Second._16_8_;
        if (iVar23 == 0) {
          local_120 = 0;
          pdVar22 = &local_130;
          local_130 = dVar16;
          uStack_128 = uVar17;
        }
        else {
          if (iVar23 == 1) {
            local_198 = 0;
            local_1a8 = dVar9;
            uStack_1a0 = uVar15;
          }
          else {
            local_198 = uVar14;
            local_1a8 = 0.0;
            uStack_1a0 = 0;
          }
          pdVar22 = &local_1a8;
        }
        local_c0 = pdVar22[2];
        dVar2 = *(double *)__return_storage_ptr__;
        dVar3 = *(double *)&__return_storage_ptr__->field_0x8;
        dVar10 = *(double *)&__return_storage_ptr__->field_0x10;
        local_168 = local_c0;
        local_d0 = *pdVar22;
        dStack_c8 = pdVar22[1];
        dVar4 = (dVar2 - (param_2 + *(double *)&this->MMax)) * local_d0 +
                (dVar3 - (param_2 + *(double *)&(this->MMax).field_0x8)) * dStack_c8 +
                (dVar10 - (param_2 + *(double *)&(this->MMax).field_0x10)) * local_c0;
        auVar27._8_8_ = dStack_c8;
        auVar27._0_8_ = dStack_c8;
        if (iVar23 == 0) {
          local_168 = 0.0;
          local_178 = dVar16;
          uStack_170 = uVar17;
          pdVar22 = &local_178;
        }
        else {
          if (iVar23 == 1) {
            local_180 = 0;
            local_190._8_8_ = uVar15;
            local_190._0_8_ = dVar9;
          }
          else {
            auVar27 = ZEXT816(0);
            local_180 = uVar14;
            local_190 = auVar27;
          }
          pdVar22 = (double *)local_190;
        }
        dVar3 = (dVar3 - dVar4 * dStack_c8) - dVar3;
        dVar2 = (dVar2 - dVar4 * local_d0) - dVar2;
        dVar10 = (dVar10 - dVar4 * local_c0) - dVar10;
        local_1f8._8_8_ = *pdVar22;
        dStack_1e8 = pdVar22[1];
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar3 * dVar3 + dVar2 * dVar2 + dVar10 * dVar10;
        auVar26 = sqrtpd(auVar27,auVar12);
        local_1f8._0_8_ = auVar26._0_8_;
        dStack_1e0 = pdVar22[2];
        if (((local_228.Data <= (Pair<double,Chaos::TVector<double,3>_> *)local_1f8) &&
            ((FScriptContainerElement *)local_1f8 < local_228.Data + (longlong)iStack_21c * 0x20))
           && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar19)) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TVector<double,3> *)(*pcVar11)();
          return pTVar20;
        }
        if (local_220 == iStack_21c) {
          local_220 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&local_228,&iStack_21c);
        }
        iVar1 = local_220 + 1;
        iVar23 = iVar23 + 1;
        *(undefined8 *)&local_228.Data[(longlong)local_220 * 0x20].field_0x0 = local_1f8._0_8_;
        *(undefined8 *)(local_228.Data + (longlong)local_220 * 0x20 + 8) = local_1f8._8_8_;
        *(double *)(local_228.Data + (longlong)local_220 * 0x20 + 0x10) = dStack_1e8;
        *(double *)(local_228.Data + (longlong)local_220 * 0x20 + 0x10 + 8) = dStack_1e0;
        local_220 = iVar1;
      } while (iVar23 < 3);
      AlgoImpl::
      IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
                ((Pair<double,Chaos::TVector<double,3>_> *)local_228.Data,iVar1,local_res10[0],
                 (<lambda_1> *)local_res10);
      if ((local_220 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar11 = (code *)swi(3);
        pTVar20 = (TVector<double,3> *)(*pcVar11)();
        return pTVar20;
      }
      uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar33 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar2 = __real_3e45798ee2308c3a;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)*(double *)local_228.Data >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)local_228.Data,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        if ((local_220 < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TVector<double,3> *)(*pcVar11)();
          return pTVar20;
        }
        dVar3 = *(double *)local_228.Data;
        if ((local_220 < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TVector<double,3> *)(*pcVar11)();
          return pTVar20;
        }
        FVar18.Data = local_228.Data;
        if ((local_220 < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TVector<double,3> *)(*pcVar11)();
          return pTVar20;
        }
        dVar10 = *(double *)local_228.Data;
        dVar4 = *(double *)(FVar18.Data + 0x18);
        dVar31 = *(double *)(FVar18.Data + 8);
        iVar23 = 1;
        *(double *)&__return_storage_ptr__->field_0x8 =
             dVar10 * *(double *)(FVar18.Data + 0x10) +
             *(double *)&__return_storage_ptr__->field_0x8;
        *(double *)&__return_storage_ptr__->field_0x10 =
             dVar10 * dVar4 + *(double *)&__return_storage_ptr__->field_0x10;
        *(double *)__return_storage_ptr__ = dVar10 * dVar31 + *(double *)__return_storage_ptr__;
        do {
          if ((local_220 <= iVar23) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            pTVar20 = (TVector<double,3> *)(*pcVar11)();
            return pTVar20;
          }
          if (dVar2 < (double)CONCAT44((uint)((ulonglong)
                                              (dVar3 - *(double *)(local_228.Data + lVar24)) >> 0x20
                                             ) & uVar34,
                                       SUB84(dVar3 - *(double *)(local_228.Data + lVar24),0) &
                                       uVar33)) break;
          if ((local_220 <= iVar23) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            pTVar20 = (TVector<double,3> *)(*pcVar11)();
            return pTVar20;
          }
          FVar18.Data = local_228.Data;
          if ((local_220 <= iVar23) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            pTVar20 = (TVector<double,3> *)(*pcVar11)();
            return pTVar20;
          }
          iVar23 = iVar23 + 1;
          dVar10 = *(double *)(local_228.Data + lVar24);
          lVar21 = lVar24 + 0x10;
          dVar4 = *(double *)(FVar18.Data + lVar24 + 0x18);
          dVar31 = *(double *)(FVar18.Data + lVar24 + 8);
          lVar24 = lVar24 + 0x20;
          *(double *)&__return_storage_ptr__->field_0x8 =
               dVar10 * *(double *)(FVar18.Data + lVar21) +
               *(double *)&__return_storage_ptr__->field_0x8;
          *(double *)&__return_storage_ptr__->field_0x10 =
               dVar10 * dVar4 + *(double *)&__return_storage_ptr__->field_0x10;
          *(double *)__return_storage_ptr__ = dVar10 * dVar31 + *(double *)__return_storage_ptr__;
        } while (iVar23 < 3);
      }
      if ((Pair<double,Chaos::TVector<double,3>_> *)local_228.Data !=
          (Pair<double,Chaos::TVector<double,3>_> *)0x0) {
        FMemory::Free(local_228.Data);
      }
    }
  }
  else {
    *(double *)&__return_storage_ptr__->field_0x10 = dVar9;
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 14362a580

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::FindGeometryOpposingNormal
          (TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__,TVector<float,3> *param_1,
          int param_2,TVector<float,3> *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  fVar8 = __real_7f7fffff;
  fVar4 = __real_b8d1b717;
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar2 = __real_38d1b717;
  lVar5 = -(longlong)param_1;
  lVar6 = 3;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
  lVar7 = (longlong)param_3 - (longlong)param_1;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&param_3->field_0x8;
  do {
    fVar1 = *(float *)(lVar7 + (longlong)param_1);
    if (fVar1 <= fVar2) {
      if ((fVar1 < fVar4) && (fVar1 = *(float *)param_1, (float)((uint)fVar1 ^ uVar3) < fVar8)) {
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined4 *)(lVar5 + (longlong)__return_storage_ptr__ + (longlong)param_1) = 0xbf800000;
        fVar8 = (float)((uint)fVar1 ^ uVar3);
      }
    }
    else {
      fVar1 = *(float *)param_1;
      if (fVar1 < fVar8) {
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined4 *)(lVar5 + (longlong)__return_storage_ptr__ + (longlong)param_1) = 0x3f800000;
        fVar8 = fVar1;
      }
    }
    param_1 = (TVector<float,3> *)&param_1->field_0x4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 14362a640

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::FindGeometryOpposingNormal
          (TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2,TVector<double,3> *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  
  dVar11 = __real_7fefffffffffffff;
  dVar5 = __real_bf1a36e2e0000000;
  dVar4 = __real_3f1a36e2e0000000;
  uVar3 = __xmm_80000000000000008000000000000000;
  lVar7 = -(longlong)param_1;
  lVar6 = 3;
  uVar2 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  lVar8 = (longlong)param_3 - (longlong)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  do {
    dVar1 = *(double *)((longlong)param_1 + lVar8);
    if (dVar1 <= dVar4) {
      if (dVar1 < dVar5) {
        uVar9 = SUB84(*(double *)param_1,0) ^ (uint)uVar3;
        uVar10 = (uint)((ulonglong)*(double *)param_1 >> 0x20) ^ (uint)((ulonglong)uVar3 >> 0x20);
        if ((double)CONCAT44(uVar10,uVar9) < dVar11) {
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          dVar11 = (double)CONCAT44(uVar10,uVar9);
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          *(undefined8 *)(lVar7 + (longlong)param_1 + (longlong)__return_storage_ptr__) =
               0xbff0000000000000;
        }
      }
    }
    else {
      dVar1 = *(double *)param_1;
      if (dVar1 < dVar11) {
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        *(undefined8 *)(lVar7 + (longlong)param_1 + (longlong)__return_storage_ptr__) =
             0x3ff0000000000000;
        dVar11 = dVar1;
      }
    }
    param_1 = (TVector<double,3> *)&param_1->field_0x8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return __return_storage_ptr__;
}

// FullAABB @ 14362a980

TAABB<float,3> * __cdecl Chaos::TAABB<float,3>::FullAABB(TAABB<float,3> *__return_storage_ptr__)

{
  *(undefined4 *)&__return_storage_ptr__->MMin = 0xff7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x4 = 0xff7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = 0xff7fffff;
  *(undefined4 *)&__return_storage_ptr__->MMax = 0x7f7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = 0x7f7fffff;
  return __return_storage_ptr__;
}

// FullAABB @ 14362a9c0

TAABB<double,3> * __cdecl Chaos::TAABB<double,3>::FullAABB(TAABB<double,3> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->MMin = 0xffefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&__return_storage_ptr__->MMax = 0x7fefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = 0x7fefffffffffffff;
  return __return_storage_ptr__;
}

// GetArea @ 14362aa00

float __thiscall Chaos::TAABB<float,3>::GetArea(TAABB<float,3> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4;
  fVar3 = *(float *)&(this->MMax).field_0x8 - *(float *)&(this->MMin).field_0x8;
  fVar1 = *(float *)&this->MMax - *(float *)&this->MMin;
  return (fVar1 + fVar1) * (fVar2 + fVar3) + (fVar2 + fVar2) * fVar3;
}

// GetArea @ 14362aa40

float __cdecl Chaos::TAABB<float,3>::GetArea(TVector<float,3> *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)&param_1->field_0x4;
  return (*(float *)&param_1->field_0x8 + fVar1) * (*(float *)param_1 + *(float *)param_1) +
         (fVar1 + fVar1) * *(float *)&param_1->field_0x8;
}

// GetArea @ 14362aa70

double __thiscall Chaos::TAABB<double,3>::GetArea(TAABB<double,3> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8;
  dVar3 = *(double *)&(this->MMax).field_0x10 - *(double *)&(this->MMin).field_0x10;
  dVar1 = *(double *)&this->MMax - *(double *)&this->MMin;
  return (dVar1 + dVar1) * (dVar2 + dVar3) + (dVar2 + dVar2) * dVar3;
}

// GetArea @ 14362aab0

double __cdecl Chaos::TAABB<double,3>::GetArea(TVector<double,3> *param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&param_1->field_0x8;
  return (*(double *)&param_1->field_0x10 + dVar1) * (*(double *)param_1 + *(double *)param_1) +
         (dVar1 + dVar1) * *(double *)&param_1->field_0x10;
}

// GetCenter @ 14362ab00

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::GetCenter(TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_3f000000;
  fVar5 = (*(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4) * __real_3f000000;
  fVar1 = *(float *)&(this->MMin).field_0x4;
  *(float *)__return_storage_ptr__ =
       (*(float *)&this->MMax - *(float *)&this->MMin) * __real_3f000000 + *(float *)&this->MMin;
  fVar2 = *(float *)&(this->MMax).field_0x8;
  fVar3 = *(float *)&(this->MMin).field_0x8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar5 + fVar1;
  *(float *)&__return_storage_ptr__->field_0x8 =
       (fVar2 - fVar3) * fVar4 + *(float *)&(this->MMin).field_0x8;
  return __return_storage_ptr__;
}

// GetCenter @ 14362ab60

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::GetCenter(TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  dVar5 = (*(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar1 = *(double *)&(this->MMin).field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&this->MMax - *(double *)&this->MMin) * __real_3fe0000000000000 +
       *(double *)&this->MMin;
  dVar2 = *(double *)&(this->MMax).field_0x10;
  dVar3 = *(double *)&(this->MMin).field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5 + dVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar2 - dVar3) * dVar4 + *(double *)&(this->MMin).field_0x10;
  return __return_storage_ptr__;
}

// GetCenterOfMass @ 14362ac10

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::GetCenterOfMass
          (TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_3f000000;
  fVar5 = (*(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4) * __real_3f000000;
  fVar1 = *(float *)&(this->MMin).field_0x4;
  *(float *)__return_storage_ptr__ =
       (*(float *)&this->MMax - *(float *)&this->MMin) * __real_3f000000 + *(float *)&this->MMin;
  fVar2 = *(float *)&(this->MMax).field_0x8;
  fVar3 = *(float *)&(this->MMin).field_0x8;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar5 + fVar1;
  *(float *)&__return_storage_ptr__->field_0x8 =
       (fVar2 - fVar3) * fVar4 + *(float *)&(this->MMin).field_0x8;
  return __return_storage_ptr__;
}

// GetCenterOfMass @ 14362ac70

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::GetCenterOfMass
          (TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  dVar5 = (*(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar1 = *(double *)&(this->MMin).field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&this->MMax - *(double *)&this->MMin) * __real_3fe0000000000000 +
       *(double *)&this->MMin;
  dVar2 = *(double *)&(this->MMax).field_0x10;
  dVar3 = *(double *)&(this->MMin).field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5 + dVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar2 - dVar3) * dVar4 + *(double *)&(this->MMin).field_0x10;
  return __return_storage_ptr__;
}

// GetEdge @ 14362acd0

FAABBEdge __thiscall Chaos::TAABB<float,3>::GetEdge(TAABB<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FAABBEdge FVar3;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  if (0xb < in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= Index && Index < 12",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\AABB.h"
                       ,0x209,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FAABBEdge)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined2 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined2 *)
        ((longlong)
         &`public:_struct_Chaos::FAABBEdge___cdecl_Chaos::TAABB<float,3>::GetEdge(int)const___ptr64'
          ::__l2::Edges + (longlong)(int)in_R8D * 2);
  return SUB42(param_1,0);
}

// GetEdge @ 14362ad30

FAABBEdge __thiscall Chaos::TAABB<double,3>::GetEdge(TAABB<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FAABBEdge FVar3;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  if (0xb < in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= Index && Index < 12",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\AABB.h"
                       ,0x209,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FAABBEdge)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined2 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined2 *)
        ((longlong)
         &`public:_struct_Chaos::FAABBEdge___cdecl_Chaos::TAABB<double,3>::GetEdge(int)const___ptr64'
          ::__l2::Edges + (longlong)(int)in_R8D * 2);
  return SUB42(param_1,0);
}

// GetFace @ 14362ad90

FAABBFace __thiscall Chaos::TAABB<float,3>::GetFace(TAABB<float,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FAABBFace FVar3;
  schar in_register_00000014 [4];
  uint in_R8D;
  
  FVar3.EdgeIndex = in_register_00000014;
  FVar3.VertexIndex = (schar  [4])param_1;
  if (5 < in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= Index && Index < 6",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\AABB.h"
                       ,0x217,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FAABBFace)(*pcVar1)();
      return FVar3;
    }
  }
  *(FAABBFace **)FVar3 =
       (&`public:_struct_Chaos::FAABBFace___cdecl_Chaos::TAABB<float,3>::GetFace(int)const___ptr64'
         ::__l2::Faces)[(int)in_R8D];
  return FVar3;
}

// GetFace @ 14362adf0

FAABBFace __thiscall Chaos::TAABB<double,3>::GetFace(TAABB<double,3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FAABBFace FVar3;
  schar in_register_00000014 [4];
  uint in_R8D;
  
  FVar3.EdgeIndex = in_register_00000014;
  FVar3.VertexIndex = (schar  [4])param_1;
  if (5 < in_R8D) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= Index && Index < 6",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\AABB.h"
                       ,0x217,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FAABBFace)(*pcVar1)();
      return FVar3;
    }
  }
  *(FAABBFace **)FVar3 =
       (&`public:_struct_Chaos::FAABBFace___cdecl_Chaos::TAABB<double,3>::GetFace(int)const___ptr64'
         ::__l2::Faces)[(int)in_R8D];
  return FVar3;
}

// GetIndex @ 14362ae60

int __thiscall Chaos::TAABB<float,3>::GetIndex(TAABB<float,3> *this,TIntVector3<int> *param_1)

{
  return (param_1->field0_0x0)._s_0.X +
         ((param_1->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Z * 2) * 2;
}

// GetIndex @ 14362ae80

int __thiscall Chaos::TAABB<double,3>::GetIndex(TAABB<double,3> *this,TIntVector3<int> *param_1)

{
  return (param_1->field0_0x0)._s_0.X +
         ((param_1->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Z * 2) * 2;
}

// GetInertiaTensor @ 14362aea0

PMatrix<double,3,3> * __thiscall
Chaos::TAABB<float,3>::GetInertiaTensor
          (TAABB<float,3> *this,PMatrix<double,3,3> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_1 * __real_3fb5555555555555;
  dVar3 = (double)(*(float *)&this->MMax - *(float *)&this->MMin);
  dVar3 = dVar3 * dVar3;
  dVar4 = (double)(*(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4);
  dVar1 = (double)(*(float *)&(this->MMax).field_0x8 - *(float *)&(this->MMin).field_0x8);
  dVar4 = dVar4 * dVar4;
  dVar1 = dVar1 * dVar1;
  *(double *)__return_storage_ptr__ = (dVar1 + dVar4) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(double *)&__return_storage_ptr__->field_0x28 = (dVar1 + dVar3) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(double *)&__return_storage_ptr__->field_0x50 = (dVar4 + dVar3) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

// GetInertiaTensor @ 14362af50

PMatrix<double,3,3> * __cdecl
Chaos::TAABB<float,3>::GetInertiaTensor
          (PMatrix<double,3,3> *__return_storage_ptr__,double param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_1 * __real_3fb5555555555555;
  dVar1 = *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10;
  dVar2 = *(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8;
  dVar3 = *(double *)param_2 * *(double *)param_2;
  *(double *)__return_storage_ptr__ = (dVar1 + dVar2) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(double *)&__return_storage_ptr__->field_0x28 = (dVar1 + dVar3) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(double *)&__return_storage_ptr__->field_0x50 = (dVar2 + dVar3) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

// GetInertiaTensor @ 14362aff0

PMatrix<double,3,3> * __thiscall
Chaos::TAABB<double,3>::GetInertiaTensor
          (TAABB<double,3> *this,PMatrix<double,3,3> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)&(this->MMax).field_0x10 - *(double *)&(this->MMin).field_0x10;
  dVar2 = param_1 * __real_3fb5555555555555;
  dVar4 = *(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8;
  dVar1 = *(double *)&this->MMax - *(double *)&this->MMin;
  dVar3 = dVar3 * dVar3;
  dVar4 = dVar4 * dVar4;
  dVar1 = dVar1 * dVar1;
  *(double *)__return_storage_ptr__ = (dVar3 + dVar4) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(double *)&__return_storage_ptr__->field_0x28 = (dVar3 + dVar1) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(double *)&__return_storage_ptr__->field_0x50 = (dVar4 + dVar1) * dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

// GetInertiaTensor @ 14362b0a0

PMatrix<double,3,3> * __cdecl
Chaos::TAABB<double,3>::GetInertiaTensor
          (PMatrix<double,3,3> *__return_storage_ptr__,double param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_1 * __real_3fb5555555555555;
  dVar1 = *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10;
  dVar2 = *(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8;
  dVar3 = *(double *)param_2 * *(double *)param_2;
  *(double *)__return_storage_ptr__ = (dVar1 + dVar2) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(double *)&__return_storage_ptr__->field_0x28 = (dVar1 + dVar3) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0x3ff0000000000000;
  *(double *)&__return_storage_ptr__->field_0x50 = (dVar2 + dVar3) * dVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  return __return_storage_ptr__;
}

// GetIntersection @ 14362b140

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::GetIntersection
          (TAABB<float,3> *this,TAABB<float,3> *__return_storage_ptr__,TAABB<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)&(param_1->MMin).field_0x4;
  fVar3 = *(float *)&(param_1->MMin).field_0x8;
  fVar6 = *(float *)&(param_1->MMax).field_0x4;
  fVar5 = *(float *)&(param_1->MMax).field_0x8;
  fVar2 = *(float *)&param_1->MMin;
  if (*(float *)&param_1->MMin <= *(float *)&this->MMin) {
    fVar2 = *(float *)&this->MMin;
  }
  fVar7 = *(float *)&(this->MMin).field_0x4;
  if (fVar4 <= fVar7) {
    fVar4 = fVar7;
  }
  fVar7 = *(float *)&(this->MMin).field_0x8;
  if (fVar3 <= fVar7) {
    fVar3 = fVar7;
  }
  fVar7 = *(float *)&param_1->MMax;
  if (*(float *)&this->MMax <= *(float *)&param_1->MMax) {
    fVar7 = *(float *)&this->MMax;
  }
  fVar1 = *(float *)&(this->MMax).field_0x4;
  if (fVar1 <= fVar6) {
    fVar6 = fVar1;
  }
  fVar1 = *(float *)&(this->MMax).field_0x8;
  if (fVar1 <= fVar5) {
    fVar5 = fVar1;
  }
  *(float *)&__return_storage_ptr__->MMin = fVar2;
  *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar4;
  *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar3;
  *(float *)&__return_storage_ptr__->MMax = fVar7;
  *(float *)&(__return_storage_ptr__->MMax).field_0x4 = fVar6;
  *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar5;
  return __return_storage_ptr__;
}

// GetIntersection @ 14362b1b0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::GetIntersection
          (TAABB<double,3> *this,TAABB<double,3> *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = *(double *)&(param_1->MMin).field_0x8;
  dVar3 = *(double *)&(param_1->MMin).field_0x10;
  dVar6 = *(double *)&(param_1->MMax).field_0x8;
  dVar5 = *(double *)&(param_1->MMax).field_0x10;
  dVar2 = *(double *)&param_1->MMin;
  if (*(double *)&param_1->MMin <= *(double *)&this->MMin) {
    dVar2 = *(double *)&this->MMin;
  }
  dVar7 = *(double *)&(this->MMin).field_0x8;
  if (dVar4 <= dVar7) {
    dVar4 = dVar7;
  }
  dVar7 = *(double *)&(this->MMin).field_0x10;
  if (dVar3 <= dVar7) {
    dVar3 = dVar7;
  }
  dVar7 = *(double *)&param_1->MMax;
  if (*(double *)&this->MMax <= *(double *)&param_1->MMax) {
    dVar7 = *(double *)&this->MMax;
  }
  dVar1 = *(double *)&(this->MMax).field_0x8;
  if (dVar1 <= dVar6) {
    dVar6 = dVar1;
  }
  dVar1 = *(double *)&(this->MMax).field_0x10;
  if (dVar1 <= dVar5) {
    dVar5 = dVar1;
  }
  *(double *)&__return_storage_ptr__->MMin = dVar2;
  *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar4;
  *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar3;
  *(double *)&__return_storage_ptr__->MMax = dVar7;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar6;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar5;
  return __return_storage_ptr__;
}

// GetMargin @ 14362b220

float __thiscall Chaos::TAABB<float,3>::GetMargin(TAABB<float,3> *this)

{
  return 0.0;
}

// GetMargin @ 14362b230

double __thiscall Chaos::TAABB<double,3>::GetMargin(TAABB<double,3> *this)

{
  return 0.0;
}

// GetMarginf @ 14362b240

float __thiscall Chaos::TAABB<float,3>::GetMarginf(TAABB<float,3> *this)

{
  return 0.0;
}

// GetMarginf @ 14362b250

float __thiscall Chaos::TAABB<double,3>::GetMarginf(TAABB<double,3> *this)

{
  return 0.0;
}

// GetMaterialIndex @ 14362b260

ushort __thiscall Chaos::TAABB<float,3>::GetMaterialIndex(TAABB<float,3> *this,uint param_1)

{
  return 0;
}

// GetMaterialIndex @ 14362b270

ushort __thiscall Chaos::TAABB<double,3>::GetMaterialIndex(TAABB<double,3> *this,uint param_1)

{
  return 0;
}

// GetRadius @ 14362b280

float __thiscall Chaos::TAABB<float,3>::GetRadius(TAABB<float,3> *this)

{
  return 0.0;
}

// GetRadius @ 14362b290

double __thiscall Chaos::TAABB<double,3>::GetRadius(TAABB<double,3> *this)

{
  return 0.0;
}

// GetRadiusf @ 14362b2b0

float __thiscall Chaos::TAABB<float,3>::GetRadiusf(TAABB<float,3> *this)

{
  return 0.0;
}

// GetRadiusf @ 14362b2c0

float __thiscall Chaos::TAABB<double,3>::GetRadiusf(TAABB<double,3> *this)

{
  return 0.0;
}

// GetRotationOfMass @ 14362b2d0

TRotation<double,3> * __cdecl
Chaos::TAABB<float,3>::GetRotationOfMass(TRotation<double,3> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0x3ff0000000000000;
  return __return_storage_ptr__;
}

// GetRotationOfMass @ 14362b300

TRotation<double,3> * __cdecl
Chaos::TAABB<double,3>::GetRotationOfMass(TRotation<double,3> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0x3ff0000000000000;
  return __return_storage_ptr__;
}

// GetTypeHash @ 14362b340

uint __thiscall Chaos::TAABB<float,3>::GetTypeHash(TAABB<float,3> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->MMax,0xc,0);
  uVar2 = FCrc::MemCrc_DEPRECATED(this,0xc,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 14362b400

uint __thiscall Chaos::TAABB<double,3>::GetTypeHash(TAABB<double,3> *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&this->MMax,0x18,0);
  uVar2 = FCrc::MemCrc_DEPRECATED(this,0x18,0);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetVertex @ 14362b4c0

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::GetVertex
          (TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float,3> *pTVar5;
  longlong lVar6;
  
  if (7 < (uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= Index && Index < 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\AABB.h"
                       ,0x1dd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<float,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar6 = 8;
  if ((param_1 & 4U) != 0) {
    lVar6 = 0x14;
  }
  uVar1 = *(undefined4 *)(&(this->MMin).field_0x0 + lVar6);
  lVar6 = 4;
  if ((param_1 & 2U) != 0) {
    lVar6 = 0x10;
  }
  uVar2 = *(undefined4 *)(&(this->MMin).field_0x0 + lVar6);
  if ((param_1 & 1U) != 0) {
    this = (TAABB<float,3> *)&this->MMax;
  }
  *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)&this->MMin;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetVertex @ 14362b560

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::GetVertex
          (TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double,3> *pTVar5;
  longlong lVar6;
  
  if (7 < (uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= Index && Index < 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\AABB.h"
                       ,0x1dd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar6 = 0x10;
  if ((param_1 & 4U) != 0) {
    lVar6 = 0x28;
  }
  uVar1 = *(undefined8 *)(&(this->MMin).field_0x0 + lVar6);
  lVar6 = 8;
  if ((param_1 & 2U) != 0) {
    lVar6 = 0x20;
  }
  uVar2 = *(undefined8 *)(&(this->MMin).field_0x0 + lVar6);
  if ((param_1 & 1U) != 0) {
    this = (TAABB<double,3> *)&this->MMax;
  }
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&this->MMin;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// GetVolume @ 14362b610

float __thiscall Chaos::TAABB<float,3>::GetVolume(TAABB<float,3> *this)

{
  return (*(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4) *
         (*(float *)&this->MMax - *(float *)&this->MMin) *
         (*(float *)&(this->MMax).field_0x8 - *(float *)&(this->MMin).field_0x8);
}

// GetVolume @ 14362b640

float __cdecl Chaos::TAABB<float,3>::GetVolume(TVector<float,3> *param_1)

{
  return *(float *)&param_1->field_0x4 * *(float *)param_1 * *(float *)&param_1->field_0x8;
}

// GetVolume @ 14362b660

double __thiscall Chaos::TAABB<double,3>::GetVolume(TAABB<double,3> *this)

{
  return (*(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8) *
         (*(double *)&this->MMax - *(double *)&this->MMin) *
         (*(double *)&(this->MMax).field_0x10 - *(double *)&(this->MMin).field_0x10);
}

// GetVolume @ 14362b690

double __cdecl Chaos::TAABB<double,3>::GetVolume(TVector<double,3> *param_1)

{
  return *(double *)&param_1->field_0x8 * *(double *)param_1 * *(double *)&param_1->field_0x10;
}

// GrowByVector @ 14362b710

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::GrowByVector(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)&param_1->field_0x4;
  fVar3 = *(float *)&param_1->field_0x8;
  if (0.0 <= fVar4) {
    fVar4 = 0.0;
  }
  fVar2 = *(float *)param_1;
  if (0.0 <= fVar3) {
    fVar3 = 0.0;
  }
  if (0.0 <= fVar2) {
    fVar2 = 0.0;
  }
  fVar1 = *(float *)&this->MMin;
  *(float *)&(this->MMin).field_0x4 = fVar4 + *(float *)&(this->MMin).field_0x4;
  *(float *)&(this->MMin).field_0x8 = fVar3 + *(float *)&(this->MMin).field_0x8;
  *(float *)&this->MMin = fVar2 + fVar1;
  fVar4 = *(float *)&param_1->field_0x4;
  fVar3 = *(float *)&param_1->field_0x8;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar2 = *(float *)param_1;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = *(float *)&this->MMax;
  *(float *)&(this->MMax).field_0x4 = fVar4 + *(float *)&(this->MMax).field_0x4;
  *(float *)&(this->MMax).field_0x8 = fVar3 + *(float *)&(this->MMax).field_0x8;
  *(float *)&this->MMax = fVar2 + fVar1;
  return this;
}

// GrowByVector @ 14362b790

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::GrowByVector(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  if (0.0 <= dVar4) {
    dVar4 = 0.0;
  }
  dVar2 = *(double *)param_1;
  if (0.0 <= dVar3) {
    dVar3 = 0.0;
  }
  if (0.0 <= dVar2) {
    dVar2 = 0.0;
  }
  dVar1 = *(double *)&this->MMin;
  *(double *)&(this->MMin).field_0x8 = dVar4 + *(double *)&(this->MMin).field_0x8;
  *(double *)&(this->MMin).field_0x10 = dVar3 + *(double *)&(this->MMin).field_0x10;
  *(double *)&this->MMin = dVar2 + dVar1;
  dVar4 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar2 = *(double *)param_1;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar1 = *(double *)&this->MMax;
  *(double *)&(this->MMax).field_0x8 = dVar4 + *(double *)&(this->MMax).field_0x8;
  *(double *)&(this->MMax).field_0x10 = dVar3 + *(double *)&(this->MMax).field_0x10;
  *(double *)&this->MMax = dVar2 + dVar1;
  return this;
}

// GrowToInclude @ 14362b810

void __thiscall Chaos::TAABB<float,3>::GrowToInclude(TAABB<float,3> *this,TAABB<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)&(param_1->MMin).field_0x4;
  fVar2 = *(float *)&param_1->MMin;
  if (*(float *)&this->MMin <= *(float *)&param_1->MMin) {
    fVar2 = *(float *)&this->MMin;
  }
  fVar3 = *(float *)&(this->MMin).field_0x4;
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)&(param_1->MMin).field_0x8;
  fVar1 = *(float *)&(this->MMin).field_0x8;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  *(float *)&this->MMin = fVar2;
  *(float *)&(this->MMin).field_0x4 = fVar4;
  *(float *)&(this->MMin).field_0x8 = fVar3;
  fVar4 = *(float *)&(param_1->MMax).field_0x4;
  fVar2 = *(float *)&(param_1->MMax).field_0x8;
  fVar3 = *(float *)&param_1->MMax;
  if (*(float *)&param_1->MMax <= *(float *)&this->MMax) {
    fVar3 = *(float *)&this->MMax;
  }
  fVar1 = *(float *)&(this->MMax).field_0x4;
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  fVar1 = *(float *)&(this->MMax).field_0x8;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)&this->MMax = fVar3;
  *(float *)&(this->MMax).field_0x4 = fVar4;
  *(float *)&(this->MMax).field_0x8 = fVar2;
  return;
}

// GrowToInclude @ 14362b870

void __thiscall Chaos::TAABB<float,3>::GrowToInclude(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)param_1;
  if (*(float *)&this->MMin <= *(float *)param_1) {
    fVar1 = *(float *)&this->MMin;
  }
  fVar4 = *(float *)&(this->MMin).field_0x4;
  fVar2 = *(float *)&param_1->field_0x4;
  if (fVar4 <= *(float *)&param_1->field_0x4) {
    fVar2 = fVar4;
  }
  fVar4 = *(float *)&(this->MMin).field_0x8;
  fVar3 = *(float *)&param_1->field_0x8;
  if (fVar4 <= *(float *)&param_1->field_0x8) {
    fVar3 = fVar4;
  }
  *(float *)&this->MMin = fVar1;
  *(float *)&(this->MMin).field_0x4 = fVar2;
  *(float *)&(this->MMin).field_0x8 = fVar3;
  fVar1 = *(float *)&(this->MMax).field_0x4;
  fVar4 = *(float *)&(this->MMax).field_0x8;
  fVar2 = *(float *)&this->MMax;
  if (*(float *)&this->MMax <= *(float *)param_1) {
    fVar2 = *(float *)param_1;
  }
  if (fVar1 <= *(float *)&param_1->field_0x4) {
    fVar1 = *(float *)&param_1->field_0x4;
  }
  if (fVar4 <= *(float *)&param_1->field_0x8) {
    fVar4 = *(float *)&param_1->field_0x8;
  }
  *(float *)&this->MMax = fVar2;
  *(float *)&(this->MMax).field_0x4 = fVar1;
  *(float *)&(this->MMax).field_0x8 = fVar4;
  return;
}

// GrowToInclude @ 14362b8d0

void __thiscall
Chaos::TAABB<double,3>::GrowToInclude(TAABB<double,3> *this,TAABB<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)&(param_1->MMin).field_0x8;
  dVar2 = *(double *)&param_1->MMin;
  if (*(double *)&this->MMin <= *(double *)&param_1->MMin) {
    dVar2 = *(double *)&this->MMin;
  }
  dVar3 = *(double *)&(this->MMin).field_0x8;
  if (dVar3 <= dVar4) {
    dVar4 = dVar3;
  }
  dVar3 = *(double *)&(param_1->MMin).field_0x10;
  dVar1 = *(double *)&(this->MMin).field_0x10;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  *(double *)&this->MMin = dVar2;
  *(double *)&(this->MMin).field_0x8 = dVar4;
  *(double *)&(this->MMin).field_0x10 = dVar3;
  dVar4 = *(double *)&(param_1->MMax).field_0x8;
  dVar2 = *(double *)&(param_1->MMax).field_0x10;
  dVar3 = *(double *)&param_1->MMax;
  if (*(double *)&param_1->MMax <= *(double *)&this->MMax) {
    dVar3 = *(double *)&this->MMax;
  }
  dVar1 = *(double *)&(this->MMax).field_0x8;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  dVar1 = *(double *)&(this->MMax).field_0x10;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  *(double *)&this->MMax = dVar3;
  *(double *)&(this->MMax).field_0x8 = dVar4;
  *(double *)&(this->MMax).field_0x10 = dVar2;
  return;
}

// GrowToInclude @ 14362b930

void __thiscall
Chaos::TAABB<double,3>::GrowToInclude(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)param_1;
  if (*(double *)&this->MMin <= *(double *)param_1) {
    dVar1 = *(double *)&this->MMin;
  }
  dVar4 = *(double *)&(this->MMin).field_0x8;
  dVar2 = *(double *)&param_1->field_0x8;
  if (dVar4 <= *(double *)&param_1->field_0x8) {
    dVar2 = dVar4;
  }
  dVar4 = *(double *)&(this->MMin).field_0x10;
  dVar3 = *(double *)&param_1->field_0x10;
  if (dVar4 <= *(double *)&param_1->field_0x10) {
    dVar3 = dVar4;
  }
  *(double *)&this->MMin = dVar1;
  *(double *)&(this->MMin).field_0x8 = dVar2;
  *(double *)&(this->MMin).field_0x10 = dVar3;
  dVar1 = *(double *)&(this->MMax).field_0x8;
  dVar4 = *(double *)&(this->MMax).field_0x10;
  dVar2 = *(double *)&this->MMax;
  if (*(double *)&this->MMax <= *(double *)param_1) {
    dVar2 = *(double *)param_1;
  }
  if (dVar1 <= *(double *)&param_1->field_0x8) {
    dVar1 = *(double *)&param_1->field_0x8;
  }
  if (dVar4 <= *(double *)&param_1->field_0x10) {
    dVar4 = *(double *)&param_1->field_0x10;
  }
  *(double *)&this->MMax = dVar2;
  *(double *)&(this->MMax).field_0x8 = dVar1;
  *(double *)&(this->MMax).field_0x10 = dVar4;
  return;
}

// InverseTransformedAABB @ 14362bc90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::InverseTransformedAABB
          (TAABB<float,3> *this,TAABB<float,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  TVector<double> *pTVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar45;
  undefined4 uVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  float local_148;
  float local_144;
  float local_140;
  TVector<double>_u_0 local_138 [2];
  undefined8 local_100;
  int local_f8;
  undefined8 local_f4;
  int local_ec;
  TVector<double> local_e8 [8];
  
  if (bChaos_AABBTransform_Optimized) {
    InverseTransformedAABBHelper2<float,double>(__return_storage_ptr__,this,param_1);
  }
  else if ((*(float *)&this->MMax == __real_7f7fffff) ||
          (fVar68 = *(float *)&this->MMin, fVar68 == __real_7f7fffff)) {
    *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&this->MMin;
    *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 =
         *(undefined4 *)&(this->MMin).field_0x8;
    *(undefined8 *)&__return_storage_ptr__->MMax = *(undefined8 *)&this->MMax;
    *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 =
         *(undefined4 *)&(this->MMax).field_0x8;
  }
  else {
    fVar69 = *(float *)&(this->MMin).field_0x4;
    fVar59 = *(float *)&this->MMax - fVar68;
    fVar51 = *(float *)&(this->MMin).field_0x8;
    fVar66 = *(float *)&(this->MMax).field_0x8 - fVar51;
    fVar67 = *(float *)&(this->MMax).field_0x4 - fVar69;
    local_138[0]._0_8_ = (undefined8)fVar68;
    local_138[0]._16_8_ = (undefined8)fVar51;
    local_138[0]._8_8_ = (undefined8)fVar69;
    pTVar11 = UE::Math::TTransform<double>::InverseTransformPosition
                        ((TTransform<double> *)param_1,local_e8,
                         (TVector<double> *)&local_138[0]._s_0);
    local_138[0]._0_8_ = (undefined8)*(float *)&this->MMax;
    local_138[0]._16_8_ = (undefined8)*(float *)&(this->MMax).field_0x8;
    local_138[0]._8_8_ = (undefined8)*(float *)&(this->MMax).field_0x4;
    fVar51 = (float)(pTVar11->field0_0x0)._s_0.X;
    fVar56 = (float)(pTVar11->field0_0x0)._s_0.Y;
    fVar58 = (float)(pTVar11->field0_0x0)._s_0.Z;
    pTVar11 = UE::Math::TTransform<double>::InverseTransformPosition
                        ((TTransform<double> *)param_1,local_e8,
                         (TVector<double> *)&local_138[0]._s_0);
    local_f8 = 0;
    local_178 = (float)(pTVar11->field0_0x0)._s_0.X;
    fVar69 = (float)(pTVar11->field0_0x0)._s_0.Y;
    fVar68 = local_178;
    if (local_178 <= fVar51) {
      fVar68 = fVar51;
    }
    if (fVar51 <= local_178) {
      local_178 = fVar51;
    }
    fVar51 = (float)(pTVar11->field0_0x0)._s_0.Z;
    local_174 = fVar69;
    if (fVar56 <= fVar69) {
      local_174 = fVar56;
    }
    if (fVar69 <= fVar56) {
      fVar69 = fVar56;
    }
    local_170 = fVar51;
    if (fVar58 <= fVar51) {
      local_170 = fVar58;
    }
    if (fVar51 <= fVar58) {
      fVar51 = fVar58;
    }
    local_138[0]._s_0.X = 0.0;
    local_138[0]._s_0.Y = 0.0;
    do {
      if (local_f8 == 0) {
        local_100 = 0x3f800000;
        puVar12 = &local_100;
      }
      else {
        if (local_f8 == 1) {
          local_160 = 0;
          uStack_15c = 0x3f800000;
          uStack_158 = 0;
        }
        else {
          local_160 = 0;
          uStack_15c = 0;
          uStack_158 = 0x3f800000;
        }
        puVar12 = (undefined8 *)&local_160;
      }
      dVar4 = *(double *)&param_1->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar5 = *(double *)&param_1->field_0x18 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar28 = (double)(fVar66 * *(float *)(puVar12 + 1) + *(float *)&(this->MMin).field_0x8) -
               *(double *)&param_1->field_0x30;
      dVar39 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar45 = *(double *)&param_1->field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar6 = (double)((float)*puVar12 * fVar59 + *(float *)&this->MMin) -
              *(double *)&param_1->field_0x20;
      dVar7 = (double)(fVar67 * *(float *)((longlong)puVar12 + 4) +
                      *(float *)&(this->MMin).field_0x4) - *(double *)&param_1->field_0x28;
      uVar57 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar29._8_4_ = SUB84(dVar45,0);
      auVar29._0_8_ = dVar39;
      uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar29._12_4_ = uVar46;
      auVar34._8_4_ = SUB84(dVar45,0);
      auVar34._0_8_ = dVar39;
      auVar34._12_4_ = uVar46;
      auVar24._8_4_ = SUB84(dVar5,0);
      auVar24._0_8_ = dVar4;
      auVar24._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar35 = blendpd(auVar34,auVar24,2);
      dVar40 = auVar29._8_8_;
      auVar60._8_4_ = SUB84(dVar7,0);
      auVar60._0_8_ = dVar6;
      auVar60._12_4_ = uVar57;
      auVar15._8_4_ = SUB84(dVar4,0);
      auVar15._0_8_ = dVar40;
      auVar15._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar23._8_4_ = SUB84(dVar7,0);
      auVar23._0_8_ = dVar6;
      auVar23._12_4_ = uVar57;
      auVar61._0_8_ = auVar60._8_8_ * dVar39 - dVar40 * dVar6;
      auVar61._8_8_ = dVar28 * dVar45 - auVar15._8_8_ * dVar7;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar28;
      auVar24 = blendpd(auVar23,auVar18,2);
      auVar25._0_8_ = auVar24._0_8_ * dVar4 - dVar28 * auVar35._0_8_;
      auVar25._8_8_ = auVar24._8_8_ * dVar5 - auVar35._8_8_ * 0.0;
      dVar1 = auVar61._8_8_ + auVar61._8_8_;
      dVar2 = auVar25._0_8_ + auVar25._0_8_;
      uVar46 = SUB84(dVar2,0);
      uVar57 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar24 = blendpd(auVar61,auVar25,2);
      auVar52._8_4_ = uVar46;
      auVar52._0_8_ = dVar1;
      auVar52._12_4_ = uVar57;
      auVar16._8_4_ = uVar46;
      auVar16._0_8_ = dVar1;
      auVar16._12_4_ = uVar57;
      auVar47._8_4_ = uVar46;
      auVar47._0_8_ = dVar1;
      auVar47._12_4_ = uVar57;
      auVar62._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar62._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar9._4_8_ = dVar45;
      auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar41._0_8_ = auVar9._0_8_ << 0x20;
      auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar53._0_8_ = auVar52._8_8_ * dVar39 - dVar1 * dVar40;
      auVar53._8_8_ = auVar62._0_8_ * dVar45 - auVar16._8_8_ * dVar4;
      auVar24 = blendpd(auVar47,auVar62,2);
      auVar17._8_4_ = SUB84(auVar62._8_8_,0);
      auVar17._0_8_ = auVar62._0_8_;
      auVar17._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
      auVar36._0_8_ =
           (double)CONCAT44(*(uint *)&param_1->field_0x44 &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)&param_1->field_0x40 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar36._8_4_ = *(uint *)&param_1->field_0x48 & _UNK_15061cc88;
      auVar36._12_4_ = *(uint *)&param_1->field_0x4c & _UNK_15061cc8c;
      lVar13 = -(ulonglong)(auVar36._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar14 = -(ulonglong)(auVar36._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar48._0_8_ = auVar24._0_8_ * dVar4 - auVar62._0_8_ * auVar35._0_8_;
      auVar48._8_8_ = auVar24._8_8_ * dVar5 - auVar17._8_8_ * auVar35._8_8_;
      auVar24 = *(undefined1 (*) [16])&param_1->field_0x50;
      auVar42._8_8_ = auVar41._8_8_;
      auVar42._0_8_ = auVar24._0_8_;
      auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])&param_1->field_0x40);
      auVar37._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar18._4_4_,
                            ~(uint)lVar13 & auVar18._0_4_);
      auVar37._8_4_ = ~(uint)lVar14 & auVar18._8_4_;
      auVar37._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar18._12_4_;
      lVar13 = -(ulonglong)
                ((double)CONCAT44(auVar24._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar24._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar35._8_4_ = SUB84(auVar53._8_8_,0);
      auVar35._0_8_ = auVar53._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
      auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
      fVar56 = (float)(auVar37._0_8_ * (dVar1 * dVar5 + dVar6 + auVar35._8_8_));
      fVar58 = (float)(auVar37._8_8_ * (dVar2 * dVar5 + dVar7 + auVar48._0_8_));
      auVar18 = blendpd(auVar53,auVar48,2);
      fVar33 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar24._4_4_,
                                        ~(uint)lVar13 & auVar24._0_4_) *
                      (auVar62._0_8_ * dVar5 + dVar28 + auVar18._0_8_));
      local_148 = fVar56;
      if (fVar56 <= fVar68) {
        local_148 = fVar68;
      }
      if (local_178 <= fVar56) {
        fVar56 = local_178;
      }
      local_144 = fVar58;
      if (fVar58 <= fVar69) {
        local_144 = fVar69;
      }
      if (local_174 <= fVar58) {
        fVar58 = local_174;
      }
      local_140 = fVar33;
      if (fVar33 <= fVar51) {
        local_140 = fVar51;
      }
      if (local_170 <= fVar33) {
        fVar33 = local_170;
      }
      if (local_f8 == 0) {
        local_f4 = 0x3f800000;
        puVar12 = &local_f4;
        local_ec = local_f8;
      }
      else {
        if (local_f8 == 1) {
          local_154 = 0;
          uStack_150 = 0x3f800000;
          local_14c = 0;
        }
        else {
          local_154 = 0;
          uStack_150 = 0;
          local_14c = 0x3f800000;
        }
        puVar12 = (undefined8 *)&local_154;
      }
      dVar4 = *(double *)&param_1->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar5 = *(double *)&param_1->field_0x18 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar6 = (double)(*(float *)&this->MMax - (float)*puVar12 * fVar59) -
              *(double *)&param_1->field_0x20;
      dVar7 = (double)(*(float *)&(this->MMax).field_0x4 -
                      fVar67 * *(float *)((longlong)puVar12 + 4)) - *(double *)&param_1->field_0x28;
      uVar46 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar63._8_4_ = SUB84(dVar7,0);
      auVar63._0_8_ = dVar6;
      auVar63._12_4_ = uVar46;
      auVar26._8_4_ = SUB84(dVar7,0);
      auVar26._0_8_ = dVar6;
      auVar26._12_4_ = uVar46;
      dVar40 = (double)(*(float *)&(this->MMax).field_0x8 - fVar66 * *(float *)(puVar12 + 1)) -
               *(double *)&param_1->field_0x30;
      dVar39 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar45 = *(double *)&param_1->field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar30._8_4_ = SUB84(dVar45,0);
      auVar30._0_8_ = dVar39;
      uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar30._12_4_ = uVar46;
      auVar38._8_4_ = SUB84(dVar45,0);
      auVar38._0_8_ = dVar39;
      auVar38._12_4_ = uVar46;
      dVar28 = auVar30._8_8_;
      auVar19._8_4_ = SUB84(dVar4,0);
      auVar19._0_8_ = dVar28;
      auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar4;
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar18 = blendpd(auVar38,auVar3,2);
      auVar64._0_8_ = auVar63._8_8_ * dVar39 - dVar28 * dVar6;
      auVar64._8_8_ = dVar40 * dVar45 - auVar19._8_8_ * dVar7;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar40;
      auVar24 = blendpd(auVar26,auVar8,2);
      auVar27._0_8_ = auVar24._0_8_ * dVar4 - dVar40 * auVar18._0_8_;
      auVar27._8_8_ = auVar24._8_8_ * dVar5 - auVar18._8_8_ * 0.0;
      dVar1 = auVar64._8_8_ + auVar64._8_8_;
      dVar2 = auVar27._0_8_ + auVar27._0_8_;
      uVar46 = SUB84(dVar2,0);
      uVar57 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar24 = blendpd(auVar64,auVar27,2);
      auVar54._8_4_ = uVar46;
      auVar54._0_8_ = dVar1;
      auVar54._12_4_ = uVar57;
      auVar20._8_4_ = uVar46;
      auVar20._0_8_ = dVar1;
      auVar20._12_4_ = uVar57;
      auVar10._4_8_ = dVar4;
      auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar31._0_8_ = auVar10._0_8_ << 0x20;
      auVar31._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar31._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar49._8_4_ = uVar46;
      auVar49._0_8_ = dVar1;
      auVar49._12_4_ = uVar57;
      auVar65._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar65._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar43._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)&param_1->field_0x44,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)&param_1->field_0x40);
      auVar43._8_4_ = _UNK_15061cc88 & *(uint *)&param_1->field_0x48;
      auVar43._12_4_ = _UNK_15061cc8c & *(uint *)&param_1->field_0x4c;
      lVar13 = -(ulonglong)(auVar43._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar14 = -(ulonglong)(auVar43._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar55._0_8_ = auVar54._8_8_ * dVar39 - dVar1 * dVar28;
      auVar55._8_8_ = auVar65._0_8_ * dVar45 - auVar20._8_8_ * dVar4;
      auVar24 = blendpd(auVar49,auVar65,2);
      auVar21._8_4_ = SUB84(auVar65._8_8_,0);
      auVar21._0_8_ = auVar65._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
      auVar50._0_8_ = auVar24._0_8_ * dVar4 - auVar65._0_8_ * auVar18._0_8_;
      auVar50._8_8_ = auVar24._8_8_ * dVar5 - auVar21._8_8_ * auVar18._8_8_;
      auVar24 = *(undefined1 (*) [16])&param_1->field_0x50;
      auVar32._8_8_ = auVar31._8_8_;
      auVar32._0_8_ = auVar24._0_8_;
      auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])&param_1->field_0x40);
      auVar44._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar18._4_4_,
                            ~(uint)lVar13 & auVar18._0_4_);
      auVar44._8_4_ = ~(uint)lVar14 & auVar18._8_4_;
      auVar44._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar18._12_4_;
      lVar13 = -(ulonglong)
                ((double)CONCAT44(auVar24._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar24._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar22._8_4_ = SUB84(auVar55._8_8_,0);
      auVar22._0_8_ = auVar55._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      fVar68 = (float)(auVar44._0_8_ * (dVar1 * dVar5 + dVar6 + auVar22._8_8_));
      local_f8 = local_f8 + 1;
      fVar69 = (float)(auVar44._8_8_ * (dVar2 * dVar5 + dVar7 + auVar50._0_8_));
      local_174 = fVar69;
      if (fVar58 <= fVar69) {
        local_174 = fVar58;
      }
      if (fVar69 <= local_144) {
        fVar69 = local_144;
      }
      auVar18 = blendpd(auVar55,auVar50,2);
      fVar51 = (float)((double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar24._4_4_,
                                        ~(uint)lVar13 & auVar24._0_4_) *
                      (auVar65._0_8_ * dVar5 + dVar40 + auVar18._0_8_));
      local_170 = fVar51;
      if (fVar33 <= fVar51) {
        local_170 = fVar33;
      }
      local_178 = fVar68;
      if (fVar56 <= fVar68) {
        local_178 = fVar56;
      }
      if (fVar68 <= local_148) {
        fVar68 = local_148;
      }
      if (fVar51 <= local_140) {
        fVar51 = local_140;
      }
    } while (local_f8 < 3);
    *(ulonglong *)&__return_storage_ptr__->MMin = CONCAT44(local_174,local_178);
    *(ulonglong *)&__return_storage_ptr__->MMax = CONCAT44(fVar69,fVar68);
    *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar51;
    *(float *)&(__return_storage_ptr__->MMin).field_0x8 = local_170;
  }
  return __return_storage_ptr__;
}

// InverseTransformedAABB @ 14362c3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::InverseTransformedAABB
          (TAABB<double,3> *this,TAABB<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  int iVar11;
  TVector<double> *pTVar12;
  TVector<double>_u_0 *pTVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar25;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar54;
  undefined4 uVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  double dVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  TVector<double>_u_0 local_1a8;
  double local_190;
  double local_188;
  double local_180;
  TVector<double>_u_0 local_178;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined1 local_138 [16];
  double local_128;
  double local_118;
  double dStack_110;
  double local_100;
  double dStack_f8;
  
  if (bChaos_AABBTransform_Optimized) {
    InverseTransformedAABBHelper2<double,double>(__return_storage_ptr__,this,param_1);
  }
  else if ((*(double *)&this->MMax == __real_7fefffffffffffff) ||
          (*(double *)&this->MMin == __real_7fefffffffffffff)) {
    uVar10 = *(undefined8 *)&(this->MMin).field_0x8;
    *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&this->MMin;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar10;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 =
         *(undefined8 *)&(this->MMin).field_0x10;
    uVar10 = *(undefined8 *)&(this->MMax).field_0x8;
    *(undefined8 *)&__return_storage_ptr__->MMax = *(undefined8 *)&this->MMax;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar10;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 =
         *(undefined8 *)&(this->MMax).field_0x10;
  }
  else {
    dVar73 = *(double *)&this->MMax - *(double *)&this->MMin;
    local_160 = *(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8;
    local_1a8._s_0.Z = (double)*(undefined8 *)&(this->MMin).field_0x10;
    dVar26 = *(double *)&(this->MMax).field_0x10 - *(double *)&(this->MMin).field_0x10;
    local_1a8._s_0.X = (double)*(undefined8 *)&this->MMin;
    local_1a8._s_0.Y = (double)*(undefined8 *)&(this->MMin).field_0x8;
    local_158 = dVar26;
    local_150 = dVar73;
    pTVar12 = UE::Math::TTransform<double>::InverseTransformPosition
                        ((TTransform<double> *)param_1,(TVector<double> *)&local_178._s_0,
                         (TVector<double> *)&local_1a8._s_0);
    local_1a8._s_0.X = (double)*(undefined8 *)&this->MMax;
    local_1a8._s_0.Y = (double)*(undefined8 *)&(this->MMax).field_0x8;
    local_1a8._s_0.Z = (double)*(undefined8 *)&(this->MMax).field_0x10;
    dVar27 = (pTVar12->field0_0x0)._s_0.X;
    dStack_110 = (pTVar12->field0_0x0)._s_0.Y;
    dVar25 = (pTVar12->field0_0x0)._s_0.Z;
    uVar56 = SUB84(dVar25,0);
    uVar66 = (undefined4)((ulonglong)dVar25 >> 0x20);
    local_118 = dVar27;
    local_100 = dVar27;
    dStack_f8 = dStack_110;
    pTVar12 = UE::Math::TTransform<double>::InverseTransformPosition
                        ((TTransform<double> *)param_1,(TVector<double> *)&local_178._s_0,
                         (TVector<double> *)&local_1a8._s_0);
    local_138 = *(undefined1 (*) [16])&pTVar12->field0_0x0;
    local_178._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
    iVar11 = 0;
    auVar29 = local_138;
    if (dVar27 <= local_138._0_8_) {
      auVar29._8_8_ = local_138._8_8_;
      auVar29._0_8_ = dVar27;
    }
    if (local_178._s_0.Z <= dVar25) {
      uVar56 = SUB84(local_178._s_0.Z,0);
      uVar66 = (undefined4)((ulonglong)local_178._s_0.Z >> 0x20);
    }
    local_148 = dVar25;
    if (dVar25 <= local_178._s_0.Z) {
      local_148 = local_178._s_0.Z;
    }
    local_190 = auVar29._0_8_;
    auVar5._4_8_ = auVar29._8_8_;
    auVar5._0_4_ = local_138._4_4_;
    auVar41._0_8_ = auVar5._0_8_ << 0x20;
    auVar41._8_4_ = local_138._8_4_;
    auVar41._12_4_ = local_138._12_4_;
    dVar25 = auVar41._8_8_;
    if (local_138._0_8_ <= dVar27) {
      local_138._0_8_ = dVar27;
    }
    if (dVar25 <= dStack_110) {
      dStack_110 = dVar25;
    }
    local_180 = (double)CONCAT44(uVar66,uVar56);
    local_128 = dStack_f8;
    if (dStack_f8 <= dVar25) {
      local_128 = dVar25;
    }
    local_188 = dStack_110;
    do {
      if (iVar11 == 0) {
        pTVar13 = &local_178;
        local_178._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_178._s_0.Y = _UNK_150689518;
        local_178._s_0.Z = 0.0;
      }
      else {
        if (iVar11 == 1) {
          local_1a8._s_0.Z = 0.0;
          local_1a8._s_0.X = ___xmm_3ff00000000000000000000000000000;
          local_1a8._s_0.Y = _UNK_15061cbc8;
        }
        else {
          local_1a8._s_0.Z = __real_3ff0000000000000;
          local_1a8._s_0.X = 0.0;
          local_1a8._s_0.Y = 0.0;
        }
        pTVar13 = &local_1a8;
      }
      dVar48 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar54 = *(double *)&param_1->field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar25 = *(double *)&param_1->field_0x10 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar27 = *(double *)&param_1->field_0x18 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar66 = SUB84(dVar27,0);
      uVar67 = (undefined4)((ulonglong)dVar27 >> 0x20);
      auVar74._8_4_ = uVar66;
      auVar74._0_8_ = dVar25;
      auVar74._12_4_ = uVar67;
      dVar39 = (dVar26 * pTVar13->XYZ[2] + *(double *)&(this->MMin).field_0x10) -
               *(double *)&param_1->field_0x30;
      dVar49 = auVar74._8_8_;
      auVar40._8_4_ = SUB84(dVar54,0);
      auVar40._0_8_ = dVar48;
      uVar56 = (undefined4)((ulonglong)dVar54 >> 0x20);
      auVar40._12_4_ = uVar56;
      auVar70._8_4_ = uVar66;
      auVar70._0_8_ = dVar25;
      auVar70._12_4_ = uVar67;
      auVar41 = blendpd(auVar40,auVar70,2);
      auVar34._8_4_ = SUB84(dVar54,0);
      auVar34._0_8_ = dVar48;
      auVar34._12_4_ = uVar56;
      dVar26 = (dVar73 * (pTVar13->_s_0).X + *(double *)&this->MMin) -
               *(double *)&param_1->field_0x20;
      dVar73 = (local_160 * pTVar13->XYZ[1] + *(double *)&(this->MMin).field_0x8) -
               *(double *)&param_1->field_0x28;
      uVar56 = (undefined4)((ulonglong)dVar73 >> 0x20);
      dVar38 = auVar34._8_8_;
      auVar17._8_4_ = SUB84(dVar25,0);
      auVar17._0_8_ = dVar38;
      auVar17._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      auVar68._8_4_ = SUB84(dVar73,0);
      auVar68._0_8_ = dVar26;
      auVar68._12_4_ = uVar56;
      auVar28._8_4_ = SUB84(dVar73,0);
      auVar28._0_8_ = dVar26;
      auVar28._12_4_ = uVar56;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar39;
      auVar29 = blendpd(auVar28,auVar4,2);
      auVar69._0_8_ = auVar68._8_8_ * dVar48 - dVar38 * dVar26;
      auVar69._8_8_ = dVar39 * dVar54 - auVar17._8_8_ * dVar73;
      auVar62._8_4_ = SUB84(auVar69._8_8_,0);
      auVar62._0_8_ = auVar69._0_8_;
      auVar62._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      auVar30._0_8_ = auVar29._0_8_ * dVar25 - auVar41._0_8_ * dVar39;
      auVar30._8_8_ = auVar29._8_8_ * dVar27 - auVar41._8_8_ * 0.0;
      auVar29 = *(undefined1 (*) [16])&param_1->field_0x50;
      auVar70 = blendpd(auVar69,auVar30,2);
      dVar61 = auVar62._8_8_ + auVar62._8_8_;
      dVar65 = auVar30._0_8_ + auVar30._0_8_;
      auVar71._0_8_ = auVar70._0_8_ + auVar70._0_8_;
      auVar71._8_8_ = auVar70._8_8_ + auVar70._8_8_;
      auVar57._8_4_ = SUB84(dVar65,0);
      auVar57._0_8_ = dVar61;
      uVar56 = (undefined4)((ulonglong)dVar65 >> 0x20);
      auVar57._12_4_ = uVar56;
      auVar31._8_4_ = uVar66;
      auVar31._0_8_ = dVar49;
      auVar31._12_4_ = uVar67;
      dVar47 = auVar41._8_8_ * auVar71._8_8_;
      auVar50._8_4_ = SUB84(dVar65,0);
      auVar50._0_8_ = dVar61;
      auVar50._12_4_ = uVar56;
      auVar70 = blendpd(auVar50,auVar71,2);
      lVar14 = -(ulonglong)
                ((double)CONCAT44(*(uint *)&param_1->field_0x44 &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  *(uint *)&param_1->field_0x40 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar16 = -(ulonglong)
                ((double)CONCAT44(*(uint *)&param_1->field_0x4c & _UNK_15061cc8c,
                                  *(uint *)&param_1->field_0x48 & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar51._0_8_ = auVar70._0_8_ * dVar25 - auVar41._0_8_ * auVar71._0_8_;
      auVar51._8_8_ = auVar70._8_8_ * dVar27 - dVar47;
      auVar6._4_8_ = dVar47;
      auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar42._0_8_ = auVar6._0_8_ << 0x20;
      uVar1 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar42._8_4_ = uVar1;
      uVar2 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar42._12_4_ = uVar2;
      auVar43._8_8_ = auVar42._8_8_;
      auVar43._0_8_ = auVar29._0_8_;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])&param_1->field_0x40);
      auVar58._0_8_ = auVar57._8_8_ * dVar48 - dVar38 * dVar61;
      auVar58._8_8_ = auVar71._0_8_ * dVar54 - dVar25 * dVar65;
      auVar18._8_4_ = SUB84(auVar58._8_8_,0);
      auVar18._0_8_ = auVar58._0_8_;
      auVar18._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
      lVar15 = -(ulonglong)
                ((double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar43);
      dVar25 = (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar41._4_4_,
                                ~(uint)lVar14 & auVar41._0_4_) *
               (dVar49 * dVar61 + dVar26 + auVar18._8_8_);
      dVar26 = (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar41._12_4_,
                                ~(uint)lVar16 & auVar41._8_4_) *
               (auVar31._8_8_ * dVar65 + dVar73 + auVar51._0_8_);
      uVar56 = SUB84(dVar26,0);
      uVar66 = (undefined4)((ulonglong)dVar26 >> 0x20);
      auVar19._8_4_ = uVar56;
      auVar19._0_8_ = dVar25;
      auVar19._12_4_ = uVar66;
      if (local_190 <= dVar25) {
        auVar19._0_8_ = local_190;
      }
      local_190 = auVar19._0_8_;
      auVar7._4_8_ = auVar19._8_8_;
      auVar7._0_4_ = (int)((ulonglong)dVar25 >> 0x20);
      auVar20._0_8_ = auVar7._0_8_ << 0x20;
      auVar20._8_4_ = uVar56;
      auVar20._12_4_ = uVar66;
      dVar26 = auVar20._8_8_;
      dVar73 = dVar26;
      if (local_188 <= dVar26) {
        dVar73 = local_188;
      }
      if (dVar25 <= (double)local_138._0_8_) {
        dVar25 = (double)local_138._0_8_;
      }
      if (dVar26 <= local_128) {
        dVar26 = local_128;
      }
      local_188 = dVar73;
      auVar41 = blendpd(auVar58,auVar51,2);
      auVar3._8_4_ = uVar56;
      auVar3._0_8_ = dVar25;
      auVar3._12_4_ = uVar66;
      local_178._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar29._4_4_,
                            ~(uint)lVar15 & auVar29._0_4_) *
           (dVar49 * auVar71._0_8_ + dVar39 + auVar41._0_8_);
      dVar27 = local_178._s_0.Z;
      if (local_180 <= local_178._s_0.Z) {
        dVar27 = local_180;
      }
      dVar38 = local_178._s_0.Z;
      if (local_178._s_0.Z <= local_148) {
        dVar38 = local_148;
      }
      local_180 = dVar27;
      if (iVar11 == 0) {
        local_178._s_0.Z = 0.0;
        pTVar13 = &local_178;
        local_178._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_178._s_0.Y = _UNK_150689518;
      }
      else {
        if (iVar11 == 1) {
          local_1a8._s_0.Z = 0.0;
          local_1a8._s_0.X = ___xmm_3ff00000000000000000000000000000;
          local_1a8._s_0.Y = _UNK_15061cbc8;
        }
        else {
          local_1a8._s_0.Z = __real_3ff0000000000000;
          local_1a8._s_0.X = 0.0;
          local_1a8._s_0.Y = 0.0;
        }
        pTVar13 = &local_1a8;
      }
      auVar72._0_8_ =
           *(double *)&param_1->field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar72._8_8_ =
           *(double *)&param_1->field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar48 = (*(double *)&this->MMax - local_150 * (pTVar13->_s_0).X) -
               *(double *)&param_1->field_0x20;
      dVar54 = (*(double *)&(this->MMax).field_0x8 - local_160 * pTVar13->XYZ[1]) -
               *(double *)&param_1->field_0x28;
      uVar66 = (undefined4)((ulonglong)dVar54 >> 0x20);
      dVar49 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar55 = *(double *)&param_1->field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar75._8_4_ = SUB84(dVar54,0);
      auVar75._0_8_ = dVar48;
      auVar75._12_4_ = uVar66;
      dVar61 = (*(double *)&(this->MMax).field_0x10 - local_158 * pTVar13->XYZ[2]) -
               *(double *)&param_1->field_0x30;
      auVar35._8_4_ = SUB84(dVar55,0);
      auVar35._0_8_ = dVar49;
      uVar56 = (undefined4)((ulonglong)dVar55 >> 0x20);
      auVar35._12_4_ = uVar56;
      auVar44._8_4_ = SUB84(dVar55,0);
      auVar44._0_8_ = dVar49;
      auVar44._12_4_ = uVar56;
      auVar78._8_8_ = 0;
      auVar78._0_8_ = dVar61;
      dVar65 = auVar35._8_8_;
      auVar41 = blendpd(auVar44,auVar72,2);
      auVar21._8_4_ = SUB84(auVar72._0_8_,0);
      auVar21._0_8_ = dVar65;
      auVar21._12_4_ = (int)((ulonglong)auVar72._0_8_ >> 0x20);
      auVar32._8_4_ = SUB84(dVar54,0);
      auVar32._0_8_ = dVar48;
      auVar32._12_4_ = uVar66;
      auVar76._0_8_ = auVar75._8_8_ * dVar49 - dVar65 * dVar48;
      auVar76._8_8_ = dVar61 * dVar55 - auVar21._8_8_ * dVar54;
      auVar29 = blendpd(auVar32,auVar78,2);
      auVar33._0_8_ = auVar29._0_8_ * auVar72._0_8_ - dVar61 * auVar41._0_8_;
      auVar33._8_8_ = auVar29._8_8_ * auVar72._8_8_ - auVar41._8_8_ * 0.0;
      dVar39 = auVar76._8_8_ + auVar76._8_8_;
      dVar47 = auVar33._0_8_ + auVar33._0_8_;
      uVar56 = SUB84(dVar47,0);
      uVar66 = (undefined4)((ulonglong)dVar47 >> 0x20);
      auVar29 = blendpd(auVar76,auVar33,2);
      auVar63._8_4_ = uVar56;
      auVar63._0_8_ = dVar39;
      auVar63._12_4_ = uVar66;
      auVar22._8_4_ = uVar56;
      auVar22._0_8_ = dVar39;
      auVar22._12_4_ = uVar66;
      auVar8._4_8_ = auVar72._0_8_;
      auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar36._0_8_ = auVar8._0_8_ << 0x20;
      auVar36._8_4_ = uVar1;
      auVar36._12_4_ = uVar2;
      auVar59._8_4_ = uVar56;
      auVar59._0_8_ = dVar39;
      auVar59._12_4_ = uVar66;
      auVar77._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar77._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      auVar52._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)&param_1->field_0x44,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)&param_1->field_0x40);
      auVar52._8_4_ = _UNK_15061cc88 & *(uint *)&param_1->field_0x48;
      auVar52._12_4_ = _UNK_15061cc8c & *(uint *)&param_1->field_0x4c;
      lVar14 = -(ulonglong)(auVar52._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar15 = -(ulonglong)(auVar52._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar64._0_8_ = auVar63._8_8_ * dVar49 - dVar39 * dVar65;
      auVar64._8_8_ = auVar77._0_8_ * dVar55 - auVar22._8_8_ * auVar72._0_8_;
      auVar29 = blendpd(auVar59,auVar77,2);
      auVar23._8_4_ = SUB84(auVar77._8_8_,0);
      auVar23._0_8_ = auVar77._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
      auVar60._0_8_ = auVar29._0_8_ * auVar72._0_8_ - auVar77._0_8_ * auVar41._0_8_;
      auVar60._8_8_ = auVar29._8_8_ * auVar72._8_8_ - auVar23._8_8_ * auVar41._8_8_;
      auVar29 = *(undefined1 (*) [16])&param_1->field_0x50;
      auVar37._8_8_ = auVar36._8_8_;
      auVar37._0_8_ = auVar29._0_8_;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])&param_1->field_0x40);
      auVar45._0_8_ =
           (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar45._8_4_ = uVar1 & _UNK_15061cc88;
      auVar45._12_4_ = uVar2 & _UNK_15061cc8c;
      auVar53._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar41._4_4_,
                            ~(uint)lVar14 & auVar41._0_4_);
      auVar53._8_4_ = ~(uint)lVar15 & auVar41._8_4_;
      auVar53._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar41._12_4_;
      lVar14 = -(ulonglong)(auVar45._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2])
      ;
      auVar24._8_4_ = SUB84(auVar64._8_8_,0);
      auVar24._0_8_ = auVar64._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
      dVar39 = auVar53._0_8_ * (dVar39 * auVar72._8_8_ + dVar48 + auVar24._8_8_);
      dVar47 = auVar53._8_8_ * (dVar47 * auVar72._8_8_ + dVar54 + auVar60._0_8_);
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
      if (dVar39 <= local_190) {
        local_190 = dVar39;
      }
      iVar11 = iVar11 + 1;
      auVar9._4_8_ = -(ulonglong)
                      (auVar45._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
      auVar9._0_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar46._0_8_ = auVar9._0_8_ << 0x20;
      auVar46._8_4_ = SUB84(dVar47,0);
      auVar46._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      local_128 = auVar46._8_8_;
      auVar41 = blendpd(auVar64,auVar60,2);
      local_188 = local_128;
      if (dVar73 <= local_128) {
        local_188 = dVar73;
      }
      if (local_128 <= dVar26) {
        local_128 = dVar26;
      }
      local_178._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar29._4_4_,
                            ~(uint)lVar14 & auVar29._0_4_) *
           (auVar77._0_8_ * auVar72._8_8_ + dVar61 + auVar41._0_8_);
      local_138._8_8_ = auVar3._8_8_;
      local_180 = local_178._s_0.Z;
      if (dVar27 <= local_178._s_0.Z) {
        local_180 = dVar27;
      }
      if (dVar25 <= dVar39) {
        dVar25 = dVar39;
      }
      local_148 = local_178._s_0.Z;
      if (local_178._s_0.Z <= dVar38) {
        local_148 = dVar38;
      }
      local_138._0_8_ = dVar25;
      dVar26 = local_158;
      dVar73 = local_150;
    } while (iVar11 < 3);
    *(double *)&__return_storage_ptr__->MMin = local_190;
    *(double *)&(__return_storage_ptr__->MMin).field_0x8 = local_188;
    *(double *)&(__return_storage_ptr__->MMin).field_0x10 = local_180;
    *(double *)&__return_storage_ptr__->MMax = dVar25;
    *(double *)&(__return_storage_ptr__->MMax).field_0x8 = local_128;
    *(double *)&(__return_storage_ptr__->MMax).field_0x10 = local_148;
  }
  return __return_storage_ptr__;
}

// IsConvex @ 14362cb70

bool __thiscall Chaos::TAABB<float,3>::IsConvex(TAABB<float,3> *this)

{
  return true;
}

// IsConvex @ 14362cb80

bool __thiscall Chaos::TAABB<double,3>::IsConvex(TAABB<double,3> *this)

{
  return true;
}

// IsEmpty @ 14362cb90

bool __thiscall Chaos::TAABB<float,3>::IsEmpty(TAABB<float,3> *this)

{
  if (__real_7f7fffff == *(float *)&this->MMin) {
    return true;
  }
  return false;
}

// IsEmpty @ 14362cbb0

bool __thiscall Chaos::TAABB<double,3>::IsEmpty(TAABB<double,3> *this)

{
  if (__real_7fefffffffffffff == *(double *)&this->MMin) {
    return true;
  }
  return false;
}

// IsFull @ 14362cbd0

bool __thiscall Chaos::TAABB<float,3>::IsFull(TAABB<float,3> *this)

{
  if (__real_7f7fffff == *(float *)&this->MMax) {
    return true;
  }
  return false;
}

// IsFull @ 14362cbf0

bool __thiscall Chaos::TAABB<double,3>::IsFull(TAABB<double,3> *this)

{
  if (__real_7fefffffffffffff == *(double *)&this->MMax) {
    return true;
  }
  return false;
}

// LargestAxis @ 14362cc10

int __thiscall Chaos::TAABB<float,3>::LargestAxis(TAABB<float,3> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4;
  fVar3 = *(float *)&this->MMax - *(float *)&this->MMin;
  fVar1 = *(float *)&(this->MMax).field_0x8 - *(float *)&(this->MMin).field_0x8;
  if ((fVar2 < fVar3) && (fVar1 < fVar3)) {
    return 0;
  }
  return (fVar2 <= fVar1) + 1;
}

// LargestAxis @ 14362cc50

int __thiscall Chaos::TAABB<double,3>::LargestAxis(TAABB<double,3> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8;
  dVar3 = *(double *)&this->MMax - *(double *)&this->MMin;
  dVar1 = *(double *)&(this->MMax).field_0x10 - *(double *)&(this->MMin).field_0x10;
  if ((dVar2 < dVar3) && (dVar1 < dVar3)) {
    return 0;
  }
  return (dVar2 <= dVar1) + 1;
}

// LocalScale @ 14362cc90

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::LocalScale(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *(float *)&this->MMax - *(float *)&this->MMin;
  fVar4 = *(float *)&(this->MMax).field_0x4 - *(float *)&(this->MMin).field_0x4;
  fVar6 = *(float *)&(this->MMax).field_0x8 - *(float *)&(this->MMin).field_0x8;
  fVar1 = fVar2 * __real_3f000000 + *(float *)&this->MMin;
  fVar3 = fVar2 * *(float *)param_1 * __real_3f000000;
  fVar5 = fVar4 * *(float *)&param_1->field_0x4 * __real_3f000000;
  fVar7 = fVar6 * *(float *)&param_1->field_0x8 * __real_3f000000;
  fVar4 = fVar4 * __real_3f000000 + *(float *)&(this->MMin).field_0x4;
  fVar2 = fVar6 * __real_3f000000 + *(float *)&(this->MMin).field_0x8;
  *(float *)&this->MMin = fVar1 - fVar3;
  *(float *)&(this->MMin).field_0x4 = fVar4 - fVar5;
  *(float *)&(this->MMin).field_0x8 = fVar2 - fVar7;
  *(float *)&this->MMax = fVar1 + fVar3;
  *(float *)&(this->MMax).field_0x4 = fVar5 + fVar4;
  *(float *)&(this->MMax).field_0x8 = fVar7 + fVar2;
  return this;
}

// LocalScale @ 14362cd80

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::LocalScale(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = *(double *)&this->MMax - *(double *)&this->MMin;
  dVar6 = *(double *)&(this->MMax).field_0x8 - *(double *)&(this->MMin).field_0x8;
  dVar4 = *(double *)&(this->MMax).field_0x10 - *(double *)&(this->MMin).field_0x10;
  dVar1 = dVar2 * __real_3fe0000000000000 + *(double *)&this->MMin;
  dVar2 = dVar2 * *(double *)param_1 * __real_3fe0000000000000;
  dVar3 = dVar6 * *(double *)&param_1->field_0x8 * __real_3fe0000000000000;
  dVar5 = dVar4 * *(double *)&param_1->field_0x10 * __real_3fe0000000000000;
  dVar7 = dVar6 * __real_3fe0000000000000 + *(double *)&(this->MMin).field_0x8;
  dVar6 = dVar4 * __real_3fe0000000000000 + *(double *)&(this->MMin).field_0x10;
  *(double *)&this->MMin = dVar1 - dVar2;
  *(double *)&(this->MMin).field_0x8 = dVar7 - dVar3;
  *(double *)&(this->MMin).field_0x10 = dVar6 - dVar5;
  *(double *)&this->MMax = dVar1 + dVar2;
  *(double *)&(this->MMax).field_0x8 = dVar3 + dVar7;
  *(double *)&(this->MMax).field_0x10 = dVar5 + dVar6;
  return this;
}

// Max @ 14362ce70

TVector<float,3> * __thiscall Chaos::TAABB<float,3>::Max(TAABB<float,3> *this)

{
  return &this->MMax;
}

// Max @ 14362ce80

TVector<double,3> * __thiscall Chaos::TAABB<double,3>::Max(TAABB<double,3> *this)

{
  return &this->MMax;
}

// Min @ 14362ce90

TVector<float,3> * __thiscall Chaos::TAABB<float,3>::Min(TAABB<float,3> *this)

{
  return &this->MMin;
}

// Min @ 14362cea0

TVector<double,3> * __thiscall Chaos::TAABB<double,3>::Min(TAABB<double,3> *this)

{
  return &this->MMin;
}

// MoveByVector @ 14362ceb0

void __thiscall Chaos::TAABB<float,3>::MoveByVector(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)&param_1->field_0x4;
  fVar3 = *(float *)&param_1->field_0x8;
  *(float *)&this->MMin = fVar1 + *(float *)&this->MMin;
  *(float *)&(this->MMin).field_0x4 = fVar2 + *(float *)&(this->MMin).field_0x4;
  *(float *)&(this->MMin).field_0x8 = fVar3 + *(float *)&(this->MMin).field_0x8;
  fVar4 = *(float *)&(this->MMax).field_0x4;
  fVar5 = *(float *)&(this->MMax).field_0x8;
  *(float *)&this->MMax = fVar1 + *(float *)&this->MMax;
  *(float *)&(this->MMax).field_0x4 = fVar2 + fVar4;
  *(float *)&(this->MMax).field_0x8 = fVar3 + fVar5;
  return;
}

// MoveByVector @ 14362cf10

void __thiscall
Chaos::TAABB<double,3>::MoveByVector(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  *(double *)&this->MMin = dVar1 + *(double *)&this->MMin;
  *(double *)&(this->MMin).field_0x8 = dVar2 + *(double *)&(this->MMin).field_0x8;
  *(double *)&(this->MMin).field_0x10 = dVar3 + *(double *)&(this->MMin).field_0x10;
  dVar4 = *(double *)&(this->MMax).field_0x8;
  dVar5 = *(double *)&(this->MMax).field_0x10;
  *(double *)&this->MMax = dVar1 + *(double *)&this->MMax;
  *(double *)&(this->MMax).field_0x8 = dVar2 + dVar4;
  *(double *)&(this->MMax).field_0x10 = dVar3 + dVar5;
  return;
}

// OriginRadius @ 14362cf90

float __thiscall Chaos::TAABB<float,3>::OriginRadius(TAABB<float,3> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)(*(uint *)&(this->MMax).field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = (float)(*(uint *)&(this->MMin).field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  fVar1 = (float)(*(uint *)&this->MMin & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar2 = (float)(*(uint *)&(this->MMin).field_0x4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar3 = (float)(*(uint *)&(this->MMax).field_0x4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = (float)(*(uint *)&this->MMax & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4);
}

// OriginRadius @ 14362d000

double __thiscall Chaos::TAABB<double,3>::OriginRadius(TAABB<double,3> *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  double dVar5;
  double dVar6;
  uint uVar8;
  undefined1 auVar7 [16];
  uint uVar9;
  uint uVar10;
  double dVar11;
  
  uVar1 = *(undefined8 *)&(this->MMax).field_0x10;
  uVar2 = *(undefined8 *)&(this->MMin).field_0x10;
  dVar11 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar1 = *(undefined8 *)&(this->MMax).field_0x8;
  dVar5 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar11 <= dVar5) {
    dVar11 = dVar5;
  }
  uVar2 = *(undefined8 *)&(this->MMin).field_0x8;
  uVar9 = (uint)*(undefined8 *)&this->MMin & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = (uint)((ulonglong)*(undefined8 *)&this->MMin >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar6 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar5 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  uVar4 = (uint)*(undefined8 *)&this->MMax & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)*(undefined8 *)&this->MMax >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  auVar7._0_8_ = (double)CONCAT44(uVar8,uVar4);
  auVar7._8_8_ = 0;
  if ((double)CONCAT44(uVar10,uVar9) <= auVar7._0_8_) {
    uVar9 = uVar4;
    uVar10 = uVar8;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (double)CONCAT44(uVar10,uVar9) * (double)CONCAT44(uVar10,uVar9) + dVar5 * dVar5 +
                 dVar11 * dVar11;
  auVar7 = sqrtpd(auVar7,auVar3);
  return auVar7._0_8_;
}

// PhiWithNormal @ 14362d070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TAABB<float,3>::PhiWithNormal
          (TAABB<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double local_188 [6];
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_140 [4];
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  
  fVar1 = *(float *)&(this->MMin).field_0x4;
  fVar2 = *(float *)&(this->MMin).field_0x8;
  dVar11 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_1->field_0x8;
  dVar4 = *(double *)param_1;
  local_188[0] = (double)(*(float *)&this->MMin - (float)dVar4);
  local_140[0] = dVar4 - (double)*(float *)&this->MMax;
  dVar6 = (double)*(float *)&(this->MMax).field_0x8;
  local_188[1] = (double)(fVar1 - (float)dVar3);
  dVar5 = (double)*(float *)&(this->MMax).field_0x4;
  local_188[2] = (double)(fVar2 - (float)dVar11);
  local_140[2] = dVar11 - dVar6;
  local_140[1] = dVar3 - dVar5;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (((((double)*(float *)&this->MMax < dVar4) || (dVar5 < dVar3)) || (dVar6 < dVar11)) ||
     (((dVar4 < (double)*(float *)&this->MMin || (dVar3 < (double)fVar1)) ||
      (dVar11 < (double)fVar2)))) {
    lVar10 = 0;
    do {
      dVar11 = *(double *)((longlong)local_140 + lVar10);
      if (dVar11 <= 0.0) {
        dVar11 = *(double *)((longlong)local_188 + lVar10);
        if (dVar11 <= 0.0) {
          dVar11 = 0.0;
        }
        else {
          dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar13,
                                    SUB84(dVar11,0) ^ uVar12);
        }
      }
      *(double *)(&param_2->field_0x0 + lVar10) = dVar11;
      lVar10 = lVar10 + 8;
    } while (lVar10 < 0x18);
    dVar11 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
    if (__real_3f1a36e2e0000000 <= dVar11) {
      return dVar11;
    }
    if (*(double *)param_2 <= 0.0) {
      if (*(double *)param_2 < 0.0) {
        *(undefined8 *)param_2 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)param_2 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x8 <= 0.0) {
      if (*(double *)&param_2->field_0x8 < 0.0) {
        *(undefined8 *)&param_2->field_0x8 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x8 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x10 <= 0.0) {
      if (*(double *)&param_2->field_0x10 < 0.0) {
        *(undefined8 *)&param_2->field_0x10 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x10 = 0x3ff0000000000000;
    }
    UE::Math::TVector<double>::Normalize((TVector<double> *)param_2,__real_3e45798ee0000000);
    return dVar11;
  }
  if (local_140[2] <= local_188[2]) {
    local_140[2] = local_188[2];
  }
  if (local_140[1] <= local_188[1]) {
    local_140[1] = local_188[1];
  }
  if (local_140[0] <= local_188[0]) {
    local_140[0] = local_188[0];
  }
  if (local_140[0] <= local_140[1]) {
    if (local_140[2] < local_140[1]) {
      uVar7 = 1;
      goto LAB_14362d1f3;
    }
  }
  else if (local_140[2] < local_140[0]) {
    uVar7 = 0;
    local_140[1] = local_140[0];
    goto LAB_14362d1f3;
  }
  uVar7 = 2;
  local_140[1] = local_140[2];
LAB_14362d1f3:
  if (local_140[uVar7] <= local_188[uVar7]) {
    if (uVar7 == 0) {
      pdVar8 = &local_e0;
      local_e0 = ___xmm_00000000000000003ff0000000000000;
      uStack_d8 = _UNK_150689518;
      local_d0 = 0;
    }
    else {
      if (uVar7 == 1) {
        local_158 = ___xmm_3ff00000000000000000000000000000;
        uStack_150 = _UNK_15061cbc8;
        local_148 = 0;
      }
      else {
        local_158 = 0.0;
        uStack_150 = 0;
        local_148 = __real_3ff0000000000000;
      }
      pdVar8 = &local_158;
    }
    pdVar9 = local_140 + 3;
    local_120 = CONCAT44(*(uint *)((longlong)pdVar8 + 0xc) ^ uVar13,*(uint *)(pdVar8 + 1) ^ uVar12);
    local_140[3] = (double)CONCAT44(*(uint *)((longlong)pdVar8 + 4) ^ uVar13,
                                    *(uint *)pdVar8 ^ uVar12);
    local_118 = CONCAT44((uint)((ulonglong)pdVar8[2] >> 0x20) ^ uVar13,SUB84(pdVar8[2],0) ^ uVar12);
  }
  else {
    if (uVar7 == 0) {
      pdVar8 = &local_110;
      local_110 = ___xmm_00000000000000003ff0000000000000;
      uStack_108 = _UNK_150689518;
      local_100 = 0;
    }
    else {
      if (uVar7 == 1) {
        local_188[3] = ___xmm_3ff00000000000000000000000000000;
        local_188[4] = (double)_UNK_15061cbc8;
        local_188[5] = (double)0;
      }
      else {
        local_188[3] = 0.0;
        local_188[4] = 0.0;
        local_188[5] = (double)__real_3ff0000000000000;
      }
      pdVar8 = local_188 + 3;
    }
    pdVar9 = &local_f8;
    local_f8 = *pdVar8;
    dStack_f0 = pdVar8[1];
    local_e8 = pdVar8[2];
  }
  dVar3 = pdVar9[1];
  dVar11 = pdVar9[2];
  *(double *)param_2 = *pdVar9;
  *(double *)&param_2->field_0x8 = dVar3;
  *(double *)&param_2->field_0x10 = dVar11;
  return local_140[1];
}

// PhiWithNormal @ 14362d430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TAABB<double,3>::PhiWithNormal
          (TAABB<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  double *pdVar6;
  longlong lVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118 [7];
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  local_d8 = *(double *)&(this->MMin).field_0x10;
  dVar8 = *(double *)&param_1->field_0x10;
  local_118[5] = *(double *)&(this->MMin).field_0x10 - dVar8;
  dVar1 = *(double *)&param_1->field_0x8;
  local_118[4] = *(double *)&(this->MMin).field_0x8 - dVar1;
  dVar2 = *(double *)param_1;
  local_118[0] = dVar2 - *(double *)&this->MMax;
  local_118[2] = dVar8 - *(double *)&(this->MMax).field_0x10;
  local_118[1] = dVar1 - *(double *)&(this->MMax).field_0x8;
  local_118[3] = *(double *)&this->MMin - dVar2;
  local_c0 = *(double *)&(this->MMax).field_0x10;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((((*(double *)&this->MMax < dVar2) || (*(double *)&(this->MMax).field_0x8 < dVar1)) ||
      (local_c0 < dVar8)) ||
     (((dVar2 < *(double *)&this->MMin || (dVar1 < *(double *)&(this->MMin).field_0x8)) ||
      (dVar8 < local_d8)))) {
    lVar7 = 0;
    do {
      dVar8 = *(double *)((longlong)local_118 + lVar7);
      if (dVar8 <= 0.0) {
        dVar8 = *(double *)((longlong)local_118 + lVar7 + 0x18);
        if (dVar8 <= 0.0) {
          dVar8 = 0.0;
        }
        else {
          dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar10,SUB84(dVar8,0) ^ uVar9)
          ;
        }
      }
      *(double *)(&param_2->field_0x0 + lVar7) = dVar8;
      lVar7 = lVar7 + 8;
    } while (lVar7 < 0x18);
    dVar8 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
    if (__real_3f1a36e2e0000000 <= dVar8) {
      return dVar8;
    }
    if (*(double *)param_2 <= 0.0) {
      if (*(double *)param_2 < 0.0) {
        *(undefined8 *)param_2 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)param_2 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x8 <= 0.0) {
      if (*(double *)&param_2->field_0x8 < 0.0) {
        *(undefined8 *)&param_2->field_0x8 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x8 = 0x3ff0000000000000;
    }
    if (*(double *)&param_2->field_0x10 <= 0.0) {
      if (*(double *)&param_2->field_0x10 < 0.0) {
        *(undefined8 *)&param_2->field_0x10 = 0xbff0000000000000;
      }
    }
    else {
      *(undefined8 *)&param_2->field_0x10 = 0x3ff0000000000000;
    }
    UE::Math::TVector<double>::Normalize((TVector<double> *)param_2,__real_3e45798ee0000000);
    return dVar8;
  }
  if (local_118[4] <= local_118[1]) {
    local_118[4] = local_118[1];
  }
  if (local_118[0] <= local_118[3]) {
    local_118[0] = local_118[3];
  }
  if (local_118[5] <= local_118[2]) {
    local_118[5] = local_118[2];
  }
  if (local_118[0] <= local_118[4]) {
    if (local_118[5] < local_118[4]) {
      uVar3 = 1;
      goto LAB_14362d56b;
    }
  }
  else if (local_118[5] < local_118[0]) {
    uVar3 = 0;
    local_118[4] = local_118[0];
    goto LAB_14362d56b;
  }
  uVar3 = 2;
  local_118[4] = local_118[5];
LAB_14362d56b:
  if (local_118[uVar3] <= local_118[(ulonglong)uVar3 + 3]) {
    if (uVar3 == 0) {
      puVar5 = (uint *)&local_d0;
      local_d0 = ___xmm_00000000000000003ff0000000000000;
      uStack_c8 = _UNK_150689518;
      local_c0 = 0.0;
    }
    else {
      if (uVar3 == 1) {
        local_130 = ___xmm_3ff00000000000000000000000000000;
        uStack_128 = _UNK_15061cbc8;
        local_120 = 0;
      }
      else {
        local_130 = 0;
        uStack_128 = 0;
        local_120 = __real_3ff0000000000000;
      }
      puVar5 = (uint *)&local_130;
    }
    pdVar6 = &local_b8;
    local_b0 = CONCAT44(puVar5[3] ^ uVar10,puVar5[2] ^ uVar9);
    local_b8 = (double)CONCAT44(puVar5[1] ^ uVar10,*puVar5 ^ uVar9);
    local_a8 = CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20) ^ uVar10,
                        (uint)*(undefined8 *)(puVar5 + 4) ^ uVar9);
  }
  else {
    if (uVar3 == 0) {
      puVar4 = &local_a0;
      local_a0 = ___xmm_00000000000000003ff0000000000000;
      uStack_98 = _UNK_150689518;
      local_90 = 0;
    }
    else {
      if (uVar3 == 1) {
        local_148 = ___xmm_3ff00000000000000000000000000000;
        uStack_140 = _UNK_15061cbc8;
        local_138 = 0;
      }
      else {
        local_148 = 0;
        uStack_140 = 0;
        local_138 = __real_3ff0000000000000;
      }
      puVar4 = &local_148;
    }
    pdVar6 = local_118 + 6;
    local_118[6] = (double)*puVar4;
    uStack_e0 = puVar4[1];
    local_d8 = (double)puVar4[2];
  }
  dVar1 = pdVar6[1];
  dVar8 = pdVar6[2];
  *(double *)param_2 = *pdVar6;
  *(double *)&param_2->field_0x8 = dVar1;
  *(double *)&param_2->field_0x10 = dVar8;
  return local_118[4];
}

// Raycast @ 14362e3b0

bool __thiscall
Chaos::TAABB<float,3>::Raycast
          (TAABB<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3
          ,double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,
          int *param_8)

{
  bool bVar1;
  
  bVar1 = Raycasts::RayAabb<float,3>
                    (param_1,param_2,param_3,param_4,&this->MMin,&this->MMax,param_5,param_6,param_7
                     ,param_8);
  return bVar1;
}

// Raycast @ 14362e420

bool __thiscall
Chaos::TAABB<double,3>::Raycast
          (TAABB<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          double param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8)

{
  bool bVar1;
  
  bVar1 = Raycasts::RayAabb<double,3>
                    (param_1,param_2,param_3,param_4,&this->MMin,&this->MMax,param_5,param_6,param_7
                     ,param_8);
  return bVar1;
}

// RaycastFast @ 14362e5d0

bool __thiscall
Chaos::TAABB<float,3>::RaycastFast
          (TAABB<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double *param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double local_48 [3];
  undefined1 local_30 [16];
  double local_20;
  
  lVar3 = 0;
  dVar2 = (double)(float)((ulonglong)*(undefined8 *)&this->MMin >> 0x20) -
          *(double *)&param_1->field_0x8;
  uVar4 = SUB84(__real_7fefffffffffffff,0);
  uVar7 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_30._8_4_ = SUB84(dVar2,0);
  local_30._0_8_ = (double)(float)*(undefined8 *)&this->MMin - *(double *)param_1;
  local_30._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_20 = (double)*(float *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x10;
  local_48[0] = (double)*(float *)&this->MMax - *(double *)param_1;
  local_48[1] = (double)*(float *)&(this->MMax).field_0x4 - *(double *)&param_1->field_0x8;
  local_48[2] = (double)*(float *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x10;
  dVar2 = 0.0;
  do {
    if (param_4[lVar3] == false) {
      dVar5 = *(double *)(&param_3->field_0x0 + lVar3 * 8) * local_48[lVar3];
      dVar1 = *(double *)(&param_3->field_0x0 + lVar3 * 8) * *(double *)(local_30 + lVar3 * 8);
      dVar6 = dVar5;
      if (dVar5 < dVar1) {
        dVar6 = dVar1;
        dVar1 = dVar5;
      }
    }
    else {
      if (0.0 < *(double *)(local_30 + lVar3 * 8)) {
        return false;
      }
      if (local_48[lVar3] <= 0.0 && local_48[lVar3] != 0.0) {
        return false;
      }
      dVar6 = __real_7fefffffffffffff;
      dVar1 = 0.0;
    }
    if (dVar1 <= dVar2) {
      dVar1 = dVar2;
    }
    if ((double)CONCAT44(uVar7,uVar4) <= dVar6) {
      dVar6 = (double)CONCAT44(uVar7,uVar4);
    }
    uVar4 = SUB84(dVar6,0);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (dVar6 < dVar1) {
      return false;
    }
    lVar3 = lVar3 + 1;
    dVar2 = dVar1;
    if (2 < lVar3) {
      if ((dVar1 <= param_5) && (0.0 <= dVar6)) {
        *param_6 = dVar1;
        *param_7 = dVar6;
        return true;
      }
      return false;
    }
  } while( true );
}

// RaycastFast @ 14362e700

bool __thiscall
Chaos::TAABB<float,3>::RaycastFast
          (TAABB<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double *param_6,
          TVector<double,3> *param_7)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_48 [3];
  undefined1 local_30 [16];
  double local_20;
  
  lVar3 = 0;
  dVar2 = (double)(float)((ulonglong)*(undefined8 *)&this->MMin >> 0x20) -
          *(double *)&param_1->field_0x8;
  local_30._8_4_ = SUB84(dVar2,0);
  local_30._0_8_ = (double)(float)*(undefined8 *)&this->MMin - *(double *)param_1;
  local_30._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_20 = (double)*(float *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x10;
  local_48[1] = (double)*(float *)&(this->MMax).field_0x4 - *(double *)&param_1->field_0x8;
  local_48[0] = (double)*(float *)&this->MMax - *(double *)param_1;
  local_48[2] = (double)*(float *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x10;
  dVar6 = 0.0;
  dVar2 = __real_7fefffffffffffff;
  do {
    if (param_4[lVar3] == false) {
      dVar4 = *(double *)(local_30 + lVar3 * 8) * *(double *)(&param_3->field_0x0 + lVar3 * 8);
      dVar1 = *(double *)(&param_3->field_0x0 + lVar3 * 8) * local_48[lVar3];
      dVar5 = dVar4;
      if (dVar1 < dVar4) {
        dVar5 = dVar1;
        dVar1 = dVar4;
      }
    }
    else {
      if (0.0 < *(double *)(local_30 + lVar3 * 8)) {
        return false;
      }
      if (local_48[lVar3] <= 0.0 && local_48[lVar3] != 0.0) {
        return false;
      }
      dVar5 = 0.0;
      dVar1 = __real_7fefffffffffffff;
    }
    if (dVar5 <= dVar6) {
      dVar5 = dVar6;
    }
    if (dVar2 <= dVar1) {
      dVar1 = dVar2;
    }
    if (dVar1 < dVar5) {
      return false;
    }
    lVar3 = lVar3 + 1;
    dVar6 = dVar5;
    dVar2 = dVar1;
    if (2 < lVar3) {
      if ((dVar5 <= param_5) && (0.0 <= dVar1)) {
        *param_6 = dVar5;
        dVar2 = *(double *)&param_2->field_0x8;
        dVar6 = *(double *)&param_2->field_0x10;
        dVar1 = *(double *)&param_1->field_0x8;
        dVar4 = *(double *)&param_1->field_0x10;
        *(double *)param_7 = dVar5 * *(double *)param_2 + *(double *)param_1;
        *(double *)&param_7->field_0x8 = dVar5 * dVar2 + dVar1;
        *(double *)&param_7->field_0x10 = dVar5 * dVar6 + dVar4;
        return true;
      }
      return false;
    }
  } while( true );
}

// RaycastFast @ 14362e860

bool __thiscall
Chaos::TAABB<float,3>::RaycastFast
          (TAABB<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double param_6,double *param_7,
          double *param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double local_48 [3];
  undefined1 local_30 [16];
  double local_20;
  
  lVar3 = 0;
  dVar2 = (double)(float)((ulonglong)*(undefined8 *)&this->MMin >> 0x20) -
          *(double *)&param_1->field_0x8;
  uVar4 = SUB84(__real_7fefffffffffffff,0);
  uVar7 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_30._8_4_ = SUB84(dVar2,0);
  local_30._0_8_ = (double)(float)*(undefined8 *)&this->MMin - *(double *)param_1;
  local_30._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_20 = (double)*(float *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x10;
  local_48[0] = (double)*(float *)&this->MMax - *(double *)param_1;
  local_48[1] = (double)*(float *)&(this->MMax).field_0x4 - *(double *)&param_1->field_0x8;
  local_48[2] = (double)*(float *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x10;
  dVar2 = 0.0;
  do {
    if (param_4[lVar3] == false) {
      dVar5 = *(double *)(&param_3->field_0x0 + lVar3 * 8) * local_48[lVar3];
      dVar1 = *(double *)(&param_3->field_0x0 + lVar3 * 8) * *(double *)(local_30 + lVar3 * 8);
      dVar6 = dVar5;
      if (dVar5 < dVar1) {
        dVar6 = dVar1;
        dVar1 = dVar5;
      }
    }
    else {
      if (0.0 < *(double *)(local_30 + lVar3 * 8)) {
        return false;
      }
      if (local_48[lVar3] <= 0.0 && local_48[lVar3] != 0.0) {
        return false;
      }
      dVar6 = __real_7fefffffffffffff;
      dVar1 = 0.0;
    }
    if (dVar1 <= dVar2) {
      dVar1 = dVar2;
    }
    if ((double)CONCAT44(uVar7,uVar4) <= dVar6) {
      dVar6 = (double)CONCAT44(uVar7,uVar4);
    }
    uVar4 = SUB84(dVar6,0);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (dVar6 < dVar1) {
      return false;
    }
    lVar3 = lVar3 + 1;
    dVar2 = dVar1;
    if (2 < lVar3) {
      if ((dVar1 <= param_5) && (0.0 <= dVar6)) {
        *param_7 = dVar1;
        *param_8 = dVar6;
        return true;
      }
      return false;
    }
  } while( true );
}

// RaycastFast @ 14362e990

bool __thiscall
Chaos::TAABB<float,3>::RaycastFast
          (TAABB<float,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double param_6,double *param_7,
          TVector<double,3> *param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_48 [3];
  undefined1 local_30 [16];
  double local_20;
  
  lVar3 = 0;
  dVar2 = (double)(float)((ulonglong)*(undefined8 *)&this->MMin >> 0x20) -
          *(double *)&param_1->field_0x8;
  local_30._8_4_ = SUB84(dVar2,0);
  local_30._0_8_ = (double)(float)*(undefined8 *)&this->MMin - *(double *)param_1;
  local_30._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_20 = (double)*(float *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x10;
  local_48[1] = (double)*(float *)&(this->MMax).field_0x4 - *(double *)&param_1->field_0x8;
  local_48[0] = (double)*(float *)&this->MMax - *(double *)param_1;
  local_48[2] = (double)*(float *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x10;
  dVar6 = 0.0;
  dVar2 = __real_7fefffffffffffff;
  do {
    if (param_4[lVar3] == false) {
      dVar4 = *(double *)(local_30 + lVar3 * 8) * *(double *)(&param_3->field_0x0 + lVar3 * 8);
      dVar1 = *(double *)(&param_3->field_0x0 + lVar3 * 8) * local_48[lVar3];
      dVar5 = dVar4;
      if (dVar1 < dVar4) {
        dVar5 = dVar1;
        dVar1 = dVar4;
      }
    }
    else {
      if (0.0 < *(double *)(local_30 + lVar3 * 8)) {
        return false;
      }
      if (local_48[lVar3] <= 0.0 && local_48[lVar3] != 0.0) {
        return false;
      }
      dVar5 = 0.0;
      dVar1 = __real_7fefffffffffffff;
    }
    if (dVar5 <= dVar6) {
      dVar5 = dVar6;
    }
    if (dVar2 <= dVar1) {
      dVar1 = dVar2;
    }
    if (dVar1 < dVar5) {
      return false;
    }
    lVar3 = lVar3 + 1;
    dVar6 = dVar5;
    dVar2 = dVar1;
    if (2 < lVar3) {
      if ((dVar5 <= param_5) && (0.0 <= dVar1)) {
        *param_7 = dVar5;
        dVar2 = *(double *)&param_2->field_0x8;
        dVar6 = *(double *)&param_2->field_0x10;
        dVar1 = *(double *)&param_1->field_0x8;
        dVar4 = *(double *)&param_1->field_0x10;
        *(double *)param_8 = dVar5 * *(double *)param_2 + *(double *)param_1;
        *(double *)&param_8->field_0x8 = dVar5 * dVar2 + dVar1;
        *(double *)&param_8->field_0x10 = dVar5 * dVar6 + dVar4;
        return true;
      }
      return false;
    }
  } while( true );
}

// RaycastFast @ 14362eaf0

bool __thiscall
Chaos::TAABB<double,3>::RaycastFast
          (TAABB<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double *param_6,double *param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double local_68 [13];
  
  uVar7 = 0;
  uVar8 = 0;
  uVar2 = SUB84(__real_7fefffffffffffff,0);
  uVar5 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_68[5] = *(double *)&(this->MMin).field_0x10 - *(double *)&param_1->field_0x10;
  local_68[3] = *(double *)&this->MMin - *(double *)param_1;
  local_68[4] = *(double *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[0] = *(double *)&this->MMax - *(double *)param_1;
  local_68[1] = *(double *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[2] = *(double *)&(this->MMax).field_0x10 - *(double *)&param_1->field_0x10;
  lVar1 = 0;
  do {
    if (param_4[lVar1] == false) {
      dVar3 = *(double *)(&param_3->field_0x0 + lVar1 * 8) * local_68[lVar1];
      dVar6 = *(double *)(&param_3->field_0x0 + lVar1 * 8) * local_68[lVar1 + 3];
      dVar4 = dVar3;
      if (dVar3 < dVar6) {
        dVar4 = dVar6;
        dVar6 = dVar3;
      }
    }
    else {
      if (0.0 < local_68[lVar1 + 3]) {
        return false;
      }
      if (local_68[lVar1] <= 0.0 && local_68[lVar1] != 0.0) {
        return false;
      }
      dVar4 = __real_7fefffffffffffff;
      dVar6 = 0.0;
    }
    if (dVar6 <= (double)CONCAT44(uVar8,uVar7)) {
      dVar6 = (double)CONCAT44(uVar8,uVar7);
    }
    if ((double)CONCAT44(uVar5,uVar2) <= dVar4) {
      dVar4 = (double)CONCAT44(uVar5,uVar2);
    }
    uVar7 = SUB84(dVar6,0);
    uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
    uVar2 = SUB84(dVar4,0);
    uVar5 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (dVar4 < dVar6) {
      return false;
    }
    lVar1 = lVar1 + 1;
    if (2 < lVar1) {
      if ((dVar6 <= param_5) && (0.0 <= dVar4)) {
        *param_6 = dVar6;
        *param_7 = dVar4;
        return true;
      }
      return false;
    }
  } while( true );
}

// RaycastFast @ 14362ec30

bool __thiscall
Chaos::TAABB<double,3>::RaycastFast
          (TAABB<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double *param_6,
          TVector<double,3> *param_7)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double local_68 [13];
  
  uVar3 = SUB84(__real_7fefffffffffffff,0);
  uVar6 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_68[5] = *(double *)&(this->MMin).field_0x10 - *(double *)&param_1->field_0x10;
  local_68[3] = *(double *)&this->MMin - *(double *)param_1;
  local_68[4] = *(double *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[0] = *(double *)&this->MMax - *(double *)param_1;
  local_68[1] = *(double *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[2] = *(double *)&(this->MMax).field_0x10 - *(double *)&param_1->field_0x10;
  lVar2 = 0;
  dVar8 = 0.0;
  do {
    if (param_4[lVar2] == false) {
      dVar4 = *(double *)(&param_3->field_0x0 + lVar2 * 8) * local_68[lVar2];
      dVar7 = *(double *)(&param_3->field_0x0 + lVar2 * 8) * local_68[lVar2 + 3];
      dVar5 = dVar4;
      if (dVar4 < dVar7) {
        dVar5 = dVar7;
        dVar7 = dVar4;
      }
    }
    else {
      if (0.0 < local_68[lVar2 + 3]) {
        return false;
      }
      if (local_68[lVar2] <= 0.0 && local_68[lVar2] != 0.0) {
        return false;
      }
      dVar5 = __real_7fefffffffffffff;
      dVar7 = 0.0;
    }
    if (dVar7 <= dVar8) {
      dVar7 = dVar8;
    }
    if ((double)CONCAT44(uVar6,uVar3) <= dVar5) {
      dVar5 = (double)CONCAT44(uVar6,uVar3);
    }
    uVar3 = SUB84(dVar5,0);
    uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (dVar5 < dVar7) {
      return false;
    }
    lVar2 = lVar2 + 1;
    dVar8 = dVar7;
    if (2 < lVar2) {
      if ((dVar7 <= param_5) && (0.0 <= dVar5)) {
        *param_6 = dVar7;
        dVar8 = *(double *)&param_2->field_0x8;
        dVar5 = *(double *)&param_2->field_0x10;
        dVar4 = *(double *)&param_1->field_0x8;
        dVar1 = *(double *)&param_1->field_0x10;
        *(double *)param_7 = dVar7 * *(double *)param_2 + *(double *)param_1;
        *(double *)&param_7->field_0x8 = dVar7 * dVar8 + dVar4;
        *(double *)&param_7->field_0x10 = dVar7 * dVar5 + dVar1;
        return true;
      }
      return false;
    }
  } while( true );
}

// RaycastFast @ 14362eda0

bool __thiscall
Chaos::TAABB<double,3>::RaycastFast
          (TAABB<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double param_6,double *param_7,
          double *param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double local_68 [13];
  
  uVar7 = 0;
  uVar8 = 0;
  uVar2 = SUB84(__real_7fefffffffffffff,0);
  uVar5 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_68[5] = *(double *)&(this->MMin).field_0x10 - *(double *)&param_1->field_0x10;
  local_68[3] = *(double *)&this->MMin - *(double *)param_1;
  local_68[4] = *(double *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[0] = *(double *)&this->MMax - *(double *)param_1;
  local_68[1] = *(double *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[2] = *(double *)&(this->MMax).field_0x10 - *(double *)&param_1->field_0x10;
  lVar1 = 0;
  do {
    if (param_4[lVar1] == false) {
      dVar3 = *(double *)(&param_3->field_0x0 + lVar1 * 8) * local_68[lVar1];
      dVar6 = *(double *)(&param_3->field_0x0 + lVar1 * 8) * local_68[lVar1 + 3];
      dVar4 = dVar3;
      if (dVar3 < dVar6) {
        dVar4 = dVar6;
        dVar6 = dVar3;
      }
    }
    else {
      if (0.0 < local_68[lVar1 + 3]) {
        return false;
      }
      if (local_68[lVar1] <= 0.0 && local_68[lVar1] != 0.0) {
        return false;
      }
      dVar4 = __real_7fefffffffffffff;
      dVar6 = 0.0;
    }
    if (dVar6 <= (double)CONCAT44(uVar8,uVar7)) {
      dVar6 = (double)CONCAT44(uVar8,uVar7);
    }
    if ((double)CONCAT44(uVar5,uVar2) <= dVar4) {
      dVar4 = (double)CONCAT44(uVar5,uVar2);
    }
    uVar7 = SUB84(dVar6,0);
    uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
    uVar2 = SUB84(dVar4,0);
    uVar5 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (dVar4 < dVar6) {
      return false;
    }
    lVar1 = lVar1 + 1;
    if (2 < lVar1) {
      if ((dVar6 <= param_5) && (0.0 <= dVar4)) {
        *param_7 = dVar6;
        *param_8 = dVar4;
        return true;
      }
      return false;
    }
  } while( true );
}

// RaycastFast @ 14362eee0

bool __thiscall
Chaos::TAABB<double,3>::RaycastFast
          (TAABB<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,bool *param_4,double param_5,double param_6,double *param_7,
          TVector<double,3> *param_8)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double local_68 [13];
  
  uVar3 = SUB84(__real_7fefffffffffffff,0);
  uVar6 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_68[5] = *(double *)&(this->MMin).field_0x10 - *(double *)&param_1->field_0x10;
  local_68[3] = *(double *)&this->MMin - *(double *)param_1;
  local_68[4] = *(double *)&(this->MMin).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[0] = *(double *)&this->MMax - *(double *)param_1;
  local_68[1] = *(double *)&(this->MMax).field_0x8 - *(double *)&param_1->field_0x8;
  local_68[2] = *(double *)&(this->MMax).field_0x10 - *(double *)&param_1->field_0x10;
  lVar2 = 0;
  dVar8 = 0.0;
  do {
    if (param_4[lVar2] == false) {
      dVar4 = *(double *)(&param_3->field_0x0 + lVar2 * 8) * local_68[lVar2];
      dVar7 = *(double *)(&param_3->field_0x0 + lVar2 * 8) * local_68[lVar2 + 3];
      dVar5 = dVar4;
      if (dVar4 < dVar7) {
        dVar5 = dVar7;
        dVar7 = dVar4;
      }
    }
    else {
      if (0.0 < local_68[lVar2 + 3]) {
        return false;
      }
      if (local_68[lVar2] <= 0.0 && local_68[lVar2] != 0.0) {
        return false;
      }
      dVar5 = __real_7fefffffffffffff;
      dVar7 = 0.0;
    }
    if (dVar7 <= dVar8) {
      dVar7 = dVar8;
    }
    if ((double)CONCAT44(uVar6,uVar3) <= dVar5) {
      dVar5 = (double)CONCAT44(uVar6,uVar3);
    }
    uVar3 = SUB84(dVar5,0);
    uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (dVar5 < dVar7) {
      return false;
    }
    lVar2 = lVar2 + 1;
    dVar8 = dVar7;
    if (2 < lVar2) {
      if ((dVar7 <= param_5) && (0.0 <= dVar5)) {
        *param_7 = dVar7;
        dVar8 = *(double *)&param_2->field_0x8;
        dVar5 = *(double *)&param_2->field_0x10;
        dVar4 = *(double *)&param_1->field_0x8;
        dVar1 = *(double *)&param_1->field_0x10;
        *(double *)param_8 = dVar7 * *(double *)param_2 + *(double *)param_1;
        *(double *)&param_8->field_0x8 = dVar7 * dVar8 + dVar4;
        *(double *)&param_8->field_0x10 = dVar7 * dVar5 + dVar1;
        return true;
      }
      return false;
    }
  } while( true );
}

// Scale @ 14362f0e0

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::Scale(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  
  *(float *)&this->MMin = *(float *)param_1 * *(float *)&this->MMin;
  *(float *)&(this->MMin).field_0x4 =
       *(float *)&(this->MMin).field_0x4 * *(float *)&param_1->field_0x4;
  *(float *)&(this->MMin).field_0x8 =
       *(float *)&(this->MMin).field_0x8 * *(float *)&param_1->field_0x8;
  fVar1 = *(float *)&(this->MMax).field_0x4;
  *(float *)&this->MMax = *(float *)&this->MMax * *(float *)param_1;
  *(float *)&(this->MMax).field_0x4 = fVar1 * *(float *)&param_1->field_0x4;
  *(float *)&(this->MMax).field_0x8 =
       *(float *)&(this->MMax).field_0x8 * *(float *)&param_1->field_0x8;
  return this;
}

// Scale @ 14362f140

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::Scale(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  
  *(double *)&this->MMin = *(double *)param_1 * *(double *)&this->MMin;
  *(double *)&(this->MMin).field_0x8 =
       *(double *)&(this->MMin).field_0x8 * *(double *)&param_1->field_0x8;
  *(double *)&(this->MMin).field_0x10 =
       *(double *)&(this->MMin).field_0x10 * *(double *)&param_1->field_0x10;
  dVar1 = *(double *)&(this->MMax).field_0x8;
  *(double *)&this->MMax = *(double *)&this->MMax * *(double *)param_1;
  *(double *)&(this->MMax).field_0x8 = dVar1 * *(double *)&param_1->field_0x8;
  *(double *)&(this->MMax).field_0x10 =
       *(double *)&(this->MMax).field_0x10 * *(double *)&param_1->field_0x10;
  return this;
}

// ScaleWithNegative @ 14362f1a0

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::ScaleWithNegative(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)param_1 * *(float *)&this->MMax;
  fVar1 = *(float *)param_1 * *(float *)&this->MMin;
  fVar6 = *(float *)&param_1->field_0x4 * *(float *)&(this->MMax).field_0x4;
  fVar5 = fVar4;
  if (fVar4 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar2 = *(float *)&param_1->field_0x4 * *(float *)&(this->MMin).field_0x4;
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  fVar3 = *(float *)&param_1->field_0x8 * *(float *)&(this->MMin).field_0x8;
  fVar1 = *(float *)&param_1->field_0x8 * *(float *)&(this->MMax).field_0x8;
  fVar7 = fVar6;
  if (fVar6 <= fVar2) {
    fVar7 = fVar2;
  }
  if (fVar2 <= fVar6) {
    fVar6 = fVar2;
  }
  fVar2 = fVar1;
  if (fVar1 <= fVar3) {
    fVar2 = fVar3;
  }
  if (fVar3 <= fVar1) {
    fVar1 = fVar3;
  }
  *(ulonglong *)&this->MMax = CONCAT44(fVar7,fVar5);
  *(float *)&(this->MMax).field_0x8 = fVar2;
  *(ulonglong *)&this->MMin = CONCAT44(fVar6,fVar4);
  *(float *)&(this->MMin).field_0x8 = fVar1;
  return this;
}

// ScaleWithNegative @ 14362f250

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::ScaleWithNegative(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar3 = *(double *)param_1 * *(double *)&this->MMax;
  dVar7 = *(double *)param_1 * *(double *)&this->MMin;
  dVar6 = *(double *)&param_1->field_0x8 * *(double *)&(this->MMax).field_0x8;
  dVar8 = *(double *)&param_1->field_0x8 * *(double *)&(this->MMin).field_0x8;
  dVar4 = dVar3;
  if (dVar3 <= dVar7) {
    dVar4 = dVar7;
  }
  if (dVar7 <= dVar3) {
    dVar3 = dVar7;
  }
  dVar7 = *(double *)&param_1->field_0x10 * *(double *)&(this->MMax).field_0x10;
  dVar9 = *(double *)&param_1->field_0x10 * *(double *)&(this->MMin).field_0x10;
  dVar5 = dVar6;
  if (dVar6 <= dVar8) {
    dVar5 = dVar8;
  }
  if (dVar8 <= dVar6) {
    dVar6 = dVar8;
  }
  dVar8 = dVar7;
  if (dVar7 <= dVar9) {
    dVar8 = dVar9;
  }
  if (dVar9 <= dVar7) {
    dVar7 = dVar9;
  }
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&this->MMax = auVar2;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&this->MMin = auVar1;
  *(double *)&(this->MMax).field_0x10 = dVar8;
  *(double *)&(this->MMin).field_0x10 = dVar7;
  return this;
}

// Serialize @ 14362f300

void __thiscall Chaos::TAABB<float,3>::Serialize(TAABB<float,3> *this,FArchive *param_1)

{
  FArchive *pFVar1;
  
  pFVar1 = operator<<<3>(param_1,&this->MMin);
  operator<<<3>(pFVar1,&this->MMax);
  return;
}

// Serialize @ 14362f330

void __thiscall Chaos::TAABB<double,3>::Serialize(TAABB<double,3> *this,FArchive *param_1)

{
  FArchive *pFVar1;
  
  pFVar1 = SerializeReal<double,3>(param_1,&this->MMin);
  SerializeReal<double,3>(pFVar1,&this->MMax);
  return;
}

// ShrinkSymmetrically @ 14362f370

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::ShrinkSymmetrically(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)(*(uint *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar3 = (float)(*(uint *)&param_1->field_0x4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = (float)(*(uint *)&param_1->field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = *(float *)&this->MMin;
  *(float *)&(this->MMin).field_0x4 = fVar3 + *(float *)&(this->MMin).field_0x4;
  *(float *)&this->MMin = fVar2 + fVar1;
  *(float *)&(this->MMin).field_0x8 = fVar4 + *(float *)&(this->MMin).field_0x8;
  fVar1 = *(float *)&(this->MMax).field_0x4;
  *(float *)&this->MMax = *(float *)&this->MMax - fVar2;
  *(float *)&(this->MMax).field_0x4 = fVar1 - fVar3;
  *(float *)&(this->MMax).field_0x8 = *(float *)&(this->MMax).field_0x8 - fVar4;
  return this;
}

// ShrinkSymmetrically @ 14362f3f0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::ShrinkSymmetrically(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = (uint)*(undefined8 *)param_1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)*(undefined8 *)param_1 >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)*(undefined8 *)&param_1->field_0x8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)*(undefined8 *)&param_1->field_0x10 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)*(undefined8 *)&param_1->field_0x10 >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar1 = *(double *)&this->MMin;
  *(double *)&(this->MMin).field_0x8 =
       (double)CONCAT44(uVar5,uVar4) + *(double *)&(this->MMin).field_0x8;
  *(double *)&this->MMin = (double)CONCAT44(uVar3,uVar2) + dVar1;
  *(double *)&(this->MMin).field_0x10 =
       (double)CONCAT44(uVar7,uVar6) + *(double *)&(this->MMin).field_0x10;
  dVar1 = *(double *)&(this->MMax).field_0x8;
  *(double *)&this->MMax = *(double *)&this->MMax - (double)CONCAT44(uVar3,uVar2);
  *(double *)&(this->MMax).field_0x8 = dVar1 - (double)CONCAT44(uVar5,uVar4);
  *(double *)&(this->MMax).field_0x10 =
       *(double *)&(this->MMax).field_0x10 - (double)CONCAT44(uVar7,uVar6);
  return this;
}

// ShrinkToInclude @ 14362f470

void __thiscall Chaos::TAABB<float,3>::ShrinkToInclude(TAABB<float,3> *this,TAABB<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)&(param_1->MMin).field_0x4;
  fVar2 = *(float *)&param_1->MMin;
  if (*(float *)&param_1->MMin <= *(float *)&this->MMin) {
    fVar2 = *(float *)&this->MMin;
  }
  fVar3 = *(float *)&(this->MMin).field_0x4;
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)&(param_1->MMin).field_0x8;
  fVar1 = *(float *)&(this->MMin).field_0x8;
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  *(float *)&this->MMin = fVar2;
  *(float *)&(this->MMin).field_0x4 = fVar4;
  *(float *)&(this->MMin).field_0x8 = fVar3;
  fVar4 = *(float *)&(param_1->MMax).field_0x4;
  fVar2 = *(float *)&(param_1->MMax).field_0x8;
  fVar3 = *(float *)&param_1->MMax;
  if (*(float *)&this->MMax <= *(float *)&param_1->MMax) {
    fVar3 = *(float *)&this->MMax;
  }
  fVar1 = *(float *)&(this->MMax).field_0x4;
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  fVar1 = *(float *)&(this->MMax).field_0x8;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  *(float *)&this->MMax = fVar3;
  *(float *)&(this->MMax).field_0x4 = fVar4;
  *(float *)&(this->MMax).field_0x8 = fVar2;
  return;
}

// ShrinkToInclude @ 14362f4d0

void __thiscall
Chaos::TAABB<double,3>::ShrinkToInclude(TAABB<double,3> *this,TAABB<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)&(param_1->MMin).field_0x8;
  dVar2 = *(double *)&param_1->MMin;
  if (*(double *)&param_1->MMin <= *(double *)&this->MMin) {
    dVar2 = *(double *)&this->MMin;
  }
  dVar3 = *(double *)&(this->MMin).field_0x8;
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  dVar3 = *(double *)&(param_1->MMin).field_0x10;
  dVar1 = *(double *)&(this->MMin).field_0x10;
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  *(double *)&this->MMin = dVar2;
  *(double *)&(this->MMin).field_0x8 = dVar4;
  *(double *)&(this->MMin).field_0x10 = dVar3;
  dVar4 = *(double *)&(param_1->MMax).field_0x8;
  dVar2 = *(double *)&(param_1->MMax).field_0x10;
  dVar3 = *(double *)&param_1->MMax;
  if (*(double *)&this->MMax <= *(double *)&param_1->MMax) {
    dVar3 = *(double *)&this->MMax;
  }
  dVar1 = *(double *)&(this->MMax).field_0x8;
  if (dVar1 <= dVar4) {
    dVar4 = dVar1;
  }
  dVar1 = *(double *)&(this->MMax).field_0x10;
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  *(double *)&this->MMax = dVar3;
  *(double *)&(this->MMax).field_0x8 = dVar4;
  *(double *)&(this->MMax).field_0x10 = dVar2;
  return;
}

// SignedDistance @ 14362f530

double __thiscall
Chaos::TAABB<float,3>::SignedDistance(TAABB<float,3> *this,TVector<double,3> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double local_f8 [31];
  
  fVar1 = *(float *)&(this->MMin).field_0x4;
  fVar2 = *(float *)&(this->MMin).field_0x8;
  dVar9 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_1->field_0x8;
  dVar4 = *(double *)param_1;
  local_f8[0] = (double)(*(float *)&this->MMin - (float)dVar4);
  local_f8[3] = dVar4 - (double)*(float *)&this->MMax;
  dVar7 = (double)*(float *)&(this->MMax).field_0x8;
  local_f8[1] = (double)(fVar1 - (float)dVar3);
  dVar6 = (double)*(float *)&(this->MMax).field_0x4;
  local_f8[2] = (double)(fVar2 - (float)dVar9);
  local_f8[5] = dVar9 - dVar7;
  local_f8[4] = dVar3 - dVar6;
  if (((((double)*(float *)&this->MMax < dVar4) || (dVar6 < dVar3)) || (dVar7 < dVar9)) ||
     (((dVar4 < (double)*(float *)&this->MMin || (dVar3 < (double)fVar1)) || (dVar9 < (double)fVar2)
      ))) {
    lVar8 = 0;
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    do {
      dVar9 = *(double *)((longlong)local_f8 + lVar8 + 0x18);
      if (dVar9 <= 0.0) {
        dVar9 = *(double *)((longlong)local_f8 + lVar8);
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        else {
          dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^
                                   (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20)
                                   ,SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000);
        }
      }
      *(double *)((longlong)local_f8 + lVar8 + 0x30) = dVar9;
      lVar8 = lVar8 + 8;
    } while (lVar8 < 0x18);
    dVar9 = local_f8[7] * local_f8[7] + local_f8[6] * local_f8[6] + local_f8[8] * local_f8[8];
    local_f8[1] = 0.0;
    if (__real_3f1a36e2e0000000 <= dVar9) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar9;
      auVar10 = sqrtpd(auVar10,auVar5);
      local_f8[1] = auVar10._0_8_;
    }
  }
  else {
    if (local_f8[5] <= local_f8[2]) {
      local_f8[5] = local_f8[2];
    }
    if (local_f8[1] <= local_f8[4]) {
      local_f8[1] = local_f8[4];
    }
    if (local_f8[3] <= local_f8[0]) {
      local_f8[3] = local_f8[0];
    }
    if (local_f8[1] < local_f8[3]) {
      local_f8[1] = local_f8[3];
    }
    if (local_f8[1] <= local_f8[5]) {
      local_f8[1] = local_f8[5];
    }
  }
  return local_f8[1];
}

// SignedDistance @ 14362f740

double __thiscall
Chaos::TAABB<double,3>::SignedDistance(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double local_c8 [25];
  
  dVar5 = *(double *)&param_1->field_0x10;
  local_c8[5] = *(double *)&(this->MMin).field_0x10 - dVar5;
  dVar1 = *(double *)&param_1->field_0x8;
  local_c8[4] = *(double *)&(this->MMin).field_0x8 - dVar1;
  dVar2 = *(double *)param_1;
  local_c8[0] = dVar2 - *(double *)&this->MMax;
  local_c8[2] = dVar5 - *(double *)&(this->MMax).field_0x10;
  local_c8[1] = dVar1 - *(double *)&(this->MMax).field_0x8;
  local_c8[3] = *(double *)&this->MMin - dVar2;
  local_c8[8] = *(double *)&(this->MMax).field_0x10;
  if ((((*(double *)&this->MMax < dVar2) || (*(double *)&(this->MMax).field_0x8 < dVar1)) ||
      (local_c8[8] < dVar5)) ||
     (((dVar2 < *(double *)&this->MMin || (dVar1 < *(double *)&(this->MMin).field_0x8)) ||
      (dVar5 < *(double *)&(this->MMin).field_0x10)))) {
    lVar4 = 0;
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    do {
      dVar5 = *(double *)((longlong)local_c8 + lVar4);
      if (dVar5 <= 0.0) {
        dVar5 = *(double *)((longlong)local_c8 + lVar4 + 0x18);
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        else {
          dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                   (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20)
                                   ,SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
        }
      }
      *(double *)((longlong)local_c8 + lVar4 + 0x30) = dVar5;
      lVar4 = lVar4 + 8;
    } while (lVar4 < 0x18);
    dVar5 = local_c8[7] * local_c8[7] + local_c8[6] * local_c8[6] + local_c8[8] * local_c8[8];
    local_c8[4] = 0.0;
    if (__real_3f1a36e2e0000000 <= dVar5) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar5;
      auVar6 = sqrtpd(auVar6,auVar3);
      local_c8[4] = auVar6._0_8_;
    }
  }
  else {
    if (local_c8[4] <= local_c8[1]) {
      local_c8[4] = local_c8[1];
    }
    if (local_c8[0] <= local_c8[3]) {
      local_c8[0] = local_c8[3];
    }
    if (local_c8[5] <= local_c8[2]) {
      local_c8[5] = local_c8[2];
    }
    if (local_c8[4] < local_c8[0]) {
      local_c8[4] = local_c8[0];
    }
    if (local_c8[4] <= local_c8[5]) {
      local_c8[4] = local_c8[5];
    }
  }
  return local_c8[4];
}

// Support @ 14362fa20

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::Support
          (TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__,TVector<float,3> *param_1,
          float param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  TVector<float,3> *pTVar7;
  TAABB<float,3> *pTVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fStack_74;
  float local_70;
  
  iVar10 = 0;
  bVar5 = 0.0 <= *(float *)param_1;
  if (bVar5) {
    uVar12 = *(undefined4 *)&this->MMax;
  }
  else {
    uVar12 = *(undefined4 *)&this->MMin;
  }
  pTVar8 = this;
  if (bVar5) {
    pTVar8 = (TAABB<float,3> *)&this->MMax;
  }
  bVar6 = 0.0 <= *(float *)&param_1->field_0x4;
  fVar1 = *(float *)&pTVar8->MMin;
  if (bVar6) {
    uVar11 = *(undefined4 *)&(this->MMax).field_0x4;
    iVar9 = 2;
  }
  else {
    uVar11 = *(undefined4 *)&(this->MMin).field_0x4;
    iVar9 = iVar10;
  }
  pTVar7 = &this->MMin;
  if (bVar6) {
    pTVar7 = &this->MMax;
  }
  fVar2 = *(float *)&pTVar7->field_0x4;
  pTVar7 = &this->MMax;
  if (0.0 <= *(float *)&param_1->field_0x8) {
    uVar3 = *(undefined4 *)&(this->MMax).field_0x8;
    iVar10 = 4;
  }
  else {
    uVar3 = *(undefined4 *)&(this->MMin).field_0x8;
    pTVar7 = &this->MMin;
  }
  fVar4 = *(float *)&pTVar7->field_0x8;
  *param_3 = iVar9 + iVar10 + (uint)bVar5;
  if (param_2 != 0.0) {
    fVar14 = *(float *)param_1;
    fVar13 = fVar14 * fVar14 + *(float *)&param_1->field_0x4 * *(float *)&param_1->field_0x4 +
             *(float *)&param_1->field_0x8 * *(float *)&param_1->field_0x8;
    if (__real_00800000 < fVar13) {
      local_70 = __real_3f800000 / SQRT(fVar13);
      uVar12 = local_70 * fVar14;
      fStack_74 = local_70 * *(float *)&param_1->field_0x4;
      local_70 = local_70 * *(float *)&param_1->field_0x8;
      fVar14 = fStack_74 * fStack_74 + (float)uVar12 * (float)uVar12 + local_70 * local_70;
      if (fVar14 != __real_3f800000) {
        if (__real_322bcc77 <= fVar14) {
          fVar14 = __real_3f800000 / SQRT(fVar14);
          fStack_74 = fVar14 * fStack_74;
          local_70 = fVar14 * local_70;
          uVar12 = fVar14 * (float)uVar12;
        }
        else {
          fStack_74 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_70 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(float *)__return_storage_ptr__ = (float)uVar12 * param_2 + fVar1;
      *(float *)&__return_storage_ptr__->field_0x4 = fStack_74 * param_2 + fVar2;
      *(float *)&__return_storage_ptr__->field_0x8 = local_70 * param_2 + fVar4;
      return __return_storage_ptr__;
    }
  }
  *(ulonglong *)__return_storage_ptr__ = CONCAT44(uVar11,uVar12);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
  return __return_storage_ptr__;
}

// Support @ 14362fc70

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::Support
          (TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  double dVar8;
  TVector<double,3> *pTVar9;
  TAABB<double,3> *pTVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dStack_80;
  double local_78;
  
  iVar12 = 0;
  bVar5 = 0.0 <= *(double *)param_1;
  if (bVar5) {
    uVar14 = (undefined4)*(undefined8 *)&this->MMax;
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)&this->MMax >> 0x20);
  }
  else {
    uVar14 = (undefined4)*(undefined8 *)&this->MMin;
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)&this->MMin >> 0x20);
  }
  pTVar10 = this;
  if (bVar5) {
    pTVar10 = (TAABB<double,3> *)&this->MMax;
  }
  bVar6 = 0.0 <= *(double *)&param_1->field_0x8;
  dVar1 = *(double *)&pTVar10->MMin;
  if (bVar6) {
    uVar16 = *(undefined8 *)&(this->MMax).field_0x8;
    iVar11 = 2;
  }
  else {
    uVar16 = *(undefined8 *)&(this->MMin).field_0x8;
    iVar11 = 0;
  }
  pTVar9 = &this->MMin;
  if (bVar6) {
    pTVar9 = &this->MMax;
  }
  dVar2 = *(double *)&pTVar9->field_0x8;
  pTVar9 = &this->MMax;
  if (0.0 <= *(double *)&param_1->field_0x10) {
    uVar3 = *(undefined8 *)&(this->MMax).field_0x10;
    iVar12 = 4;
  }
  else {
    uVar3 = *(undefined8 *)&(this->MMin).field_0x10;
    pTVar9 = &this->MMin;
  }
  dVar4 = *(double *)&pTVar9->field_0x10;
  *param_3 = iVar12 + (uint)bVar5 + iVar11;
  if (param_2 != 0.0) {
    dVar17 = *(double *)param_1;
    auVar13._0_8_ = *(double *)&param_1->field_0x8 * *(double *)&param_1->field_0x8;
    auVar13._8_8_ = 0;
    dVar8 = dVar17 * dVar17 + auVar13._0_8_ +
            *(double *)&param_1->field_0x10 * *(double *)&param_1->field_0x10;
    if (__real_0010000000000000 < dVar8) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar8;
      auVar13 = sqrtpd(auVar13,auVar7);
      local_78 = __real_3ff0000000000000 / auVar13._0_8_;
      uVar16 = local_78 * dVar17;
      dStack_80 = local_78 * *(double *)&param_1->field_0x8;
      local_78 = local_78 * *(double *)&param_1->field_0x10;
      dVar17 = dStack_80 * dStack_80 + (double)uVar16 * (double)uVar16 + local_78 * local_78;
      if (dVar17 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar17) {
          dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
          dStack_80 = dStack_80 * dVar17;
          local_78 = local_78 * dVar17;
          uVar16 = (double)uVar16 * dVar17;
        }
        else {
          dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)__return_storage_ptr__ = (double)uVar16 * param_2 + dVar1;
      *(double *)&__return_storage_ptr__->field_0x8 = dStack_80 * param_2 + dVar2;
      *(double *)&__return_storage_ptr__->field_0x10 = local_78 * param_2 + dVar4;
      return __return_storage_ptr__;
    }
  }
  *(undefined4 *)__return_storage_ptr__ = uVar14;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar15;
  *(int *)&__return_storage_ptr__->field_0x8 = (int)uVar16;
  *(int *)&__return_storage_ptr__->field_0xc = (int)((ulonglong)uVar16 >> 0x20);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  return __return_storage_ptr__;
}

// SupportCore @ 14362feb0

TVector<double,3> * __thiscall
Chaos::TAABB<float,3>::SupportCore
          (TAABB<float,3> *this,TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1
          ,double param_2,double *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = 0;
  bVar1 = 0.0 < *(double *)param_1 || *(double *)param_1 == 0.0;
  if (bVar1) {
    dVar4 = (double)*(float *)&this->MMax - param_2;
  }
  else {
    dVar4 = (double)*(float *)&this->MMin + param_2;
  }
  *(double *)__return_storage_ptr__ = dVar4;
  if (0.0 < *(double *)&param_1->field_0x8 || *(double *)&param_1->field_0x8 == 0.0) {
    iVar3 = 2;
    dVar4 = (double)*(float *)&(this->MMax).field_0x4 - param_2;
  }
  else {
    iVar3 = 0;
    dVar4 = (double)*(float *)&(this->MMin).field_0x4 + param_2;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
  if (0.0 < *(double *)&param_1->field_0x10 || *(double *)&param_1->field_0x10 == 0.0) {
    iVar2 = 4;
    dVar4 = (double)*(float *)&(this->MMax).field_0x8 - param_2;
  }
  else {
    dVar4 = (double)*(float *)&(this->MMin).field_0x8 + param_2;
  }
  *(double *)&__return_storage_ptr__->field_0x10 = dVar4;
  *param_4 = (uint)bVar1 + iVar3 + iVar2;
  if (param_3 != (double *)0x0) {
    *param_3 = param_2 * __real_3fe76cf5d0b09954;
  }
  return __return_storage_ptr__;
}

// SupportCore @ 14362ff70

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::SupportCore
          (TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,double *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = 0;
  bVar1 = 0.0 < *(double *)param_1 || *(double *)param_1 == 0.0;
  if (bVar1) {
    dVar4 = *(double *)&this->MMax - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&this->MMin;
  }
  *(double *)__return_storage_ptr__ = dVar4;
  if (0.0 < *(double *)&param_1->field_0x8 || *(double *)&param_1->field_0x8 == 0.0) {
    iVar3 = 2;
    dVar4 = *(double *)&(this->MMax).field_0x8 - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&(this->MMin).field_0x8;
    iVar3 = iVar2;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
  if (0.0 < *(double *)&param_1->field_0x10 || *(double *)&param_1->field_0x10 == 0.0) {
    iVar2 = 4;
    dVar4 = *(double *)&(this->MMax).field_0x10 - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&(this->MMin).field_0x10;
  }
  *(double *)&__return_storage_ptr__->field_0x10 = dVar4;
  *param_4 = iVar3 + (uint)bVar1 + iVar2;
  if (param_3 != (double *)0x0) {
    *param_3 = param_2 * __real_3fe76cf5d0b09954;
  }
  return __return_storage_ptr__;
}

// SupportCoreScaled @ 143630020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float,3> * __thiscall
Chaos::TAABB<float,3>::SupportCoreScaled
          (TAABB<float,3> *this,TVector<float,3> *__return_storage_ptr__,TVector<float,3> *param_1,
          float param_2,TVector<float,3> *param_3,float *param_4,int *param_5)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  TVector<float,3> *pTVar4;
  longlong lVar5;
  float fVar6;
  float local_28 [4];
  uint local_18 [4];
  
  local_28[0] = *(float *)param_1 * *(float *)param_3;
  lVar5 = 3;
  local_28[1] = *(float *)&param_1->field_0x4 * *(float *)&param_3->field_0x4;
  local_28[2] = *(float *)&param_1->field_0x8 * *(float *)&param_3->field_0x8;
  pTVar4 = param_3;
  do {
    pfVar1 = (float *)(((longlong)this - (longlong)param_3) + (longlong)pTVar4);
    pfVar2 = (float *)((longlong)pfVar1 + ((longlong)local_28 - (longlong)this));
    bVar3 = 0.0 < *pfVar2 || *pfVar2 == 0.0;
    if (bVar3) {
      fVar6 = *(float *)((longlong)this + (0xc - (longlong)param_3) + (longlong)pTVar4) *
              *(float *)pTVar4 - param_2;
    }
    else {
      fVar6 = *(float *)pTVar4 * *pfVar1 + param_2;
    }
    *(float *)((longlong)pTVar4 + ((longlong)__return_storage_ptr__ - (longlong)param_3)) = fVar6;
    *(uint *)((longlong)pTVar4 + ((longlong)local_18 - (longlong)param_3)) = (uint)bVar3;
    pTVar4 = (TVector<float,3> *)&pTVar4->field_0x4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *param_5 = local_18[0] + (local_18[1] + local_18[2] * 2) * 2;
  if (param_4 != (float *)0x0) {
    *param_4 = param_2 * ___real_3f3b67af;
  }
  return __return_storage_ptr__;
}

// SupportCoreScaled @ 143630140

TVector<double,3> * __thiscall
Chaos::TAABB<double,3>::SupportCoreScaled
          (TAABB<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,TVector<double,3> *param_3,double *param_4,
          int *param_5)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  TVector<double,3> *pTVar4;
  longlong lVar5;
  double dVar6;
  uint local_38 [4];
  undefined1 local_28 [16];
  double local_18;
  
  lVar5 = 0;
  dVar6 = *(double *)&param_1->field_0x8 * *(double *)&param_3->field_0x8;
  local_28._8_4_ = SUB84(dVar6,0);
  local_28._0_8_ = *(double *)param_1 * *(double *)param_3;
  local_28._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_18 = *(double *)&param_1->field_0x10 * *(double *)&param_3->field_0x10;
  pTVar4 = param_3;
  do {
    pdVar1 = (double *)(((longlong)this - (longlong)param_3) + (longlong)pTVar4);
    pdVar2 = (double *)((longlong)pdVar1 + (longlong)(local_28 + -(longlong)this));
    bVar3 = 0.0 < *pdVar2 || *pdVar2 == 0.0;
    if (bVar3) {
      dVar6 = *(double *)((longlong)pTVar4 + (0x18 - (longlong)param_3) + (longlong)this) *
              *(double *)pTVar4 - param_2;
    }
    else {
      dVar6 = *(double *)pTVar4 * *pdVar1 + param_2;
    }
    *(double *)((longlong)pTVar4 + ((longlong)__return_storage_ptr__ - (longlong)param_3)) = dVar6;
    pTVar4 = (TVector<double,3> *)&pTVar4->field_0x8;
    local_38[lVar5] = (uint)bVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 3);
  *param_5 = local_38[0] + (local_38[1] + local_38[2] * 2) * 2;
  if (param_4 != (double *)0x0) {
    *param_4 = param_2 * __real_3fe76cf5d0b09954;
  }
  return __return_storage_ptr__;
}

// SupportCoreSimd @ 143630240

__m128 * __thiscall
Chaos::TAABB<float,3>::SupportCoreSimd
          (TAABB<float,3> *this,__m128 *__return_storage_ptr__,__m128 *param_1,double param_2)

{
  __m128 _Var1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 <= param_1->m128_f32[0]) {
    dVar3 = (double)*(float *)&this->MMax - param_2;
  }
  else {
    dVar3 = (double)*(float *)&this->MMin + param_2;
  }
  if (0.0 <= param_1->m128_f32[1]) {
    dVar2 = (double)*(float *)&(this->MMax).field_0x4 - param_2;
  }
  else {
    dVar2 = (double)*(float *)&(this->MMin).field_0x4 + param_2;
  }
  if (0.0 <= param_1->m128_f32[2]) {
    dVar4 = (double)*(float *)&(this->MMax).field_0x8 - param_2;
  }
  else {
    dVar4 = (double)*(float *)&(this->MMin).field_0x8 + param_2;
  }
  _Var1.m128_f32[1] = (float)dVar2;
  _Var1.m128_f32[0] = (float)dVar3;
  _Var1.m128_f32[2] = (float)dVar4;
  _Var1.m128_f32[3] = 0.0;
  *__return_storage_ptr__ = _Var1;
  return __return_storage_ptr__;
}

// SupportCoreSimd @ 143630300

__m128 * __thiscall
Chaos::TAABB<double,3>::SupportCoreSimd
          (TAABB<double,3> *this,__m128 *__return_storage_ptr__,__m128 *param_1,double param_2)

{
  __m128 _Var1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 <= param_1->m128_f32[0]) {
    dVar2 = *(double *)&this->MMax - param_2;
  }
  else {
    dVar2 = param_2 + *(double *)&this->MMin;
  }
  if (0.0 <= param_1->m128_f32[1]) {
    dVar3 = *(double *)&(this->MMax).field_0x8 - param_2;
  }
  else {
    dVar3 = param_2 + *(double *)&(this->MMin).field_0x8;
  }
  if (0.0 <= param_1->m128_f32[2]) {
    dVar4 = *(double *)&(this->MMax).field_0x10 - param_2;
  }
  else {
    dVar4 = param_2 + *(double *)&(this->MMin).field_0x10;
  }
  _Var1.m128_f32[1] = (float)dVar3;
  _Var1.m128_f32[0] = (float)dVar2;
  _Var1.m128_f32[2] = (float)dVar4;
  _Var1.m128_f32[3] = 0.0;
  *__return_storage_ptr__ = _Var1;
  return __return_storage_ptr__;
}

// Thicken @ 1436307b0

TAABB<float,3> * __thiscall Chaos::TAABB<float,3>::Thicken(TAABB<float,3> *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MMin).field_0x4;
  *(float *)&this->MMin = *(float *)&this->MMin - param_1;
  *(float *)&(this->MMin).field_0x4 = fVar1 - param_1;
  *(float *)&(this->MMin).field_0x8 = *(float *)&(this->MMin).field_0x8 - param_1;
  fVar1 = *(float *)&this->MMax;
  fVar2 = *(float *)&(this->MMax).field_0x8;
  *(float *)&(this->MMax).field_0x4 = param_1 + *(float *)&(this->MMax).field_0x4;
  *(float *)&this->MMax = param_1 + fVar1;
  *(float *)&(this->MMax).field_0x8 = param_1 + fVar2;
  return this;
}

// Thicken @ 143630810

TAABB<double,3> * __thiscall Chaos::TAABB<double,3>::Thicken(TAABB<double,3> *this,double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar3 = *(double *)&(this->MMin).field_0x8 - param_1;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = *(double *)&this->MMin - param_1;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&this->MMin = auVar1;
  *(double *)&(this->MMin).field_0x10 = *(double *)&(this->MMin).field_0x10 - param_1;
  dVar4 = *(double *)&(this->MMax).field_0x8;
  dVar3 = *(double *)&(this->MMax).field_0x10 + param_1;
  *(double *)&this->MMax = param_1 + *(double *)&this->MMax;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar4 + param_1;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(this->MMax).field_0x8 = auVar2;
  return this;
}

// ThickenSymmetrically @ 143630850

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::ThickenSymmetrically(TAABB<float,3> *this,TVector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)(*(uint *)&param_1->field_0x4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar3 = (float)(*(uint *)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar5 = (float)(*(uint *)&param_1->field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = *(float *)&this->MMin;
  *(float *)&(this->MMin).field_0x4 = *(float *)&(this->MMin).field_0x4 - fVar4;
  *(float *)&this->MMin = fVar1 - fVar3;
  *(float *)&(this->MMin).field_0x8 = *(float *)&(this->MMin).field_0x8 - fVar5;
  fVar1 = *(float *)&(this->MMax).field_0x4;
  fVar2 = *(float *)&(this->MMax).field_0x8;
  *(float *)&this->MMax = fVar3 + *(float *)&this->MMax;
  *(float *)&(this->MMax).field_0x4 = fVar4 + fVar1;
  *(float *)&(this->MMax).field_0x8 = fVar5 + fVar2;
  return this;
}

// ThickenSymmetrically @ 1436308c0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::ThickenSymmetrically(TAABB<double,3> *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)param_1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)param_1 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar5 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field_0x10 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&param_1->field_0x10 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar1 = *(double *)&this->MMin;
  *(double *)&(this->MMin).field_0x8 = *(double *)&(this->MMin).field_0x8 - dVar4;
  *(double *)&this->MMin = dVar1 - dVar3;
  *(double *)&(this->MMin).field_0x10 = *(double *)&(this->MMin).field_0x10 - dVar5;
  dVar1 = *(double *)&(this->MMax).field_0x8;
  dVar2 = *(double *)&(this->MMax).field_0x10;
  *(double *)&this->MMax = dVar3 + *(double *)&this->MMax;
  *(double *)&(this->MMax).field_0x8 = dVar4 + dVar1;
  *(double *)&(this->MMax).field_0x10 = dVar5 + dVar2;
  return this;
}

// ToString @ 143630930

FString * __thiscall
Chaos::TAABB<float,3>::ToString(TAABB<float,3> *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"AABB: Min: [%s], Max: [%s]");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 143630a30

FString * __thiscall
Chaos::TAABB<double,3>::ToString(TAABB<double,3> *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"AABB: Min: [%s], Max: [%s]");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630b20

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::TransformedAABB
          (TAABB<float,3> *this,TAABB<float,3> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_88 = param_1->M[0][0];
  dStack_80 = param_1->M[0][1];
  local_78 = param_1->M[0][2];
  dStack_70 = param_1->M[0][3];
  local_68 = param_1->M[1][0];
  dStack_60 = param_1->M[1][1];
  local_58 = param_1->M[1][2];
  dStack_50 = param_1->M[1][3];
  local_38 = param_1->M[2][2];
  dStack_30 = param_1->M[2][3];
  local_48 = param_1->M[2][0];
  dStack_40 = param_1->M[2][1];
  local_18 = param_1->M[3][2];
  dStack_10 = param_1->M[3][3];
  local_28 = param_1->M[3][0];
  dStack_20 = param_1->M[3][1];
  TransformedAABBHelper<float>(__return_storage_ptr__,this,(PMatrix<double,4,4> *)&local_88);
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630ba0

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::TransformedAABB
          (TAABB<float,3> *this,TAABB<float,3> *__return_storage_ptr__,TTransform<double> *param_1)

{
  TMatrix<double> *pTVar1;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TMatrix<double> local_88;
  
  if (bChaos_AABBTransform_ISPC_Enabled) {
    if (bChaos_AABBTransform_Optimized) {
      TransformedAABBHelperISPC2(__return_storage_ptr__,this,param_1);
    }
    else {
      TransformedAABBHelperISPC(__return_storage_ptr__,this,param_1);
    }
  }
  else if (bChaos_AABBTransform_Optimized) {
    local_108._0_8_ = (param_1->Rotation).XY.m128d_f64[0];
    local_108._8_8_ = (param_1->Rotation).XY.m128d_f64[1];
    local_f8 = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_f0 = (param_1->Rotation).ZW.m128d_f64[1];
    local_e8 = (param_1->Translation).XY.m128d_f64[0];
    dStack_e0 = (param_1->Translation).XY.m128d_f64[1];
    local_d8 = (param_1->Translation).ZW.m128d_f64[0];
    dStack_d0 = (param_1->Translation).ZW.m128d_f64[1];
    local_c8 = (param_1->Scale3D).XY.m128d_f64[0];
    dStack_c0 = (param_1->Scale3D).XY.m128d_f64[1];
    local_b8 = (param_1->Scale3D).ZW.m128d_f64[0];
    dStack_b0 = (param_1->Scale3D).ZW.m128d_f64[1];
    TransformedAABBHelper2<float,double>
              (__return_storage_ptr__,this,(TRigidTransform<double,3> *)local_108);
  }
  else {
    pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
    local_108._0_8_ = pTVar1->M[0][0];
    local_108._8_8_ = pTVar1->M[0][1];
    local_f8 = pTVar1->M[0][2];
    dStack_f0 = pTVar1->M[0][3];
    local_e8 = pTVar1->M[1][0];
    dStack_e0 = pTVar1->M[1][1];
    local_d8 = pTVar1->M[1][2];
    dStack_d0 = pTVar1->M[1][3];
    local_c8 = pTVar1->M[2][0];
    dStack_c0 = pTVar1->M[2][1];
    local_b8 = pTVar1->M[2][2];
    dStack_b0 = pTVar1->M[2][3];
    local_a8 = pTVar1->M[3][0];
    dStack_a0 = pTVar1->M[3][1];
    local_98 = pTVar1->M[3][2];
    dStack_90 = pTVar1->M[3][3];
    TransformedAABBHelper<float>(__return_storage_ptr__,this,(PMatrix<double,4,4> *)local_108);
  }
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630cc0

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::TransformedAABB
          (TAABB<float,3> *this,TAABB<float,3> *__return_storage_ptr__,PMatrix<double,4,4> *param_1)

{
  TransformedAABBHelper<float>(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630cf0

TAABB<float,3> * __thiscall
Chaos::TAABB<float,3>::TransformedAABB
          (TAABB<float,3> *this,TAABB<float,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  TMatrix<double> *pTVar1;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TMatrix<double> local_88;
  
  if (bChaos_AABBTransform_ISPC_Enabled) {
    if (bChaos_AABBTransform_Optimized) {
      TransformedAABBHelperISPC2(__return_storage_ptr__,this,(TTransform<double> *)param_1);
    }
    else {
      TransformedAABBHelperISPC(__return_storage_ptr__,this,(TTransform<double> *)param_1);
    }
  }
  else if (bChaos_AABBTransform_Optimized) {
    TransformedAABBHelper2<float,double>(__return_storage_ptr__,this,param_1);
  }
  else {
    pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale
                       ((TTransform<double> *)param_1,&local_88);
    local_108 = pTVar1->M[0][0];
    dStack_100 = pTVar1->M[0][1];
    local_f8 = pTVar1->M[0][2];
    dStack_f0 = pTVar1->M[0][3];
    local_e8 = pTVar1->M[1][0];
    dStack_e0 = pTVar1->M[1][1];
    local_d8 = pTVar1->M[1][2];
    dStack_d0 = pTVar1->M[1][3];
    local_c8 = pTVar1->M[2][0];
    dStack_c0 = pTVar1->M[2][1];
    local_b8 = pTVar1->M[2][2];
    dStack_b0 = pTVar1->M[2][3];
    local_a8 = pTVar1->M[3][0];
    dStack_a0 = pTVar1->M[3][1];
    local_98 = pTVar1->M[3][2];
    dStack_90 = pTVar1->M[3][3];
    TransformedAABBHelper<float>(__return_storage_ptr__,this,(PMatrix<double,4,4> *)&local_108);
  }
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630dd0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::TransformedAABB
          (TAABB<double,3> *this,TAABB<double,3> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_88 = param_1->M[0][0];
  dStack_80 = param_1->M[0][1];
  local_78 = param_1->M[0][2];
  dStack_70 = param_1->M[0][3];
  local_68 = param_1->M[1][0];
  dStack_60 = param_1->M[1][1];
  local_58 = param_1->M[1][2];
  dStack_50 = param_1->M[1][3];
  local_38 = param_1->M[2][2];
  dStack_30 = param_1->M[2][3];
  local_48 = param_1->M[2][0];
  dStack_40 = param_1->M[2][1];
  local_18 = param_1->M[3][2];
  dStack_10 = param_1->M[3][3];
  local_28 = param_1->M[3][0];
  dStack_20 = param_1->M[3][1];
  TransformedAABBHelper<double>(__return_storage_ptr__,this,(PMatrix<double,4,4> *)&local_88);
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630e50

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::TransformedAABB
          (TAABB<double,3> *this,TAABB<double,3> *__return_storage_ptr__,TTransform<double> *param_1
          )

{
  TMatrix<double> *pTVar1;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TMatrix<double> local_88;
  
  if (bChaos_AABBTransform_ISPC_Enabled) {
    if (bChaos_AABBTransform_Optimized) {
      TransformedAABBHelperISPC2(__return_storage_ptr__,this,param_1);
    }
    else {
      TransformedAABBHelperISPC(__return_storage_ptr__,this,param_1);
    }
  }
  else if (bChaos_AABBTransform_Optimized) {
    local_108._0_8_ = (param_1->Rotation).XY.m128d_f64[0];
    local_108._8_8_ = (param_1->Rotation).XY.m128d_f64[1];
    local_f8 = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_f0 = (param_1->Rotation).ZW.m128d_f64[1];
    local_e8 = (param_1->Translation).XY.m128d_f64[0];
    dStack_e0 = (param_1->Translation).XY.m128d_f64[1];
    local_d8 = (param_1->Translation).ZW.m128d_f64[0];
    dStack_d0 = (param_1->Translation).ZW.m128d_f64[1];
    local_c8 = (param_1->Scale3D).XY.m128d_f64[0];
    dStack_c0 = (param_1->Scale3D).XY.m128d_f64[1];
    local_b8 = (param_1->Scale3D).ZW.m128d_f64[0];
    dStack_b0 = (param_1->Scale3D).ZW.m128d_f64[1];
    TransformedAABBHelper2<double,double>
              (__return_storage_ptr__,this,(TRigidTransform<double,3> *)local_108);
  }
  else {
    pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
    local_108._0_8_ = pTVar1->M[0][0];
    local_108._8_8_ = pTVar1->M[0][1];
    local_f8 = pTVar1->M[0][2];
    dStack_f0 = pTVar1->M[0][3];
    local_e8 = pTVar1->M[1][0];
    dStack_e0 = pTVar1->M[1][1];
    local_d8 = pTVar1->M[1][2];
    dStack_d0 = pTVar1->M[1][3];
    local_c8 = pTVar1->M[2][0];
    dStack_c0 = pTVar1->M[2][1];
    local_b8 = pTVar1->M[2][2];
    dStack_b0 = pTVar1->M[2][3];
    local_a8 = pTVar1->M[3][0];
    dStack_a0 = pTVar1->M[3][1];
    local_98 = pTVar1->M[3][2];
    dStack_90 = pTVar1->M[3][3];
    TransformedAABBHelper<double>(__return_storage_ptr__,this,(PMatrix<double,4,4> *)local_108);
  }
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630f70

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::TransformedAABB
          (TAABB<double,3> *this,TAABB<double,3> *__return_storage_ptr__,
          PMatrix<double,4,4> *param_1)

{
  TransformedAABBHelper<double>(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// TransformedAABB @ 143630fa0

TAABB<double,3> * __thiscall
Chaos::TAABB<double,3>::TransformedAABB
          (TAABB<double,3> *this,TAABB<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  TMatrix<double> *pTVar1;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TMatrix<double> local_88;
  
  if (bChaos_AABBTransform_ISPC_Enabled) {
    if (bChaos_AABBTransform_Optimized) {
      TransformedAABBHelperISPC2(__return_storage_ptr__,this,(TTransform<double> *)param_1);
    }
    else {
      TransformedAABBHelperISPC(__return_storage_ptr__,this,(TTransform<double> *)param_1);
    }
  }
  else if (bChaos_AABBTransform_Optimized) {
    TransformedAABBHelper2<double,double>(__return_storage_ptr__,this,param_1);
  }
  else {
    pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale
                       ((TTransform<double> *)param_1,&local_88);
    local_108 = pTVar1->M[0][0];
    dStack_100 = pTVar1->M[0][1];
    local_f8 = pTVar1->M[0][2];
    dStack_f0 = pTVar1->M[0][3];
    local_e8 = pTVar1->M[1][0];
    dStack_e0 = pTVar1->M[1][1];
    local_d8 = pTVar1->M[1][2];
    dStack_d0 = pTVar1->M[1][3];
    local_c8 = pTVar1->M[2][0];
    dStack_c0 = pTVar1->M[2][1];
    local_b8 = pTVar1->M[2][2];
    dStack_b0 = pTVar1->M[2][3];
    local_a8 = pTVar1->M[3][0];
    dStack_a0 = pTVar1->M[3][1];
    local_98 = pTVar1->M[3][2];
    dStack_90 = pTVar1->M[3][3];
    TransformedAABBHelper<double>(__return_storage_ptr__,this,(PMatrix<double,4,4> *)&local_108);
  }
  return __return_storage_ptr__;
}

// ZeroAABB @ 143631300

TAABB<float,3> * __cdecl Chaos::TAABB<float,3>::ZeroAABB(TAABB<float,3> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->MMin = 0;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x4 = 0;
  return __return_storage_ptr__;
}

// ZeroAABB @ 143631320

TAABB<double,3> * __cdecl Chaos::TAABB<double,3>::ZeroAABB(TAABB<double,3> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->MMin = 0;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->MMax = 0;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = 0;
  return __return_storage_ptr__;
}

