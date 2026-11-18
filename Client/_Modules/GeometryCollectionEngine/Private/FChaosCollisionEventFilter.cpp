// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// FilterEvents @ 1463715e0

void __thiscall
FChaosCollisionEventFilter::FilterEvents
          (FChaosCollisionEventFilter *this,TTransform<double> *param_1,
          TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  FChaosCollisionEventRequestSettings *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined1 local_res8 [8];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  float local_a8;
  float fStack_a4;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  
  *(undefined4 *)&this->field_0x18 = 0;
  if (*(int *)&this->field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
  }
  if (this->CollisionEventRequestSettings == (FChaosCollisionEventRequestSettings *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("CollisionEventRequestSettings",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\ChaosCollisionEventFilter.cpp"
                        ,10,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar7 = this->CollisionEventRequestSettings;
  iVar6 = param_2->ArrayNum;
  pFVar13 = (param_2->AllocatorInstance).Data;
  fVar3 = pFVar7->MaxDistance;
  fVar4 = pFVar7->MinSpeed;
  fVar5 = pFVar7->MinImpulse;
  pFVar14 = pFVar13 + (longlong)iVar6 * 0x120;
  while( true ) {
    if (param_2->ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FCollidingData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar14) break;
    pFVar7 = this->CollisionEventRequestSettings;
    if (pFVar7->MinMass <= 0.0) {
LAB_146371701:
      if (0.0 < pFVar7->MinSpeed) {
        dVar18 = *(double *)(pFVar13 + 0x68) * *(double *)(pFVar13 + 0x68) +
                 *(double *)(pFVar13 + 0x60) * *(double *)(pFVar13 + 0x60) +
                 *(double *)(pFVar13 + 0x70) * *(double *)(pFVar13 + 0x70);
        dVar17 = *(double *)(pFVar13 + 0x50) * *(double *)(pFVar13 + 0x50) +
                 *(double *)(pFVar13 + 0x48) * *(double *)(pFVar13 + 0x48) +
                 *(double *)(pFVar13 + 0x58) * *(double *)(pFVar13 + 0x58);
        if (dVar17 <= dVar18) {
          dVar18 = dVar17;
        }
        if ((float)dVar18 < fVar4 * fVar4) goto LAB_146371964;
      }
      if ((pFVar7->MinImpulse <= 0.0) ||
         ((double)(fVar5 * fVar5) <=
          *(double *)(pFVar13 + 0x20) * *(double *)(pFVar13 + 0x20) +
          *(double *)(pFVar13 + 0x18) * *(double *)(pFVar13 + 0x18) +
          *(double *)(pFVar13 + 0x28) * *(double *)(pFVar13 + 0x28))) {
        if (0.0 < pFVar7->MaxDistance) {
          local_88 = (param_1->Translation).XY.m128d_f64[0];
          dStack_80 = (param_1->Translation).XY.m128d_f64[1];
          local_78 = (param_1->Translation).ZW.m128d_f64[0];
          if (fVar3 * fVar3 <
              (float)((dStack_80 - *(double *)(pFVar13 + 8)) *
                      (dStack_80 - *(double *)(pFVar13 + 8)) +
                      (local_88 - *(double *)pFVar13) * (local_88 - *(double *)pFVar13) +
                     (local_78 - *(double *)(pFVar13 + 0x10)) *
                     (local_78 - *(double *)(pFVar13 + 0x10)))) goto LAB_146371964;
        }
        local_108 = *(double *)pFVar13;
        dStack_100 = *(double *)(pFVar13 + 8);
        local_f8 = *(double *)(pFVar13 + 0x10);
        dStack_e0 = *(double *)(pFVar13 + 0x40);
        local_c8 = *(double *)(pFVar13 + 0x58);
        dStack_b0 = *(double *)(pFVar13 + 0x70);
        dStack_f0 = *(double *)(pFVar13 + 0x30);
        dStack_e8 = *(double *)(pFVar13 + 0x38);
        fStack_a4 = (float)*(double *)(pFVar13 + 0xe0);
        dStack_90 = *(double *)(pFVar13 + 0x28);
        local_d8 = *(double *)(pFVar13 + 0x48);
        dStack_d0 = *(double *)(pFVar13 + 0x50);
        dStack_c0 = *(double *)(pFVar13 + 0x60);
        dStack_b8 = *(double *)(pFVar13 + 0x68);
        local_a8 = (float)*(double *)(pFVar13 + 0xd8);
        dStack_a0 = *(double *)(pFVar13 + 0x18);
        dStack_98 = *(double *)(pFVar13 + 0x20);
        if ((*(double **)&this->field_0x10 <= &local_108) &&
           (&local_108 < *(double **)&this->field_0x10 + (longlong)*(int *)&this->field_0x1c * 0x10)
           ) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar11 = *(int *)&this->field_0x18;
        if (iVar11 == *(int *)&this->field_0x1c) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,(ForAnyElementType *)&this->field_0x10,(int *)&this->field_0x1c)
          ;
        }
        *(int *)&this->field_0x18 = iVar11 + 1;
        lVar8 = *(longlong *)&this->field_0x10;
        lVar12 = (longlong)iVar11 * 0x80;
        *(double *)(lVar12 + lVar8) = local_108;
        ((double *)(lVar12 + lVar8))[1] = dStack_100;
        pdVar1 = (double *)(lVar12 + 0x10 + lVar8);
        *pdVar1 = local_f8;
        pdVar1[1] = dStack_f0;
        pdVar1 = (double *)(lVar12 + 0x20 + lVar8);
        *pdVar1 = dStack_e8;
        pdVar1[1] = dStack_e0;
        pdVar1 = (double *)(lVar12 + 0x30 + lVar8);
        *pdVar1 = local_d8;
        pdVar1[1] = dStack_d0;
        pdVar1 = (double *)(lVar12 + 0x40 + lVar8);
        *pdVar1 = local_c8;
        pdVar1[1] = dStack_c0;
        pdVar1 = (double *)(lVar12 + 0x50 + lVar8);
        *pdVar1 = dStack_b8;
        pdVar1[1] = dStack_b0;
        puVar2 = (undefined8 *)(lVar12 + 0x60 + lVar8);
        *puVar2 = CONCAT44(fStack_a4,local_a8);
        puVar2[1] = dStack_a0;
        pdVar1 = (double *)(lVar12 + 0x70 + lVar8);
        *pdVar1 = dStack_98;
        pdVar1[1] = dStack_90;
        iVar11 = this->CollisionEventRequestSettings->MaxNumberResults;
        if ((0 < iVar11) && (*(int *)&this->field_0x18 == iVar11)) break;
      }
    }
    else {
      dVar18 = *(double *)(pFVar13 + 0xe0);
      uVar15 = SUB84(dVar18,0);
      uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
      dVar17 = *(double *)(pFVar13 + 0xd8);
      if (dVar17 <= dVar18) {
        uVar15 = SUB84(dVar17,0);
        uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
      }
      if (pFVar7->MinMass <= (float)(double)CONCAT44(uVar16,uVar15)) goto LAB_146371701;
    }
LAB_146371964:
    pFVar13 = pFVar13 + 0x120;
  }
                    /* WARNING: Could not recover jumptable at 0x0001463719bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))
            (this,&this->field_0x10,this->CollisionEventRequestSettings->SortMethod,param_1);
  return;
}

// SortEvents @ 14638f260

void __thiscall
FChaosCollisionEventFilter::SortEvents
          (FChaosCollisionEventFilter *this,
          TArray<FChaosCollisionEventData,TSizedDefaultAllocator<32>_> *param_1,
          EChaosCollisionSortMethod param_2,TTransform<double> *param_3)

{
  FIdentityFunctor local_res18 [16];
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_2 == SortByHighestMass) {
    AlgoImpl::
    IntroSortInternal<FChaosCollisionEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosCollisionEventData,_FChaosCollisionEventFilter::SortEvents_::__l2::FSortCollisionByMassMaxToMin>_>
              ((FChaosCollisionEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               local_res18[0],(FSortCollisionByMassMaxToMin *)local_res18);
  }
  else {
    if (param_2 == SortByHighestSpeed) {
      AlgoImpl::
      IntroSortInternal<FChaosCollisionEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosCollisionEventData,_FChaosCollisionEventFilter::SortEvents_::__l2::FSortCollisionBySpeedMaxToMin>_>
                ((FChaosCollisionEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res18[0],(FSortCollisionBySpeedMaxToMin *)local_res18);
      return;
    }
    if (param_2 == SortByHighestImpulse) {
      AlgoImpl::
      IntroSortInternal<FChaosCollisionEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosCollisionEventData,_FChaosCollisionEventFilter::SortEvents_::__l2::FSortCollisionByHighestImpulse>_>
                ((FChaosCollisionEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res18[0],(FSortCollisionByHighestImpulse *)local_res18);
      return;
    }
    if (param_2 == SortByNearestFirst) {
      local_28 = (param_3->Translation).XY.m128d_f64[0];
      dStack_20 = (param_3->Translation).XY.m128d_f64[1];
      local_18 = (param_3->Translation).ZW.m128d_f64[0];
      AlgoImpl::
      IntroSortInternal<FChaosCollisionEventData,int,FIdentityFunctor,TDereferenceWrapper<FChaosCollisionEventData,_FChaosCollisionEventFilter::SortEvents_::__l2::FSortCollisionByNearestFirst>_>
                ((FChaosCollisionEventData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                 local_res18[0],(FSortCollisionByNearestFirst *)&local_28);
      return;
    }
  }
  return;
}

