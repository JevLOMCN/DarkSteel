// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 48

// GetV @ 1437002b0

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
          (TKinematicGeometryParticlesImp<double,3,0> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetW @ 143700370

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
          (TKinematicGeometryParticlesImp<double,3,0> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// KinematicTarget @ 1437019b0

FKinematicTarget * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKinematicTarget *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->KinematicTargets).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FKinematicTarget *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->KinematicTargets).field_0x8);
}

// SetV @ 1437b0670

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)&(this->MV).field_0x8;
  *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar1;
  *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
  *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar3;
  return;
}

// TKinematicGeometryParticlesImp<double,3,0> @ 143af8a50

TKinematicGeometryParticlesImp<double,3,0> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::TKinematicGeometryParticlesImp<double,3,0>
          (TKinematicGeometryParticlesImp<double,3,0> *this)

{
  TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>
            ((TGeometryParticlesImp<double,3,0> *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticlesImp_N_02_0A__Chaos__6B_;
  *(undefined ***)&this->MV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MW = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MV).field_0x8 = 0;
  *(undefined8 *)&(this->MV).field_0x10 = 0;
  *(undefined8 *)&(this->MW).field_0x8 = 0;
  *(undefined8 *)&(this->MW).field_0x10 = 0;
  *(undefined8 *)&(this->KinematicTargets).field_0x8 = 0;
  *(undefined8 *)&(this->KinematicTargets).field_0x10 = 0;
  *(undefined ***)&this->KinematicTargets =
       &___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MV);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MW);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->KinematicTargets);
  return this;
}

// ~TKinematicGeometryParticlesImp<double,3,0> @ 143afbbf0

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::~TKinematicGeometryParticlesImp<double,3,0>
          (TKinematicGeometryParticlesImp<double,3,0> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticlesImp_N_02_0A__Chaos__6B_;
  *(undefined ***)&this->KinematicTargets =
       &___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->KinematicTargets).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MW = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MW).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MV).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TGeometryParticlesImp<double,3,0>::~TGeometryParticlesImp<double,3,0>
            ((TGeometryParticlesImp<double,3,0> *)this);
  return;
}

// Serialize @ 143b3cd50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::Serialize
          (TKinematicGeometryParticlesImp<double,3,0> *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  int iVar12;
  FChaosArchive *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 *local_res18;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_90;
  undefined **local_80;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_78 [4];
  
  TGeometryParticlesImp<double,3,0>::Serialize((TGeometryParticlesImp<double,3,0> *)this,param_1);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar12 < 0x32) {
    uVar14 = 0;
    local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78[0].ArrayNum = 0;
    local_78[0].ArrayMax = 0;
    local_80 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (local_78,*(int *)&(this->MV).field_0x10,No);
    iVar12 = *(int *)&(this->MV).field_0x10;
    uVar15 = uVar14;
    uVar19 = uVar14;
    if (0 < iVar12) {
      do {
        uVar17 = (uint)uVar15;
        uVar18 = 0;
        if ((int)uVar17 < iVar12) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = *(longlong *)&(this->MV).field_0x8;
        fVar2 = *(float *)(uVar19 + lVar20);
        uVar3 = *(undefined8 *)(uVar19 + 4 + lVar20);
        dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar18 = 0;
        if ((int)uVar17 < local_78[0].ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(double *)(local_78[0].AllocatorInstance.Data + uVar14) = (double)fVar2;
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = (double)(float)uVar3;
        auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(local_78[0].AllocatorInstance.Data + uVar14 + 8) = auVar8;
        iVar12 = *(int *)&(this->MV).field_0x10;
        uVar14 = uVar14 + 0x18;
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 0xc;
      } while ((int)(uVar17 + 1) < iVar12);
    }
    uVar15 = 0;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar1 = &(this->MW).field_0x10;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_90,*(int *)puVar1,No);
    iVar12 = *(int *)puVar1;
    if (0 < iVar12) {
      uVar19 = uVar15;
      uVar14 = uVar15;
      do {
        uVar17 = (uint)uVar19;
        uVar18 = 0;
        if ((int)uVar17 < iVar12) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = *(longlong *)&(this->MW).field_0x8;
        fVar2 = *(float *)(uVar14 + lVar20);
        uVar3 = *(undefined8 *)(uVar14 + 4 + lVar20);
        dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar18 = 0;
        if ((int)uVar17 < local_90.ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = (ulonglong)(uVar17 + 1);
        uVar14 = uVar14 + 0xc;
        *(double *)(local_90.AllocatorInstance.Data + uVar15) = (double)fVar2;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = (double)(float)uVar3;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(local_90.AllocatorInstance.Data + uVar15 + 8) = auVar9;
        iVar12 = *(int *)puVar1;
        uVar15 = uVar15 + 0x18;
      } while ((int)(uVar17 + 1) < iVar12);
    }
    lVar16 = 0;
    pFVar13 = operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>(param_1,local_78);
    operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>(pFVar13,&local_90);
    (**(code **)(*(longlong *)&this->MV + 8))(&this->MV,local_78[0]._8_8_ & 0xffffffff);
    uVar18 = 0;
    lVar20 = lVar16;
    if (0 < local_78[0].ArrayNum) {
      do {
        uVar17 = 0;
        if ((int)uVar18 < local_78[0].ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar10 = *(double *)(local_78[0].AllocatorInstance.Data + lVar20);
        dVar4 = *(double *)(local_78[0].AllocatorInstance.Data + lVar20 + 8);
        dVar5 = *(double *)(local_78[0].AllocatorInstance.Data + lVar20 + 0x10);
        uVar17 = 0;
        if ((int)uVar18 < *(int *)&(this->MV).field_0x10) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)&(this->MV).field_0x8;
        uVar18 = uVar18 + 1;
        *(float *)(lVar16 + lVar6) = (float)dVar10;
        *(float *)(lVar16 + 4 + lVar6) = (float)dVar4;
        *(float *)(lVar16 + 8 + lVar6) = (float)dVar5;
        lVar16 = lVar16 + 0xc;
        lVar20 = lVar20 + 0x18;
      } while ((int)uVar18 < local_78[0].ArrayNum);
    }
    local_res18 = &(this->MW).field_0x8;
    uVar14 = 0;
    (**(code **)(*(longlong *)&this->MW + 8))(&this->MW,local_90._8_8_ & 0xffffffff);
    uVar15 = uVar14;
    uVar19 = uVar14;
    if (0 < local_90.ArrayNum) {
      do {
        uVar17 = (uint)uVar15;
        uVar18 = 0;
        if ((int)uVar17 < local_90.ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar10 = *(double *)(local_90.AllocatorInstance.Data + uVar19);
        dVar4 = *(double *)(local_90.AllocatorInstance.Data + uVar19 + 8);
        dVar5 = *(double *)(local_90.AllocatorInstance.Data + uVar19 + 0x10);
        uVar18 = 0;
        if ((int)uVar17 < *(int *)&(this->MW).field_0x10) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = *(longlong *)local_res18;
        *(float *)(uVar14 + lVar20) = (float)dVar10;
        *(float *)(uVar14 + 4 + lVar20) = (float)dVar4;
        *(float *)(uVar14 + 8 + lVar20) = (float)dVar5;
        uVar14 = uVar14 + 0xc;
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 0x18;
      } while ((int)(uVar17 + 1) < local_90.ArrayNum);
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    local_80 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
    if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].AllocatorInstance.Data);
    }
  }
  else {
    pFVar13 = operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                                 &(this->MV).field_0x8);
    operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
              (pFVar13,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &(this->MW).field_0x8);
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar12 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (8 < iVar12) {
    operator<<<Chaos::FKinematicTarget_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> *)
                       &(this->KinematicTargets).field_0x8);
  }
  return;
}

// SetVf @ 143b417a0

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetVf
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1,TVector<float,3> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0xc) = uVar2;
  return;
}

// SetW @ 143b41850

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)&(this->MW).field_0x8;
  *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar1;
  *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
  *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar3;
  return;
}

// SetWf @ 143b41920

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetWf
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1,TVector<float,3> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0xc) = uVar2;
  return;
}

// TKinematicGeometryParticlesImp<double,3,1> @ 143bdd5f0

TKinematicGeometryParticlesImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::TKinematicGeometryParticlesImp<double,3,1>
          (TKinematicGeometryParticlesImp<double,3,1> *this,
          TKinematicGeometryParticlesImp<double,3,1> *param_1)

{
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar1;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar2;
  TArrayCollectionArray<Chaos::FKinematicTarget> *pTVar3;
  
  TGeometryParticlesImp<double,3,1>::TGeometryParticlesImp<double,3,1>
            ((TGeometryParticlesImp<double,3,1> *)this,(TGeometryParticlesImp<double,3,1> *)param_1)
  ;
  pTVar1 = &this->MV;
  pTVar2 = &this->MW;
  pTVar3 = &this->KinematicTargets;
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticlesImp_N_02_00_Chaos__6B_;
  *(undefined ***)pTVar1 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MV).field_0x8 = 0;
  *(undefined8 *)&(this->MV).field_0x8 = *(undefined8 *)&(param_1->MV).field_0x8;
  *(undefined8 *)&(param_1->MV).field_0x8 = 0;
  *(undefined4 *)&(this->MV).field_0x10 = *(undefined4 *)&(param_1->MV).field_0x10;
  *(undefined4 *)&(this->MV).field_0x14 = *(undefined4 *)&(param_1->MV).field_0x14;
  *(undefined8 *)&(param_1->MV).field_0x10 = 0;
  *(undefined ***)pTVar1 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar2 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MW).field_0x8 = 0;
  *(undefined8 *)&(this->MW).field_0x8 = *(undefined8 *)&(param_1->MW).field_0x8;
  *(undefined8 *)&(param_1->MW).field_0x8 = 0;
  *(undefined4 *)&(this->MW).field_0x10 = *(undefined4 *)&(param_1->MW).field_0x10;
  *(undefined4 *)&(this->MW).field_0x14 = *(undefined4 *)&(param_1->MW).field_0x14;
  *(undefined8 *)&(param_1->MW).field_0x10 = 0;
  *(undefined ***)pTVar2 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar3 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->KinematicTargets).field_0x8 = 0;
  *(undefined8 *)&(this->KinematicTargets).field_0x8 =
       *(undefined8 *)&(param_1->KinematicTargets).field_0x8;
  *(undefined8 *)&(param_1->KinematicTargets).field_0x8 = 0;
  *(undefined4 *)&(this->KinematicTargets).field_0x10 =
       *(undefined4 *)&(param_1->KinematicTargets).field_0x10;
  *(undefined4 *)&(this->KinematicTargets).field_0x14 =
       *(undefined4 *)&(param_1->KinematicTargets).field_0x14;
  *(undefined8 *)&(param_1->KinematicTargets).field_0x10 = 0;
  *(undefined ***)pTVar3 = &___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar1);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar2);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar3);
  return this;
}

// TKinematicGeometryParticlesImp<double,3,1> @ 143bdd730

TKinematicGeometryParticlesImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::TKinematicGeometryParticlesImp<double,3,1>
          (TKinematicGeometryParticlesImp<double,3,1> *this)

{
  TGeometryParticlesImp<double,3,1>::TGeometryParticlesImp<double,3,1>
            ((TGeometryParticlesImp<double,3,1> *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticlesImp_N_02_00_Chaos__6B_;
  *(undefined ***)&this->MV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MW = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->MV).field_0x8 = 0;
  *(undefined8 *)&(this->MV).field_0x10 = 0;
  *(undefined8 *)&(this->MW).field_0x8 = 0;
  *(undefined8 *)&(this->MW).field_0x10 = 0;
  *(undefined8 *)&(this->KinematicTargets).field_0x8 = 0;
  *(undefined8 *)&(this->KinematicTargets).field_0x10 = 0;
  *(undefined ***)&this->KinematicTargets =
       &___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MV);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MW);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->KinematicTargets);
  return this;
}

// TKinematicGeometryParticlesImp<double,3,0> @ 143bdd7e0

TKinematicGeometryParticlesImp<double,3,0> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::TKinematicGeometryParticlesImp<double,3,0>
          (TKinematicGeometryParticlesImp<double,3,0> *this,
          TKinematicGeometryParticlesImp<double,3,0> *param_1)

{
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar1;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar2;
  TArrayCollectionArray<Chaos::FKinematicTarget> *pTVar3;
  
  TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>
            ((TGeometryParticlesImp<double,3,0> *)this,(TGeometryParticlesImp<double,3,0> *)param_1)
  ;
  pTVar1 = &this->MV;
  pTVar2 = &this->MW;
  pTVar3 = &this->KinematicTargets;
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticlesImp_N_02_0A__Chaos__6B_;
  *(undefined ***)pTVar1 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MV).field_0x8 = 0;
  *(undefined8 *)&(this->MV).field_0x8 = *(undefined8 *)&(param_1->MV).field_0x8;
  *(undefined8 *)&(param_1->MV).field_0x8 = 0;
  *(undefined4 *)&(this->MV).field_0x10 = *(undefined4 *)&(param_1->MV).field_0x10;
  *(undefined4 *)&(this->MV).field_0x14 = *(undefined4 *)&(param_1->MV).field_0x14;
  *(undefined8 *)&(param_1->MV).field_0x10 = 0;
  *(undefined ***)pTVar1 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar2 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MW).field_0x8 = 0;
  *(undefined8 *)&(this->MW).field_0x8 = *(undefined8 *)&(param_1->MW).field_0x8;
  *(undefined8 *)&(param_1->MW).field_0x8 = 0;
  *(undefined4 *)&(this->MW).field_0x10 = *(undefined4 *)&(param_1->MW).field_0x10;
  *(undefined4 *)&(this->MW).field_0x14 = *(undefined4 *)&(param_1->MW).field_0x14;
  *(undefined8 *)&(param_1->MW).field_0x10 = 0;
  *(undefined ***)pTVar2 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar3 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->KinematicTargets).field_0x8 = 0;
  *(undefined8 *)&(this->KinematicTargets).field_0x8 =
       *(undefined8 *)&(param_1->KinematicTargets).field_0x8;
  *(undefined8 *)&(param_1->KinematicTargets).field_0x8 = 0;
  *(undefined4 *)&(this->KinematicTargets).field_0x10 =
       *(undefined4 *)&(param_1->KinematicTargets).field_0x10;
  *(undefined4 *)&(this->KinematicTargets).field_0x14 =
       *(undefined4 *)&(param_1->KinematicTargets).field_0x14;
  *(undefined8 *)&(param_1->KinematicTargets).field_0x10 = 0;
  *(undefined ***)pTVar3 = &___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar1);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar2);
  TArrayCollection::AddArray((TArrayCollection *)this,(TArrayCollectionArrayBase *)pTVar3);
  return this;
}

// ~TKinematicGeometryParticlesImp<double,3,1> @ 143be2ab0

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::~TKinematicGeometryParticlesImp<double,3,1>
          (TKinematicGeometryParticlesImp<double,3,1> *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__TKinematicGeometryParticlesImp_N_02_00_Chaos__6B_;
  *(undefined ***)&this->KinematicTargets =
       &___7__TArrayCollectionArray_VFKinematicTarget_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->KinematicTargets).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MW = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MW).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MV).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TGeometryParticlesImp<double,3,1>::~TGeometryParticlesImp<double,3,1>
            ((TGeometryParticlesImp<double,3,1> *)this);
  return;
}

// AllKinematicTargets @ 143beea30

TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::AllKinematicTargets
          (TKinematicGeometryParticlesImp<double,3,1> *this)

{
  return (TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> *)
         &(this->KinematicTargets).field_0x8;
}

// AllKinematicTargets @ 143beea40

TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::AllKinematicTargets
          (TKinematicGeometryParticlesImp<double,3,0> *this)

{
  return (TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> *)
         &(this->KinematicTargets).field_0x8;
}

// AllV @ 143beea50

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::AllV
          (TKinematicGeometryParticlesImp<double,3,1> *this)

{
  return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)&(this->MV).field_0x8;
}

// AllV @ 143beea60

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::AllV
          (TKinematicGeometryParticlesImp<double,3,0> *this)

{
  return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)&(this->MV).field_0x8;
}

// AllW @ 143beea70

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::AllW
          (TKinematicGeometryParticlesImp<double,3,1> *this)

{
  return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)&(this->MW).field_0x8;
}

// AllW @ 143beea80

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::AllW
          (TKinematicGeometryParticlesImp<double,3,0> *this)

{
  return (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)&(this->MW).field_0x8;
}

// GetV @ 143c07da0

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::GetV
          (TKinematicGeometryParticlesImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetVf @ 143c07f00

TVector<float,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::GetVf
          (TKinematicGeometryParticlesImp<double,3,1> *this,TVector<float,3> *__return_storage_ptr__
          ,int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MV).field_0x8;
  uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar2 + (longlong)param_1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetVf @ 143c07fa0

TVector<float,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetVf
          (TKinematicGeometryParticlesImp<double,3,0> *this,TVector<float,3> *__return_storage_ptr__
          ,int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MV).field_0x8;
  uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar2 + (longlong)param_1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetW @ 143c08080

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::GetW
          (TKinematicGeometryParticlesImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetWf @ 143c081f0

TVector<float,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::GetWf
          (TKinematicGeometryParticlesImp<double,3,1> *this,TVector<float,3> *__return_storage_ptr__
          ,int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MW).field_0x8;
  uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar2 + (longlong)param_1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// GetWf @ 143c08290

TVector<float,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetWf
          (TKinematicGeometryParticlesImp<double,3,0> *this,TVector<float,3> *__return_storage_ptr__
          ,int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float,3> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float,3> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&(this->MW).field_0x8;
  uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar2 + (longlong)param_1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// Handle @ 143c0a400

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::Handle
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKinematicGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TKinematicGeometryParticleHandleImp<double,3,1> **)
          (this->_padding_ + (longlong)param_1 * 8);
}

// Handle @ 143c0a480

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::Handle
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SimType == EGeometryParticlesSimType::RigidBodySim",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\KinematicGeometryParticles.cpp"
                     ,0xb,L"Handles require a rigid body sim type");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TKinematicGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
    return pTVar4;
  }
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKinematicGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TKinematicGeometryParticleHandleImp<double,3,1> **)
          (this->_padding_ + (longlong)param_1 * 8);
}

// Handle @ 143c0a520

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::Handle
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKinematicGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TKinematicGeometryParticleHandleImp<double,3,1> **)
          (this->_padding_ + (longlong)param_1 * 8);
}

// Handle @ 143c0a5a0

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::Handle
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TKinematicGeometryParticleHandleImp<double,3,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return *(TKinematicGeometryParticleHandleImp<double,3,1> **)
          (this->_padding_ + (longlong)param_1 * 8);
}

// KinematicTarget @ 143c0b6e0

FKinematicTarget * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::KinematicTarget
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKinematicTarget *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->KinematicTargets).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FKinematicTarget *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->KinematicTargets).field_0x8);
}

// KinematicTarget @ 143c0b760

FKinematicTarget * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::KinematicTarget
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKinematicTarget *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->KinematicTargets).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FKinematicTarget *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->KinematicTargets).field_0x8);
}

// KinematicTarget @ 143c0b7e0

FKinematicTarget * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
          (TKinematicGeometryParticlesImp<double,3,0> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKinematicTarget *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->KinematicTargets).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FKinematicTarget *)
         ((longlong)param_1 * 0x30 + *(longlong *)&(this->KinematicTargets).field_0x8);
}

// Serialize @ 143c13d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::Serialize
          (TKinematicGeometryParticlesImp<double,3,1> *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  int iVar12;
  FChaosArchive *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 *local_res18;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_90;
  undefined **local_80;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_78 [4];
  
  TGeometryParticlesImp<double,3,1>::Serialize((TGeometryParticlesImp<double,3,1> *)this,param_1);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  if (iVar12 < 0x32) {
    uVar14 = 0;
    local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78[0].ArrayNum = 0;
    local_78[0].ArrayMax = 0;
    local_80 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (local_78,*(int *)&(this->MV).field_0x10,No);
    iVar12 = *(int *)&(this->MV).field_0x10;
    uVar15 = uVar14;
    uVar19 = uVar14;
    if (0 < iVar12) {
      do {
        uVar17 = (uint)uVar15;
        uVar18 = 0;
        if ((int)uVar17 < iVar12) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = *(longlong *)&(this->MV).field_0x8;
        fVar2 = *(float *)(uVar19 + lVar20);
        uVar3 = *(undefined8 *)(uVar19 + 4 + lVar20);
        dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar18 = 0;
        if ((int)uVar17 < local_78[0].ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(double *)(local_78[0].AllocatorInstance.Data + uVar14) = (double)fVar2;
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = (double)(float)uVar3;
        auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(local_78[0].AllocatorInstance.Data + uVar14 + 8) = auVar8;
        iVar12 = *(int *)&(this->MV).field_0x10;
        uVar14 = uVar14 + 0x18;
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 0xc;
      } while ((int)(uVar17 + 1) < iVar12);
    }
    uVar15 = 0;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar1 = &(this->MW).field_0x10;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_90,*(int *)puVar1,No);
    iVar12 = *(int *)puVar1;
    if (0 < iVar12) {
      uVar19 = uVar15;
      uVar14 = uVar15;
      do {
        uVar17 = (uint)uVar19;
        uVar18 = 0;
        if ((int)uVar17 < iVar12) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = *(longlong *)&(this->MW).field_0x8;
        fVar2 = *(float *)(uVar14 + lVar20);
        uVar3 = *(undefined8 *)(uVar14 + 4 + lVar20);
        dVar10 = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar18 = 0;
        if ((int)uVar17 < local_90.ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = (ulonglong)(uVar17 + 1);
        uVar14 = uVar14 + 0xc;
        *(double *)(local_90.AllocatorInstance.Data + uVar15) = (double)fVar2;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = (double)(float)uVar3;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(local_90.AllocatorInstance.Data + uVar15 + 8) = auVar9;
        iVar12 = *(int *)puVar1;
        uVar15 = uVar15 + 0x18;
      } while ((int)(uVar17 + 1) < iVar12);
    }
    lVar16 = 0;
    pFVar13 = operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>(param_1,local_78);
    operator<<<Chaos::TVector<double,3>_TSizedDefaultAllocator<32>_>(pFVar13,&local_90);
    (**(code **)(*(longlong *)&this->MV + 8))(&this->MV,local_78[0]._8_8_ & 0xffffffff);
    uVar18 = 0;
    lVar20 = lVar16;
    if (0 < local_78[0].ArrayNum) {
      do {
        uVar17 = 0;
        if ((int)uVar18 < local_78[0].ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar10 = *(double *)(local_78[0].AllocatorInstance.Data + lVar20);
        dVar4 = *(double *)(local_78[0].AllocatorInstance.Data + lVar20 + 8);
        dVar5 = *(double *)(local_78[0].AllocatorInstance.Data + lVar20 + 0x10);
        uVar17 = 0;
        if ((int)uVar18 < *(int *)&(this->MV).field_0x10) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)&(this->MV).field_0x8;
        uVar18 = uVar18 + 1;
        *(float *)(lVar16 + lVar6) = (float)dVar10;
        *(float *)(lVar16 + 4 + lVar6) = (float)dVar4;
        *(float *)(lVar16 + 8 + lVar6) = (float)dVar5;
        lVar16 = lVar16 + 0xc;
        lVar20 = lVar20 + 0x18;
      } while ((int)uVar18 < local_78[0].ArrayNum);
    }
    local_res18 = &(this->MW).field_0x8;
    uVar14 = 0;
    (**(code **)(*(longlong *)&this->MW + 8))(&this->MW,local_90._8_8_ & 0xffffffff);
    uVar15 = uVar14;
    uVar19 = uVar14;
    if (0 < local_90.ArrayNum) {
      do {
        uVar17 = (uint)uVar15;
        uVar18 = 0;
        if ((int)uVar17 < local_90.ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar10 = *(double *)(local_90.AllocatorInstance.Data + uVar19);
        dVar4 = *(double *)(local_90.AllocatorInstance.Data + uVar19 + 8);
        dVar5 = *(double *)(local_90.AllocatorInstance.Data + uVar19 + 0x10);
        uVar18 = 0;
        if ((int)uVar17 < *(int *)&(this->MW).field_0x10) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = *(longlong *)local_res18;
        *(float *)(uVar14 + lVar20) = (float)dVar10;
        *(float *)(uVar14 + 4 + lVar20) = (float)dVar4;
        *(float *)(uVar14 + 8 + lVar20) = (float)dVar5;
        uVar14 = uVar14 + 0xc;
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 0x18;
      } while ((int)(uVar17 + 1) < local_90.ArrayNum);
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    local_80 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
    if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].AllocatorInstance.Data);
    }
  }
  else {
    pFVar13 = operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                                 &(this->MV).field_0x8);
    operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
              (pFVar13,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                       &(this->MW).field_0x8);
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar12 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (8 < iVar12) {
    operator<<<Chaos::FKinematicTarget_TSizedDefaultAllocator<32>_>
              (param_1,(TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_> *)
                       &(this->KinematicTargets).field_0x8);
  }
  return;
}

// SetV @ 143c19bd0

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::SetV
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)&(this->MV).field_0x8;
  *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar1;
  *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
  *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar3;
  return;
}

// SetVf @ 143c19f10

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::SetVf
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1,TVector<float,3> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0xc) = uVar2;
  return;
}

// SetW @ 143c19fe0

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::SetW
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)&(this->MW).field_0x8;
  *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar1;
  *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
  *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar3;
  return;
}

// SetWf @ 143c1a1f0

void __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::SetWf
          (TKinematicGeometryParticlesImp<double,3,1> *this,int param_1,TVector<float,3> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)param_1 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 0xc) = uVar2;
  return;
}

// ToString @ 143c1b040

FString * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::ToString
          (TKinematicGeometryParticlesImp<double,3,1> *this,FString *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  
  TGeometryParticlesImp<double,3,1>::ToString
            ((TGeometryParticlesImp<double,3,1> *)this,&local_38,param_1);
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, MV:%s, MW:%s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 143c1b240

FString * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::ToString
          (TKinematicGeometryParticlesImp<double,3,0> *this,FString *__return_storage_ptr__,
          int param_1)

{
  FString local_68;
  FString local_58;
  FString local_48;
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  TGeometryParticlesImp<double,3,0>::ToString
            ((TGeometryParticlesImp<double,3,0> *)this,&local_48,param_1);
  GetW(this,&local_38,param_1);
  ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
  GetV(this,&local_20,param_1);
  ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, MV:%s, MW:%s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// V @ 143c1d3b0

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::V
          (TKinematicGeometryParticlesImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// V @ 143c1d470

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::V
          (TKinematicGeometryParticlesImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// V @ 143c1d530

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::V
          (TKinematicGeometryParticlesImp<double,3,0> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// V @ 143c1d5f0

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::V
          (TKinematicGeometryParticlesImp<double,3,0> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MV).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// W @ 143c1d890

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::W
          (TKinematicGeometryParticlesImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// W @ 143c1d950

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,1>::W
          (TKinematicGeometryParticlesImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// W @ 143c1da10

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::W
          (TKinematicGeometryParticlesImp<double,3,0> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// W @ 143c1dad0

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticlesImp<double,3,0>::W
          (TKinematicGeometryParticlesImp<double,3,0> *this,
          TVector<double,3> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<double,3> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar6 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)&(this->MW).field_0x8;
  fVar1 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar3 + lVar8 * 0xc);
  fVar2 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

