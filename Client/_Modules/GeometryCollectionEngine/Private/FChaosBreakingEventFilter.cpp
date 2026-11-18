// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// FilterEvents @ 1463712e0

void __thiscall
FChaosBreakingEventFilter::FilterEvents
          (FChaosBreakingEventFilter *this,TTransform<double> *param_1,
          TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  FChaosBreakingEventRequestSettings *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_res8 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float local_50;
  undefined4 uStack_4c;
  
  *(undefined4 *)&this->field_0x18 = 0;
  if (*(int *)&this->field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
  }
  if (this->BreakingEventRequestSettings == (FChaosBreakingEventRequestSettings *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("BreakingEventRequestSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\ChaosBreakingEventFilter.cpp"
                       ,10,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar3 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  fVar2 = this->BreakingEventRequestSettings->MaxDistance;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0xc0;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FBreakingData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar13) break;
    pFVar4 = this->BreakingEventRequestSettings;
    if (((pFVar4->MinSpeed <= 0.0) ||
        (auVar15._0_8_ = *(double *)(pFVar12 + 0x60) * *(double *)(pFVar12 + 0x60),
        auVar15._8_8_ = 0, auVar16._8_8_ = 0,
        auVar16._0_8_ =
             *(double *)(pFVar12 + 0x50) * *(double *)(pFVar12 + 0x50) +
             *(double *)(pFVar12 + 0x58) * *(double *)(pFVar12 + 0x58) + auVar15._0_8_,
        auVar16 = sqrtpd(auVar15,auVar16), (double)pFVar4->MinSpeed <= auVar16._0_8_)) &&
       ((pFVar4->MinMass <= 0.0 ||
        (dVar7 = (double)pFVar4->MinMass,
        dVar7 < *(double *)(pFVar12 + 0x80) || dVar7 == *(double *)(pFVar12 + 0x80))))) {
      if (0.0 < pFVar4->MaxDistance) {
        dVar7 = (param_1->Translation).XY.m128d_f64[0] - *(double *)(pFVar12 + 0x10);
        dVar14 = (param_1->Translation).XY.m128d_f64[1] - *(double *)(pFVar12 + 0x18);
        dVar8 = (param_1->Translation).ZW.m128d_f64[0] - *(double *)(pFVar12 + 0x20);
        if (fVar2 * fVar2 < (float)(dVar7 * dVar7 + dVar14 * dVar14 + dVar8 * dVar8))
        goto LAB_146371585;
      }
      local_80 = *(undefined8 *)(pFVar12 + 0x10);
      uStack_78 = *(undefined8 *)(pFVar12 + 0x18);
      local_70 = *(undefined8 *)(pFVar12 + 0x20);
      uStack_58 = *(undefined8 *)(pFVar12 + 0x60);
      uStack_68 = *(undefined8 *)(pFVar12 + 0x50);
      uStack_60 = *(undefined8 *)(pFVar12 + 0x58);
      local_50 = (float)*(double *)(pFVar12 + 0x80);
      if ((*(undefined8 **)&this->field_0x10 <= &local_80) &&
         (&local_80 < *(undefined8 **)&this->field_0x10 + (longlong)*(int *)&this->field_0x1c * 7))
      {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = *(int *)&this->field_0x18;
      if (iVar10 == *(int *)&this->field_0x1c) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)&this->field_0x10,(int *)&this->field_0x1c);
      }
      *(int *)&this->field_0x18 = iVar10 + 1;
      lVar11 = (longlong)iVar10 * 0x38;
      lVar5 = *(longlong *)&this->field_0x10;
      *(undefined8 *)(lVar11 + lVar5) = local_80;
      ((undefined8 *)(lVar11 + lVar5))[1] = uStack_78;
      puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar5);
      *puVar1 = local_70;
      puVar1[1] = uStack_68;
      puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar5);
      *puVar1 = uStack_60;
      puVar1[1] = uStack_58;
      *(ulonglong *)(lVar11 + 0x30 + lVar5) = CONCAT44(uStack_4c,local_50);
      iVar10 = this->BreakingEventRequestSettings->MaxNumberOfResults;
      if ((0 < iVar10) && (*(int *)&this->field_0x18 == iVar10)) break;
    }
LAB_146371585:
    pFVar12 = pFVar12 + 0xc0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001463715cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))
            (this,&this->field_0x10,this->BreakingEventRequestSettings->SortMethod,param_1);
  return;
}

// SortEvents @ 14638f1d0

void __thiscall
FChaosBreakingEventFilter::SortEvents
          (FChaosBreakingEventFilter *this,
          TArray<FChaosBreakingEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosBreakingSortMethod param_2,TTransform<double> *param_3)

{
  FIdentityFunctor local_res18 [16];
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_2 == SortByHighestMass) {
    AlgoImpl::
    IntroSortInternal<FChaosBreakingEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosBreakingEventData,_FChaosBreakingEventFilter::SortEvents_::__l2::FSortBreakingByMassMaxToMin>_>
              ((FChaosBreakingEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               local_res18[0],(FSortBreakingByMassMaxToMin *)local_res18);
  }
  else {
    if (param_2 == SortByHighestSpeed) {
      AlgoImpl::
      IntroSortInternal<FChaosBreakingEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosBreakingEventData,_FChaosBreakingEventFilter::SortEvents_::__l2::FSortBreakingBySpeedMaxToMin>_>
                ((FChaosBreakingEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res18[0],(FSortBreakingBySpeedMaxToMin *)local_res18);
      return;
    }
    if (param_2 == SortByNearestFirst) {
      local_28 = (param_3->Translation).XY.m128d_f64[0];
      dStack_20 = (param_3->Translation).XY.m128d_f64[1];
      local_18 = (param_3->Translation).ZW.m128d_f64[0];
      AlgoImpl::
      IntroSortInternal<FChaosBreakingEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosBreakingEventData,_FChaosBreakingEventFilter::SortEvents_::__l2::FSortBreakingByNearestFirst>_>
                ((FChaosBreakingEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res18[0],(FSortBreakingByNearestFirst *)&local_28);
      return;
    }
  }
  return;
}

