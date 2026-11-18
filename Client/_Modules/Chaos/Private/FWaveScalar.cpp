// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// FWaveScalar @ 143f45850

FWaveScalar * __thiscall
FWaveScalar::FWaveScalar
          (FWaveScalar *this,float param_1,TVector<double> *param_2,float param_3,float param_4,
          EWaveFunctionType param_5,EFieldFalloffType param_6)

{
  double dVar1;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Magnitude = param_1;
  this->_padding_ = (longlong)&___7FWaveScalar__6B_;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  this->Function = param_5;
  this->Falloff = param_6;
  this->Wavelength = param_3;
  this->Period = param_4;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  return this;
}

// ~FWaveScalar @ 143f4b390

void __thiscall FWaveScalar::~FWaveScalar(FWaveScalar *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c870

bool __thiscall FWaveScalar::operator==(FWaveScalar *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  iVar3 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar4 = (*pcVar1)(this);
  if ((((((iVar3 == iVar4) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
        (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
       ((*(float *)&param_1[1]._padding_ == this->Magnitude &&
        ((double)param_1[1].Name == (this->Position).field0_0x0._s_0.X)))) &&
      (((double)param_1[2]._padding_ == (this->Position).field0_0x0._s_0.Y &&
       (((double)param_1[2].Name == (this->Position).field0_0x0._s_0.Z &&
        (*(float *)&param_1[3]._padding_ == this->Wavelength)))))) &&
     ((*(float *)((longlong)&param_1[3]._padding_ + 4) == this->Period &&
      ((this->Function == param_1[3].Name.ComparisonIndex.Value &&
       (this->Falloff == param_1[3].Name.Number)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ComputeFieldBounds @ 143f5b070

void __thiscall
FWaveScalar::ComputeFieldBounds
          (FWaveScalar *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  
  (param_1->field0_0x0)._s_0.X = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Y = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Z = -3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.X = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Y = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Z = 3.4028234663852886e+38;
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (this->Position).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  return;
}

// EvalMaxMagnitude @ 143f5f6e0

float __thiscall FWaveScalar::EvalMaxMagnitude(FWaveScalar *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f65f00

void __thiscall
FWaveScalar::Evaluate(FWaveScalar *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  int iVar1;
  EWaveFunctionType EVar2;
  EFieldFalloffType EVar3;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  
  fVar14 = __real_3fb8aa3b;
  fVar13 = __real_3f800000;
  dVar12 = __real_3ff0000000000000;
  fVar26 = this->Wavelength;
  fVar27 = __real_80000000;
  if (fVar26 != 0.0) {
    fVar27 = __real_c0c90fdb / fVar26;
  }
  uVar20 = 0;
  iVar1 = (param_1->SampleIndices).ArrayNum;
  dVar21 = param_1->TimeSeconds;
  if (dVar21 <= 0.0) {
    dVar21 = 0.0;
  }
  dVar11 = __real_3ff0000000000000 / (double)this->Period;
  dVar10 = (double)fVar26 * dVar21 * dVar11;
  dVar11 = dVar11 * dVar21;
  if (0 < iVar1) {
    uVar28 = (uint)__xmm_80000000000000008000000000000000;
    uVar29 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar11 = dVar11 * dVar11;
    do {
      uVar18 = 0;
      if ((int)uVar20 < (param_1->SampleIndices).ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar4 = (param_1->SampleIndices).ElementArray;
      uVar17 = (param_1->SampleIndices).ArrayOffset + uVar20;
      uVar18 = 0;
      if ((int)uVar17 < pTVar4->ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      lVar19 = (longlong)(int)uVar17;
      if (this->Function == Field_Wave_Decay) {
        dVar21 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar29,
                                  SUB84(dVar11,0) ^ uVar28);
LAB_143f660bc:
        dVar21 = exp(dVar21);
        fVar26 = (float)dVar21 * this->Magnitude;
LAB_143f662bf:
        uVar18 = *(uint *)(pFVar5 + lVar19 * 8 + 4);
        uVar17 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = uVar18 + param_2->ArrayOffset;
        pTVar8 = param_2->ElementArray;
        uVar17 = 0;
        if ((int)uVar18 < pTVar8->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) = fVar26;
      }
      else {
        uVar18 = *(uint *)(pFVar5 + lVar19 * 8);
        uVar17 = 0;
        if ((int)uVar18 < (param_1->SamplePositions).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar18 = uVar18 + (param_1->SamplePositions).ArrayOffset;
        pTVar6 = (param_1->SamplePositions).ElementArray;
        uVar17 = 0;
        if ((int)uVar18 < pTVar6->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar16 = (longlong)(int)uVar18;
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        dVar25 = *(double *)(pFVar7 + lVar16 * 0x18) - (this->Position).field0_0x0._s_0.X;
        dVar21 = *(double *)(pFVar7 + lVar16 * 0x18 + 8) - (this->Position).field0_0x0._s_0.Y;
        dVar22 = *(double *)(pFVar7 + lVar16 * 0x18 + 0x10) - (this->Position).field0_0x0._s_0.Z;
        EVar2 = this->Function;
        auVar23._0_8_ = dVar22 * dVar22;
        auVar23._8_8_ = 0;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar21 * dVar21 + dVar25 * dVar25 + auVar23._0_8_;
        auVar24 = sqrtpd(auVar23,auVar24);
        dVar22 = dVar12 - (double)(float)auVar24._0_8_ / dVar10;
        dVar21 = (double)fVar27 * dVar10 * dVar22;
        if (EVar2 == Field_Wave_Cosine) {
          dVar21 = cos(dVar21);
          fVar26 = (float)dVar21 * this->Magnitude;
          goto LAB_143f662bf;
        }
        if (EVar2 == Field_Wave_Gaussian) {
          dVar21 = (double)CONCAT44((uint)((ulonglong)(dVar21 * dVar21) >> 0x20) ^ uVar29,
                                    SUB84(dVar21 * dVar21,0) ^ uVar28);
          goto LAB_143f660bc;
        }
        if (EVar2 == Field_Wave_Falloff) {
          if (((double)(float)auVar24._0_8_ < dVar10) && (0.0 < dVar10)) {
            EVar3 = this->Falloff;
            if (EVar3 == Field_FallOff_None) {
              fVar26 = this->Magnitude;
            }
            else if (EVar3 == Field_Falloff_Linear) {
              fVar26 = (float)dVar22 * this->Magnitude;
            }
            else {
              if (EVar3 != Field_Falloff_Squared) {
                if (EVar3 == Field_Falloff_Inverse) {
                  if (0.0 < dVar22) {
                    fVar26 = this->Magnitude + this->Magnitude;
                    fVar26 = fVar26 - fVar26 / (float)(dVar22 + dVar12);
                    goto LAB_143f662bf;
                  }
                }
                else if (EVar3 == Field_Falloff_Logarithmic) {
                  fVar26 = logf((float)dVar22 + fVar13);
                  fVar26 = fVar26 * this->Magnitude * fVar14;
                  goto LAB_143f662bf;
                }
                goto LAB_143f66408;
              }
              fVar26 = (float)(dVar22 * dVar22) * this->Magnitude;
            }
            goto LAB_143f662bf;
          }
          uVar18 = *(uint *)(pFVar5 + lVar19 * 8 + 4);
          uVar17 = 0;
          if ((int)uVar18 < param_2->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar18 = uVar18 + param_2->ArrayOffset;
          pTVar8 = param_2->ElementArray;
          uVar17 = 0;
          if ((int)uVar18 < pTVar8->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) = 0;
        }
      }
LAB_143f66408:
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar1);
  }
  return;
}

// FillSetupCount @ 143f674a0

void __thiscall FWaveScalar::FillSetupCount(FWaveScalar *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 0xb;
  return;
}

// FillSetupDatas @ 143f6b8e0

void __thiscall
FWaveScalar::FillSetupDatas
          (FWaveScalar *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_res20 [2];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [4];
  
  local_res20[0] = param_3;
  FFieldNode<float>::FillSetupDatas((FFieldNode<float> *)this,param_1,param_2,param_3);
  pFVar3 = (param_2->AllocatorInstance).Data;
  pfVar1 = &this->Magnitude;
  if ((pFVar3 <= pfVar1) && (pfVar1 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_38 = (float)(this->Position).field0_0x0._s_0.X;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_34 = (float)(this->Position).field0_0x0._s_0.Y;
  if ((pFVar3 <= (FScriptContainerElement *)&local_34) &&
     ((FScriptContainerElement *)&local_34 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_34;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_30 = (float)(this->Position).field0_0x0._s_0.Z;
  if ((pFVar3 <= (FScriptContainerElement *)&local_30) &&
     ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  pfVar1 = &this->Wavelength;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_30;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((pFVar3 <= pfVar1) && (pfVar1 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  pfVar2 = &this->Period;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((pFVar3 <= pfVar2) && (pfVar2 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar2;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res20) &&
     ((FScriptContainerElement *)local_res20 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res20[0];
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_2c = (float)(int)this->Function;
  if ((pFVar3 <= (FScriptContainerElement *)&local_2c) &&
     ((FScriptContainerElement *)&local_2c < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_2c;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_28[0] = (float)(int)this->Falloff;
  if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28[0];
  return;
}

// NewCopy @ 143f70d10

FFieldNodeBase * __thiscall FWaveScalar::NewCopy(FWaveScalar *this)

{
  FWaveScalar *pFVar1;
  
  pFVar1 = ::operator_new(0x40);
  if (pFVar1 != (FWaveScalar *)0x0) {
    pFVar1 = FWaveScalar(pFVar1,this->Magnitude,&this->Position,this->Wavelength,this->Period,
                         this->Function,this->Falloff);
    return (FFieldNodeBase *)pFVar1;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73b30

ESerializationType __thiscall FWaveScalar::SerializationType(FWaveScalar *this)

{
  return FieldNode_FWaveScalar;
}

// Serialize @ 143f74b70

void __thiscall FWaveScalar::Serialize(FWaveScalar *this,FArchive *param_1)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  pfVar1 = &this->Magnitude;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->Position);
  pfVar1 = &this->Wavelength;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->Period;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->Function;
  if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  this->Function = (uint)(byte)local_res8[0];
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->Falloff;
  if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  this->Falloff = (uint)(byte)local_res8[0];
  return;
}

