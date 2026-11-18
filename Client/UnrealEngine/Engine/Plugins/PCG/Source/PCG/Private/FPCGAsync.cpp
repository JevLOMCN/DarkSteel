// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 36

// operator() @ 149ad5390

void __thiscall
`FPCGAsync::
AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = *(TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              **)this;
  uVar1 = *(uint *)((longlong)this + 8);
  iVar2 = this_00->ArrayNum;
  if (iVar2 < (int)uVar1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,uVar1 - iVar2,&this_00->AllocatorInstance,&this_00->ArrayNum,
               &this_00->ArrayMax);
    return;
  }
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((int)uVar1 < iVar2) {
    uVar5 = iVar2 - uVar1;
    if (((int)(uVar5 | uVar1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar5 != 0) {
      TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
      RemoveAtImpl(this_00,uVar1,uVar5);
    }
  }
  return;
}

// operator() @ 149ad5470

void __thiscall
`FPCGAsync::
AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int iVar2;
  TArray<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = *(TArray<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              **)this;
  uVar1 = *(uint *)((longlong)this + 8);
  iVar2 = this_00->ArrayNum;
  if (iVar2 < (int)uVar1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
              (0x140,0x10,uVar1 - iVar2,&this_00->AllocatorInstance,&this_00->ArrayNum,
               &this_00->ArrayMax);
    return;
  }
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((int)uVar1 < iVar2) {
    uVar5 = iVar2 - uVar1;
    if (((int)(uVar5 | uVar1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar5 != 0) {
      TArray<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(this_00,uVar1,uVar5);
    }
  }
  return;
}

// operator() @ 149ad5550

int __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_res20 [2];
  
  iVar7 = 0;
  iVar8 = 0;
  if (0 < param_3) {
    do {
      plVar2 = *(longlong **)((longlong)this + 0x18);
      uVar1 = iVar7 + param_2;
      local_res20[0] = iVar8 + param_1;
      uVar6 = 0;
      if ((int)uVar1 < (int)plVar2[1]) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      bVar5 = `PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>::operator()
                        (this,local_res20,(int *)(*plVar2 + (longlong)(int)uVar1 * 4));
      iVar4 = iVar7 + 1;
      if (!bVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_3);
  }
  return iVar7;
}

// operator() @ 149ad5640

int __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = 0;
  if (0 < param_3) {
    do {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar1 = iVar7 + param_2;
      uVar6 = 0;
      if ((int)uVar1 < (int)plVar2[1]) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      bVar5 = `PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>::operator()
                        (this,iVar8 + param_1,(int *)(*plVar2 + (longlong)(int)uVar1 * 4));
      iVar4 = iVar7 + 1;
      if (!bVar5) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_3);
  }
  return iVar7;
}

// operator() @ 149ad5720

int __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  uint local_res18;
  int local_98;
  int local_94;
  
  dVar5 = __real_3ff0000000000000;
  uVar11 = (ulonglong)param_2;
  iVar8 = 0;
  local_98 = 0;
  local_94 = 0;
  if (0 < param_3) {
    lVar14 = uVar11 * 0x18;
    local_res18 = param_2;
    do {
      lVar15 = *(longlong *)((longlong)this + 0x90);
      uVar10 = (uint)uVar11;
      uVar13 = 0;
      if ((int)uVar10 < *(int *)(lVar15 + 0x188)) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        iVar8 = (*pcVar1)();
        return iVar8;
      }
      if (*(longlong *)(lVar15 + 0x180) != 0) {
        lVar15 = *(longlong *)(lVar15 + 0x180);
      }
      bVar6 = -1 < CpuChannel->Enabled;
      if (bVar6) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId115,"FPCGClusterElement::KMeans::ProcessCentroids",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGClusterElement.cpp"
                   ,0x73);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId115);
      }
      iVar8 = 0;
      uVar13 = 0;
      if (0 < *(int *)((longlong)this + 0x10)) {
        lVar12 = 0;
        uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        do {
          uVar10 = 0;
          if ((int)uVar13 < *(int *)((longlong)this + 0x88)) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            iVar8 = (*pcVar1)();
            return iVar8;
          }
          if (*(int *)(*(longlong *)((longlong)this + 0x80) + lVar12) == local_98 + param_1) {
            pTVar9 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                     ::GetElement(this,uVar13);
            iVar8 = iVar8 + 1;
            uVar2 = (double)uVar2 + (pTVar9->Translation).XY.m128d_f64[0];
            uVar4 = (double)uVar4 + (pTVar9->Translation).ZW.m128d_f64[0];
            uVar3 = (double)uVar3 + (pTVar9->Translation).XY.m128d_f64[1];
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 4;
        } while ((int)uVar13 < *(int *)((longlong)this + 0x10));
        uVar10 = local_res18;
        if (0 < iVar8) {
          dVar16 = dVar5 / (double)iVar8;
          *(double *)(lVar15 + lVar14) = dVar16 * (double)uVar2;
          *(double *)(lVar15 + 8 + lVar14) = dVar16 * (double)uVar3;
          *(double *)(lVar15 + 0x10 + lVar14) = dVar16 * (double)uVar4;
        }
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      lVar14 = lVar14 + 0x18;
      iVar8 = local_94 + 1;
      local_98 = local_98 + 1;
      local_res18 = uVar10 + 1;
      uVar11 = (ulonglong)local_res18;
      local_94 = iVar8;
    } while (local_98 < param_3);
  }
  return iVar8;
}

// operator() @ 149ad5a00

int __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar6 = 0;
  iVar8 = 0;
  if (0 < param_3) {
    do {
      lVar7 = *(longlong *)((longlong)this + 0x10);
      uVar1 = iVar6 + param_2;
      uVar5 = 0;
      if ((int)uVar1 < *(int *)(lVar7 + 0x1410)) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      if (*(longlong *)(lVar7 + 0x1400) != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x1400);
      }
      bVar4 = `PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>::operator()
                        (this,iVar8 + param_1,(FGaussian *)((longlong)(int)uVar1 * 0x140 + lVar7));
      iVar3 = iVar6 + 1;
      if (!bVar4) {
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_3);
  }
  return iVar6;
}

// operator() @ 149ae10f0

void __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_1>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_2>::operator()(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < param_3) {
    uVar10 = (ulonglong)param_1;
    lVar7 = (longlong)param_2 - uVar10;
    lVar11 = (longlong)param_3;
    lVar12 = uVar10 * 4;
    do {
      plVar2 = *(longlong **)this;
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (int)plVar2[1]) {
        uVar6 = ~uVar9 >> 0x1f;
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
      uVar8 = (param_2 - param_1) + uVar9;
      plVar3 = *(longlong **)this;
      uVar1 = *(undefined4 *)(lVar12 + *plVar2);
      uVar6 = 0;
      if ((int)uVar8 < (int)plVar3[1]) {
        uVar6 = ~uVar8 >> 0x1f;
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
      uVar10 = (ulonglong)(uVar9 + 1);
      *(undefined4 *)(*plVar3 + lVar7 * 4 + lVar12) = uVar1;
      lVar12 = lVar12 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// operator() @ 149ae1230

void __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<int,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l2::<lambda_8>_&,TSizedDefaultAllocator<32>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_2>::operator()(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < param_3) {
    uVar10 = (ulonglong)param_1;
    lVar7 = (longlong)param_2 - uVar10;
    lVar11 = (longlong)param_3;
    lVar12 = uVar10 * 4;
    do {
      plVar2 = *(longlong **)this;
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (int)plVar2[1]) {
        uVar6 = ~uVar9 >> 0x1f;
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
      uVar8 = (param_2 - param_1) + uVar9;
      plVar3 = *(longlong **)this;
      uVar1 = *(undefined4 *)(lVar12 + *plVar2);
      uVar6 = 0;
      if ((int)uVar8 < (int)plVar3[1]) {
        uVar6 = ~uVar8 >> 0x1f;
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
      uVar10 = (ulonglong)(uVar9 + 1);
      *(undefined4 *)(*plVar3 + lVar7 * 4 + lVar12) = uVar1;
      lVar12 = lVar12 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// operator() @ 149ae1370

void __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_2>::operator()(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (0 < param_3) {
    uVar14 = (ulonglong)param_1;
    lVar15 = (longlong)param_3;
    lVar11 = (longlong)param_2 - uVar14;
    lVar16 = uVar14 * 0x18;
    do {
      lVar17 = *(longlong *)this;
      uVar13 = (uint)uVar14;
      uVar12 = 0;
      if ((int)uVar13 < *(int *)(lVar17 + 0x188)) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = (param_2 - param_1) + uVar13;
      if (*(longlong *)(lVar17 + 0x180) != 0) {
        lVar17 = *(longlong *)(lVar17 + 0x180);
      }
      puVar1 = (undefined4 *)(lVar16 + lVar17);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar3 = *(undefined8 *)(lVar16 + 0x10 + lVar17);
      lVar17 = *(longlong *)this;
      uVar10 = 0;
      if ((int)uVar12 < *(int *)(lVar17 + 0x188)) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)(lVar17 + 0x180) != 0) {
        lVar17 = *(longlong *)(lVar17 + 0x180);
      }
      lVar2 = lVar11 * 0x18 + lVar16;
      uVar14 = (ulonglong)(uVar13 + 1);
      lVar16 = lVar16 + 0x18;
      puVar1 = (undefined4 *)(lVar2 + lVar17);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined8 *)(lVar2 + 0x10 + lVar17) = uVar3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// operator() @ 149ae14f0

void __thiscall
`FPCGAsync::
AsyncProcessingEx<`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_&,`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_2>_&,`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_3>_&,`FPCGAsync::AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_4>_&>'
::__l2::<lambda_2>::operator()(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 local_158 [40];
  
  if (0 < param_3) {
    uVar20 = (ulonglong)param_1;
    lVar17 = (longlong)param_3;
    lVar11 = (longlong)param_2 - uVar20;
    lVar18 = uVar20 * 0x140;
    do {
      lVar16 = *(longlong *)this;
      uVar19 = (uint)uVar20;
      uVar10 = 0;
      if ((int)uVar19 < *(int *)(lVar16 + 0x1410)) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar15 = 2;
      if (*(longlong *)(lVar16 + 0x1400) != 0) {
        lVar16 = *(longlong *)(lVar16 + 0x1400);
      }
      puVar7 = (undefined8 *)(lVar18 + lVar16);
      puVar8 = local_158;
      do {
        puVar13 = puVar8;
        puVar12 = puVar7;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar13 = *puVar12;
        puVar13[1] = uVar3;
        uVar3 = puVar12[4];
        uVar6 = puVar12[5];
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        uVar4 = puVar12[6];
        uVar5 = puVar12[7];
        puVar13[4] = uVar3;
        puVar13[5] = uVar6;
        uVar3 = puVar12[8];
        uVar6 = puVar12[9];
        puVar13[6] = uVar4;
        puVar13[7] = uVar5;
        uVar4 = puVar12[10];
        uVar5 = puVar12[0xb];
        puVar13[8] = uVar3;
        puVar13[9] = uVar6;
        uVar3 = puVar12[0xc];
        uVar6 = puVar12[0xd];
        puVar13[10] = uVar4;
        puVar13[0xb] = uVar5;
        uVar4 = puVar12[0xe];
        uVar5 = puVar12[0xf];
        puVar13[0xc] = uVar3;
        puVar13[0xd] = uVar6;
        puVar13[0xe] = uVar4;
        puVar13[0xf] = uVar5;
        lVar15 = lVar15 + -1;
        puVar7 = puVar12 + 0x10;
        puVar8 = puVar13 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar12[0x11];
      lVar16 = *(longlong *)this;
      uVar14 = (param_2 - param_1) + uVar19;
      uVar4 = puVar12[0x12];
      uVar5 = puVar12[0x13];
      puVar13[0x10] = puVar12[0x10];
      puVar13[0x11] = uVar3;
      iVar1 = *(int *)(lVar16 + 0x1410);
      uVar3 = puVar12[0x14];
      uVar6 = puVar12[0x15];
      puVar13[0x12] = uVar4;
      puVar13[0x13] = uVar5;
      uVar4 = puVar12[0x16];
      uVar5 = puVar12[0x17];
      puVar13[0x14] = uVar3;
      puVar13[0x15] = uVar6;
      puVar13[0x16] = uVar4;
      puVar13[0x17] = uVar5;
      uVar10 = 0;
      if ((int)uVar14 < iVar1) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar15 = 2;
      if (*(longlong *)(lVar16 + 0x1400) != 0) {
        lVar16 = *(longlong *)(lVar16 + 0x1400);
      }
      puVar7 = local_158;
      puVar8 = (undefined8 *)(lVar11 * 0x140 + lVar18 + lVar16);
      do {
        puVar13 = puVar8;
        puVar12 = puVar7;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar13 = *puVar12;
        puVar13[1] = uVar3;
        uVar3 = puVar12[4];
        uVar6 = puVar12[5];
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        uVar4 = puVar12[6];
        uVar5 = puVar12[7];
        puVar13[4] = uVar3;
        puVar13[5] = uVar6;
        uVar3 = puVar12[8];
        uVar6 = puVar12[9];
        puVar13[6] = uVar4;
        puVar13[7] = uVar5;
        uVar4 = puVar12[10];
        uVar5 = puVar12[0xb];
        puVar13[8] = uVar3;
        puVar13[9] = uVar6;
        uVar3 = puVar12[0xc];
        uVar6 = puVar12[0xd];
        puVar13[10] = uVar4;
        puVar13[0xb] = uVar5;
        uVar4 = puVar12[0xe];
        uVar5 = puVar12[0xf];
        puVar13[0xc] = uVar3;
        puVar13[0xd] = uVar6;
        puVar13[0xe] = uVar4;
        puVar13[0xf] = uVar5;
        lVar15 = lVar15 + -1;
        puVar7 = puVar12 + 0x10;
        puVar8 = puVar13 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar12[0x11];
      uVar20 = (ulonglong)(uVar19 + 1);
      lVar18 = lVar18 + 0x140;
      uVar4 = puVar12[0x12];
      uVar5 = puVar12[0x13];
      puVar13[0x10] = puVar12[0x10];
      puVar13[0x11] = uVar3;
      uVar3 = puVar12[0x14];
      uVar6 = puVar12[0x15];
      puVar13[0x12] = uVar4;
      puVar13[0x13] = uVar5;
      uVar4 = puVar12[0x16];
      uVar5 = puVar12[0x17];
      puVar13[0x14] = uVar3;
      puVar13[0x15] = uVar6;
      puVar13[0x16] = uVar4;
      puVar13[0x17] = uVar5;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}

// operator() @ 149aedb90

void __thiscall
`FPCGAsync::
AsyncProcessing<UE::Math::TVector<double>,`PCGClusterElement::Algorithm::KMeans'::__l4::<lambda_2>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_4>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = *(TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              **)this;
  piVar1 = &this_00->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,param_1 - iVar2,&this_00->AllocatorInstance,piVar1,&this_00->ArrayMax);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar2) {
    uVar5 = iVar2 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar5 != 0) {
      TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
      RemoveAtImpl(this_00,param_1,uVar5);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                (0x18,8,&this_00->AllocatorInstance,*piVar1,&this_00->ArrayMax);
    }
  }
  return;
}

// operator() @ 149aedcb0

void __thiscall
`FPCGAsync::
AsyncProcessing<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,`PCGClusterElement::Algorithm::ExpectationMaximization'::__l18::<lambda_6>_&,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_4>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
  this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> FVar6;
  uint uVar7;
  
  this_00 = *(ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
              *)this;
  piVar1 = (int *)((longlong)this_00 + 0x1410);
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
                      (0x140,0x10,param_1 - iVar2,
                       (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                        *)this_00,piVar1,(int *)((longlong)this_00 + 0x1414));
    FVar6 = *(ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
              *)((longlong)this_00 + 0x1400);
    if (*(ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
          *)((longlong)this_00 + 0x1400) ==
        (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
        )0x0) {
      FVar6 = this_00;
    }
    DefaultConstructItems<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,int>
              ((void *)((longlong)FVar6 + (longlong)iVar5 * 0x140),param_1 - iVar2);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar2) {
    uVar7 = iVar2 - param_1;
    if (((int)(uVar7 | param_1) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar7 != 0) {
      TArray<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl((TArray<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                      *)this_00,param_1,uVar7);
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
                (0x140,0x10,
                 (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                  *)this_00,*piVar1,(int *)((longlong)this_00 + 0x1414));
    }
  }
  return;
}

// operator() @ 149b5cba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
`FPCGAsync::
AsyncProcessingOneToOneEx<`FPCGElevationIsolinesElement::ExecuteInternal'::__l36::<lambda_1>,`FPCGElevationIsolinesElement::ExecuteInternal'::__l36::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  longlong local_250;
  int local_248;
  int local_244;
  double local_240;
  double dStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined4 local_1f7;
  undefined2 local_1f3;
  undefined1 local_1f1;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  uVar8 = _UNK_150689688;
  uVar7 = ___xmm_3ff00000000000003ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_278;
  lVar13 = (longlong)param_3;
  uVar14 = (ulonglong)param_2;
  if (0 < param_3) {
    uVar24 = (undefined4)__real_0010000000000000;
    uVar6 = (ulonglong)__real_0010000000000000 >> 0x20;
    uVar25 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar15 = uVar14 * 0x30;
    local_248 = param_1 - param_2;
    local_244 = param_3;
    do {
      uVar5 = (uint)uVar14;
      uVar17 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar19 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_250 = 0;
      local_188 = 0x3f800000;
      local_128 = 0x3f000000;
      local_120 = 0xffffffffffffffff;
      local_1d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      uStack_1d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dStack_1c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_1b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      uVar20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar21 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      local_180 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_
                                 >> 0x20) ^ uVar26,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar25)
      ;
      local_170 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                 >> 0x20) ^ uVar26,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar25)
      ;
      local_1e8._8_4_ = uVar17;
      local_1e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1e8._12_4_ = uVar19;
      uVar16 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar18 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_178 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_
                                 >> 0x20) ^ uVar26,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar25)
      ;
      local_1a8._8_4_ = uVar20;
      local_1a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8._12_4_ = uVar21;
      local_e8 = *(undefined8 *)((longlong)this + 0x20);
      local_168 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dStack_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_198._8_4_ = uVar16;
      local_198._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_198._12_4_ = uVar18;
      local_158 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_148 = uVar7;
      uStack_140 = uVar8;
      local_138 = uVar7;
      uStack_130 = uVar8;
      local_228 = 0;
      uStack_220 = 0;
      local_1f7 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1f3 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f1 = 0;
      local_258 = local_1e8;
      local_1f8 = 0;
      dStack_f0 = (double)((int)(local_248 + uVar5) % *(int *)this) *
                  *(double *)((longlong)this + 0x30) + *(double *)((longlong)this + 0x18);
      local_118._8_4_ = uVar17;
      local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118._12_4_ = uVar19;
      local_d8._8_4_ = uVar20;
      local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_d8._12_4_ = uVar21;
      local_f8 = (double)((int)(local_248 + uVar5) / *(int *)this) *
                 *(double *)((longlong)this + 0x28) + *(double *)((longlong)this + 0x10);
      local_c8._8_4_ = uVar16;
      local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_c8._12_4_ = uVar18;
      uStack_e0 = 0;
      local_108 = local_1d8;
      dStack_100 = uStack_1d0;
      cVar9 = (**(code **)(**(longlong **)((longlong)this + 0x40) + 0x3d0))
                        (*(longlong **)((longlong)this + 0x40),local_118,&local_228);
      uVar16 = uVar24;
      uVar18 = (int)uVar6;
      if (cVar9 != '\0') {
        local_240 = local_1c8;
        dStack_238 = dStack_1c0;
        local_230 = (undefined4)local_1b8;
        uStack_22c = local_1b8._4_4_;
        uVar16 = (undefined4)local_1b8;
        uVar18 = local_1b8._4_4_;
      }
      plVar2 = *(longlong **)((longlong)this + 0x48);
      iVar12 = (int)plVar2[1];
      local_250 = (longlong)iVar12;
      uVar11 = 0;
      if ((int)uVar5 < iVar12) {
        uVar11 = ~uVar5 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_258 = (undefined1 *)(longlong)(int)uVar5;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
      }
      *(ulonglong *)(lVar15 + *plVar2) = CONCAT44(uVar18,uVar16);
      if (*(char *)(*(longlong *)((longlong)this + 0x50) + 1) != '\0') {
        uVar16 = UE::Math::TQuat<double>::Identity.X._0_4_;
        uVar18 = UE::Math::TQuat<double>::Identity.X._4_4_;
        uVar17 = UE::Math::TQuat<double>::Identity.Y._0_4_;
        uVar19 = UE::Math::TQuat<double>::Identity.Y._4_4_;
        uVar20 = UE::Math::TQuat<double>::Identity.Z._0_4_;
        uVar21 = UE::Math::TQuat<double>::Identity.Z._4_4_;
        uVar22 = UE::Math::TQuat<double>::Identity.W._0_4_;
        uVar23 = UE::Math::TQuat<double>::Identity.W._4_4_;
        if (cVar9 != '\0') {
          uVar16 = local_1e8._0_4_;
          uVar18 = local_1e8._4_4_;
          uVar17 = local_1e8._8_4_;
          uVar19 = local_1e8._12_4_;
          uVar20 = (undefined4)local_1d8;
          uVar21 = local_1d8._4_4_;
          uVar22 = (undefined4)uStack_1d0;
          uVar23 = uStack_1d0._4_4_;
        }
        plVar2 = *(longlong **)((longlong)this + 0x48);
        iVar12 = (int)plVar2[1];
        local_250 = (longlong)iVar12;
        uVar11 = 0;
        if ((int)uVar5 < iVar12) {
          uVar11 = ~uVar5 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_258 = (undefined1 *)(longlong)(int)uVar5;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar12 = (*pcVar4)();
            return iVar12;
          }
        }
        lVar3 = *plVar2;
        puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar15);
        *puVar1 = uVar16;
        puVar1[1] = uVar18;
        puVar1[2] = uVar17;
        puVar1[3] = uVar19;
        puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar15);
        *puVar1 = uVar20;
        puVar1[1] = uVar21;
        puVar1[2] = uVar22;
        puVar1[3] = uVar23;
      }
      uVar14 = (ulonglong)(uVar5 + 1);
      lVar15 = lVar15 + 0x30;
      lVar13 = lVar13 + -1;
      param_3 = local_244;
    } while (lVar13 != 0);
  }
  return param_3;
}

// operator() @ 149bedf10

int __thiscall
`FPCGAsync::
AsyncProcessingOneToOneEx<`PCGPointOperationElementBase::ExecuteSliceOneToOne'::__l2::<lambda_2>,`PCGPointOperationElementBase::ExecuteSliceOneToOne'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  bool bVar31;
  uint uVar32;
  longlong lVar33;
  undefined8 *puVar34;
  uint uVar35;
  ulonglong uVar36;
  int iVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong local_110;
  
  local_110 = (longlong)param_3;
  uVar40 = (ulonglong)param_2;
  uVar36 = (ulonglong)param_1;
  if (param_3 < 1) {
    return param_3;
  }
  lVar33 = uVar40 - uVar36;
  lVar39 = uVar36 * 0xd0;
  iVar37 = param_2 - param_1;
  do {
    uVar35 = (uint)uVar36;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      uVar38 = ~(iVar37 + uVar35);
    }
    else {
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar38 = 0;
      if ((int)uVar35 < (int)plVar1[1]) {
        uVar38 = ~uVar35 >> 0x1f;
      }
      if (uVar38 == 0) {
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar31) {
          pcVar4 = (code *)swi(3);
          iVar37 = (*pcVar4)();
          return iVar37;
        }
      }
      plVar2 = *(longlong **)((longlong)this + 0x10);
      puVar34 = (undefined8 *)(*plVar1 + lVar39);
      uVar38 = ~(iVar37 + uVar35);
      uVar5 = *puVar34;
      uVar6 = puVar34[1];
      uVar7 = puVar34[2];
      uVar8 = puVar34[3];
      uVar9 = puVar34[4];
      uVar10 = puVar34[5];
      uVar11 = puVar34[6];
      uVar12 = puVar34[7];
      uVar13 = puVar34[8];
      uVar14 = puVar34[9];
      uVar15 = puVar34[10];
      uVar16 = puVar34[0xb];
      uVar17 = puVar34[0xc];
      uVar18 = puVar34[0xd];
      uVar19 = puVar34[0xe];
      uVar20 = puVar34[0xf];
      uVar21 = puVar34[0x10];
      uVar22 = puVar34[0x11];
      uVar23 = puVar34[0x12];
      uVar24 = puVar34[0x13];
      uVar25 = puVar34[0x14];
      uVar26 = puVar34[0x15];
      uVar27 = puVar34[0x16];
      uVar28 = puVar34[0x17];
      uVar29 = puVar34[0x18];
      uVar30 = puVar34[0x19];
      uVar32 = 0;
      if ((int)uVar40 < (int)plVar2[1]) {
        uVar32 = uVar38 >> 0x1f;
      }
      if (uVar32 == 0) {
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar31) {
          pcVar4 = (code *)swi(3);
          iVar37 = (*pcVar4)();
          return iVar37;
        }
      }
      puVar34 = (undefined8 *)(lVar39 + lVar33 * 0xd0 + *plVar2);
      *puVar34 = uVar5;
      puVar34[1] = uVar6;
      puVar34[2] = uVar7;
      puVar34[3] = uVar8;
      puVar34[4] = uVar9;
      puVar34[5] = uVar10;
      puVar34[6] = uVar11;
      puVar34[7] = uVar12;
      puVar34[8] = uVar13;
      puVar34[9] = uVar14;
      puVar34[10] = uVar15;
      puVar34[0xb] = uVar16;
      puVar34[0xc] = uVar17;
      puVar34[0xd] = uVar18;
      puVar34[0xe] = uVar19;
      puVar34[0xf] = uVar20;
      puVar34[0x10] = uVar21;
      puVar34[0x11] = uVar22;
      puVar34[0x12] = uVar23;
      puVar34[0x13] = uVar24;
      puVar34[0x14] = uVar25;
      puVar34[0x15] = uVar26;
      puVar34[0x16] = uVar27;
      puVar34[0x17] = uVar28;
      puVar34[0x18] = uVar29;
      puVar34[0x19] = uVar30;
    }
    plVar1 = *(longlong **)((longlong)this + 0x10);
    puVar34 = *(undefined8 **)this;
    uVar32 = 0;
    if ((int)(iVar37 + uVar35) < (int)plVar1[1]) {
      uVar32 = uVar38 >> 0x1f;
    }
    if (uVar32 == 0) {
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar31) {
        pcVar4 = (code *)swi(3);
        iVar37 = (*pcVar4)();
        return iVar37;
      }
    }
    plVar2 = *(longlong **)((longlong)this + 8);
    lVar3 = *plVar1;
    uVar38 = 0;
    if ((int)uVar35 < (int)plVar2[1]) {
      uVar38 = ~uVar35 >> 0x1f;
    }
    if (uVar38 == 0) {
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar31) {
        pcVar4 = (code *)swi(3);
        iVar37 = (*pcVar4)();
        return iVar37;
      }
    }
    (*(code *)*puVar34)(puVar34[1],(longlong)(int)uVar35 * 0xd0 + *plVar2,
                        (longlong)(int)(iVar37 + uVar35) * 0xd0 + lVar3);
    uVar40 = (ulonglong)((int)uVar40 + 1);
    uVar36 = (ulonglong)(uVar35 + 1);
    lVar39 = lVar39 + 0xd0;
    local_110 = local_110 + -1;
  } while (local_110 != 0);
  return param_3;
}

// operator() @ 149d36e90

int __thiscall
`FPCGAsync::AsyncPointProcessing'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  longlong local_res20;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId372,"IPCGElement::AsyncPointProcessing::InnerLoop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0x174);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId372);
  }
  iVar10 = 0;
  if (param_1 < param_2) {
    local_res20 = (longlong)param_1 * 0xd0;
    uVar14 = param_1;
    do {
      puVar1 = *(undefined8 **)this;
      uVar13 = iVar10 + param_1;
      plVar12 = *(longlong **)((longlong)this + 0x10);
      uVar9 = 0;
      if ((int)uVar13 < (int)plVar12[1]) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      plVar2 = *(longlong **)((longlong)this + 8);
      lVar3 = *plVar12;
      uVar9 = 0;
      if ((int)uVar14 < (int)plVar2[1]) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      lVar4 = *plVar2;
      UE::Core::Private::Function::CheckCallable((void *)*puVar1);
      pcVar5 = (code *)*puVar1;
      plVar12 = (longlong *)puVar1[5];
      if ((longlong *)puVar1[5] == (longlong *)0x0) {
        plVar12 = puVar1 + 2;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      cVar8 = (*pcVar5)(uVar11,local_res20 + lVar4,(longlong)(int)uVar13 * 0xd0 + lVar3);
      iVar6 = iVar10 + 1;
      if (cVar8 == '\0') {
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
      local_res20 = local_res20 + 0xd0;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < param_2);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar10;
}

// operator() @ 149d37b20

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __thiscall
`FPCGAsync::PrivateAsyncMultiPointProcessing'::__l2::<lambda_1>::operator()
          (void *this,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  int local_res20 [2];
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> local_48;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId170,"IPCGElement::AsyncMultiPointProcessing::InnerLoop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0xaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId170);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  while( true ) {
    if (param_2 <= param_1) {
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return __return_storage_ptr__;
    }
    puVar1 = *(undefined8 **)this;
    local_res20[0] = param_1;
    UE::Core::Private::Function::CheckCallable((void *)*puVar1);
    pcVar2 = (code *)*puVar1;
    plVar7 = (longlong *)puVar1[5];
    if ((longlong *)puVar1[5] == (longlong *)0x0) {
      plVar7 = puVar1 + 2;
    }
    uVar5 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(&local_48,uVar5,local_res20);
    if ((__return_storage_ptr__ == &local_48) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar3)) break;
    lVar8 = (longlong)local_48.ArrayNum;
    if (local_48.ArrayNum != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xd0,0x10,local_48.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0xd0,
              local_48.AllocatorInstance.Data,lVar8 * 0xd0);
      local_48.ArrayNum = 0;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    param_1 = param_1 + 1;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// operator() @ 149d37cf0

TTuple<int,int> __thiscall
`FPCGAsync::PrivateAsyncPointFilterProcessing'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  TTuple<int,int> TVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined4 in_register_00000014;
  int in_R9D;
  int iVar16;
  int iVar17;
  bool bVar18;
  int local_res20 [2];
  int local_58;
  
  TVar13._4_4_ = in_register_00000014;
  TVar13._0_4_ = param_1;
  bVar18 = -1 < CpuChannel->Enabled;
  local_res20[0] = in_R9D;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId241,"IPCGElement::AsyncPointProcessing::InnerLoop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0xf1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId241);
  }
  iVar7 = local_res20[0];
  iVar16 = 0;
  iVar17 = 0;
  local_58 = param_2;
  if (param_2 < in_R9D) {
    do {
      puVar2 = *(undefined8 **)this;
      uVar1 = iVar17 + param_2;
      plVar15 = *(longlong **)((longlong)this + 0x10);
      uVar11 = 0;
      if ((int)uVar1 < (int)plVar15[1]) {
        uVar11 = ~uVar1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        TVar13 = (TTuple<int,int>)(*pcVar6)();
        return TVar13;
      }
      uVar11 = param_2 + iVar16;
      plVar3 = *(longlong **)((longlong)this + 8);
      lVar4 = *plVar15;
      uVar12 = 0;
      if ((int)uVar11 < (int)plVar3[1]) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        TVar13 = (TTuple<int,int>)(*pcVar6)();
        return TVar13;
      }
      lVar5 = *plVar3;
      local_res20[0] = local_58;
      UE::Core::Private::Function::CheckCallable((void *)*puVar2);
      pcVar6 = (code *)*puVar2;
      plVar15 = (longlong *)puVar2[5];
      if ((longlong *)puVar2[5] == (longlong *)0x0) {
        plVar15 = puVar2 + 2;
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      cVar10 = (*pcVar6)(uVar14,local_res20,(longlong)(int)uVar11 * 0xd0 + lVar5,
                         (longlong)(int)uVar1 * 0xd0 + lVar4);
      iVar8 = iVar16 + 1;
      if (cVar10 == '\0') {
        iVar8 = iVar16;
        iVar17 = iVar17 + 1;
      }
      iVar16 = iVar8;
      local_58 = local_58 + 1;
    } while (local_58 < iVar7);
  }
  *(int *)TVar13 = iVar16;
  *(int *)((longlong)TVar13 + 4) = iVar17;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar13;
}

// operator() @ 149d37f40

int __thiscall
`FPCGAsync::PrivateAsyncPointProcessing'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  int local_res20 [2];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId138,"IPCGElement::AsyncPointProcessing::InnerLoop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0x8a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId138);
  }
  iVar9 = param_1;
  iVar5 = 0;
  while( true ) {
    if (param_2 <= iVar9) {
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return iVar5;
    }
    plVar12 = *(longlong **)((longlong)this + 8);
    uVar1 = iVar5 + param_1;
    puVar2 = *(undefined8 **)this;
    uVar8 = 0;
    if ((int)uVar1 < (int)plVar12[1]) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    lVar3 = *plVar12;
    local_res20[0] = iVar9;
    UE::Core::Private::Function::CheckCallable((void *)*puVar2);
    pcVar4 = (code *)*puVar2;
    plVar12 = (longlong *)puVar2[5];
    if ((longlong *)puVar2[5] == (longlong *)0x0) {
      plVar12 = puVar2 + 2;
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar7 = (*pcVar4)(uVar10,local_res20,(longlong)(int)uVar1 * 0xd0 + lVar3);
    iVar11 = iVar5 + 1;
    if (cVar7 == '\0') {
      iVar11 = iVar5;
    }
    iVar9 = iVar9 + 1;
    iVar5 = iVar11;
  }
  pcVar4 = (code *)swi(3);
  iVar9 = (*pcVar4)();
  return iVar9;
}

// operator() @ 149d38ae0

int __thiscall `FPCGAsync::PrivateAsyncPointProcessing'::__l15::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FLLMScope local_res8 [2];
  FName local_res10;
  undefined4 local_res18 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    GInitRunaway();
  }
  puVar1 = *(undefined8 **)this;
  local_res10.ComparisonIndex.Value = *(uint *)((longlong)this + 0xc);
  local_res18[0] = *(undefined4 *)((longlong)this + 8);
  UE::Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar5 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar5 = (longlong *)puVar1[5];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  iVar3 = (*pcVar2)(uVar4,local_res18,&local_res10);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return iVar3;
}

// operator() @ 149d38ca0

int __thiscall
`FPCGAsync::PrivateAsyncPointProcessing'::__l16::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  
  lVar35 = (longlong)param_3;
  if (param_2 == param_1) {
    return param_1 + param_3;
  }
  if (0 < param_3) {
    lVar36 = (longlong)param_1 * 0xd0;
    uVar34 = param_1;
    do {
      plVar1 = *(longlong **)this;
      uVar32 = (param_2 - param_1) + uVar34;
      uVar30 = 0;
      if ((int)uVar32 < (int)plVar1[1]) {
        uVar30 = ~uVar32 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar2 = (code *)swi(3);
        iVar31 = (*pcVar2)();
        return iVar31;
      }
      puVar33 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) * 0xd0 + lVar36 + *plVar1);
      plVar1 = *(longlong **)this;
      uVar3 = *puVar33;
      uVar4 = puVar33[1];
      uVar5 = puVar33[2];
      uVar6 = puVar33[3];
      uVar7 = puVar33[4];
      uVar8 = puVar33[5];
      uVar9 = puVar33[6];
      uVar10 = puVar33[7];
      uVar11 = puVar33[8];
      uVar12 = puVar33[9];
      uVar13 = puVar33[10];
      uVar14 = puVar33[0xb];
      uVar15 = puVar33[0xc];
      uVar16 = puVar33[0xd];
      uVar17 = puVar33[0xe];
      uVar18 = puVar33[0xf];
      uVar19 = puVar33[0x10];
      uVar20 = puVar33[0x11];
      uVar21 = puVar33[0x12];
      uVar22 = puVar33[0x13];
      uVar23 = puVar33[0x14];
      uVar24 = puVar33[0x15];
      uVar25 = puVar33[0x16];
      uVar26 = puVar33[0x17];
      uVar27 = puVar33[0x18];
      uVar28 = puVar33[0x19];
      uVar32 = 0;
      if ((int)uVar34 < (int)plVar1[1]) {
        uVar32 = ~uVar34 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar2 = (code *)swi(3);
        iVar31 = (*pcVar2)();
        return iVar31;
      }
      puVar33 = (undefined8 *)(*plVar1 + lVar36);
      uVar34 = uVar34 + 1;
      lVar36 = lVar36 + 0xd0;
      *puVar33 = uVar3;
      puVar33[1] = uVar4;
      puVar33[2] = uVar5;
      puVar33[3] = uVar6;
      puVar33[4] = uVar7;
      puVar33[5] = uVar8;
      puVar33[6] = uVar9;
      puVar33[7] = uVar10;
      puVar33[8] = uVar11;
      puVar33[9] = uVar12;
      puVar33[10] = uVar13;
      puVar33[0xb] = uVar14;
      puVar33[0xc] = uVar15;
      puVar33[0xd] = uVar16;
      puVar33[0xe] = uVar17;
      puVar33[0xf] = uVar18;
      puVar33[0x10] = uVar19;
      puVar33[0x11] = uVar20;
      puVar33[0x12] = uVar21;
      puVar33[0x13] = uVar22;
      puVar33[0x14] = uVar23;
      puVar33[0x15] = uVar24;
      puVar33[0x16] = uVar25;
      puVar33[0x17] = uVar26;
      puVar33[0x18] = uVar27;
      puVar33[0x19] = uVar28;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
  }
  return param_3 + param_1;
}

// operator() @ 149d39620

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __thiscall
`FPCGAsync::PrivateAsyncMultiPointProcessing'::__l14::<lambda_2>::operator()
          (void *this,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    GInitRunaway();
  }
  PrivateAsyncMultiPointProcessing'::__l2::<lambda_1>::operator()
            (*(void **)this,__return_storage_ptr__,*(int *)((longlong)this + 8),
             *(int *)((longlong)this + 0xc));
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// operator() @ 149d396c0

TTuple<int,int> __thiscall
`FPCGAsync::PrivateAsyncPointFilterProcessing'::__l15::<lambda_2>::operator()(void *this)

{
  TTuple<int,int> in_RDX;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    GInitRunaway();
  }
  PrivateAsyncPointFilterProcessing'::__l2::<lambda_1>::operator()
            (*(void **)this,in_RDX._0_4_,*(int *)((longlong)this + 8));
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return in_RDX;
}

// operator() @ 149d397f0

TTuple<int,int> __thiscall
`FPCGAsync::PrivateAsyncPointFilterProcessing'::__l16::<lambda_3>::operator()
          (void *this,TTuple<int,int> *param_1,int param_2,TTuple<int,int> *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  bool bVar34;
  uint uVar35;
  longlong lVar36;
  TTuple<int,int> TVar37;
  undefined8 *puVar38;
  uint uVar39;
  uint uVar40;
  longlong lVar41;
  undefined4 in_register_00000084;
  uint uVar42;
  int *in_stack_00000028;
  
  uVar1 = *(uint *)CONCAT44(in_register_00000084,param_2);
  uVar2 = ((uint *)CONCAT44(in_register_00000084,param_2))[1];
  uVar42 = (uint)param_3;
  iVar3 = *in_stack_00000028;
  lVar36 = (longlong)iVar3;
  if ((uVar42 != uVar1) && (0 < iVar3)) {
    lVar41 = (longlong)(int)uVar1 * 0xd0;
    uVar40 = uVar1;
    do {
      plVar5 = *(longlong **)this;
      uVar35 = (uVar42 - uVar1) + uVar40;
      uVar39 = 0;
      if ((int)uVar35 < (int)plVar5[1]) {
        uVar39 = ~uVar35 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar7 = (code *)swi(3);
        TVar37 = (TTuple<int,int>)(*pcVar7)();
        return TVar37;
      }
      plVar6 = *(longlong **)this;
      puVar38 = (undefined8 *)
                (*plVar5 + ((longlong)(int)uVar42 - (longlong)(int)uVar1) * 0xd0 + lVar41);
      uVar8 = *puVar38;
      uVar9 = puVar38[1];
      uVar10 = puVar38[2];
      uVar11 = puVar38[3];
      uVar12 = puVar38[4];
      uVar13 = puVar38[5];
      uVar14 = puVar38[6];
      uVar15 = puVar38[7];
      uVar16 = puVar38[8];
      uVar17 = puVar38[9];
      uVar18 = puVar38[10];
      uVar19 = puVar38[0xb];
      uVar20 = puVar38[0xc];
      uVar21 = puVar38[0xd];
      uVar22 = puVar38[0xe];
      uVar23 = puVar38[0xf];
      uVar24 = puVar38[0x10];
      uVar25 = puVar38[0x11];
      uVar26 = puVar38[0x12];
      uVar27 = puVar38[0x13];
      uVar28 = puVar38[0x14];
      uVar29 = puVar38[0x15];
      uVar30 = puVar38[0x16];
      uVar31 = puVar38[0x17];
      uVar32 = puVar38[0x18];
      uVar33 = puVar38[0x19];
      uVar35 = 0;
      if ((int)uVar40 < (int)plVar6[1]) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar7 = (code *)swi(3);
        TVar37 = (TTuple<int,int>)(*pcVar7)();
        return TVar37;
      }
      puVar38 = (undefined8 *)(*plVar6 + lVar41);
      uVar40 = uVar40 + 1;
      lVar41 = lVar41 + 0xd0;
      *puVar38 = uVar8;
      puVar38[1] = uVar9;
      puVar38[2] = uVar10;
      puVar38[3] = uVar11;
      puVar38[4] = uVar12;
      puVar38[5] = uVar13;
      puVar38[6] = uVar14;
      puVar38[7] = uVar15;
      puVar38[8] = uVar16;
      puVar38[9] = uVar17;
      puVar38[10] = uVar18;
      puVar38[0xb] = uVar19;
      puVar38[0xc] = uVar20;
      puVar38[0xd] = uVar21;
      puVar38[0xe] = uVar22;
      puVar38[0xf] = uVar23;
      puVar38[0x10] = uVar24;
      puVar38[0x11] = uVar25;
      puVar38[0x12] = uVar26;
      puVar38[0x13] = uVar27;
      puVar38[0x14] = uVar28;
      puVar38[0x15] = uVar29;
      puVar38[0x16] = uVar30;
      puVar38[0x17] = uVar31;
      puVar38[0x18] = uVar32;
      puVar38[0x19] = uVar33;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  iVar4 = in_stack_00000028[1];
  lVar36 = (longlong)iVar4;
  if ((uVar42 != uVar2) && (0 < iVar4)) {
    lVar41 = (longlong)(int)uVar2 * 0xd0;
    uVar40 = uVar2;
    do {
      plVar5 = *(longlong **)((longlong)this + 8);
      uVar39 = (uVar42 - uVar2) + uVar40;
      uVar35 = 0;
      if ((int)uVar39 < (int)plVar5[1]) {
        uVar35 = ~uVar39 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar7 = (code *)swi(3);
        TVar37 = (TTuple<int,int>)(*pcVar7)();
        return TVar37;
      }
      puVar38 = (undefined8 *)
                (lVar41 + ((longlong)(int)uVar42 - (longlong)(int)uVar2) * 0xd0 + *plVar5);
      plVar5 = *(longlong **)((longlong)this + 8);
      uVar8 = *puVar38;
      uVar9 = puVar38[1];
      uVar10 = puVar38[2];
      uVar11 = puVar38[3];
      uVar12 = puVar38[4];
      uVar13 = puVar38[5];
      uVar14 = puVar38[6];
      uVar15 = puVar38[7];
      uVar16 = puVar38[8];
      uVar17 = puVar38[9];
      uVar18 = puVar38[10];
      uVar19 = puVar38[0xb];
      uVar20 = puVar38[0xc];
      uVar21 = puVar38[0xd];
      uVar22 = puVar38[0xe];
      uVar23 = puVar38[0xf];
      uVar24 = puVar38[0x10];
      uVar25 = puVar38[0x11];
      uVar26 = puVar38[0x12];
      uVar27 = puVar38[0x13];
      uVar28 = puVar38[0x14];
      uVar29 = puVar38[0x15];
      uVar30 = puVar38[0x16];
      uVar31 = puVar38[0x17];
      uVar32 = puVar38[0x18];
      uVar33 = puVar38[0x19];
      uVar35 = 0;
      if ((int)uVar40 < (int)plVar5[1]) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar7 = (code *)swi(3);
        TVar37 = (TTuple<int,int>)(*pcVar7)();
        return TVar37;
      }
      puVar38 = (undefined8 *)(*plVar5 + lVar41);
      uVar40 = uVar40 + 1;
      lVar41 = lVar41 + 0xd0;
      *puVar38 = uVar8;
      puVar38[1] = uVar9;
      puVar38[2] = uVar10;
      puVar38[3] = uVar11;
      puVar38[4] = uVar12;
      puVar38[5] = uVar13;
      puVar38[6] = uVar14;
      puVar38[7] = uVar15;
      puVar38[8] = uVar16;
      puVar38[9] = uVar17;
      puVar38[10] = uVar18;
      puVar38[0xb] = uVar19;
      puVar38[0xc] = uVar20;
      puVar38[0xd] = uVar21;
      puVar38[0xe] = uVar22;
      puVar38[0xf] = uVar23;
      puVar38[0x10] = uVar24;
      puVar38[0x11] = uVar25;
      puVar38[0x12] = uVar26;
      puVar38[0x13] = uVar27;
      puVar38[0x14] = uVar28;
      puVar38[0x15] = uVar29;
      puVar38[0x16] = uVar30;
      puVar38[0x17] = uVar31;
      puVar38[0x18] = uVar32;
      puVar38[0x19] = uVar33;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  *(uint *)&param_1->field_0x4 = iVar4 + uVar2;
  *(uint *)param_1 = uVar1 + iVar3;
  return (TTuple<int,int>)param_1;
}

// operator() @ 149d3a270

void __thiscall `FPCGAsync::Private::AsyncProcessing'::__l55::<lambda_4>::operator()(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FName local_48;
  FMemScope local_40;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  do {
    plVar4 = *(longlong **)this;
    iVar2 = **(int **)((longlong)this + 0x10);
    **(int **)((longlong)this + 0x10) = iVar2 + 1;
    iVar3 = (int)plVar4[2];
    iVar10 = iVar2 * iVar3;
    iVar11 = *(int *)((longlong)plVar4 + 0x14) - iVar10;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
    if ((iVar11 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                           ,0x23e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((char)plVar4[3] != '\0') {
      GInitRunaway();
    }
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId583,"FPCGAsync::Private::AsyncProcessing::InnerLoop",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                 ,0x247);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId583);
    }
    local_res10[0] = iVar11;
    local_res18[0] = iVar10;
    local_res20[0] = iVar10;
    uVar8 = (**(code **)*plVar4)(((undefined8 *)*plVar4)[1],local_res20,local_res18,local_res10);
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    lVar5 = plVar4[1];
    puVar9 = FMemory::Malloc(0x10,8);
    *puVar9 = 0;
    *(int *)(puVar9 + 1) = iVar2;
    *(undefined4 *)((longlong)puVar9 + 0xc) = uVar8;
    LOCK();
    puVar1 = *(undefined8 **)(lVar5 + 8);
    *(undefined8 **)(lVar5 + 8) = puVar9;
    UNLOCK();
    *puVar1 = puVar9;
  } while ((**(char **)((longlong)this + 8) == '\0') &&
          (**(int **)((longlong)this + 0x10) != (*(int **)((longlong)this + 0x10))[1]));
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// operator() @ 149d3a420

void __thiscall `FPCGAsync::Private::AsyncProcessing'::__l53::<lambda_5>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int **local_28;
  undefined1 *local_20;
  
  local_res8.Value = (int *)0x0;
  while( true ) {
    lVar1 = *(longlong *)this;
    lVar2 = **(longlong **)(lVar1 + 0x10);
    if (lVar2 == 0) break;
    piVar3 = *(int **)(lVar2 + 8);
    FMemory::Free(*(void **)(lVar1 + 0x10));
    *(longlong *)(lVar1 + 0x10) = lVar2;
    local_28 = &local_res8.Value;
    local_20 = (undefined1 *)((longlong)&local_res8.Value + 4);
    local_res8.Value = piVar3;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 0x38),&local_res8,(bool *)&local_28);
  }
  return;
}

// AsyncMultiPointProcessing @ 149d3dfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FPCGAsync::AsyncMultiPointProcessing
          (FPCGContext *param_1,int param_2,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_3,
          TFunction<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>___cdecl(int)> *param_4)

{
  if ((param_1 != (FPCGContext *)0x0) && ((param_1->AsyncState).bIsRunningAsyncCall == false)) {
    (param_1->AsyncState).bIsRunningAsyncCall = true;
    PrivateAsyncMultiPointProcessing(&param_1->AsyncState,0x100,param_2,param_3,param_4);
    (param_1->AsyncState).bIsRunningAsyncCall = false;
    return;
  }
  PrivateAsyncMultiPointProcessing((FPCGAsyncState *)0x0,0x100,param_2,param_3,param_4);
  return;
}

// AsyncPointFilterProcessing @ 149d3e010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FPCGAsync::AsyncPointFilterProcessing
          (FPCGContext *param_1,int param_2,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_4,
          TFunction<bool___cdecl(int,FPCGPoint_&,FPCGPoint_&)> *param_5)

{
  if ((param_1 != (FPCGContext *)0x0) && ((param_1->AsyncState).bIsRunningAsyncCall == false)) {
    (param_1->AsyncState).bIsRunningAsyncCall = true;
    PrivateAsyncPointFilterProcessing(&param_1->AsyncState,0x100,param_2,param_3,param_4,param_5);
    (param_1->AsyncState).bIsRunningAsyncCall = false;
    return;
  }
  PrivateAsyncPointFilterProcessing((FPCGAsyncState *)0x0,0x100,param_2,param_3,param_4,param_5);
  return;
}

// AsyncPointProcessing @ 149d3e090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FPCGAsync::AsyncPointProcessing
          (FPCGContext *param_1,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_3,
          TFunction<bool___cdecl(FPCGPoint_const_&,FPCGPoint_&)> *param_4)

{
  code **ppcVar1;
  undefined1 auStackY_c8 [32];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((param_1 == (FPCGContext *)0x0) || ((param_1->AsyncState).bIsRunningAsyncCall != false)) {
    local_68[0] = (code *)0x0;
    local_40 = FMemory::Malloc(0x20,8);
    *local_40 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FPCGAsync::AsyncPointProcessing'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_40[1] = (code *)param_4;
    local_40[2] = (code *)param_2;
    local_40[3] = (code *)param_3;
    if (local_40 + 1 != (code **)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGAsync::AsyncPointProcessing'::__l2::<lambda_1>,int,int,int>
                    ::Call;
    }
    PrivateAsyncPointProcessing
              ((FPCGAsyncState *)0x0,0x100,param_2->ArrayNum,param_3,
               (TFunction<int___cdecl(int,int)> *)local_68);
    if (local_68[0] != (code *)0x0) {
      ppcVar1 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar1 = local_40;
      }
      (**(code **)(*ppcVar1 + 0x10))();
    }
  }
  else {
    (param_1->AsyncState).bIsRunningAsyncCall = true;
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x20,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FPCGAsync::AsyncPointProcessing'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_70[1] = (code *)param_4;
    local_70[2] = (code *)param_2;
    local_70[3] = (code *)param_3;
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FPCGAsync::AsyncPointProcessing'::__l2::<lambda_1>,int,int,int>
                    ::Call;
    }
    PrivateAsyncPointProcessing
              (&param_1->AsyncState,0x100,param_2->ArrayNum,param_3,
               (TFunction<int___cdecl(int,int)> *)local_98);
    if (local_98[0] != (code *)0x0) {
      ppcVar1 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar1 = local_70;
      }
      (**(code **)(*ppcVar1 + 0x10))();
    }
    (param_1->AsyncState).bIsRunningAsyncCall = false;
  }
  return;
}

// AsyncPointProcessing @ 149d3e230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FPCGAsync::AsyncPointProcessing
          (FPCGContext *param_1,int param_2,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_3,
          TFunction<bool___cdecl(int,FPCGPoint_&)> *param_4)

{
  if ((param_1 != (FPCGContext *)0x0) && ((param_1->AsyncState).bIsRunningAsyncCall == false)) {
    (param_1->AsyncState).bIsRunningAsyncCall = true;
    PrivateAsyncPointProcessing(&param_1->AsyncState,0x100,param_2,param_3,param_4);
    (param_1->AsyncState).bIsRunningAsyncCall = false;
    return;
  }
  PrivateAsyncPointProcessing((FPCGAsyncState *)0x0,0x100,param_2,param_3,param_4);
  return;
}

// AsyncProcessing @ 149d3e2a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __cdecl
FPCGAsync::Private::AsyncProcessing
          (FPCGAsyncState *param_1,int param_2,TFunctionRef<void___cdecl(void)> *param_3,
          TFunctionRef<int___cdecl(int,int,int)> *param_4,
          TFunctionRef<void___cdecl(int,int,int)> *param_5,TFunctionRef<void___cdecl(int)> *param_6,
          bool param_7,int param_8,bool param_9)

{
  undefined8 *puVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  undefined1 *puVar5;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar6;
  code *pcVar7;
  double dVar8;
  TConsoleVariableData<bool> *pTVar9;
  TConsoleVariableData<bool> *pTVar10;
  TConsoleVariableData<int> *pTVar11;
  int *piVar12;
  char *pcVar13;
  FPCGAsyncState *pFVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  undefined4 uVar19;
  FTaskBase *this;
  undefined8 *puVar20;
  longlong lVar21;
  undefined1 *puVar22;
  uint uVar23;
  longlong lVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  double dVar37;
  int local_res10 [2];
  uint local_158 [2];
  int local_150 [2];
  TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_> local_148;
  undefined8 local_138;
  undefined8 local_130;
  char local_128 [8];
  undefined8 *local_120;
  undefined8 *local_118;
  int local_110 [2];
  int local_108 [2];
  int local_100 [2];
  int local_f8 [2];
  int local_f0 [2];
  int local_e8 [2];
  int local_e0 [2];
  int local_d8 [2];
  char *local_d0;
  FPCGAsyncState *local_c8;
  TFunctionRef<int___cdecl(int,int,int)> *local_c0;
  char *local_b8;
  int local_b0;
  int local_ac;
  char local_a8;
  undefined1 local_a0 [8];
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  int *local_80;
  FPCGAsyncState *local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 *local_60;
  longlong local_58;
  
  bVar35 = -1 < CpuChannel->Enabled;
  local_res10[0] = param_2;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId433,"FPCGAsync::AsyncProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0x1b1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId433);
  }
  pTVar11 = ConsoleVar::CVarAsyncOverrideChunkSize.Ref;
  bVar15 = IsInParallelGameThread();
  if (bVar15) {
LAB_149d3e342:
    lVar24 = 0;
  }
  else {
    bVar15 = IsInGameThread();
    lVar24 = 4;
    if (bVar15) goto LAB_149d3e342;
  }
  if ((!param_9) || (iVar29 = *(int *)((longlong)pTVar11->ShadowedValue + lVar24), iVar29 < 1)) {
    iVar29 = param_8;
  }
  bVar15 = IsInGameThread();
  pTVar10 = ConsoleVar::CVarDisableAsyncTimeSlicingOnGameThread.Ref;
  pTVar9 = ConsoleVar::CVarDisableAsyncTimeSlicing.Ref;
  if (param_7) {
    if (bVar15) {
      bVar15 = IsInParallelGameThread();
      if ((bVar15) || (bVar15 = IsInGameThread(), bVar15)) {
        lVar24 = 0;
      }
      else {
        lVar24 = 1;
      }
      cVar2 = pTVar10->ShadowedValue[lVar24];
    }
    else {
      bVar15 = IsInParallelGameThread();
      if ((bVar15) || (bVar15 = IsInGameThread(), bVar15)) {
        lVar24 = 0;
      }
      else {
        lVar24 = 1;
      }
      cVar2 = pTVar9->ShadowedValue[lVar24];
    }
    if (cVar2 != '\0') goto LAB_149d3e3b0;
    bVar15 = true;
  }
  else {
LAB_149d3e3b0:
    bVar15 = false;
  }
  if ((((param_1->NumAvailableTasks == 0) || (iVar29 < 1)) || (local_res10[0] < 1)) ||
     (uVar33 = (local_res10[0] + -1) / iVar29 + 1, (int)uVar33 <= param_1->CurrentChunkToCollapse))
  {
LAB_149d3e6ed:
    if (bVar35) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar36 = true;
  }
  else {
    if (param_1->bStarted == false) {
      bVar36 = -1 < CpuChannel->Enabled;
      if (bVar36) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId457,"FPCGAsync::Private::AsyncProcessing::Initialize",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                   ,0x1c9);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId457);
      }
      (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
      param_1->InitialNumIterations = local_res10[0];
      uVar30 = param_1->NumAvailableTasks;
      param_1->bStarted = true;
      uVar23 = uVar33;
      if ((0 < (int)uVar30) && ((int)uVar30 < (int)uVar33)) {
        uVar23 = uVar30;
      }
      local_158[0] = (uint)((longlong)(int)uVar33 / (longlong)(int)uVar23);
      uVar34 = (longlong)(int)uVar33 / (longlong)(int)uVar23 & 0xffffffff;
      local_150[0] = uVar33 - local_158[0] * uVar23;
      if (uVar23 != 1) {
        uVar30 = 0;
        local_130 = &param_1->TasksChunksStartEnd;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        local_138 = &(param_1->TasksChunksStartEnd).ArrayMax;
        piVar4 = &(param_1->TasksChunksStartEnd).ArrayNum;
        if (*local_138 < (int)uVar23) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar23,&local_130->AllocatorInstance,*piVar4,local_138);
          uVar34 = (ulonglong)local_158[0];
        }
        pTVar6 = local_130;
        piVar12 = local_138;
        iVar26 = local_150[0];
        uVar27 = uVar30;
        uVar31 = uVar30;
        if (0 < (int)uVar23) {
          do {
            iVar18 = (int)uVar34 + 1;
            if (iVar26 <= (int)uVar30) {
              iVar18 = (int)uVar34;
            }
            uVar27 = iVar18 + uVar31;
            iVar18 = *piVar4;
            if (iVar18 == *piVar12) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&pTVar6->AllocatorInstance,piVar12);
              uVar34 = (ulonglong)local_158[0];
              *piVar4 = iVar18;
              iVar26 = local_150[0];
            }
            uVar30 = uVar30 + 1;
            *piVar4 = iVar18 + 1;
            pFVar3 = (pTVar6->AllocatorInstance).Data;
            *(uint *)(pFVar3 + (longlong)iVar18 * 8) = uVar31;
            *(uint *)(pFVar3 + (longlong)iVar18 * 8 + 4) = uVar27;
            uVar31 = uVar27;
          } while ((int)uVar30 < (int)uVar23);
        }
        if ((uVar27 != uVar33) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Count == ChunksNumber",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                                ,0x1ed,L""), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
      }
      if (bVar36) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else if (local_res10[0] != param_1->InitialNumIterations) {
      local_80 = local_res10;
      local_78 = param_1;
      bVar36 = `FPCGAsync::Private::AsyncProcessing'::__l29::<lambda_1>::operator()(&local_80);
      if (!bVar36) {
        FPCGAsyncState::Reset(param_1);
        goto LAB_149d3e6ed;
      }
    }
    uVar30 = (param_1->TasksChunksStartEnd).ArrayNum - 1;
    if ((int)uVar30 < 0) {
      uVar30 = 0;
    }
    if (uVar30 == 0) {
      dVar8 = __real_4170000000000000;
      if (((int)uVar33 < 1) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("ChunksNumber > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                              ,0x215,L""), dVar8 = __real_4170000000000000, bVar36)) {
        pcVar7 = (code *)swi(3);
        uVar17 = (*pcVar7)();
        return (bool)uVar17;
      }
      do {
        iVar18 = iVar29 * param_1->CurrentChunkToCollapse;
        uVar30 = param_1->AsyncCurrentWriteIndex;
        iVar26 = local_res10[0] - iVar18;
        if (iVar29 < iVar26) {
          iVar26 = iVar29;
        }
        if ((iVar26 < 1) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("Count > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                                ,0x21e,L""), bVar36)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        bVar36 = -1 < CpuChannel->Enabled;
        if (bVar36) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId547,
                     "FPCGAsync::Private::AsyncProcessing::IterationInnerLoop",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                     ,0x223);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId547);
        }
        local_158[0] = uVar30;
        local_150[0] = iVar26;
        local_110[0] = iVar18;
        iVar26 = (**(code **)param_4)
                           (*(undefined8 *)&param_4->field_0x8,local_110,local_158,local_150);
        if (bVar36) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        param_1->AsyncCurrentWriteIndex = param_1->AsyncCurrentWriteIndex + iVar26;
        param_1->CurrentChunkToCollapse = param_1->CurrentChunkToCollapse + 1;
        puVar20 = local_118;
      } while ((param_1->CurrentChunkToCollapse < (int)uVar33) &&
              ((!bVar15 ||
               (QueryPerformanceCounter(&local_98),
               dVar37 = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8,
               puVar20 = local_118, dVar37 < param_1->EndTime || dVar37 == param_1->EndTime))));
    }
    else {
      local_128[0] = '\0';
      local_120 = (undefined8 *)0x0;
      local_120 = FMemory::Malloc(0x10,8);
      *local_120 = 0;
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 0;
      local_148.ArrayMax = 0;
      local_118 = local_120;
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
      }
      if (0 < (int)uVar30) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar30,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
      }
      uVar28 = 0;
      local_b8 = local_128;
      local_ac = local_res10[0];
      local_a8 = param_1->bIsCallingBlueprint;
      uVar34 = uVar28;
      local_c0 = param_4;
      local_b0 = iVar29;
      if (0 < (int)uVar30) {
        do {
          bVar36 = -1 < CpuChannel->Enabled;
          if (bVar36) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId594,
                       "FPCGAsync::Private::AsyncProcessing::StartingTasks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                       ,0x252);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId594);
          }
          uVar31 = (uint)uVar28;
          uVar27 = ~uVar31 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar31 < (param_1->TasksChunksStartEnd).ArrayNum) {
            uVar23 = uVar27;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          pFVar3 = (param_1->TasksChunksStartEnd).AllocatorInstance.Data;
          uVar23 = 0;
          if ((int)uVar31 < (param_1->TasksChunksStartEnd).ArrayNum) {
            uVar23 = uVar27;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          if (*(int *)(pFVar3 + uVar34 * 8) !=
              *(int *)((param_1->TasksChunksStartEnd).AllocatorInstance.Data + uVar34 * 8 + 4)) {
            uVar23 = 0;
            if ((int)uVar31 < (param_1->TasksChunksStartEnd).ArrayNum) {
              uVar23 = uVar27;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            pFVar3 = (param_1->TasksChunksStartEnd).AllocatorInstance.Data;
            this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                   ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                               *)&UE::Tasks::Private::SmallTaskAllocator);
            if (this != (FTaskBase *)0x0) {
              UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
              this->_padding_ =
                   (longlong)
                   &UE::Tasks::Private::
                    TExecutableTaskBase<`FPCGAsync::Private::AsyncProcessing'::`55'::<lambda_4>,void,void>
                    ::_vftable_;
              UE::Tasks::Private::FTaskBase::Init
                        (this,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp(602)"
                         ,Default,None,None);
              this[1]._padding_ = (longlong)&local_c0;
              this[1]._padding_ = (longlong)local_128;
              this[1]._padding_ = (longlong)(pFVar3 + (longlong)(int)uVar31 * 8);
              this->_padding_ =
                   (longlong)
                   &UE::Tasks::Private::
                    TExecutableTask<`FPCGAsync::Private::AsyncProcessing'::`55'::<lambda_4>_>::
                    _vftable_;
            }
            UE::Tasks::Private::FTaskBase::TryLaunch(this,0x100);
            iVar26 = local_148.ArrayNum;
            if (local_148.ArrayNum == local_148.ArrayMax) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_148.AllocatorInstance,&local_148.ArrayMax);
            }
            local_148.ArrayNum = iVar26 + 1;
            *(FTaskBase **)(local_148.AllocatorInstance.Data + (longlong)iVar26 * 8) = this;
          }
          if (bVar36) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          uVar28 = (ulonglong)(uVar31 + 1);
          uVar34 = uVar34 + 1;
        } while ((longlong)uVar34 < (longlong)(int)uVar30);
      }
      dVar8 = __real_4170000000000000;
      local_d0 = local_128;
      local_c8 = param_1;
      do {
        pcVar13 = local_d0;
        local_138 = (int *)0x0;
        while (lVar24 = **(longlong **)(pcVar13 + 0x10), lVar24 != 0) {
          piVar4 = *(int **)(lVar24 + 8);
          FMemory::Free(*(void **)(pcVar13 + 0x10));
          pFVar14 = local_c8;
          local_70 = &local_138;
          *(longlong *)(pcVar13 + 0x10) = lVar24;
          local_138 = piVar4;
          local_68 = (longlong)&local_138 + 4;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&pFVar14->ChunkToNumElementsWrittenMap,
                     (TPairInitializer<int_const_&,int_const_&> *)local_a0,(bool *)&local_70);
        }
        iVar26 = (param_1->TasksChunksStartEnd).ArrayNum;
        uVar23 = iVar26 - 1;
        uVar30 = 0;
        if ((int)uVar23 < iVar26) {
          uVar30 = ~uVar23 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        iVar26 = (param_1->TasksChunksStartEnd).ArrayNum;
        pFVar3 = (param_1->TasksChunksStartEnd).AllocatorInstance.Data;
        uVar23 = iVar26 - 1;
        uVar30 = 0;
        if ((int)uVar23 < iVar26) {
          uVar30 = ~uVar23 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        iVar26 = (param_1->TasksChunksStartEnd).ArrayNum;
        if (*(int *)((param_1->TasksChunksStartEnd).AllocatorInstance.Data +
                    ((longlong)iVar26 + -1) * 8) == *(int *)(pFVar3 + (longlong)(int)uVar23 * 8 + 4)
           ) {
          _param_7 = 0;
          if (param_1->CurrentChunkToCollapse != uVar33) {
LAB_149d3ed10:
            _param_7 = _param_7 + 1;
            if (((_param_7 != 0x14) || (_param_7 = 0, !bVar15)) ||
               (QueryPerformanceCounter(&local_90),
               dVar37 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8,
               dVar37 < param_1->EndTime || dVar37 == param_1->EndTime)) {
              pcVar13 = local_d0;
              if (*(int *)&(param_1->ChunkToNumElementsWrittenMap).field_0x8 !=
                  *(int *)&(param_1->ChunkToNumElementsWrittenMap).field_0x34) {
                puVar5 = *(undefined1 **)&(param_1->ChunkToNumElementsWrittenMap).field_0x40;
                puVar22 = &(param_1->ChunkToNumElementsWrittenMap).field_0x38;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar22 = puVar5;
                }
                uVar30 = *(uint *)(puVar22 +
                                  (ulonglong)
                                  (*(int *)&(param_1->ChunkToNumElementsWrittenMap).field_0x48 - 1U
                                  & param_1->CurrentChunkToCollapse) * 4);
                if (uVar30 != 0xffffffff) {
                  lVar24 = *(longlong *)&param_1->ChunkToNumElementsWrittenMap;
                  do {
                    lVar21 = (longlong)(int)uVar30;
                    if (*(uint *)(lVar24 + lVar21 * 0x10) == param_1->CurrentChunkToCollapse) {
                      iVar26 = *(int *)(lVar24 + 4 + lVar21 * 0x10);
                      if (((int)uVar30 < 0) ||
                         (*(int *)&(param_1->ChunkToNumElementsWrittenMap).field_0x28 <= (int)uVar30
                         )) {
LAB_149d3ee6a:
                        bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Elements.IsValidIndex(ElementIndex)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                            ,0x2ab,
                                            L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                                           );
                        if (bVar36) {
                          pcVar7 = (code *)swi(3);
                          uVar17 = (*pcVar7)();
                          return (bool)uVar17;
                        }
                      }
                      else {
                        if ((*(int *)&(param_1->ChunkToNumElementsWrittenMap).field_0x28 <=
                             (int)uVar30) &&
                           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Index>=0 && Index<NumBits",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                ,0x5c6,L""), bVar36)) {
                          pcVar7 = (code *)swi(3);
                          uVar17 = (*pcVar7)();
                          return (bool)uVar17;
                        }
                        puVar5 = *(undefined1 **)&(param_1->ChunkToNumElementsWrittenMap).field_0x20
                        ;
                        puVar22 = &(param_1->ChunkToNumElementsWrittenMap).field_0x10;
                        if (puVar5 != (undefined1 *)0x0) {
                          puVar22 = puVar5;
                        }
                        uVar23 = uVar30;
                        if ((int)uVar30 < 0) {
                          uVar23 = uVar30 + 0x1f;
                        }
                        if ((*(uint *)(puVar22 + (longlong)((int)uVar23 >> 5) * 4) >>
                             (uVar30 & 0x1f) & 1) == 0) goto LAB_149d3ee6a;
                      }
                      puVar5 = *(undefined1 **)&(param_1->ChunkToNumElementsWrittenMap).field_0x40;
                      lVar24 = (longlong)(int)uVar30 * 0x10 +
                               *(longlong *)&param_1->ChunkToNumElementsWrittenMap;
                      puVar22 = &(param_1->ChunkToNumElementsWrittenMap).field_0x38;
                      if (puVar5 != (undefined1 *)0x0) {
                        puVar22 = puVar5;
                      }
                      puVar25 = (uint *)(puVar22 + (longlong)*(int *)(lVar24 + 0xc) * 4);
                      goto LAB_149d3eeb2;
                    }
                    uVar30 = *(uint *)(lVar24 + 8 + lVar21 * 0x10);
                  } while (uVar30 != 0xffffffff);
                }
              }
              local_130 = (TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *)0x0;
              while (lVar24 = **(longlong **)(pcVar13 + 0x10), lVar24 != 0) {
                pTVar6 = *(TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> **)(lVar24 + 8);
                FMemory::Free(*(void **)(pcVar13 + 0x10));
                pFVar14 = local_c8;
                local_60 = &local_130;
                *(longlong *)(pcVar13 + 0x10) = lVar24;
                local_130 = pTVar6;
                local_58 = (longlong)&local_130 + 4;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)&pFVar14->ChunkToNumElementsWrittenMap,
                           (TPairInitializer<int_const_&,int_const_&> *)(local_a0 + 4),
                           (bool *)&local_60);
              }
              goto LAB_149d3efd0;
            }
            LOCK();
            UNLOCK();
          }
LAB_149d3eff6:
          LOCK();
          local_128[0] = '\x01';
          UNLOCK();
        }
        else {
          uVar30 = 0;
          if ((int)(iVar26 - 1U) < iVar26) {
            uVar30 = ~(iVar26 - 1U) >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          lVar24 = (longlong)(param_1->TasksChunksStartEnd).ArrayNum;
          pFVar3 = (param_1->TasksChunksStartEnd).AllocatorInstance.Data;
          iVar26 = *(int *)(pFVar3 + lVar24 * 8 + -8);
          *(int *)(pFVar3 + lVar24 * 8 + -8) = iVar26 + 1;
          iVar32 = local_b0 * iVar26;
          iVar18 = local_ac - iVar32;
          if (local_b0 < local_ac - iVar32) {
            iVar18 = local_b0;
          }
          if ((iVar18 < 1) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Count > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                                  ,0x23e,L""), bVar36)) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          if (local_a8 != '\0') {
            GInitRunaway();
          }
          bVar36 = -1 < CpuChannel->Enabled;
          if (bVar36) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId583,"FPCGAsync::Private::AsyncProcessing::InnerLoop"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                       ,0x247);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId583);
          }
          local_108[0] = iVar18;
          local_100[0] = iVar32;
          local_f8[0] = iVar32;
          uVar19 = (**(code **)local_c0)
                             (*(undefined8 *)&local_c0->field_0x8,local_f8,local_100,local_108);
          if (bVar36) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          pcVar13 = local_b8;
          puVar20 = FMemory::Malloc(0x10,8);
          *puVar20 = 0;
          *(int *)(puVar20 + 1) = iVar26;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uVar19;
          LOCK();
          puVar1 = *(undefined8 **)(pcVar13 + 8);
          *(undefined8 **)(pcVar13 + 8) = puVar20;
          UNLOCK();
          *puVar1 = puVar20;
        }
      } while (((!bVar15) ||
               (QueryPerformanceCounter(&local_88),
               dVar37 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8,
               dVar37 < param_1->EndTime || dVar37 == param_1->EndTime)) && (local_128[0] == '\0'));
      LOCK();
      local_128[0] = '\x01';
      UNLOCK();
      bVar36 = -1 < CpuChannel->Enabled;
      if (bVar36) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId636,"FPCGAsync::AsyncProcessing::Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                   ,0x27c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId636);
      }
      UE::Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>
                (&local_148,(FTimespan)0x7fffffffffffffff);
      if (bVar36) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      `FPCGAsync::Private::AsyncProcessing'::__l53::<lambda_5>::operator()(&local_d0);
      DestructItems<UE::Tasks::TTask<void>,int>
                ((TTask<void> *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      if ((TTask<void> *)local_148.AllocatorInstance.Data != (TTask<void> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      puVar1 = (undefined8 *)*local_118;
      FMemory::Free(local_118);
      puVar20 = local_118;
      while (local_118 = puVar1, local_118 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*local_118;
        FMemory::Free(local_118);
        puVar20 = local_118;
      }
    }
    local_118 = puVar20;
    bVar36 = param_1->CurrentChunkToCollapse == uVar33;
    if (bVar36) {
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId716,"FPCGAsync::Private::AsyncProcessing::Finished",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                   ,0x2cc);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId716);
      }
      local_d8[0] = param_1->AsyncCurrentWriteIndex;
      (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_d8);
      FPCGAsyncState::Reset(param_1);
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else if ((!bVar15) &&
            (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsDone || bEnableTimeSlicing",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                                 ,0x2c8,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    if (bVar35) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return bVar36;
LAB_149d3eeb2:
  uVar23 = *puVar25;
  if (uVar23 == 0xffffffff) {
    bVar36 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar36) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
  }
  else if (uVar23 == uVar30) goto LAB_149d3eefa;
  puVar25 = (uint *)(*(longlong *)&param_1->ChunkToNumElementsWrittenMap + 8 +
                    (longlong)(int)uVar23 * 0x10);
  goto LAB_149d3eeb2;
LAB_149d3eefa:
  *puVar25 = *(uint *)(lVar24 + 8);
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_1->ChunkToNumElementsWrittenMap,uVar30,1);
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId685,"FPCGAsync::AsyncProcessing::CollapsingNewData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0x2ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId685);
  }
  iVar18 = iVar29 * param_1->CurrentChunkToCollapse;
  if ((iVar29 < iVar26) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumberOfElementsWritten <= ChunkSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                          ,0x2af,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    uVar17 = (*pcVar7)();
    return (bool)uVar17;
  }
  iVar32 = param_1->AsyncCurrentWriteIndex;
  if (iVar18 == iVar32) {
    param_1->AsyncCurrentWriteIndex = iVar32 + iVar26;
  }
  else {
    local_f0[0] = iVar26;
    local_e8[0] = iVar32;
    local_e0[0] = iVar18;
    (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_e0,local_e8,local_f0);
    param_1->AsyncCurrentWriteIndex = param_1->AsyncCurrentWriteIndex + iVar26;
  }
  param_1->CurrentChunkToCollapse = param_1->CurrentChunkToCollapse + 1;
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_149d3efd0:
  if (param_1->CurrentChunkToCollapse == uVar33) goto LAB_149d3eff6;
  goto LAB_149d3ed10;
}

// GetNumTasks @ 149d518e0

int __cdecl FPCGAsync::GetNumTasks(FPCGAsyncState *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_1 != (FPCGAsyncState *)0x0) {
    if (param_2 < 1) {
      param_2 = 1;
    }
    iVar1 = param_1->NumAvailableTasks;
    iVar2 = param_2;
    if ((0 < iVar1) && (iVar1 < param_2)) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

// PrivateAsyncMultiPointProcessing @ 149d5f880

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FPCGAsync::PrivateAsyncMultiPointProcessing
          (FPCGAsyncState *param_1,int param_2,int param_3,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_4,
          TFunction<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>___cdecl(int)> *param_5)

{
  TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> TVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FTaskBase *this;
  int iVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 local_res10;
  undefined1 local_87 [7];
  ForAnyElementType local_80;
  undefined8 local_78;
  int local_70;
  uint local_6c;
  TFunction<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>___cdecl(int)> *local_68;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> local_60;
  TFunction<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>___cdecl(int)> **local_50;
  int iStack_48;
  int iStack_44;
  undefined1 local_40;
  undefined7 uStack_3f;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId157,"IPCGElement::AsyncMultiPointProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0x9d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId157);
  }
  if ((param_2 < 1) || (param_3 < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinIterationsPerTask > 0 && NumIterations >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                       ,0x9e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2 < 1) goto LAB_149d5fd1a;
  }
  if (param_3 < 1) goto LAB_149d5fd1a;
  iVar8 = param_3 / param_2;
  if (param_1 == (FPCGAsyncState *)0x0) {
    local_68 = param_5;
    local_80.Data = (FScriptContainerElement *)0x0;
    uVar9 = 0;
    local_78 = 0;
    local_6c = 0;
    iVar8 = param_3;
    local_70 = param_3;
LAB_149d5f9df:
    local_res10 = 0;
  }
  else {
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    iVar2 = param_1->NumAvailableTasks;
    if ((0 < iVar2) && (iVar2 < iVar8)) {
      iVar8 = iVar2;
    }
    local_68 = param_5;
    uVar9 = iVar8 - 1;
    iVar8 = param_3 / iVar8;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70 = iVar8;
    local_6c = uVar9;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (0 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    if (param_1->bIsCallingBlueprint == false) goto LAB_149d5f9df;
    local_res10 = 1;
  }
  iVar2 = local_70;
  if (0 < (int)uVar9) {
    uVar11 = (ulonglong)uVar9;
    iVar7 = 0;
    do {
      local_50 = &local_68;
      local_40 = local_res10;
      iStack_48 = iVar7;
      iStack_44 = iVar7 + iVar2;
      this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&UE::Tasks::Private::SmallTaskAllocator);
      if (this == (FTaskBase *)0x0) {
        this = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
        this->_padding_ =
             (longlong)
             &
             ___7__TTaskWithResult_V__TArray_UFPCGPoint__V__TSizedDefaultAllocator__0CA______Private_Tasks_UE__6B_
        ;
        UE::Tasks::Private::FTaskBase::Init
                  (this,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp(191)"
                   ,Default,None,None);
        this[1]._padding_ = (longlong)local_50;
        this[1]._padding_ = CONCAT44(iStack_44,iStack_48);
        this[1]._padding_ = CONCAT71(uStack_3f,local_40);
        this->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`FPCGAsync::PrivateAsyncMultiPointProcessing'::`14'::<lambda_2>_>::
              _vftable_;
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this,0x100);
      iVar8 = (int)local_78;
      if ((int)local_78 == local_78._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_80,(int *)((longlong)&local_78 + 4));
      }
      local_78 = CONCAT44(local_78._4_4_,iVar8 + 1);
      *(FTaskBase **)(local_80.Data + (longlong)iVar8 * 8) = this;
      uVar11 = uVar11 - 1;
      uVar9 = local_6c;
      iVar7 = iVar7 + iVar2;
      iVar8 = local_70;
    } while (uVar11 != 0);
  }
  `FPCGAsync::PrivateAsyncMultiPointProcessing'::__l2::<lambda_1>::operator()
            (&local_68,&local_60,uVar9 * iVar8,param_3);
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId208,
               "IPCGElement::AsyncMultiPointProcessing::WaitAndCollapseArray",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0xd0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId208);
  }
  iVar8 = (int)local_78;
  pTVar1 = (TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)
           (local_80.Data + (longlong)(int)local_78 * 8);
  FVar10.Data = local_80.Data;
  while( true ) {
    if ((int)local_78 != iVar8) {
      local_87[0] = 0;
      `TCheckedPointerIterator<UE::Tasks::TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_87);
    }
    if ((TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)FVar10.Data == pTVar1) break;
    if (*(TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)FVar10.Data !=
        (TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_>)0x0) {
      UE::Tasks::Private::FTaskBase::Wait
                ((FTaskBase *)*(TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)FVar10.Data)
      ;
    }
    if ((*(TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)FVar10.Data ==
         (TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                           ,0xc6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)FVar10.Data !=
        (TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_>)0x0) {
      UE::Tasks::Private::FTaskBase::Wait
                ((FTaskBase *)*(TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)FVar10.Data)
      ;
    }
    TVar3 = *(TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)FVar10.Data;
    if ((*(char *)((longlong)TVar3 + 0xd0) == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                           ,0x353,L"The task must be completed to obtain its result"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_4 == (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)((longlong)TVar3 + 0xd8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = *(int *)((longlong)TVar3 + 0xe0);
    if (iVar2 != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xd0,0x10,iVar2,&param_4->AllocatorInstance,&param_4->ArrayNum,
                         &param_4->ArrayMax);
      memmove((param_4->AllocatorInstance).Data + (longlong)iVar7 * 0xd0,
              (((TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)((longlong)TVar3 + 0xd8))->
              AllocatorInstance).Data,(longlong)iVar2 * 0xd0);
      *(undefined4 *)((longlong)TVar3 + 0xe0) = 0;
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if ((param_4 == &local_60) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_60.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,0x10,local_60.ArrayNum,&param_4->AllocatorInstance,&param_4->ArrayNum,
                       &param_4->ArrayMax);
    memmove((param_4->AllocatorInstance).Data + (longlong)iVar8 * 0xd0,
            local_60.AllocatorInstance.Data,(longlong)local_60.ArrayNum * 0xd0);
    local_60.ArrayNum = 0;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  DestructItems<UE::Tasks::TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_>,int>
            ((TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)local_80.Data,(int)local_78);
  if ((TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)local_80.Data !=
      (TTask<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_80.Data);
  }
LAB_149d5fd1a:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrivateAsyncPointFilterProcessing @ 149d5fd50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FPCGAsync::PrivateAsyncPointFilterProcessing
          (FPCGAsyncState *param_1,int param_2,int param_3,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_5,
          TFunction<bool___cdecl(int,FPCGPoint_&,FPCGPoint_&)> *param_6)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FTaskBase *this;
  TTuple<int,int> TVar8;
  FScriptContainerElement *pFVar9;
  undefined1 uVar10;
  TTuple<int,int> *pTVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_90;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_88;
  TFunction<bool___cdecl(int,FPCGPoint_&,FPCGPoint_&)> **local_80;
  int iStack_78;
  int iStack_74;
  undefined1 local_70;
  undefined7 uStack_6f;
  TFunction<bool___cdecl(int,FPCGPoint_&,FPCGPoint_&)> *local_68;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_60;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_58;
  TTuple<int,int> local_50;
  TTuple<int,int> local_48 [2];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId221,"IPCGElement::AsyncPointFilterProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0xdd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId221);
  }
  if ((param_2 < 1) || (param_3 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinIterationsPerTask > 0 && NumIterations >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                       ,0xde,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 < 1) goto LAB_149d60225;
  }
  if (0 < param_3) {
    local_b8 = param_3 / param_2;
    if (param_1 == (FPCGAsyncState *)0x0) {
      local_b8 = 1;
    }
    else {
      if (local_b8 < 1) {
        local_b8 = 1;
      }
      iVar1 = param_1->NumAvailableTasks;
      if ((0 < iVar1) && (iVar1 < local_b8)) {
        local_b8 = iVar1;
      }
    }
    uVar12 = local_b8 - 1;
    local_b8 = param_3 / local_b8;
    local_a8 = uVar12;
    if (CpuChannel->Enabled < 0) {
      TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,param_3,Default);
      TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_5,param_3,Default);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId233,"IPCGElement::AsyncPointProcessing::AllocatingArray",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                 ,0xe9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId233);
      TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,param_3,Default);
      TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_5,param_3,Default);
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_68 = param_6;
    local_58 = param_5;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    local_60 = param_4;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (0 < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar12,&local_c8,0,(int *)((longlong)&local_c0 + 4));
    }
    iVar1 = local_b8;
    if ((param_1 == (FPCGAsyncState *)0x0) || (param_1->bIsCallingBlueprint == false)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    if (0 < (int)uVar12) {
      uVar15 = (ulonglong)uVar12;
      iVar13 = 0;
      do {
        local_80 = &local_68;
        iStack_78 = iVar13;
        iStack_74 = iVar13 + iVar1;
        local_70 = uVar10;
        this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
        if (this == (FTaskBase *)0x0) {
          this = (FTaskBase *)0x0;
        }
        else {
          UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
          this->_padding_ = (longlong)&___7__TTaskWithResult_U__TTuple_HH___Private_Tasks_UE__6B_;
          UE::Tasks::Private::FTaskBase::Init
                    (this,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp(271)"
                     ,Default,None,None);
          this[1]._padding_ = (longlong)local_80;
          this[1]._padding_ = CONCAT44(iStack_74,iStack_78);
          this[1]._padding_ = CONCAT71(uStack_6f,local_70);
          this->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FPCGAsync::PrivateAsyncPointFilterProcessing'::`15'::<lambda_2>_>::
                _vftable_;
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(this,0x100);
        iVar6 = (int)local_c0;
        if ((int)local_c0 == local_c0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_c8,(int *)((longlong)&local_c0 + 4));
        }
        local_c0 = CONCAT44(local_c0._4_4_,iVar6 + 1);
        *(FTaskBase **)(local_c8.Data + (longlong)iVar6 * 8) = this;
        uVar15 = uVar15 - 1;
        uVar12 = local_a8;
        iVar13 = iVar13 + iVar1;
      } while (uVar15 != 0);
    }
    uVar12 = uVar12 * local_b8;
    `FPCGAsync::PrivateAsyncPointFilterProcessing'::__l2::<lambda_1>::operator()
              (&local_68,(int)local_98,uVar12);
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId289,
                 "IPCGElement::AsyncPointFilterProcessing::WaitAndCollapseArray",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                 ,0x121);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId289);
    }
    iVar1 = local_b8;
    local_88 = param_5;
    uVar14 = 0;
    local_b0 = 0;
    local_90 = param_4;
    if (0 < (int)local_c0) {
      lVar16 = 0;
      pTVar11 = (TTuple<int,int> *)0x0;
      do {
        uVar7 = 0;
        if ((int)uVar14 < (int)local_c0) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = local_c8.Data + lVar16;
        if (*(FTaskBase **)pFVar9 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)pFVar9);
        }
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                               ,0xc6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(FTaskBase **)pFVar9 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)pFVar9);
        }
        lVar2 = *(longlong *)pFVar9;
        if ((*(char *)(lVar2 + 0xd0) == '\0') &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCompleted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                               ,0x353,L"The task must be completed to obtain its result"), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_a0 = *(undefined8 *)(lVar2 + 0xd8);
        TVar8 = `FPCGAsync::PrivateAsyncPointFilterProcessing'::__l16::<lambda_3>::operator()
                          (&local_90,&local_50,(int)&local_b0,pTVar11);
        uVar14 = uVar14 + 1;
        pTVar11 = (TTuple<int,int> *)(ulonglong)(uint)((int)pTVar11 + iVar1);
        lVar16 = lVar16 + 8;
        local_b0 = *(undefined8 *)TVar8;
      } while ((int)uVar14 < (int)local_c0);
    }
    TVar8 = `FPCGAsync::PrivateAsyncPointFilterProcessing'::__l16::<lambda_3>::operator()
                      (&local_90,local_48,(int)&local_b0,(TTuple<int,int> *)(ulonglong)uVar12);
    local_b0 = *(undefined8 *)TVar8;
    TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNum(param_4,(int)local_b0,Default);
    TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNum(param_5,local_b0._4_4_,Default);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    DestructItems<UE::Tasks::TTask<TTuple<int,int>_>,int>
              ((TTask<TTuple<int,int>_> *)local_c8.Data,(int)local_c0);
    if ((TTask<TTuple<int,int>_> *)local_c8.Data != (TTask<TTuple<int,int>_> *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
LAB_149d60225:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrivateAsyncPointProcessing @ 149d60260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FPCGAsync::PrivateAsyncPointProcessing
          (FPCGAsyncState *param_1,int param_2,int param_3,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_4,
          TFunction<int___cdecl(int,int)> *param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FTaskBase *this;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  ForAnyElementType local_88;
  undefined8 local_80;
  int local_78;
  uint local_74;
  int local_70 [2];
  int local_68 [2];
  int local_60;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_58;
  TFunction<int___cdecl(int,int)> *local_50;
  int iStack_48;
  int iStack_44;
  undefined1 local_40;
  undefined7 uStack_3f;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId53,"IPCGElement::AsyncPointProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
               ,0x35);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId53);
  }
  if ((param_2 < 1) || (param_3 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinIterationsPerTask > 0 && NumIterations >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                       ,0x37,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < 1) goto LAB_149d60701;
  }
  if (0 < param_3) {
    local_78 = param_3 / param_2;
    if (param_1 == (FPCGAsyncState *)0x0) {
      local_78 = 1;
    }
    else {
      if (local_78 < 1) {
        local_78 = 1;
      }
      iVar7 = param_1->NumAvailableTasks;
      if ((0 < iVar7) && (iVar7 < local_78)) {
        local_78 = iVar7;
      }
    }
    uVar13 = local_78 - 1;
    uVar14 = (ulonglong)uVar13;
    local_78 = param_3 / local_78;
    local_74 = uVar13;
    if (CpuChannel->Enabled < 0) {
      TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,param_3,Default);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId66,"IPCGElement::AsyncPointProcessing::AllocatingArray",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                 ,0x42);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId66);
      TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,param_3,Default);
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (0 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&local_88,0,(int *)((longlong)&local_80 + 4));
    }
    iVar7 = local_78;
    if ((param_1 == (FPCGAsyncState *)0x0) || (param_1->bIsCallingBlueprint == false)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    if (0 < (int)uVar13) {
      iVar6 = 0;
      do {
        local_50 = param_5;
        iStack_48 = iVar6;
        iStack_44 = iVar6 + iVar7;
        local_40 = uVar11;
        this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&UE::Tasks::Private::SmallTaskAllocator);
        if (this == (FTaskBase *)0x0) {
          this = (FTaskBase *)0x0;
        }
        else {
          UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
          this->_padding_ = (longlong)&___7__TTaskWithResult_H_Private_Tasks_UE__6B_;
          UE::Tasks::Private::FTaskBase::Init
                    (this,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp(82)"
                     ,Default,None,None);
          this[1]._padding_ = (longlong)local_50;
          this[1]._padding_ = CONCAT44(iStack_44,iStack_48);
          this[1]._padding_ = CONCAT71(uStack_3f,local_40);
          this->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FPCGAsync::PrivateAsyncPointProcessing'::`15'::<lambda_1>_>::
                _vftable_;
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(this,0x100);
        iVar5 = (int)local_80;
        if ((int)local_80 == local_80._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_88,(int *)((longlong)&local_80 + 4));
        }
        local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
        *(FTaskBase **)(local_88.Data + (longlong)iVar5 * 8) = this;
        uVar14 = uVar14 - 1;
        iVar6 = iVar6 + iVar7;
        uVar13 = local_74;
      } while (uVar14 != 0);
    }
    uVar13 = uVar13 * local_78;
    local_74 = uVar13;
    local_70[0] = param_3;
    local_68[0] = uVar13;
    UE::Core::Private::Function::CheckCallable(*(void **)param_5);
    pcVar2 = *(code **)param_5;
    plVar9 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_5->field_0x28;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    local_60 = (*pcVar2)(uVar8,local_68,local_70);
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId100,
                 "IPCGElement::AsyncPointProcessing::WaitAndCollapseArray",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGAsync.cpp"
                 ,100);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId100);
    }
    iVar7 = local_78;
    iVar6 = 0;
    uVar12 = 0;
    local_58 = param_4;
    if (0 < (int)local_80) {
      lVar15 = 0;
      iVar5 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar12 < (int)local_80) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = local_88.Data + lVar15;
        if (*(FTaskBase **)pFVar10 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)pFVar10);
        }
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                               ,0xc6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(FTaskBase **)pFVar10 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)pFVar10);
        }
        lVar1 = *(longlong *)pFVar10;
        if ((*(char *)(lVar1 + 0xd0) == '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCompleted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                               ,0x353,L"The task must be completed to obtain its result"), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = `FPCGAsync::PrivateAsyncPointProcessing'::__l16::<lambda_2>::operator()
                          (&local_58,iVar6,iVar5,*(int *)(lVar1 + 0xd8));
        uVar12 = uVar12 + 1;
        iVar5 = iVar5 + iVar7;
        lVar15 = lVar15 + 8;
        uVar13 = local_74;
      } while ((int)uVar12 < (int)local_80);
    }
    iVar7 = `FPCGAsync::PrivateAsyncPointProcessing'::__l16::<lambda_2>::operator()
                      (&local_58,iVar6,uVar13,local_60);
    TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar7,Default);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    DestructItems<UE::Tasks::TTask<int>,int>((TTask<int> *)local_88.Data,(int)local_80);
    if ((TTask<int> *)local_88.Data != (TTask<int> *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
LAB_149d60701:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrivateAsyncPointProcessing @ 149d60740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPCGAsync::PrivateAsyncPointProcessing
          (FPCGAsyncState *param_1,int param_2,int param_3,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_4,
          TFunction<bool___cdecl(int,FPCGPoint_&)> *param_5)

{
  undefined ***pppuVar1;
  undefined1 auStackY_78 [32];
  code *local_48 [2];
  undefined **local_38;
  TFunction<bool___cdecl(int,FPCGPoint_&)> *local_30;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPCGAsync::PrivateAsyncPointProcessing'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = param_5;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FPCGAsync::PrivateAsyncPointProcessing'::__l2::<lambda_1>,int,int,int>
                ::Call;
  local_28 = param_4;
  PrivateAsyncPointProcessing
            (param_1,param_2,param_3,param_4,(TFunction<int___cdecl(int,int)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// operator() @ 150548df0

bool __thiscall `FPCGAsync::Private::AsyncProcessing'::__l29::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1513274096874421769>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1513274096874421769>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

