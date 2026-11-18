// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 8

// GetResult @ 14951ac90

void __thiscall
UE::Geometry::TMinVolumeSphere3<float>::GetResult
          (TMinVolumeSphere3<float> *this,TSphere3<float> *param_1)

{
  TMinVolumeSphere3Internal<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 == (TMinVolumeSphere3Internal<float> *)0x0) || (pTVar1->bSolutionOK == false)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2620455599938207652>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeSphere3.cpp"
                       ,0x5c,"IsSolutionAvailable()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (this->Internal).Ptr;
  *(undefined8 *)&(param_1->Center).field0_0x0 = *(undefined8 *)&(pTVar1->Center).field0_0x0;
  (param_1->Center).field0_0x0._s_0.Z = (pTVar1->Center).field0_0x0._s_0.Z;
  param_1->Radius = ((this->Internal).Ptr)->Radius;
  return;
}

// GetResult @ 14951ad10

void __thiscall
UE::Geometry::TMinVolumeSphere3<double>::GetResult
          (TMinVolumeSphere3<double> *this,TSphere3<double> *param_1)

{
  TMinVolumeSphere3Internal<double> *pTVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 == (TMinVolumeSphere3Internal<double> *)0x0) || (pTVar1->bSolutionOK == false)) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2620455599938207652>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeSphere3.cpp"
                       ,0x5c,"IsSolutionAvailable()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = (this->Internal).Ptr;
  dVar3 = (pTVar1->Center).field0_0x0._s_0.Y;
  (param_1->Center).field0_0x0._s_0.X = (pTVar1->Center).field0_0x0._s_0.X;
  (param_1->Center).field0_0x0._s_0.Y = dVar3;
  (param_1->Center).field0_0x0._s_0.Z = (pTVar1->Center).field0_0x0._s_0.Z;
  param_1->Radius = ((this->Internal).Ptr)->Radius;
  return;
}

// Initialize @ 14951bba0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMinVolumeSphere3<float>::Initialize
          (TMinVolumeSphere3<float> *this,int param_1,bool param_2)

{
  TMinVolumeSphere3Internal<float> *pTVar1;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar2;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> *pVVar3;
  TMinVolumeSphere3<float> local_18 [2];
  
  ppVVar2 = ::operator_new(0x27b0);
  if (ppVVar2 == (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0) {
    ppVVar2 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0;
  }
  else {
    ppVVar2[1] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    *ppVVar2 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)
               Core::Private::PimplPtr::DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<float>_>
    ;
    ppVVar2[2] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    memset(ppVVar2 + 5,0,0x2788);
    ppVVar2[3] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    ppVVar2[4] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    gte::MinimumVolumeSphere3<double,double>::MinimumVolumeSphere3<double,double>
              ((MinimumVolumeSphere3<double,double> *)(ppVVar2 + 8));
    gte::MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>::
    MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>
              ((MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_> *)(ppVVar2 + 0x27f)
              );
  }
  if (local_18 == this) {
    if ((TMinVolumeSphere3Internal<float> *)(ppVVar2 + 2) == (TMinVolumeSphere3Internal<float> *)0x0
       ) goto LAB_14951bc53;
    pVVar3 = *ppVVar2;
  }
  else {
    pTVar1 = (this->Internal).Ptr;
    (this->Internal).Ptr = (TMinVolumeSphere3Internal<float> *)(ppVVar2 + 2);
    if (pTVar1 == (TMinVolumeSphere3Internal<float> *)0x0) goto LAB_14951bc53;
    pVVar3 = pTVar1[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
    ppVVar2 = &pTVar1[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
  }
  (*(code *)pVVar3)(ppVVar2);
LAB_14951bc53:
  ((this->Internal).Ptr)->bUseExact = param_2;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_>::SetNum
            (&((this->Internal).Ptr)->DoubleInput,param_1,Default);
  return;
}

// Initialize @ 14951bc90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMinVolumeSphere3<double>::Initialize
          (TMinVolumeSphere3<double> *this,int param_1,bool param_2)

{
  TMinVolumeSphere3Internal<double> *pTVar1;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar2;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> *pVVar3;
  TMinVolumeSphere3<double> local_18 [2];
  
  ppVVar2 = ::operator_new(0x27c0);
  if (ppVVar2 == (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0) {
    ppVVar2 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0;
  }
  else {
    ppVVar2[1] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    *ppVVar2 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)
               Core::Private::PimplPtr::
               DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<double>_>;
    ppVVar2[2] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    memset(ppVVar2 + 5,0,0x2798);
    ppVVar2[3] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    ppVVar2[4] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    gte::MinimumVolumeSphere3<double,double>::MinimumVolumeSphere3<double,double>
              ((MinimumVolumeSphere3<double,double> *)(ppVVar2 + 10));
    gte::MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>::
    MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>
              ((MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_> *)(ppVVar2 + 0x281)
              );
  }
  if (local_18 == this) {
    if ((TMinVolumeSphere3Internal<double> *)(ppVVar2 + 2) ==
        (TMinVolumeSphere3Internal<double> *)0x0) goto LAB_14951bd43;
    pVVar3 = *ppVVar2;
  }
  else {
    pTVar1 = (this->Internal).Ptr;
    (this->Internal).Ptr = (TMinVolumeSphere3Internal<double> *)(ppVVar2 + 2);
    if (pTVar1 == (TMinVolumeSphere3Internal<double> *)0x0) goto LAB_14951bd43;
    pVVar3 = pTVar1[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
    ppVVar2 = &pTVar1[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
  }
  (*(code *)pVVar3)(ppVVar2);
LAB_14951bd43:
  ((this->Internal).Ptr)->bUseExact = param_2;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_>::SetNum
            (&((this->Internal).Ptr)->DoubleInput,param_1,Default);
  return;
}

// IsSolutionAvailable @ 14951e440

bool __thiscall
UE::Geometry::TMinVolumeSphere3<float>::IsSolutionAvailable(TMinVolumeSphere3<float> *this)

{
  TMinVolumeSphere3Internal<float> *pTVar1;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 != (TMinVolumeSphere3Internal<float> *)0x0) && (pTVar1->bSolutionOK != false)) {
    return true;
  }
  return false;
}

// IsSolutionAvailable @ 14951e460

bool __thiscall
UE::Geometry::TMinVolumeSphere3<double>::IsSolutionAvailable(TMinVolumeSphere3<double> *this)

{
  TMinVolumeSphere3Internal<double> *pTVar1;
  
  pTVar1 = (this->Internal).Ptr;
  if ((pTVar1 != (TMinVolumeSphere3Internal<double> *)0x0) && (pTVar1->bSolutionOK != false)) {
    return true;
  }
  return false;
}

// Solve @ 149526020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TMinVolumeSphere3<float>::Solve
          (TMinVolumeSphere3<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,bool param_3)

{
  int iVar1;
  TMinVolumeSphere3Internal<float> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar10;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> *pVVar11;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar12;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  uint local_b8 [2];
  float local_b0;
  float local_ac;
  float local_a8;
  TMinVolumeSphere3<float> local_a0;
  Hypersphere<3,double> local_98;
  undefined1 local_78 [16];
  double local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lVar14 = (longlong)param_1;
  ppVVar10 = ::operator_new(0x27b0);
  ppVVar13 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0;
  ppVVar12 = ppVVar13;
  if (ppVVar10 != (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0) {
    ppVVar10[1] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    *ppVVar10 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)
                Core::Private::PimplPtr::
                DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<float>_>;
    ppVVar10[2] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    memset(ppVVar10 + 5,0,0x2788);
    ppVVar10[3] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    ppVVar10[4] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    gte::MinimumVolumeSphere3<double,double>::MinimumVolumeSphere3<double,double>
              ((MinimumVolumeSphere3<double,double> *)(ppVVar10 + 8));
    gte::MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>::
    MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>
              ((MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_> *)
               (ppVVar10 + 0x27f));
    ppVVar12 = ppVVar10;
  }
  if (&local_a0 == this) {
    if ((TMinVolumeSphere3Internal<float> *)(ppVVar12 + 2) ==
        (TMinVolumeSphere3Internal<float> *)0x0) goto LAB_1495260e6;
    pVVar11 = *ppVVar12;
  }
  else {
    pTVar2 = (this->Internal).Ptr;
    (this->Internal).Ptr = (TMinVolumeSphere3Internal<float> *)(ppVVar12 + 2);
    if (pTVar2 == (TMinVolumeSphere3Internal<float> *)0x0) goto LAB_1495260e6;
    pVVar11 = pTVar2[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
    ppVVar12 = &pTVar2[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
  }
  (*(code *)pVVar11)(ppVVar12);
LAB_1495260e6:
  ((this->Internal).Ptr)->bUseExact = param_3;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_>::SetNum
            (&((this->Internal).Ptr)->DoubleInput,param_1,Default);
  if (((this->Internal).Ptr == (TMinVolumeSphere3Internal<float> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Internal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeSphere3.cpp"
                         ,0x48,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  ppVVar12 = ppVVar13;
  if (0 < lVar14) {
    do {
      uVar15 = (uint)ppVVar12;
      local_b8[0] = uVar15;
      (**(code **)param_2)(&local_b0,*(undefined8 *)&param_2->field_0x8,local_b8);
      pTVar2 = (this->Internal).Ptr;
      iVar1 = (pTVar2->DoubleInput).ArrayNum;
      dVar16 = (double)local_a8;
      uVar9 = 0;
      if ((int)uVar15 < iVar1) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      dVar6 = (double)local_b0;
      uVar17 = SUB84((double)local_ac,0);
      uVar18 = (undefined4)((ulonglong)(double)local_ac >> 0x20);
      local_78._8_4_ = uVar17;
      local_78._0_8_ = dVar6;
      local_78._12_4_ = uVar18;
      local_68 = dVar16;
      if (uVar9 == 0) {
        local_c8 = (longlong)(int)uVar15;
        local_c0 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
      }
      pFVar3 = (pTVar2->DoubleInput).AllocatorInstance.Data;
      auVar5._8_4_ = uVar17;
      auVar5._0_8_ = dVar6;
      auVar5._12_4_ = uVar18;
      *(undefined1 (*) [16])(pFVar3 + (longlong)ppVVar13) = auVar5;
      *(double *)(pFVar3 + 0x10 + (longlong)ppVVar13) = dVar16;
      ppVVar13 = ppVVar13 + 3;
      lVar14 = lVar14 + -1;
      ppVVar12 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)(ulonglong)(uVar15 + 1);
    } while (lVar14 != 0);
  }
  pTVar2 = (this->Internal).Ptr;
  local_98.radius = __real_3ff0000000000000;
  gte::Vector<3,double>::MakeZero(&local_98.center);
  iVar1 = (pTVar2->DoubleInput).ArrayNum;
  if (pTVar2->bUseExact == false) {
    if (iVar1 < 1) {
      local_c8 = 0;
      local_c0 = (longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    bVar7 = gte::MinimumVolumeSphere3<double,double>::operator()
                      (&pTVar2->DoubleCompute,(pTVar2->DoubleInput).ArrayNum,
                       (Vector<3,double> *)(pTVar2->DoubleInput).AllocatorInstance.Data,&local_98);
  }
  else {
    if (iVar1 < 1) {
      local_c8 = 0;
      local_c0 = (longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    bVar7 = gte::MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>::operator()
                      (&pTVar2->PreciseCompute,(pTVar2->DoubleInput).ArrayNum,
                       (Vector<3,double> *)(pTVar2->DoubleInput).AllocatorInstance.Data,&local_98);
  }
  pTVar2->bIsMinimalSphere = bVar7;
  pTVar2->bSolutionOK = true;
  (pTVar2->Center).field0_0x0._s_0.X = (float)local_98.center.mTuple._Elems[0];
  (pTVar2->Center).field0_0x0._s_0.Y = (float)local_98.center.mTuple._Elems[1];
  (pTVar2->Center).field0_0x0._s_0.Z = (float)local_98.center.mTuple._Elems[2];
  pTVar2->Radius = (float)local_98.radius;
  return true;
}

// Solve @ 149526360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TMinVolumeSphere3<double>::Solve
          (TMinVolumeSphere3<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TMinVolumeSphere3Internal<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar12;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> *pVVar13;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar14;
  Vector<3,gte::BSRational<gte::UIntegerAP32>_> **ppVVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  uint local_c8 [2];
  TMinVolumeSphere3<double> local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  Hypersphere<3,double> local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar16 = (longlong)param_1;
  ppVVar12 = ::operator_new(0x27c0);
  ppVVar15 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0;
  ppVVar14 = ppVVar15;
  if (ppVVar12 != (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)0x0) {
    ppVVar12[1] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    *ppVVar12 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)
                Core::Private::PimplPtr::
                DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<double>_>;
    ppVVar12[2] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    memset(ppVVar12 + 5,0,0x2798);
    ppVVar12[3] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    ppVVar12[4] = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> *)0x0;
    gte::MinimumVolumeSphere3<double,double>::MinimumVolumeSphere3<double,double>
              ((MinimumVolumeSphere3<double,double> *)(ppVVar12 + 10));
    gte::MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>::
    MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>
              ((MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_> *)
               (ppVVar12 + 0x281));
    ppVVar14 = ppVVar12;
  }
  if (&local_c0 == this) {
    if ((TMinVolumeSphere3Internal<double> *)(ppVVar14 + 2) ==
        (TMinVolumeSphere3Internal<double> *)0x0) goto LAB_149526426;
    pVVar13 = *ppVVar14;
  }
  else {
    pTVar3 = (this->Internal).Ptr;
    (this->Internal).Ptr = (TMinVolumeSphere3Internal<double> *)(ppVVar14 + 2);
    if (pTVar3 == (TMinVolumeSphere3Internal<double> *)0x0) goto LAB_149526426;
    pVVar13 = pTVar3[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
    ppVVar14 = &pTVar3[-1].PreciseCompute.mComputePoints._Mypair._Myval2._Mylast;
  }
  (*(code *)pVVar13)(ppVVar14);
LAB_149526426:
  ((this->Internal).Ptr)->bUseExact = param_3;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_>::SetNum
            (&((this->Internal).Ptr)->DoubleInput,param_1,Default);
  if (((this->Internal).Ptr == (TMinVolumeSphere3Internal<double> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Internal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\MinVolumeSphere3.cpp"
                         ,0x48,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  ppVVar14 = ppVVar15;
  if (0 < lVar16) {
    do {
      uVar17 = (uint)ppVVar14;
      local_c8[0] = uVar17;
      (**(code **)param_2)(&local_b8,*(undefined8 *)&param_2->field_0x8,local_c8);
      uVar8 = local_a8;
      uVar7 = uStack_b0;
      uVar6 = local_b8;
      pTVar3 = (this->Internal).Ptr;
      local_70 = local_a8;
      iVar2 = (pTVar3->DoubleInput).ArrayNum;
      local_80 = local_b8;
      uStack_78 = uStack_b0;
      uVar11 = 0;
      if ((int)uVar17 < iVar2) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_d8 = (longlong)(int)uVar17;
        local_d0 = (longlong)iVar2;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      pFVar4 = (pTVar3->DoubleInput).AllocatorInstance.Data;
      pFVar1 = (FScriptContainerElement *)((longlong)ppVVar15 + (longlong)pFVar4);
      *(undefined8 *)pFVar1 = uVar6;
      *(undefined8 *)(pFVar1 + 8) = uVar7;
      *(undefined8 *)((longlong)ppVVar15 + (longlong)(pFVar4 + 0x10)) = uVar8;
      ppVVar15 = ppVVar15 + 3;
      lVar16 = lVar16 + -1;
      ppVVar14 = (Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)(ulonglong)(uVar17 + 1);
    } while (lVar16 != 0);
  }
  pTVar3 = (this->Internal).Ptr;
  local_a0.radius = __real_3ff0000000000000;
  gte::Vector<3,double>::MakeZero(&local_a0.center);
  iVar2 = (pTVar3->DoubleInput).ArrayNum;
  if (pTVar3->bUseExact == false) {
    if (iVar2 < 1) {
      local_d8 = 0;
      local_d0 = (longlong)iVar2;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
    }
    bVar9 = gte::MinimumVolumeSphere3<double,double>::operator()
                      (&pTVar3->DoubleCompute,(pTVar3->DoubleInput).ArrayNum,
                       (Vector<3,double> *)(pTVar3->DoubleInput).AllocatorInstance.Data,&local_a0);
  }
  else {
    if (iVar2 < 1) {
      local_d8 = 0;
      local_d0 = (longlong)iVar2;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
    }
    bVar9 = gte::MinimumVolumeSphere3<double,gte::BSRational<gte::UIntegerAP32>_>::operator()
                      (&pTVar3->PreciseCompute,(pTVar3->DoubleInput).ArrayNum,
                       (Vector<3,double> *)(pTVar3->DoubleInput).AllocatorInstance.Data,&local_a0);
  }
  pTVar3->bIsMinimalSphere = bVar9;
  pTVar3->bSolutionOK = true;
  (pTVar3->Center).field0_0x0._s_0.X = local_a0.center.mTuple._Elems[0];
  (pTVar3->Center).field0_0x0._s_0.Y = local_a0.center.mTuple._Elems[1];
  (pTVar3->Center).field0_0x0._s_0.Z = local_a0.center.mTuple._Elems[2];
  pTVar3->Radius = local_a0.radius;
  return true;
}

