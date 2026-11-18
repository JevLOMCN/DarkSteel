// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 160

// Call @ 14dbc0bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l69::<lambda_10>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l69::<lambda_10>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc0c00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l82::<lambda_10>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)(lVar2 + 0x10),param_2,fVar1);
  return;
}

// Call @ 14dbc0c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l95::<lambda_10>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l95::<lambda_10>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc0c90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l75::<lambda_11>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *param_4;
  iVar3 = *param_3;
  fVar1 = *param_5;
  if (*(longlong *)(lVar4 + 0x140) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::Chaos::Softs::
  FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
  AddHyperelasticResidualAndHessian
            (*(FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
               **)(lVar4 + 0x140),param_2,iVar3,iVar2,fVar1,param_6,param_7);
  return;
}

// Call @ 14dbc0d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l85::<lambda_11>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar2 = *(longlong **)param_1;
  fVar1 = *param_3;
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDEdgeSpringConstraints::ApplyProperties
            ((FPBDEdgeSpringConstraints *)*plVar2,fVar1,
             *(int *)(*(longlong *)(*(longlong *)param_1 + 0x208) + 0x420));
  return;
}

// Call @ 14dbc0db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l77::<lambda_12>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *param_4;
  iVar3 = *param_3;
  fVar1 = *param_5;
  if (*(longlong *)(lVar4 + 0x20) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::AddStretchBiasElementResidualAndHessian
            (*(FXPBDStretchBiasElementConstraints **)(lVar4 + 0x20),param_2,iVar3,iVar2,fVar1,
             param_6,param_7);
  return;
}

// Call @ 14dbc0e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l85::<lambda_12>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar2 = *(longlong **)param_1;
  fVar1 = *param_3;
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            ((FPBDSpringConstraints *)*plVar2,param_2,fVar1);
  return;
}

// Call @ 14dbc0ec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l80::<lambda_13>,void,Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FSolverParticles *param_2,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::AddInternalForceDifferential
            (*(FXPBDStretchBiasElementConstraints **)(lVar1 + 0x20),param_2,param_3,param_4);
  return;
}

// Call @ 14dbc0f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l88::<lambda_13>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l88::<lambda_13>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc0f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l83::<lambda_14>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *param_4;
  iVar3 = *param_3;
  fVar1 = *param_5;
  if (*(longlong *)(lVar4 + 0x80) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddAnisotropicBendingResidualAndHessian
            (*(FXPBDAnisotropicBendingConstraints **)(lVar4 + 0x80),param_2,iVar3,iVar2,fVar1,
             param_6,param_7);
  return;
}

// Call @ 14dbc0ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l88::<lambda_14>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)(lVar2 + 0x30),param_2,fVar1);
  return;
}

// Call @ 14dbc1060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l86::<lambda_15>,void,Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FSolverParticles *param_2,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddInternalForceDifferential
            (*(FXPBDAnisotropicBendingConstraints **)(lVar1 + 0x80),param_2,param_3,param_4);
  return;
}

// Call @ 14dbc10e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l91::<lambda_15>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l91::<lambda_15>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc10f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l89::<lambda_16>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *param_4;
  iVar3 = *param_3;
  fVar1 = *param_5;
  if (*(longlong *)(lVar4 + 0x70) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDBendingConstraints::AddBendingResidualAndHessian
            (*(FXPBDBendingConstraints **)(lVar4 + 0x70),param_2,iVar3,iVar2,fVar1,param_6,param_7);
  return;
}

// Call @ 14dbc1190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l91::<lambda_16>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x50) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)(lVar2 + 0x50),param_2,fVar1);
  return;
}

// Call @ 14dbc1200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l92::<lambda_17>,void,Chaos::Softs::FSolverParticles_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FSolverParticles *param_2,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDBendingConstraints::AddInternalForceDifferential
            (*(FXPBDBendingConstraints **)(lVar1 + 0x70),param_2,param_3,param_4);
  return;
}

// Call @ 14dbc1280

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l94::<lambda_17>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x40) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDStiffness::ApplyPBDValues
            ((FPBDStiffness *)(*(longlong *)(lVar2 + 0x40) + 0x30),fVar1,
             *(int *)(*(longlong *)(*(longlong *)param_1 + 0x208) + 0x420));
  return;
}

// Call @ 14dbc1300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l94::<lambda_18>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x40) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDSpringConstraints **)(lVar2 + 0x40),param_2,fVar1);
  return;
}

// Call @ 14dbc1370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l95::<lambda_18>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l95::<lambda_18>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l97::<lambda_19>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l97::<lambda_19>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddExternalForceRule_Apply<Chaos::Softs::FExternalForces>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FExternalForcesBase::Apply(*(FExternalForcesBase **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc13b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddExternalForceRule_Apply<Chaos::Softs::FVelocityAndPressureField>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc13d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDAnimDriveConstraint>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  
  fVar1 = *param_3;
  if ((*param_4 & PBD) != None) {
    lVar3 = *(longlong *)param_1;
    iVar2 = *(int *)(*(longlong *)((longlong)param_1 + 8) + 0xc);
    ::Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar3 + 0x18),fVar1,iVar2);
    ::Chaos::Softs::FPBDStiffness::ApplyPBDValues((FPBDStiffness *)(lVar3 + 0x60),fVar1,iVar2);
  }
  return;
}

// Call @ 14dbc1430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDAreaSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  if ((*param_4 & PBD) != None) {
    ::Chaos::Softs::FPBDAreaSpringConstraints::ApplyProperties
              (*(FPBDAreaSpringConstraints **)param_1,*param_3,
               *(int *)(*(longlong *)((longlong)param_1 + 8) + 0xc));
    return;
  }
  return;
}

// Call @ 14dbc1460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDBendingSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  if ((*param_4 & PBD) != None) {
    ::Chaos::Softs::FPBDStiffness::ApplyPBDValues
              ((FPBDStiffness *)(*(longlong *)param_1 + 0x30),*param_3,
               *(int *)(*(longlong *)((longlong)param_1 + 8) + 0xc));
    return;
  }
  return;
}

// Call @ 14dbc1490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPBDParallelInitRule<Chaos::Softs::FPBDEdgeSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  if ((*param_4 & PBD) != None) {
    ::Chaos::Softs::FPBDEdgeSpringConstraints::ApplyProperties
              (*(FPBDEdgeSpringConstraints **)param_1,*param_3,
               *(int *)(*(longlong *)((longlong)param_1 + 8) + 0xc));
    return;
  }
  return;
}

// Call @ 14dbc14c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemCollisionsRule_UpdateLinearSystem<Chaos::Softs::FPBDSoftBodyCollisionConstraint>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&,Chaos::Softs::FEvolutionLinearSystem_&>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,
      TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_4,
      FEvolutionLinearSystem *param_5)

{
  ::Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::UpdateLinearSystem
            (*(FPBDSoftBodyCollisionConstraintBase **)param_1,param_2,*param_3,param_4,param_5);
  return;
}

// Call @ 14dbc14e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FExternalForces>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,FEvolutionLinearSystem *param_4)

{
  ::Chaos::Softs::FExternalForcesBase::UpdateLinearSystem
            (*(FExternalForcesBase **)param_1,param_2,*param_3,param_4);
  return;
}

// Call @ 14dbc1500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FPBDCollisionSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,FEvolutionLinearSystem *param_4)

{
  ::Chaos::Softs::FPBDCollisionSpringConstraintsBase::UpdateLinearSystem
            (*(FPBDCollisionSpringConstraintsBase **)param_1,param_2,*param_3,param_4);
  return;
}

// Call @ 14dbc1520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FXPBDBendingSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,FEvolutionLinearSystem *param_4)

{
  ::Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem
            (*(FXPBDSpringConstraints **)param_1,param_2,*param_3,param_4);
  return;
}

// Call @ 14dbc1540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddUpdateLinearSystemRule_UpdateLinearSystem<Chaos::Softs::FXPBDEdgeSpringConstraints>'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,FEvolutionLinearSystem *param_4)

{
  ::Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem
            (*(FXPBDSpringConstraints **)param_1,param_2,*param_3,param_4);
  return;
}

// Call @ 14dbc1560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,1>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc1570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<1,0>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc1580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticles>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<1,Chaos::Softs::FSolverParticlesRange>'::__l2
  ::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc15a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,1>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc15b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyHelper<0,0>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc15c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticles>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc15d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalConstraint::ApplyHelper<0,Chaos::Softs::FSolverParticlesRange>'::__l2
  ::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc15e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,1>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc15f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<1,0>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,1>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSphericalBackstopConstraint::ApplyLegacyHelper<0,0>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1620

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationCloth::FLODData::AddParticles'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `Chaos::FClothingSimulationCloth::FLODData::AddParticles'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14dbc1630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x130) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Init
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)(lVar2 + 0x130),
             fVar1,param_2);
  return;
}

// Call @ 14dbc16b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::UpdateFromCache'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `Chaos::FClothingSimulationSolver::UpdateFromCache'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc16c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDCollisionSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDCollisionSpringConstraintsBase::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDCollisionSpringConstraintsBase **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc16e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDSelfCollisionSphereConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDSelfCollisionSphereConstraintsBase **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDSkinnedTriangleMeshCollisionConstraints>'
  ::__l3::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<1,Chaos::Softs::FPBDVertexFaceRepulsionConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDUnilateralTetConstraints::Apply
            (*(FPBDUnilateralTetConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints_const_>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints_const_>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FMultiResConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FMultiResConstraints::Apply(*(FMultiResConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDAnimDriveConstraint>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDAnimDriveConstraint **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc17b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDAreaSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDAxialSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc17d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDBendingConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc17f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDBendingSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDEdgeSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDSphericalBackstopConstraint>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDSphericalBackstopConstraint::Apply
            (*(FPBDSphericalBackstopConstraint **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FPBDSphericalConstraint>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FPBDSphericalConstraint::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDSphericalConstraint **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAnisotropicBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicBendingConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1890

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDAreaSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAxialSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc18b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDBendingConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc18d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDBendingSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc18f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDEdgeSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDStretchBiasElementConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDStretchBiasElementConstraints **)param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>
  ::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddPerIterationPBDConstraintRule_Apply<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::
  <lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<1,Chaos::Softs::FPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddXPBDParallelInitRule<1,Chaos::Softs::FPBDBendingConstraints>'::__l3::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc1980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<1,Chaos::Softs::FXPBDAnisotropicBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  ESolverMode EVar1;
  <lambda_1> local_res18 [16];
  
  EVar1 = *param_4;
  ::Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(*(longlong *)param_1 + 0x78),local_res18,(bool *)0x0);
  if ((EVar1 & PBD) != None) {
    ::Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticlesRange>
              (*(FXPBDAnisotropicBendingConstraints **)param_1,param_2);
  }
  return;
}

// Call @ 14dbc19e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<1,Chaos::Softs::FXPBDBendingConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  ESolverMode EVar1;
  <lambda_1> local_res18 [16];
  
  EVar1 = *param_4;
  ::Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(*(longlong *)param_1 + 0x78),local_res18,(bool *)0x0);
  if ((EVar1 & PBD) != None) {
    ::Chaos::Softs::FXPBDBendingConstraints::Init<Chaos::Softs::FSolverParticlesRange>
              (*(FXPBDBendingConstraints **)param_1,param_2);
  }
  return;
}

// Call @ 14dbc1a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FMultiResConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddXPBDParallelInitRule<0,Chaos::Softs::FMultiResConstraints>'::__l3::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc1a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDAnisotropicSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  ESolverMode EVar1;
  
  EVar1 = *param_4;
  ::Chaos::Softs::FXPBDAnisotropicSpringConstraints::ApplyProperties
            (*(FXPBDAnisotropicSpringConstraints **)param_1,*param_3,
             *(int *)(*(longlong *)((longlong)param_1 + 8) + 0xc));
  if ((EVar1 & PBD) != None) {
    ::Chaos::Softs::FXPBDAnisotropicSpringConstraints::Init
              (*(FXPBDAnisotropicSpringConstraints **)param_1);
  }
  return;
}

// Call @ 14dbc1ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDAreaSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  ESolverMode EVar1;
  
  EVar1 = *param_4;
  ::Chaos::Softs::FPBDStiffness::ApplyXPBDValues
            ((FPBDStiffness *)(*(longlong *)param_1 + 0x40),__real_4b189680);
  if ((EVar1 & PBD) != None) {
    ::Chaos::Softs::FXPBDAxialSpringConstraints::Init(*(FXPBDAxialSpringConstraints **)param_1);
  }
  return;
}

// Call @ 14dbc1b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDBendingSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  ESolverMode EVar1;
  longlong lVar2;
  <lambda_1> local_res18 [16];
  
  lVar2 = *(longlong *)param_1;
  EVar1 = *param_4;
  ::Chaos::Softs::FPBDStiffness::ApplyXPBDValues((FPBDStiffness *)(lVar2 + 0x30),__real_4e6e6b28);
  ::Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar2 + 0x78),local_res18,(bool *)0x0);
  if ((EVar1 & PBD) != None) {
    ::Chaos::Softs::FXPBDSpringConstraints::Init(*(FXPBDSpringConstraints **)param_1);
  }
  return;
}

// Call @ 14dbc1b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDEdgeSpringConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  ESolverMode EVar1;
  longlong lVar2;
  <lambda_1> local_res18 [16];
  
  lVar2 = *(longlong *)param_1;
  EVar1 = *param_4;
  ::Chaos::Softs::FPBDStiffness::ApplyXPBDValues((FPBDStiffness *)(lVar2 + 0x30),__real_4e6e6b28);
  ::Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar2 + 0x78),local_res18,(bool *)0x0);
  if ((EVar1 & PBD) != None) {
    ::Chaos::Softs::FXPBDSpringConstraints::Init(*(FXPBDSpringConstraints **)param_1);
  }
  return;
}

// Call @ 14dbc1bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDFaceConstraints>'::__l3::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc1be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDStretchBiasElementConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  ESolverMode EVar1;
  
  EVar1 = *param_4;
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyProperties
            (*(FXPBDStretchBiasElementConstraints **)param_1,*param_3,
             *(int *)(*(longlong *)((longlong)param_1 + 8) + 0xc));
  if ((EVar1 & PBD) != None) {
    ::Chaos::Softs::FXPBDStretchBiasElementConstraints::Init
              (*(FXPBDStretchBiasElementConstraints **)param_1);
  }
  return;
}

// Call @ 14dbc1c30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexConstraints>'::__l3::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc1c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::FRuleCreator::AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::FRuleCreator::
  AddXPBDParallelInitRule<0,Chaos::Softs::FXPBDVertexFaceConstraints>'::__l3::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc1c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,float *param_4)

{
  `Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc1c90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::AddExternalForces'::__l5::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float,int>
::Call(void *param_1,FSolverParticles *param_2,float *param_3,int *param_4)

{
  `Chaos::FClothingSimulationSolver::AddExternalForces'::__l5::<lambda_1>::operator()
            (param_1,param_2,(double)*param_3,*param_4);
  return;
}

// Call @ 14dbc1cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::PreSubstep'::__l5::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::FClothingSimulationSolver::PreSubstep'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::FClothingSimulationSolver::PreSubstep'::__l8::<lambda_2>::operator()'::__l7::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::FClothingSimulationSolver::PreSubstep'::__l8::<lambda_2>::operator()'::__l7::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l8::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l8::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l8::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l8::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l8::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l8::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc1d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l12::<lambda_1>::operator()'::__l16::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l12::<lambda_1>::operator()'
  ::__l16::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1d10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::UpdateSolverField'::__l20::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  `Chaos::FClothingSimulationSolver::UpdateSolverField'::__l20::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::Update'::__l27::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::FClothingSimulationSolver::Update'::__l27::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationAccessoryMesh::SkinPhysicsMesh'::__l31::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::FClothingSimulationAccessoryMesh::SkinPhysicsMesh'::__l31::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc1d40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l50::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  `Chaos::FClothingSimulationSolver::CalculateBounds'::__l50::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc1d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l61::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x130) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Init
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)(lVar2 + 0x130),
             fVar1,param_2);
  return;
}

// Call @ 14dbc1de0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l14::<lambda_2>::operator()'::__l12::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l14::<lambda_2>::operator()'
  ::__l12::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1df0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l12::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l12::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14dbc1e00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::FClothingSimulationSolver::PreSubstep'::__l5::<lambda_1>::operator()'::__l14::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::FClothingSimulationSolver::PreSubstep'::__l5::<lambda_1>::operator()'::__l14::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc1e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l14::<lambda_1>,void,Chaos::Softs::FSolverParticlesRange_&,float>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l14::<lambda_1>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1e20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l97::<lambda_20>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x60) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDBendingConstraints **)(lVar2 + 0x60),param_2,fVar1);
  return;
}

// Call @ 14dbc1e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l100::<lambda_21>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l100::<lambda_21>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l100::<lambda_22>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x70) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FXPBDBendingConstraints **)(lVar2 + 0x70),param_2,fVar1);
  return;
}

// Call @ 14dbc1f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l103::<lambda_23>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l103::<lambda_23>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l103::<lambda_24>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x80) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicBendingConstraints **)(lVar2 + 0x80),param_2,fVar1);
  return;
}

// Call @ 14dbc1fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l106::<lambda_25>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l106::<lambda_25>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc1fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l106::<lambda_26>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FXPBDAxialSpringConstraints **)(lVar2 + 0xa0),param_2,fVar1);
  return;
}

// Call @ 14dbc2030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l109::<lambda_27>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x90) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDAreaSpringConstraints::ApplyProperties
            (*(FPBDAreaSpringConstraints **)(lVar2 + 0x90),fVar1,
             *(int *)(*(longlong *)(*(longlong *)param_1 + 0x208) + 0x420));
  return;
}

// Call @ 14dbc20b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l109::<lambda_28>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x90) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDAxialSpringConstraints **)(lVar2 + 0x90),param_2,fVar1);
  return;
}

// Call @ 14dbc2130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l112::<lambda_29>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
            ((FXPBDAnisotropicAxialSpringConstraints *)(*(longlong *)(lVar2 + 0x30) + 0x208),param_2
             ,fVar1);
  return;
}

// Call @ 14dbc21b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticlesRange_&,float,float>
::Call(void *param_1,FSolverCollisionParticlesRange *param_2,float *param_3,float *param_4)

{
  `Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l5::<lambda_2>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc21d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::PreSubstep'::__l8::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  `Chaos::FClothingSimulationSolver::PreSubstep'::__l8::<lambda_2>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc21f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l10::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l10::<lambda_2>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc2200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l10::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l10::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc2210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l10::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  `Chaos::FClothingSimulationSolver::ExtremeDeformationReset'::__l10::<lambda_2>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc2230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l20::<lambda_2>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::Chaos::Softs::FMultiResConstraints::UpdateFineTargets(*(FMultiResConstraints **)param_1,param_2)
  ;
  return;
}

// Call @ 14dbc2290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l42::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l42::<lambda_2>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc22a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l52::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  float *pfVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = *(float **)param_1;
  pTVar2 = ::Chaos::TParticles<float,3>::X((TParticles<float,3> *)param_2,*param_3);
  fVar3 = *pfVar1;
  if (*(float *)pTVar2 <= *pfVar1) {
    fVar3 = *(float *)pTVar2;
  }
  fVar4 = *(float *)&pTVar2->field_0x4;
  if (pfVar1[1] <= *(float *)&pTVar2->field_0x4) {
    fVar4 = pfVar1[1];
  }
  fVar5 = *(float *)&pTVar2->field_0x8;
  if (pfVar1[2] <= *(float *)&pTVar2->field_0x8) {
    fVar5 = pfVar1[2];
  }
  *pfVar1 = fVar3;
  pfVar1[1] = fVar4;
  pfVar1[2] = fVar5;
  fVar3 = *(float *)pTVar2;
  if (*(float *)pTVar2 <= pfVar1[3]) {
    fVar3 = pfVar1[3];
  }
  fVar4 = pfVar1[4];
  if (pfVar1[4] <= *(float *)&pTVar2->field_0x4) {
    fVar4 = *(float *)&pTVar2->field_0x4;
  }
  fVar5 = pfVar1[5];
  if (pfVar1[5] <= *(float *)&pTVar2->field_0x8) {
    fVar5 = *(float *)&pTVar2->field_0x8;
  }
  pfVar1[3] = fVar3;
  pfVar1[4] = fVar4;
  pfVar1[5] = fVar5;
  return;
}

// Call @ 14dbc2320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l64::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l64::<lambda_2>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc2330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::Update'::__l84::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::FClothingSimulationSolver::Update'::__l84::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc2340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l14::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  `Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l14::<lambda_2>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc2360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l115::<lambda_30>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDSphericalConstraint::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDSphericalConstraint **)(lVar2 + 0xc0),param_2,fVar1);
  return;
}

// Call @ 14dbc23e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l118::<lambda_31>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l118::<lambda_31>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc23f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l121::<lambda_32>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l121::<lambda_32>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc2400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l121::<lambda_33>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0xe0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDAnimDriveConstraint **)(lVar2 + 0xe0),param_2,fVar1);
  return;
}

// Call @ 14dbc2480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l124::<lambda_34>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l124::<lambda_34>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc2490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l124::<lambda_35>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x100) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDCollisionSpringConstraintsBase::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDCollisionSpringConstraintsBase **)(lVar2 + 0x100),param_2,fVar1);
  return;
}

// Call @ 14dbc2510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l127::<lambda_36>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  if (*(char *)(lVar1 + 0x244) == '\0') {
    if (*(longlong *)(lVar1 + 0x120) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ::Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticles>
              (*(FPBDSelfCollisionSphereConstraintsBase **)(lVar1 + 0x120),param_2);
  }
  return;
}

// Call @ 14dbc2580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l127::<lambda_37>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x120) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Apply<Chaos::Softs::FSolverParticles>
            (*(FPBDSelfCollisionSphereConstraintsBase **)(lVar2 + 0x120),param_2,fVar1);
  return;
}

// Call @ 14dbc2600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_38>,void,FClothConstraints::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_38>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc2610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_39>,void,FClothConstraints::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'[::C]::<lambda_39>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc2620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float,float,int>
::Call(void *param_1,FSolverParticles *param_2,float *param_3,float *param_4,int *param_5)

{
  `Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_3>::operator()
            (param_1,param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 14dbc2650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l32::<lambda_3>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,Chaos::Softs::FEvolutionLinearSystem_&>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,FEvolutionLinearSystem *param_4)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l32::<lambda_3>::operator()
            (param_1,param_2,*param_3,param_4);
  return;
}

// Call @ 14dbc2660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l45::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l45::<lambda_3>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc2670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l55::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  CalculateSquaredRadius
            (*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8),param_2->_padding_,
             *param_3,*param_4);
  return;
}

// Call @ 14dbc26a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l67::<lambda_3>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *param_4;
  iVar3 = *param_3;
  fVar1 = *param_5;
  if (*(longlong *)(lVar4 + 0x20) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::AddStretchBiasElementResidualAndHessian
            (*(FXPBDStretchBiasElementConstraints **)(lVar4 + 0x20),param_2,iVar3,iVar2,fVar1,
             param_6,param_7);
  return;
}

// Call @ 14dbc2740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l15::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l15::<lambda_3>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc2750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l15::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l15::
  <lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc2760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l15::<lambda_3>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  `Chaos::FClothingSimulationSolver::ApplyPreSimulationTransforms'::__l15::<lambda_3>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc2770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'[::F]::<lambda_40>,void,FClothConstraints::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'[::F]::<lambda_40>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc2780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_4>,void,Chaos::Softs::FSolverCollisionParticles_&,float,float,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,float *param_3,float *param_4,int *param_5)

{
  `Chaos::FClothingSimulationSolver::FClothingSimulationSolver'::__l7::<lambda_4>::operator()
            (param_1,param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 14dbc27b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_4>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc27c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::
  <lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 14dbc27d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l48::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l48::<lambda_4>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc27e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothingSimulationSolver::CalculateBounds'::__l57::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  float *pfVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  float fVar4;
  
  pTVar2 = ::Chaos::TParticles<float,3>::X((TParticles<float,3> *)param_2,*param_3);
  pfVar1 = *(float **)((longlong)param_1 + 8);
  fVar3 = *(float *)&pTVar2->field_0x4 - pfVar1[1];
  fVar4 = *(float *)&pTVar2->field_0x8 - pfVar1[2];
  fVar4 = (*(float *)pTVar2 - *pfVar1) * (*(float *)pTVar2 - *pfVar1) + fVar3 * fVar3 +
          fVar4 * fVar4;
  fVar3 = **(float **)param_1;
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  **(float **)param_1 = fVar4;
  return;
}

// Call @ 14dbc2850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l70::<lambda_4>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *param_4;
  iVar3 = *param_3;
  fVar1 = *param_5;
  if (*(longlong *)(lVar4 + 0x80) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddAnisotropicBendingResidualAndHessian
            (*(FXPBDAnisotropicBendingConstraints **)(lVar4 + 0x80),param_2,iVar3,iVar2,fVar1,
             param_6,param_7);
  return;
}

// Call @ 14dbc28f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l77::<lambda_4>,void,Chaos::Softs::FSolverParticlesRange_&,float,TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,
      TArray<Chaos::Softs::FSolverCollisionParticlesRange,TSizedDefaultAllocator<32>_> *param_4)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l77::<lambda_4>::operator()
            (param_1,param_2,*param_3,param_4);
  return;
}

// Call @ 14dbc2900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l51::<lambda_5>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float *local_res18 [2];
  
  lVar1 = *(longlong *)param_1;
  local_res18[0] = param_3;
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x10);
  ::Chaos::Softs::FPBDStiffness::ApplyXPBDValues((FPBDStiffness *)(lVar1 + 0x30),__real_4e6e6b28);
  ::Chaos::Softs::FPBDWeightMap::
  ApplyValues<_Chaos::Softs::FPBDWeightMap::ApplyValues_::__l2::<lambda_1>_>
            ((FPBDWeightMap *)(lVar1 + 0x78),(<lambda_1> *)local_res18,(bool *)0x0);
  return;
}

// Call @ 14dbc2970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l73::<lambda_5>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)param_1;
  iVar2 = *param_4;
  iVar3 = *param_3;
  fVar1 = *param_5;
  if (*(longlong *)(lVar4 + 0x70) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDBendingConstraints::AddBendingResidualAndHessian
            (*(FXPBDBendingConstraints **)(lVar4 + 0x70),param_2,iVar3,iVar2,fVar1,param_6,param_7);
  return;
}

// Call @ 14dbc2a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l80::<lambda_5>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l80::<lambda_5>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc2a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l57::<lambda_6>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l57::<lambda_6>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc2a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l76::<lambda_6>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l76::<lambda_6>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc2a50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l83::<lambda_6>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l83::<lambda_6>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc2a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l60::<lambda_7>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l60::<lambda_7>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc2a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l79::<lambda_7>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l79::<lambda_7>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc2a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l89::<lambda_7>,void,Chaos::Softs::FSolverParticlesRange_const_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  if (*(char *)(lVar1 + 0x244) == '\0') {
    if (*(longlong *)(lVar1 + 0x120) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ::Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::
    Init<Chaos::Softs::FSolverParticlesRange>
              (*(FPBDSelfCollisionSphereConstraintsBase **)(lVar1 + 0x120),param_2);
  }
  return;
}

// Call @ 14dbc2b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l62::<lambda_8>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreateGSRules'::__l62::<lambda_8>::operator()(param_1,param_2,*param_3)
  ;
  return;
}

// Call @ 14dbc2b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l79::<lambda_8>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>
            (*(FXPBDStretchBiasElementConstraints **)(lVar2 + 0x20),param_2,fVar1);
  return;
}

// Call @ 14dbc2b80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_8>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_8>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 14dbc2ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateGSRules'::__l67::<lambda_9>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)param_1;
  fVar1 = *param_3;
  if (*(longlong *)(lVar2 + 0x130) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)(lVar2 + 0x130),
             param_2,fVar1);
  return;
}

// Call @ 14dbc2c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreatePBDRules'::__l82::<lambda_9>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::FClothConstraints::CreatePBDRules'::__l82::<lambda_9>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 14dbc2c30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_9>,void,Chaos::Softs::FSolverParticlesRange_&,float,enum_Chaos::Softs::ESolverMode>
::Call(void *param_1,FSolverParticlesRange *param_2,float *param_3,ESolverMode *param_4)

{
  `Chaos::FClothConstraints::CreateForceBasedRules'::__l92::<lambda_9>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

