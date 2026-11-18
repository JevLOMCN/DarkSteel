// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// FilterEvents @ 1463719d0

void __thiscall
FChaosRemovalEventFilter::FilterEvents
          (FChaosRemovalEventFilter *this,TTransform<double> *param_1,
          TArray<Chaos::FRemovalData,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  float fVar13;
  undefined1 local_res8 [8];
  double local_70;
  double dStack_68;
  double local_60;
  float fStack_58;
  undefined4 uStack_54;
  
  *(undefined4 *)&this->field_0x18 = 0;
  if (*(int *)&this->field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
  }
  if (this->RemovalEventRequestSettings == (FChaosRemovalEventRequestSettings *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RemovalEventRequestSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\ChaosRemovalEventFilter.cpp"
                       ,0xc,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  fVar13 = this->RemovalEventRequestSettings->MaxDistance;
  fVar13 = fVar13 * fVar13;
  pFVar10 = pFVar11 + (longlong)iVar3 * 0x58;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FRemovalData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar10) break;
    fVar2 = this->RemovalEventRequestSettings->MinMass;
    if ((fVar2 <= 0.0) ||
       (dVar6 = (double)fVar2,
       dVar6 < *(double *)(pFVar11 + 0x18) || dVar6 == *(double *)(pFVar11 + 0x18))) {
      if (0.0 < fVar13) {
        dVar6 = (param_1->Translation).XY.m128d_f64[0] - *(double *)pFVar11;
        dVar7 = (param_1->Translation).XY.m128d_f64[1] - *(double *)(pFVar11 + 8);
        dVar12 = (param_1->Translation).ZW.m128d_f64[0] - *(double *)(pFVar11 + 0x10);
        if (fVar13 < (float)(dVar6 * dVar6 + dVar7 * dVar7 + dVar12 * dVar12)) goto LAB_146371c07;
      }
      local_70 = *(double *)pFVar11;
      dStack_68 = *(double *)(pFVar11 + 8);
      local_60 = *(double *)(pFVar11 + 0x10);
      uStack_54 = 0xffffffff;
      fStack_58 = (float)*(double *)(pFVar11 + 0x18);
      if ((*(double **)&this->field_0x10 <= &local_70) &&
         (&local_70 < *(double **)&this->field_0x10 + (longlong)*(int *)&this->field_0x1c * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar9 = *(int *)&this->field_0x18;
      if (iVar9 == *(int *)&this->field_0x1c) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)&this->field_0x10,(int *)&this->field_0x1c);
      }
      *(int *)&this->field_0x18 = iVar9 + 1;
      lVar4 = *(longlong *)&this->field_0x10;
      pdVar1 = (double *)((longlong)iVar9 * 0x20 + lVar4);
      *pdVar1 = local_70;
      pdVar1[1] = dStack_68;
      pdVar1 = (double *)((longlong)iVar9 * 0x20 + 0x10 + lVar4);
      *pdVar1 = local_60;
      pdVar1[1] = (double)CONCAT44(uStack_54,fStack_58);
      iVar9 = this->RemovalEventRequestSettings->MaxNumberOfResults;
      if ((0 < iVar9) && (*(int *)&this->field_0x18 == iVar9)) break;
    }
LAB_146371c07:
    pFVar11 = pFVar11 + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x000146371c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))
            (this,&this->field_0x10,this->RemovalEventRequestSettings->SortMethod,param_1);
  return;
}

// SortEvents @ 14638f310

void __thiscall
FChaosRemovalEventFilter::SortEvents
          (FChaosRemovalEventFilter *this,
          TArray<FChaosRemovalEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosRemovalSortMethod param_2,TTransform<double> *param_3)

{
  FIdentityFunctor local_res18 [16];
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_2 == SortByHighestMass) {
    AlgoImpl::
    IntroSortInternal<FChaosRemovalEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosRemovalEventData,_FChaosRemovalEventFilter::SortEvents_::__l2::FSortRemovalByMassMaxToMin>_>
              ((FChaosRemovalEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               local_res18[0],(FSortRemovalByMassMaxToMin *)local_res18);
  }
  else if (param_2 == SortByNearestFirst) {
    local_28 = (param_3->Translation).XY.m128d_f64[0];
    dStack_20 = (param_3->Translation).XY.m128d_f64[1];
    local_18 = (param_3->Translation).ZW.m128d_f64[0];
    AlgoImpl::
    IntroSortInternal<FChaosRemovalEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosRemovalEventData,_FChaosRemovalEventFilter::SortEvents_::__l2::FSortRemovalByNearestFirst>_>
              ((FChaosRemovalEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               local_res18[0],(FSortRemovalByNearestFirst *)&local_28);
    return;
  }
  return;
}

