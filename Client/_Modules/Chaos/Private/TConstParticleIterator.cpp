// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> @ 14373ad20

TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> * __thiscall
Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
          (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *this,
          TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  EParticleType EVar2;
  undefined4 uVar3;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *pTVar9;
  int iVar10;
  int iStack_c;
  
  this->SOAViews = param_1;
  this->CurHandlesArray =
       (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  (this->TransientHandle).ParticleIdx = 0;
  (this->TransientHandle).Type = Static;
  this->SOAIdx = 0;
  this->DirtyValidationCount = -1;
  SeekNonEmptySOA(this);
  do {
    if ((this->TransientHandle).field0_0x0.GeometryParticles ==
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0)
    {
      if ((this->DirtyValidationCount == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirtyValidationCount != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f0,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
        return pTVar9;
      }
      if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4
                   ) != this->DirtyValidationCount) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f1,L""), bVar8)) goto code_r0x00014373ae02;
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x00014373ae02:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
      return pTVar9;
    }
    bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                      ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    if (!bVar8) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0)
    {
      if ((this->TransientHandle).field0_0x0.GeometryParticles !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x00014373aeb3;
      }
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x00014373aeb3:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
      return pTVar9;
    }
    do {
      pTVar4 = this->CurHandlesArray;
      if (pTVar4 == (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        piVar1 = &(this->TransientHandle).ParticleIdx;
        *piVar1 = *piVar1 + 1;
        if (this->CurSOASize <= (this->TransientHandle).ParticleIdx) {
LAB_14373aec8:
          this->SOAIdx = this->SOAIdx + 1;
          SeekNonEmptySOA(this);
        }
      }
      else {
        iVar10 = this->CurHandleIdx + 1;
        this->CurHandleIdx = iVar10;
        if (pTVar4->ArrayNum <= iVar10) goto LAB_14373aec8;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
          return pTVar9;
        }
        plVar5 = *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8);
        pTVar6 = (TGeometryParticlesImp<double,3,0> *)*plVar5;
        uVar3 = (undefined4)plVar5[1];
        if (pTVar6 == (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_c = (uint)iStack_c._1_3_ << 8;
          (this->TransientHandle).field0_0x0.GeometryParticles =
               (TGeometryParticlesImp<double,3,0> *)0x0;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = (char)iStack_c;
          *(int3 *)&(this->TransientHandle).field_0xd = (int3)((uint)iStack_c >> 8);
        }
        else {
          EVar2 = pTVar6->MParticleType;
          iStack_c = CONCAT31(iStack_c._1_3_,EVar2);
          (this->TransientHandle).field0_0x0.GeometryParticles = pTVar6;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = EVar2;
          *(uint3 *)&(this->TransientHandle).field_0xd = iStack_c._1_3_;
        }
      }
      if ((this->TransientHandle).field0_0x0.GeometryParticles ==
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        return this;
      }
      if (this->CurHandlesArray ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x00014373b01a;
      }
      else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DirtyValidationCount == CurHandlesArray->Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                  ,0x1ec,L""), bVar8)) {
code_r0x00014373b01a:
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
        return pTVar9;
      }
      bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    } while (bVar8);
  } while( true );
}

// TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> @ 14373b050

TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> * __thiscall
Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
          (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *this,
          TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  EParticleType EVar2;
  undefined4 uVar3;
  TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  longlong *plVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *pTVar9;
  int iVar10;
  int iStack_c;
  
  this->SOAViews = param_1;
  this->CurHandlesArray =
       (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  (this->TransientHandle).ParticleIdx = 0;
  (this->TransientHandle).Type = Static;
  this->SOAIdx = 0;
  this->DirtyValidationCount = -1;
  SeekNonEmptySOA(this);
  do {
    if ((this->TransientHandle).field0_0x0.GeometryParticles ==
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
         *)0x0) {
      if ((this->DirtyValidationCount == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirtyValidationCount != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f0,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                 (*pcVar7)();
        return pTVar9;
      }
      if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4
                   ) != this->DirtyValidationCount) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f1,L""), bVar8)) goto code_r0x00014373b132;
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x00014373b132:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
               (*pcVar7)();
      return pTVar9;
    }
    bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                      ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    if (!bVar8) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
         *)0x0) {
      if ((this->TransientHandle).field0_0x0.GeometryParticles !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                   (*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x00014373b1e3;
      }
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x00014373b1e3:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
               (*pcVar7)();
      return pTVar9;
    }
    do {
      pTVar4 = this->CurHandlesArray;
      if (pTVar4 == (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        piVar1 = &(this->TransientHandle).ParticleIdx;
        *piVar1 = *piVar1 + 1;
        if (this->CurSOASize <= (this->TransientHandle).ParticleIdx) {
LAB_14373b1f8:
          this->SOAIdx = this->SOAIdx + 1;
          SeekNonEmptySOA(this);
        }
      }
      else {
        iVar10 = this->CurHandleIdx + 1;
        this->CurHandleIdx = iVar10;
        if (pTVar4->ArrayNum <= iVar10) goto LAB_14373b1f8;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                   (*pcVar7)();
          return pTVar9;
        }
        plVar5 = *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8);
        pTVar6 = (TGeometryParticlesImp<double,3,0> *)*plVar5;
        uVar3 = (undefined4)plVar5[1];
        if (pTVar6 == (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_c = (uint)iStack_c._1_3_ << 8;
          (this->TransientHandle).field0_0x0.GeometryParticles =
               (TGeometryParticlesImp<double,3,0> *)0x0;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = (char)iStack_c;
          *(int3 *)&(this->TransientHandle).field_0xd = (int3)((uint)iStack_c >> 8);
        }
        else {
          EVar2 = pTVar6->MParticleType;
          iStack_c = CONCAT31(iStack_c._1_3_,EVar2);
          (this->TransientHandle).field0_0x0.GeometryParticles = pTVar6;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = EVar2;
          *(uint3 *)&(this->TransientHandle).field_0xd = iStack_c._1_3_;
        }
      }
      if ((this->TransientHandle).field0_0x0.GeometryParticles ==
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        return this;
      }
      if (this->CurHandlesArray ==
          (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *)0x0) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                   (*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x00014373b34a;
      }
      else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DirtyValidationCount == CurHandlesArray->Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                  ,0x1ec,L""), bVar8)) {
code_r0x00014373b34a:
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                 (*pcVar7)();
        return pTVar9;
      }
      bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    } while (bVar8);
  } while( true );
}

// TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> @ 14373b380

TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> * __thiscall
Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
          (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *this,
          TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  EParticleType EVar2;
  undefined4 uVar3;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *pTVar9;
  int iVar10;
  int iStack_c;
  
  this->SOAViews = param_1;
  this->CurHandlesArray =
       (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  (this->TransientHandle).ParticleIdx = 0;
  (this->TransientHandle).Type = Static;
  this->SOAIdx = 0;
  this->DirtyValidationCount = -1;
  SeekNonEmptySOA(this);
  do {
    if ((this->TransientHandle).field0_0x0.GeometryParticles ==
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0)
    {
      if ((this->DirtyValidationCount == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirtyValidationCount != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f0,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
        return pTVar9;
      }
      if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4
                   ) != this->DirtyValidationCount) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f1,L""), bVar8)) goto code_r0x00014373b462;
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x00014373b462:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
      return pTVar9;
    }
    bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                      ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    if (!bVar8) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0)
    {
      if ((this->TransientHandle).field0_0x0.GeometryParticles !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x00014373b513;
      }
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x00014373b513:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
      return pTVar9;
    }
    do {
      pTVar4 = this->CurHandlesArray;
      if (pTVar4 == (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        piVar1 = &(this->TransientHandle).ParticleIdx;
        *piVar1 = *piVar1 + 1;
        if (this->CurSOASize <= (this->TransientHandle).ParticleIdx) {
LAB_14373b528:
          this->SOAIdx = this->SOAIdx + 1;
          SeekNonEmptySOA(this);
        }
      }
      else {
        iVar10 = this->CurHandleIdx + 1;
        this->CurHandleIdx = iVar10;
        if (pTVar4->ArrayNum <= iVar10) goto LAB_14373b528;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
          return pTVar9;
        }
        plVar5 = *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8);
        pTVar6 = (TGeometryParticlesImp<double,3,0> *)*plVar5;
        uVar3 = (undefined4)plVar5[1];
        if (pTVar6 == (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_c = (uint)iStack_c._1_3_ << 8;
          (this->TransientHandle).field0_0x0.GeometryParticles =
               (TGeometryParticlesImp<double,3,0> *)0x0;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = (char)iStack_c;
          *(int3 *)&(this->TransientHandle).field_0xd = (int3)((uint)iStack_c >> 8);
        }
        else {
          EVar2 = pTVar6->MParticleType;
          iStack_c = CONCAT31(iStack_c._1_3_,EVar2);
          (this->TransientHandle).field0_0x0.GeometryParticles = pTVar6;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = EVar2;
          *(uint3 *)&(this->TransientHandle).field_0xd = iStack_c._1_3_;
        }
      }
      if ((this->TransientHandle).field0_0x0.GeometryParticles ==
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        return this;
      }
      if (this->CurHandlesArray ==
          (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x00014373b67a;
      }
      else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DirtyValidationCount == CurHandlesArray->Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                  ,0x1ec,L""), bVar8)) {
code_r0x00014373b67a:
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
        return pTVar9;
      }
      bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    } while (bVar8);
  } while( true );
}

// RangedForValidation @ 14379fde0

void __thiscall
Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
          (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurHandlesArray ==
      (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((this->TransientHandle).field0_0x0.GeometryParticles !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      if (this->DirtyValidationCount == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyValidationCount != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4)
          != this->DirtyValidationCount) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f1,L"");
        if (bVar2) goto code_r0x00014379fe8c;
      }
    }
  }
  else if (this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyValidationCount == CurHandlesArray->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                       ,0x1ec,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014379fe8c:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RangedForValidation @ 14379fea0

void __thiscall
Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
RangedForValidation(TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *this
                   )

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurHandlesArray ==
      (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
       *)0x0) {
    if ((this->TransientHandle).field0_0x0.GeometryParticles !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      if (this->DirtyValidationCount == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyValidationCount != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4)
          != this->DirtyValidationCount) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f1,L"");
        if (bVar2) goto code_r0x00014379ff4c;
      }
    }
  }
  else if (this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyValidationCount == CurHandlesArray->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                       ,0x1ec,L"");
    if (!bVar2) {
      return;
    }
code_r0x00014379ff4c:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RangedForValidation @ 14379ff60

void __thiscall
Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
          (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurHandlesArray ==
      (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((this->TransientHandle).field0_0x0.GeometryParticles !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      if (this->DirtyValidationCount == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyValidationCount != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4)
          != this->DirtyValidationCount) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f1,L"");
        if (bVar2) goto code_r0x0001437a000c;
      }
    }
  }
  else if (this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyValidationCount == CurHandlesArray->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                       ,0x1ec,L"");
    if (!bVar2) {
      return;
    }
code_r0x0001437a000c:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SeekNonEmptySOA @ 1437a7100

void __thiscall
Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
          (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *this)

{
  undefined4 uVar1;
  longlong lVar2;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TGeometryParticlesImp<double,3,0> *pTVar5;
  code *pcVar6;
  TParticleHandleBase<double,3>_u_0 TVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TParticleHandleBase<double,3>_u_0 *pTVar11;
  FScriptContainerElement *pFVar12;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  uint uVar14;
  TParticleHandleBase<double,3>_u_0 local_38;
  undefined4 uStack_30;
  EParticleType EStack_2c;
  TParticleHandleBase<double,3>_u_0 local_28;
  undefined4 local_20;
  EParticleType local_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  pTVar13 = this->SOAViews;
  uVar14 = this->SOAIdx;
  if ((int)uVar14 < pTVar13->ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
      lVar2 = *(longlong *)(pFVar12 + 8);
      if (lVar2 == 0) {
        iVar10 = *(int *)(*(longlong *)pFVar12 + 0x18);
      }
      else {
        iVar10 = *(int *)(lVar2 + 8);
      }
      if (iVar10 != 0) break;
      this->SOAIdx = this->SOAIdx + 1;
      pTVar13 = this->SOAViews;
      uVar14 = this->SOAIdx;
    } while ((int)uVar14 < pTVar13->ArrayNum);
  }
  pTVar13 = this->SOAViews;
  iVar10 = this->SOAIdx;
  this->CurHandleIdx = 0;
  if (iVar10 < pTVar13->ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar3 = *(TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
               **)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10 + 8);
    this->CurHandlesArray = pTVar3;
    if (pTVar3 == (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      uVar14 = this->SOAIdx;
      pTVar13 = this->SOAViews;
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_20 = 0;
      local_28 = *(TParticleHandleBase<double,3>_u_0 *)
                  ((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10);
      if (local_28.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        local_1c = Static;
      }
      else {
        local_1c = (local_28.GeometryParticles)->MParticleType;
      }
      pTVar11 = &local_28;
    }
    else {
      if ((pTVar3->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = this->CurHandlesArray;
      uVar1 = *(undefined4 *)(*(longlong *)(pTVar3->AllocatorInstance).Data + 8);
      if ((pTVar4->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_30 = uVar1;
      local_38 = (TParticleHandleBase<double,3>_u_0)**(longlong **)(pTVar4->AllocatorInstance).Data;
      if (local_38.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        EStack_2c = Static;
        pTVar11 = &local_38;
      }
      else {
        EStack_2c = (local_38.GeometryParticles)->MParticleType;
        pTVar11 = &local_38;
      }
    }
    TVar7 = pTVar11[1];
    (this->TransientHandle).field0_0x0 = *pTVar11;
    *(TParticleHandleBase<double,3>_u_0 *)&(this->TransientHandle).ParticleIdx = TVar7;
    this->CurSOASize = (int)((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    uStack_c = uStack_c & 0xffffff00;
    lVar2 = (ulonglong)uStack_c << 0x20;
    this->SOAIdx = 0;
    this->CurSOASize = 0;
    this->CurHandlesArray =
         (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
    (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
    (this->TransientHandle).ParticleIdx = (int)lVar2;
    (this->TransientHandle).Type = (char)((ulonglong)lVar2 >> 0x20);
    *(int3 *)&(this->TransientHandle).field_0xd = (int3)((ulonglong)lVar2 >> 0x28);
  }
  if (this->CurHandlesArray ==
      (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (this->TransientHandle).field0_0x0.GeometryParticles;
    if (pTVar5 == (TGeometryParticlesImp<double,3,0> *)0x0) {
      iVar10 = -1;
    }
    else {
      iVar10 = *(int *)((longlong)&pTVar5->_padding_ + 4);
    }
  }
  else {
    iVar10 = this->CurHandlesArray->ArrayNum;
  }
  this->DirtyValidationCount = iVar10;
  RangedForValidation(this);
  return;
}

// SeekNonEmptySOA @ 1437a73c0

void __thiscall
Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
          (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *this)

{
  undefined4 uVar1;
  longlong lVar2;
  TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TGeometryParticlesImp<double,3,0> *pTVar5;
  code *pcVar6;
  TParticleHandleBase<double,3>_u_0 TVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TParticleHandleBase<double,3>_u_0 *pTVar11;
  FScriptContainerElement *pFVar12;
  TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  uint uVar14;
  TParticleHandleBase<double,3>_u_0 local_38;
  undefined4 uStack_30;
  EParticleType EStack_2c;
  TParticleHandleBase<double,3>_u_0 local_28;
  undefined4 local_20;
  EParticleType local_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  pTVar13 = this->SOAViews;
  uVar14 = this->SOAIdx;
  if ((int)uVar14 < pTVar13->ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
      lVar2 = *(longlong *)(pFVar12 + 8);
      if (lVar2 == 0) {
        iVar10 = *(int *)(*(longlong *)pFVar12 + 0x18);
      }
      else {
        iVar10 = *(int *)(lVar2 + 8);
      }
      if (iVar10 != 0) break;
      this->SOAIdx = this->SOAIdx + 1;
      pTVar13 = this->SOAViews;
      uVar14 = this->SOAIdx;
    } while ((int)uVar14 < pTVar13->ArrayNum);
  }
  pTVar13 = this->SOAViews;
  iVar10 = this->SOAIdx;
  this->CurHandleIdx = 0;
  if (iVar10 < pTVar13->ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar3 = *(TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
               **)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10 + 8);
    this->CurHandlesArray = pTVar3;
    if (pTVar3 == (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      uVar14 = this->SOAIdx;
      pTVar13 = this->SOAViews;
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_20 = 0;
      local_28 = *(TParticleHandleBase<double,3>_u_0 *)
                  ((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10);
      if (local_28.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        local_1c = Static;
      }
      else {
        local_1c = (local_28.GeometryParticles)->MParticleType;
      }
      pTVar11 = &local_28;
    }
    else {
      if ((pTVar3->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = this->CurHandlesArray;
      uVar1 = *(undefined4 *)(*(longlong *)(pTVar3->AllocatorInstance).Data + 8);
      if ((pTVar4->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_30 = uVar1;
      local_38 = (TParticleHandleBase<double,3>_u_0)**(longlong **)(pTVar4->AllocatorInstance).Data;
      if (local_38.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        EStack_2c = Static;
        pTVar11 = &local_38;
      }
      else {
        EStack_2c = (local_38.GeometryParticles)->MParticleType;
        pTVar11 = &local_38;
      }
    }
    TVar7 = pTVar11[1];
    (this->TransientHandle).field0_0x0 = *pTVar11;
    *(TParticleHandleBase<double,3>_u_0 *)&(this->TransientHandle).ParticleIdx = TVar7;
    this->CurSOASize = (int)((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    uStack_c = uStack_c & 0xffffff00;
    lVar2 = (ulonglong)uStack_c << 0x20;
    this->SOAIdx = 0;
    this->CurSOASize = 0;
    this->CurHandlesArray =
         (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *)0x0;
    (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
    (this->TransientHandle).ParticleIdx = (int)lVar2;
    (this->TransientHandle).Type = (char)((ulonglong)lVar2 >> 0x20);
    *(int3 *)&(this->TransientHandle).field_0xd = (int3)((ulonglong)lVar2 >> 0x28);
  }
  if (this->CurHandlesArray ==
      (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
       *)0x0) {
    pTVar5 = (this->TransientHandle).field0_0x0.GeometryParticles;
    if (pTVar5 == (TGeometryParticlesImp<double,3,0> *)0x0) {
      iVar10 = -1;
    }
    else {
      iVar10 = *(int *)((longlong)&pTVar5->_padding_ + 4);
    }
  }
  else {
    iVar10 = this->CurHandlesArray->ArrayNum;
  }
  this->DirtyValidationCount = iVar10;
  RangedForValidation(this);
  return;
}

// SeekNonEmptySOA @ 1437a7680

void __thiscall
Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
          (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *this)

{
  undefined4 uVar1;
  longlong lVar2;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TGeometryParticlesImp<double,3,0> *pTVar5;
  code *pcVar6;
  TParticleHandleBase<double,3>_u_0 TVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TParticleHandleBase<double,3>_u_0 *pTVar11;
  FScriptContainerElement *pFVar12;
  TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_> *pTVar13
  ;
  uint uVar14;
  TParticleHandleBase<double,3>_u_0 local_38;
  undefined4 uStack_30;
  EParticleType EStack_2c;
  TParticleHandleBase<double,3>_u_0 local_28;
  undefined4 local_20;
  EParticleType local_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  pTVar13 = this->SOAViews;
  uVar14 = this->SOAIdx;
  if ((int)uVar14 < pTVar13->ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
      lVar2 = *(longlong *)(pFVar12 + 8);
      if (lVar2 == 0) {
        iVar10 = *(int *)(*(longlong *)pFVar12 + 0x18);
      }
      else {
        iVar10 = *(int *)(lVar2 + 8);
      }
      if (iVar10 != 0) break;
      this->SOAIdx = this->SOAIdx + 1;
      pTVar13 = this->SOAViews;
      uVar14 = this->SOAIdx;
    } while ((int)uVar14 < pTVar13->ArrayNum);
  }
  pTVar13 = this->SOAViews;
  iVar10 = this->SOAIdx;
  this->CurHandleIdx = 0;
  if (iVar10 < pTVar13->ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar3 = *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
               **)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10 + 8);
    this->CurHandlesArray = pTVar3;
    if (pTVar3 == (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      uVar14 = this->SOAIdx;
      pTVar13 = this->SOAViews;
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_20 = 0;
      local_28 = *(TParticleHandleBase<double,3>_u_0 *)
                  ((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10);
      if (local_28.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        local_1c = Static;
      }
      else {
        local_1c = (local_28.GeometryParticles)->MParticleType;
      }
      pTVar11 = &local_28;
    }
    else {
      if ((pTVar3->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = this->CurHandlesArray;
      uVar1 = *(undefined4 *)(*(longlong *)(pTVar3->AllocatorInstance).Data + 8);
      if ((pTVar4->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_30 = uVar1;
      local_38 = (TParticleHandleBase<double,3>_u_0)**(longlong **)(pTVar4->AllocatorInstance).Data;
      if (local_38.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        EStack_2c = Static;
        pTVar11 = &local_38;
      }
      else {
        EStack_2c = (local_38.GeometryParticles)->MParticleType;
        pTVar11 = &local_38;
      }
    }
    TVar7 = pTVar11[1];
    (this->TransientHandle).field0_0x0 = *pTVar11;
    *(TParticleHandleBase<double,3>_u_0 *)&(this->TransientHandle).ParticleIdx = TVar7;
    this->CurSOASize = (int)((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    uStack_c = uStack_c & 0xffffff00;
    lVar2 = (ulonglong)uStack_c << 0x20;
    this->SOAIdx = 0;
    this->CurSOASize = 0;
    this->CurHandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
    (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
    (this->TransientHandle).ParticleIdx = (int)lVar2;
    (this->TransientHandle).Type = (char)((ulonglong)lVar2 >> 0x20);
    *(int3 *)&(this->TransientHandle).field_0xd = (int3)((ulonglong)lVar2 >> 0x28);
  }
  if (this->CurHandlesArray ==
      (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (this->TransientHandle).field0_0x0.GeometryParticles;
    if (pTVar5 == (TGeometryParticlesImp<double,3,0> *)0x0) {
      iVar10 = -1;
    }
    else {
      iVar10 = *(int *)((longlong)&pTVar5->_padding_ + 4);
    }
  }
  else {
    iVar10 = this->CurHandlesArray->ArrayNum;
  }
  this->DirtyValidationCount = iVar10;
  RangedForValidation(this);
  return;
}

// TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> @ 143c87860

TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> * __thiscall
Chaos::TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::
TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>
          (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *this,
          TArray<Chaos::TSOAView<Chaos::TPBDRigidClusteredParticles<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  EParticleType EVar2;
  undefined4 uVar3;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  longlong *plVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *pTVar9;
  int iVar10;
  int iStack_c;
  
  this->SOAViews = param_1;
  this->CurHandlesArray =
       (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  (this->TransientHandle).ParticleIdx = 0;
  (this->TransientHandle).Type = Static;
  this->SOAIdx = 0;
  this->DirtyValidationCount = -1;
  SeekNonEmptySOA(this);
  do {
    if ((this->TransientHandle).field0_0x0.GeometryParticles ==
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
         *)0x0) {
      if ((this->DirtyValidationCount == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirtyValidationCount != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f0,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)
                 (*pcVar7)();
        return pTVar9;
      }
      if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4
                   ) != this->DirtyValidationCount) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f1,L""), bVar8)) goto code_r0x000143c87942;
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x000143c87942:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)(*pcVar7)();
      return pTVar9;
    }
    bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                      ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    if (!bVar8) {
      return this;
    }
    if (this->CurHandlesArray ==
        (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
         *)0x0) {
      if ((this->TransientHandle).field0_0x0.GeometryParticles !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)
                   (*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x000143c879f3;
      }
    }
    else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("DirtyValidationCount == CurHandlesArray->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                ,0x1ec,L""), bVar8)) {
code_r0x000143c879f3:
      pcVar7 = (code *)swi(3);
      pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)(*pcVar7)();
      return pTVar9;
    }
    do {
      pTVar4 = this->CurHandlesArray;
      if (pTVar4 == (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        piVar1 = &(this->TransientHandle).ParticleIdx;
        *piVar1 = *piVar1 + 1;
        if (this->CurSOASize <= (this->TransientHandle).ParticleIdx) {
LAB_143c87a08:
          this->SOAIdx = this->SOAIdx + 1;
          SeekNonEmptySOA(this);
        }
      }
      else {
        iVar10 = this->CurHandleIdx + 1;
        this->CurHandleIdx = iVar10;
        if (pTVar4->ArrayNum <= iVar10) goto LAB_143c87a08;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)
                   (*pcVar7)();
          return pTVar9;
        }
        plVar5 = *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8);
        pTVar6 = (TGeometryParticlesImp<double,3,0> *)*plVar5;
        uVar3 = (undefined4)plVar5[1];
        if (pTVar6 == (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_c = (uint)iStack_c._1_3_ << 8;
          (this->TransientHandle).field0_0x0.GeometryParticles =
               (TGeometryParticlesImp<double,3,0> *)0x0;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = (char)iStack_c;
          *(int3 *)&(this->TransientHandle).field_0xd = (int3)((uint)iStack_c >> 8);
        }
        else {
          EVar2 = pTVar6->MParticleType;
          iStack_c = CONCAT31(iStack_c._1_3_,EVar2);
          (this->TransientHandle).field0_0x0.GeometryParticles = pTVar6;
          (this->TransientHandle).ParticleIdx = uVar3;
          (this->TransientHandle).Type = EVar2;
          *(uint3 *)&(this->TransientHandle).field_0xd = iStack_c._1_3_;
        }
      }
      if ((this->TransientHandle).field0_0x0.GeometryParticles ==
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        return this;
      }
      if (this->CurHandlesArray ==
          (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *)0x0) {
        if ((this->DirtyValidationCount == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DirtyValidationCount != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)
                   (*pcVar7)();
          return pTVar9;
        }
        if ((*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ +
                     4) != this->DirtyValidationCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                               ,0x1f1,L""), bVar8)) goto code_r0x000143c87b5a;
      }
      else if ((this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DirtyValidationCount == CurHandlesArray->Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                                  ,0x1ec,L""), bVar8)) {
code_r0x000143c87b5a:
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *)
                 (*pcVar7)();
        return pTVar9;
      }
      bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    } while (bVar8);
  } while( true );
}

// RangedForValidation @ 143ca3ab0

void __thiscall
Chaos::TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::RangedForValidation
          (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurHandlesArray ==
      (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
       *)0x0) {
    if ((this->TransientHandle).field0_0x0.GeometryParticles !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      if (this->DirtyValidationCount == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyValidationCount != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((longlong)&((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_ + 4)
          != this->DirtyValidationCount) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f1,L"");
        if (bVar2) goto code_r0x000143ca3b5c;
      }
    }
  }
  else if (this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyValidationCount == CurHandlesArray->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                       ,0x1ec,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143ca3b5c:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SeekNonEmptySOA @ 143caa040

void __thiscall
Chaos::TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_>::SeekNonEmptySOA
          (TConstParticleIterator<Chaos::TPBDRigidClusteredParticles<double,3>_> *this)

{
  undefined4 uVar1;
  longlong lVar2;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TGeometryParticlesImp<double,3,0> *pTVar5;
  code *pcVar6;
  TParticleHandleBase<double,3>_u_0 TVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TParticleHandleBase<double,3>_u_0 *pTVar11;
  FScriptContainerElement *pFVar12;
  TArray<Chaos::TSOAView<Chaos::TPBDRigidClusteredParticles<double,3>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  uint uVar14;
  TParticleHandleBase<double,3>_u_0 local_38;
  undefined4 uStack_30;
  EParticleType EStack_2c;
  TParticleHandleBase<double,3>_u_0 local_28;
  undefined4 local_20;
  EParticleType local_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  pTVar13 = this->SOAViews;
  uVar14 = this->SOAIdx;
  if ((int)uVar14 < pTVar13->ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
      lVar2 = *(longlong *)(pFVar12 + 8);
      if (lVar2 == 0) {
        iVar10 = *(int *)(*(longlong *)pFVar12 + 0x18);
      }
      else {
        iVar10 = *(int *)(lVar2 + 8);
      }
      if (iVar10 != 0) break;
      this->SOAIdx = this->SOAIdx + 1;
      pTVar13 = this->SOAViews;
      uVar14 = this->SOAIdx;
    } while ((int)uVar14 < pTVar13->ArrayNum);
  }
  pTVar13 = this->SOAViews;
  iVar10 = this->SOAIdx;
  this->CurHandleIdx = 0;
  if (iVar10 < pTVar13->ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar3 = *(TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
               **)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10 + 8);
    this->CurHandlesArray = pTVar3;
    if (pTVar3 == (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      uVar14 = this->SOAIdx;
      pTVar13 = this->SOAViews;
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_20 = 0;
      local_28 = *(TParticleHandleBase<double,3>_u_0 *)
                  ((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10);
      if (local_28.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        local_1c = Static;
      }
      else {
        local_1c = (local_28.GeometryParticles)->MParticleType;
      }
      pTVar11 = &local_28;
    }
    else {
      if ((pTVar3->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = this->CurHandlesArray;
      uVar1 = *(undefined4 *)(*(longlong *)(pTVar3->AllocatorInstance).Data + 8);
      if ((pTVar4->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_30 = uVar1;
      local_38 = (TParticleHandleBase<double,3>_u_0)**(longlong **)(pTVar4->AllocatorInstance).Data;
      if (local_38.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
        EStack_2c = Static;
        pTVar11 = &local_38;
      }
      else {
        EStack_2c = (local_38.GeometryParticles)->MParticleType;
        pTVar11 = &local_38;
      }
    }
    TVar7 = pTVar11[1];
    (this->TransientHandle).field0_0x0 = *pTVar11;
    *(TParticleHandleBase<double,3>_u_0 *)&(this->TransientHandle).ParticleIdx = TVar7;
    this->CurSOASize = (int)((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_;
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
    uStack_c = uStack_c & 0xffffff00;
    lVar2 = (ulonglong)uStack_c << 0x20;
    this->SOAIdx = 0;
    this->CurSOASize = 0;
    this->CurHandlesArray =
         (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *)0x0;
    (this->TransientHandle).field0_0x0.GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
    (this->TransientHandle).ParticleIdx = (int)lVar2;
    (this->TransientHandle).Type = (char)((ulonglong)lVar2 >> 0x20);
    *(int3 *)&(this->TransientHandle).field_0xd = (int3)((ulonglong)lVar2 >> 0x28);
  }
  if (this->CurHandlesArray ==
      (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
       *)0x0) {
    pTVar5 = (this->TransientHandle).field0_0x0.GeometryParticles;
    if (pTVar5 == (TGeometryParticlesImp<double,3,0> *)0x0) {
      iVar10 = -1;
    }
    else {
      iVar10 = *(int *)((longlong)&pTVar5->_padding_ + 4);
    }
  }
  else {
    iVar10 = this->CurHandlesArray->ArrayNum;
  }
  this->DirtyValidationCount = iVar10;
  RangedForValidation(this);
  return;
}

// RangedForValidation @ 143d5f4d0

void __thiscall
Chaos::TConstParticleIterator<Chaos::FSpatialAccelerationCache>::RangedForValidation
          (TConstParticleIterator<Chaos::FSpatialAccelerationCache> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurHandlesArray ==
      (TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((this->TransientHandle).field0_0x0.GeometryParticles != (FSpatialAccelerationCache *)0x0) {
      if (this->DirtyValidationCount == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyValidationCount != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (((this->TransientHandle).field0_0x0.GeometryParticles)->MDirtyValidationCount !=
          this->DirtyValidationCount) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                           ,0x1f1,L"");
        if (bVar2) goto code_r0x000143d5f57c;
      }
    }
  }
  else if (this->DirtyValidationCount != this->CurHandlesArray->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyValidationCount == CurHandlesArray->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                       ,0x1ec,L"");
    if (!bVar2) {
      return;
    }
code_r0x000143d5f57c:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SeekNonEmptySOA @ 143d6bee0

void __thiscall
Chaos::TConstParticleIterator<Chaos::FSpatialAccelerationCache>::SeekNonEmptySOA
          (TConstParticleIterator<Chaos::FSpatialAccelerationCache> *this)

{
  undefined4 uVar1;
  longlong lVar2;
  TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FSpatialAccelerationCache *pFVar5;
  code *pcVar6;
  FSpatialAccelerationCacheHandle_u_0 FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FSpatialAccelerationCacheHandle_u_0 *pFVar11;
  FScriptContainerElement *pFVar12;
  TArray<Chaos::TSOAView<Chaos::FSpatialAccelerationCache>,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  int iVar15;
  FSpatialAccelerationCacheHandle_u_0 local_48;
  undefined4 uStack_40;
  FSpatialAccelerationCacheHandle_u_0 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar14 = this->SOAIdx;
  pTVar13 = this->SOAViews;
  if ((int)uVar14 < pTVar13->ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
      lVar2 = *(longlong *)(pFVar12 + 8);
      if (lVar2 == 0) {
        iVar10 = *(int *)(*(longlong *)pFVar12 + 0x18);
      }
      else {
        iVar10 = *(int *)(lVar2 + 8);
      }
      if (iVar10 != 0) break;
      this->SOAIdx = this->SOAIdx + 1;
      pTVar13 = this->SOAViews;
      uVar14 = this->SOAIdx;
    } while ((int)uVar14 < pTVar13->ArrayNum);
  }
  pTVar13 = this->SOAViews;
  iVar15 = -1;
  iVar10 = this->SOAIdx;
  this->CurHandleIdx = 0;
  if (iVar10 < pTVar13->ArrayNum) {
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar3 = *(TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> **)
              ((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 0x10 + 8);
    this->CurHandlesArray = pTVar3;
    if (pTVar3 == (TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *)
                  0x0) {
      uVar14 = this->SOAIdx;
      pTVar13 = this->SOAViews;
      uVar9 = 0;
      if ((int)uVar14 < pTVar13->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_30 = 0;
      pFVar11 = &local_38;
      local_38 = *(FSpatialAccelerationCacheHandle_u_0 *)
                  ((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10);
    }
    else {
      if ((pTVar3->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = this->CurHandlesArray;
      uVar1 = *(undefined4 *)(*(longlong *)(pTVar3->AllocatorInstance).Data + 8);
      if ((pTVar4->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_40 = uVar1;
      local_48 = **(FSpatialAccelerationCacheHandle_u_0 **)(pTVar4->AllocatorInstance).Data;
      pFVar11 = &local_48;
    }
    FVar7 = pFVar11[1];
    (this->TransientHandle).field0_0x0 = *pFVar11;
    *(FSpatialAccelerationCacheHandle_u_0 *)&(this->TransientHandle).field1_0x8 = FVar7;
    this->CurSOASize = (int)((this->TransientHandle).field0_0x0.GeometryParticles)->_padding_;
  }
  else {
    local_28 = 0;
    uStack_20 = 0xffffffff;
    this->SOAIdx = 0;
    this->CurSOASize = 0;
    this->CurHandlesArray =
         (TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *)0x0;
    (this->TransientHandle).field0_0x0.GeometryParticles = (FSpatialAccelerationCache *)0x0;
    *(ulonglong *)&(this->TransientHandle).field1_0x8 = CONCAT44(uStack_1c,0xffffffff);
  }
  pTVar3 = this->CurHandlesArray;
  if (pTVar3 == (TArray<Chaos::FSpatialAccelerationCacheHandle_*,TSizedDefaultAllocator<32>_> *)0x0)
  {
    pFVar5 = (this->TransientHandle).field0_0x0.GeometryParticles;
    if (pFVar5 != (FSpatialAccelerationCache *)0x0) {
      iVar15 = pFVar5->MDirtyValidationCount;
    }
    this->DirtyValidationCount = iVar15;
    if (pFVar5 != (FSpatialAccelerationCache *)0x0) {
      if ((iVar15 == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DirtyValidationCount != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f0,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((this->TransientHandle).field0_0x0.GeometryParticles)->MDirtyValidationCount !=
           this->DirtyValidationCount) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TransientHandle.GeometryParticles->DirtyValidationCount() == DirtyValidationCount && L\"Iterating over particles while modifying the underlying SOA. Consider delaying any operations that require a Handle*\""
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                             ,0x1f1,L""), bVar8)) goto code_r0x000143d6c200;
    }
  }
  else {
    iVar10 = pTVar3->ArrayNum;
    this->DirtyValidationCount = iVar10;
    if (iVar10 != pTVar3->ArrayNum) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyValidationCount == CurHandlesArray->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleIterator.h"
                         ,0x1ec,L"");
      if (!bVar8) {
        return;
      }
code_r0x000143d6c200:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// operator++ @ 14406c980

TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> * __thiscall
Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::operator++
          (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *this)

{
  int *piVar1;
  EParticleType EVar2;
  undefined4 uVar3;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *pTVar9;
  int iVar10;
  int iStack_c;
  
  RangedForValidation(this);
  do {
    pTVar4 = this->CurHandlesArray;
    if (pTVar4 == (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      piVar1 = &(this->TransientHandle).ParticleIdx;
      *piVar1 = *piVar1 + 1;
      if (this->CurSOASize <= (this->TransientHandle).ParticleIdx) {
LAB_14406c9ab:
        this->SOAIdx = this->SOAIdx + 1;
        SeekNonEmptySOA(this);
      }
    }
    else {
      iVar10 = this->CurHandleIdx + 1;
      this->CurHandleIdx = iVar10;
      if (pTVar4->ArrayNum <= iVar10) goto LAB_14406c9ab;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)(*pcVar7)();
        return pTVar9;
      }
      plVar5 = *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8);
      pTVar6 = (TGeometryParticlesImp<double,3,0> *)*plVar5;
      uVar3 = (undefined4)plVar5[1];
      if (pTVar6 == (TGeometryParticlesImp<double,3,0> *)0x0) {
        iStack_c = (uint)iStack_c._1_3_ << 8;
        (this->TransientHandle).field0_0x0.GeometryParticles =
             (TGeometryParticlesImp<double,3,0> *)0x0;
        (this->TransientHandle).ParticleIdx = uVar3;
        (this->TransientHandle).Type = (char)iStack_c;
        *(int3 *)&(this->TransientHandle).field_0xd = (int3)((uint)iStack_c >> 8);
      }
      else {
        EVar2 = pTVar6->MParticleType;
        iStack_c = CONCAT31(iStack_c._1_3_,EVar2);
        (this->TransientHandle).field0_0x0.GeometryParticles = pTVar6;
        (this->TransientHandle).ParticleIdx = uVar3;
        (this->TransientHandle).Type = EVar2;
        *(uint3 *)&(this->TransientHandle).field_0xd = iStack_c._1_3_;
      }
    }
    if ((this->TransientHandle).field0_0x0.GeometryParticles ==
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      return this;
    }
    RangedForValidation(this);
    bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                      ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    if (!bVar8) {
      return this;
    }
  } while( true );
}

// operator++ @ 14406ca90

TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> * __thiscall
Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::operator++
          (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *this)

{
  int *piVar1;
  EParticleType EVar2;
  undefined4 uVar3;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *pTVar9;
  int iVar10;
  int iStack_c;
  
  RangedForValidation(this);
  do {
    pTVar4 = this->CurHandlesArray;
    if (pTVar4 == (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      piVar1 = &(this->TransientHandle).ParticleIdx;
      *piVar1 = *piVar1 + 1;
      if (this->CurSOASize <= (this->TransientHandle).ParticleIdx) {
LAB_14406cabb:
        this->SOAIdx = this->SOAIdx + 1;
        SeekNonEmptySOA(this);
      }
    }
    else {
      iVar10 = this->CurHandleIdx + 1;
      this->CurHandleIdx = iVar10;
      if (pTVar4->ArrayNum <= iVar10) goto LAB_14406cabb;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)(*pcVar7)();
        return pTVar9;
      }
      plVar5 = *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8);
      pTVar6 = (TGeometryParticlesImp<double,3,0> *)*plVar5;
      uVar3 = (undefined4)plVar5[1];
      if (pTVar6 == (TGeometryParticlesImp<double,3,0> *)0x0) {
        iStack_c = (uint)iStack_c._1_3_ << 8;
        (this->TransientHandle).field0_0x0.GeometryParticles =
             (TGeometryParticlesImp<double,3,0> *)0x0;
        (this->TransientHandle).ParticleIdx = uVar3;
        (this->TransientHandle).Type = (char)iStack_c;
        *(int3 *)&(this->TransientHandle).field_0xd = (int3)((uint)iStack_c >> 8);
      }
      else {
        EVar2 = pTVar6->MParticleType;
        iStack_c = CONCAT31(iStack_c._1_3_,EVar2);
        (this->TransientHandle).field0_0x0.GeometryParticles = pTVar6;
        (this->TransientHandle).ParticleIdx = uVar3;
        (this->TransientHandle).Type = EVar2;
        *(uint3 *)&(this->TransientHandle).field_0xd = iStack_c._1_3_;
      }
    }
    if ((this->TransientHandle).field0_0x0.GeometryParticles ==
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      return this;
    }
    RangedForValidation(this);
    bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                      ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    if (!bVar8) {
      return this;
    }
  } while( true );
}

// operator++ @ 1440cda00

TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> * __thiscall
Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::operator++
          (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *this)

{
  int *piVar1;
  EParticleType EVar2;
  undefined4 uVar3;
  TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  longlong *plVar5;
  TGeometryParticlesImp<double,3,0> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *pTVar9;
  int iVar10;
  int iStack_c;
  
  RangedForValidation(this);
  do {
    pTVar4 = this->CurHandlesArray;
    if (pTVar4 == (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      piVar1 = &(this->TransientHandle).ParticleIdx;
      *piVar1 = *piVar1 + 1;
      if (this->CurSOASize <= (this->TransientHandle).ParticleIdx) {
LAB_1440cda2b:
        this->SOAIdx = this->SOAIdx + 1;
        SeekNonEmptySOA(this);
      }
    }
    else {
      iVar10 = this->CurHandleIdx + 1;
      this->CurHandleIdx = iVar10;
      if (pTVar4->ArrayNum <= iVar10) goto LAB_1440cda2b;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                 (*pcVar7)();
        return pTVar9;
      }
      plVar5 = *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8);
      pTVar6 = (TGeometryParticlesImp<double,3,0> *)*plVar5;
      uVar3 = (undefined4)plVar5[1];
      if (pTVar6 == (TGeometryParticlesImp<double,3,0> *)0x0) {
        iStack_c = (uint)iStack_c._1_3_ << 8;
        (this->TransientHandle).field0_0x0.GeometryParticles =
             (TGeometryParticlesImp<double,3,0> *)0x0;
        (this->TransientHandle).ParticleIdx = uVar3;
        (this->TransientHandle).Type = (char)iStack_c;
        *(int3 *)&(this->TransientHandle).field_0xd = (int3)((uint)iStack_c >> 8);
      }
      else {
        EVar2 = pTVar6->MParticleType;
        iStack_c = CONCAT31(iStack_c._1_3_,EVar2);
        (this->TransientHandle).field0_0x0.GeometryParticles = pTVar6;
        (this->TransientHandle).ParticleIdx = uVar3;
        (this->TransientHandle).Type = EVar2;
        *(uint3 *)&(this->TransientHandle).field_0xd = iStack_c._1_3_;
      }
    }
    if ((this->TransientHandle).field0_0x0.GeometryParticles ==
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      return this;
    }
    RangedForValidation(this);
    bVar8 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                      ((TGeometryParticleHandleImp<double,3,0> *)&this->TransientHandle);
    if (!bVar8) {
      return this;
    }
  } while( true );
}

