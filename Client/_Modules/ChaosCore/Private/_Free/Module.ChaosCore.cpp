// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCore
// Functions: 44

// `dynamic_initializer_for_'CVarChaosAABBTransformISPCEnabled'' @ 140f4fba0

void __cdecl _dynamic_initializer_for__CVarChaosAABBTransformISPCEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosAABBTransformISPCEnabled,L"p.Chaos.AABBTransform.ISPC",
             &bChaos_AABBTransform_ISPC_Enabled,
             L"Whether to use ISPC optimizations when computing AABB transforms",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosAABBTransformISPCEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarChaosAABBTransformOptimized'' @ 140f4fbf0

void __cdecl _dynamic_initializer_for__CVarChaosAABBTransformOptimized__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarChaosAABBTransformOptimized,L"p.Chaos.AABBTransform.Optimized",
             &bChaos_AABBTransform_Optimized,L"Whether to use optimized AABB transform",0);
  atexit(_dynamic_atexit_destructor_for__CVarChaosAABBTransformOptimized__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantChaosCore'' @ 140f4fc40

void __cdecl _dynamic_initializer_for__ModuleRegistrantChaosCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ChaosCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ChaosCore",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FChaosCoreEngineModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14361f510

void * __thiscall
FChaosCoreEngineModule::_scalar_deleting_destructor_(FChaosCoreEngineModule *this,uint param_1)

{
  *this = (FChaosCoreEngineModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<<<3> @ 14361f550

FArchive * __cdecl Chaos::operator<<<3>(FArchive *param_1,TVector<float,3> *param_2)

{
  longlong *plVar1;
  uint local_res8 [2];
  
  local_res8[0] = *(uint *)param_2;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(uint *)param_2 = local_res8[0];
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = *(uint *)&param_2->field_0x4;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(uint *)&param_2->field_0x4 = local_res8[0];
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = *(uint *)&param_2->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(uint *)&param_2->field_0x8 = local_res8[0];
  return param_1;
}

// operator<<<3> @ 14361f6a0

FArchive * __cdecl Chaos::operator<<<3>(FArchive *param_1,TVector<double,3> *param_2)

{
  longlong *plVar1;
  float afStackX_8 [2];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  afStackX_8[0] = (float)*(double *)param_2;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,afStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)afStackX_8);
    }
  }
  else {
    afStackX_8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(double *)param_2 = (double)afStackX_8[0];
  plVar1 = *(longlong **)&param_1->field_0x8;
  afStackX_8[0] = (float)*(double *)&param_2->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,afStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)afStackX_8);
    }
  }
  else {
    afStackX_8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(double *)&param_2->field_0x8 = (double)afStackX_8[0];
  plVar1 = *(longlong **)&param_1->field_0x8;
  afStackX_8[0] = (float)*(double *)&param_2->field_0x10;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,afStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)afStackX_8);
    }
  }
  else {
    afStackX_8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(double *)&param_2->field_0x10 = (double)afStackX_8[0];
  return param_1;
}

// DefaultConstructItems<Chaos::TVector<float,3>,int> @ 14361f6b0

void __cdecl DefaultConstructItems<Chaos::TVector<float,3>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<Chaos::TVector<double,3>,int> @ 14361f6c0

void __cdecl DefaultConstructItems<Chaos::TVector<double,3>,int>(void *param_1,int param_2)

{
  return;
}

// HeapSortInternal<Chaos::Pair<float,Chaos::TVector<float,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,`Chaos::TAABB<float,3>::FindClosestPoint'::__l13::<lambda_1>_>_> @ 14361f6d0

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::Pair<float,Chaos::TVector<float,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,_Chaos::TAABB<float,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
          (Pair<float,Chaos::TVector<float,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,_public:_class_Chaos::TVector<float,3>___cdecl_Chaos::TAABB<float,3>::FindClosestPoint(Chaos::TVector<float,3>_const_&,float)const_::_13_::<lambda_1>_>
          param_4)

{
  Pair<float,Chaos::TVector<float,3>_> *pPVar1;
  Pair<float,Chaos::TVector<float,3>_> *pPVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  Pair<float,Chaos::TVector<float,3>_> *pPVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14361f7c3:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pPVar16 = param_1 + lVar13;
          do {
            uVar6 = *(undefined4 *)&(pPVar16->Second).field_0x0;
            uVar4 = *(undefined8 *)&(pPVar16->Second).field_0x4;
            iVar14 = 0;
            fVar7 = param_1->First;
            uVar8 = *(undefined4 *)&(param_1->Second).field_0x0;
            uVar5 = *(undefined8 *)&(param_1->Second).field_0x4;
            param_1->First = pPVar16->First;
            *(undefined4 *)&(param_1->Second).field_0x0 = uVar6;
            *(undefined8 *)&(param_1->Second).field_0x4 = uVar4;
            pPVar16->First = fVar7;
            *(undefined4 *)&(pPVar16->Second).field_0x0 = uVar8;
            *(undefined8 *)&(pPVar16->Second).field_0x4 = uVar5;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].First <= param_1[iVar10].First &&
                      param_1[iVar10].First != param_1[(longlong)iVar15 + 2].First) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (param_1[iVar10].First < param_1[iVar14].First ||
                    param_1[iVar10].First == param_1[iVar14].First) break;
                pPVar1 = param_1 + iVar14;
                fVar7 = pPVar1->First;
                uVar8 = *(undefined4 *)&(pPVar1->Second).field_0x0;
                uVar4 = *(undefined8 *)&(pPVar1->Second).field_0x4;
                pPVar1 = param_1 + iVar10;
                uVar6 = *(undefined4 *)&(pPVar1->Second).field_0x0;
                uVar5 = *(undefined8 *)&(pPVar1->Second).field_0x4;
                pPVar2 = param_1 + iVar14;
                pPVar2->First = pPVar1->First;
                *(undefined4 *)&(pPVar2->Second).field_0x0 = uVar6;
                *(undefined8 *)&(pPVar2->Second).field_0x4 = uVar5;
                pPVar1 = param_1 + iVar10;
                pPVar1->First = fVar7;
                *(undefined4 *)&(pPVar1->Second).field_0x0 = uVar8;
                *(undefined8 *)&(pPVar1->Second).field_0x4 = uVar4;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pPVar16 = pPVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].First <= param_1[iVar12].First &&
          param_1[iVar12].First != param_1[(longlong)iVar11 + 2].First) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].First < param_1[iVar10].First ||
        param_1[iVar12].First == param_1[iVar10].First) goto LAB_14361f7c3;
    pPVar16 = param_1 + iVar10;
    fVar7 = pPVar16->First;
    uVar8 = *(undefined4 *)&(pPVar16->Second).field_0x0;
    uVar4 = *(undefined8 *)&(pPVar16->Second).field_0x4;
    pPVar16 = param_1 + iVar12;
    uVar6 = *(undefined4 *)&(pPVar16->Second).field_0x0;
    uVar5 = *(undefined8 *)&(pPVar16->Second).field_0x4;
    pPVar1 = param_1 + iVar10;
    pPVar1->First = pPVar16->First;
    *(undefined4 *)&(pPVar1->Second).field_0x0 = uVar6;
    *(undefined8 *)&(pPVar1->Second).field_0x4 = uVar5;
    iVar11 = iVar12 * 2 + 1;
    pPVar16 = param_1 + iVar12;
    pPVar16->First = fVar7;
    *(undefined4 *)&(pPVar16->Second).field_0x0 = uVar8;
    *(undefined8 *)&(pPVar16->Second).field_0x4 = uVar4;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::TAABB<float,3>::FindClosestIntersectionImp'::__l2::<lambda_1>_>_> @ 14361f8a0

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<float,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_public:_struct_Chaos::Pair<Chaos::TVector<double,3>,bool>___cdecl_Chaos::TAABB<float,3>::FindClosestIntersectionImp(Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,double)const_::_2_::<lambda_1>_>
          param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  Pair<double,Chaos::TVector<double,3>_> *pPVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14361f9ad:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pPVar16 = param_1 + lVar13;
          do {
            uVar5 = *(undefined8 *)&pPVar16->Second;
            dVar4 = param_1->First;
            uVar6 = *(undefined8 *)&param_1->Second;
            uVar7 = *(undefined8 *)&(param_1->Second).field_0x8;
            uVar8 = *(undefined8 *)&(param_1->Second).field_0x10;
            param_1->First = pPVar16->First;
            *(undefined8 *)&param_1->Second = uVar5;
            uVar5 = *(undefined8 *)&(pPVar16->Second).field_0x10;
            *(undefined8 *)&(param_1->Second).field_0x8 =
                 *(undefined8 *)&(pPVar16->Second).field_0x8;
            *(undefined8 *)&(param_1->Second).field_0x10 = uVar5;
            pPVar16->First = dVar4;
            *(undefined8 *)&pPVar16->Second = uVar6;
            *(undefined8 *)&(pPVar16->Second).field_0x8 = uVar7;
            *(undefined8 *)&(pPVar16->Second).field_0x10 = uVar8;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].First <= param_1[iVar10].First &&
                      param_1[iVar10].First != param_1[(longlong)iVar15 + 2].First) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (param_1[iVar10].First < param_1[iVar14].First ||
                    param_1[iVar10].First == param_1[iVar14].First) break;
                dVar4 = param_1[iVar14].First;
                uVar5 = *(undefined8 *)&param_1[iVar14].Second;
                puVar1 = &param_1[iVar14].Second.field_0x8;
                uVar6 = *(undefined8 *)puVar1;
                uVar7 = *(undefined8 *)(puVar1 + 8);
                uVar8 = *(undefined8 *)&param_1[iVar10].Second;
                param_1[iVar14].First = param_1[iVar10].First;
                *(undefined8 *)&param_1[iVar14].Second = uVar8;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                uVar8 = *(undefined8 *)(puVar1 + 8);
                puVar2 = &param_1[iVar14].Second.field_0x8;
                *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
                *(undefined8 *)(puVar2 + 8) = uVar8;
                param_1[iVar10].First = dVar4;
                *(undefined8 *)&param_1[iVar10].Second = uVar5;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                *(undefined8 *)puVar1 = uVar6;
                *(undefined8 *)(puVar1 + 8) = uVar7;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pPVar16 = pPVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].First <= param_1[iVar12].First &&
          param_1[iVar12].First != param_1[(longlong)iVar11 + 2].First) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].First < param_1[iVar10].First ||
        param_1[iVar12].First == param_1[iVar10].First) goto LAB_14361f9ad;
    dVar4 = param_1[iVar10].First;
    uVar5 = *(undefined8 *)&param_1[iVar10].Second;
    puVar1 = &param_1[iVar10].Second.field_0x8;
    uVar6 = *(undefined8 *)puVar1;
    uVar7 = *(undefined8 *)(puVar1 + 8);
    uVar8 = *(undefined8 *)&param_1[iVar12].Second;
    param_1[iVar10].First = param_1[iVar12].First;
    *(undefined8 *)&param_1[iVar10].Second = uVar8;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    uVar8 = *(undefined8 *)(puVar1 + 8);
    puVar2 = &param_1[iVar10].Second.field_0x8;
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)(puVar2 + 8) = uVar8;
    iVar11 = iVar12 * 2 + 1;
    param_1[iVar12].First = dVar4;
    *(undefined8 *)&param_1[iVar12].Second = uVar5;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    *(undefined8 *)puVar1 = uVar6;
    *(undefined8 *)(puVar1 + 8) = uVar7;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::TAABB<double,3>::FindClosestIntersectionImp'::__l2::<lambda_1>_>_> @ 14361fac0

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_public:_struct_Chaos::Pair<Chaos::TVector<double,3>,bool>___cdecl_Chaos::TAABB<double,3>::FindClosestIntersectionImp(Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,double)const_::_2_::<lambda_1>_>
          param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  Pair<double,Chaos::TVector<double,3>_> *pPVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14361fbcd:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pPVar16 = param_1 + lVar13;
          do {
            uVar5 = *(undefined8 *)&pPVar16->Second;
            dVar4 = param_1->First;
            uVar6 = *(undefined8 *)&param_1->Second;
            uVar7 = *(undefined8 *)&(param_1->Second).field_0x8;
            uVar8 = *(undefined8 *)&(param_1->Second).field_0x10;
            param_1->First = pPVar16->First;
            *(undefined8 *)&param_1->Second = uVar5;
            uVar5 = *(undefined8 *)&(pPVar16->Second).field_0x10;
            *(undefined8 *)&(param_1->Second).field_0x8 =
                 *(undefined8 *)&(pPVar16->Second).field_0x8;
            *(undefined8 *)&(param_1->Second).field_0x10 = uVar5;
            pPVar16->First = dVar4;
            *(undefined8 *)&pPVar16->Second = uVar6;
            *(undefined8 *)&(pPVar16->Second).field_0x8 = uVar7;
            *(undefined8 *)&(pPVar16->Second).field_0x10 = uVar8;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].First <= param_1[iVar10].First &&
                      param_1[iVar10].First != param_1[(longlong)iVar15 + 2].First) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (param_1[iVar10].First < param_1[iVar14].First ||
                    param_1[iVar10].First == param_1[iVar14].First) break;
                dVar4 = param_1[iVar14].First;
                uVar5 = *(undefined8 *)&param_1[iVar14].Second;
                puVar1 = &param_1[iVar14].Second.field_0x8;
                uVar6 = *(undefined8 *)puVar1;
                uVar7 = *(undefined8 *)(puVar1 + 8);
                uVar8 = *(undefined8 *)&param_1[iVar10].Second;
                param_1[iVar14].First = param_1[iVar10].First;
                *(undefined8 *)&param_1[iVar14].Second = uVar8;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                uVar8 = *(undefined8 *)(puVar1 + 8);
                puVar2 = &param_1[iVar14].Second.field_0x8;
                *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
                *(undefined8 *)(puVar2 + 8) = uVar8;
                param_1[iVar10].First = dVar4;
                *(undefined8 *)&param_1[iVar10].Second = uVar5;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                *(undefined8 *)puVar1 = uVar6;
                *(undefined8 *)(puVar1 + 8) = uVar7;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pPVar16 = pPVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].First <= param_1[iVar12].First &&
          param_1[iVar12].First != param_1[(longlong)iVar11 + 2].First) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].First < param_1[iVar10].First ||
        param_1[iVar12].First == param_1[iVar10].First) goto LAB_14361fbcd;
    dVar4 = param_1[iVar10].First;
    uVar5 = *(undefined8 *)&param_1[iVar10].Second;
    puVar1 = &param_1[iVar10].Second.field_0x8;
    uVar6 = *(undefined8 *)puVar1;
    uVar7 = *(undefined8 *)(puVar1 + 8);
    uVar8 = *(undefined8 *)&param_1[iVar12].Second;
    param_1[iVar10].First = param_1[iVar12].First;
    *(undefined8 *)&param_1[iVar10].Second = uVar8;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    uVar8 = *(undefined8 *)(puVar1 + 8);
    puVar2 = &param_1[iVar10].Second.field_0x8;
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)(puVar2 + 8) = uVar8;
    iVar11 = iVar12 * 2 + 1;
    param_1[iVar12].First = dVar4;
    *(undefined8 *)&param_1[iVar12].Second = uVar5;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    *(undefined8 *)puVar1 = uVar6;
    *(undefined8 *)(puVar1 + 8) = uVar7;
    iVar10 = iVar12;
  } while( true );
}

// HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::TAABB<double,3>::FindClosestPoint'::__l13::<lambda_1>_>_> @ 14361fce0

void __cdecl
AlgoImpl::
HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TAABB<double,3>::FindClosestPoint(Chaos::TVector<double,3>_const_&,double)const_::_13_::<lambda_1>_>
          param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  Pair<double,Chaos::TVector<double,3>_> *pPVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14361fded:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pPVar16 = param_1 + lVar13;
          do {
            uVar5 = *(undefined8 *)&pPVar16->Second;
            dVar4 = param_1->First;
            uVar6 = *(undefined8 *)&param_1->Second;
            uVar7 = *(undefined8 *)&(param_1->Second).field_0x8;
            uVar8 = *(undefined8 *)&(param_1->Second).field_0x10;
            param_1->First = pPVar16->First;
            *(undefined8 *)&param_1->Second = uVar5;
            uVar5 = *(undefined8 *)&(pPVar16->Second).field_0x10;
            *(undefined8 *)&(param_1->Second).field_0x8 =
                 *(undefined8 *)&(pPVar16->Second).field_0x8;
            *(undefined8 *)&(param_1->Second).field_0x10 = uVar5;
            pPVar16->First = dVar4;
            *(undefined8 *)&pPVar16->Second = uVar6;
            *(undefined8 *)&(pPVar16->Second).field_0x8 = uVar7;
            *(undefined8 *)&(pPVar16->Second).field_0x10 = uVar8;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar10 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (param_1[(longlong)iVar15 + 2].First <= param_1[iVar10].First &&
                      param_1[iVar10].First != param_1[(longlong)iVar15 + 2].First) {
                    iVar10 = iVar15;
                  }
                  iVar10 = iVar10 + 1;
                }
                if (param_1[iVar10].First < param_1[iVar14].First ||
                    param_1[iVar10].First == param_1[iVar14].First) break;
                dVar4 = param_1[iVar14].First;
                uVar5 = *(undefined8 *)&param_1[iVar14].Second;
                puVar1 = &param_1[iVar14].Second.field_0x8;
                uVar6 = *(undefined8 *)puVar1;
                uVar7 = *(undefined8 *)(puVar1 + 8);
                uVar8 = *(undefined8 *)&param_1[iVar10].Second;
                param_1[iVar14].First = param_1[iVar10].First;
                *(undefined8 *)&param_1[iVar14].Second = uVar8;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                uVar8 = *(undefined8 *)(puVar1 + 8);
                puVar2 = &param_1[iVar14].Second.field_0x8;
                *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
                *(undefined8 *)(puVar2 + 8) = uVar8;
                param_1[iVar10].First = dVar4;
                *(undefined8 *)&param_1[iVar10].Second = uVar5;
                puVar1 = &param_1[iVar10].Second.field_0x8;
                *(undefined8 *)puVar1 = uVar6;
                *(undefined8 *)(puVar1 + 8) = uVar7;
                iVar14 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pPVar16 = pPVar16 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].First <= param_1[iVar12].First &&
          param_1[iVar12].First != param_1[(longlong)iVar11 + 2].First) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    if (param_1[iVar12].First < param_1[iVar10].First ||
        param_1[iVar12].First == param_1[iVar10].First) goto LAB_14361fded;
    dVar4 = param_1[iVar10].First;
    uVar5 = *(undefined8 *)&param_1[iVar10].Second;
    puVar1 = &param_1[iVar10].Second.field_0x8;
    uVar6 = *(undefined8 *)puVar1;
    uVar7 = *(undefined8 *)(puVar1 + 8);
    uVar8 = *(undefined8 *)&param_1[iVar12].Second;
    param_1[iVar10].First = param_1[iVar12].First;
    *(undefined8 *)&param_1[iVar10].Second = uVar8;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    uVar8 = *(undefined8 *)(puVar1 + 8);
    puVar2 = &param_1[iVar10].Second.field_0x8;
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)(puVar2 + 8) = uVar8;
    iVar11 = iVar12 * 2 + 1;
    param_1[iVar12].First = dVar4;
    *(undefined8 *)&param_1[iVar12].Second = uVar5;
    puVar1 = &param_1[iVar12].Second.field_0x8;
    *(undefined8 *)puVar1 = uVar6;
    *(undefined8 *)(puVar1 + 8) = uVar7;
    iVar10 = iVar12;
  } while( true );
}

// IntroSortInternal<Chaos::Pair<float,Chaos::TVector<float,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,`Chaos::TAABB<float,3>::FindClosestPoint'::__l13::<lambda_1>_>_> @ 14361ff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::Pair<float,Chaos::TVector<float,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,_Chaos::TAABB<float,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
          (Pair<float,Chaos::TVector<float,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,_public:_class_Chaos::TVector<float,3>___cdecl_Chaos::TAABB<float,3>::FindClosestPoint(Chaos::TVector<float,3>_const_&,float)const_::_13_::<lambda_1>_>
          param_4)

{
  Pair<float,Chaos::TVector<float,3>_> *pPVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  Pair<float,Chaos::TVector<float,3>_> *pPVar7;
  Pair<float,Chaos::TVector<float,3>_> *pPVar8;
  Pair<float,Chaos::TVector<float,3>_> *pPVar9;
  Pair<float,Chaos::TVector<float,3>_> **ppPVar10;
  Pair<float,Chaos::TVector<float,3>_> *pPVar11;
  Pair<float,Chaos::TVector<float,3>_> *pPVar12;
  Pair<float,Chaos::TVector<float,3>_> *pPVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  Pair<float,Chaos::TVector<float,3>_> *local_338;
  Pair<float,Chaos::TVector<float,3>_> *local_328;
  Pair<float,Chaos::TVector<float,3>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar14;
    memset(local_310,0,0x2e8);
    ppPVar10 = &local_328;
    do {
      pPVar12 = ppPVar10[1];
      pPVar7 = *ppPVar10;
      pPVar1 = ppPVar10[2];
      iVar6 = (int)((longlong)pPVar12 - (longlong)pPVar7 >> 4) + 1;
      local_338._0_4_ = (int)pPVar1;
      pPVar13 = pPVar7;
      if ((int)local_338 != 0) {
LAB_14361ffb0:
        if (8 < iVar6) {
          uVar4 = *(undefined4 *)&(pPVar13->Second).field_0x0;
          uVar2 = *(undefined8 *)&(pPVar13->Second).field_0x4;
          pPVar9 = pPVar12 + 1;
          pPVar7 = pPVar13 + iVar6 / 2;
          fVar14 = pPVar7->First;
          uVar5 = *(undefined4 *)&(pPVar7->Second).field_0x0;
          uVar3 = *(undefined8 *)&(pPVar7->Second).field_0x4;
          pPVar7 = pPVar13 + iVar6 / 2;
          pPVar7->First = pPVar13->First;
          *(undefined4 *)&(pPVar7->Second).field_0x0 = uVar4;
          *(undefined8 *)&(pPVar7->Second).field_0x4 = uVar2;
          pPVar13->First = fVar14;
          *(undefined4 *)&(pPVar13->Second).field_0x0 = uVar5;
          *(undefined8 *)&(pPVar13->Second).field_0x4 = uVar3;
          pPVar7 = pPVar13;
LAB_14361ffe0:
          pPVar8 = pPVar7;
          pPVar7 = pPVar8 + 1;
          if (pPVar7 <= pPVar12) goto code_r0x00014361ffe9;
          goto LAB_14361fff3;
        }
        if (pPVar13 < pPVar12) {
          pPVar1 = pPVar13 + 1;
          do {
            pPVar7 = pPVar13;
            if (pPVar1 <= pPVar12) {
              pPVar9 = pPVar1;
              if (0x3f < ((longlong)pPVar12 + (0x10 - (longlong)pPVar1) & 0xfffffffffffffff0U)) {
                do {
                  fVar14 = pPVar7->First;
                  if (pPVar7->First < pPVar9->First) {
                    pPVar7 = pPVar9;
                    fVar14 = pPVar9->First;
                  }
                  if (fVar14 < pPVar9[1].First) {
                    pPVar7 = pPVar9 + 1;
                  }
                  fVar14 = pPVar7->First;
                  if (pPVar7->First < pPVar9[2].First) {
                    pPVar7 = pPVar9 + 2;
                    fVar14 = pPVar9[2].First;
                  }
                  if (fVar14 < pPVar9[3].First) {
                    pPVar7 = pPVar9 + 3;
                  }
                  pPVar9 = pPVar9 + 4;
                } while (pPVar9 <= pPVar12 + -3);
              }
              for (; pPVar9 <= pPVar12; pPVar9 = pPVar9 + 1) {
                if (pPVar7->First < pPVar9->First) {
                  pPVar7 = pPVar9;
                }
              }
            }
            fVar14 = pPVar7->First;
            uVar5 = *(undefined4 *)&(pPVar7->Second).field_0x0;
            uVar2 = *(undefined8 *)&(pPVar7->Second).field_0x4;
            pPVar9 = pPVar12 + -1;
            uVar4 = *(undefined4 *)&(pPVar12->Second).field_0x0;
            uVar3 = *(undefined8 *)&(pPVar12->Second).field_0x4;
            pPVar7->First = pPVar12->First;
            *(undefined4 *)&(pPVar7->Second).field_0x0 = uVar4;
            *(undefined8 *)&(pPVar7->Second).field_0x4 = uVar3;
            pPVar12->First = fVar14;
            *(undefined4 *)&(pPVar12->Second).field_0x0 = uVar5;
            *(undefined8 *)&(pPVar12->Second).field_0x4 = uVar2;
            pPVar12 = pPVar9;
          } while (pPVar13 < pPVar9);
        }
        goto LAB_1436200b5;
      }
LAB_1436200a4:
      local_338 = pPVar1;
      HeapSortInternal<Chaos::Pair<float,Chaos::TVector<float,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<float,Chaos::TVector<float,3>_>,_Chaos::TAABB<float,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
                (pPVar7,iVar6,param_3,param_4);
LAB_1436200b5:
      ppPVar10 = ppPVar10 + -3;
    } while (&local_328 <= ppPVar10);
  }
  return;
code_r0x00014361ffe9:
  if (pPVar7->First < pPVar13->First || pPVar7->First == pPVar13->First) goto LAB_14361ffe0;
LAB_14361fff3:
  do {
    pPVar11 = pPVar9;
    pPVar9 = pPVar11 + -1;
    if (pPVar9 <= pPVar13) break;
  } while (pPVar13->First < pPVar9->First || pPVar13->First == pPVar9->First);
  uVar2 = *(undefined8 *)&pPVar11[-1].Second.field_0x4;
  if (pPVar7 <= pPVar9) {
    fVar14 = pPVar7->First;
    uVar4 = *(undefined4 *)&(pPVar7->Second).field_0x0;
    uVar3 = *(undefined8 *)&pPVar8[1].Second.field_0x4;
    *(undefined8 *)pPVar7 = *(undefined8 *)pPVar9;
    *(undefined8 *)&pPVar8[1].Second.field_0x4 = uVar2;
    pPVar9->First = fVar14;
    *(undefined4 *)&(pPVar9->Second).field_0x0 = uVar4;
    *(undefined8 *)&pPVar11[-1].Second.field_0x4 = uVar3;
    goto LAB_14361ffe0;
  }
  fVar14 = pPVar13->First;
  uVar4 = *(undefined4 *)&(pPVar13->Second).field_0x0;
  uVar3 = *(undefined8 *)&(pPVar13->Second).field_0x4;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pPVar13 = *(undefined8 *)pPVar9;
  *(undefined8 *)&(pPVar13->Second).field_0x4 = uVar2;
  pPVar9->First = fVar14;
  *(undefined4 *)&(pPVar9->Second).field_0x0 = uVar4;
  *(undefined8 *)&pPVar11[-1].Second.field_0x4 = uVar3;
  if ((longlong)((longlong)pPVar9 + (-0x10 - (longlong)pPVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pPVar12 - (longlong)pPVar7 & 0xfffffffffffffff0U)) {
    if (pPVar7 < pPVar12) {
      *ppPVar10 = pPVar7;
      ppPVar10[1] = pPVar12;
      *(int *)(ppPVar10 + 2) = (int)local_338;
      ppPVar10 = ppPVar10 + 3;
    }
    if (pPVar9 <= pPVar13 + 1) goto LAB_1436200b5;
    pPVar12 = pPVar11 + -2;
    pPVar7 = pPVar13;
  }
  else {
    if (pPVar13 + 1 < pPVar9) {
      *ppPVar10 = pPVar13;
      ppPVar10[1] = pPVar11 + -2;
      *(int *)(ppPVar10 + 2) = (int)local_338;
      ppPVar10 = ppPVar10 + 3;
    }
    if (pPVar12 <= pPVar7) goto LAB_1436200b5;
  }
  iVar6 = (int)((longlong)pPVar12 - (longlong)pPVar7 >> 4) + 1;
  pPVar13 = pPVar7;
  if ((int)local_338 == 0) goto LAB_1436200a4;
  goto LAB_14361ffb0;
}

// IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::TAABB<float,3>::FindClosestIntersectionImp'::__l2::<lambda_1>_>_> @ 1436201a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<float,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_public:_struct_Chaos::Pair<Chaos::TVector<double,3>,bool>___cdecl_Chaos::TAABB<float,3>::FindClosestIntersectionImp(Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,double)const_::_2_::<lambda_1>_>
          param_4)

{
  Pair<double,Chaos::TVector<double,3>_> *pPVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  Pair<double,Chaos::TVector<double,3>_> *pPVar8;
  Pair<double,Chaos::TVector<double,3>_> *pPVar9;
  Pair<double,Chaos::TVector<double,3>_> *pPVar10;
  Pair<double,Chaos::TVector<double,3>_> **ppPVar11;
  Pair<double,Chaos::TVector<double,3>_> *pPVar12;
  Pair<double,Chaos::TVector<double,3>_> *pPVar13;
  Pair<double,Chaos::TVector<double,3>_> *pPVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  Pair<double,Chaos::TVector<double,3>_> *local_338;
  Pair<double,Chaos::TVector<double,3>_> *local_328;
  Pair<double,Chaos::TVector<double,3>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppPVar11 = &local_328;
    do {
      pPVar13 = ppPVar11[1];
      pPVar8 = *ppPVar11;
      pPVar1 = ppPVar11[2];
      iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
      local_338._0_4_ = (int)pPVar1;
      pPVar14 = pPVar8;
      if ((int)local_338 != 0) {
LAB_143620250:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)&pPVar14->Second;
          pPVar10 = pPVar13 + 1;
          pPVar8 = pPVar14 + iVar7 / 2;
          dVar2 = pPVar8->First;
          uVar4 = *(undefined8 *)&pPVar8->Second;
          uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x8;
          uVar6 = *(undefined8 *)&(pPVar8->Second).field_0x10;
          pPVar8->First = pPVar14->First;
          *(undefined8 *)&pPVar8->Second = uVar3;
          uVar3 = *(undefined8 *)&(pPVar14->Second).field_0x10;
          *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar14->Second).field_0x8;
          *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar3;
          pPVar14->First = dVar2;
          *(undefined8 *)&pPVar14->Second = uVar4;
          *(undefined8 *)&(pPVar14->Second).field_0x8 = uVar5;
          *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar6;
          pPVar8 = pPVar14;
LAB_143620290:
          pPVar9 = pPVar8;
          pPVar8 = pPVar9 + 1;
          if (pPVar8 <= pPVar13) goto code_r0x000143620299;
          goto LAB_1436202a4;
        }
        if (pPVar14 < pPVar13) {
          pPVar1 = pPVar14 + 1;
          do {
            pPVar8 = pPVar14;
            if (pPVar1 <= pPVar13) {
              pPVar10 = pPVar1;
              if (0x7f < ((longlong)pPVar13 + (0x20 - (longlong)pPVar1) & 0xffffffffffffffe0U)) {
                do {
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10->First) {
                    pPVar8 = pPVar10;
                    dVar2 = pPVar10->First;
                  }
                  if (dVar2 < pPVar10[1].First) {
                    pPVar8 = pPVar10 + 1;
                  }
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10[2].First) {
                    pPVar8 = pPVar10 + 2;
                    dVar2 = pPVar10[2].First;
                  }
                  if (dVar2 < pPVar10[3].First) {
                    pPVar8 = pPVar10 + 3;
                  }
                  pPVar10 = pPVar10 + 4;
                } while (pPVar10 <= pPVar13 + -3);
              }
              for (; pPVar10 <= pPVar13; pPVar10 = pPVar10 + 1) {
                if (pPVar8->First < pPVar10->First) {
                  pPVar8 = pPVar10;
                }
              }
            }
            dVar2 = pPVar8->First;
            uVar3 = *(undefined8 *)&pPVar8->Second;
            pPVar10 = pPVar13 + -1;
            uVar4 = *(undefined8 *)&(pPVar8->Second).field_0x8;
            uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x10;
            uVar6 = *(undefined8 *)&pPVar13->Second;
            pPVar8->First = pPVar13->First;
            *(undefined8 *)&pPVar8->Second = uVar6;
            uVar6 = *(undefined8 *)&(pPVar13->Second).field_0x10;
            *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar13->Second).field_0x8
            ;
            *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar6;
            pPVar13->First = dVar2;
            *(undefined8 *)&pPVar13->Second = uVar3;
            *(undefined8 *)&(pPVar13->Second).field_0x8 = uVar4;
            *(undefined8 *)&(pPVar13->Second).field_0x10 = uVar5;
            pPVar13 = pPVar10;
          } while (pPVar14 < pPVar10);
        }
        goto LAB_14362038d;
      }
LAB_14362037c:
      local_338 = pPVar1;
      HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<float,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
                (pPVar8,iVar7,param_3,param_4);
LAB_14362038d:
      ppPVar11 = ppPVar11 + -3;
    } while (&local_328 <= ppPVar11);
  }
  return;
code_r0x000143620299:
  if (pPVar8->First < pPVar14->First || pPVar8->First == pPVar14->First) goto LAB_143620290;
LAB_1436202a4:
  do {
    pPVar12 = pPVar10;
    pPVar10 = pPVar12 + -1;
    if (pPVar10 <= pPVar14) break;
  } while (pPVar14->First < pPVar10->First || pPVar14->First == pPVar10->First);
  uVar3 = *(undefined8 *)&pPVar12[-1].Second;
  if (pPVar8 <= pPVar10) {
    dVar2 = pPVar8->First;
    uVar4 = *(undefined8 *)&pPVar9[1].Second;
    uVar5 = *(undefined8 *)&pPVar9[1].Second.field_0x8;
    uVar6 = *(undefined8 *)&pPVar9[1].Second.field_0x10;
    pPVar8->First = pPVar10->First;
    *(undefined8 *)&pPVar9[1].Second = uVar3;
    uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
    *(undefined8 *)&pPVar9[1].Second.field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
    *(undefined8 *)&pPVar9[1].Second.field_0x10 = uVar3;
    pPVar10->First = dVar2;
    *(undefined8 *)&pPVar12[-1].Second = uVar4;
    *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
    *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
    goto LAB_143620290;
  }
  dVar2 = pPVar14->First;
  uVar4 = *(undefined8 *)&pPVar14->Second;
  uVar5 = *(undefined8 *)&(pPVar14->Second).field_0x8;
  uVar6 = *(undefined8 *)&(pPVar14->Second).field_0x10;
  pPVar14->First = pPVar10->First;
  *(undefined8 *)&pPVar14->Second = uVar3;
  local_338._0_4_ = (int)local_338 + -1;
  uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
  *(undefined8 *)&(pPVar14->Second).field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
  *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar3;
  pPVar10->First = dVar2;
  *(undefined8 *)&pPVar12[-1].Second = uVar4;
  *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
  *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
  if ((longlong)((longlong)pPVar10 + (-0x20 - (longlong)pPVar14) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pPVar13 - (longlong)pPVar8 & 0xffffffffffffffe0U)) {
    if (pPVar8 < pPVar13) {
      *ppPVar11 = pPVar8;
      ppPVar11[1] = pPVar13;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar10 <= pPVar14 + 1) goto LAB_14362038d;
    pPVar13 = pPVar12 + -2;
    pPVar8 = pPVar14;
  }
  else {
    if (pPVar14 + 1 < pPVar10) {
      *ppPVar11 = pPVar14;
      ppPVar11[1] = pPVar12 + -2;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar13 <= pPVar8) goto LAB_14362038d;
  }
  iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
  pPVar14 = pPVar8;
  if ((int)local_338 == 0) goto LAB_14362037c;
  goto LAB_143620250;
}

// IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::TAABB<double,3>::FindClosestIntersectionImp'::__l2::<lambda_1>_>_> @ 1436204b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_public:_struct_Chaos::Pair<Chaos::TVector<double,3>,bool>___cdecl_Chaos::TAABB<double,3>::FindClosestIntersectionImp(Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,double)const_::_2_::<lambda_1>_>
          param_4)

{
  Pair<double,Chaos::TVector<double,3>_> *pPVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  Pair<double,Chaos::TVector<double,3>_> *pPVar8;
  Pair<double,Chaos::TVector<double,3>_> *pPVar9;
  Pair<double,Chaos::TVector<double,3>_> *pPVar10;
  Pair<double,Chaos::TVector<double,3>_> **ppPVar11;
  Pair<double,Chaos::TVector<double,3>_> *pPVar12;
  Pair<double,Chaos::TVector<double,3>_> *pPVar13;
  Pair<double,Chaos::TVector<double,3>_> *pPVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  Pair<double,Chaos::TVector<double,3>_> *local_338;
  Pair<double,Chaos::TVector<double,3>_> *local_328;
  Pair<double,Chaos::TVector<double,3>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppPVar11 = &local_328;
    do {
      pPVar13 = ppPVar11[1];
      pPVar8 = *ppPVar11;
      pPVar1 = ppPVar11[2];
      iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
      local_338._0_4_ = (int)pPVar1;
      pPVar14 = pPVar8;
      if ((int)local_338 != 0) {
LAB_143620560:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)&pPVar14->Second;
          pPVar10 = pPVar13 + 1;
          pPVar8 = pPVar14 + iVar7 / 2;
          dVar2 = pPVar8->First;
          uVar4 = *(undefined8 *)&pPVar8->Second;
          uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x8;
          uVar6 = *(undefined8 *)&(pPVar8->Second).field_0x10;
          pPVar8->First = pPVar14->First;
          *(undefined8 *)&pPVar8->Second = uVar3;
          uVar3 = *(undefined8 *)&(pPVar14->Second).field_0x10;
          *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar14->Second).field_0x8;
          *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar3;
          pPVar14->First = dVar2;
          *(undefined8 *)&pPVar14->Second = uVar4;
          *(undefined8 *)&(pPVar14->Second).field_0x8 = uVar5;
          *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar6;
          pPVar8 = pPVar14;
LAB_1436205a0:
          pPVar9 = pPVar8;
          pPVar8 = pPVar9 + 1;
          if (pPVar8 <= pPVar13) goto code_r0x0001436205a9;
          goto LAB_1436205b4;
        }
        if (pPVar14 < pPVar13) {
          pPVar1 = pPVar14 + 1;
          do {
            pPVar8 = pPVar14;
            if (pPVar1 <= pPVar13) {
              pPVar10 = pPVar1;
              if (0x7f < ((longlong)pPVar13 + (0x20 - (longlong)pPVar1) & 0xffffffffffffffe0U)) {
                do {
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10->First) {
                    pPVar8 = pPVar10;
                    dVar2 = pPVar10->First;
                  }
                  if (dVar2 < pPVar10[1].First) {
                    pPVar8 = pPVar10 + 1;
                  }
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10[2].First) {
                    pPVar8 = pPVar10 + 2;
                    dVar2 = pPVar10[2].First;
                  }
                  if (dVar2 < pPVar10[3].First) {
                    pPVar8 = pPVar10 + 3;
                  }
                  pPVar10 = pPVar10 + 4;
                } while (pPVar10 <= pPVar13 + -3);
              }
              for (; pPVar10 <= pPVar13; pPVar10 = pPVar10 + 1) {
                if (pPVar8->First < pPVar10->First) {
                  pPVar8 = pPVar10;
                }
              }
            }
            dVar2 = pPVar8->First;
            uVar3 = *(undefined8 *)&pPVar8->Second;
            pPVar10 = pPVar13 + -1;
            uVar4 = *(undefined8 *)&(pPVar8->Second).field_0x8;
            uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x10;
            uVar6 = *(undefined8 *)&pPVar13->Second;
            pPVar8->First = pPVar13->First;
            *(undefined8 *)&pPVar8->Second = uVar6;
            uVar6 = *(undefined8 *)&(pPVar13->Second).field_0x10;
            *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar13->Second).field_0x8
            ;
            *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar6;
            pPVar13->First = dVar2;
            *(undefined8 *)&pPVar13->Second = uVar3;
            *(undefined8 *)&(pPVar13->Second).field_0x8 = uVar4;
            *(undefined8 *)&(pPVar13->Second).field_0x10 = uVar5;
            pPVar13 = pPVar10;
          } while (pPVar14 < pPVar10);
        }
        goto LAB_14362069d;
      }
LAB_14362068c:
      local_338 = pPVar1;
      HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestIntersectionImp_::__l2::<lambda_1>_>_>
                (pPVar8,iVar7,param_3,param_4);
LAB_14362069d:
      ppPVar11 = ppPVar11 + -3;
    } while (&local_328 <= ppPVar11);
  }
  return;
code_r0x0001436205a9:
  if (pPVar8->First < pPVar14->First || pPVar8->First == pPVar14->First) goto LAB_1436205a0;
LAB_1436205b4:
  do {
    pPVar12 = pPVar10;
    pPVar10 = pPVar12 + -1;
    if (pPVar10 <= pPVar14) break;
  } while (pPVar14->First < pPVar10->First || pPVar14->First == pPVar10->First);
  uVar3 = *(undefined8 *)&pPVar12[-1].Second;
  if (pPVar8 <= pPVar10) {
    dVar2 = pPVar8->First;
    uVar4 = *(undefined8 *)&pPVar9[1].Second;
    uVar5 = *(undefined8 *)&pPVar9[1].Second.field_0x8;
    uVar6 = *(undefined8 *)&pPVar9[1].Second.field_0x10;
    pPVar8->First = pPVar10->First;
    *(undefined8 *)&pPVar9[1].Second = uVar3;
    uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
    *(undefined8 *)&pPVar9[1].Second.field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
    *(undefined8 *)&pPVar9[1].Second.field_0x10 = uVar3;
    pPVar10->First = dVar2;
    *(undefined8 *)&pPVar12[-1].Second = uVar4;
    *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
    *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
    goto LAB_1436205a0;
  }
  dVar2 = pPVar14->First;
  uVar4 = *(undefined8 *)&pPVar14->Second;
  uVar5 = *(undefined8 *)&(pPVar14->Second).field_0x8;
  uVar6 = *(undefined8 *)&(pPVar14->Second).field_0x10;
  pPVar14->First = pPVar10->First;
  *(undefined8 *)&pPVar14->Second = uVar3;
  local_338._0_4_ = (int)local_338 + -1;
  uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
  *(undefined8 *)&(pPVar14->Second).field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
  *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar3;
  pPVar10->First = dVar2;
  *(undefined8 *)&pPVar12[-1].Second = uVar4;
  *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
  *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
  if ((longlong)((longlong)pPVar10 + (-0x20 - (longlong)pPVar14) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pPVar13 - (longlong)pPVar8 & 0xffffffffffffffe0U)) {
    if (pPVar8 < pPVar13) {
      *ppPVar11 = pPVar8;
      ppPVar11[1] = pPVar13;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar10 <= pPVar14 + 1) goto LAB_14362069d;
    pPVar13 = pPVar12 + -2;
    pPVar8 = pPVar14;
  }
  else {
    if (pPVar14 + 1 < pPVar10) {
      *ppPVar11 = pPVar14;
      ppPVar11[1] = pPVar12 + -2;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar13 <= pPVar8) goto LAB_14362069d;
  }
  iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
  pPVar14 = pPVar8;
  if ((int)local_338 == 0) goto LAB_14362068c;
  goto LAB_143620560;
}

// IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,`Chaos::TAABB<double,3>::FindClosestPoint'::__l13::<lambda_1>_>_> @ 1436207c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
          (Pair<double,Chaos::TVector<double,3>_> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_public:_class_Chaos::TVector<double,3>___cdecl_Chaos::TAABB<double,3>::FindClosestPoint(Chaos::TVector<double,3>_const_&,double)const_::_13_::<lambda_1>_>
          param_4)

{
  Pair<double,Chaos::TVector<double,3>_> *pPVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  Pair<double,Chaos::TVector<double,3>_> *pPVar8;
  Pair<double,Chaos::TVector<double,3>_> *pPVar9;
  Pair<double,Chaos::TVector<double,3>_> *pPVar10;
  Pair<double,Chaos::TVector<double,3>_> **ppPVar11;
  Pair<double,Chaos::TVector<double,3>_> *pPVar12;
  Pair<double,Chaos::TVector<double,3>_> *pPVar13;
  Pair<double,Chaos::TVector<double,3>_> *pPVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  Pair<double,Chaos::TVector<double,3>_> *local_338;
  Pair<double,Chaos::TVector<double,3>_> *local_328;
  Pair<double,Chaos::TVector<double,3>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppPVar11 = &local_328;
    do {
      pPVar13 = ppPVar11[1];
      pPVar8 = *ppPVar11;
      pPVar1 = ppPVar11[2];
      iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
      local_338._0_4_ = (int)pPVar1;
      pPVar14 = pPVar8;
      if ((int)local_338 != 0) {
LAB_143620870:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)&pPVar14->Second;
          pPVar10 = pPVar13 + 1;
          pPVar8 = pPVar14 + iVar7 / 2;
          dVar2 = pPVar8->First;
          uVar4 = *(undefined8 *)&pPVar8->Second;
          uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x8;
          uVar6 = *(undefined8 *)&(pPVar8->Second).field_0x10;
          pPVar8->First = pPVar14->First;
          *(undefined8 *)&pPVar8->Second = uVar3;
          uVar3 = *(undefined8 *)&(pPVar14->Second).field_0x10;
          *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar14->Second).field_0x8;
          *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar3;
          pPVar14->First = dVar2;
          *(undefined8 *)&pPVar14->Second = uVar4;
          *(undefined8 *)&(pPVar14->Second).field_0x8 = uVar5;
          *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar6;
          pPVar8 = pPVar14;
LAB_1436208b0:
          pPVar9 = pPVar8;
          pPVar8 = pPVar9 + 1;
          if (pPVar8 <= pPVar13) goto code_r0x0001436208b9;
          goto LAB_1436208c4;
        }
        if (pPVar14 < pPVar13) {
          pPVar1 = pPVar14 + 1;
          do {
            pPVar8 = pPVar14;
            if (pPVar1 <= pPVar13) {
              pPVar10 = pPVar1;
              if (0x7f < ((longlong)pPVar13 + (0x20 - (longlong)pPVar1) & 0xffffffffffffffe0U)) {
                do {
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10->First) {
                    pPVar8 = pPVar10;
                    dVar2 = pPVar10->First;
                  }
                  if (dVar2 < pPVar10[1].First) {
                    pPVar8 = pPVar10 + 1;
                  }
                  dVar2 = pPVar8->First;
                  if (pPVar8->First < pPVar10[2].First) {
                    pPVar8 = pPVar10 + 2;
                    dVar2 = pPVar10[2].First;
                  }
                  if (dVar2 < pPVar10[3].First) {
                    pPVar8 = pPVar10 + 3;
                  }
                  pPVar10 = pPVar10 + 4;
                } while (pPVar10 <= pPVar13 + -3);
              }
              for (; pPVar10 <= pPVar13; pPVar10 = pPVar10 + 1) {
                if (pPVar8->First < pPVar10->First) {
                  pPVar8 = pPVar10;
                }
              }
            }
            dVar2 = pPVar8->First;
            uVar3 = *(undefined8 *)&pPVar8->Second;
            pPVar10 = pPVar13 + -1;
            uVar4 = *(undefined8 *)&(pPVar8->Second).field_0x8;
            uVar5 = *(undefined8 *)&(pPVar8->Second).field_0x10;
            uVar6 = *(undefined8 *)&pPVar13->Second;
            pPVar8->First = pPVar13->First;
            *(undefined8 *)&pPVar8->Second = uVar6;
            uVar6 = *(undefined8 *)&(pPVar13->Second).field_0x10;
            *(undefined8 *)&(pPVar8->Second).field_0x8 = *(undefined8 *)&(pPVar13->Second).field_0x8
            ;
            *(undefined8 *)&(pPVar8->Second).field_0x10 = uVar6;
            pPVar13->First = dVar2;
            *(undefined8 *)&pPVar13->Second = uVar3;
            *(undefined8 *)&(pPVar13->Second).field_0x8 = uVar4;
            *(undefined8 *)&(pPVar13->Second).field_0x10 = uVar5;
            pPVar13 = pPVar10;
          } while (pPVar14 < pPVar10);
        }
        goto LAB_1436209ad;
      }
LAB_14362099c:
      local_338 = pPVar1;
      HeapSortInternal<Chaos::Pair<double,Chaos::TVector<double,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double,Chaos::TVector<double,3>_>,_Chaos::TAABB<double,3>::FindClosestPoint_::__l13::<lambda_1>_>_>
                (pPVar8,iVar7,param_3,param_4);
LAB_1436209ad:
      ppPVar11 = ppPVar11 + -3;
    } while (&local_328 <= ppPVar11);
  }
  return;
code_r0x0001436208b9:
  if (pPVar8->First < pPVar14->First || pPVar8->First == pPVar14->First) goto LAB_1436208b0;
LAB_1436208c4:
  do {
    pPVar12 = pPVar10;
    pPVar10 = pPVar12 + -1;
    if (pPVar10 <= pPVar14) break;
  } while (pPVar14->First < pPVar10->First || pPVar14->First == pPVar10->First);
  uVar3 = *(undefined8 *)&pPVar12[-1].Second;
  if (pPVar8 <= pPVar10) {
    dVar2 = pPVar8->First;
    uVar4 = *(undefined8 *)&pPVar9[1].Second;
    uVar5 = *(undefined8 *)&pPVar9[1].Second.field_0x8;
    uVar6 = *(undefined8 *)&pPVar9[1].Second.field_0x10;
    pPVar8->First = pPVar10->First;
    *(undefined8 *)&pPVar9[1].Second = uVar3;
    uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
    *(undefined8 *)&pPVar9[1].Second.field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
    *(undefined8 *)&pPVar9[1].Second.field_0x10 = uVar3;
    pPVar10->First = dVar2;
    *(undefined8 *)&pPVar12[-1].Second = uVar4;
    *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
    *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
    goto LAB_1436208b0;
  }
  dVar2 = pPVar14->First;
  uVar4 = *(undefined8 *)&pPVar14->Second;
  uVar5 = *(undefined8 *)&(pPVar14->Second).field_0x8;
  uVar6 = *(undefined8 *)&(pPVar14->Second).field_0x10;
  pPVar14->First = pPVar10->First;
  *(undefined8 *)&pPVar14->Second = uVar3;
  local_338._0_4_ = (int)local_338 + -1;
  uVar3 = *(undefined8 *)&pPVar12[-1].Second.field_0x10;
  *(undefined8 *)&(pPVar14->Second).field_0x8 = *(undefined8 *)&pPVar12[-1].Second.field_0x8;
  *(undefined8 *)&(pPVar14->Second).field_0x10 = uVar3;
  pPVar10->First = dVar2;
  *(undefined8 *)&pPVar12[-1].Second = uVar4;
  *(undefined8 *)&pPVar12[-1].Second.field_0x8 = uVar5;
  *(undefined8 *)&pPVar12[-1].Second.field_0x10 = uVar6;
  if ((longlong)((longlong)pPVar10 + (-0x20 - (longlong)pPVar14) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pPVar13 - (longlong)pPVar8 & 0xffffffffffffffe0U)) {
    if (pPVar8 < pPVar13) {
      *ppPVar11 = pPVar8;
      ppPVar11[1] = pPVar13;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar10 <= pPVar14 + 1) goto LAB_1436209ad;
    pPVar13 = pPVar12 + -2;
    pPVar8 = pPVar14;
  }
  else {
    if (pPVar14 + 1 < pPVar10) {
      *ppPVar11 = pPVar14;
      ppPVar11[1] = pPVar12 + -2;
      *(int *)(ppPVar11 + 2) = (int)local_338;
      ppPVar11 = ppPVar11 + 3;
    }
    if (pPVar13 <= pPVar8) goto LAB_1436209ad;
  }
  iVar7 = (int)((longlong)pPVar13 - (longlong)pPVar8 >> 5) + 1;
  pPVar14 = pPVar8;
  if ((int)local_338 == 0) goto LAB_14362099c;
  goto LAB_143620870;
}

// InverseTransformedAABBHelper2<float,double> @ 143620ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAABB<float,3> * __cdecl
Chaos::InverseTransformedAABBHelper2<float,double>
          (TAABB<float,3> *__return_storage_ptr__,TAABB<float,3> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*(float *)&param_1->MMax != __real_7f7fffff) {
    fVar9 = *(float *)&param_1->MMin;
    if (fVar9 != __real_7f7fffff) {
      fVar18 = *(float *)&(param_1->MMax).field_0x8 - *(float *)&(param_1->MMin).field_0x8;
      fVar6 = (float)*(double *)&param_2->field_0x40;
      fVar19 = fVar18 * __real_bf000000;
      fVar25 = __real_3f800000 / (float)*(double *)&param_2->field_0x50;
      fVar13 = (float)*(double *)param_2 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
      fVar14 = (float)*(double *)&param_2->field_0x8 *
               GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
      fVar15 = (float)*(double *)&param_2->field_0x10 *
               GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
      fVar16 = (float)*(double *)&param_2->field_0x18 *
               GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
      fVar3 = *(float *)&(param_1->MMax).field_0x4 - *(float *)&(param_1->MMin).field_0x4;
      fVar7 = __real_3f800000 / (float)*(double *)&param_2->field_0x48;
      fVar18 = fVar18 * __real_3f000000;
      fVar4 = fVar3 * __real_bf000000;
      fVar3 = fVar3 * __real_3f000000;
      fVar8 = (*(float *)&param_1->MMax - fVar9) * __real_3f000000;
      fVar23 = fVar14 * fVar18 - fVar15 * fVar3;
      fVar5 = fVar8 * fVar15 - fVar13 * fVar18;
      fVar5 = fVar5 + fVar5;
      fVar23 = fVar23 + fVar23;
      fVar17 = fVar13 * fVar3 - fVar8 * fVar14;
      fVar17 = fVar17 + fVar17;
      fVar10 = fVar8 * fVar15 - fVar19 * fVar13;
      fVar26 = fVar19 * fVar14 - fVar15 * fVar3;
      fVar10 = fVar10 + fVar10;
      fVar26 = fVar26 + fVar26;
      fVar11 = fVar14 * fVar18 - fVar4 * fVar15;
      fVar11 = fVar11 + fVar11;
      fVar2 = fVar4 * fVar13 - fVar8 * fVar14;
      fVar2 = fVar2 + fVar2;
      fVar22 = fVar19 * fVar14 - fVar4 * fVar15;
      fVar22 = fVar22 + fVar22;
      fVar21 = (float)((uint)(((fVar5 * fVar13 - fVar14 * fVar11) + fVar18 + fVar16 * fVar2) *
                             fVar25) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar18 = (float)((uint)(((fVar5 * fVar13 - fVar23 * fVar14) + fVar18 + fVar17 * fVar16) *
                             fVar25) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar24 = (float)((uint)(((fVar23 * fVar15 - fVar17 * fVar13) + fVar3 + fVar5 * fVar16) * fVar7
                             ) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar12 = (float)((uint)(((fVar15 * fVar11 - fVar13 * fVar2) + fVar4 + fVar5 * fVar16) * fVar7)
                      & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar20 = (float)((uint)(((fVar15 * fVar26 - fVar17 * fVar13) + fVar3 + fVar16 * fVar10) *
                             fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar3 = (float)((uint)(((fVar13 * fVar10 - fVar14 * fVar26) + fVar19 + fVar17 * fVar16) *
                            fVar25) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar18 <= fVar3) {
        fVar18 = fVar3;
      }
      if (fVar24 <= fVar20) {
        fVar24 = fVar20;
      }
      fVar3 = (float)((uint)(((fVar13 * fVar10 - fVar14 * fVar22) + fVar19 + fVar16 * fVar2) *
                            fVar25) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar18 <= fVar21) {
        fVar18 = fVar21;
      }
      if (fVar24 <= fVar12) {
        fVar24 = fVar12;
      }
      if (fVar3 <= fVar18) {
        fVar3 = fVar18;
      }
      fVar4 = (float)((uint)(((fVar15 * fVar22 - fVar13 * fVar2) + fVar4 + fVar16 * fVar10) * fVar7)
                     & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar4 <= fVar24) {
        fVar4 = fVar24;
      }
      fVar19 = (float)((uint)((fVar23 * fVar16 + fVar8 + (fVar17 * fVar14 - fVar5 * fVar15)) / fVar6
                             ) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar18 = (float)((uint)((fVar16 * fVar26 + fVar8 + (fVar17 * fVar14 - fVar15 * fVar10)) /
                             fVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
      }
      fVar18 = (float)((uint)((fVar16 * fVar11 + fVar8 + (fVar14 * fVar2 - fVar5 * fVar15)) / fVar6)
                      & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
      }
      fVar18 = (float)((uint)((fVar16 * fVar22 + fVar8 + (fVar14 * fVar2 - fVar15 * fVar10)) / fVar6
                             ) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
      }
      fVar18 = (*(float *)&(param_1->MMax).field_0x8 + *(float *)&(param_1->MMin).field_0x8) *
               __real_3f000000 - (float)*(double *)&param_2->field_0x30;
      fVar24 = (*(float *)&(param_1->MMax).field_0x4 + *(float *)&(param_1->MMin).field_0x4) *
               __real_3f000000 - (float)*(double *)&param_2->field_0x28;
      fVar8 = (*(float *)&param_1->MMax + fVar9) * __real_3f000000 -
              (float)*(double *)&param_2->field_0x20;
      fVar5 = fVar14 * fVar18 - fVar15 * fVar24;
      fVar2 = fVar15 * fVar8 - fVar13 * fVar18;
      fVar5 = fVar5 + fVar5;
      fVar9 = fVar13 * fVar24 - fVar14 * fVar8;
      fVar2 = fVar2 + fVar2;
      fVar9 = fVar9 + fVar9;
      fVar25 = ((fVar13 * fVar2 - fVar14 * fVar5) + fVar16 * fVar9 + fVar18) * fVar25;
      fVar7 = ((fVar15 * fVar5 - fVar13 * fVar9) + fVar16 * fVar2 + fVar24) * fVar7;
      fVar24 = fVar7 + fVar4;
      fVar6 = ((fVar14 * fVar9 - fVar15 * fVar2) + fVar16 * fVar5 + fVar8) / fVar6;
      fVar18 = fVar6 + fVar19;
      fVar9 = fVar25 + fVar3;
      *(float *)&__return_storage_ptr__->MMin = fVar6 - fVar19;
      *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar7 - fVar4;
      *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar25 - fVar3;
      goto LAB_1436211ea;
    }
  }
  uVar1 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  fVar18 = (float)*(undefined8 *)&param_1->MMax;
  fVar24 = (float)((ulonglong)*(undefined8 *)&param_1->MMax >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar1;
  fVar9 = *(float *)&(param_1->MMax).field_0x8;
LAB_1436211ea:
  *(ulonglong *)&__return_storage_ptr__->MMax = CONCAT44(fVar24,fVar18);
  *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar9;
  return __return_storage_ptr__;
}

// InverseTransformedAABBHelper2<double,double> @ 143621210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAABB<double,3> * __cdecl
Chaos::InverseTransformedAABBHelper2<double,double>
          (TAABB<double,3> *__return_storage_ptr__,TAABB<double,3> *param_1,
          TRigidTransform<double,3> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uVar29;
  double dVar28;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined8 local_198;
  
  if (*(double *)&param_1->MMax != __real_7fefffffffffffff) {
    dVar1 = *(double *)&param_1->MMin;
    if (dVar1 != __real_7fefffffffffffff) {
      dVar5 = *(double *)&param_2->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar6 = *(double *)&param_2->field_0x18 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar7 = *(double *)&(param_1->MMax).field_0x10 - *(double *)&(param_1->MMin).field_0x10;
      dVar11 = *(double *)param_2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar13 = *(double *)&param_2->field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar8 = dVar7 * __real_bfe0000000000000;
      dVar16 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      dVar22 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      dVar3 = *(double *)&(param_1->MMax).field_0x8 - *(double *)&(param_1->MMin).field_0x8;
      dVar19 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar4 = dVar3 * __real_bfe0000000000000;
      dVar3 = dVar3 * __real_3fe0000000000000;
      dVar7 = dVar7 * __real_3fe0000000000000;
      dVar20 = (*(double *)&param_1->MMax - dVar1) * __real_3fe0000000000000;
      dVar14 = dVar13 * dVar7 - dVar5 * dVar3;
      dVar14 = dVar14 + dVar14;
      dVar28 = dVar11 * dVar3 - dVar20 * dVar13;
      dVar21 = dVar20 * dVar5 - dVar11 * dVar7;
      dVar28 = dVar28 + dVar28;
      dVar21 = dVar21 + dVar21;
      dVar12 = ((dVar21 * dVar11 - dVar14 * dVar13) + dVar28 * dVar6 + dVar7) * dVar16;
      dVar15 = ((dVar14 * dVar5 - dVar28 * dVar11) + dVar21 * dVar6 + dVar3) * dVar19;
      dVar25 = dVar20 * dVar5 - dVar8 * dVar11;
      dVar25 = dVar25 + dVar25;
      dVar17 = dVar8 * dVar13 - dVar5 * dVar3;
      dVar17 = dVar17 + dVar17;
      dVar23 = ((dVar11 * dVar25 - dVar13 * dVar17) + dVar28 * dVar6 + dVar8) * dVar16;
      dVar9 = ((dVar5 * dVar17 - dVar28 * dVar11) + dVar3 + dVar6 * dVar25) * dVar19;
      dVar26 = dVar13 * dVar7 - dVar4 * dVar5;
      dVar3 = dVar4 * dVar11 - dVar20 * dVar13;
      dVar26 = dVar26 + dVar26;
      dVar3 = dVar3 + dVar3;
      dVar7 = ((dVar21 * dVar11 - dVar13 * dVar26) + dVar7 + dVar6 * dVar3) * dVar16;
      dVar27 = ((dVar5 * dVar26 - dVar11 * dVar3) + dVar21 * dVar6 + dVar4) * dVar19;
      dVar10 = dVar8 * dVar13 - dVar4 * dVar5;
      dVar10 = dVar10 + dVar10;
      uVar34 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar35 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar36 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar37 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar37,uVar36) <= 0.0) {
        uVar36 = 0;
        uVar37 = 0;
      }
      uVar38 = SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar39 = (uint)((ulonglong)dVar15 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar39,uVar38) <= 0.0) {
        uVar38 = 0;
        uVar39 = 0;
      }
      uVar24 = SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar29 = (uint)((ulonglong)dVar27 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar32 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar30 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar31 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = ((dVar11 * dVar25 - dVar13 * dVar10) + dVar8 + dVar6 * dVar3) * dVar16;
      if ((double)CONCAT44(uVar37,uVar36) <= (double)CONCAT44(uVar31,uVar30)) {
        uVar36 = uVar30;
        uVar37 = uVar31;
      }
      if ((double)CONCAT44(uVar39,uVar38) <= (double)CONCAT44(uVar33,uVar32)) {
        uVar38 = uVar32;
        uVar39 = uVar33;
      }
      uVar30 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar31 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar37,uVar36) <= (double)CONCAT44(uVar35,uVar34)) {
        uVar36 = uVar34;
        uVar37 = uVar35;
      }
      if ((double)CONCAT44(uVar39,uVar38) <= (double)CONCAT44(uVar29,uVar24)) {
        uVar38 = uVar24;
        uVar39 = uVar29;
      }
      if ((double)CONCAT44(uVar31,uVar30) <= (double)CONCAT44(uVar37,uVar36)) {
        uVar30 = uVar36;
        uVar31 = uVar37;
      }
      local_198 = (double)CONCAT44(uVar31,uVar30);
      dVar4 = ((dVar5 * dVar10 - dVar11 * dVar3) + dVar4 + dVar6 * dVar25) * dVar19;
      uVar36 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar37 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar37,uVar36) <= (double)CONCAT44(uVar39,uVar38)) {
        uVar36 = uVar38;
        uVar37 = uVar39;
      }
      dVar4 = (dVar14 * dVar6 + dVar20 + (dVar28 * dVar13 - dVar21 * dVar5)) * dVar22;
      uVar34 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar35 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar35,uVar34) <= 0.0) {
        uVar34 = 0;
        uVar35 = 0;
      }
      dVar4 = (dVar6 * dVar17 + dVar20 + (dVar28 * dVar13 - dVar5 * dVar25)) * dVar22;
      uVar38 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar39 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar35,uVar34) <= (double)CONCAT44(uVar39,uVar38)) {
        uVar34 = uVar38;
        uVar35 = uVar39;
      }
      dVar4 = (dVar6 * dVar26 + dVar20 + (dVar13 * dVar3 - dVar21 * dVar5)) * dVar22;
      uVar38 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar39 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar35,uVar34) <= (double)CONCAT44(uVar39,uVar38)) {
        uVar34 = uVar38;
        uVar35 = uVar39;
      }
      dVar3 = (dVar6 * dVar10 + dVar20 + (dVar13 * dVar3 - dVar5 * dVar25)) * dVar22;
      uVar38 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar39 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar35,uVar34) <= (double)CONCAT44(uVar39,uVar38)) {
        uVar34 = uVar38;
        uVar35 = uVar39;
      }
      dVar21 = (*(double *)&(param_1->MMax).field_0x10 + *(double *)&(param_1->MMin).field_0x10) *
               __real_3fe0000000000000 - *(double *)&param_2->field_0x30;
      dVar1 = (*(double *)&param_1->MMax + dVar1) * __real_3fe0000000000000 -
              *(double *)&param_2->field_0x20;
      dVar4 = (*(double *)&(param_1->MMax).field_0x8 + *(double *)&(param_1->MMin).field_0x8) *
              __real_3fe0000000000000 - *(double *)&param_2->field_0x28;
      dVar3 = dVar13 * dVar21 - dVar5 * dVar4;
      dVar3 = dVar3 + dVar3;
      dVar28 = dVar5 * dVar1 - dVar11 * dVar21;
      dVar28 = dVar28 + dVar28;
      dVar23 = dVar11 * dVar4 - dVar13 * dVar1;
      dVar23 = dVar23 + dVar23;
      dVar16 = ((dVar11 * dVar28 - dVar13 * dVar3) + dVar6 * dVar23 + dVar21) * dVar16;
      dVar19 = ((dVar5 * dVar3 - dVar11 * dVar23) + dVar6 * dVar28 + dVar4) * dVar19;
      dVar22 = ((dVar13 * dVar23 - dVar5 * dVar28) + dVar6 * dVar3 + dVar1) * dVar22;
      dVar4 = dVar19 + (double)CONCAT44(uVar37,uVar36);
      dVar3 = dVar22 + (double)CONCAT44(uVar35,uVar34);
      dVar1 = dVar16 + local_198;
      *(double *)&__return_storage_ptr__->MMin = dVar22 - (double)CONCAT44(uVar35,uVar34);
      *(double *)&(__return_storage_ptr__->MMin).field_0x8 =
           dVar19 - (double)CONCAT44(uVar37,uVar36);
      *(double *)&(__return_storage_ptr__->MMin).field_0x10 = dVar16 - local_198;
      goto LAB_1436218fd;
    }
  }
  uVar18 = *(undefined8 *)&(param_1->MMin).field_0x8;
  uVar2 = *(undefined8 *)&(param_1->MMin).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar18;
  dVar3 = *(double *)&param_1->MMax;
  dVar4 = *(double *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar2;
  dVar1 = *(double *)&(param_1->MMax).field_0x10;
LAB_1436218fd:
  *(double *)&__return_storage_ptr__->MMax = dVar3;
  *(double *)&(__return_storage_ptr__->MMax).field_0x8 = dVar4;
  *(double *)&(__return_storage_ptr__->MMax).field_0x10 = dVar1;
  return __return_storage_ptr__;
}

// MakePair<float,Chaos::TVector<float,3>_> @ 143621920

Pair<float,Chaos::TVector<float,3>_> * __cdecl
Chaos::MakePair<float,Chaos::TVector<float,3>_>
          (Pair<float,Chaos::TVector<float,3>_> *__return_storage_ptr__,float *param_1,
          TVector<float,3> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  __return_storage_ptr__->First = *param_1;
  uVar2 = *(undefined4 *)&param_2->field_0x8;
  *(undefined8 *)&__return_storage_ptr__->Second = uVar1;
  *(undefined4 *)&(__return_storage_ptr__->Second).field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// MakePair<double,int> @ 143621940

Pair<double,int> * __cdecl
Chaos::MakePair<double,int>(Pair<double,int> *__return_storage_ptr__,double *param_1,int *param_2)

{
  __return_storage_ptr__->First = *param_1;
  __return_storage_ptr__->Second = *param_2;
  return __return_storage_ptr__;
}

// MakePair<double,Chaos::TVector<double,3>_> @ 143621960

Pair<double,Chaos::TVector<double,3>_> * __cdecl
Chaos::MakePair<double,Chaos::TVector<double,3>_>
          (Pair<double,Chaos::TVector<double,3>_> *__return_storage_ptr__,double *param_1,
          TVector<double,3> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  __return_storage_ptr__->First = *param_1;
  uVar1 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->Second = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->Second).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->Second).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// MakePair<Chaos::TVector<double,3>,bool> @ 143621990

Pair<Chaos::TVector<double,3>,bool> * __cdecl
Chaos::MakePair<Chaos::TVector<double,3>,bool>
          (Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          bool *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  __return_storage_ptr__->Second = *param_2;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->First = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// RayAabb<float,3> @ 1436219c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Chaos::Raycasts::RayAabb<float,3>
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          TVector<float,3> *param_5,TVector<float,3> *param_6,double *param_7,
          TVector<double,3> *param_8,TVector<double,3> *param_9,int *param_10)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  TVector<float,3> *pTVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar23;
  double dVar21;
  double dVar22;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_338 [32];
  float local_2e0;
  float local_2dc;
  float local_2d8;
  undefined1 local_2d4 [8];
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined1 local_2b4 [8];
  float local_2ac;
  float local_2a8;
  float local_2a4;
  double local_2a0 [9];
  TVector<double,3> *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  double local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  undefined1 local_220 [16];
  double local_210;
  double local_208 [5];
  double local_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  double local_1a8 [4];
  TVector<double,3> local_188 [3];
  TVector<double,3> local_138 [3];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_258 = param_9;
  if ((param_3 <= 0.0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5594370249374826510>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Chaos\\Raycasts.cpp"
                         ,0xe,"RayLength > 0"), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return (bool)uVar9;
  }
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar22 = __real_3ff0000000000000;
  dVar18 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  uVar24 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar24) &&
       (double)CONCAT44(uVar26,uVar24) != __real_3f1a36e2e0000000) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5594370249374826511>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Chaos\\Raycasts.cpp"
                         ,0xf,
                         "FMath::IsNearlyEqual(RayDir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return (bool)uVar9;
  }
  dVar21 = __real_47efffffe0000000;
  uVar7 = _UNK_150689518;
  uVar6 = ___xmm_00000000000000003ff0000000000000;
  uVar3 = _UNK_15061cbc8;
  uVar1 = ___xmm_3ff00000000000000000000000000000;
  iVar15 = -1;
  dVar31 = 0.0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  lVar10 = 0;
  *param_10 = -1;
  fVar25 = __real_3f800000;
  local_1e0 = 0.0;
  uVar28 = 0;
  uVar30 = 0;
  dVar18 = ((double)(float)((ulonglong)*(undefined8 *)param_5 >> 0x20) - param_4) -
           *(double *)&param_1->field_0x8;
  local_1d8._8_4_ = SUB84(dVar18,0);
  local_1d8._0_8_ = ((double)(float)*(undefined8 *)param_5 - param_4) - *(double *)param_1;
  local_1d8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  local_1c8 = ((double)*(float *)&param_5->field_0x8 - param_4) - *(double *)&param_1->field_0x10;
  uVar16 = (undefined4)__real_7fefffffffffffff;
  uVar23 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  dVar18 = ((double)(float)((ulonglong)*(undefined8 *)param_6 >> 0x20) + param_4) -
           *(double *)&param_1->field_0x8;
  local_220._8_4_ = SUB84(dVar18,0);
  local_220._0_8_ = ((double)(float)*(undefined8 *)param_6 + param_4) - *(double *)param_1;
  local_220._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  local_210 = ((double)*(float *)&param_6->field_0x8 + param_4) - *(double *)&param_1->field_0x10;
  do {
    dVar18 = *(double *)(&param_2->field_0x0 + lVar10 * 8);
    uVar24 = SUB84(dVar18,0) & uVar4;
    uVar26 = (uint)((ulonglong)dVar18 >> 0x20) & uVar5;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar26,uVar24) &&
        (double)CONCAT44(uVar26,uVar24) != __real_3e45798ee2308c3a) {
      dVar18 = dVar22 / dVar18;
      dVar19 = dVar18 * *(double *)(local_220 + lVar10 * 8);
      dVar18 = dVar18 * *(double *)(local_1d8 + lVar10 * 8);
    }
    else {
      if (0.0 < *(double *)(local_1d8 + lVar10 * 8)) {
        return false;
      }
      if (*(double *)(local_220 + lVar10 * 8) <= 0.0 && *(double *)(local_220 + lVar10 * 8) != 0.0)
      {
        return false;
      }
      dVar18 = 0.0;
      dVar19 = dVar21;
    }
    if (lVar10 == 0) {
      local_1b0 = 0;
      puVar12 = &local_1c0;
      local_1c0 = uVar6;
      uStack_1b8 = uVar7;
    }
    else {
      if (lVar10 == 1) {
        local_240 = 0.0;
        local_250 = uVar1;
        uStack_248 = uVar3;
      }
      else {
        local_240 = dVar22;
        local_250 = 0;
        uStack_248 = 0;
      }
      puVar12 = &local_250;
    }
    local_238._0_4_ = *(undefined4 *)puVar12;
    local_238._4_4_ = *(undefined4 *)((longlong)puVar12 + 4);
    uStack_230 = *(undefined4 *)(puVar12 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar12 + 0xc);
    local_228 = (double)puVar12[2];
    dVar20 = dVar18;
    if (dVar18 <= dVar19) {
      (&local_238)[lVar10] = 0xbff0000000000000;
      dVar20 = dVar19;
      dVar19 = dVar18;
    }
    if (dVar31 < dVar19) {
      local_1e0 = local_228;
      uVar28 = SUB84(local_228,0);
      uVar30 = (undefined4)((ulonglong)local_228 >> 0x20);
      dVar31 = dVar19;
      uVar32 = (undefined4)local_238;
      uVar33 = local_238._4_4_;
      uVar34 = uStack_230;
      uVar35 = uStack_22c;
    }
    if ((double)CONCAT44(uVar23,uVar16) <= dVar20) {
      dVar20 = (double)CONCAT44(uVar23,uVar16);
    }
    uVar16 = SUB84(dVar20,0);
    uVar23 = (undefined4)((ulonglong)dVar20 >> 0x20);
    if (dVar20 < dVar31) {
      return false;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 < 3);
  if ((param_3 < dVar31) || (dVar20 < 0.0)) {
    return false;
  }
  local_2a0[6] = dVar31 * *(double *)param_2 + *(double *)param_1;
  local_2a0[7] = dVar31 * *(double *)&param_2->field_0x8 + *(double *)&param_1->field_0x8;
  local_2a0[8] = dVar31 * *(double *)&param_2->field_0x10 + *(double *)&param_1->field_0x10;
  if (param_4 != 0.0) {
    iVar11 = 0;
    lVar10 = 0;
    pTVar13 = param_6;
    do {
      fVar27 = *(float *)((longlong)pTVar13 + ((longlong)param_5 - (longlong)param_6));
      dVar18 = *(double *)((longlong)local_2a0 + lVar10 + 0x30);
      dVar21 = (double)fVar27;
      dVar22 = dVar21;
      if (dVar18 < dVar21) {
LAB_143621d75:
        iVar11 = iVar11 + 1;
        dVar21 = dVar22;
      }
      else {
        fVar27 = *(float *)pTVar13;
        dVar22 = (double)fVar27;
        if (dVar22 < dVar18) goto LAB_143621d75;
      }
      *(double *)((longlong)local_2a0 + lVar10) = dVar21;
      pTVar13 = (TVector<float,3> *)&pTVar13->field_0x4;
      *(double *)((longlong)local_208 + lVar10) = (double)fVar27;
      lVar10 = lVar10 + 8;
    } while (lVar10 < 0x18);
    if (1 < iVar11) {
      if (iVar11 == 3) {
        lVar14 = (longlong)param_6 - (longlong)param_5;
        iVar11 = 0;
        lVar10 = 0;
        uVar32 = 0;
        uVar33 = 0;
        do {
          fVar27 = *(float *)param_5;
          local_2a0[3] = local_2a0[0];
          local_2a0[4] = local_2a0[1];
          local_2a0[5] = local_2a0[2];
          if ((double)fVar27 == *(double *)((longlong)local_2a0 + lVar10 + 0x18)) {
            fVar27 = *(float *)(lVar14 + (longlong)param_5);
          }
          *(double *)((longlong)local_2a0 + lVar10 + 0x18) = (double)fVar27;
          fVar27 = (float)local_2a0[3] - (float)local_2a0[0];
          fVar29 = (float)local_2a0[4] - (float)local_2a0[1];
          local_2cc = (float)local_2a0[5] - (float)local_2a0[2];
          local_2c8 = fVar27 * fVar27 + fVar29 * fVar29 + local_2cc * local_2cc;
          if (__real_38d1b717 <= local_2c8) {
            local_2c8 = SQRT(local_2c8);
            fVar17 = fVar25 / local_2c8;
            local_2cc = fVar17 * local_2cc;
            local_2d4._4_4_ = fVar17 * fVar29;
            local_2d4._0_4_ = fVar27 * fVar17;
          }
          else {
            local_2d4 = (undefined1  [8])0x3f800000;
            local_2c8 = 0.0;
            local_2cc = 0.0;
          }
          local_2e0 = (float)local_2a0[0];
          local_2dc = (float)local_2a0[1];
          local_2d8 = (float)local_2a0[2];
          local_2c4 = (float)param_4;
          bVar8 = FCoreCapsule::Raycast
                            ((FCoreCapsule *)&local_2e0,param_1,param_2,param_3,0.0,
                             local_1a8 + iVar11,local_188 + iVar11,local_138 + iVar11);
          if ((bVar8) &&
             ((iVar15 == -1 ||
              (*(double *)((longlong)local_1a8 + lVar10) <= (double)CONCAT44(uVar33,uVar32) &&
               (double)CONCAT44(uVar33,uVar32) != *(double *)((longlong)local_1a8 + lVar10))))) {
            dVar18 = *(double *)((longlong)local_1a8 + lVar10);
            uVar32 = SUB84(dVar18,0);
            uVar33 = (undefined4)((ulonglong)dVar18 >> 0x20);
            iVar15 = iVar11;
            if (dVar18 == 0.0) {
              *param_7 = 0.0;
              return true;
            }
          }
          iVar11 = iVar11 + 1;
          param_5 = (TVector<float,3> *)&param_5->field_0x4;
          lVar10 = lVar10 + 8;
        } while (iVar11 < 3);
        if (iVar15 == -1) {
          return false;
        }
        bVar8 = true;
        uVar3 = *(undefined8 *)&local_188[iVar15].field_0x8;
        uVar1 = *(undefined8 *)&local_188[iVar15].field_0x10;
        *(undefined8 *)param_8 = *(undefined8 *)(local_188 + iVar15);
        *(undefined8 *)&param_8->field_0x8 = uVar3;
        dVar18 = *(double *)(local_138 + iVar15);
        uVar3 = *(undefined8 *)&local_138[iVar15].field_0x8;
        *(undefined8 *)&param_8->field_0x10 = uVar1;
        uVar1 = *(undefined8 *)&local_138[iVar15].field_0x10;
        *param_7 = (double)CONCAT44(uVar33,uVar32);
        *(double *)local_258 = dVar18;
        *(undefined8 *)&local_258->field_0x8 = uVar3;
        *(undefined8 *)&local_258->field_0x10 = uVar1;
      }
      else {
        local_2a8 = 0.0;
        local_2c0 = (float)local_2a0[0];
        local_2bc = (float)local_2a0[1];
        local_2b8 = (float)local_2a0[2];
        fVar27 = (float)local_208[1] - local_2bc;
        fVar29 = (float)local_208[0] - local_2c0;
        local_2ac = (float)local_208[2] - local_2b8;
        fVar25 = fVar27 * fVar27 + fVar29 * fVar29 + local_2ac * local_2ac;
        if (__real_38d1b717 <= fVar25) {
          local_2a8 = SQRT(fVar25);
          fVar25 = __real_3f800000 / local_2a8;
          local_2ac = fVar25 * local_2ac;
          local_2b4._4_4_ = fVar25 * fVar27;
          local_2b4._0_4_ = fVar25 * fVar29;
        }
        else {
          local_2b4 = (undefined1  [8])0x3f800000;
          local_2ac = 0.0;
        }
        local_2a4 = (float)param_4;
        bVar8 = FCoreCapsule::Raycast
                          ((FCoreCapsule *)&local_2c0,param_1,param_2,param_3,0.0,param_7,param_8,
                           param_9);
        local_258 = param_9;
        if (!bVar8) {
          return bVar8;
        }
      }
      if (0.0 < *param_7) {
        dVar18 = *(double *)&local_258->field_0x8;
        dVar22 = *(double *)&local_258->field_0x10;
        *(double *)param_8 = *(double *)param_8 - param_4 * *(double *)local_258;
        *(double *)&param_8->field_0x8 = *(double *)&param_8->field_0x8 - param_4 * dVar18;
        *(double *)&param_8->field_0x10 = *(double *)&param_8->field_0x10 - param_4 * dVar22;
        return bVar8;
      }
      return bVar8;
    }
  }
  *param_7 = dVar31;
  *(undefined4 *)param_9 = uVar32;
  *(undefined4 *)&param_9->field_0x4 = uVar33;
  *(undefined4 *)&param_9->field_0x8 = uVar34;
  *(undefined4 *)&param_9->field_0xc = uVar35;
  *(ulonglong *)&param_9->field_0x10 = CONCAT44(uVar30,uVar28);
  *(double *)param_8 = local_2a0[6] - (double)CONCAT44(uVar33,uVar32) * param_4;
  *(double *)&param_8->field_0x8 = local_2a0[7] - (double)CONCAT44(uVar35,uVar34) * param_4;
  *(double *)&param_8->field_0x10 = local_2a0[8] - local_1e0 * param_4;
  return true;
}

// RayAabb<double,3> @ 143622200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Chaos::Raycasts::RayAabb<double,3>
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          TVector<double,3> *param_5,TVector<double,3> *param_6,double *param_7,
          TVector<double,3> *param_8,TVector<double,3> *param_9,int *param_10)

{
  double dVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  TVector<double,3> *pTVar11;
  int iVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_348 [32];
  int local_308;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  undefined1 local_2e4 [8];
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  undefined1 local_2c4 [8];
  float local_2bc;
  float local_2b8;
  float local_2b4;
  double local_2b0 [6];
  TVector<double,3> *local_280;
  TVector<double,3> *local_278;
  double local_270;
  double local_268 [6];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  double local_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1f0 [8];
  double local_1b0;
  double local_1a8 [4];
  TVector<double,3> local_188 [3];
  TVector<double,3> local_138 [3];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_280 = param_1;
  local_278 = param_9;
  local_270 = param_4;
  if ((param_3 <= 0.0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5594370249374826510>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Chaos\\Raycasts.cpp"
                         ,0xe,"RayLength > 0"), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar1 = __real_3ff0000000000000;
  dVar25 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5594370249374826511>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Chaos\\Raycasts.cpp"
                         ,0xf,
                         "FMath::IsNearlyEqual(RayDir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  dVar23 = __real_47efffffe0000000;
  uVar7 = _UNK_150689518;
  dVar25 = ___xmm_00000000000000003ff0000000000000;
  uVar4 = _UNK_15061cbc8;
  uVar2 = ___xmm_3ff00000000000000000000000000000;
  uVar17 = (undefined4)__real_7fefffffffffffff;
  uVar19 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  dVar27 = 0.0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  lVar10 = 0;
  *param_10 = -1;
  fVar31 = __real_3f800000;
  fVar24 = __real_38d1b717;
  local_308 = -1;
  local_1b0 = 0.0;
  uVar29 = 0;
  uVar32 = 0;
  local_1f0[0] = (*(double *)param_5 - param_4) - *(double *)param_1;
  local_1f0[1] = (*(double *)&param_5->field_0x8 - param_4) - *(double *)&param_1->field_0x8;
  local_1f0[2] = (*(double *)&param_5->field_0x10 - param_4) - *(double *)&param_1->field_0x10;
  local_1f8 = *(double *)&param_6->field_0x10;
  local_268[3] = (*(double *)param_6 + param_4) - *(double *)param_1;
  local_268[4] = (*(double *)&param_6->field_0x8 + param_4) - *(double *)&param_1->field_0x8;
  local_268[5] = (*(double *)&param_6->field_0x10 + param_4) - *(double *)&param_1->field_0x10;
  do {
    dVar21 = *(double *)(&param_2->field_0x0 + lVar10 * 8);
    uVar16 = SUB84(dVar21,0) & uVar5;
    uVar18 = (uint)((ulonglong)dVar21 >> 0x20) & uVar6;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar18,uVar16) &&
        (double)CONCAT44(uVar18,uVar16) != __real_3e45798ee2308c3a) {
      dVar21 = dVar1 / dVar21;
      dVar26 = local_1f0[lVar10] * dVar21;
      dVar21 = dVar21 * local_268[lVar10 + 3];
    }
    else {
      if (0.0 < local_1f0[lVar10]) {
        return false;
      }
      if (local_268[lVar10 + 3] <= 0.0 && local_268[lVar10 + 3] != 0.0) {
        return false;
      }
      dVar26 = 0.0;
      dVar21 = dVar23;
    }
    if (lVar10 == 0) {
      local_1f8 = 0.0;
      pdVar13 = &local_208;
      local_208 = dVar25;
      uStack_200 = uVar7;
    }
    else {
      if (lVar10 == 1) {
        local_228 = 0.0;
        local_238 = (double)uVar2;
        uStack_230 = uVar4;
      }
      else {
        local_228 = dVar1;
        local_238 = 0.0;
        uStack_230 = 0;
      }
      pdVar13 = local_268 + 6;
    }
    local_220._0_4_ = *(undefined4 *)pdVar13;
    local_220._4_4_ = *(undefined4 *)((longlong)pdVar13 + 4);
    uStack_218 = *(undefined4 *)(pdVar13 + 1);
    uStack_214 = *(undefined4 *)((longlong)pdVar13 + 0xc);
    local_210 = pdVar13[2];
    dVar22 = dVar26;
    if (dVar26 <= dVar21) {
      (&local_220)[lVar10] = 0xbff0000000000000;
      dVar22 = dVar21;
      dVar21 = dVar26;
    }
    if (dVar27 < dVar21) {
      local_1b0 = local_210;
      uVar29 = SUB84(local_210,0);
      uVar32 = (undefined4)((ulonglong)local_210 >> 0x20);
      dVar27 = dVar21;
      uVar33 = (undefined4)local_220;
      uVar34 = local_220._4_4_;
      uVar35 = uStack_218;
      uVar36 = uStack_214;
    }
    if ((double)CONCAT44(uVar19,uVar17) <= dVar22) {
      dVar22 = (double)CONCAT44(uVar19,uVar17);
    }
    uVar17 = SUB84(dVar22,0);
    uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
    if (dVar22 < dVar27) {
      return false;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 < 3);
  if ((param_3 < dVar27) || (dVar22 < 0.0)) {
    return false;
  }
  local_2b0[3] = dVar27 * *(double *)param_2 + *(double *)param_1;
  local_2b0[4] = dVar27 * *(double *)&param_2->field_0x8 + *(double *)&param_1->field_0x8;
  local_2b0[5] = dVar27 * *(double *)&param_2->field_0x10 + *(double *)&param_1->field_0x10;
  if (param_4 != 0.0) {
    lVar14 = (longlong)param_6 - (longlong)param_5;
    iVar12 = 0;
    lVar10 = 3;
    pTVar11 = param_5;
    do {
      dVar1 = *(double *)((longlong)local_2b0 + (0x18 - (longlong)param_5) + (longlong)pTVar11);
      dVar25 = *(double *)pTVar11;
      if (dVar25 <= dVar1) {
        dVar23 = *(double *)((longlong)pTVar11 + lVar14);
        uVar17 = SUB84(dVar23,0);
        uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (dVar23 < dVar1) goto LAB_1436225f4;
      }
      else {
        uVar17 = SUB84(dVar25,0);
        uVar19 = (undefined4)((ulonglong)dVar25 >> 0x20);
        dVar23 = dVar25;
LAB_1436225f4:
        iVar12 = iVar12 + 1;
        dVar25 = dVar23;
      }
      *(double *)(((longlong)local_2b0 - (longlong)param_5) + (longlong)pTVar11) = dVar25;
      *(ulonglong *)((longlong)local_1f0 + (0x18 - (longlong)param_5) + (longlong)pTVar11) =
           CONCAT44(uVar19,uVar17);
      pTVar11 = (TVector<double,3> *)&pTVar11->field_0x8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (1 < iVar12) {
      if (iVar12 == 3) {
        lVar15 = (longlong)local_268 - (longlong)param_5;
        iVar12 = 0;
        lVar10 = (longlong)local_1a8 - (longlong)param_5;
        uVar33 = 0;
        uVar34 = 0;
        do {
          dVar1 = *(double *)param_5;
          uVar35 = SUB84(dVar1,0);
          uVar36 = (undefined4)((ulonglong)dVar1 >> 0x20);
          local_268[0] = local_2b0[0];
          local_268[1] = local_2b0[1];
          local_268[2] = local_2b0[2];
          if (dVar1 == *(double *)(lVar15 + (longlong)param_5)) {
            uVar2 = *(undefined8 *)((longlong)param_5 + lVar14);
            uVar35 = (undefined4)uVar2;
            uVar36 = (undefined4)((ulonglong)uVar2 >> 0x20);
          }
          *(ulonglong *)(lVar15 + (longlong)param_5) = CONCAT44(uVar36,uVar35);
          fVar28 = (float)local_268[0] - (float)local_2b0[0];
          fVar30 = (float)local_268[1] - (float)local_2b0[1];
          local_2dc = (float)local_268[2] - (float)local_2b0[2];
          local_2d8 = fVar28 * fVar28 + fVar30 * fVar30 + local_2dc * local_2dc;
          if (fVar24 <= local_2d8) {
            local_2d8 = SQRT(local_2d8);
            fVar20 = fVar31 / local_2d8;
            local_2dc = fVar20 * local_2dc;
            local_2e4._4_4_ = fVar20 * fVar30;
            local_2e4._0_4_ = fVar28 * fVar20;
          }
          else {
            local_2e4 = (undefined1  [8])0x3f800000;
            local_2d8 = 0.0;
            local_2dc = 0.0;
          }
          local_2f0 = (float)local_2b0[0];
          local_2ec = (float)local_2b0[1];
          local_2e8 = (float)local_2b0[2];
          local_2d4 = (float)param_4;
          bVar8 = FCoreCapsule::Raycast
                            ((FCoreCapsule *)&local_2f0,local_280,param_2,param_3,0.0,
                             local_1a8 + iVar12,local_188 + iVar12,local_138 + iVar12);
          if ((bVar8) &&
             ((local_308 == -1 ||
              (pdVar13 = (double *)((longlong)param_5 + lVar10),
              *pdVar13 <= (double)CONCAT44(uVar34,uVar33) &&
              (double)CONCAT44(uVar34,uVar33) != *pdVar13)))) {
            dVar1 = *(double *)((longlong)param_5 + lVar10);
            uVar33 = SUB84(dVar1,0);
            uVar34 = (undefined4)((ulonglong)dVar1 >> 0x20);
            local_308 = iVar12;
            if (dVar1 == 0.0) {
              *param_7 = 0.0;
              return true;
            }
          }
          iVar12 = iVar12 + 1;
          param_5 = (TVector<double,3> *)&param_5->field_0x8;
        } while (iVar12 < 3);
        if (local_308 == -1) {
          return false;
        }
        bVar8 = true;
        lVar10 = (longlong)local_308;
        uVar4 = *(undefined8 *)&local_188[lVar10].field_0x8;
        uVar2 = *(undefined8 *)&local_188[lVar10].field_0x10;
        *(undefined8 *)param_8 = *(undefined8 *)(local_188 + lVar10);
        *(undefined8 *)&param_8->field_0x8 = uVar4;
        dVar1 = *(double *)(local_138 + lVar10);
        uVar4 = *(undefined8 *)&local_138[lVar10].field_0x8;
        *(undefined8 *)&param_8->field_0x10 = uVar2;
        uVar2 = *(undefined8 *)&local_138[lVar10].field_0x10;
        *param_7 = (double)CONCAT44(uVar34,uVar33);
        *(double *)local_278 = dVar1;
        *(undefined8 *)&local_278->field_0x8 = uVar4;
        *(undefined8 *)&local_278->field_0x10 = uVar2;
      }
      else {
        local_2b8 = 0.0;
        local_2d0 = (float)local_2b0[0];
        local_2cc = (float)local_2b0[1];
        local_2c8 = (float)local_2b0[2];
        fVar31 = (float)local_1f0[4] - local_2cc;
        fVar28 = (float)local_1f0[3] - local_2d0;
        local_2bc = (float)local_1f0[5] - local_2c8;
        fVar24 = fVar28 * fVar28 + fVar31 * fVar31 + local_2bc * local_2bc;
        if (__real_38d1b717 <= fVar24) {
          local_2b8 = SQRT(fVar24);
          fVar24 = __real_3f800000 / local_2b8;
          local_2bc = fVar24 * local_2bc;
          local_2c4._4_4_ = fVar24 * fVar31;
          local_2c4._0_4_ = fVar24 * fVar28;
        }
        else {
          local_2c4 = (undefined1  [8])0x3f800000;
          local_2bc = 0.0;
        }
        local_2b4 = (float)param_4;
        bVar8 = FCoreCapsule::Raycast
                          ((FCoreCapsule *)&local_2d0,param_1,param_2,param_3,0.0,param_7,param_8,
                           param_9);
        local_278 = param_9;
        local_270 = param_4;
        if (!bVar8) {
          return bVar8;
        }
      }
      if (0.0 < *param_7) {
        dVar1 = *(double *)&local_278->field_0x8;
        dVar25 = *(double *)&local_278->field_0x10;
        *(double *)param_8 = *(double *)param_8 - local_270 * *(double *)local_278;
        *(double *)&param_8->field_0x8 = *(double *)&param_8->field_0x8 - local_270 * dVar1;
        *(double *)&param_8->field_0x10 = *(double *)&param_8->field_0x10 - local_270 * dVar25;
        return bVar8;
      }
      return bVar8;
    }
  }
  *param_7 = dVar27;
  *(undefined4 *)param_9 = uVar33;
  *(undefined4 *)&param_9->field_0x4 = uVar34;
  *(undefined4 *)&param_9->field_0x8 = uVar35;
  *(undefined4 *)&param_9->field_0xc = uVar36;
  *(ulonglong *)&param_9->field_0x10 = CONCAT44(uVar32,uVar29);
  *(double *)param_8 = local_2b0[3] - (double)CONCAT44(uVar34,uVar33) * param_4;
  *(double *)&param_8->field_0x8 = local_2b0[4] - (double)CONCAT44(uVar36,uVar35) * param_4;
  *(double *)&param_8->field_0x10 = local_2b0[5] - local_1b0 * param_4;
  return true;
}

// RaySphere<double,3> @ 143622aa0

bool __cdecl
Chaos::Raycasts::RaySphere<double,3>
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          TVector<float,3> *param_5,float param_6,double *param_7,TVector<double,3> *param_8,
          TVector<double,3> *param_9)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar4 = __real_3f1a36e2e0000000;
  dVar9 = __real_3ff0000000000000;
  dVar12 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2020268653722730570>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Raycasts.h"
                         ,0x4a,
                         "FMath::IsNearlyEqual(RayDir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((param_3 < 0.0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2020268653722730571>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Raycasts.h"
                         ,0x4b,"RayLength >= 0"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  dVar12 = (double)(*(float *)param_5 - (float)*(double *)param_1);
  dVar5 = (double)(*(float *)&param_5->field_0x4 - (float)*(double *)&param_1->field_0x8);
  dVar11 = (double)(*(float *)&param_5->field_0x8 - (float)*(double *)&param_1->field_0x10);
  dVar13 = (double)param_6 + param_4;
  dVar10 = dVar5 * dVar5 + dVar12 * dVar12 + dVar11 * dVar11;
  if (dVar10 < dVar13 * dVar13) {
    *param_7 = 0.0;
    bVar6 = true;
  }
  else {
    dVar12 = *(double *)param_2 * dVar12 + *(double *)&param_2->field_0x8 * dVar5 +
             *(double *)&param_2->field_0x10 * dVar11;
    auVar8._0_8_ = dVar12 * dVar12 - (dVar10 - dVar13 * dVar13);
    auVar8._8_8_ = 0;
    if (0.0 <= auVar8._0_8_) {
      if (dVar4 <= auVar8._0_8_) {
        auVar8 = sqrtpd(auVar8,auVar8);
        dVar12 = dVar12 - auVar8._0_8_;
      }
      if ((0.0 <= dVar12) && (dVar12 <= param_3)) {
        dVar9 = dVar9 / dVar13;
        dVar5 = *(double *)param_2 * dVar12 + *(double *)param_1;
        dVar4 = *(double *)&param_2->field_0x8 * dVar12 + *(double *)&param_1->field_0x8;
        dVar13 = *(double *)&param_2->field_0x10 * dVar12 + *(double *)&param_1->field_0x10;
        fVar1 = *(float *)&param_5->field_0x4;
        dVar11 = (dVar5 - (double)*(float *)param_5) * dVar9;
        fVar2 = *(float *)&param_5->field_0x8;
        *param_7 = dVar12;
        dVar12 = (dVar4 - (double)fVar1) * dVar9;
        dVar9 = (dVar13 - (double)fVar2) * dVar9;
        *(double *)param_8 = dVar5 - dVar11 * param_4;
        *(double *)&param_8->field_0x8 = dVar4 - dVar12 * param_4;
        *(double *)&param_8->field_0x10 = dVar13 - dVar9 * param_4;
        *(double *)param_9 = dVar11;
        *(double *)&param_9->field_0x8 = dVar12;
        *(double *)&param_9->field_0x10 = dVar9;
        return true;
      }
    }
    bVar6 = false;
  }
  return bVar6;
}

// SerializeReal<double,3> @ 143622de0

FArchive * __cdecl Chaos::SerializeReal<double,3>(FArchive *param_1,TVector<double,3> *param_2)

{
  longlong *plVar1;
  float local_res8 [2];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (float)*(double *)param_2;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(double *)param_2 = (double)local_res8[0];
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (float)*(double *)&param_2->field_0x8;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(double *)&param_2->field_0x8 = (double)local_res8[0];
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (float)*(double *)&param_2->field_0x10;
  if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *(float *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(double *)&param_2->field_0x10 = (double)local_res8[0];
  return param_1;
}

// TransformedAABBHelper2<float,double> @ 143622f40

TAABB<float,3> * __cdecl
Chaos::TransformedAABBHelper2<float,double>
          (TAABB<float,3> *__return_storage_ptr__,TAABB<float,3> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (*(float *)&param_1->MMax != __real_7f7fffff) {
    fVar8 = *(float *)&param_1->MMin;
    if (fVar8 != __real_7f7fffff) {
      fVar14 = (float)*(double *)param_2;
      fVar19 = (float)*(double *)&param_2->field_0x8;
      fVar17 = (*(float *)&(param_1->MMax).field_0x4 - *(float *)&(param_1->MMin).field_0x4) *
               (float)*(double *)&param_2->field_0x48;
      fVar21 = (float)*(double *)&param_2->field_0x10;
      fVar18 = fVar17 * __real_bf000000;
      fVar15 = (float)*(double *)&param_2->field_0x18;
      fVar10 = (*(float *)&(param_1->MMax).field_0x8 - *(float *)&(param_1->MMin).field_0x8) *
               (float)*(double *)&param_2->field_0x50;
      fVar13 = (*(float *)&param_1->MMax - fVar8) * (float)*(double *)&param_2->field_0x40 *
               __real_3f000000;
      fVar11 = fVar10 * __real_bf000000;
      fVar17 = fVar17 * __real_3f000000;
      fVar10 = fVar10 * __real_3f000000;
      fVar12 = fVar19 * fVar10 - fVar21 * fVar17;
      fVar4 = fVar21 * fVar13 - fVar14 * fVar10;
      fVar12 = fVar12 + fVar12;
      fVar4 = fVar4 + fVar4;
      fVar2 = fVar14 * fVar17 - fVar19 * fVar13;
      fVar2 = fVar2 + fVar2;
      fVar7 = fVar21 * fVar13 - fVar14 * fVar11;
      fVar7 = fVar7 + fVar7;
      fVar3 = fVar14 * fVar18 - fVar19 * fVar13;
      fVar20 = fVar19 * fVar11 - fVar21 * fVar17;
      fVar3 = fVar3 + fVar3;
      fVar20 = fVar20 + fVar20;
      fVar6 = fVar19 * fVar10 - fVar21 * fVar18;
      fVar16 = fVar19 * fVar11 - fVar21 * fVar18;
      fVar6 = fVar6 + fVar6;
      fVar16 = fVar16 + fVar16;
      fVar9 = (float)((uint)((fVar14 * fVar4 - fVar19 * fVar12) + fVar15 * fVar2 + fVar10) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar5 = (float)((uint)((fVar14 * fVar7 - fVar19 * fVar20) + fVar15 * fVar2 + fVar11) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar9 <= fVar5) {
        fVar9 = fVar5;
      }
      fVar10 = (float)((uint)((fVar14 * fVar4 - fVar19 * fVar6) + fVar15 * fVar3 + fVar10) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
      fVar10 = (float)((uint)((fVar14 * fVar7 - fVar19 * fVar16) + fVar15 * fVar3 + fVar11) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
      fVar10 = (float)((uint)((fVar21 * fVar12 - fVar14 * fVar2) + fVar15 * fVar4 + fVar17) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = (float)((uint)((fVar21 * fVar20 - fVar14 * fVar2) + fVar15 * fVar7 + fVar17) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
      fVar11 = (float)((uint)((fVar21 * fVar6 - fVar14 * fVar3) + fVar15 * fVar4 + fVar18) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
      fVar11 = (float)((uint)((fVar21 * fVar16 - fVar14 * fVar3) + fVar15 * fVar7 + fVar18) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
      fVar11 = (float)((uint)(fVar15 * fVar12 + fVar13 + (fVar19 * fVar2 - fVar21 * fVar4)) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar2 = (float)((uint)(fVar15 * fVar20 + fVar13 + (fVar19 * fVar2 - fVar21 * fVar7)) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar11 <= fVar2) {
        fVar11 = fVar2;
      }
      fVar2 = (float)((uint)(fVar15 * fVar6 + fVar13 + (fVar19 * fVar3 - fVar21 * fVar4)) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar11 <= fVar2) {
        fVar11 = fVar2;
      }
      fVar2 = (float)((uint)(fVar15 * fVar16 + fVar13 + (fVar19 * fVar3 - fVar21 * fVar7)) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar11 <= fVar2) {
        fVar11 = fVar2;
      }
      fVar2 = (*(float *)&(param_1->MMin).field_0x8 + *(float *)&(param_1->MMax).field_0x8) *
              __real_3f000000 * (float)*(double *)&param_2->field_0x50;
      fVar3 = (*(float *)&(param_1->MMin).field_0x4 + *(float *)&(param_1->MMax).field_0x4) *
              __real_3f000000 * (float)*(double *)&param_2->field_0x48;
      fVar12 = (*(float *)&param_1->MMax + fVar8) * __real_3f000000 *
               (float)*(double *)&param_2->field_0x40;
      fVar17 = fVar19 * fVar2 - fVar21 * fVar3;
      fVar17 = fVar17 + fVar17;
      fVar6 = fVar21 * fVar12 - fVar14 * fVar2;
      fVar8 = fVar14 * fVar3 - fVar19 * fVar12;
      fVar6 = fVar6 + fVar6;
      fVar8 = fVar8 + fVar8;
      fVar7 = (fVar14 * fVar6 - fVar19 * fVar17) + (float)*(double *)&param_2->field_0x30 +
              fVar15 * fVar8 + fVar2;
      fVar4 = (fVar21 * fVar17 - fVar14 * fVar8) + (float)*(double *)&param_2->field_0x28 +
              fVar15 * fVar6 + fVar3;
      fVar3 = fVar10 + fVar4;
      fVar6 = (fVar19 * fVar8 - fVar21 * fVar6) + (float)*(double *)&param_2->field_0x20 +
              fVar15 * fVar17 + fVar12;
      fVar2 = fVar11 + fVar6;
      fVar8 = fVar9 + fVar7;
      *(float *)&__return_storage_ptr__->MMin = fVar6 - fVar11;
      *(float *)&(__return_storage_ptr__->MMin).field_0x4 = fVar4 - fVar10;
      *(float *)&(__return_storage_ptr__->MMin).field_0x8 = fVar7 - fVar9;
      goto LAB_1436235d4;
    }
  }
  uVar1 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  fVar2 = (float)*(undefined8 *)&param_1->MMax;
  fVar3 = (float)((ulonglong)*(undefined8 *)&param_1->MMax >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar1;
  fVar8 = *(float *)&(param_1->MMax).field_0x8;
LAB_1436235d4:
  *(ulonglong *)&__return_storage_ptr__->MMax = CONCAT44(fVar3,fVar2);
  *(float *)&(__return_storage_ptr__->MMax).field_0x8 = fVar8;
  return __return_storage_ptr__;
}

// TransformedAABBHelper2<double,double> @ 143623600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAABB<double,3> * __cdecl
Chaos::TransformedAABBHelper2<double,double>
          (TAABB<double,3> *__return_storage_ptr__,TAABB<double,3> *param_1,
          TRigidTransform<double,3> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar26;
  double dVar25;
  uint uVar27;
  uint uVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  if (*(double *)&param_1->MMax != __real_7fefffffffffffff) {
    dVar1 = *(double *)&param_1->MMin;
    if (dVar1 != __real_7fefffffffffffff) {
      dVar10 = (*(double *)&(param_1->MMax).field_0x10 - *(double *)&(param_1->MMin).field_0x10) *
               *(double *)&param_2->field_0x50 * __real_3fe0000000000000;
      dVar30 = SUB168(*(undefined1 (*) [16])&param_2->field_0x40,8);
      dVar9 = (*(double *)&(param_1->MMax).field_0x8 - *(double *)&(param_1->MMin).field_0x8) *
              dVar30 * __real_3fe0000000000000;
      dVar7 = SUB168(*(undefined1 (*) [16])&param_2->field_0x10,0);
      uVar27 = SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar28 = (uint)((ulonglong)dVar9 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      dVar20 = (*(double *)&param_1->MMax - dVar1) *
               SUB168(*(undefined1 (*) [16])&param_2->field_0x40,0) * __real_3fe0000000000000;
      uVar31 = SUB84(dVar10,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar32 = (uint)((ulonglong)dVar10 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      dVar6 = SUB168(*(undefined1 (*) [16])param_2,0);
      dVar22 = SUB168(*(undefined1 (*) [16])param_2,8);
      dVar25 = dVar20 * dVar7 - dVar6 * dVar10;
      dVar25 = dVar25 + dVar25;
      dVar8 = SUB168(*(undefined1 (*) [16])&param_2->field_0x10,8);
      dVar3 = dVar6 * dVar9 - dVar20 * dVar22;
      dVar29 = dVar22 * dVar10 - dVar7 * dVar9;
      dVar3 = dVar3 + dVar3;
      dVar29 = dVar29 + dVar29;
      dVar5 = (double)CONCAT44(uVar32,uVar31) * dVar22;
      dVar13 = dVar5 - dVar7 * dVar9;
      dVar13 = dVar13 + dVar13;
      dVar12 = dVar20 * dVar7 - (double)CONCAT44(uVar32,uVar31) * *(double *)param_2;
      dVar12 = dVar12 + dVar12;
      dVar4 = dVar12 * *(double *)&param_2->field_0x10;
      dVar24 = (double)CONCAT44(uVar28,uVar27) * *(double *)&param_2->field_0x10;
      dVar5 = dVar5 - dVar24;
      dVar24 = dVar22 * dVar10 - dVar24;
      dVar11 = (double)CONCAT44(uVar28,uVar27) * *(double *)param_2 - dVar20 * dVar22;
      dVar5 = dVar5 + dVar5;
      dVar24 = dVar24 + dVar24;
      dVar11 = dVar11 + dVar11;
      dVar23 = (dVar6 * dVar25 - dVar22 * dVar29) + dVar8 * dVar3 + dVar10;
      uVar16 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar18 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar18,uVar16) <= 0.0) {
        uVar16 = 0;
        uVar18 = 0;
      }
      dVar23 = (dVar12 * *(double *)param_2 - dVar13 * dVar22) +
               (double)CONCAT44(uVar32,uVar31) + dVar8 * dVar3;
      uVar17 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar18,uVar16) <= (double)CONCAT44(uVar19,uVar17)) {
        uVar16 = uVar17;
        uVar18 = uVar19;
      }
      dVar23 = (dVar6 * dVar25 - dVar24 * dVar22) + dVar11 * dVar8 + dVar10;
      uVar17 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = (dVar12 * *(double *)param_2 - dVar5 * dVar22) +
               (double)CONCAT44(uVar32,uVar31) + dVar11 * dVar8;
      dVar10 = *(double *)&param_2->field_0x10;
      if ((double)CONCAT44(uVar18,uVar16) <= (double)CONCAT44(uVar19,uVar17)) {
        uVar16 = uVar17;
        uVar18 = uVar19;
      }
      uVar31 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar32 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar18,uVar16) <= (double)CONCAT44(uVar32,uVar31)) {
        uVar16 = uVar31;
        uVar18 = uVar32;
      }
      dVar23 = (dVar10 * dVar29 - dVar6 * dVar3) + dVar8 * dVar25 + dVar9;
      uVar31 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar32 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar32,uVar31) <= 0.0) {
        uVar31 = 0;
        uVar32 = 0;
      }
      dVar6 = (dVar13 * dVar10 - dVar6 * dVar3) + dVar12 * dVar8 + dVar9;
      uVar17 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar32,uVar31) <= (double)CONCAT44(uVar19,uVar17)) {
        uVar31 = uVar17;
        uVar32 = uVar19;
      }
      dVar23 = *(double *)param_2;
      dVar6 = (dVar24 * dVar10 - dVar11 * *(double *)param_2) +
              (double)CONCAT44(uVar28,uVar27) + dVar8 * dVar25;
      uVar17 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar32,uVar31) <= (double)CONCAT44(uVar19,uVar17)) {
        uVar31 = uVar17;
        uVar32 = uVar19;
      }
      dVar6 = (dVar5 * dVar10 - dVar11 * *(double *)param_2) +
              (double)CONCAT44(uVar28,uVar27) + dVar12 * dVar8;
      uVar27 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar28 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar32,uVar31) <= (double)CONCAT44(uVar28,uVar27)) {
        uVar31 = uVar27;
        uVar32 = uVar28;
      }
      dVar6 = dVar8 * dVar29 + dVar20 + (dVar22 * dVar3 - dVar7 * dVar25);
      dVar3 = dVar13 * dVar8 + dVar20 + (dVar22 * dVar3 - dVar4);
      uVar27 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar28 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar24 = dVar24 * dVar8 + dVar20 + (dVar11 * dVar22 - dVar7 * dVar25);
      dVar6 = dVar5 * dVar8 + dVar20 + (dVar11 * dVar22 - dVar4);
      if ((double)CONCAT44(uVar28,uVar27) <= 0.0) {
        uVar27 = 0;
        uVar28 = 0;
      }
      uVar21 = SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar26 = (uint)((ulonglong)dVar24 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar33 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar34 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar17 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar6 = (*(double *)&(param_1->MMin).field_0x10 + *(double *)&(param_1->MMax).field_0x10) *
              __real_3fe0000000000000 * *(double *)&param_2->field_0x50;
      if ((double)CONCAT44(uVar28,uVar27) <= (double)CONCAT44(uVar34,uVar33)) {
        uVar27 = uVar33;
        uVar28 = uVar34;
      }
      if ((double)CONCAT44(uVar28,uVar27) <= (double)CONCAT44(uVar26,uVar21)) {
        uVar27 = uVar21;
        uVar28 = uVar26;
      }
      dVar1 = (*(double *)&param_1->MMax + dVar1) * __real_3fe0000000000000 *
              *(double *)&param_2->field_0x40;
      dVar30 = (*(double *)&(param_1->MMin).field_0x8 + *(double *)&(param_1->MMax).field_0x8) *
               __real_3fe0000000000000 * dVar30;
      if ((double)CONCAT44(uVar28,uVar27) <= (double)CONCAT44(uVar19,uVar17)) {
        uVar27 = uVar17;
        uVar28 = uVar19;
      }
      dVar25 = dVar6 * dVar22 - dVar30 * dVar10;
      dVar24 = dVar1 * dVar10 - dVar6 * dVar23;
      dVar25 = dVar25 + dVar25;
      dVar24 = dVar24 + dVar24;
      dVar4 = dVar30 * dVar23 - dVar1 * dVar22;
      dVar4 = dVar4 + dVar4;
      dVar3 = (dVar24 * dVar23 - dVar25 * dVar22) + dVar4 * dVar8 + dVar6 +
              *(double *)&param_2->field_0x30;
      dVar6 = (dVar25 * dVar10 - dVar4 * dVar23) + dVar24 * dVar8 + dVar30 +
              *(double *)&param_2->field_0x28;
      dVar1 = (dVar4 * dVar22 - dVar24 * dVar10) + dVar25 * dVar8 + dVar1 +
              *(double *)&param_2->field_0x20;
      *(double *)&__return_storage_ptr__->MMin = dVar1 - (double)CONCAT44(uVar28,uVar27);
      *(double *)&(__return_storage_ptr__->MMin).field_0x8 = dVar6 - (double)CONCAT44(uVar32,uVar31)
      ;
      *(double *)&(__return_storage_ptr__->MMin).field_0x10 =
           dVar3 - (double)CONCAT44(uVar18,uVar16);
      *(double *)&__return_storage_ptr__->MMax = (double)CONCAT44(uVar28,uVar27) + dVar1;
      *(double *)&(__return_storage_ptr__->MMax).field_0x8 = (double)CONCAT44(uVar32,uVar31) + dVar6
      ;
      *(double *)&(__return_storage_ptr__->MMax).field_0x10 =
           (double)CONCAT44(uVar18,uVar16) + dVar3;
      return __return_storage_ptr__;
    }
  }
  uVar14 = *(undefined8 *)&(param_1->MMin).field_0x8;
  uVar2 = *(undefined8 *)&(param_1->MMin).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar14;
  uVar14 = *(undefined8 *)&param_1->MMax;
  uVar15 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar2;
  uVar2 = *(undefined8 *)&(param_1->MMax).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar14;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar15;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar2;
  return __return_storage_ptr__;
}

// TransformedAABBHelper<float> @ 143623c50

TAABB<float,3> * __cdecl
Chaos::TransformedAABBHelper<float>
          (TAABB<float,3> *__return_storage_ptr__,TAABB<float,3> *param_1,
          PMatrix<double,4,4> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_38 [7];
  
  if ((__real_7f7fffff != *(float *)&param_1->MMax) && (__real_7f7fffff != *(float *)&param_1->MMin)
     ) {
    lVar5 = 0;
    local_38[3] = *(double *)&param_2->field_0x60;
    local_38[4] = *(double *)&param_2->field_0x68;
    local_38[5] = *(double *)&param_2->field_0x70;
    local_38[0] = *(double *)&param_2->field_0x60;
    local_38[1] = *(double *)&param_2->field_0x68;
    local_38[2] = *(double *)&param_2->field_0x70;
    do {
      lVar6 = 0;
      pdVar7 = (double *)(&param_2->field_0x0 + lVar5);
      do {
        lVar2 = lVar6 * 4;
        lVar1 = lVar6 * 4;
        lVar6 = lVar6 + 1;
        dVar9 = (double)*(float *)(&(param_1->MMax).field_0x0 + lVar2) * *pdVar7;
        dVar8 = (double)*(float *)(&(param_1->MMin).field_0x0 + lVar1) * *pdVar7;
        pdVar7 = pdVar7 + 4;
        dVar10 = dVar9;
        if (dVar8 <= dVar9) {
          dVar10 = dVar8;
        }
        if (dVar9 <= dVar8) {
          dVar9 = dVar8;
        }
        *(double *)((longlong)local_38 + lVar5 + 0x18) =
             dVar10 + *(double *)((longlong)local_38 + lVar5 + 0x18);
        *(double *)((longlong)local_38 + lVar5) = dVar9 + *(double *)((longlong)local_38 + lVar5);
      } while (lVar6 < 3);
      lVar5 = lVar5 + 8;
    } while (lVar5 < 0x18);
    *(float *)&__return_storage_ptr__->MMin = (float)local_38[3];
    *(float *)&(__return_storage_ptr__->MMin).field_0x4 = (float)local_38[4];
    *(float *)&(__return_storage_ptr__->MMin).field_0x8 = (float)local_38[5];
    *(float *)&__return_storage_ptr__->MMax = (float)local_38[0];
    *(float *)&(__return_storage_ptr__->MMax).field_0x4 = (float)local_38[1];
    *(float *)&(__return_storage_ptr__->MMax).field_0x8 = (float)local_38[2];
    return __return_storage_ptr__;
  }
  uVar4 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  uVar3 = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar4;
  uVar4 = *(undefined4 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar3;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar4;
  return __return_storage_ptr__;
}

// TransformedAABBHelper<double> @ 143623db0

TAABB<double,3> * __cdecl
Chaos::TransformedAABBHelper<double>
          (TAABB<double,3> *__return_storage_ptr__,TAABB<double,3> *param_1,
          PMatrix<double,4,4> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_38 [7];
  
  if ((__real_7fefffffffffffff != *(double *)&param_1->MMax) &&
     (__real_7fefffffffffffff != *(double *)&param_1->MMin)) {
    lVar4 = 0;
    local_38[0] = *(double *)&param_2->field_0x60;
    local_38[1] = (double)*(undefined8 *)&param_2->field_0x68;
    local_38[2] = (double)*(undefined8 *)&param_2->field_0x70;
    local_38[3] = *(double *)&param_2->field_0x60;
    local_38[4] = (double)*(undefined8 *)&param_2->field_0x68;
    local_38[5] = (double)*(undefined8 *)&param_2->field_0x70;
    do {
      lVar5 = 0;
      pdVar6 = (double *)(&param_2->field_0x0 + lVar4);
      do {
        dVar7 = *pdVar6;
        pdVar6 = pdVar6 + 4;
        dVar8 = dVar7 * *(double *)(&(param_1->MMax).field_0x0 + lVar5 * 8);
        dVar7 = dVar7 * *(double *)(&(param_1->MMin).field_0x0 + lVar5 * 8);
        lVar5 = lVar5 + 1;
        dVar9 = dVar8;
        if (dVar7 <= dVar8) {
          dVar9 = dVar7;
        }
        if (dVar8 <= dVar7) {
          dVar8 = dVar7;
        }
        *(double *)((longlong)local_38 + lVar4) = dVar9 + *(double *)((longlong)local_38 + lVar4);
        *(double *)((longlong)local_38 + lVar4 + 0x18) =
             dVar8 + *(double *)((longlong)local_38 + lVar4 + 0x18);
      } while (lVar5 < 3);
      lVar4 = lVar4 + 8;
    } while (lVar4 < 0x18);
    *(double *)&__return_storage_ptr__->MMin = local_38[0];
    *(double *)&(__return_storage_ptr__->MMin).field_0x8 = local_38[1];
    *(double *)&(__return_storage_ptr__->MMin).field_0x10 = local_38[2];
    *(double *)&__return_storage_ptr__->MMax = local_38[3];
    *(double *)&(__return_storage_ptr__->MMax).field_0x8 = local_38[4];
    *(double *)&(__return_storage_ptr__->MMax).field_0x10 = local_38[5];
    return __return_storage_ptr__;
  }
  uVar2 = *(undefined8 *)&(param_1->MMin).field_0x8;
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->MMax;
  uVar3 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// AabbSphereMTD @ 1436244c0

void __cdecl
Chaos::Sweeps::AabbSphereMTD
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          double param_4,double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  double local_c0 [6];
  double local_90 [18];
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar8 = *(double *)param_2;
  dVar9 = *(double *)&param_2->field_0x8;
  dVar1 = *(double *)&param_2->field_0x10;
  local_c0[1] = *(double *)&param_3->field_0x8;
  local_c0[0] = *(double *)param_3;
  dVar10 = local_c0[1];
  if (dVar9 <= local_c0[1]) {
    dVar10 = dVar9;
  }
  local_c0[2] = *(double *)&param_3->field_0x10;
  dVar4 = local_c0[0];
  if (dVar8 <= local_c0[0]) {
    dVar4 = dVar8;
  }
  dVar11 = local_c0[2];
  if (dVar1 <= local_c0[2]) {
    dVar11 = dVar1;
  }
  if (dVar10 <= *(double *)&param_1->field_0x8) {
    dVar10 = *(double *)&param_1->field_0x8;
  }
  if (dVar4 <= *(double *)param_1) {
    dVar4 = *(double *)param_1;
  }
  if (dVar11 <= *(double *)&param_1->field_0x10) {
    dVar11 = *(double *)&param_1->field_0x10;
  }
  dVar3 = local_c0[1] - dVar10;
  dVar5 = local_c0[0] - dVar4;
  dVar2 = local_c0[2] - dVar11;
  auVar12._0_8_ = dVar3 * dVar3 + dVar5 * dVar5 + dVar2 * dVar2;
  auVar12._8_8_ = 0;
  if (auVar12._0_8_ <= __real_3e45798ee2308c3a) {
    dVar11 = (*(double *)param_1 + dVar8) * __real_3fe0000000000000;
    dVar10 = (dVar9 + *(double *)&param_1->field_0x8) * __real_3fe0000000000000;
    dVar4 = (*(double *)&param_1->field_0x10 + dVar1) * __real_3fe0000000000000;
    local_c0[3] = (dVar8 - *(double *)param_1) * __real_3fe0000000000000;
    local_c0[0] = local_c0[0] - dVar11;
    local_c0[4] = (dVar9 - *(double *)&param_1->field_0x8) * __real_3fe0000000000000;
    local_c0[1] = local_c0[1] - dVar10;
    local_c0[5] = (dVar1 - *(double *)&param_1->field_0x10) * __real_3fe0000000000000;
    local_c0[2] = local_c0[2] - dVar4;
    uVar15 = SUB84(local_c0[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar16 = (uint)((ulonglong)local_c0[0] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar13 = SUB84(local_c0[1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar14 = (uint)((ulonglong)local_c0[1] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar17 = SUB84(local_c0[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar18 = (uint)((ulonglong)local_c0[2] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar8 = (double)CONCAT44(uVar16,uVar15);
    local_90[0] = (double)CONCAT44(uVar16,uVar15);
    local_90[1] = (double)CONCAT44(uVar14,uVar13);
    local_90[2] = (double)CONCAT44(uVar18,uVar17);
    if ((double)CONCAT44(uVar16,uVar15) <= (double)CONCAT44(uVar14,uVar13) &&
        (double)CONCAT44(uVar14,uVar13) != (double)CONCAT44(uVar16,uVar15)) {
      dVar8 = (double)CONCAT44(uVar14,uVar13);
    }
    uVar7 = (ulonglong)
            ((double)CONCAT44(uVar16,uVar15) <= (double)CONCAT44(uVar14,uVar13) &&
            (double)CONCAT44(uVar14,uVar13) != (double)CONCAT44(uVar16,uVar15));
    if (dVar8 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar8) {
      uVar7 = 2;
    }
    dVar8 = local_c0[uVar7];
    *(double *)param_7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&param_7->field_0x8 = uVar6;
    *(double *)&param_7->field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar9 = __real_3ff0000000000000;
    if ((dVar8 <= 0.0) && (dVar9 = 0.0, dVar8 < 0.0)) {
      dVar9 = __real_bff0000000000000;
    }
    *(double *)(&param_7->field_0x0 + uVar7 * 8) = dVar9;
    dVar8 = *(double *)&param_7->field_0x8;
    dVar9 = *(double *)&param_7->field_0x10;
    *(double *)param_6 = local_c0[3] * *(double *)param_7 + dVar11;
    *(double *)&param_6->field_0x8 = local_c0[4] * dVar8 + dVar10;
    *(double *)&param_6->field_0x10 = local_c0[5] * dVar9 + dVar4;
    *param_5 = local_c0[uVar7 + 6] - (param_4 + local_c0[uVar7 + 3]);
  }
  else {
    auVar12 = sqrtpd(auVar12,auVar12);
    *(double *)param_6 = dVar4;
    *(double *)&param_6->field_0x8 = dVar10;
    dVar8 = __real_3ff0000000000000;
    *(double *)&param_6->field_0x10 = dVar11;
    dVar8 = dVar8 / auVar12._0_8_;
    *(double *)param_7 = dVar5 * dVar8;
    *(double *)&param_7->field_0x8 = dVar3 * dVar8;
    *(double *)&param_7->field_0x10 = dVar2 * dVar8;
    *param_5 = auVar12._0_8_ - param_4;
  }
  return;
}

// CapsuleSphereMTD @ 143625000

void __cdecl
Chaos::Sweeps::CapsuleSphereMTD
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,double param_5,double *param_6,TVector<double,3> *param_7,
          TVector<double,3> *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_58;
  double local_50;
  double local_48;
  
  local_58 = *(double *)param_1;
  dVar3 = *(double *)param_2 - local_58;
  dVar4 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
  dVar1 = ((*(double *)&param_4->field_0x8 - *(double *)&param_1->field_0x8) * dVar4 +
           (*(double *)param_4 - local_58) * dVar3 +
          (*(double *)&param_4->field_0x10 - *(double *)&param_1->field_0x10) * dVar2) /
          (dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  local_58 = dVar1 * dVar3 + local_58;
  local_50 = dVar1 * dVar4 + *(double *)&param_1->field_0x8;
  local_48 = dVar1 * dVar2 + *(double *)&param_1->field_0x10;
  SphereSphereMTD((TVector<double,3> *)&local_58,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// RayCapsule @ 14362d780

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Chaos::Raycasts::RayCapsule
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          double param_5,double param_6,TVector<double,3> *param_7,TVector<double,3> *param_8,
          TVector<double,3> *param_9,double *param_10,TVector<double,3> *param_11,
          TVector<double,3> *param_12)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TVector<double,3> *pTVar6;
  TVector<double,3> *pTVar7;
  TVector<double,3> *pTVar8;
  TVector<double,3> *pTVar9;
  TVector<double,3> *pTVar10;
  TVector<double,3> *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  longlong lVar15;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar21;
  double dVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  uint uVar27;
  double dVar26;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double local_2a0;
  double local_298;
  double local_290;
  TVector<double,3> *pTStack_288;
  TVector<double,3> *local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  double local_258;
  double local_250;
  double local_248;
  double local_240 [3];
  TVector<double,3> local_228;
  TVector<double,3> local_210;
  TVector<double,3> local_1f8;
  TVector<double,3> local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  double local_198 [6];
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108 [8];
  
  pTVar11 = param_12;
  pTVar6 = param_7;
  dVar33 = __real_3f1a36e2e0000000;
  dVar26 = __real_3ff0000000000000;
  dVar24 = (*(double *)&param_7->field_0x8 * *(double *)&param_7->field_0x8 +
            *(double *)param_7 * *(double *)param_7 +
           *(double *)&param_7->field_0x10 * *(double *)&param_7->field_0x10) -
           __real_3ff0000000000000;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5594370249374826679>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Chaos\\Raycasts.cpp"
                          ,0xb7,
                          "FMath::IsNearlyEqual(CapsuleAxis.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"
                         ), bVar12)) {
    pcVar3 = (code *)swi(3);
    uVar13 = (*pcVar3)();
    return (bool)uVar13;
  }
  dVar24 = (*(double *)&param_2->field_0x8 * *(double *)&param_2->field_0x8 +
            *(double *)param_2 * *(double *)param_2 +
           *(double *)&param_2->field_0x10 * *(double *)&param_2->field_0x10) - dVar26;
  if ((dVar33 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5594370249374826680>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Chaos\\Raycasts.cpp"
                          ,0xb8,
                          "FMath::IsNearlyEqual(RayDir.SizeSquared(), (FReal)1, (FReal)(1.e-4f))"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    uVar13 = (*pcVar3)();
    return (bool)uVar13;
  }
  if ((param_3 < 0.0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5594370249374826681>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Chaos\\Raycasts.cpp"
                          ,0xb9,"RayLength >= 0"), bVar12)) {
    pcVar3 = (code *)swi(3);
    uVar13 = (*pcVar3)();
    return (bool)uVar13;
  }
  pTVar9 = param_9;
  pTVar8 = param_8;
  local_148._s_0.Z = (double)*(undefined8 *)&param_1->field_0x10;
  dVar5 = param_4 + param_5;
  local_128._s_0.Z = (double)*(undefined8 *)&param_9->field_0x10;
  dVar33 = param_3 * *(double *)&param_2->field_0x8 + *(double *)&param_1->field_0x8;
  dVar24 = dVar5 * dVar5;
  local_168._s_0.Z = param_3 * *(double *)&param_2->field_0x10 + *(double *)&param_1->field_0x10;
  local_108[0]._16_8_ = *(undefined8 *)&param_8->field_0x10;
  local_148._s_0.X = (double)*(undefined8 *)param_1;
  local_148._s_0.Y = (double)*(undefined8 *)&param_1->field_0x8;
  local_168._8_4_ = SUB84(dVar33,0);
  local_168._0_8_ = param_3 * *(double *)param_2 + *(double *)param_1;
  local_168._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  local_128._s_0.X = (double)*(undefined8 *)param_9;
  local_128._s_0.Y = (double)*(undefined8 *)&param_9->field_0x8;
  local_108[0]._0_8_ = *(undefined8 *)param_8;
  local_108[0]._8_8_ = *(undefined8 *)&param_8->field_0x8;
  FMath::SegmentDistToSegmentSafe<double>
            ((TVector<double> *)&local_108[0]._s_0,(TVector<double> *)&local_128._s_0,
             (TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0,
             (TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_1c8._s_0);
  pTVar10 = param_11;
  if (dVar24 + __real_3cb0000000000000 <
      (local_1c8._s_0.X - local_1b0._s_0.X) * (local_1c8._s_0.X - local_1b0._s_0.X) +
      (local_1c8._s_0.Y - local_1b0._s_0.Y) * (local_1c8._s_0.Y - local_1b0._s_0.Y) +
      (local_1c8._s_0.Z - local_1b0._s_0.Z) * (local_1c8._s_0.Z - local_1b0._s_0.Z)) {
    return false;
  }
  uVar43 = SUB84(__real_7fefffffffffffff,0);
  uVar44 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  dVar33 = *(double *)&pTVar8->field_0x10;
  uVar35 = SUB84(dVar33,0);
  uVar36 = (undefined4)((ulonglong)dVar33 >> 0x20);
  dVar30 = *(double *)&pTVar8->field_0x8;
  dVar21 = *(double *)pTVar8;
  uVar38 = uVar35;
  uVar40 = uVar36;
  if (__real_7fefffffffffffff <= dVar33) {
    uVar38 = uVar43;
    uVar40 = uVar44;
  }
  if (dVar33 <= __real_ffefffffffffffff) {
    uVar35 = SUB84(__real_ffefffffffffffff,0);
    uVar36 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  }
  dVar33 = *(double *)&pTVar9->field_0x10;
  if (dVar33 <= (double)CONCAT44(uVar40,uVar38)) {
    uVar38 = SUB84(dVar33,0);
    uVar40 = (undefined4)((ulonglong)dVar33 >> 0x20);
  }
  dVar33 = *(double *)&pTVar9->field_0x10;
  if ((double)CONCAT44(uVar36,uVar35) <= dVar33) {
    uVar35 = SUB84(dVar33,0);
    uVar36 = (undefined4)((ulonglong)dVar33 >> 0x20);
  }
  uVar41 = SUB84(dVar30,0);
  uVar42 = (int)((ulonglong)dVar30 >> 0x20);
  if (__real_7fefffffffffffff <= dVar30) {
    uVar41 = uVar43;
    uVar42 = uVar44;
  }
  uVar37 = SUB84(dVar21,0);
  uVar39 = (int)((ulonglong)dVar21 >> 0x20);
  if (__real_7fefffffffffffff <= dVar21) {
    uVar37 = uVar43;
    uVar39 = uVar44;
  }
  if (dVar30 <= __real_ffefffffffffffff) {
    dVar30 = __real_ffefffffffffffff;
  }
  if (dVar21 <= __real_ffefffffffffffff) {
    dVar21 = __real_ffefffffffffffff;
  }
  dVar33 = *(double *)&pTVar9->field_0x8;
  if (dVar33 <= (double)CONCAT44(uVar42,uVar41)) {
    uVar41 = SUB84(dVar33,0);
    uVar42 = (undefined4)((ulonglong)dVar33 >> 0x20);
  }
  dVar33 = *(double *)pTVar9;
  if (dVar33 <= (double)CONCAT44(uVar39,uVar37)) {
    uVar37 = SUB84(dVar33,0);
    uVar39 = (undefined4)((ulonglong)dVar33 >> 0x20);
  }
  if (dVar30 <= *(double *)&pTVar9->field_0x8) {
    dVar30 = *(double *)&pTVar9->field_0x8;
  }
  if (dVar21 <= *(double *)pTVar9) {
    dVar21 = *(double *)pTVar9;
  }
  if (*(double *)param_2 == 0.0) {
    param_7 = (TVector<double,3> *)CONCAT71(param_7._1_7_,1);
    local_198[3] = 0.0;
  }
  else {
    param_7 = (TVector<double,3> *)((ulonglong)param_7._1_7_ << 8);
    local_198[3] = dVar26 / *(double *)param_2;
  }
  pTVar7 = param_7;
  dVar33 = *(double *)&param_2->field_0x8;
  if (dVar33 == 0.0) {
    param_7._0_2_ = CONCAT11(1,(byte)param_7);
    local_198[4] = 0.0;
  }
  else {
    param_7._0_2_ = (ushort)(byte)param_7;
    local_198[4] = dVar26 / dVar33;
  }
  dVar1 = *(double *)&param_2->field_0x10;
  param_7._3_5_ = SUB85(pTVar7,3);
  if (dVar1 == 0.0) {
    param_7._0_3_ = CONCAT12(1,(ushort)param_7);
    local_198[5] = 0.0;
  }
  else {
    param_7._0_3_ = (uint3)(ushort)param_7;
    local_198[5] = dVar26 / dVar1;
  }
  lVar15 = 0;
  dVar22 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  local_198[0] = ((double)CONCAT44(uVar39,uVar37) - dVar5) - *(double *)param_1;
  local_240[0] = (dVar21 + dVar5) - *(double *)param_1;
  local_198[1] = ((double)CONCAT44(uVar42,uVar41) - dVar5) - dVar22;
  local_240[2] = ((double)CONCAT44(uVar36,uVar35) + dVar5) - dVar2;
  uVar35 = 0;
  uVar36 = 0;
  local_198[2] = ((double)CONCAT44(uVar40,uVar38) - dVar5) - dVar2;
  local_240[1] = (dVar30 + dVar5) - dVar22;
  dVar30 = __real_7fefffffffffffff;
  do {
    if (*(char *)((longlong)&param_7 + lVar15) == '\0') {
      dVar25 = local_198[lVar15] * local_198[lVar15 + 3];
      dVar29 = local_198[lVar15 + 3] * local_240[lVar15];
      dVar21 = dVar25;
      if (dVar29 < dVar25) {
        dVar21 = dVar29;
        dVar29 = dVar25;
      }
    }
    else {
      if (0.0 < local_198[lVar15]) {
        return false;
      }
      if (local_240[lVar15] <= 0.0 && local_240[lVar15] != 0.0) {
        return false;
      }
      dVar21 = 0.0;
      dVar29 = __real_7fefffffffffffff;
    }
    if (dVar21 <= (double)CONCAT44(uVar36,uVar35)) {
      dVar21 = (double)CONCAT44(uVar36,uVar35);
    }
    if (dVar30 <= dVar29) {
      dVar29 = dVar30;
    }
    uVar35 = SUB84(dVar21,0);
    uVar36 = (undefined4)((ulonglong)dVar21 >> 0x20);
    if (dVar29 < dVar21) {
      return false;
    }
    lVar15 = lVar15 + 1;
    dVar30 = dVar29;
  } while (lVar15 < 3);
  if (param_3 < dVar21) {
    return false;
  }
  if (dVar29 < 0.0) {
    return false;
  }
  *(double *)param_11 = dVar21 * *(double *)param_2 + *(double *)param_1;
  *(double *)&param_11->field_0x8 = dVar21 * dVar33 + dVar22;
  *(double *)&param_11->field_0x10 = dVar1 * dVar21 + dVar2;
  dVar33 = *(double *)&pTVar8->field_0x10;
  dVar25 = param_3 - dVar21;
  local_250 = *(double *)pTVar6;
  dVar30 = *(double *)&param_2->field_0x10;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar22 = *(double *)param_2;
  param_9 = (TVector<double,3> *)(dVar30 * dVar21 + *(double *)&param_1->field_0x10);
  local_290 = dVar22 * dVar21 + *(double *)param_1;
  param_8 = (TVector<double,3> *)(dVar1 * dVar21 + *(double *)&param_1->field_0x8);
  local_258 = (double)param_9 - dVar33;
  dVar2 = *(double *)&pTVar8->field_0x8;
  dVar29 = *(double *)&pTVar6->field_0x8;
  param_7 = (TVector<double,3> *)((double)param_8 - dVar2);
  dVar28 = local_290 - *(double *)pTVar8;
  local_248 = dVar28 * local_250 + (double)param_7 * dVar29 +
              local_258 * *(double *)&pTVar6->field_0x10;
  if (((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000) <= local_248)
     && (local_248 <= dVar5 + param_6)) {
    dVar31 = local_248;
    if (param_6 <= local_248) {
      dVar31 = param_6;
    }
    if (dVar31 <= 0.0) {
      dVar31 = 0.0;
    }
    dVar4 = local_258 - *(double *)&pTVar6->field_0x10 * dVar31;
    dVar32 = (double)param_7 - dVar29 * dVar31;
    dVar31 = dVar28 - *(double *)pTVar6 * dVar31;
    if (dVar31 * dVar31 + dVar32 * dVar32 + dVar4 * dVar4 <= dVar24) {
      *param_10 = dVar21;
      if (dVar21 <= 0.0) {
        *(double *)param_11 = local_290;
        *(TVector<double,3> **)&param_11->field_0x8 = param_8;
        *(TVector<double,3> **)&param_11->field_0x10 = param_9;
        uVar18 = *(uint *)&param_2->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar19 = *(uint *)&param_2->field_0x8 ^ _UNK_15066df78;
        uVar20 = *(uint *)&param_2->field_0xc ^ _UNK_15066df7c;
        uVar23 = (uint)*(undefined8 *)&param_2->field_0x10 ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar27 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)pTVar11 = *(uint *)param_2 ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)&pTVar11->field_0x4 = uVar18;
        *(uint *)&pTVar11->field_0x8 = uVar19;
        *(uint *)&pTVar11->field_0xc = uVar20;
        *(ulonglong *)&pTVar11->field_0x10 = CONCAT44(uVar27,uVar23);
        return true;
      }
      dVar26 = dVar26 / dVar5;
      *(double *)pTVar11 = dVar31 * dVar26;
      *(double *)&pTVar11->field_0x8 = dVar32 * dVar26;
      *(double *)&pTVar11->field_0x10 = dVar4 * dVar26;
      *(double *)param_11 = local_290 - dVar31 * dVar26 * param_4;
      *(double *)&param_11->field_0x8 = (double)param_8 - dVar32 * dVar26 * param_4;
      *(double *)&param_11->field_0x10 = (double)param_9 - dVar4 * dVar26 * param_4;
      return true;
    }
  }
  if ((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000) {
    return false;
  }
  dVar32 = dVar1 * dVar29 + local_250 * dVar22 + dVar30 * *(double *)&pTVar6->field_0x10;
  dVar31 = dVar26 - dVar32 * dVar32;
  dVar24 = ((dVar28 * dVar28 + (double)param_7 * (double)param_7 + local_258 * local_258) -
           local_248 * local_248) - dVar24;
  if (0.0 < dVar24) {
    dVar28 = (dVar28 * dVar22 + (double)param_7 * dVar1 + local_258 * dVar30) - dVar32 * local_248;
    auVar16._0_8_ = dVar28 * dVar28 - dVar24 * dVar31;
    auVar16._8_8_ = 0;
    if (0.0 <= auVar16._0_8_) {
      if (__real_3f1a36e2eb1c432d <= auVar16._0_8_) {
        if (dVar31 == 0.0) {
          dVar31 = 0.0;
        }
        else {
          auVar17 = sqrtpd(auVar16,auVar16);
          dVar31 = ((double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(dVar28,0) ^ (uint)__xmm_80000000000000008000000000000000)
                   - auVar17._0_8_) / dVar31;
          if (dVar31 < 0.0) {
            return false;
          }
        }
      }
      else if (dVar31 == 0.0) {
        dVar31 = 0.0;
      }
      else {
        dVar31 = (double)CONCAT44((uint)((ulonglong)(dVar28 / dVar31) >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar28 / dVar31,0) ^
                                  (uint)__xmm_80000000000000008000000000000000);
      }
      dVar33 = *(double *)&pTVar8->field_0x8;
      uVar35 = SUB84(dVar33,0);
      uVar36 = (undefined4)((ulonglong)dVar33 >> 0x20);
      dVar24 = *(double *)&pTVar8->field_0x10;
      uVar38 = SUB84(dVar24,0);
      uVar40 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar2 = dVar1 * dVar31 + (double)param_8;
      dVar1 = dVar22 * dVar31 + local_290;
      dVar30 = dVar30 * dVar31 + (double)param_9;
      dVar33 = dVar2 - dVar33;
      dVar22 = dVar1 - *(double *)pTVar8;
      dVar24 = dVar30 - dVar24;
      dVar29 = dVar29 * dVar33 + *(double *)pTVar6 * dVar22 +
               dVar24 * *(double *)&pTVar6->field_0x10;
      if ((0.0 <= dVar29) && (dVar29 < param_6)) {
        dVar26 = dVar26 / dVar5;
        *param_10 = dVar21 + dVar31;
        dVar5 = *(double *)&pTVar6->field_0x8;
        dVar21 = *(double *)&pTVar6->field_0x10;
        dVar22 = (dVar22 - dVar29 * *(double *)pTVar6) * dVar26;
        *(double *)pTVar11 = dVar22;
        dVar33 = (dVar33 - dVar29 * dVar5) * dVar26;
        dVar26 = (dVar24 - dVar29 * dVar21) * dVar26;
        *(double *)&pTVar11->field_0x8 = dVar33;
        *(double *)&pTVar11->field_0x10 = dVar26;
        *(double *)param_11 = dVar1 - dVar22 * param_4;
        *(double *)&param_11->field_0x8 = dVar2 - dVar33 * param_4;
        *(double *)&param_11->field_0x10 = dVar30 - dVar26 * param_4;
        return true;
      }
      if (__real_3f1a36e2eb1c432d > auVar16._0_8_) {
        return false;
      }
      goto LAB_14362e1b6;
    }
  }
  uVar35 = SUB84(dVar2,0);
  uVar36 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar38 = SUB84(dVar33,0);
  uVar40 = (undefined4)((ulonglong)dVar33 >> 0x20);
LAB_14362e1b6:
  local_278 = (float)*(double *)pTVar8;
  fVar34 = (float)param_5;
  local_270 = (float)(double)CONCAT44(uVar40,uVar38);
  local_274 = (float)(double)CONCAT44(uVar36,uVar35);
  local_268 = (float)*(double *)pTVar9;
  local_260 = (float)*(double *)&pTVar9->field_0x10;
  local_264 = (float)*(double *)&pTVar9->field_0x8;
  pTStack_288 = param_8;
  local_280 = param_9;
  local_26c = fVar34;
  local_25c = fVar34;
  bVar12 = RaySphere<double,3>((TVector<double,3> *)&local_290,param_2,dVar25,param_4,
                               (TVector<float,3> *)&local_278,fVar34,&local_2a0,&local_228,
                               &local_210);
  bVar14 = RaySphere<double,3>((TVector<double,3> *)&local_290,param_2,dVar25,param_4,
                               (TVector<float,3> *)&local_268,fVar34,&local_298,&local_1f8,
                               &local_1e0);
  if (!bVar12) {
    if (!bVar14) {
      return false;
    }
    *param_10 = dVar21 + local_298;
    *(undefined8 *)pTVar10 = local_1f8._0_8_;
    *(undefined8 *)&pTVar10->field_0x8 = local_1f8._8_8_;
    *(undefined8 *)&pTVar10->field_0x10 = local_1f8._16_8_;
    *(undefined8 *)pTVar11 = local_1e0._0_8_;
    *(undefined8 *)&pTVar11->field_0x8 = local_1e0._8_8_;
    *(undefined8 *)&pTVar11->field_0x10 = local_1e0._16_8_;
    return true;
  }
  if (!bVar14) {
    *param_10 = dVar21 + local_2a0;
    *(undefined8 *)pTVar10 = local_228._0_8_;
    *(undefined8 *)&pTVar10->field_0x8 = local_228._8_8_;
    *(undefined8 *)&pTVar10->field_0x10 = local_228._16_8_;
    *(undefined8 *)pTVar11 = local_210._0_8_;
    *(undefined8 *)&pTVar11->field_0x8 = local_210._8_8_;
    *(undefined8 *)&pTVar11->field_0x10 = local_210._16_8_;
    return true;
  }
  if (local_298 < local_2a0) {
    *param_10 = dVar21 + local_298;
    *(undefined8 *)pTVar10 = local_1f8._0_8_;
    *(undefined8 *)&pTVar10->field_0x8 = local_1f8._8_8_;
    *(undefined8 *)&pTVar10->field_0x10 = local_1f8._16_8_;
    *(undefined8 *)pTVar11 = local_1e0._0_8_;
    *(undefined8 *)&pTVar11->field_0x8 = local_1e0._8_8_;
    *(undefined8 *)&pTVar11->field_0x10 = local_1e0._16_8_;
    return true;
  }
  *param_10 = dVar21 + local_2a0;
  *(undefined8 *)pTVar10 = local_228._0_8_;
  *(undefined8 *)&pTVar10->field_0x8 = local_228._8_8_;
  *(undefined8 *)&pTVar10->field_0x10 = local_228._16_8_;
  *(undefined8 *)pTVar11 = local_210._0_8_;
  *(undefined8 *)&pTVar11->field_0x8 = local_210._8_8_;
  *(undefined8 *)&pTVar11->field_0x10 = local_210._16_8_;
  return true;
}

// SphereSphereMTD @ 14362f900

void __cdecl
Chaos::Sweeps::SphereSphereMTD
          (TVector<double,3> *param_1,double param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 in_XMM3_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  
  auVar6._8_8_ = in_XMM3_Qb;
  auVar6._0_8_ = param_4;
  dVar8 = *(double *)&param_3->field_0x10 - *(double *)&param_1->field_0x10;
  dVar2 = *(double *)&param_3->field_0x8 - *(double *)&param_1->field_0x8;
  dVar4 = *(double *)param_3 - *(double *)param_1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar4 * dVar4 + dVar2 * dVar2 + dVar8 * dVar8;
  auVar7 = sqrtpd(auVar6,auVar7);
  dVar5 = auVar7._0_8_;
  if (dVar5 <= __real_3e45798ee2308c3a) {
    dVar2 = 0.0;
    dVar4 = 0.0;
    dVar8 = __real_3ff0000000000000;
  }
  else {
    dVar3 = __real_3ff0000000000000 / dVar5;
    dVar2 = dVar3 * dVar2;
    dVar4 = dVar3 * dVar4;
    dVar8 = dVar3 * dVar8;
  }
  *(double *)param_7 = dVar4;
  *(double *)&param_7->field_0x8 = dVar2;
  *(double *)&param_7->field_0x10 = dVar8;
  *param_5 = dVar5 - (param_2 + param_4);
  dVar2 = *(double *)&param_7->field_0x10;
  dVar4 = *(double *)&param_1->field_0x10;
  dVar5 = *(double *)&param_7->field_0x8 * param_2 + *(double *)&param_1->field_0x8;
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = *(double *)param_7 * param_2 + *(double *)param_1;
  auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])param_6 = auVar1;
  *(double *)&param_6->field_0x10 = param_2 * dVar2 + dVar4;
  return;
}

// SweepSphereVsAabb @ 1436303a0

bool __cdecl
Chaos::Sweeps::SweepSphereVsAabb
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          TVector<double,3> *param_5,TVector<double,3> *param_6,ESweepFlags param_7,double *param_8,
          TVector<double,3> *param_9,TVector<double,3> *param_10,int *param_11)

{
  bool bVar1;
  
  bVar1 = Raycasts::RayAabb<double,3>
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10,
                     param_11);
  if (((bVar1) && (*param_8 <= __real_3e45798ee2308c3a)) && ((param_7 & MTD) != None)) {
    AabbSphereMTD(param_5,param_6,param_1,param_4,param_8,param_9,param_10);
  }
  return bVar1;
}

// SweepSphereVsCapsule @ 143630490

bool __cdecl
Chaos::Sweeps::SweepSphereVsCapsule
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          double param_5,double param_6,TVector<double,3> *param_7,TVector<double,3> *param_8,
          TVector<double,3> *param_9,ESweepFlags param_10,double *param_11,
          TVector<double,3> *param_12,TVector<double,3> *param_13)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double local_78;
  double local_70;
  double local_68;
  
  bVar3 = Raycasts::RayCapsule
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_11,param_12,param_13);
  if (((bVar3) && (*param_11 <= __real_3e45798ee2308c3a)) && ((param_10 & MTD) != None)) {
    local_78 = *(double *)param_8;
    dVar4 = *(double *)param_9 - local_78;
    dVar5 = *(double *)&param_9->field_0x8 - *(double *)&param_8->field_0x8;
    dVar2 = *(double *)&param_9->field_0x10 - *(double *)&param_8->field_0x10;
    dVar1 = ((*(double *)&param_1->field_0x8 - *(double *)&param_8->field_0x8) * dVar5 +
             (*(double *)param_1 - local_78) * dVar4 +
            (*(double *)&param_1->field_0x10 - *(double *)&param_8->field_0x10) * dVar2) /
            (dVar4 * dVar4 + dVar5 * dVar5 + dVar2 * dVar2);
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    local_78 = dVar1 * dVar4 + local_78;
    local_70 = dVar1 * dVar5 + *(double *)&param_8->field_0x8;
    local_68 = dVar1 * dVar2 + *(double *)&param_8->field_0x10;
    SphereSphereMTD((TVector<double,3> *)&local_78,param_5,param_1,param_4,param_11,param_12,
                    param_13);
  }
  return bVar3;
}

// SweepSphereVsSphere @ 1436306a0

bool __cdecl
Chaos::Sweeps::SweepSphereVsSphere
          (TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,double param_4,
          TVector<double,3> *param_5,double param_6,ESweepFlags param_7,double *param_8,
          TVector<double,3> *param_9,TVector<double,3> *param_10)

{
  bool bVar1;
  float local_38;
  float local_34;
  float local_30;
  
  local_38 = (float)*(double *)param_5;
  local_34 = (float)*(double *)&param_5->field_0x8;
  local_30 = (float)*(double *)&param_5->field_0x10;
  bVar1 = Raycasts::RaySphere<double,3>
                    (param_1,param_2,param_3,param_4,(TVector<float,3> *)&local_38,(float)param_6,
                     param_8,param_9,param_10);
  if (((bVar1) && (*param_8 <= __real_3e45798ee2308c3a)) && ((param_7 & MTD) != None)) {
    SphereSphereMTD(param_5,param_6,param_1,param_4,param_8,param_9,param_10);
  }
  return bVar1;
}

// TransformedAABBHelperISPC2 @ 143631080

TAABB<float,3> * __cdecl
Chaos::TransformedAABBHelperISPC2
          (TAABB<float,3> *__return_storage_ptr__,TAABB<float,3> *param_1,
          TTransform<double> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((__real_7f7fffff != *(float *)&param_1->MMax) && (__real_7f7fffff != *(float *)&param_1->MMin)
     ) {
    TransformedAABBMixed(param_2,param_1,&param_1->MMax,&local_28,&local_18);
    *(undefined8 *)&__return_storage_ptr__->MMin = local_28;
    *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = local_20;
    *(undefined8 *)&__return_storage_ptr__->MMax = local_18;
    *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = local_10;
    return __return_storage_ptr__;
  }
  uVar2 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  uVar1 = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined4 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar1;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// TransformedAABBHelperISPC2 @ 143631120

TAABB<double,3> * __cdecl
Chaos::TransformedAABBHelperISPC2
          (TAABB<double,3> *__return_storage_ptr__,TAABB<double,3> *param_1,
          TTransform<double> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((__real_7fefffffffffffff != *(double *)&param_1->MMax) &&
     (__real_7fefffffffffffff != *(double *)&param_1->MMin)) {
    TransformedAABB2(param_2,param_1,&param_1->MMax,&local_38,&local_20);
    *(undefined8 *)&__return_storage_ptr__->MMin = local_38;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uStack_30;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = local_28;
    *(undefined8 *)&__return_storage_ptr__->MMax = local_20;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uStack_18;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = local_10;
    return __return_storage_ptr__;
  }
  uVar2 = *(undefined8 *)&(param_1->MMin).field_0x8;
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->MMax;
  uVar3 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// TransformedAABBHelperISPC @ 1436311c0

TAABB<float,3> * __cdecl
Chaos::TransformedAABBHelperISPC
          (TAABB<float,3> *__return_storage_ptr__,TAABB<float,3> *param_1,
          TTransform<double> *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((__real_7f7fffff != *(float *)&param_1->MMax) && (__real_7f7fffff != *(float *)&param_1->MMin)
     ) {
    TransformedAABBMixed(param_2,param_1,&param_1->MMax,&local_28,&local_18);
    *(undefined8 *)&__return_storage_ptr__->MMin = local_28;
    *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = local_20;
    *(undefined8 *)&__return_storage_ptr__->MMax = local_18;
    *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = local_10;
    return __return_storage_ptr__;
  }
  uVar2 = *(undefined4 *)&(param_1->MMin).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  uVar1 = *(undefined8 *)&param_1->MMax;
  *(undefined4 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined4 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar1;
  *(undefined4 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// TransformedAABBHelperISPC @ 143631260

TAABB<double,3> * __cdecl
Chaos::TransformedAABBHelperISPC
          (TAABB<double,3> *__return_storage_ptr__,TAABB<double,3> *param_1,
          TTransform<double> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((__real_7fefffffffffffff != *(double *)&param_1->MMax) &&
     (__real_7fefffffffffffff != *(double *)&param_1->MMin)) {
    TransformedAABB(param_2,param_1,&param_1->MMax,&local_38,&local_20);
    *(undefined8 *)&__return_storage_ptr__->MMin = local_38;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uStack_30;
    *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = local_28;
    *(undefined8 *)&__return_storage_ptr__->MMax = local_20;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uStack_18;
    *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = local_10;
    return __return_storage_ptr__;
  }
  uVar2 = *(undefined8 *)&(param_1->MMin).field_0x8;
  uVar1 = *(undefined8 *)&(param_1->MMin).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&param_1->MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->MMax;
  uVar3 = *(undefined8 *)&(param_1->MMax).field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MMax).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_ChaosCore @ 143631350

void __cdecl IMPLEMENT_MODULE_ChaosCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosAABBTransformISPCEnabled'' @ 150361c10

void __cdecl _dynamic_atexit_destructor_for__CVarChaosAABBTransformISPCEnabled__(void)

{
  CVarChaosAABBTransformISPCEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosAABBTransformISPCEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarChaosAABBTransformOptimized'' @ 150361c30

void __cdecl _dynamic_atexit_destructor_for__CVarChaosAABBTransformOptimized__(void)

{
  CVarChaosAABBTransformOptimized._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarChaosAABBTransformOptimized);
  return;
}

