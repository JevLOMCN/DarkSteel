// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// FilterEvents @ 146371c60

void __thiscall
FChaosTrailingEventFilter::FilterEvents
          (FChaosTrailingEventFilter *this,TTransform<double> *param_1,
          TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  int iVar2;
  FChaosTrailingEventRequestSettings *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 local_res8 [8];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  float fStack_50;
  undefined4 uStack_4c;
  
  *(undefined4 *)&this->field_0x18 = 0;
  if (*(int *)&this->field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
  }
  if (this->TrailingEventRequestSettings == (FChaosTrailingEventRequestSettings *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrailingEventRequestSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\ChaosTrailingEventFilter.cpp"
                       ,0xc,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  fVar17 = this->TrailingEventRequestSettings->MaxDistance;
  pFVar13 = pFVar12 + (longlong)iVar2 * 0xc0;
  fVar17 = fVar17 * fVar17;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FTrailingData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar13) break;
    pFVar3 = this->TrailingEventRequestSettings;
    if ((((pFVar3->MinMass <= 0.0) ||
         (dVar6 = (double)pFVar3->MinMass,
         dVar6 < *(double *)(pFVar12 + 0x70) || dVar6 == *(double *)(pFVar12 + 0x70))) &&
        ((pFVar3->MinSpeed <= 0.0 ||
         (auVar15._0_8_ =
               *(double *)(pFVar12 + 0x48) * *(double *)(pFVar12 + 0x48) +
               *(double *)(pFVar12 + 0x40) * *(double *)(pFVar12 + 0x40) +
               *(double *)(pFVar12 + 0x50) * *(double *)(pFVar12 + 0x50), auVar15._8_8_ = 0,
         auVar15 = sqrtpd(auVar15,auVar15), (double)pFVar3->MinSpeed <= auVar15._0_8_)))) &&
       ((pFVar3->MinAngularSpeed <= 0.0 ||
        (auVar16._0_8_ =
              *(double *)(pFVar12 + 0x60) * *(double *)(pFVar12 + 0x60) +
              *(double *)(pFVar12 + 0x58) * *(double *)(pFVar12 + 0x58) +
              *(double *)(pFVar12 + 0x68) * *(double *)(pFVar12 + 0x68), auVar16._8_8_ = 0,
        auVar15 = sqrtpd(auVar16,auVar16), (double)pFVar3->MinAngularSpeed <= auVar15._0_8_)))) {
      if (0.0 < fVar17) {
        dVar6 = (param_1->Translation).XY.m128d_f64[0] - *(double *)pFVar12;
        dVar7 = (param_1->Translation).XY.m128d_f64[1] - *(double *)(pFVar12 + 8);
        dVar14 = (param_1->Translation).ZW.m128d_f64[0] - *(double *)(pFVar12 + 0x10);
        if (fVar17 < (float)(dVar7 * dVar7 + dVar6 * dVar6 + dVar14 * dVar14)) goto LAB_146371f7a;
      }
      local_98 = *(double *)pFVar12;
      dStack_90 = *(double *)(pFVar12 + 8);
      local_88 = *(double *)(pFVar12 + 0x10);
      dStack_70 = *(double *)(pFVar12 + 0x50);
      local_58 = *(double *)(pFVar12 + 0x68);
      uStack_4c = 0xffffffff;
      dStack_80 = *(double *)(pFVar12 + 0x40);
      dStack_78 = *(double *)(pFVar12 + 0x48);
      local_68 = *(double *)(pFVar12 + 0x58);
      dStack_60 = *(double *)(pFVar12 + 0x60);
      fStack_50 = (float)*(double *)(pFVar12 + 0x70);
      if ((*(double **)&this->field_0x10 <= &local_98) &&
         (&local_98 < *(double **)&this->field_0x10 + (longlong)*(int *)&this->field_0x1c * 10)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar10 = *(int *)&this->field_0x18;
      if (iVar10 == *(int *)&this->field_0x1c) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,(ForAnyElementType *)&this->field_0x10,(int *)&this->field_0x1c);
      }
      *(int *)&this->field_0x18 = iVar10 + 1;
      lVar11 = (longlong)iVar10;
      lVar4 = *(longlong *)&this->field_0x10;
      pdVar1 = (double *)(lVar4 + lVar11 * 0x50);
      *pdVar1 = local_98;
      pdVar1[1] = dStack_90;
      pdVar1 = (double *)(lVar4 + 0x10 + lVar11 * 0x50);
      *pdVar1 = local_88;
      pdVar1[1] = dStack_80;
      pdVar1 = (double *)(lVar4 + 0x20 + lVar11 * 0x50);
      *pdVar1 = dStack_78;
      pdVar1[1] = dStack_70;
      auVar8._8_8_ = dStack_60;
      auVar8._0_8_ = local_68;
      *(undefined1 (*) [16])(lVar4 + 0x30 + lVar11 * 0x50) = auVar8;
      pdVar1 = (double *)(lVar4 + 0x40 + lVar11 * 0x50);
      *pdVar1 = local_58;
      pdVar1[1] = (double)CONCAT44(uStack_4c,fStack_50);
      iVar10 = this->TrailingEventRequestSettings->MaxNumberOfResults;
      if ((0 < iVar10) && (*(int *)&this->field_0x18 == iVar10)) break;
    }
LAB_146371f7a:
    pFVar12 = pFVar12 + 0xc0;
  }
                    /* WARNING: Could not recover jumptable at 0x000146371fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))
            (this,&this->field_0x10,this->TrailingEventRequestSettings->SortMethod,param_1);
  return;
}

// SortEvents @ 14638f380

void __thiscall
FChaosTrailingEventFilter::SortEvents
          (FChaosTrailingEventFilter *this,
          TArray<FChaosTrailingEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosTrailingSortMethod param_2,TTransform<double> *param_3)

{
  FIdentityFunctor local_res18 [16];
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_2 == SortByHighestMass) {
    AlgoImpl::
    IntroSortInternal<FChaosTrailingEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosTrailingEventData,_FChaosTrailingEventFilter::SortEvents_::__l2::FSortTrailingByMassMaxToMin>_>
              ((FChaosTrailingEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               local_res18[0],(FSortTrailingByMassMaxToMin *)local_res18);
  }
  else {
    if (param_2 == SortByHighestSpeed) {
      AlgoImpl::
      IntroSortInternal<FChaosTrailingEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosTrailingEventData,_FChaosTrailingEventFilter::SortEvents_::__l2::FSortTrailingBySpeedMaxToMin>_>
                ((FChaosTrailingEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res18[0],(FSortTrailingBySpeedMaxToMin *)local_res18);
      return;
    }
    if (param_2 == SortByNearestFirst) {
      local_28 = (param_3->Translation).XY.m128d_f64[0];
      dStack_20 = (param_3->Translation).XY.m128d_f64[1];
      local_18 = (param_3->Translation).ZW.m128d_f64[0];
      AlgoImpl::
      IntroSortInternal<FChaosTrailingEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosTrailingEventData,_FChaosTrailingEventFilter::SortEvents_::__l2::FSortTrailingByNearestFirst>_>
                ((FChaosTrailingEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res18[0],(FSortTrailingByNearestFirst *)&local_28);
      return;
    }
  }
  return;
}

