// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// FConvex @ 14db913f0

FConvex * __thiscall
Chaos::FConvex::FConvex
          (FConvex *this,TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FConvex *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,3,'\b');
  uVar7 = 0;
  this->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Planes).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Planes).ArrayNum = param_1->ArrayNum;
  (this->Planes).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = param_3->ArrayNum;
  (this->Vertices).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  *(undefined4 *)&(this->LocalBoundingBox).MMin = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
  *(undefined4 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
  (this->StructureData).Data.Ptr = (void *)0x0;
  (this->StructureData).IndexType = None;
  *(undefined8 *)&this->RotationOfMass = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x8 = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x10 = 0;
  *(undefined8 *)&(this->RotationOfMass).field_0x18 = 0;
  uVar8 = uVar7;
  if (0 < (this->Vertices).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (this->Vertices).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConvex *)(*pcVar2)();
        return pFVar5;
      }
      pFVar1 = (this->Vertices).AllocatorInstance.Data;
      uVar7 = (ulonglong)(uVar6 + 1);
      fVar9 = *(float *)&(this->LocalBoundingBox).MMin;
      if (*(float *)(pFVar1 + uVar8) <= fVar9) {
        fVar9 = *(float *)(pFVar1 + uVar8);
      }
      fVar10 = *(float *)&(this->LocalBoundingBox).MMin.field_0x4;
      fVar11 = *(float *)(pFVar1 + uVar8 + 4);
      if (fVar10 <= *(float *)(pFVar1 + uVar8 + 4)) {
        fVar11 = fVar10;
      }
      fVar10 = *(float *)&(this->LocalBoundingBox).MMin.field_0x8;
      fVar12 = *(float *)(pFVar1 + uVar8 + 8);
      if (fVar10 <= *(float *)(pFVar1 + uVar8 + 8)) {
        fVar12 = fVar10;
      }
      *(float *)&(this->LocalBoundingBox).MMin = fVar9;
      *(float *)&(this->LocalBoundingBox).MMin.field_0x4 = fVar11;
      *(float *)&(this->LocalBoundingBox).MMin.field_0x8 = fVar12;
      fVar9 = *(float *)&(this->LocalBoundingBox).MMax;
      if (fVar9 <= *(float *)(pFVar1 + uVar8)) {
        fVar9 = *(float *)(pFVar1 + uVar8);
      }
      fVar10 = *(float *)&(this->LocalBoundingBox).MMax.field_0x8;
      if (fVar10 <= *(float *)(pFVar1 + uVar8 + 8)) {
        fVar10 = *(float *)(pFVar1 + uVar8 + 8);
      }
      fVar11 = *(float *)&(this->LocalBoundingBox).MMax.field_0x4;
      fVar12 = *(float *)(pFVar1 + uVar8 + 4);
      if (*(float *)(pFVar1 + uVar8 + 4) <= fVar11) {
        fVar12 = fVar11;
      }
      *(float *)&(this->LocalBoundingBox).MMax = fVar9;
      *(float *)&(this->LocalBoundingBox).MMax.field_0x4 = fVar12;
      *(float *)&(this->LocalBoundingBox).MMax.field_0x8 = fVar10;
      uVar8 = uVar8 + 0xc;
    } while ((int)(uVar6 + 1) < (this->Vertices).ArrayNum);
  }
  fVar11 = (*(float *)&(this->LocalBoundingBox).MMax.field_0x4 -
           *(float *)&(this->LocalBoundingBox).MMin.field_0x4) * __real_3f000000;
  fVar12 = (*(float *)&(this->LocalBoundingBox).MMax.field_0x8 -
           *(float *)&(this->LocalBoundingBox).MMin.field_0x8) * __real_3f000000;
  fVar9 = *(float *)&(this->LocalBoundingBox).MMin.field_0x4;
  fVar10 = *(float *)&(this->LocalBoundingBox).MMin.field_0x8;
  *(float *)&this->CenterOfMass =
       (*(float *)&(this->LocalBoundingBox).MMax - *(float *)&(this->LocalBoundingBox).MMin) *
       __real_3f000000 + *(float *)&(this->LocalBoundingBox).MMin;
  *(float *)&(this->CenterOfMass).field_0x4 = fVar11 + fVar9;
  *(float *)&(this->CenterOfMass).field_0x8 = fVar12 + fVar10;
  this->Volume = (*(float *)&(this->LocalBoundingBox).MMax.field_0x4 -
                 *(float *)&(this->LocalBoundingBox).MMin.field_0x4) *
                 (*(float *)&(this->LocalBoundingBox).MMax -
                 *(float *)&(this->LocalBoundingBox).MMin) *
                 (*(float *)&(this->LocalBoundingBox).MMax.field_0x8 -
                 *(float *)&(this->LocalBoundingBox).MMin.field_0x8);
  CreateStructureData(this,param_2,false);
  ComputeUnitMassInertiaTensorAndRotationOfMass(this,(double)this->Volume);
  return this;
}

