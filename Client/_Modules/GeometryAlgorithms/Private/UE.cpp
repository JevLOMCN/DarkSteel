// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 65

// AddGeneralizedPolygonToPaths<float,__int64> @ 1494de920

void __cdecl
UE::Geometry::Private::AddGeneralizedPolygonToPaths<float,__int64>
          (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
           *param_1,TGeneralPolygon2<float> *param_2,TVector2<float> *param_3,float *param_4)

{
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> **ppvVar1;
  int iVar2;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar3;
  Point<__int64> *pPVar4;
  Point<__int64> *pPVar5;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar6;
  Point<__int64> *pPVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> local_58;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> local_40;
  
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::reserve(param_1,((longlong)(param_1->_Mypair)._Myval2._Mylast -
                    (longlong)(param_1->_Mypair)._Myval2._Myfirst) / 0x18 +
                    (longlong)(param_2->Holes).ArrayNum + 1);
  pvVar6 = ConvertPolygonToPath<float,__int64>(&local_58,&param_2->Outer,param_3,param_4);
  pvVar3 = (param_1->_Mypair)._Myval2._Mylast;
  if (pvVar3 == (param_1->_Mypair)._Myval2._Myend) {
    std::
    vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
    ::
    _Emplace_reallocate<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
              (param_1,pvVar3,pvVar6);
  }
  else {
    pPVar7 = (pvVar6->_Mypair)._Myval2._Myfirst;
    pPVar4 = (pvVar6->_Mypair)._Myval2._Mylast;
    pPVar5 = (pvVar6->_Mypair)._Myval2._Myend;
    (pvVar6->_Mypair)._Myval2._Myend = (Point<__int64> *)0x0;
    (pvVar6->_Mypair)._Myval2._Mylast = (Point<__int64> *)0x0;
    (pvVar6->_Mypair)._Myval2._Myfirst = (Point<__int64> *)0x0;
    (pvVar3->_Mypair)._Myval2._Myfirst = pPVar7;
    (pvVar3->_Mypair)._Myval2._Mylast = pPVar4;
    (pvVar3->_Mypair)._Myval2._Myend = pPVar5;
    ppvVar1 = &(param_1->_Mypair)._Myval2._Mylast;
    *ppvVar1 = *ppvVar1 + 1;
  }
  if (local_58._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    uVar8 = (longlong)local_58._Mypair._Myval2._Myend - (longlong)local_58._Mypair._Myval2._Myfirst
            & 0xfffffffffffffff0;
    pPVar7 = local_58._Mypair._Myval2._Myfirst;
    if (0xfff < uVar8) {
      pPVar7 = (Point<__int64> *)local_58._Mypair._Myval2._Myfirst[-1].y;
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_58._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar7)))
      {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar7,uVar8);
    local_58._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
    local_58._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
    local_58._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
  }
  pFVar10 = (param_2->Holes).AllocatorInstance.Data;
  iVar2 = (param_2->Holes).ArrayNum;
  pFVar9 = pFVar10 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_2->Holes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    pvVar6 = ConvertPolygonToPath<float,__int64>
                       (&local_40,(TPolygon2<float> *)pFVar10,param_3,param_4);
    pvVar3 = (param_1->_Mypair)._Myval2._Mylast;
    if (pvVar3 == (param_1->_Mypair)._Myval2._Myend) {
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::
      _Emplace_reallocate<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                (param_1,pvVar3,pvVar6);
    }
    else {
      pPVar7 = (pvVar6->_Mypair)._Myval2._Myfirst;
      pPVar4 = (pvVar6->_Mypair)._Myval2._Mylast;
      pPVar5 = (pvVar6->_Mypair)._Myval2._Myend;
      (pvVar6->_Mypair)._Myval2._Myend = (Point<__int64> *)0x0;
      (pvVar6->_Mypair)._Myval2._Mylast = (Point<__int64> *)0x0;
      (pvVar6->_Mypair)._Myval2._Myfirst = (Point<__int64> *)0x0;
      (pvVar3->_Mypair)._Myval2._Myfirst = pPVar7;
      (pvVar3->_Mypair)._Myval2._Mylast = pPVar4;
      (pvVar3->_Mypair)._Myval2._Myend = pPVar5;
      ppvVar1 = &(param_1->_Mypair)._Myval2._Mylast;
      *ppvVar1 = *ppvVar1 + 1;
    }
    if (local_40._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
      uVar8 = (longlong)local_40._Mypair._Myval2._Myend -
              (longlong)local_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
      pPVar7 = local_40._Mypair._Myval2._Myfirst;
      if (0xfff < uVar8) {
        pPVar7 = (Point<__int64> *)local_40._Mypair._Myval2._Myfirst[-1].y;
        uVar8 = uVar8 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_40._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar7))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pPVar7,uVar8);
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// AddGeneralizedPolygonToPaths<double,__int64> @ 1494deb50

void __cdecl
UE::Geometry::Private::AddGeneralizedPolygonToPaths<double,__int64>
          (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
           *param_1,TGeneralPolygon2<double> *param_2,TVector2<double> *param_3,double *param_4)

{
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> **ppvVar1;
  int iVar2;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar3;
  Point<__int64> *pPVar4;
  Point<__int64> *pPVar5;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar6;
  Point<__int64> *pPVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> local_58;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> local_40;
  
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::reserve(param_1,((longlong)(param_1->_Mypair)._Myval2._Mylast -
                    (longlong)(param_1->_Mypair)._Myval2._Myfirst) / 0x18 +
                    (longlong)(param_2->Holes).ArrayNum + 1);
  pvVar6 = ConvertPolygonToPath<double,__int64>(&local_58,&param_2->Outer,param_3,param_4);
  pvVar3 = (param_1->_Mypair)._Myval2._Mylast;
  if (pvVar3 == (param_1->_Mypair)._Myval2._Myend) {
    std::
    vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
    ::
    _Emplace_reallocate<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
              (param_1,pvVar3,pvVar6);
  }
  else {
    pPVar7 = (pvVar6->_Mypair)._Myval2._Myfirst;
    pPVar4 = (pvVar6->_Mypair)._Myval2._Mylast;
    pPVar5 = (pvVar6->_Mypair)._Myval2._Myend;
    (pvVar6->_Mypair)._Myval2._Myend = (Point<__int64> *)0x0;
    (pvVar6->_Mypair)._Myval2._Mylast = (Point<__int64> *)0x0;
    (pvVar6->_Mypair)._Myval2._Myfirst = (Point<__int64> *)0x0;
    (pvVar3->_Mypair)._Myval2._Myfirst = pPVar7;
    (pvVar3->_Mypair)._Myval2._Mylast = pPVar4;
    (pvVar3->_Mypair)._Myval2._Myend = pPVar5;
    ppvVar1 = &(param_1->_Mypair)._Myval2._Mylast;
    *ppvVar1 = *ppvVar1 + 1;
  }
  if (local_58._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    uVar8 = (longlong)local_58._Mypair._Myval2._Myend - (longlong)local_58._Mypair._Myval2._Myfirst
            & 0xfffffffffffffff0;
    pPVar7 = local_58._Mypair._Myval2._Myfirst;
    if (0xfff < uVar8) {
      pPVar7 = (Point<__int64> *)local_58._Mypair._Myval2._Myfirst[-1].y;
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_58._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar7)))
      {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar7,uVar8);
    local_58._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
    local_58._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
    local_58._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
  }
  pFVar10 = (param_2->Holes).AllocatorInstance.Data;
  iVar2 = (param_2->Holes).ArrayNum;
  pFVar9 = pFVar10 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((param_2->Holes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    pvVar6 = ConvertPolygonToPath<double,__int64>
                       (&local_40,(TPolygon2<double> *)pFVar10,param_3,param_4);
    pvVar3 = (param_1->_Mypair)._Myval2._Mylast;
    if (pvVar3 == (param_1->_Mypair)._Myval2._Myend) {
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::
      _Emplace_reallocate<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                (param_1,pvVar3,pvVar6);
    }
    else {
      pPVar7 = (pvVar6->_Mypair)._Myval2._Myfirst;
      pPVar4 = (pvVar6->_Mypair)._Myval2._Mylast;
      pPVar5 = (pvVar6->_Mypair)._Myval2._Myend;
      (pvVar6->_Mypair)._Myval2._Myend = (Point<__int64> *)0x0;
      (pvVar6->_Mypair)._Myval2._Mylast = (Point<__int64> *)0x0;
      (pvVar6->_Mypair)._Myval2._Myfirst = (Point<__int64> *)0x0;
      (pvVar3->_Mypair)._Myval2._Myfirst = pPVar7;
      (pvVar3->_Mypair)._Myval2._Mylast = pPVar4;
      (pvVar3->_Mypair)._Myval2._Myend = pPVar5;
      ppvVar1 = &(param_1->_Mypair)._Myval2._Mylast;
      *ppvVar1 = *ppvVar1 + 1;
    }
    if (local_40._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
      uVar8 = (longlong)local_40._Mypair._Myval2._Myend -
              (longlong)local_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
      pPVar7 = local_40._Mypair._Myval2._Myfirst;
      if (0xfff < uVar8) {
        pPVar7 = (Point<__int64> *)local_40._Mypair._Myval2._Myfirst[-1].y;
        uVar8 = uVar8 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_40._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar7))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pPVar7,uVar8);
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// ApplyOffsetsToGeneralPolygons<double> @ 1494ded80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::Private::ApplyOffsetsToGeneralPolygons<double>
          (TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_1,
          EPolygonOffsetJoinType *param_2,EPolygonOffsetEndType *param_3,
          TArrayView<double_const_,int> *param_4,double *param_5,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_6,
          bool param_7,double param_8,double param_9)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  TGeneralPolygon2<double> *pTVar5;
  PolyPath<__int64> *this;
  code *pcVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  PolyPath<__int64> **ppPVar12;
  PolyPath<__int64> **ppPVar13;
  double dVar14;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar15;
  PolyPath<__int64> **ppPVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  double *pdVar23;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  *pvVar24;
  TPolygon2<double> *this_00;
  longlong lVar25;
  Point<double> *pPVar26;
  ulong64 uVar27;
  ForAnyElementType FVar28;
  ulonglong uVar29;
  Point<__int64> *pPVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  Group *pGVar34;
  Group *pGVar35;
  int *piVar36;
  char cVar37;
  FScriptContainerElement *pFVar38;
  ulonglong uVar39;
  FScriptContainerElement *pFVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 local_3b8;
  undefined1 local_3b7 [7];
  double local_3b0;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_3a8;
  TVector2<double>_u_0 local_390;
  double local_380;
  double dStack_378;
  TGeneralPolygon2<double> *local_370;
  TPolygon2<double> local_368;
  FScriptContainerElement local_358;
  void *local_350;
  undefined8 local_348;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_340;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_330;
  ClipperOffset local_318;
  undefined1 local_278 [8];
  Point<__int64> *local_270;
  Point<__int64> *local_268;
  Point<__int64> *pPStack_260;
  PolyPath<__int64> **local_258;
  PolyPath<__int64> **ppPStack_250;
  PolyPath<__int64> **local_248;
  PolyPath<__int64> *local_240;
  TVector2<double>_u_0 local_238;
  double local_228;
  double local_220;
  TGeneralPolygon2<double> *local_218;
  TPolygon2<double> local_210;
  ClipperBase local_1f8;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_108 [7];
  
  dVar14 = __real_ffefffffffffffff;
  uVar29 = __real_7fefffffffffffff;
  local_370 = param_1->DataPtr;
  local_218 = local_370 + param_1->ArrayNum;
  local_390._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_390._s_0.Y = _UNK_150a9e648;
  local_380 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_378 = _UNK_1508ffb58;
  local_210.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)local_370;
  if (local_370 != local_218) {
    piVar36 = &(local_370->Holes).ArrayNum;
    do {
      TPolygon2<double>::Bounds(&local_370->Outer,(TAxisAlignedBox2<double> *)&local_238._s_0);
      iVar21 = *piVar36;
      pFVar38 = (((TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *)
                 (piVar36 + -2))->AllocatorInstance).Data;
      uVar44 = SUB84(local_238._s_0.X,0);
      uVar45 = (undefined4)((ulonglong)local_238._0_8_ >> 0x20);
      pFVar40 = pFVar38 + (longlong)iVar21 * 0x10;
      dVar47 = local_220;
      uVar11 = local_238._s_0.Y;
      dVar41 = local_228;
      while( true ) {
        if (*piVar36 != iVar21) {
          local_3b8 = 0;
          `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_3b8);
        }
        if (pFVar38 == pFVar40) break;
        local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
        CopyToEmpty<UE::Math::TVector2<double>,int>
                  (&local_340,*(TVector2<double> **)pFVar38,*(int *)(pFVar38 + 8),0);
        auVar46._8_8_ = 0;
        auVar46._0_8_ = uVar29;
        iVar20 = local_340.ArrayNum;
        pFVar31 = local_340.AllocatorInstance.Data + (longlong)iVar20 * 0x10;
        uVar22 = local_340._8_8_;
        FVar28.Data = local_340.AllocatorInstance.Data;
        dVar8 = (double)uVar29;
        dVar9 = dVar14;
        dVar10 = dVar14;
        while( true ) {
          if ((int)uVar22 != iVar20) {
            local_3b7[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_3b7);
            uVar22 = local_340._8_8_;
          }
          if (FVar28.Data == pFVar31) break;
          dVar3 = *(double *)FVar28.Data;
          if (dVar3 < auVar46._0_8_) {
            auVar46._8_8_ = 0;
            auVar46._0_8_ = dVar3;
          }
          if (dVar10 < dVar3) {
            dVar10 = dVar3;
          }
          dVar3 = *(double *)(FVar28.Data + 8);
          if (dVar3 < dVar8) {
            dVar8 = dVar3;
          }
          if (dVar9 < dVar3) {
            dVar9 = dVar3;
          }
          FVar28.Data = FVar28.Data + 0x10;
        }
        if (auVar46._0_8_ <= (double)CONCAT44(uVar45,uVar44)) {
          uVar44 = auVar46._0_4_;
          uVar45 = auVar46._4_4_;
        }
        if (dVar8 <= (double)uVar11) {
          uVar11 = dVar8;
        }
        if (dVar41 <= dVar10) {
          dVar41 = dVar10;
        }
        if (dVar47 <= dVar9) {
          dVar47 = dVar9;
        }
        if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.AllocatorInstance.Data);
        }
        pFVar38 = pFVar38 + 0x10;
      }
      local_238._s_0.X = (double)CONCAT44(uVar45,uVar44);
      if ((double)CONCAT44(uVar45,uVar44) <= local_390._s_0.X) {
        local_390._s_0.X = (double)CONCAT44(uVar45,uVar44);
      }
      if ((double)uVar11 <= local_390._s_0.Y) {
        local_390._s_0.Y = (double)uVar11;
      }
      if (local_380 <= dVar41) {
        local_380 = dVar41;
      }
      if (dStack_378 <= dVar47) {
        dStack_378 = dVar47;
      }
      piVar36 = piVar36 + 10;
      local_370 = local_370 + 1;
      local_238._s_0.Y = (double)uVar11;
      local_228 = dVar41;
      local_220 = dVar47;
    } while (local_370 != local_218);
  }
  pTVar5 = local_218;
  dVar14 = __real_3e45798ee2308c3a;
  uVar29 = 0;
  pdVar23 = param_4->DataPtr;
  uVar4 = param_4->ArrayNum;
  uVar32 = (ulonglong)(int)uVar4;
  uVar44 = 0;
  uVar45 = 0;
  pdVar2 = pdVar23 + uVar32;
  if (pdVar23 != pdVar2) {
    if (*param_3 == Polygon) {
      do {
        dVar41 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        if (dVar41 <= 0.0) {
          dVar41 = 0.0;
        }
        if (dVar41 <= (double)CONCAT44(uVar45,uVar44)) {
          dVar41 = (double)CONCAT44(uVar45,uVar44);
        }
        uVar44 = SUB84(dVar41,0);
        uVar45 = (undefined4)((ulonglong)dVar41 >> 0x20);
      } while (pdVar23 != pdVar2);
    }
    else {
      do {
        dVar41 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        dVar41 = (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        if (dVar41 <= (double)CONCAT44(uVar45,uVar44)) {
          dVar41 = (double)CONCAT44(uVar45,uVar44);
        }
        uVar44 = SUB84(dVar41,0);
        uVar45 = (undefined4)((ulonglong)dVar41 >> 0x20);
      } while (pdVar23 != pdVar2);
    }
  }
  if (*param_2 == Miter) {
    dVar41 = *param_5;
  }
  else {
    dVar41 = 0.0;
  }
  dVar41 = dVar41 + (double)CONCAT44(uVar45,uVar44);
  local_3a8._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  dStack_378 = dStack_378 + dVar41;
  local_380 = local_380 + dVar41;
  local_390._s_0.X = local_390._s_0.X - dVar41;
  local_390._s_0.Y = local_390._s_0.Y - dVar41;
  local_3a8._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_3a8._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  auVar43._0_8_ = local_380 - local_390._s_0.X;
  auVar43._8_8_ = 0;
  local_3b0 = dStack_378 - local_390._s_0.Y;
  if (dStack_378 - local_390._s_0.Y <= auVar43._0_8_) {
    local_3b0 = auVar43._0_8_;
  }
  dVar41 = __real_409f400000000000;
  dVar47 = __real_433fffffffffffff;
  dVar8 = ___xmm_00000000000000004000000000000000;
  dVar9 = _UNK_15076ace8;
  dVar10 = __real_3ca0000000000001;
  FVar28.Data = local_210.Vertices.AllocatorInstance.Data;
  if (local_3b0 <= __real_3e45798ee2308c3a) {
    local_3b0 = __real_3e45798ee2308c3a;
  }
  for (; __real_409f400000000000 = dVar41, __real_433fffffffffffff = dVar47,
      ___xmm_00000000000000004000000000000000 = dVar8, _UNK_15076ace8 = dVar9,
      __real_3ca0000000000001 = dVar10, (TGeneralPolygon2<double> *)FVar28.Data != pTVar5;
      FVar28.Data = (FScriptContainerElement *)((longlong)FVar28.Data + 0x28)) {
    AddGeneralizedPolygonToPaths<double,__int64>
              (&local_3a8,(TGeneralPolygon2<double> *)FVar28.Data,
               (TVector2<double> *)&local_390._s_0,&local_3b0);
    dVar41 = __real_409f400000000000;
    dVar47 = __real_433fffffffffffff;
    dVar8 = ___xmm_00000000000000004000000000000000;
    dVar9 = _UNK_15076ace8;
    dVar10 = __real_3ca0000000000001;
  }
  if (0 < (int)uVar4) {
    uVar33 = uVar32;
    uVar39 = uVar29;
    if (param_9 <= dVar14) {
      param_9 = dVar14;
    }
    do {
      local_318.groups_._Mypair._Myval2._Myend = (Group *)0x0;
      local_318.join_type_ = Square;
      local_318.preserve_collinear_ = false;
      local_318.reverse_solution_ = false;
      local_318.group_delta_ = 0.0;
      local_318.abs_group_delta_ = 0.0;
      local_318.norms._Mypair._Myval2._Myfirst = (Point<double> *)0x0;
      local_318.norms._Mypair._Myval2._Mylast = (Point<double> *)0x0;
      local_318.solution._Mypair._Myval2._Mylast =
           (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
      local_318.solution._Mypair._Myval2._Myend =
           (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
      local_318.BoundsScaleFactor = local_3b0 * dVar10;
      local_318.temp_lim_ = 0.0;
      local_318.steps_per_rad_ = 0.0;
      local_318.norms._Mypair._Myval2._Myend = (Point<double> *)0x0;
      local_318.solution._Mypair._Myval2._Myfirst =
           (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
      local_318.groups_._Mypair._Myval2._Myfirst = (Group *)0x0;
      local_318.groups_._Mypair._Myval2._Mylast = (Group *)0x0;
      local_318.MaxStepsPerRadian = dVar41;
      if ((0.0 < param_8) && (local_318.MaxStepsPerRadian = param_8, dVar41 <= param_8)) {
        local_318.MaxStepsPerRadian = dVar41;
      }
      uVar7 = (uint)uVar29;
      local_318.merge_groups_ = uVar7 + 1 != (uint)uVar33;
      local_318.miter_limit_ = dVar8;
      local_318.arc_tolerance_ = dVar9;
      local_318.CustomStepsPerRadScaleFactor = param_9;
      Clipper2Lib::ClipperOffset::AddPaths(&local_318,&local_3a8,(uint)*param_2,(uint)*param_3);
      local_318.miter_limit_ = *param_5;
      uVar19 = 0;
      if ((int)uVar7 < param_4->ArrayNum) {
        uVar19 = ~uVar7 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
      auVar42._0_8_ = (param_4->DataPtr[uVar39] / local_3b0) * dVar47;
      auVar42._8_8_ = 0;
      auVar43 = roundpd(auVar43,auVar42,1);
      pvVar24 = Clipper2Lib::ClipperOffset::Execute(&local_318,local_108,auVar43._0_8_);
      if (&local_3a8 != pvVar24) {
        std::
        vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
        ::_Tidy(&local_3a8);
        local_3a8._Mypair._Myval2._Myfirst = (pvVar24->_Mypair)._Myval2._Myfirst;
        local_3a8._Mypair._Myval2._Mylast = (pvVar24->_Mypair)._Myval2._Mylast;
        local_3a8._Mypair._Myval2._Myend = (pvVar24->_Mypair)._Myval2._Myend;
        (pvVar24->_Mypair)._Myval2._Myfirst =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
        (pvVar24->_Mypair)._Myval2._Mylast =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
        (pvVar24->_Mypair)._Myval2._Myend =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
      }
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(local_108);
      pGVar35 = local_318.groups_._Mypair._Myval2._Mylast;
      lVar25 = (longlong)local_3a8._Mypair._Myval2._Mylast -
               (longlong)local_3a8._Mypair._Myval2._Myfirst >> 0x3f;
      if (((longlong)local_3a8._Mypair._Myval2._Mylast -
          (longlong)local_3a8._Mypair._Myval2._Myfirst) / 0x18 + lVar25 == lVar25) {
        TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::Reset(param_6,0)
        ;
        pGVar35 = local_318.groups_._Mypair._Myval2._Mylast;
        pGVar34 = local_318.groups_._Mypair._Myval2._Myfirst;
        if (local_318.groups_._Mypair._Myval2._Myfirst != local_318.groups_._Mypair._Myval2._Mylast)
        {
          do {
            std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
            _Tidy(&pGVar34->path_);
            std::
            vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
            ::_Tidy(&pGVar34->paths_out_);
            std::
            vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
            ::_Tidy(&pGVar34->paths_in_);
            pGVar34 = pGVar34 + 1;
          } while (pGVar34 != pGVar35);
          local_318.groups_._Mypair._Myval2._Mylast = local_318.groups_._Mypair._Myval2._Myfirst;
        }
        pGVar35 = local_318.groups_._Mypair._Myval2._Mylast;
        if (local_318.norms._Mypair._Myval2._Myfirst != local_318.norms._Mypair._Myval2._Mylast) {
          local_318.norms._Mypair._Myval2._Mylast = local_318.norms._Mypair._Myval2._Myfirst;
        }
        pGVar34 = local_318.groups_._Mypair._Myval2._Myfirst;
        if (local_318.groups_._Mypair._Myval2._Myfirst != (Group *)0x0) {
          for (; pGVar34 != pGVar35; pGVar34 = pGVar34 + 1) {
            std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
            _Tidy(&pGVar34->path_);
            std::
            vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
            ::_Tidy(&pGVar34->paths_out_);
            std::
            vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
            ::_Tidy(&pGVar34->paths_in_);
          }
          uVar27 = (((longlong)local_318.groups_._Mypair._Myval2._Myend -
                    (longlong)local_318.groups_._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
          pGVar35 = local_318.groups_._Mypair._Myval2._Myfirst;
          if (0xfff < uVar27) {
            pGVar35 = *(Group **)&local_318.groups_._Mypair._Myval2._Myfirst[-1].end_type_;
            uVar27 = uVar27 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_318.groups_._Mypair._Myval2._Myfirst +
                       (-8 - (longlong)pGVar35))) goto LAB_1494df721;
          }
          ::operator_delete(pGVar35,uVar27);
          local_318.groups_._Mypair._Myval2._Myfirst = (Group *)0x0;
          local_318.groups_._Mypair._Myval2._Mylast = (Group *)0x0;
          local_318.groups_._Mypair._Myval2._Myend = (Group *)0x0;
        }
        pvVar15 = local_318.solution._Mypair._Myval2._Mylast;
        pPVar30 = (Point<__int64> *)local_318.solution._Mypair._Myval2._Myfirst;
        if ((Point<__int64> *)local_318.solution._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0)
        {
          for (; pPVar30 != (Point<__int64> *)pvVar15;
              pPVar30 = (Point<__int64> *)((longlong)(pPVar30 + 1) + 8)) {
            std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
            _Tidy((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                   *)pPVar30);
          }
          uVar27 = (((longlong)local_318.solution._Mypair._Myval2._Myend -
                    (longlong)local_318.solution._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
          pPVar30 = (Point<__int64> *)local_318.solution._Mypair._Myval2._Myfirst;
          if (0xfff < uVar27) {
            pPVar30 = (Point<__int64> *)
                      ((Point<__int64> *)
                      ((longlong)local_318.solution._Mypair._Myval2._Myfirst + -0x10))->y;
            uVar27 = uVar27 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_318.solution._Mypair._Myval2._Myfirst +
                       (-8 - (longlong)pPVar30))) goto LAB_1494df721;
          }
          ::operator_delete(pPVar30,uVar27);
          local_318.solution._Mypair._Myval2._Mylast =
               (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
               0x0;
          local_318.solution._Mypair._Myval2._Myend =
               (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
               0x0;
          local_318.solution._Mypair._Myval2._Myfirst =
               (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
               0x0;
        }
        if (local_318.norms._Mypair._Myval2._Myfirst != (Point<double> *)0x0) {
          uVar27 = (longlong)local_318.norms._Mypair._Myval2._Myend -
                   (longlong)local_318.norms._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
          pPVar26 = local_318.norms._Mypair._Myval2._Myfirst;
          if (0xfff < uVar27) {
            pPVar26 = (Point<double> *)local_318.norms._Mypair._Myval2._Myfirst[-1].y;
            uVar27 = uVar27 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_318.norms._Mypair._Myval2._Myfirst +
                       (-8 - (longlong)pPVar26))) {
LAB_1494df721:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(pPVar26,uVar27);
        }
        cVar37 = '\x01';
        goto LAB_1494dfcdc;
      }
      pGVar34 = local_318.groups_._Mypair._Myval2._Myfirst;
      if (local_318.groups_._Mypair._Myval2._Myfirst != local_318.groups_._Mypair._Myval2._Mylast) {
        do {
          std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
          _Tidy(&pGVar34->path_);
          std::
          vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
          ::_Tidy(&pGVar34->paths_out_);
          std::
          vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
          ::_Tidy(&pGVar34->paths_in_);
          pGVar34 = pGVar34 + 1;
        } while (pGVar34 != pGVar35);
        local_318.groups_._Mypair._Myval2._Mylast = local_318.groups_._Mypair._Myval2._Myfirst;
      }
      pGVar35 = local_318.groups_._Mypair._Myval2._Mylast;
      if (local_318.norms._Mypair._Myval2._Myfirst != local_318.norms._Mypair._Myval2._Mylast) {
        local_318.norms._Mypair._Myval2._Mylast = local_318.norms._Mypair._Myval2._Myfirst;
      }
      pGVar34 = local_318.groups_._Mypair._Myval2._Myfirst;
      if (local_318.groups_._Mypair._Myval2._Myfirst != (Group *)0x0) {
        for (; pGVar34 != pGVar35; pGVar34 = pGVar34 + 1) {
          std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
          _Tidy(&pGVar34->path_);
          std::
          vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
          ::_Tidy(&pGVar34->paths_out_);
          std::
          vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
          ::_Tidy(&pGVar34->paths_in_);
        }
        uVar27 = (((longlong)local_318.groups_._Mypair._Myval2._Myend -
                  (longlong)local_318.groups_._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
        pGVar35 = local_318.groups_._Mypair._Myval2._Myfirst;
        if (0xfff < uVar27) {
          pGVar35 = *(Group **)&local_318.groups_._Mypair._Myval2._Myfirst[-1].end_type_;
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_318.groups_._Mypair._Myval2._Myfirst +
                     (-8 - (longlong)pGVar35))) goto LAB_1494df721;
        }
        ::operator_delete(pGVar35,uVar27);
        local_318.groups_._Mypair._Myval2._Myfirst = (Group *)0x0;
        local_318.groups_._Mypair._Myval2._Mylast = (Group *)0x0;
        local_318.groups_._Mypair._Myval2._Myend = (Group *)0x0;
      }
      pvVar15 = local_318.solution._Mypair._Myval2._Mylast;
      pPVar30 = (Point<__int64> *)local_318.solution._Mypair._Myval2._Myfirst;
      if ((Point<__int64> *)local_318.solution._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
        for (; pPVar30 != (Point<__int64> *)pvVar15; pPVar30 = (Point<__int64> *)&pPVar30[1].y) {
          std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
          _Tidy((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *
                )pPVar30);
        }
        uVar27 = (((longlong)local_318.solution._Mypair._Myval2._Myend -
                  (longlong)local_318.solution._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
        pPVar30 = (Point<__int64> *)local_318.solution._Mypair._Myval2._Myfirst;
        if (0xfff < uVar27) {
          pPVar30 = (Point<__int64> *)
                    ((Point<__int64> *)
                    ((longlong)local_318.solution._Mypair._Myval2._Myfirst + -0x10))->y;
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_318.solution._Mypair._Myval2._Myfirst +
                     (-8 - (longlong)pPVar30))) goto LAB_1494df721;
        }
        ::operator_delete(pPVar30,uVar27);
        local_318.solution._Mypair._Myval2._Mylast =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
        local_318.solution._Mypair._Myval2._Myend =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
        local_318.solution._Mypair._Myval2._Myfirst =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
      }
      if (local_318.norms._Mypair._Myval2._Myfirst != (Point<double> *)0x0) {
        uVar27 = (longlong)local_318.norms._Mypair._Myval2._Myend -
                 (longlong)local_318.norms._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        pPVar26 = local_318.norms._Mypair._Myval2._Myfirst;
        if (0xfff < uVar27) {
          pPVar26 = (Point<double> *)local_318.norms._Mypair._Myval2._Myfirst[-1].y;
          uVar27 = uVar27 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_318.norms._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar26))
             ) goto LAB_1494df721;
        }
        ::operator_delete(pPVar26,uVar27);
      }
      uVar29 = (ulonglong)(uVar7 + 1);
      if ((longlong)uVar32 <= (longlong)(uVar39 + 1)) break;
      uVar33 = (ulonglong)uVar4;
      uVar39 = uVar39 + 1;
    } while( true );
  }
  cVar37 = '\x01';
  if ((ulonglong)
      (((longlong)local_3a8._Mypair._Myval2._Mylast - (longlong)local_3a8._Mypair._Myval2._Myfirst)
      / 0x18) < 2) {
    TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::Reset(param_6,0);
    this_00 = ConvertPathToPolygon<__int64,double>
                        (&local_210,local_3a8._Mypair._Myval2._Mylast + -1,
                         (TVector2<double> *)&local_390._s_0,&local_3b0);
    TPolygon2<double>::TPolygon2<double>(&local_368,this_00);
    local_350 = (void *)0x0;
    local_348 = 0;
    local_358 = (FScriptContainerElement)TPolygon2<double>::IsClockwise(this_00);
    pFVar38 = (param_6->AllocatorInstance).Data;
    if (((pFVar38 <= (FScriptContainerElement *)&local_368) &&
        ((FScriptContainerElement *)&local_368 < pFVar38 + (longlong)param_6->ArrayMax * 0x28)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar6 = (code *)swi(3);
      uVar18 = (*pcVar6)();
      return (bool)uVar18;
    }
    iVar21 = param_6->ArrayNum;
    if (iVar21 == param_6->ArrayMax) {
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&param_6->AllocatorInstance,&param_6->ArrayMax);
    }
    lVar25 = (longlong)iVar21;
    param_6->ArrayNum = iVar21 + 1;
    pFVar38 = (param_6->AllocatorInstance).Data;
    *(undefined8 *)(pFVar38 + lVar25 * 0x28) = 0;
    *(FScriptContainerElement **)(pFVar38 + lVar25 * 0x28) =
         local_368.Vertices.AllocatorInstance.Data;
    local_368.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar38 + lVar25 * 0x28 + 8) = local_368.Vertices.ArrayNum;
    *(int *)(pFVar38 + lVar25 * 0x28 + 0xc) = local_368.Vertices.ArrayMax;
    local_368.Vertices.ArrayNum = 0;
    local_368.Vertices.ArrayMax = 0;
    *(undefined8 *)(pFVar38 + lVar25 * 0x28 + 0x18) = 0;
    pFVar38[lVar25 * 0x28 + 0x10] = local_358;
    *(void **)(pFVar38 + lVar25 * 0x28 + 0x18) = local_350;
    local_350 = (void *)0x0;
    *(undefined4 *)(pFVar38 + lVar25 * 0x28 + 0x20) = (undefined4)local_348;
    *(undefined4 *)(pFVar38 + lVar25 * 0x28 + 0x24) = local_348._4_4_;
    local_348 = 0;
    DestructItems<UE::Geometry::TPolygon2<double>,int>((TPolygon2<double> *)0x0,0);
    if (local_350 != (void *)0x0) {
      FMemory::Free(local_350);
    }
    if (local_368.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Vertices.AllocatorInstance.Data);
    }
    if ((TGeneralPolygon2<double> *)local_210.Vertices.AllocatorInstance.Data !=
        (TGeneralPolygon2<double> *)0x0) {
      FMemory::Free(local_210.Vertices.AllocatorInstance.Data);
    }
    goto LAB_1494dfcdc;
  }
  local_1f8.cliptype_ = None;
  local_1f8.fillrule_ = EvenOdd;
  local_1f8.fillpos = Positive;
  local_1f8.bot_y_ = 0;
  local_1f8.scanline_list_.comp = (less<__int64>)0x0;
  local_1f8.PreserveCollinear = false;
  local_1f8.ReverseSolution = false;
  local_1f8.has_open_paths_ = false;
  local_1f8.minima_list_sorted_ = false;
  local_1f8.using_polytree_ = false;
  local_1f8.succeeded_ = true;
  local_1f8._padding_ = (longlong)&___7Clipper64_Clipper2Lib__6B_;
  local_1f8.actives_ = (Active *)0x0;
  local_1f8.sel_ = (Active *)0x0;
  local_1f8.horz_joiners_ = (Joiner *)0x0;
  local_1f8.minima_list_._Mypair._Myval2._Myfirst = (LocalMinima **)0x0;
  local_1f8.minima_list_._Mypair._Myval2._Mylast = (LocalMinima **)0x0;
  local_1f8.minima_list_._Mypair._Myval2._Myend = (LocalMinima **)0x0;
  local_1f8.current_locmin_iter_ =
       (_Vector_iterator<std::_Vector_val<std::_Simple_types<Clipper2Lib::LocalMinima_*>_>_>)0x0;
  local_1f8.vertex_lists_._Mypair._Myval2._Myfirst = (Vertex **)0x0;
  local_1f8.vertex_lists_._Mypair._Myval2._Mylast = (Vertex **)0x0;
  local_1f8.vertex_lists_._Mypair._Myval2._Myend = (Vertex **)0x0;
  local_1f8.scanline_list_.c._Mypair._Myval2._Myfirst = (long64 *)0x0;
  local_1f8.scanline_list_.c._Mypair._Myval2._Mylast = (long64 *)0x0;
  local_1f8.scanline_list_.c._Mypair._Myval2._Myend = (long64 *)0x0;
  local_1f8.intersect_nodes_._Mypair._Myval2._Myfirst = (IntersectNode *)0x0;
  local_1f8.intersect_nodes_._Mypair._Myval2._Mylast = (IntersectNode *)0x0;
  local_1f8.intersect_nodes_._Mypair._Myval2._Myend = (IntersectNode *)0x0;
  local_1f8.outrec_list_._Mypair._Myval2._Myfirst = (OutRec **)0x0;
  local_1f8.outrec_list_._Mypair._Myval2._Mylast = (OutRec **)0x0;
  local_1f8.outrec_list_._Mypair._Myval2._Myend = (OutRec **)0x0;
  local_1f8.joiner_list_._Mypair._Myval2._Myfirst = (Joiner **)0x0;
  local_1f8.joiner_list_._Mypair._Myval2._Mylast = (Joiner **)0x0;
  local_1f8.joiner_list_._Mypair._Myval2._Myend = (Joiner **)0x0;
  Clipper2Lib::ClipperBase::AddPaths(&local_1f8,&local_3a8,Subject,false);
  local_270 = (Point<__int64> *)0x0;
  local_268 = (Point<__int64> *)0x0;
  pPStack_260 = (Point<__int64> *)0x0;
  local_278 = (undefined1  [8])__real_3ff0000000000000;
  local_258 = (PolyPath<__int64> **)0x0;
  ppPStack_250 = (PolyPath<__int64> **)0x0;
  local_248 = (PolyPath<__int64> **)0x0;
  local_240 = (PolyPath<__int64> *)0x0;
  local_330._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_330._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_330._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  bVar17 = Clipper2Lib::ClipperBase::ExecuteInternal(&local_1f8,Union,NonZero,true);
  if (bVar17) {
    Clipper2Lib::ClipperBase::BuildTree(&local_1f8,(PolyPath<__int64> *)local_278,&local_330);
  }
  Clipper2Lib::ClipperBase::CleanUp(&local_1f8);
  cVar37 = local_1f8.succeeded_;
  if (local_1f8.succeeded_ == false) {
    if ((param_7) &&
       (pTVar5 = (TGeneralPolygon2<double> *)(param_6->AllocatorInstance).Data,
       pTVar5 != param_1->DataPtr)) {
      piVar36 = &param_6->ArrayMax;
      piVar1 = &param_6->ArrayNum;
      if (param_6->ArrayMax < 0) {
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar5,param_6->ArrayNum);
        *piVar1 = 0;
        if (*piVar36 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&param_6->AllocatorInstance,0,piVar36);
        }
      }
      else {
        DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar5,param_6->ArrayNum);
        *piVar1 = 0;
      }
      iVar21 = param_1->ArrayNum;
      if (iVar21 < 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x9a9,L"Invalid range size: %lld");
        if (bVar17) {
          pcVar6 = (code *)swi(3);
          uVar18 = (*pcVar6)();
          return (bool)uVar18;
        }
      }
      else if (iVar21 == 0) goto LAB_1494df9ed;
      iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,iVar21,&param_6->AllocatorInstance,piVar1,piVar36);
      ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
                ((param_6->AllocatorInstance).Data + (longlong)iVar20 * 0x28,param_1->DataPtr,iVar21
                );
    }
  }
  else {
    TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::Reset(param_6,0);
    ConvertPolyTreeToPolygons<__int64,double>
              ((PolyPath<__int64> *)local_278,param_6,(TVector2<double> *)&local_390._s_0,&local_3b0
               ,-1);
  }
LAB_1494df9ed:
  pvVar15 = local_330._Mypair._Myval2._Mylast;
  pPVar30 = (Point<__int64> *)local_330._Mypair._Myval2._Myfirst;
  ppPVar12 = local_258;
  ppPVar13 = ppPStack_250;
  if ((Point<__int64> *)local_330._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    for (; pPVar30 != (Point<__int64> *)pvVar15; pPVar30 = (Point<__int64> *)&pPVar30[1].y) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                ((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)pPVar30);
    }
    uVar27 = (((longlong)local_330._Mypair._Myval2._Myend -
              (longlong)local_330._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pPVar30 = (Point<__int64> *)local_330._Mypair._Myval2._Myfirst;
    if (0xfff < uVar27) {
      pPVar30 = (Point<__int64> *)
                ((Point<__int64> *)((longlong)local_330._Mypair._Myval2._Myfirst + -0x10))->y;
      uVar27 = uVar27 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_330._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar30))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar30,uVar27);
    local_330._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_330._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_330._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    ppPVar12 = local_258;
    ppPVar13 = ppPStack_250;
  }
  for (; ppPVar16 = ppPStack_250, ppPVar12 != ppPStack_250; ppPVar12 = ppPVar12 + 1) {
    this = *ppPVar12;
    ppPStack_250 = ppPVar13;
    if (this != (PolyPath<__int64> *)0x0) {
      Clipper2Lib::PolyPath<__int64>::~PolyPath<__int64>(this);
      ::operator_delete(this,0x40);
    }
    ppPVar13 = ppPStack_250;
    ppPStack_250 = ppPVar16;
  }
  ppPStack_250 = ppPVar13;
  if ((longlong)ppPVar13 - (longlong)local_258 >> 3 != 0) {
    ppPStack_250 = local_258;
  }
  if (local_258 != (PolyPath<__int64> **)0x0) {
    std::allocator<Clipper2Lib::PolyPath<__int64>_*>::deallocate
              ((allocator<Clipper2Lib::PolyPath<__int64>_*> *)&local_258,local_258,
               (longlong)local_248 - (longlong)local_258 >> 3);
    local_248 = (PolyPath<__int64> **)0x0;
    local_258 = (PolyPath<__int64> **)0x0;
    ppPStack_250 = (PolyPath<__int64> **)0x0;
  }
  if (local_270 != (Point<__int64> *)0x0) {
    std::allocator<Clipper2Lib::Point<__int64>_>::deallocate
              ((allocator<Clipper2Lib::Point<__int64>_> *)&local_270,local_270,
               (longlong)pPStack_260 - (longlong)local_270 >> 4);
    local_270 = (Point<__int64> *)0x0;
    local_268 = (Point<__int64> *)0x0;
    pPStack_260 = (Point<__int64> *)0x0;
  }
  Clipper2Lib::ClipperBase::~ClipperBase(&local_1f8);
LAB_1494dfcdc:
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::_Tidy(&local_3a8);
  return (bool)cVar37;
}

// Clip<float> @ 1494dfe20

bool __cdecl
UE::Geometry::Private::Clip<float>
          (ClipType *param_1,TGeneralPolygon2<float> *param_2,TGeneralPolygon2<float> *param_3,
          TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  VertexFlags VVar1;
  longlong lVar2;
  longlong lVar3;
  PolyPath<__int64> *this;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Compressed_pair<std::allocator<Clipper2Lib::Point<__int64>_>,std::_Vector_val<std::_Simple_types<Clipper2Lib::Point<__int64>_>_>,1>
  *p_Var11;
  _Compressed_pair<std::allocator<Clipper2Lib::Point<__int64>_>,std::_Vector_val<std::_Simple_types<Clipper2Lib::Point<__int64>_>_>,1>
  *p_Var12;
  PolyPath<__int64> **ppPVar13;
  PolyPath<__int64> **ppPVar14;
  long64 lVar15;
  long64 lVar16;
  PolyPath<__int64> **ppPVar17;
  bool bVar18;
  ulong64 uVar19;
  TVector2<float>_u_0 TVar20;
  Vertex **ppVVar21;
  TVector2<float>_u_0 *pTVar22;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar23;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar24;
  TVector2<float>_u_0 TVar25;
  TVector2<float>_u_0 *pTVar26;
  Point<__int64> *pPVar27;
  TVector2<float>_u_0 *pTVar28;
  TVector2<float>_u_0 *pTVar29;
  ulonglong uVar30;
  Point<__int64> *pPVar31;
  TVector2<float>_u_0 TVar32;
  TVector2<float>_u_0 TVar33;
  TVector2<float>_u_0 TVar34;
  TVector2<float>_u_0 *pTVar35;
  TVector2<float>_u_0 TVar36;
  TVector2<float>_u_0 *pTVar37;
  TVector2<float>_u_0 *local_res10;
  float local_res18 [2];
  TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_> *local_res20;
  TVector2<float>_u_0 *local_200;
  TVector2<float>_u_0 local_1f8;
  TVector2<float>_u_0 local_1f0;
  float local_1e8;
  float local_1e4;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_1e0;
  TVector2<float>_u_0 local_1c8;
  float local_1c0;
  float local_1bc;
  TVector2<float>_u_0 *local_1b8;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_1b0;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_198;
  undefined1 local_178 [8];
  Point<__int64> *local_170;
  Point<__int64> *local_168;
  Point<__int64> *pPStack_160;
  PolyPath<__int64> **local_158;
  PolyPath<__int64> **ppPStack_150;
  PolyPath<__int64> **local_148;
  PolyPath<__int64> *local_140;
  ClipperBase local_138;
  
  local_res20 = param_4;
  TPolygon2<float>::Bounds(&param_2->Outer,(TAxisAlignedBox2<float> *)&local_1f0._s_0);
  TPolygon2<float>::Bounds(&param_3->Outer,(TAxisAlignedBox2<float> *)&local_1c8._s_0);
  if (local_1c8._s_0.X <= local_1f0._s_0.X) {
    local_1f0._s_0.X = local_1c8._s_0.X;
  }
  if (local_1c8._s_0.Y <= local_1f0._s_0.Y) {
    local_1f0._s_0.Y = local_1c8._s_0.Y;
  }
  if (local_1e8 <= local_1c0) {
    local_1e8 = local_1c0;
  }
  if (local_1e4 <= local_1bc) {
    local_1e4 = local_1bc;
  }
  uVar30 = 0;
  local_1b0._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_res18[0] = local_1e4 - local_1f0._s_0.Y;
  if (local_1e4 - local_1f0._s_0.Y <= local_1e8 - local_1f0._s_0.X) {
    local_res18[0] = local_1e8 - local_1f0._s_0.X;
  }
  local_1b0._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_1b0._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  AddGeneralizedPolygonToPaths<float,__int64>
            (&local_1b0,param_2,(TVector2<float> *)&local_1f0._s_0,local_res18);
  local_1e0._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_1e0._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_1e0._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  AddGeneralizedPolygonToPaths<float,__int64>
            (&local_1e0,param_3,(TVector2<float> *)&local_1f0._s_0,local_res18);
  local_138.cliptype_ = None;
  local_138.fillrule_ = EvenOdd;
  local_138.scanline_list_.comp = (less<__int64>)0x0;
  local_138._padding_ = (longlong)&___7Clipper64_Clipper2Lib__6B_;
  local_138.fillpos = Positive;
  local_138.bot_y_ = 0;
  local_138.has_open_paths_ = false;
  local_138.minima_list_sorted_ = false;
  local_138.using_polytree_ = false;
  local_138.succeeded_ = true;
  local_138.actives_ = (Active *)0x0;
  local_138.sel_ = (Active *)0x0;
  local_138.horz_joiners_ = (Joiner *)0x0;
  local_138.minima_list_._Mypair._Myval2._Myfirst = (LocalMinima **)0x0;
  local_138.minima_list_._Mypair._Myval2._Mylast = (LocalMinima **)0x0;
  local_138.minima_list_._Mypair._Myval2._Myend = (LocalMinima **)0x0;
  local_138.current_locmin_iter_ =
       (_Vector_iterator<std::_Vector_val<std::_Simple_types<Clipper2Lib::LocalMinima_*>_>_>)0x0;
  local_138.vertex_lists_._Mypair._Myval2._Myfirst = (Vertex **)0x0;
  local_138.vertex_lists_._Mypair._Myval2._Mylast = (Vertex **)0x0;
  local_138.vertex_lists_._Mypair._Myval2._Myend = (Vertex **)0x0;
  local_138.scanline_list_.c._Mypair._Myval2._Myfirst = (long64 *)0x0;
  local_138.scanline_list_.c._Mypair._Myval2._Mylast = (long64 *)0x0;
  local_138.scanline_list_.c._Mypair._Myval2._Myend = (long64 *)0x0;
  local_138.intersect_nodes_._Mypair._Myval2._Myfirst = (IntersectNode *)0x0;
  local_138.intersect_nodes_._Mypair._Myval2._Mylast = (IntersectNode *)0x0;
  local_138.intersect_nodes_._Mypair._Myval2._Myend = (IntersectNode *)0x0;
  local_138.outrec_list_._Mypair._Myval2._Myfirst = (OutRec **)0x0;
  local_138.outrec_list_._Mypair._Myval2._Mylast = (OutRec **)0x0;
  local_138.outrec_list_._Mypair._Myval2._Myend = (OutRec **)0x0;
  local_138.joiner_list_._Mypair._Myval2._Myfirst = (Joiner **)0x0;
  local_138.joiner_list_._Mypair._Myval2._Mylast = (Joiner **)0x0;
  local_138.joiner_list_._Mypair._Myval2._Myend = (Joiner **)0x0;
  local_138.PreserveCollinear = true;
  local_138.ReverseSolution = false;
  pvVar23 = local_1b0._Mypair._Myval2._Myfirst;
  if (local_1b0._Mypair._Myval2._Myfirst != local_1b0._Mypair._Myval2._Mylast) {
    do {
      pvVar24 = pvVar23 + 1;
      uVar30 = uVar30 + ((longlong)(pvVar23->_Mypair)._Myval2._Mylast -
                         (longlong)(pvVar23->_Mypair)._Myval2._Myfirst >> 4);
      pvVar23 = pvVar24;
    } while (pvVar24 != local_1b0._Mypair._Myval2._Mylast);
    if (uVar30 != 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar30;
      uVar19 = SUB168(ZEXT816(0x28) * auVar4,0);
      if (SUB168(ZEXT816(0x28) * auVar4,8) != 0) {
        uVar19 = 0xffffffffffffffff;
      }
      TVar20 = (TVector2<float>_u_0)operator_new__(uVar19);
      pvVar24 = local_1b0._Mypair._Myval2._Mylast;
      pvVar23 = local_1b0._Mypair._Myval2._Myfirst;
      if (TVar20 == (TVector2<float>_u_0)0x0) {
        local_1f8 = (TVector2<float>_u_0)0x0;
        TVar20 = local_1f8;
        local_1c8 = local_1f8;
      }
      else {
        ppVVar21 = (Vertex **)((longlong)TVar20 + 0x10);
        do {
          (((Vertex *)(ppVVar21 + -2))->pt).x = 0;
          ppVVar21[-1] = (Vertex *)0x0;
          *ppVVar21 = (Vertex *)0x0;
          ppVVar21[1] = (Vertex *)0x0;
          *(VertexFlags *)(ppVVar21 + 2) = None;
          ppVVar21 = ppVVar21 + 5;
          uVar30 = uVar30 - 1;
          local_1c8 = TVar20;
          local_1f8 = TVar20;
        } while (uVar30 != 0);
      }
      for (; pvVar23 != pvVar24; pvVar23 = pvVar23 + 1) {
        TVar25 = (TVector2<float>_u_0)0x0;
        *(Vertex **)((longlong)TVar20 + 0x18) = (Vertex *)0x0;
        pPVar31 = (pvVar23->_Mypair)._Myval2._Mylast;
        pPVar27 = (pvVar23->_Mypair)._Myval2._Myfirst;
        TVar32 = TVar20;
        TVar34 = TVar25;
        TVar36 = TVar20;
        if (pPVar27 != pPVar31) {
          do {
            if (TVar25 == (TVector2<float>_u_0)0x0) {
LAB_1494e00bf:
                    /* WARNING: Store size is inaccurate */
              *(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)((longlong)TVar32 + 0x18))->XY =
                   TVar25;
              lVar15 = pPVar27->x;
              uVar6 = *(undefined4 *)((longlong)&pPVar27->x + 4);
              lVar16 = pPVar27->y;
              uVar7 = *(undefined4 *)((longlong)&pPVar27->y + 4);
              *(VertexFlags *)((longlong)TVar32 + 0x20) = None;
              *(int *)TVar32 = (int)lVar15;
              *(undefined4 *)((longlong)TVar32 + 4) = uVar6;
              *(int *)((longlong)TVar32 + 8) = (int)lVar16;
              *(undefined4 *)((longlong)TVar32 + 0xc) = uVar7;
              TVar33._s_0 = TVar32._s_0 + 0x28;
              TVar34._0_4_ = (int)TVar34._s_0.X + 1;
              TVar34._s_0.Y = 0.0;
              TVar25 = TVar32;
            }
            else if ((*(longlong *)TVar25 != pPVar27->x) ||
                    (TVar33 = TVar32, *(long64 *)((longlong)TVar25 + 8) != pPVar27->y)) {
                    /* WARNING: Store size is inaccurate */
              *(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)((longlong)TVar25 + 0x10))->XY =
                   TVar32;
              goto LAB_1494e00bf;
            }
            pPVar27 = pPVar27 + 1;
            TVar32 = TVar33;
          } while (pPVar27 != pPVar31);
                    /* WARNING: Load size is inaccurate */
          if ((TVar25 != (TVector2<float>_u_0)0x0) &&
             (*(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)((longlong)TVar25 + 0x18))->XY !=
              (TVector2<float>_u_0)0x0)) {
            if ((*(longlong *)TVar25 == *(longlong *)TVar20) &&
               (*(long64 *)((longlong)TVar25 + 8) == *(long64 *)((longlong)TVar20 + 8))) {
              TVar25 = *(TVector2<float>_u_0 *)
                        ((TVector2<float>_u_0 *)((longlong)TVar25 + 0x18))->XY;
            }
                    /* WARNING: Store size is inaccurate */
            *(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)((longlong)TVar25 + 0x10))->XY = TVar20;
                    /* WARNING: Store size is inaccurate */
            *(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)((longlong)TVar20 + 0x18))->XY = TVar25;
            TVar36 = TVar33;
            if ((2 < (int)TVar34._s_0.X) && (TVar25 != TVar20)) {
              lVar2 = *(long64 *)((longlong)TVar20 + 8);
              do {
                lVar3 = *(long64 *)((longlong)TVar25 + 8);
                if (lVar3 != lVar2) {
                    /* WARNING: Load size is inaccurate */
                  bVar18 = lVar2 < lVar3;
                  local_res10._1_7_ = (undefined7)((ulonglong)local_res10 >> 8);
                  local_res10 = (TVector2<float>_u_0 *)CONCAT71(local_res10._1_7_,bVar18);
                  TVar25 = TVar20;
                  TVar32 = *(TVector2<float>_u_0 *)
                            ((TVector2<float>_u_0 *)((longlong)TVar20 + 0x10))->XY;
                  if (*(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)((longlong)TVar20 + 0x10))->XY
                      != TVar20) {
                    do {
                      TVar34 = TVar32;
                      if ((*(long64 *)((longlong)TVar25 + 8) < *(long64 *)((longlong)TVar34 + 8)) &&
                         (bVar18 != false)) {
                        *(VertexFlags *)((longlong)TVar25 + 0x20) =
                             *(VertexFlags *)((longlong)TVar25 + 0x20) | LocalMax;
                        bVar18 = false;
                      }
                      else if ((*(long64 *)((longlong)TVar34 + 8) <
                                *(long64 *)((longlong)TVar25 + 8)) && (bVar18 == false)) {
                        bVar18 = true;
                        if ((*(VertexFlags *)((longlong)TVar25 + 0x20) & LocalMin) == None) {
                          *(VertexFlags *)((longlong)TVar25 + 0x20) =
                               *(VertexFlags *)((longlong)TVar25 + 0x20) | LocalMin;
                          local_1b8 = ::operator_new(0x10);
                          if (local_1b8 != (TVector2<float>_u_0 *)0x0) {
                    /* WARNING: Store size is inaccurate */
                            *(TVector2<float>_u_0 *)local_1b8->XY = TVar25;
                            local_1b8[1]._s_0.X = 0.0;
                            *(undefined1 *)((longlong)local_1b8 + 0xc) = 0;
                          }
                          if (local_138.minima_list_._Mypair._Myval2._Mylast ==
                              local_138.minima_list_._Mypair._Myval2._Myend) {
                            std::
                            vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                            ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                      (&local_138.minima_list_,
                                       local_138.minima_list_._Mypair._Myval2._Mylast,
                                       (LocalMinima **)&local_1b8);
                          }
                          else {
                            *local_138.minima_list_._Mypair._Myval2._Mylast =
                                 (LocalMinima *)local_1b8;
                            local_138.minima_list_._Mypair._Myval2._Mylast =
                                 local_138.minima_list_._Mypair._Myval2._Mylast + 1;
                          }
                        }
                      }
                    /* WARNING: Load size is inaccurate */
                      TVar25 = TVar34;
                      TVar32 = *(TVector2<float>_u_0 *)
                                ((TVector2<float>_u_0 *)((longlong)TVar34 + 0x10))->XY;
                    } while (*(TVector2<float>_u_0 *)
                              ((TVector2<float>_u_0 *)((longlong)TVar34 + 0x10))->XY != TVar20);
                    if (bVar18 != (bool)(char)local_res10) {
                      VVar1 = *(VertexFlags *)((longlong)TVar34 + 0x20);
                      if (lVar2 < lVar3) {
                        if ((VVar1 & LocalMin) == None) {
                          *(VertexFlags *)((longlong)TVar34 + 0x20) = VVar1 | LocalMin;
                          pTVar22 = ::operator_new(0x10);
                          local_res10 = (TVector2<float>_u_0 *)0x0;
                          if (pTVar22 != (TVector2<float>_u_0 *)0x0) {
                    /* WARNING: Store size is inaccurate */
                            *(TVector2<float>_u_0 *)pTVar22->XY = TVar34;
                            pTVar22[1]._s_0.X = 0.0;
                            *(bool *)((longlong)pTVar22 + 0xc) = false;
                            local_res10 = pTVar22;
                          }
                          if (local_138.minima_list_._Mypair._Myval2._Mylast ==
                              local_138.minima_list_._Mypair._Myval2._Myend) {
                            std::
                            vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                            ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                      (&local_138.minima_list_,
                                       local_138.minima_list_._Mypair._Myval2._Mylast,
                                       (LocalMinima **)&local_res10);
                          }
                          else {
                            *local_138.minima_list_._Mypair._Myval2._Mylast =
                                 (LocalMinima *)local_res10;
                            local_138.minima_list_._Mypair._Myval2._Mylast =
                                 local_138.minima_list_._Mypair._Myval2._Mylast + 1;
                          }
                        }
                      }
                      else {
                        *(VertexFlags *)((longlong)TVar34 + 0x20) = VVar1 | LocalMax;
                      }
                    }
                  }
                  break;
                }
                    /* WARNING: Load size is inaccurate */
                TVar25 = *(TVector2<float>_u_0 *)
                          ((TVector2<float>_u_0 *)((longlong)TVar25 + 0x18))->XY;
              } while (TVar25 != TVar20);
            }
          }
        }
        TVar20 = TVar36;
      }
      if (local_138.vertex_lists_._Mypair._Myval2._Mylast ==
          local_138.vertex_lists_._Mypair._Myval2._Myend) {
        std::vector<Clipper2Lib::Vertex_*,std::allocator<Clipper2Lib::Vertex_*>_>::
        _Emplace_reallocate<Clipper2Lib::Vertex_*_&>
                  (&local_138.vertex_lists_,local_138.vertex_lists_._Mypair._Myval2._Mylast,
                   (Vertex **)&local_1c8);
      }
      else {
        *local_138.vertex_lists_._Mypair._Myval2._Mylast = (Vertex *)local_1f8;
        local_138.vertex_lists_._Mypair._Myval2._Mylast =
             local_138.vertex_lists_._Mypair._Myval2._Mylast + 1;
      }
    }
  }
  uVar30 = 0;
  local_138.minima_list_sorted_ = false;
  pvVar23 = local_1e0._Mypair._Myval2._Myfirst;
  if (local_1e0._Mypair._Myval2._Myfirst != local_1e0._Mypair._Myval2._Mylast) {
    do {
      p_Var11 = &pvVar23->_Mypair;
      p_Var12 = &pvVar23->_Mypair;
      pvVar23 = pvVar23 + 1;
      uVar30 = uVar30 + ((longlong)(p_Var11->_Myval2)._Mylast -
                         (longlong)(p_Var12->_Myval2)._Myfirst >> 4);
    } while (pvVar23 != local_1e0._Mypair._Myval2._Mylast);
    if (uVar30 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar30;
      uVar19 = SUB168(ZEXT816(0x28) * auVar5,0);
      if (SUB168(ZEXT816(0x28) * auVar5,8) != 0) {
        uVar19 = 0xffffffffffffffff;
      }
      pTVar22 = operator_new__(uVar19);
      pvVar24 = local_1e0._Mypair._Myval2._Mylast;
      pvVar23 = local_1e0._Mypair._Myval2._Myfirst;
      if (pTVar22 == (TVector2<float>_u_0 *)0x0) {
        local_200 = (TVector2<float>_u_0 *)0x0;
        pTVar22 = local_200;
        local_1b8 = local_200;
      }
      else {
        pTVar26 = pTVar22 + 2;
        do {
          pTVar26[-2] = (TVector2<float>_u_0)0x0;
          pTVar26[-1] = (TVector2<float>_u_0)0x0;
          *pTVar26 = (TVector2<float>_u_0)0x0;
          pTVar26[1] = (TVector2<float>_u_0)0x0;
          pTVar26[2]._s_0.X = 0.0;
          pTVar26 = pTVar26 + 5;
          uVar30 = uVar30 - 1;
          local_1b8 = pTVar22;
          local_200 = pTVar22;
        } while (uVar30 != 0);
      }
      for (; pvVar23 != pvVar24; pvVar23 = pvVar23 + 1) {
        pTVar26 = (TVector2<float>_u_0 *)0x0;
        pTVar22[3] = (TVector2<float>_u_0)0x0;
        pPVar31 = (pvVar23->_Mypair)._Myval2._Mylast;
        pPVar27 = (pvVar23->_Mypair)._Myval2._Myfirst;
        pTVar28 = pTVar22;
        pTVar35 = pTVar26;
        pTVar37 = pTVar22;
        if (pPVar27 != pPVar31) {
          do {
            if (pTVar26 == (TVector2<float>_u_0 *)0x0) {
LAB_1494e03af:
              *(TVector2<float>_u_0 **)pTVar28[3].XY = pTVar26;
              fVar8 = *(float *)&pPVar27->x;
              fVar9 = *(float *)((longlong)&pPVar27->x + 4);
              fVar10 = *(float *)&pPVar27->y;
              uVar6 = *(undefined4 *)((longlong)&pPVar27->y + 4);
              pTVar28[4]._s_0.X = 0.0;
              pTVar28->XY[0] = fVar8;
              (pTVar28->_s_0).Y = fVar9;
              pTVar28[1]._s_0.X = fVar10;
              *(undefined4 *)((longlong)pTVar28 + 0xc) = uVar6;
              pTVar29 = pTVar28 + 5;
              pTVar35 = (TVector2<float>_u_0 *)(ulonglong)((int)pTVar35 + 1);
              pTVar26 = pTVar28;
            }
            else if ((*pTVar26 != (TVector2<float>_u_0)pPVar27->x) ||
                    (pTVar29 = pTVar28, pTVar26[1] != (TVector2<float>_u_0)pPVar27->y)) {
              *(TVector2<float>_u_0 **)pTVar26[2].XY = pTVar28;
              goto LAB_1494e03af;
            }
            pPVar27 = pPVar27 + 1;
            pTVar28 = pTVar29;
          } while (pPVar27 != pPVar31);
          if ((pTVar26 != (TVector2<float>_u_0 *)0x0) &&
             (*(TVector2<float>_u_0 **)pTVar26[3].XY != (TVector2<float>_u_0 *)0x0)) {
            if ((*pTVar26 == (TVector2<float>_u_0)*(TVector2<float>_u_0_s_0 *)pTVar22) &&
               (pTVar26[1] == pTVar22[1])) {
              pTVar26 = *(TVector2<float>_u_0 **)pTVar26[3].XY;
            }
            *(TVector2<float>_u_0 **)pTVar26[2].XY = pTVar22;
            *(TVector2<float>_u_0 **)pTVar22[3].XY = pTVar26;
            pTVar37 = pTVar29;
            if ((2 < (int)pTVar35) && (pTVar26 != pTVar22)) {
              lVar2 = *(longlong *)pTVar22[1].XY;
              do {
                lVar3 = *(longlong *)pTVar26[1].XY;
                if (lVar3 != lVar2) {
                  bVar18 = lVar2 < lVar3;
                  local_res10._1_7_ = (undefined7)((ulonglong)local_res10 >> 8);
                  local_res10 = (TVector2<float>_u_0 *)CONCAT71(local_res10._1_7_,bVar18);
                  pTVar26 = pTVar22;
                  pTVar28 = *(TVector2<float>_u_0 **)pTVar22[2].XY;
                  if (*(TVector2<float>_u_0 **)pTVar22[2].XY != pTVar22) {
                    do {
                      pTVar35 = pTVar28;
                      if (((longlong)pTVar26[1] < (longlong)pTVar35[1]) && (bVar18 != false)) {
                        pTVar26[4]._s_0.X = (float)((uint)pTVar26[4]._s_0.X | LocalMax);
                        bVar18 = false;
                      }
                      else if (((longlong)pTVar35[1] < (longlong)pTVar26[1]) && (bVar18 == false)) {
                        bVar18 = true;
                        if ((*(VertexFlags *)(pTVar26 + 4) & LocalMin) == None) {
                          pTVar26[4]._s_0.X = (float)(*(VertexFlags *)(pTVar26 + 4) | LocalMin);
                          local_1c8 = (TVector2<float>_u_0)::operator_new(0x10);
                          if (local_1c8 != (TVector2<float>_u_0)0x0) {
                            *(TVector2<float>_u_0 **)local_1c8 = pTVar26;
                            *(undefined4 *)((longlong)local_1c8 + 8) = 1;
                            *(undefined1 *)((longlong)local_1c8 + 0xc) = 0;
                          }
                          if (local_138.minima_list_._Mypair._Myval2._Mylast ==
                              local_138.minima_list_._Mypair._Myval2._Myend) {
                            std::
                            vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                            ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                      (&local_138.minima_list_,
                                       local_138.minima_list_._Mypair._Myval2._Mylast,
                                       (LocalMinima **)&local_1c8);
                          }
                          else {
                            *local_138.minima_list_._Mypair._Myval2._Mylast =
                                 (LocalMinima *)local_1c8;
                            local_138.minima_list_._Mypair._Myval2._Mylast =
                                 local_138.minima_list_._Mypair._Myval2._Mylast + 1;
                          }
                        }
                      }
                      pTVar26 = pTVar35;
                      pTVar28 = *(TVector2<float>_u_0 **)pTVar35[2].XY;
                    } while (*(TVector2<float>_u_0 **)pTVar35[2].XY != pTVar22);
                    if (bVar18 != (bool)(char)local_res10) {
                      VVar1 = *(VertexFlags *)(pTVar35 + 4);
                      if (lVar2 < lVar3) {
                        if ((VVar1 & LocalMin) == None) {
                          pTVar35[4]._s_0.X = (float)(VVar1 | LocalMin);
                          pTVar22 = ::operator_new(0x10);
                          local_res10 = (TVector2<float>_u_0 *)0x0;
                          if (pTVar22 != (TVector2<float>_u_0 *)0x0) {
                            *(TVector2<float>_u_0 **)pTVar22->XY = pTVar35;
                            pTVar22[1]._s_0.X = 1.4013e-45;
                            *(bool *)((longlong)pTVar22 + 0xc) = false;
                            local_res10 = pTVar22;
                          }
                          if (local_138.minima_list_._Mypair._Myval2._Mylast ==
                              local_138.minima_list_._Mypair._Myval2._Myend) {
                            std::
                            vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                            ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                      (&local_138.minima_list_,
                                       local_138.minima_list_._Mypair._Myval2._Mylast,
                                       (LocalMinima **)&local_res10);
                          }
                          else {
                            *local_138.minima_list_._Mypair._Myval2._Mylast =
                                 (LocalMinima *)local_res10;
                            local_138.minima_list_._Mypair._Myval2._Mylast =
                                 local_138.minima_list_._Mypair._Myval2._Mylast + 1;
                          }
                        }
                      }
                      else {
                        pTVar35[4]._s_0.X = (float)(VVar1 | LocalMax);
                      }
                    }
                  }
                  break;
                }
                pTVar26 = *(TVector2<float>_u_0 **)pTVar26[3].XY;
              } while (pTVar26 != pTVar22);
            }
          }
        }
        pTVar22 = pTVar37;
      }
      if (local_138.vertex_lists_._Mypair._Myval2._Mylast ==
          local_138.vertex_lists_._Mypair._Myval2._Myend) {
        std::vector<Clipper2Lib::Vertex_*,std::allocator<Clipper2Lib::Vertex_*>_>::
        _Emplace_reallocate<Clipper2Lib::Vertex_*_&>
                  (&local_138.vertex_lists_,local_138.vertex_lists_._Mypair._Myval2._Mylast,
                   (Vertex **)&local_1b8);
      }
      else {
        *local_138.vertex_lists_._Mypair._Myval2._Mylast = (Vertex *)local_200;
        local_138.vertex_lists_._Mypair._Myval2._Mylast =
             local_138.vertex_lists_._Mypair._Myval2._Mylast + 1;
      }
    }
  }
  local_170 = (Point<__int64> *)0x0;
  local_168 = (Point<__int64> *)0x0;
  pPStack_160 = (Point<__int64> *)0x0;
  local_178 = (undefined1  [8])__real_3ff0000000000000;
  local_158 = (PolyPath<__int64> **)0x0;
  ppPStack_150 = (PolyPath<__int64> **)0x0;
  local_148 = (PolyPath<__int64> **)0x0;
  local_140 = (PolyPath<__int64> *)0x0;
  local_198._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_198._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_198._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  bVar18 = Clipper2Lib::ClipperBase::ExecuteInternal(&local_138,*param_1,NonZero,true);
  if (bVar18) {
    Clipper2Lib::ClipperBase::BuildTree(&local_138,(PolyPath<__int64> *)local_178,&local_198);
  }
  Clipper2Lib::ClipperBase::CleanUp(&local_138);
  bVar18 = local_138.succeeded_;
  if (local_138.succeeded_ != false) {
    ConvertPolyTreeToPolygons<__int64,float>
              ((PolyPath<__int64> *)local_178,local_res20,(TVector2<float> *)&local_1f0._s_0,
               local_res18,-1);
  }
  pvVar23 = local_198._Mypair._Myval2._Mylast;
  pPVar31 = (Point<__int64> *)local_198._Mypair._Myval2._Myfirst;
  ppPVar13 = local_158;
  ppPVar14 = ppPStack_150;
  if ((Point<__int64> *)local_198._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    for (; pPVar31 != (Point<__int64> *)pvVar23; pPVar31 = (Point<__int64> *)&pPVar31[1].y) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                ((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)pPVar31);
    }
    uVar19 = (((longlong)local_198._Mypair._Myval2._Myend -
              (longlong)local_198._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pPVar31 = (Point<__int64> *)local_198._Mypair._Myval2._Myfirst;
    if (0xfff < uVar19) {
      pPVar31 = (Point<__int64> *)
                ((Point<__int64> *)((longlong)local_198._Mypair._Myval2._Myfirst + -0x10))->y;
      uVar19 = uVar19 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_198._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar31))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar31,uVar19);
    local_198._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_198._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_198._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    ppPVar13 = local_158;
    ppPVar14 = ppPStack_150;
  }
  for (; ppPVar17 = ppPStack_150, ppPVar13 != ppPStack_150; ppPVar13 = ppPVar13 + 1) {
    this = *ppPVar13;
    ppPStack_150 = ppPVar14;
    if (this != (PolyPath<__int64> *)0x0) {
      Clipper2Lib::PolyPath<__int64>::~PolyPath<__int64>(this);
      ::operator_delete(this,0x40);
    }
    ppPVar14 = ppPStack_150;
    ppPStack_150 = ppPVar17;
  }
  ppPStack_150 = ppPVar14;
  if ((longlong)ppPVar14 - (longlong)local_158 >> 3 != 0) {
    ppPStack_150 = local_158;
  }
  if (local_158 != (PolyPath<__int64> **)0x0) {
    std::allocator<Clipper2Lib::PolyPath<__int64>_*>::deallocate
              ((allocator<Clipper2Lib::PolyPath<__int64>_*> *)&local_158,local_158,
               (longlong)local_148 - (longlong)local_158 >> 3);
    local_148 = (PolyPath<__int64> **)0x0;
    local_158 = (PolyPath<__int64> **)0x0;
    ppPStack_150 = (PolyPath<__int64> **)0x0;
  }
  if (local_170 != (Point<__int64> *)0x0) {
    std::allocator<Clipper2Lib::Point<__int64>_>::deallocate
              ((allocator<Clipper2Lib::Point<__int64>_> *)&local_170,local_170,
               (longlong)pPStack_160 - (longlong)local_170 >> 4);
    local_170 = (Point<__int64> *)0x0;
    local_168 = (Point<__int64> *)0x0;
    pPStack_160 = (Point<__int64> *)0x0;
  }
  Clipper2Lib::ClipperBase::~ClipperBase(&local_138);
  pvVar24 = local_1e0._Mypair._Myval2._Mylast;
  pvVar23 = local_1e0._Mypair._Myval2._Myfirst;
  if (local_1e0._Mypair._Myval2._Myfirst !=
      (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0) {
    for (; pvVar23 != pvVar24; pvVar23 = pvVar23 + 1) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (pvVar23);
    }
    std::
    allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
    ::deallocate((allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                  *)&local_1e0,local_1e0._Mypair._Myval2._Myfirst,
                 ((longlong)local_1e0._Mypair._Myval2._Myend -
                 (longlong)local_1e0._Mypair._Myval2._Myfirst) / 0x18);
    local_1e0._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_1e0._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_1e0._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  }
  pvVar24 = local_1b0._Mypair._Myval2._Mylast;
  pvVar23 = local_1b0._Mypair._Myval2._Myfirst;
  if (local_1b0._Mypair._Myval2._Myfirst !=
      (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0) {
    for (; pvVar23 != pvVar24; pvVar23 = pvVar23 + 1) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (pvVar23);
    }
    std::
    allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
    ::deallocate((allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                  *)&local_1b0,local_1b0._Mypair._Myval2._Myfirst,
                 ((longlong)local_1b0._Mypair._Myval2._Myend -
                 (longlong)local_1b0._Mypair._Myval2._Myfirst) / 0x18);
  }
  return bVar18;
}

// Clip<double> @ 1494e0860

bool __cdecl
UE::Geometry::Private::Clip<double>
          (ClipType *param_1,TGeneralPolygon2<double> *param_2,TGeneralPolygon2<double> *param_3,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  VertexFlags VVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  PolyPath<__int64> *this;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  _Compressed_pair<std::allocator<Clipper2Lib::Point<__int64>_>,std::_Vector_val<std::_Simple_types<Clipper2Lib::Point<__int64>_>_>,1>
  *p_Var9;
  _Compressed_pair<std::allocator<Clipper2Lib::Point<__int64>_>,std::_Vector_val<std::_Simple_types<Clipper2Lib::Point<__int64>_>_>,1>
  *p_Var10;
  PolyPath<__int64> **ppPVar11;
  PolyPath<__int64> **ppPVar12;
  long64 lVar13;
  long64 lVar14;
  PolyPath<__int64> **ppPVar15;
  bool bVar16;
  ulong64 uVar17;
  Vertex **ppVVar18;
  LocalMinima *pLVar19;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar20;
  Vertex *pVVar21;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar22;
  Point<__int64> *pPVar23;
  Vertex *pVVar24;
  Vertex *pVVar25;
  ulonglong uVar26;
  Point<__int64> *pPVar27;
  Vertex *pVVar28;
  Vertex *pVVar29;
  Vertex *pVVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  LocalMinima *local_res10;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *local_res18;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_res20;
  Vertex *local_228;
  Vertex *local_220;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_218;
  double local_200;
  Vertex *local_1f8;
  Vertex *local_1f0;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_1e8;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_1d0;
  TVector2<double>_u_0 local_1b8;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [8];
  Point<__int64> *local_190;
  Point<__int64> *local_188;
  Point<__int64> *pPStack_180;
  PolyPath<__int64> **local_178;
  PolyPath<__int64> **ppPStack_170;
  PolyPath<__int64> **local_168;
  PolyPath<__int64> *local_160;
  ClipperBase local_158;
  TVector2<double>_u_0 local_68;
  double local_58;
  double local_50;
  
  local_res20 = param_4;
  TPolygon2<double>::Bounds(&param_2->Outer,(TAxisAlignedBox2<double> *)&local_1b8._s_0);
  TPolygon2<double>::Bounds(&param_3->Outer,(TAxisAlignedBox2<double> *)&local_68._s_0);
  if (local_68._s_0.X <= local_1b8._s_0.X) {
    local_1b8._s_0.X = local_68._s_0.X;
  }
  if (local_68._s_0.Y <= local_1b8._s_0.Y) {
    local_1b8._s_0.Y = local_68._s_0.Y;
  }
  uVar33 = SUB84(local_1a8,0);
  uVar34 = (int)((ulonglong)local_1a8 >> 0x20);
  if (local_1a8 <= local_58) {
    local_1a8 = local_58;
    uVar33 = SUB84(local_58,0);
    uVar34 = (int)((ulonglong)local_58 >> 0x20);
  }
  uVar31 = SUB84(local_1a0,0);
  uVar32 = (undefined4)((ulonglong)local_1a0 >> 0x20);
  if (local_1a0 <= local_50) {
    local_1a0 = local_50;
    uVar31 = SUB84(local_50,0);
    uVar32 = (undefined4)((ulonglong)local_50 >> 0x20);
  }
  local_200 = (double)CONCAT44(uVar32,uVar31) - local_1b8._s_0.Y;
  dVar8 = (double)CONCAT44(uVar34,uVar33) - local_1b8._s_0.X;
  uVar26 = 0;
  local_1e8._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  if (local_200 <= dVar8) {
    local_200 = dVar8;
  }
  local_1e8._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_1e8._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  AddGeneralizedPolygonToPaths<double,__int64>
            (&local_1e8,param_2,(TVector2<double> *)&local_1b8._s_0,&local_200);
  local_218._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_218._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_218._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  AddGeneralizedPolygonToPaths<double,__int64>
            (&local_218,param_3,(TVector2<double> *)&local_1b8._s_0,&local_200);
  local_158.cliptype_ = None;
  local_158.fillrule_ = EvenOdd;
  local_158.scanline_list_.comp = (less<__int64>)0x0;
  local_158._padding_ = (longlong)&___7Clipper64_Clipper2Lib__6B_;
  local_158.fillpos = Positive;
  local_158.bot_y_ = 0;
  local_158.has_open_paths_ = false;
  local_158.minima_list_sorted_ = false;
  local_158.using_polytree_ = false;
  local_158.succeeded_ = true;
  local_158.actives_ = (Active *)0x0;
  local_158.sel_ = (Active *)0x0;
  local_158.horz_joiners_ = (Joiner *)0x0;
  local_158.minima_list_._Mypair._Myval2._Myfirst = (LocalMinima **)0x0;
  local_158.minima_list_._Mypair._Myval2._Mylast = (LocalMinima **)0x0;
  local_158.minima_list_._Mypair._Myval2._Myend = (LocalMinima **)0x0;
  local_158.current_locmin_iter_ =
       (_Vector_iterator<std::_Vector_val<std::_Simple_types<Clipper2Lib::LocalMinima_*>_>_>)0x0;
  local_158.vertex_lists_._Mypair._Myval2._Myfirst = (Vertex **)0x0;
  local_158.vertex_lists_._Mypair._Myval2._Mylast = (Vertex **)0x0;
  local_158.vertex_lists_._Mypair._Myval2._Myend = (Vertex **)0x0;
  local_158.scanline_list_.c._Mypair._Myval2._Myfirst = (long64 *)0x0;
  local_158.scanline_list_.c._Mypair._Myval2._Mylast = (long64 *)0x0;
  local_158.scanline_list_.c._Mypair._Myval2._Myend = (long64 *)0x0;
  local_158.intersect_nodes_._Mypair._Myval2._Myfirst = (IntersectNode *)0x0;
  local_158.intersect_nodes_._Mypair._Myval2._Mylast = (IntersectNode *)0x0;
  local_158.intersect_nodes_._Mypair._Myval2._Myend = (IntersectNode *)0x0;
  local_158.outrec_list_._Mypair._Myval2._Myfirst = (OutRec **)0x0;
  local_158.outrec_list_._Mypair._Myval2._Mylast = (OutRec **)0x0;
  local_158.outrec_list_._Mypair._Myval2._Myend = (OutRec **)0x0;
  local_158.joiner_list_._Mypair._Myval2._Myfirst = (Joiner **)0x0;
  local_158.joiner_list_._Mypair._Myval2._Mylast = (Joiner **)0x0;
  local_158.joiner_list_._Mypair._Myval2._Myend = (Joiner **)0x0;
  local_158.PreserveCollinear = true;
  local_158.ReverseSolution = false;
  pvVar20 = local_1e8._Mypair._Myval2._Myfirst;
  if (local_1e8._Mypair._Myval2._Myfirst != local_1e8._Mypair._Myval2._Mylast) {
    do {
      p_Var9 = &pvVar20->_Mypair;
      p_Var10 = &pvVar20->_Mypair;
      pvVar20 = pvVar20 + 1;
      uVar26 = uVar26 + ((longlong)(p_Var9->_Myval2)._Mylast - (longlong)(p_Var10->_Myval2)._Myfirst
                        >> 4);
    } while (pvVar20 != local_1e8._Mypair._Myval2._Mylast);
    if (uVar26 != 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar26;
      uVar17 = SUB168(ZEXT816(0x28) * auVar6,0);
      if (SUB168(ZEXT816(0x28) * auVar6,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      local_220 = operator_new__(uVar17);
      if (local_220 == (Vertex *)0x0) {
        local_220 = (Vertex *)0x0;
      }
      else {
        ppVVar18 = &local_220->next;
        do {
          (((Vertex *)(ppVVar18 + -2))->pt).x = 0;
          ppVVar18[-1] = (Vertex *)0x0;
          *ppVVar18 = (Vertex *)0x0;
          ppVVar18[1] = (Vertex *)0x0;
          *(VertexFlags *)(ppVVar18 + 2) = None;
          ppVVar18 = ppVVar18 + 5;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      local_res18 = local_1e8._Mypair._Myval2._Mylast;
      pvVar20 = local_1e8._Mypair._Myval2._Mylast;
      pvVar22 = local_1e8._Mypair._Myval2._Myfirst;
      pVVar29 = local_220;
      local_1f0 = local_220;
      if (local_1e8._Mypair._Myval2._Myfirst != local_1e8._Mypair._Myval2._Mylast) {
        do {
          pVVar21 = (Vertex *)0x0;
          pVVar29->prev = (Vertex *)0x0;
          pPVar27 = (pvVar22->_Mypair)._Myval2._Mylast;
          pPVar23 = (pvVar22->_Mypair)._Myval2._Myfirst;
          pVVar24 = pVVar29;
          pVVar28 = pVVar21;
          pVVar30 = pVVar29;
          if (pPVar23 != pPVar27) {
            do {
              if (pVVar21 == (Vertex *)0x0) {
LAB_1494e0b00:
                pVVar24->prev = pVVar21;
                lVar13 = pPVar23->x;
                uVar33 = *(undefined4 *)((longlong)&pPVar23->x + 4);
                lVar14 = pPVar23->y;
                uVar34 = *(undefined4 *)((longlong)&pPVar23->y + 4);
                pVVar24->flags = None;
                *(int *)&(pVVar24->pt).x = (int)lVar13;
                *(undefined4 *)((longlong)&(pVVar24->pt).x + 4) = uVar33;
                *(int *)&(pVVar24->pt).y = (int)lVar14;
                *(undefined4 *)((longlong)&(pVVar24->pt).y + 4) = uVar34;
                pVVar25 = pVVar24 + 1;
                pVVar28 = (Vertex *)(ulonglong)((int)pVVar28 + 1);
                pVVar21 = pVVar24;
              }
              else if (((pVVar21->pt).x != pPVar23->x) ||
                      (pVVar25 = pVVar24, (pVVar21->pt).y != pPVar23->y)) {
                pVVar21->next = pVVar24;
                goto LAB_1494e0b00;
              }
              pPVar23 = pPVar23 + 1;
              pVVar24 = pVVar25;
            } while (pPVar23 != pPVar27);
            pvVar20 = local_res18;
            if ((pVVar21 != (Vertex *)0x0) && (pVVar21->prev != (Vertex *)0x0)) {
              if (((pVVar21->pt).x == (pVVar29->pt).x) && ((pVVar21->pt).y == (pVVar29->pt).y)) {
                pVVar21 = pVVar21->prev;
              }
              pVVar21->next = pVVar29;
              pVVar29->prev = pVVar21;
              pVVar30 = pVVar25;
              if ((2 < (int)pVVar28) && (pVVar21 != pVVar29)) {
                lVar2 = (pVVar29->pt).y;
                do {
                  lVar3 = (pVVar21->pt).y;
                  if (lVar3 != lVar2) {
                    bVar16 = lVar2 < lVar3;
                    local_res10 = (LocalMinima *)CONCAT71(local_res10._1_7_,bVar16);
                    pVVar21 = pVVar29;
                    pVVar24 = pVVar29->next;
                    if (pVVar29->next != pVVar29) {
                      do {
                        pVVar28 = pVVar24;
                        lVar4 = (pVVar21->pt).y;
                        lVar5 = (pVVar28->pt).y;
                        if ((lVar4 < lVar5) && (bVar16 != false)) {
                          pVVar21->flags = pVVar21->flags | LocalMax;
                          bVar16 = false;
                        }
                        else if ((lVar5 < lVar4) && (bVar16 == false)) {
                          bVar16 = true;
                          if ((pVVar21->flags & LocalMin) == None) {
                            pVVar21->flags = pVVar21->flags | LocalMin;
                            local_1f8 = ::operator_new(0x10);
                            if (local_1f8 != (Vertex *)0x0) {
                              (local_1f8->pt).x = (long64)pVVar21;
                              *(PathType *)&(local_1f8->pt).y = Subject;
                              *(bool *)((longlong)&(local_1f8->pt).y + 4) = false;
                            }
                            if (local_158.minima_list_._Mypair._Myval2._Mylast ==
                                local_158.minima_list_._Mypair._Myval2._Myend) {
                              std::
                              vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                              ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                        (&local_158.minima_list_,
                                         local_158.minima_list_._Mypair._Myval2._Mylast,
                                         (LocalMinima **)&local_1f8);
                            }
                            else {
                              *local_158.minima_list_._Mypair._Myval2._Mylast =
                                   (LocalMinima *)local_1f8;
                              local_158.minima_list_._Mypair._Myval2._Mylast =
                                   local_158.minima_list_._Mypair._Myval2._Mylast + 1;
                            }
                          }
                        }
                        pVVar21 = pVVar28;
                        pVVar24 = pVVar28->next;
                      } while (pVVar28->next != pVVar29);
                      pvVar20 = local_res18;
                      if (bVar16 != (bool)(char)local_res10) {
                        VVar1 = pVVar28->flags;
                        if (lVar2 < lVar3) {
                          if ((VVar1 & LocalMin) == None) {
                            pVVar28->flags = VVar1 | LocalMin;
                            pLVar19 = ::operator_new(0x10);
                            local_res10 = (LocalMinima *)0x0;
                            if (pLVar19 != (LocalMinima *)0x0) {
                              pLVar19->vertex = pVVar28;
                              pLVar19->polytype = Subject;
                              pLVar19->is_open = false;
                              local_res10 = pLVar19;
                            }
                            if (local_158.minima_list_._Mypair._Myval2._Mylast ==
                                local_158.minima_list_._Mypair._Myval2._Myend) {
                              std::
                              vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                              ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                        (&local_158.minima_list_,
                                         local_158.minima_list_._Mypair._Myval2._Mylast,&local_res10
                                        );
                              pvVar20 = local_res18;
                            }
                            else {
                              *local_158.minima_list_._Mypair._Myval2._Mylast = local_res10;
                              local_158.minima_list_._Mypair._Myval2._Mylast =
                                   local_158.minima_list_._Mypair._Myval2._Mylast + 1;
                              pvVar20 = local_res18;
                            }
                          }
                        }
                        else {
                          pVVar28->flags = VVar1 | LocalMax;
                        }
                      }
                    }
                    break;
                  }
                  pVVar21 = pVVar21->prev;
                } while (pVVar21 != pVVar29);
              }
            }
          }
          pvVar22 = pvVar22 + 1;
          pVVar29 = pVVar30;
        } while (pvVar22 != pvVar20);
      }
      if (local_158.vertex_lists_._Mypair._Myval2._Mylast ==
          local_158.vertex_lists_._Mypair._Myval2._Myend) {
        std::vector<Clipper2Lib::Vertex_*,std::allocator<Clipper2Lib::Vertex_*>_>::
        _Emplace_reallocate<Clipper2Lib::Vertex_*_&>
                  (&local_158.vertex_lists_,local_158.vertex_lists_._Mypair._Myval2._Mylast,
                   &local_1f0);
      }
      else {
        *local_158.vertex_lists_._Mypair._Myval2._Mylast = local_220;
        local_158.vertex_lists_._Mypair._Myval2._Mylast =
             local_158.vertex_lists_._Mypair._Myval2._Mylast + 1;
      }
    }
  }
  uVar26 = 0;
  local_158.minima_list_sorted_ = false;
  pvVar20 = local_218._Mypair._Myval2._Myfirst;
  if (local_218._Mypair._Myval2._Myfirst != local_218._Mypair._Myval2._Mylast) {
    do {
      pvVar22 = pvVar20 + 1;
      uVar26 = uVar26 + ((longlong)(pvVar20->_Mypair)._Myval2._Mylast -
                         (longlong)(pvVar20->_Mypair)._Myval2._Myfirst >> 4);
      pvVar20 = pvVar22;
    } while (pvVar22 != local_218._Mypair._Myval2._Mylast);
    if (uVar26 != 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar26;
      uVar17 = SUB168(ZEXT816(0x28) * auVar7,0);
      if (SUB168(ZEXT816(0x28) * auVar7,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      local_228 = operator_new__(uVar17);
      if (local_228 == (Vertex *)0x0) {
        local_228 = (Vertex *)0x0;
      }
      else {
        ppVVar18 = &local_228->next;
        do {
          (((Vertex *)(ppVVar18 + -2))->pt).x = 0;
          ppVVar18[-1] = (Vertex *)0x0;
          *ppVVar18 = (Vertex *)0x0;
          ppVVar18[1] = (Vertex *)0x0;
          *(VertexFlags *)(ppVVar18 + 2) = None;
          ppVVar18 = ppVVar18 + 5;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      local_res18 = local_218._Mypair._Myval2._Mylast;
      pvVar20 = local_218._Mypair._Myval2._Mylast;
      pvVar22 = local_218._Mypair._Myval2._Myfirst;
      pVVar29 = local_228;
      local_1f8 = local_228;
      if (local_218._Mypair._Myval2._Myfirst != local_218._Mypair._Myval2._Mylast) {
        do {
          pVVar21 = (Vertex *)0x0;
          pVVar29->prev = (Vertex *)0x0;
          pPVar27 = (pvVar22->_Mypair)._Myval2._Mylast;
          pPVar23 = (pvVar22->_Mypair)._Myval2._Myfirst;
          pVVar24 = pVVar29;
          pVVar28 = pVVar21;
          pVVar30 = pVVar29;
          if (pPVar23 != pPVar27) {
            do {
              if (pVVar21 == (Vertex *)0x0) {
LAB_1494e0e00:
                pVVar24->prev = pVVar21;
                lVar13 = pPVar23->x;
                uVar33 = *(undefined4 *)((longlong)&pPVar23->x + 4);
                lVar14 = pPVar23->y;
                uVar34 = *(undefined4 *)((longlong)&pPVar23->y + 4);
                pVVar24->flags = None;
                *(int *)&(pVVar24->pt).x = (int)lVar13;
                *(undefined4 *)((longlong)&(pVVar24->pt).x + 4) = uVar33;
                *(PathType *)&(pVVar24->pt).y = (PathType)lVar14;
                *(undefined4 *)((longlong)&(pVVar24->pt).y + 4) = uVar34;
                pVVar25 = pVVar24 + 1;
                pVVar28 = (Vertex *)(ulonglong)((int)pVVar28 + 1);
                pVVar21 = pVVar24;
              }
              else if (((Vertex *)(pVVar21->pt).x != (Vertex *)pPVar23->x) ||
                      (pVVar25 = pVVar24, (pVVar21->pt).y != pPVar23->y)) {
                pVVar21->next = pVVar24;
                goto LAB_1494e0e00;
              }
              pPVar23 = pPVar23 + 1;
              pVVar24 = pVVar25;
            } while (pPVar23 != pPVar27);
            pvVar20 = local_res18;
            if ((pVVar21 != (Vertex *)0x0) && (pVVar21->prev != (Vertex *)0x0)) {
              if (((Vertex *)(pVVar21->pt).x == (Vertex *)(pVVar29->pt).x) &&
                 ((pVVar21->pt).y == (pVVar29->pt).y)) {
                pVVar21 = pVVar21->prev;
              }
              pVVar21->next = pVVar29;
              pVVar29->prev = pVVar21;
              pVVar30 = pVVar25;
              if ((2 < (int)pVVar28) && (pVVar21 != pVVar29)) {
                lVar2 = (pVVar29->pt).y;
                do {
                  lVar3 = (pVVar21->pt).y;
                  if (lVar3 != lVar2) {
                    bVar16 = lVar2 < lVar3;
                    local_res10 = (LocalMinima *)CONCAT71(local_res10._1_7_,bVar16);
                    pVVar21 = pVVar29;
                    pVVar24 = pVVar29->next;
                    if (pVVar29->next != pVVar29) {
                      do {
                        pVVar28 = pVVar24;
                        lVar4 = (pVVar21->pt).y;
                        lVar5 = (pVVar28->pt).y;
                        if ((lVar4 < lVar5) && (bVar16 != false)) {
                          pVVar21->flags = pVVar21->flags | LocalMax;
                          bVar16 = false;
                        }
                        else if ((lVar5 < lVar4) && (bVar16 == false)) {
                          bVar16 = true;
                          if ((pVVar21->flags & LocalMin) == None) {
                            pVVar21->flags = pVVar21->flags | LocalMin;
                            local_1f0 = ::operator_new(0x10);
                            if (local_1f0 != (Vertex *)0x0) {
                              (local_1f0->pt).x = (long64)pVVar21;
                              *(undefined4 *)&(local_1f0->pt).y = 1;
                              *(undefined1 *)((longlong)&(local_1f0->pt).y + 4) = 0;
                            }
                            if (local_158.minima_list_._Mypair._Myval2._Mylast ==
                                local_158.minima_list_._Mypair._Myval2._Myend) {
                              std::
                              vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                              ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                        (&local_158.minima_list_,
                                         local_158.minima_list_._Mypair._Myval2._Mylast,
                                         (LocalMinima **)&local_1f0);
                            }
                            else {
                              *local_158.minima_list_._Mypair._Myval2._Mylast =
                                   (LocalMinima *)local_1f0;
                              local_158.minima_list_._Mypair._Myval2._Mylast =
                                   local_158.minima_list_._Mypair._Myval2._Mylast + 1;
                            }
                          }
                        }
                        pVVar21 = pVVar28;
                        pVVar24 = pVVar28->next;
                      } while (pVVar28->next != pVVar29);
                      pvVar20 = local_res18;
                      if (bVar16 != (bool)(char)local_res10) {
                        VVar1 = pVVar28->flags;
                        if (lVar2 < lVar3) {
                          if ((VVar1 & LocalMin) == None) {
                            pVVar28->flags = VVar1 | LocalMin;
                            pLVar19 = ::operator_new(0x10);
                            local_res10 = (LocalMinima *)0x0;
                            if (pLVar19 != (LocalMinima *)0x0) {
                              pLVar19->vertex = pVVar28;
                              pLVar19->polytype = Clip;
                              pLVar19->is_open = false;
                              local_res10 = pLVar19;
                            }
                            if (local_158.minima_list_._Mypair._Myval2._Mylast ==
                                local_158.minima_list_._Mypair._Myval2._Myend) {
                              std::
                              vector<Clipper2Lib::LocalMinima_*,std::allocator<Clipper2Lib::LocalMinima_*>_>
                              ::_Emplace_reallocate<Clipper2Lib::LocalMinima_*>
                                        (&local_158.minima_list_,
                                         local_158.minima_list_._Mypair._Myval2._Mylast,&local_res10
                                        );
                              pvVar20 = local_res18;
                            }
                            else {
                              *local_158.minima_list_._Mypair._Myval2._Mylast = local_res10;
                              local_158.minima_list_._Mypair._Myval2._Mylast =
                                   local_158.minima_list_._Mypair._Myval2._Mylast + 1;
                              pvVar20 = local_res18;
                            }
                          }
                        }
                        else {
                          pVVar28->flags = VVar1 | LocalMax;
                        }
                      }
                    }
                    break;
                  }
                  pVVar21 = pVVar21->prev;
                } while (pVVar21 != pVVar29);
              }
            }
          }
          pvVar22 = pvVar22 + 1;
          pVVar29 = pVVar30;
        } while (pvVar22 != pvVar20);
      }
      if (local_158.vertex_lists_._Mypair._Myval2._Mylast ==
          local_158.vertex_lists_._Mypair._Myval2._Myend) {
        std::vector<Clipper2Lib::Vertex_*,std::allocator<Clipper2Lib::Vertex_*>_>::
        _Emplace_reallocate<Clipper2Lib::Vertex_*_&>
                  (&local_158.vertex_lists_,local_158.vertex_lists_._Mypair._Myval2._Mylast,
                   &local_1f8);
      }
      else {
        *local_158.vertex_lists_._Mypair._Myval2._Mylast = local_228;
        local_158.vertex_lists_._Mypair._Myval2._Mylast =
             local_158.vertex_lists_._Mypair._Myval2._Mylast + 1;
      }
    }
  }
  local_190 = (Point<__int64> *)0x0;
  local_188 = (Point<__int64> *)0x0;
  pPStack_180 = (Point<__int64> *)0x0;
  local_198 = (undefined1  [8])__real_3ff0000000000000;
  local_178 = (PolyPath<__int64> **)0x0;
  ppPStack_170 = (PolyPath<__int64> **)0x0;
  local_168 = (PolyPath<__int64> **)0x0;
  local_160 = (PolyPath<__int64> *)0x0;
  local_1d0._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_1d0._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_1d0._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  bVar16 = Clipper2Lib::ClipperBase::ExecuteInternal(&local_158,*param_1,NonZero,true);
  if (bVar16) {
    Clipper2Lib::ClipperBase::BuildTree(&local_158,(PolyPath<__int64> *)local_198,&local_1d0);
  }
  Clipper2Lib::ClipperBase::CleanUp(&local_158);
  bVar16 = local_158.succeeded_;
  if (local_158.succeeded_ != false) {
    ConvertPolyTreeToPolygons<__int64,double>
              ((PolyPath<__int64> *)local_198,local_res20,(TVector2<double> *)&local_1b8._s_0,
               &local_200,-1);
  }
  pvVar20 = local_1d0._Mypair._Myval2._Mylast;
  pPVar27 = (Point<__int64> *)local_1d0._Mypair._Myval2._Myfirst;
  ppPVar11 = local_178;
  ppPVar12 = ppPStack_170;
  if ((Point<__int64> *)local_1d0._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    for (; pPVar27 != (Point<__int64> *)pvVar20; pPVar27 = (Point<__int64> *)&pPVar27[1].y) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                ((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)pPVar27);
    }
    uVar17 = (((longlong)local_1d0._Mypair._Myval2._Myend -
              (longlong)local_1d0._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pPVar27 = (Point<__int64> *)local_1d0._Mypair._Myval2._Myfirst;
    if (0xfff < uVar17) {
      pPVar27 = (Point<__int64> *)
                ((Point<__int64> *)((longlong)local_1d0._Mypair._Myval2._Myfirst + -0x10))->y;
      uVar17 = uVar17 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_1d0._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar27))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar27,uVar17);
    local_1d0._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_1d0._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_1d0._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    ppPVar11 = local_178;
    ppPVar12 = ppPStack_170;
  }
  for (; ppPVar15 = ppPStack_170, ppPVar11 != ppPStack_170; ppPVar11 = ppPVar11 + 1) {
    this = *ppPVar11;
    ppPStack_170 = ppPVar12;
    if (this != (PolyPath<__int64> *)0x0) {
      Clipper2Lib::PolyPath<__int64>::~PolyPath<__int64>(this);
      ::operator_delete(this,0x40);
    }
    ppPVar12 = ppPStack_170;
    ppPStack_170 = ppPVar15;
  }
  ppPStack_170 = ppPVar12;
  if ((longlong)ppPVar12 - (longlong)local_178 >> 3 != 0) {
    ppPStack_170 = local_178;
  }
  if (local_178 != (PolyPath<__int64> **)0x0) {
    std::allocator<Clipper2Lib::PolyPath<__int64>_*>::deallocate
              ((allocator<Clipper2Lib::PolyPath<__int64>_*> *)&local_178,local_178,
               (longlong)local_168 - (longlong)local_178 >> 3);
    local_168 = (PolyPath<__int64> **)0x0;
    local_178 = (PolyPath<__int64> **)0x0;
    ppPStack_170 = (PolyPath<__int64> **)0x0;
  }
  if (local_190 != (Point<__int64> *)0x0) {
    std::allocator<Clipper2Lib::Point<__int64>_>::deallocate
              ((allocator<Clipper2Lib::Point<__int64>_> *)&local_190,local_190,
               (longlong)pPStack_180 - (longlong)local_190 >> 4);
    local_190 = (Point<__int64> *)0x0;
    local_188 = (Point<__int64> *)0x0;
    pPStack_180 = (Point<__int64> *)0x0;
  }
  Clipper2Lib::ClipperBase::~ClipperBase(&local_158);
  pvVar22 = local_218._Mypair._Myval2._Mylast;
  pvVar20 = local_218._Mypair._Myval2._Myfirst;
  if (local_218._Mypair._Myval2._Myfirst !=
      (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0) {
    for (; pvVar20 != pvVar22; pvVar20 = pvVar20 + 1) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (pvVar20);
    }
    std::
    allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
    ::deallocate((allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                  *)&local_218,local_218._Mypair._Myval2._Myfirst,
                 ((longlong)local_218._Mypair._Myval2._Myend -
                 (longlong)local_218._Mypair._Myval2._Myfirst) / 0x18);
    local_218._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_218._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_218._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  }
  pvVar22 = local_1e8._Mypair._Myval2._Mylast;
  pvVar20 = local_1e8._Mypair._Myval2._Myfirst;
  if (local_1e8._Mypair._Myval2._Myfirst !=
      (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0) {
    for (; pvVar20 != pvVar22; pvVar20 = pvVar20 + 1) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (pvVar20);
    }
    std::
    allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
    ::deallocate((allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                  *)&local_1e8,local_1e8._Mypair._Myval2._Myfirst,
                 ((longlong)local_1e8._Mypair._Myval2._Myend -
                 (longlong)local_1e8._Mypair._Myval2._Myfirst) / 0x18);
  }
  return bVar16;
}

// ClipArrays<double> @ 1494e12c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::Private::ClipArrays<double>
          (ClipType *param_1,TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_2,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_3,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  TGeneralPolygon2<double> *pTVar6;
  PolyPath<__int64> **ppPVar7;
  PolyPath<__int64> **ppPVar8;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar10;
  PolyPath<__int64> **ppPVar11;
  bool bVar12;
  Point<__int64> *pPVar13;
  ulong64 uVar14;
  FScriptContainerElement *pFVar15;
  PolyPath<__int64> *pPVar16;
  FScriptContainerElement *pFVar17;
  TGeneralPolygon2<double> *pTVar18;
  TGeneralPolygon2<double> *pTVar19;
  TGeneralPolygon2<double> *pTVar20;
  TGeneralPolygon2<double> *pTVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 local_res10 [8];
  double local_res18;
  TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *local_res20;
  TVector2<double>_u_0 local_278;
  double local_268;
  double dStack_260;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_258;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_240;
  PolyPath<__int64> local_228;
  TGeneralPolygon2<double> *local_1e8;
  ClipperBase local_1d8;
  
  pTVar20 = param_2->DataPtr;
  uVar36 = (undefined4)__real_7fefffffffffffff;
  uVar37 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  iVar4 = param_2->ArrayNum;
  uVar38 = (undefined4)__real_ffefffffffffffff;
  uVar39 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  local_1e8 = pTVar20 + iVar4;
  local_res20 = param_4;
  local_278._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_278._s_0.Y = _UNK_150a9e648;
  local_268 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_260 = _UNK_1508ffb58;
  for (pTVar18 = pTVar20; pTVar18 != pTVar20 + iVar4; pTVar18 = pTVar18 + 1) {
    iVar5 = (pTVar18->Outer).Vertices.ArrayNum;
    pFVar15 = (pTVar18->Outer).Vertices.AllocatorInstance.Data;
    pFVar17 = pFVar15 + (longlong)iVar5 * 0x10;
    uVar22 = uVar38;
    uVar25 = uVar39;
    uVar24 = uVar38;
    uVar27 = uVar39;
    uVar23 = uVar36;
    uVar30 = uVar37;
    uVar32 = uVar36;
    uVar34 = uVar37;
    while( true ) {
      uVar28 = uVar27;
      uVar26 = uVar24;
      if ((pTVar18->Outer).Vertices.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar17) break;
      dVar2 = *(double *)pFVar15;
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = *(double *)(pFVar15 + 8);
      uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar29 = SUB84(dVar2,0);
      uVar31 = uVar24;
      if ((double)CONCAT44(uVar30,uVar23) <= dVar2) {
        uVar29 = uVar23;
        uVar31 = uVar30;
      }
      uVar33 = SUB84(dVar3,0);
      uVar35 = uVar27;
      if ((double)CONCAT44(uVar34,uVar32) <= dVar3) {
        uVar33 = uVar32;
        uVar35 = uVar34;
      }
      pFVar15 = pFVar15 + 0x10;
      uVar23 = SUB84(dVar2,0);
      if (dVar2 <= (double)CONCAT44(uVar25,uVar22)) {
        uVar23 = uVar22;
        uVar24 = uVar25;
      }
      uVar22 = uVar23;
      uVar25 = uVar24;
      uVar24 = SUB84(dVar3,0);
      uVar23 = uVar29;
      uVar30 = uVar31;
      uVar32 = uVar33;
      uVar34 = uVar35;
      if (dVar3 <= (double)CONCAT44(uVar28,uVar26)) {
        uVar24 = uVar26;
        uVar27 = uVar28;
      }
    }
    if ((double)CONCAT44(uVar30,uVar23) <= local_278._s_0.X) {
      local_278._s_0.X = (double)CONCAT44(uVar30,uVar23);
    }
    if ((double)CONCAT44(uVar34,uVar32) <= local_278._s_0.Y) {
      local_278._s_0.Y = (double)CONCAT44(uVar34,uVar32);
    }
    if (local_268 < (double)CONCAT44(uVar25,uVar22) || local_268 == (double)CONCAT44(uVar25,uVar22))
    {
      local_268 = (double)CONCAT44(uVar25,uVar22);
    }
    if (dStack_260 < (double)CONCAT44(uVar28,uVar26) ||
        dStack_260 == (double)CONCAT44(uVar28,uVar26)) {
      dStack_260 = (double)CONCAT44(uVar28,uVar26);
    }
  }
  pTVar21 = param_3->DataPtr;
  pTVar18 = pTVar21 + param_3->ArrayNum;
  pTVar6 = local_1e8;
  for (pTVar19 = pTVar21; local_1e8 = pTVar6, pTVar19 != pTVar18; pTVar19 = pTVar19 + 1) {
    iVar4 = (pTVar19->Outer).Vertices.ArrayNum;
    pFVar15 = (pTVar19->Outer).Vertices.AllocatorInstance.Data;
    pFVar17 = pFVar15 + (longlong)iVar4 * 0x10;
    uVar22 = uVar38;
    uVar25 = uVar39;
    uVar24 = uVar38;
    uVar27 = uVar39;
    uVar23 = uVar36;
    uVar30 = uVar37;
    uVar32 = uVar36;
    uVar34 = uVar37;
    while( true ) {
      uVar28 = uVar27;
      uVar26 = uVar24;
      if ((pTVar19->Outer).Vertices.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar17) break;
      dVar2 = *(double *)pFVar15;
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = *(double *)(pFVar15 + 8);
      uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar29 = SUB84(dVar2,0);
      uVar31 = uVar24;
      if ((double)CONCAT44(uVar30,uVar23) <= dVar2) {
        uVar29 = uVar23;
        uVar31 = uVar30;
      }
      uVar33 = SUB84(dVar3,0);
      uVar35 = uVar27;
      if ((double)CONCAT44(uVar34,uVar32) <= dVar3) {
        uVar33 = uVar32;
        uVar35 = uVar34;
      }
      pFVar15 = pFVar15 + 0x10;
      uVar23 = SUB84(dVar2,0);
      if (dVar2 <= (double)CONCAT44(uVar25,uVar22)) {
        uVar23 = uVar22;
        uVar24 = uVar25;
      }
      uVar22 = uVar23;
      uVar25 = uVar24;
      uVar24 = SUB84(dVar3,0);
      uVar23 = uVar29;
      uVar30 = uVar31;
      uVar32 = uVar33;
      uVar34 = uVar35;
      if (dVar3 <= (double)CONCAT44(uVar28,uVar26)) {
        uVar24 = uVar26;
        uVar27 = uVar28;
      }
    }
    if ((double)CONCAT44(uVar30,uVar23) <= local_278._s_0.X) {
      local_278._s_0.X = (double)CONCAT44(uVar30,uVar23);
    }
    if ((double)CONCAT44(uVar34,uVar32) <= local_278._s_0.Y) {
      local_278._s_0.Y = (double)CONCAT44(uVar34,uVar32);
    }
    if (local_268 < (double)CONCAT44(uVar25,uVar22) || local_268 == (double)CONCAT44(uVar25,uVar22))
    {
      local_268 = (double)CONCAT44(uVar25,uVar22);
    }
    if (dStack_260 < (double)CONCAT44(uVar28,uVar26) ||
        dStack_260 == (double)CONCAT44(uVar28,uVar26)) {
      dStack_260 = (double)CONCAT44(uVar28,uVar26);
    }
    pTVar6 = local_1e8;
  }
  local_res18 = dStack_260 - local_278._s_0.Y;
  if (dStack_260 - local_278._s_0.Y <= local_268 - local_278._s_0.X) {
    local_res18 = local_268 - local_278._s_0.X;
  }
  local_1d8.scanline_list_.comp = (less<__int64>)0x0;
  local_1d8.sel_ = (Active *)0x0;
  local_1d8.horz_joiners_ = (Joiner *)0x0;
  local_1d8.minima_list_._Mypair._Myval2._Myend = (LocalMinima **)0x0;
  local_1d8.current_locmin_iter_ =
       (_Vector_iterator<std::_Vector_val<std::_Simple_types<Clipper2Lib::LocalMinima_*>_>_>)0x0;
  local_1d8.vertex_lists_._Mypair._Myval2._Myend = (Vertex **)0x0;
  local_1d8.scanline_list_.c._Mypair._Myval2._Myfirst = (long64 *)0x0;
  local_1d8.intersect_nodes_._Mypair._Myval2._Mylast = (IntersectNode *)0x0;
  local_1d8.intersect_nodes_._Mypair._Myval2._Myend = (IntersectNode *)0x0;
  local_1d8.outrec_list_._Mypair._Myval2._Myend = (OutRec **)0x0;
  local_1d8.joiner_list_._Mypair._Myval2._Myfirst = (Joiner **)0x0;
  local_1d8.cliptype_ = None;
  local_1d8.fillrule_ = EvenOdd;
  local_1d8.fillpos = Positive;
  local_1d8.bot_y_ = 0;
  local_1d8.has_open_paths_ = false;
  local_1d8.minima_list_sorted_ = false;
  local_1d8.using_polytree_ = false;
  local_1d8.succeeded_ = true;
  local_1d8.actives_ = (Active *)0x0;
  local_1d8.minima_list_._Mypair._Myval2._Myfirst = (LocalMinima **)0x0;
  local_1d8.minima_list_._Mypair._Myval2._Mylast = (LocalMinima **)0x0;
  local_1d8.vertex_lists_._Mypair._Myval2._Myfirst = (Vertex **)0x0;
  local_1d8.vertex_lists_._Mypair._Myval2._Mylast = (Vertex **)0x0;
  local_1d8.scanline_list_.c._Mypair._Myval2._Mylast = (long64 *)0x0;
  local_1d8.scanline_list_.c._Mypair._Myval2._Myend = (long64 *)0x0;
  local_1d8.intersect_nodes_._Mypair._Myval2._Myfirst = (IntersectNode *)0x0;
  local_1d8.outrec_list_._Mypair._Myval2._Myfirst = (OutRec **)0x0;
  local_1d8.outrec_list_._Mypair._Myval2._Mylast = (OutRec **)0x0;
  local_1d8.joiner_list_._Mypair._Myval2._Mylast = (Joiner **)0x0;
  local_1d8.joiner_list_._Mypair._Myval2._Myend = (Joiner **)0x0;
  local_1d8.PreserveCollinear = true;
  local_1d8.ReverseSolution = false;
  local_1d8._padding_ = (longlong)&___7Clipper64_Clipper2Lib__6B_;
  for (; pTVar20 != pTVar6; pTVar20 = pTVar20 + 1) {
    local_258._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_258._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_258._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    AddGeneralizedPolygonToPaths<double,__int64>
              (&local_258,pTVar20,(TVector2<double> *)&local_278._s_0,&local_res18);
    Clipper2Lib::ClipperBase::AddPaths(&local_1d8,&local_258,Subject,false);
    std::
    vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
    ::_Tidy(&local_258);
  }
  for (; pTVar21 != pTVar18; pTVar21 = pTVar21 + 1) {
    local_258._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_258._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_258._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    AddGeneralizedPolygonToPaths<double,__int64>
              (&local_258,pTVar21,(TVector2<double> *)&local_278._s_0,&local_res18);
    Clipper2Lib::ClipperBase::AddPaths(&local_1d8,&local_258,Clip,false);
    pvVar10 = local_258._Mypair._Myval2._Mylast;
    pPVar13 = (Point<__int64> *)local_258._Mypair._Myval2._Myfirst;
    if ((Point<__int64> *)local_258._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
      for (; pPVar13 != (Point<__int64> *)pvVar10;
          pPVar13 = (Point<__int64> *)((longlong)(pPVar13 + 1) + 8)) {
        std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
        _Tidy((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
              pPVar13);
      }
      uVar14 = (((longlong)local_258._Mypair._Myval2._Myend -
                (longlong)local_258._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
      pPVar13 = (Point<__int64> *)local_258._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pPVar13 = (Point<__int64> *)
                  ((Point<__int64> *)((longlong)local_258._Mypair._Myval2._Myfirst + -0x10))->y;
        uVar14 = uVar14 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_258._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar13))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pPVar13,uVar14);
    }
  }
  local_228.polygon_._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
  local_228.polygon_._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
  local_228.polygon_._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
  local_228.childs_._Mypair._Myval2._Myfirst = (PolyPath<__int64> **)0x0;
  local_228.childs_._Mypair._Myval2._Mylast = (PolyPath<__int64> **)0x0;
  local_228.childs_._Mypair._Myval2._Myend = (PolyPath<__int64> **)0x0;
  local_228.parent_ = (PolyPath<__int64> *)0x0;
  local_240._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_240._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_240._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_228.scale_ = __real_3ff0000000000000;
  bVar12 = Clipper2Lib::ClipperBase::ExecuteInternal(&local_1d8,*param_1,NonZero,true);
  if (bVar12) {
    Clipper2Lib::ClipperBase::BuildTree(&local_1d8,&local_228,&local_240);
  }
  Clipper2Lib::ClipperBase::CleanUp(&local_1d8);
  pTVar9 = local_res20;
  bVar12 = local_1d8.succeeded_;
  if (local_1d8.succeeded_ != false) {
    piVar1 = &local_res20->ArrayMax;
    pTVar20 = (TGeneralPolygon2<double> *)(local_res20->AllocatorInstance).Data;
    if (*piVar1 < 0) {
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar20,local_res20->ArrayNum);
      pTVar9->ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar9->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar20,local_res20->ArrayNum);
      pTVar9->ArrayNum = 0;
    }
    ConvertPolyTreeToPolygons<__int64,double>
              (&local_228,pTVar9,(TVector2<double> *)&local_278._s_0,&local_res18,-1);
  }
  pvVar10 = local_240._Mypair._Myval2._Mylast;
  pPVar13 = (Point<__int64> *)local_240._Mypair._Myval2._Myfirst;
  ppPVar7 = local_228.childs_._Mypair._Myval2._Myfirst;
  ppPVar8 = local_228.childs_._Mypair._Myval2._Mylast;
  if ((Point<__int64> *)local_240._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    for (; pPVar13 != (Point<__int64> *)pvVar10;
        pPVar13 = (Point<__int64> *)((longlong)(pPVar13 + 1) + 8)) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                ((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)pPVar13);
    }
    uVar14 = (((longlong)local_240._Mypair._Myval2._Myend -
              (longlong)local_240._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pPVar13 = (Point<__int64> *)local_240._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      pPVar13 = (Point<__int64> *)
                ((Point<__int64> *)((longlong)local_240._Mypair._Myval2._Myfirst + -0x10))->y;
      uVar14 = uVar14 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_240._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar13)))
      goto LAB_1494e1a38;
    }
    ::operator_delete(pPVar13,uVar14);
    local_240._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_240._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_240._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    ppPVar7 = local_228.childs_._Mypair._Myval2._Myfirst;
    ppPVar8 = local_228.childs_._Mypair._Myval2._Mylast;
  }
  for (; ppPVar11 = local_228.childs_._Mypair._Myval2._Mylast,
      ppPVar7 != local_228.childs_._Mypair._Myval2._Mylast; ppPVar7 = ppPVar7 + 1) {
    pPVar16 = *ppPVar7;
    local_228.childs_._Mypair._Myval2._Mylast = ppPVar8;
    if (pPVar16 != (PolyPath<__int64> *)0x0) {
      Clipper2Lib::PolyPath<__int64>::~PolyPath<__int64>(pPVar16);
      ::operator_delete(pPVar16,0x40);
    }
    ppPVar8 = local_228.childs_._Mypair._Myval2._Mylast;
    local_228.childs_._Mypair._Myval2._Mylast = ppPVar11;
  }
  local_228.childs_._Mypair._Myval2._Mylast = ppPVar8;
  if ((longlong)ppPVar8 - (longlong)local_228.childs_._Mypair._Myval2._Myfirst >> 3 != 0) {
    local_228.childs_._Mypair._Myval2._Mylast = local_228.childs_._Mypair._Myval2._Myfirst;
  }
  if (local_228.childs_._Mypair._Myval2._Myfirst != (PolyPath<__int64> **)0x0) {
    uVar14 = (longlong)local_228.childs_._Mypair._Myval2._Myend -
             (longlong)local_228.childs_._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
    pPVar16 = (PolyPath<__int64> *)local_228.childs_._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      pPVar16 = ((PolyPath<__int64> *)
                ((longlong)local_228.childs_._Mypair._Myval2._Myfirst + 0xffffffffffffffc0))->
                parent_;
      uVar14 = uVar14 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_228.childs_._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar16)))
      goto LAB_1494e1a38;
    }
    ::operator_delete(pPVar16,uVar14);
    local_228.childs_._Mypair._Myval2._Myfirst = (PolyPath<__int64> **)0x0;
    local_228.childs_._Mypair._Myval2._Mylast = (PolyPath<__int64> **)0x0;
    local_228.childs_._Mypair._Myval2._Myend = (PolyPath<__int64> **)0x0;
  }
  if (local_228.polygon_._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    uVar14 = (longlong)local_228.polygon_._Mypair._Myval2._Myend -
             (longlong)local_228.polygon_._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
    pPVar13 = local_228.polygon_._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      pPVar13 = (Point<__int64> *)local_228.polygon_._Mypair._Myval2._Myfirst[-1].y;
      uVar14 = uVar14 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_228.polygon_._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar13)))
      {
LAB_1494e1a38:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar13,uVar14);
    local_228.polygon_._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
    local_228.polygon_._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
    local_228.polygon_._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
  }
  Clipper2Lib::ClipperBase::~ClipperBase(&local_1d8);
  return bVar12;
}

// ClipPaths<double> @ 1494e1a60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::Private::ClipPaths<double>
          (ClipType *param_1,
          TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_3,
          TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  TGeneralPolygon2<double> *pTVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  PolyPath<__int64> **ppPVar5;
  PolyPath<__int64> **ppPVar6;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar8;
  PolyPath<__int64> **ppPVar9;
  bool bVar10;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  *pvVar11;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar12;
  double *pdVar13;
  Point<__int64> *pPVar14;
  double *pdVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  PolyPath<__int64> *pPVar18;
  FScriptContainerElement *pFVar19;
  TGeneralPolygon2<double> *pTVar20;
  TGeneralPolygon2<double> *pTVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double local_res18;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_res20;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_278;
  TVector2<double>_u_0 local_260;
  double local_250;
  double dStack_248;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_240;
  PolyPath<__int64> local_228;
  undefined8 local_1e8;
  ClipperBase local_1d8;
  
  iVar4 = param_2->ArrayNum;
  pFVar17 = (param_2->AllocatorInstance).Data;
  local_260._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_260._8_8_ = _UNK_150a9e648;
  uVar34 = (undefined4)_UNK_150a9e648;
  uVar35 = (undefined4)((ulonglong)_UNK_150a9e648 >> 0x20);
  pFVar19 = pFVar17 + (longlong)iVar4 * 0x10;
  local_250 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_248 = _UNK_1508ffb58;
  uVar24 = SUB84(_UNK_1508ffb58,0);
  uVar25 = (undefined4)((ulonglong)_UNK_1508ffb58 >> 0x20);
  uVar32 = SUB84(___xmm_ffefffffffffffffffefffffffffffff,0);
  uVar33 = (undefined4)((ulonglong)___xmm_ffefffffffffffffffefffffffffffff >> 0x20);
  uVar36 = (undefined4)___xmm_7fefffffffffffff7fefffffffffffff;
  uVar37 = (undefined4)((ulonglong)___xmm_7fefffffffffffff7fefffffffffffff >> 0x20);
  local_res20 = param_4;
  while( true ) {
    if (param_2->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TArrayView<UE::Math::TVector2<double>,int>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res18);
    }
    pTVar7 = local_res20;
    if (pFVar17 == pFVar19) break;
    pdVar13 = *(double **)pFVar17;
    pdVar15 = pdVar13 + (longlong)(int)*(undefined8 *)(pFVar17 + 8) * 2;
    if (pdVar13 != pdVar15) {
      do {
        dVar2 = *pdVar13;
        uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if (dVar2 < (double)CONCAT44(uVar37,uVar36)) {
          uVar36 = SUB84(dVar2,0);
          uVar37 = uVar26;
        }
        if ((double)CONCAT44(uVar33,uVar32) <= dVar2 && dVar2 != (double)CONCAT44(uVar33,uVar32)) {
          uVar32 = SUB84(dVar2,0);
          uVar33 = uVar26;
          local_250 = dVar2;
        }
        dVar2 = pdVar13[1];
        uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if (dVar2 < (double)CONCAT44(uVar35,uVar34)) {
          uVar34 = SUB84(dVar2,0);
          uVar35 = uVar26;
        }
        if ((double)CONCAT44(uVar25,uVar24) <= dVar2 && dVar2 != (double)CONCAT44(uVar25,uVar24)) {
          uVar24 = SUB84(dVar2,0);
          uVar25 = uVar26;
          dStack_248 = dVar2;
        }
        pdVar13 = pdVar13 + 2;
      } while (pdVar13 != pdVar15);
      local_260._s_0.Y = (double)CONCAT44(uVar35,uVar34);
      local_260._s_0.X = (double)CONCAT44(uVar37,uVar36);
    }
    pFVar17 = pFVar17 + 0x10;
  }
  pTVar21 = param_3->DataPtr;
  pTVar1 = pTVar21 + param_3->ArrayNum;
  pTVar20 = pTVar21;
  if (pTVar21 != pTVar1) {
    do {
      iVar4 = (pTVar20->Outer).Vertices.ArrayNum;
      uVar22 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
      pFVar17 = (pTVar20->Outer).Vertices.AllocatorInstance.Data;
      pFVar19 = pFVar17 + (longlong)iVar4 * 0x10;
      uVar23 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
      uVar26 = (int)__real_ffefffffffffffff;
      uVar28 = (int)__real_ffefffffffffffff;
      uVar31 = uVar23;
      uVar27 = (int)__real_7fefffffffffffff;
      uVar40 = (int)__real_7fefffffffffffff;
      uVar42 = uVar22;
      while( true ) {
        uVar30 = uVar31;
        uVar29 = uVar28;
        local_278._Mypair._Myval2._Myfirst =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             CONCAT44(uVar22,uVar27);
        local_1e8 = CONCAT44(uVar23,uVar26);
        if ((pTVar20->Outer).Vertices.ArrayNum != iVar4) {
          `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (pFVar17 == pFVar19) break;
        dVar2 = *(double *)pFVar17;
        uVar28 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)(pFVar17 + 8);
        uVar31 = (undefined4)((ulonglong)dVar3 >> 0x20);
        uVar38 = SUB84(dVar2,0);
        uVar39 = uVar28;
        if ((double)CONCAT44(uVar22,uVar27) <= dVar2) {
          uVar38 = uVar27;
          uVar39 = uVar22;
        }
        uVar41 = SUB84(dVar3,0);
        uVar43 = uVar31;
        if ((double)CONCAT44(uVar42,uVar40) <= dVar3) {
          uVar41 = uVar40;
          uVar43 = uVar42;
        }
        pFVar17 = pFVar17 + 0x10;
        uVar27 = SUB84(dVar2,0);
        if (dVar2 <= (double)CONCAT44(uVar23,uVar26)) {
          uVar27 = uVar26;
          uVar28 = uVar23;
        }
        uVar26 = uVar27;
        uVar23 = uVar28;
        uVar28 = SUB84(dVar3,0);
        uVar27 = uVar38;
        uVar22 = uVar39;
        uVar40 = uVar41;
        uVar42 = uVar43;
        if (dVar3 <= (double)CONCAT44(uVar30,uVar29)) {
          uVar28 = uVar29;
          uVar31 = uVar30;
        }
      }
      if ((double)CONCAT44(uVar22,uVar27) <= (double)CONCAT44(uVar37,uVar36)) {
        uVar36 = uVar27;
        uVar37 = uVar22;
      }
      if ((double)CONCAT44(uVar42,uVar40) <= (double)CONCAT44(uVar35,uVar34)) {
        uVar34 = uVar40;
        uVar35 = uVar42;
      }
      if ((double)CONCAT44(uVar33,uVar32) < (double)CONCAT44(uVar23,uVar26) ||
          (double)CONCAT44(uVar33,uVar32) == (double)CONCAT44(uVar23,uVar26)) {
        local_250 = (double)CONCAT44(uVar23,uVar26);
        uVar32 = uVar26;
        uVar33 = uVar23;
      }
      if ((double)CONCAT44(uVar25,uVar24) < (double)CONCAT44(uVar30,uVar29) ||
          (double)CONCAT44(uVar25,uVar24) == (double)CONCAT44(uVar30,uVar29)) {
        dStack_248 = (double)CONCAT44(uVar30,uVar29);
        uVar24 = uVar29;
        uVar25 = uVar30;
      }
      pTVar20 = pTVar20 + 1;
    } while (pTVar20 != pTVar1);
    local_260._s_0.Y = (double)CONCAT44(uVar35,uVar34);
    local_260._s_0.X = (double)CONCAT44(uVar37,uVar36);
  }
  local_res18 = (double)CONCAT44(uVar25,uVar24) - (double)CONCAT44(uVar35,uVar34);
  local_1d8.fillpos = Positive;
  local_1d8.has_open_paths_ = false;
  local_1d8.minima_list_sorted_ = false;
  local_1d8.using_polytree_ = false;
  local_1d8.succeeded_ = true;
  local_1d8.sel_ = (Active *)0x0;
  local_1d8.horz_joiners_ = (Joiner *)0x0;
  local_1d8.cliptype_ = None;
  local_1d8.fillrule_ = EvenOdd;
  dVar2 = (double)CONCAT44(uVar33,uVar32) - (double)CONCAT44(uVar37,uVar36);
  local_1d8.scanline_list_.comp = (less<__int64>)0x0;
  local_1d8.bot_y_ = 0;
  local_1d8.actives_ = (Active *)0x0;
  local_1d8.minima_list_._Mypair._Myval2._Myfirst = (LocalMinima **)0x0;
  local_1d8.minima_list_._Mypair._Myval2._Mylast = (LocalMinima **)0x0;
  local_1d8.minima_list_._Mypair._Myval2._Myend = (LocalMinima **)0x0;
  local_1d8.current_locmin_iter_ =
       (_Vector_iterator<std::_Vector_val<std::_Simple_types<Clipper2Lib::LocalMinima_*>_>_>)0x0;
  if (local_res18 <= dVar2) {
    local_res18 = dVar2;
  }
  local_1d8.vertex_lists_._Mypair._Myval2._Myfirst = (Vertex **)0x0;
  local_1d8.vertex_lists_._Mypair._Myval2._Mylast = (Vertex **)0x0;
  local_1d8.vertex_lists_._Mypair._Myval2._Myend = (Vertex **)0x0;
  local_1d8.scanline_list_.c._Mypair._Myval2._Myfirst = (long64 *)0x0;
  local_1d8.scanline_list_.c._Mypair._Myval2._Mylast = (long64 *)0x0;
  local_1d8.scanline_list_.c._Mypair._Myval2._Myend = (long64 *)0x0;
  local_1d8.intersect_nodes_._Mypair._Myval2._Myfirst = (IntersectNode *)0x0;
  local_1d8.intersect_nodes_._Mypair._Myval2._Mylast = (IntersectNode *)0x0;
  local_1d8.intersect_nodes_._Mypair._Myval2._Myend = (IntersectNode *)0x0;
  local_1d8.outrec_list_._Mypair._Myval2._Myfirst = (OutRec **)0x0;
  local_1d8.outrec_list_._Mypair._Myval2._Mylast = (OutRec **)0x0;
  local_1d8.outrec_list_._Mypair._Myval2._Myend = (OutRec **)0x0;
  local_1d8.joiner_list_._Mypair._Myval2._Myfirst = (Joiner **)0x0;
  local_1d8.joiner_list_._Mypair._Myval2._Mylast = (Joiner **)0x0;
  local_1d8.joiner_list_._Mypair._Myval2._Myend = (Joiner **)0x0;
  local_1d8.PreserveCollinear = true;
  local_1d8.ReverseSolution = false;
  local_1d8._padding_ = (longlong)&___7Clipper64_Clipper2Lib__6B_;
  pvVar11 = ConvertPolygonsToPaths<double,__int64>
                      (&local_278,param_2,(TVector2<double> *)&local_260._s_0,&local_res18);
  Clipper2Lib::ClipperBase::AddPaths(&local_1d8,pvVar11,Subject,true);
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::_Tidy(&local_278);
  for (; pTVar21 != pTVar1; pTVar21 = pTVar21 + 1) {
    local_278._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_278._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_278._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    AddGeneralizedPolygonToPaths<double,__int64>
              (&local_278,pTVar21,(TVector2<double> *)&local_260._s_0,&local_res18);
    Clipper2Lib::ClipperBase::AddPaths(&local_1d8,&local_278,Clip,false);
    std::
    vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
    ::_Tidy(&local_278);
  }
  local_228.polygon_._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
  local_228.polygon_._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
  local_228.polygon_._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
  local_228.childs_._Mypair._Myval2._Myfirst = (PolyPath<__int64> **)0x0;
  local_228.childs_._Mypair._Myval2._Mylast = (PolyPath<__int64> **)0x0;
  local_228.childs_._Mypair._Myval2._Myend = (PolyPath<__int64> **)0x0;
  local_228.parent_ = (PolyPath<__int64> *)0x0;
  local_240._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_240._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_240._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_228.scale_ = __real_3ff0000000000000;
  bVar10 = Clipper2Lib::ClipperBase::ExecuteInternal(&local_1d8,*param_1,NonZero,true);
  if (bVar10) {
    Clipper2Lib::ClipperBase::BuildTree(&local_1d8,&local_228,&local_240);
  }
  Clipper2Lib::ClipperBase::CleanUp(&local_1d8);
  bVar10 = local_1d8.succeeded_;
  if (local_1d8.succeeded_ != false) {
    pTVar12 = ConvertPathsToUEPaths<__int64,double>
                        ((TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)&local_278,&local_240,(TVector2<double> *)&local_260._s_0,&local_res18);
    if (pTVar7 != pTVar12) {
      DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                 (pTVar7->AllocatorInstance).Data,pTVar7->ArrayNum);
      pFVar17 = (pTVar7->AllocatorInstance).Data;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
      (pTVar7->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
      (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar7->ArrayNum = pTVar12->ArrayNum;
      pTVar7->ArrayMax = pTVar12->ArrayMax;
      pTVar12->ArrayNum = 0;
      pTVar12->ArrayMax = 0;
    }
    DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               local_278._Mypair._Myval2._Myfirst,(int)local_278._Mypair._Myval2._Mylast);
    if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        local_278._Mypair._Myval2._Myfirst !=
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_278._Mypair._Myval2._Myfirst);
    }
  }
  pvVar8 = local_240._Mypair._Myval2._Mylast;
  pPVar14 = (Point<__int64> *)local_240._Mypair._Myval2._Myfirst;
  ppPVar5 = local_228.childs_._Mypair._Myval2._Myfirst;
  ppPVar6 = local_228.childs_._Mypair._Myval2._Mylast;
  if ((Point<__int64> *)local_240._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    for (; pPVar14 != (Point<__int64> *)pvVar8;
        pPVar14 = (Point<__int64> *)((longlong)(pPVar14 + 1) + 8)) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                ((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)pPVar14);
    }
    uVar16 = (((longlong)local_240._Mypair._Myval2._Myend -
              (longlong)local_240._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pPVar14 = (Point<__int64> *)local_240._Mypair._Myval2._Myfirst;
    if (0xfff < uVar16) {
      pPVar14 = (Point<__int64> *)
                ((Point<__int64> *)((longlong)local_240._Mypair._Myval2._Myfirst + -0x10))->y;
      uVar16 = uVar16 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_240._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar14)))
      goto LAB_1494e20ec;
    }
    ::operator_delete(pPVar14,uVar16);
    local_240._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_240._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_240._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    ppPVar5 = local_228.childs_._Mypair._Myval2._Myfirst;
    ppPVar6 = local_228.childs_._Mypair._Myval2._Mylast;
  }
  for (; ppPVar9 = local_228.childs_._Mypair._Myval2._Mylast,
      ppPVar5 != local_228.childs_._Mypair._Myval2._Mylast; ppPVar5 = ppPVar5 + 1) {
    pPVar18 = *ppPVar5;
    local_228.childs_._Mypair._Myval2._Mylast = ppPVar6;
    if (pPVar18 != (PolyPath<__int64> *)0x0) {
      Clipper2Lib::PolyPath<__int64>::~PolyPath<__int64>(pPVar18);
      ::operator_delete(pPVar18,0x40);
    }
    ppPVar6 = local_228.childs_._Mypair._Myval2._Mylast;
    local_228.childs_._Mypair._Myval2._Mylast = ppPVar9;
  }
  local_228.childs_._Mypair._Myval2._Mylast = ppPVar6;
  if ((longlong)ppPVar6 - (longlong)local_228.childs_._Mypair._Myval2._Myfirst >> 3 != 0) {
    local_228.childs_._Mypair._Myval2._Mylast = local_228.childs_._Mypair._Myval2._Myfirst;
  }
  if (local_228.childs_._Mypair._Myval2._Myfirst != (PolyPath<__int64> **)0x0) {
    uVar16 = (longlong)local_228.childs_._Mypair._Myval2._Myend -
             (longlong)local_228.childs_._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
    pPVar18 = (PolyPath<__int64> *)local_228.childs_._Mypair._Myval2._Myfirst;
    if (0xfff < uVar16) {
      pPVar18 = ((PolyPath<__int64> *)
                ((longlong)local_228.childs_._Mypair._Myval2._Myfirst + 0xffffffffffffffc0))->
                parent_;
      uVar16 = uVar16 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_228.childs_._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar18)))
      goto LAB_1494e20ec;
    }
    ::operator_delete(pPVar18,uVar16);
    local_228.childs_._Mypair._Myval2._Myfirst = (PolyPath<__int64> **)0x0;
    local_228.childs_._Mypair._Myval2._Mylast = (PolyPath<__int64> **)0x0;
    local_228.childs_._Mypair._Myval2._Myend = (PolyPath<__int64> **)0x0;
  }
  if (local_228.polygon_._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    uVar16 = (longlong)local_228.polygon_._Mypair._Myval2._Myend -
             (longlong)local_228.polygon_._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
    pPVar14 = local_228.polygon_._Mypair._Myval2._Myfirst;
    if (0xfff < uVar16) {
      pPVar14 = (Point<__int64> *)local_228.polygon_._Mypair._Myval2._Myfirst[-1].y;
      uVar16 = uVar16 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_228.polygon_._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar14)))
      {
LAB_1494e20ec:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar14,uVar16);
    local_228.polygon_._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
    local_228.polygon_._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
    local_228.polygon_._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
  }
  Clipper2Lib::ClipperBase::~ClipperBase(&local_1d8);
  return bVar10;
}

// ComputePCA3Helper<float> @ 1494e2380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::PCAHelper::ComputePCA3Helper<float>
          (TArrayView<UE::Math::TVector<float>_const_,int> *param_1,TVector<float> *param_2,
          TStaticArray<UE::Math::TVector<float>,3,4294967295> *param_3,TVector<float> *param_4,
          TVector<float> *param_5,FComputePCA3Options *param_6)

{
  TVector<float> *pTVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  TVector<float> *pTVar8;
  TVector<float> *pTVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_158 [32];
  add_assign_op<float,float> local_138 [4];
  char local_134 [12];
  Product<Eigen::Matrix<float,3,1,0,3,1>,Eigen::Transpose<Eigen::Matrix<float,3,1,0,3,1>_>,1>
  local_128;
  float local_118;
  float local_114;
  float local_110;
  Matrix<float,3,3,0,3,3> local_108;
  undefined1 local_d8 [8];
  float afStack_d0 [7];
  float afStack_b4 [7];
  ComputationInfo local_98;
  undefined2 local_94;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar3 = param_1->ArrayNum;
  *(undefined8 *)&param_2->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (iVar3 == 0) {
    bVar4 = false;
  }
  else {
    pTVar9 = param_1->DataPtr;
    pTVar1 = pTVar9 + iVar3;
    fVar12 = __real_ff7fffff;
    fVar13 = __real_ff7fffff;
    fVar14 = __real_ff7fffff;
    fVar15 = __real_7f7fffff;
    fVar17 = __real_7f7fffff;
    fVar18 = __real_7f7fffff;
    if (pTVar9 != pTVar1) {
      fVar16 = (param_2->field0_0x0)._s_0.Y;
      fVar11 = (param_2->field0_0x0)._s_0.X;
      fVar19 = (param_2->field0_0x0)._s_0.Z;
      pTVar8 = pTVar9;
      do {
        fVar11 = fVar11 + (pTVar8->field0_0x0)._s_0.X;
        (param_2->field0_0x0)._s_0.X = fVar11;
        fVar16 = fVar16 + (pTVar8->field0_0x0)._s_0.Y;
        (param_2->field0_0x0)._s_0.Y = fVar16;
        fVar19 = fVar19 + (pTVar8->field0_0x0)._s_0.Z;
        (param_2->field0_0x0)._s_0.Z = fVar19;
        fVar2 = (pTVar8->field0_0x0)._s_0.X;
        if (fVar2 < fVar17) {
          fVar17 = fVar2;
        }
        if (fVar13 < fVar2) {
          fVar13 = fVar2;
        }
        fVar2 = (pTVar8->field0_0x0)._s_0.Y;
        if (fVar2 < fVar18) {
          fVar18 = fVar2;
        }
        if (fVar12 < fVar2) {
          fVar12 = fVar2;
        }
        fVar2 = (pTVar8->field0_0x0)._s_0.Z;
        if (fVar2 < fVar15) {
          fVar15 = fVar2;
        }
        if (fVar14 < fVar2) {
          fVar14 = fVar2;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != pTVar1);
    }
    fVar16 = __real_3f800000;
    fVar19 = __real_3f800000 / (float)iVar3;
    (param_2->field0_0x0)._s_0.X = fVar19 * (param_2->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = fVar19 * (param_2->field0_0x0)._s_0.Y;
    fVar11 = 0.0;
    (param_2->field0_0x0)._s_0.Z = fVar19 * (param_2->field0_0x0)._s_0.Z;
    if (param_6->bScaleDataToUnitCube != false) {
      fVar19 = fVar12 - fVar18;
      if (fVar12 - fVar18 <= 0.0) {
        fVar19 = fVar11;
      }
      fVar12 = fVar14 - fVar15;
      if (fVar14 - fVar15 <= 0.0) {
        fVar12 = fVar11;
      }
      fVar14 = fVar13 - fVar17;
      if (fVar13 - fVar17 <= 0.0) {
        fVar14 = fVar11;
      }
      if (fVar19 <= fVar12) {
        fVar19 = fVar12;
      }
      if (fVar19 <= fVar14) {
        fVar19 = fVar14;
      }
      if (fVar19 <= __real_322bcc77) {
        fVar19 = __real_322bcc77;
      }
      fVar16 = fVar16 / fVar19;
    }
    (param_5->field0_0x0)._s_0.X = fVar16;
    (param_5->field0_0x0)._s_0.Y = fVar16;
    (param_5->field0_0x0)._s_0.Z = fVar16;
    lVar10 = 0;
    local_98 = InvalidInput;
    local_94._0_1_ = false;
    local_94._1_1_ = false;
    local_134[0] = '\0';
    local_134[1] = '\0';
    local_134[2] = '\0';
    local_134[3] = '\0';
    local_134[4] = '\0';
    local_134[5] = '\0';
    local_134[6] = '\0';
    local_134[7] = '\0';
    lVar5 = lVar10;
    do {
      lVar7 = lVar5 + 1;
      if (local_134[lVar5] != local_134[lVar5 + 4]) break;
      lVar5 = lVar7;
    } while (lVar7 != 4);
    local_108._0_8_ = 0;
    local_108._8_8_ = 0;
    local_108._32_4_ = 0;
    local_108._24_8_ = 0;
    local_108._16_8_ = 0;
    if (pTVar9 != pTVar1) {
      local_128.m_lhs = (Matrix<float,3,1,0,3,1> *)&local_118;
      local_128.m_rhs.m_matrix = (Matrix<float,3,1,0,3,1> *)&local_118;
      do {
        local_118 = ((pTVar9->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) * fVar16;
        local_114 = ((pTVar9->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) * fVar16;
        local_110 = ((pTVar9->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) * fVar16;
        Eigen::internal::
        call_assignment_no_alias<Eigen::Matrix<float,3,3,0,3,3>,Eigen::Product<Eigen::Matrix<float,3,1,0,3,1>,Eigen::Transpose<Eigen::Matrix<float,3,1,0,3,1>_>,1>,Eigen::internal::add_assign_op<float,float>_>
                  (&local_108,&local_128,local_138);
        pTVar9 = pTVar9 + 1;
      } while (pTVar9 != pTVar1);
    }
    Eigen::internal::
    direct_selfadjoint_eigenvalues<Eigen::SelfAdjointEigenSolver<Eigen::Matrix<float,3,3,0,3,3>_>,3,0>
    ::run((SelfAdjointEigenSolver<Eigen::Matrix<float,3,3,0,3,3>_> *)local_d8,&local_108,0x80);
    bVar4 = param_6->bSortEigenvalues;
    (param_4->field0_0x0)._s_0.X =
         *(float *)(local_d8 + (ulonglong)(-(uint)(bVar4 != false) & 8) + 0x24);
    (param_4->field0_0x0)._s_0.Y = afStack_b4[1];
    lVar5 = lVar10;
    if (bVar4 == false) {
      lVar5 = 8;
    }
    (param_4->field0_0x0)._s_0.Z = *(float *)(local_d8 + lVar5 + 0x24);
    uVar6 = (ulonglong)(-(uint)(bVar4 != false) & 0x18);
    fVar12 = *(float *)(local_d8 + uVar6 + 4);
    fVar13 = *(float *)(local_d8 + uVar6 + 8);
    param_3->Elements[0].field0_0x0._s_0.X = *(float *)(local_d8 + uVar6);
    param_3->Elements[0].field0_0x0._s_0.Y = fVar12;
    if (bVar4 == false) {
      lVar10 = 0x18;
    }
    param_3->Elements[0].field0_0x0._s_0.Z = fVar13;
    param_3->Elements[1].field0_0x0._s_0.X = afStack_d0[1];
    param_3->Elements[1].field0_0x0._s_0.Y = afStack_d0[2];
    param_3->Elements[1].field0_0x0._s_0.Z = afStack_d0[3];
    fVar12 = *(float *)(local_d8 + lVar10 + 4);
    fVar13 = *(float *)(local_d8 + lVar10 + 8);
    param_3->Elements[2].field0_0x0._s_0.X = *(float *)(local_d8 + lVar10);
    bVar4 = true;
    param_3->Elements[2].field0_0x0._s_0.Y = fVar12;
    param_3->Elements[2].field0_0x0._s_0.Z = fVar13;
  }
  return bVar4;
}

// ComputePCA3Helper<double> @ 1494e2770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Private::PCAHelper::ComputePCA3Helper<double>
          (TArrayView<UE::Math::TVector<double>_const_,int> *param_1,TVector<double> *param_2,
          TStaticArray<UE::Math::TVector<double>,3,4294967295> *param_3,TVector<double> *param_4,
          TVector<double> *param_5,FComputePCA3Options *param_6)

{
  TVector<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  ulonglong uVar11;
  TVector<double> *pTVar12;
  TVector<double> *pTVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_208 [32];
  add_assign_op<double,double> local_1e8 [8];
  undefined8 local_1e0;
  undefined8 local_1d8;
  evaluator<Eigen::Matrix<double,3,3,0,3,3>_> local_1d0;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,3,3,0,3,3>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<double,3,1,0,3,1>,Eigen::Transpose<Eigen::Matrix<double,3,1,0,3,1>_>,1>_>,Eigen::internal::add_assign_op<double,double>,0>
  local_1c8;
  double *local_1a8;
  double *local_1a0;
  double *local_198;
  double *local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  Matrix<double,3,3,0,3,3> local_168;
  undefined1 local_118 [16];
  double local_108 [7];
  double adStack_d0 [7];
  ComputationInfo local_98;
  undefined2 local_94;
  ulonglong local_88;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_208;
  iVar6 = param_1->ArrayNum;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar8;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (iVar6 == 0) {
    bVar9 = false;
  }
  else {
    pTVar13 = param_1->DataPtr;
    pTVar1 = pTVar13 + iVar6;
    uVar17 = (undefined4)__real_7fefffffffffffff;
    uVar18 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    dVar14 = __real_ffefffffffffffff;
    dVar15 = __real_ffefffffffffffff;
    dVar16 = __real_ffefffffffffffff;
    uVar19 = uVar17;
    uVar20 = uVar18;
    uVar21 = uVar17;
    uVar22 = uVar18;
    if (pTVar13 != pTVar1) {
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      dVar3 = (param_2->field0_0x0)._s_0.Z;
      dVar4 = (param_2->field0_0x0)._s_0.X;
      pTVar12 = pTVar13;
      do {
        dVar4 = dVar4 + (pTVar12->field0_0x0)._s_0.X;
        (param_2->field0_0x0)._s_0.X = dVar4;
        dVar2 = dVar2 + (pTVar12->field0_0x0)._s_0.Y;
        (param_2->field0_0x0)._s_0.Y = dVar2;
        dVar3 = dVar3 + (pTVar12->field0_0x0)._s_0.Z;
        (param_2->field0_0x0)._s_0.Z = dVar3;
        dVar5 = (pTVar12->field0_0x0)._s_0.X;
        if (dVar5 < (double)CONCAT44(uVar20,uVar19)) {
          uVar19 = SUB84(dVar5,0);
          uVar20 = (int)((ulonglong)dVar5 >> 0x20);
        }
        if (dVar15 < dVar5) {
          dVar15 = dVar5;
        }
        dVar5 = (pTVar12->field0_0x0)._s_0.Y;
        if (dVar5 < (double)CONCAT44(uVar22,uVar21)) {
          uVar21 = SUB84(dVar5,0);
          uVar22 = (int)((ulonglong)dVar5 >> 0x20);
        }
        if (dVar14 < dVar5) {
          dVar14 = dVar5;
        }
        dVar5 = (pTVar12->field0_0x0)._s_0.Z;
        if (dVar5 < (double)CONCAT44(uVar18,uVar17)) {
          uVar17 = SUB84(dVar5,0);
          uVar18 = (int)((ulonglong)dVar5 >> 0x20);
        }
        if (dVar16 < dVar5) {
          dVar16 = dVar5;
        }
        pTVar12 = pTVar12 + 1;
      } while (pTVar12 != pTVar1);
    }
    dVar3 = __real_3ff0000000000000;
    dVar2 = __real_3ff0000000000000 / (double)iVar6;
    (param_2->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X * dVar2;
    (param_2->field0_0x0)._s_0.Y = (param_2->field0_0x0)._s_0.Y * dVar2;
    (param_2->field0_0x0)._s_0.Z = dVar2 * (param_2->field0_0x0)._s_0.Z;
    if (param_6->bScaleDataToUnitCube != false) {
      dVar14 = dVar14 - (double)CONCAT44(uVar22,uVar21);
      dVar16 = dVar16 - (double)CONCAT44(uVar18,uVar17);
      dVar15 = dVar15 - (double)CONCAT44(uVar20,uVar19);
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      if (dVar14 <= dVar16) {
        dVar14 = dVar16;
      }
      if (dVar14 <= dVar15) {
        dVar14 = dVar15;
      }
      if (dVar14 <= __real_3e45798ee0000000) {
        dVar14 = __real_3e45798ee0000000;
      }
      dVar3 = dVar3 / dVar14;
    }
    auVar7._8_4_ = SUB84(dVar3,0);
    auVar7._0_8_ = dVar3;
    auVar7._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&param_5->field0_0x0 = auVar7;
    (param_5->field0_0x0)._s_0.Z = dVar3;
    local_1d8 = 0;
    local_1e0 = 0;
    local_98 = InvalidInput;
    local_94._0_1_ = false;
    local_94._1_1_ = false;
    memcmp(&local_1d8,&local_1e0,8);
    local_168._64_8_ = 0;
    local_168._56_8_ = 0;
    local_168._48_8_ = 0;
    local_168._40_8_ = 0;
    local_168._32_8_ = 0;
    local_168._24_8_ = 0;
    local_168._16_8_ = 0;
    local_168._8_8_ = 0;
    local_168._0_8_ = 0;
    for (; pTVar13 != pTVar1; pTVar13 = pTVar13 + 1) {
      local_1a8 = &local_180;
      local_1a0 = &local_180;
      local_198 = &local_180;
      local_190 = &local_180;
      local_1d0 = (evaluator<Eigen::Matrix<double,3,3,0,3,3>_>)&local_168;
      local_180 = ((pTVar13->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) * dVar3;
      local_1c8.m_dst = &local_1d0;
      local_1c8.m_src =
           (evaluator<Eigen::Product<Eigen::Matrix<double,3,1,0,3,1>,Eigen::Transpose<Eigen::Matrix<double,3,1,0,3,1>_>,1>_>
            *)&local_1a8;
      local_1c8.m_functor = local_1e8;
      local_178 = ((pTVar13->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) * dVar3;
      local_1c8.m_dstExpr = &local_168;
      local_188 = 1;
      local_170 = ((pTVar13->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) * dVar3;
      Eigen::internal::
      dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,3,3,0,3,3>_>,Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<double,3,1,0,3,1>,Eigen::Transpose<Eigen::Matrix<double,3,1,0,3,1>_>,1>_>,Eigen::internal::add_assign_op<double,double>,0>,4,1>
      ::run(&local_1c8);
    }
    Eigen::internal::
    direct_selfadjoint_eigenvalues<Eigen::SelfAdjointEigenSolver<Eigen::Matrix<double,3,3,0,3,3>_>,3,0>
    ::run((SelfAdjointEigenSolver<Eigen::Matrix<double,3,3,0,3,3>_> *)local_118,&local_168,0x80);
    bVar9 = param_6->bSortEigenvalues;
    (param_4->field0_0x0)._s_0.X =
         *(double *)(local_118 + (ulonglong)(-(uint)(bVar9 != false) & 0x10) + 0x48);
    (param_4->field0_0x0)._s_0.Y = adStack_d0[1];
    lVar10 = 0;
    if (bVar9 == false) {
      lVar10 = 0x10;
    }
    (param_4->field0_0x0)._s_0.Z = *(double *)(local_118 + lVar10 + 0x48);
    uVar11 = (ulonglong)(-(uint)(bVar9 != false) & 0x30);
    dVar14 = *(double *)(local_118 + uVar11 + 8);
    dVar16 = *(double *)(local_118 + uVar11 + 0x10);
    param_3->Elements[0].field0_0x0._s_0.X = *(double *)(local_118 + uVar11);
    param_3->Elements[0].field0_0x0._s_0.Y = dVar14;
    param_3->Elements[0].field0_0x0._s_0.Z = dVar16;
    lVar10 = 0;
    if (bVar9 == false) {
      lVar10 = 0x30;
    }
    param_3->Elements[1].field0_0x0._s_0.X = local_108[1];
    param_3->Elements[1].field0_0x0._s_0.Y = local_108[2];
    param_3->Elements[1].field0_0x0._s_0.Z = local_108[3];
    dVar14 = *(double *)(local_118 + lVar10 + 8);
    dVar16 = *(double *)(local_118 + lVar10 + 0x10);
    param_3->Elements[2].field0_0x0._s_0.X = *(double *)(local_118 + lVar10);
    bVar9 = true;
    param_3->Elements[2].field0_0x0._s_0.Y = dVar14;
    param_3->Elements[2].field0_0x0._s_0.Z = dVar16;
  }
  return bVar9;
}

// ConstrainedDelaunayTriangulate<float> @ 1494e2b50

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::ConstrainedDelaunayTriangulate<float>
          (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TGeneralPolygon2<float> *param_1)

{
  ForAnyElementType _Src;
  longlong lVar1;
  TConstrainedDelaunay2<float> local_58;
  
  local_58.bOrientedEdges = true;
  local_58.bOutputCCW = false;
  local_58.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Vertices.ArrayNum = 0;
  local_58.Vertices.ArrayMax = 0;
  local_58.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Edges.ArrayNum = 0;
  local_58.Edges.ArrayMax = 0;
  local_58.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.HoleEdges.ArrayNum = 0;
  local_58.HoleEdges.ArrayMax = 0;
  local_58.bSplitBowties = false;
  local_58.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Triangles.ArrayNum = 0;
  local_58.Triangles.ArrayMax = 0;
  local_58.AddedVerticesStartIndex = -1;
  local_58.FillRule = Positive;
  TConstrainedDelaunay2<float>::Add<float>(&local_58,param_1);
  TConstrainedDelaunay2<float>::Triangulate(&local_58);
  _Src.Data = local_58.Triangles.AllocatorInstance.Data;
  lVar1 = (longlong)local_58.Triangles.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_58.Triangles.ArrayNum;
  if (local_58.Triangles.ArrayNum == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_58.Triangles.ArrayNum,0,&__return_storage_ptr__->AllocatorInstance,
               local_58.Triangles.ArrayNum,&__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar1 * 0xc);
  }
  if (local_58.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Triangles.AllocatorInstance.Data);
  }
  if (local_58.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.HoleEdges.AllocatorInstance.Data);
  }
  if (local_58.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Edges.AllocatorInstance.Data);
  }
  if (local_58.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Vertices.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConstrainedDelaunayTriangulate<double> @ 1494e2c80

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::ConstrainedDelaunayTriangulate<double>
          (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TGeneralPolygon2<double> *param_1)

{
  ForAnyElementType _Src;
  longlong lVar1;
  TConstrainedDelaunay2<double> local_58;
  
  local_58.bOrientedEdges = true;
  local_58.bOutputCCW = false;
  local_58.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Vertices.ArrayNum = 0;
  local_58.Vertices.ArrayMax = 0;
  local_58.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Edges.ArrayNum = 0;
  local_58.Edges.ArrayMax = 0;
  local_58.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.HoleEdges.ArrayNum = 0;
  local_58.HoleEdges.ArrayMax = 0;
  local_58.bSplitBowties = false;
  local_58.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Triangles.ArrayNum = 0;
  local_58.Triangles.ArrayMax = 0;
  local_58.AddedVerticesStartIndex = -1;
  local_58.FillRule = Positive;
  TConstrainedDelaunay2<double>::Add<double>(&local_58,param_1);
  TConstrainedDelaunay2<double>::Triangulate(&local_58);
  _Src.Data = local_58.Triangles.AllocatorInstance.Data;
  lVar1 = (longlong)local_58.Triangles.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_58.Triangles.ArrayNum;
  if (local_58.Triangles.ArrayNum == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_58.Triangles.ArrayNum,0,&__return_storage_ptr__->AllocatorInstance,
               local_58.Triangles.ArrayNum,&__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar1 * 0xc);
  }
  if (local_58.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Triangles.AllocatorInstance.Data);
  }
  if (local_58.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.HoleEdges.AllocatorInstance.Data);
  }
  if (local_58.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Edges.AllocatorInstance.Data);
  }
  if (local_58.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Vertices.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConstrainedDelaunayTriangulateWithVertices<float> @ 1494e2db0

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::ConstrainedDelaunayTriangulateWithVertices<float>
          (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TGeneralPolygon2<float> *param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  longlong lVar2;
  TConstrainedDelaunay2<float> local_58;
  
  local_58.bOrientedEdges = true;
  local_58.bOutputCCW = false;
  local_58.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Vertices.ArrayNum = 0;
  local_58.Vertices.ArrayMax = 0;
  local_58.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Edges.ArrayNum = 0;
  local_58.Edges.ArrayMax = 0;
  local_58.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.HoleEdges.ArrayNum = 0;
  local_58.HoleEdges.ArrayMax = 0;
  local_58.bSplitBowties = false;
  local_58.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Triangles.ArrayNum = 0;
  local_58.Triangles.ArrayMax = 0;
  local_58.AddedVerticesStartIndex = -1;
  local_58.FillRule = Positive;
  TConstrainedDelaunay2<float>::Add<float>(&local_58,param_1);
  TConstrainedDelaunay2<float>::Triangulate(&local_58);
  if ((TConstrainedDelaunay2<float> *)param_2 != &local_58) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->AllocatorInstance).Data = local_58.Vertices.AllocatorInstance.Data;
    param_2->ArrayNum = local_58.Vertices.ArrayNum;
    param_2->ArrayMax = local_58.Vertices.ArrayMax;
    local_58.Vertices.ArrayNum = 0;
    local_58.Vertices.ArrayMax = 0;
    local_58.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  _Src.Data = local_58.Triangles.AllocatorInstance.Data;
  lVar2 = (longlong)local_58.Triangles.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_58.Triangles.ArrayNum;
  if (local_58.Triangles.ArrayNum == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_58.Triangles.ArrayNum,0,&__return_storage_ptr__->AllocatorInstance,
               local_58.Triangles.ArrayNum,&__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar2 * 0xc);
  }
  if (local_58.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Triangles.AllocatorInstance.Data);
  }
  if (local_58.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.HoleEdges.AllocatorInstance.Data);
  }
  if (local_58.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Edges.AllocatorInstance.Data);
  }
  if (local_58.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Vertices.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConstrainedDelaunayTriangulateWithVertices<double> @ 1494e2f10

TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::ConstrainedDelaunayTriangulateWithVertices<double>
          (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TGeneralPolygon2<double> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  longlong lVar2;
  TConstrainedDelaunay2<double> local_58;
  
  local_58.bOrientedEdges = true;
  local_58.bOutputCCW = false;
  local_58.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Vertices.ArrayNum = 0;
  local_58.Vertices.ArrayMax = 0;
  local_58.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Edges.ArrayNum = 0;
  local_58.Edges.ArrayMax = 0;
  local_58.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.HoleEdges.ArrayNum = 0;
  local_58.HoleEdges.ArrayMax = 0;
  local_58.bSplitBowties = false;
  local_58.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Triangles.ArrayNum = 0;
  local_58.Triangles.ArrayMax = 0;
  local_58.AddedVerticesStartIndex = -1;
  local_58.FillRule = Positive;
  TConstrainedDelaunay2<double>::Add<double>(&local_58,param_1);
  TConstrainedDelaunay2<double>::Triangulate(&local_58);
  if ((TConstrainedDelaunay2<double> *)param_2 != &local_58) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->AllocatorInstance).Data = local_58.Vertices.AllocatorInstance.Data;
    param_2->ArrayNum = local_58.Vertices.ArrayNum;
    param_2->ArrayMax = local_58.Vertices.ArrayMax;
    local_58.Vertices.ArrayNum = 0;
    local_58.Vertices.ArrayMax = 0;
    local_58.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  _Src.Data = local_58.Triangles.AllocatorInstance.Data;
  lVar2 = (longlong)local_58.Triangles.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = local_58.Triangles.ArrayNum;
  if (local_58.Triangles.ArrayNum == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_58.Triangles.ArrayNum,0,&__return_storage_ptr__->AllocatorInstance,
               local_58.Triangles.ArrayNum,&__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar2 * 0xc);
  }
  if (local_58.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Triangles.AllocatorInstance.Data);
  }
  if (local_58.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.HoleEdges.AllocatorInstance.Data);
  }
  if (local_58.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Edges.AllocatorInstance.Data);
  }
  if (local_58.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Vertices.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Contains2<float,UE::Math::TVector2<float>_> @ 1494e32b0

bool __cdecl
UE::Geometry::CurveUtil::Contains2<float,UE::Math::TVector2<float>_>
          (TArrayView<UE::Math::TVector2<float>_const_,int> *param_1,TVector2<float> *param_2)

{
  float fVar1;
  int iVar2;
  TVector2<float>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TVector2<float>_u_0_s_0 *pTVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  float local_res8;
  float fStackX_c;
  undefined8 local_res18;
  
  iVar2 = param_1->ArrayNum;
  iVar9 = 0;
  if (iVar2 == 0) {
    return false;
  }
  pTVar8 = (TVector2<float>_u_0_s_0 *)
           TArrayView<UE::Math::TVector2<float>_const_,int>::operator[](param_1,iVar2 + -1);
  uVar11 = 0;
  if (0 < iVar2) {
    lVar10 = 0;
    local_res18 = *pTVar8;
    do {
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      fVar1 = (param_2->field0_0x0)._s_0.Y;
      TVar3 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&param_1->DataPtr[lVar10].field0_0x0._s_0
      ;
      fStackX_c = TVar3._s_0.Y;
      local_res8 = TVar3._s_0.X;
      if (fVar1 < local_res18._4_4_) {
        if ((fStackX_c <= fVar1) &&
           ((fVar1 - local_res18._4_4_) * (local_res8 - (float)local_res18) -
            ((param_2->field0_0x0)._s_0.X - (float)local_res18) * (fStackX_c - local_res18._4_4_) <
            0.0)) {
          iVar9 = iVar9 + -1;
        }
      }
      else if ((fVar1 < fStackX_c) &&
              (0.0 < (fVar1 - local_res18._4_4_) * (local_res8 - (float)local_res18) -
                     ((param_2->field0_0x0)._s_0.X - (float)local_res18) *
                     (fStackX_c - local_res18._4_4_))) {
        iVar9 = iVar9 + 1;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 1;
      local_res18 = TVar3;
    } while (lVar10 < iVar2);
  }
  return iVar9 != 0;
}

// Contains2<double,UE::Math::TVector2<double>_> @ 1494e3440

bool __cdecl
UE::Geometry::CurveUtil::Contains2<double,UE::Math::TVector2<double>_>
          (TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,TVector2<double> *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  TVector2<double> *pTVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  iVar4 = param_1->ArrayNum;
  lVar13 = (longlong)iVar4;
  iVar12 = 0;
  if (iVar4 == 0) {
    return false;
  }
  pTVar11 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[](param_1,iVar4 + -1);
  uVar15 = 0;
  uVar17 = *(undefined4 *)&pTVar11->field0_0x0;
  uVar18 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 4);
  uVar19 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 8);
  uVar20 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 0xc);
  if (0 < iVar4) {
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      dVar16 = (double)CONCAT44(uVar20,uVar19);
      dVar3 = (param_2->field0_0x0)._s_0.Y;
      pdVar1 = (double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar14);
      dVar6 = *pdVar1;
      dVar7 = pdVar1[1];
      if (dVar3 < dVar16) {
        if ((dVar7 <= dVar3) &&
           ((dVar3 - dVar16) * (dVar6 - (double)CONCAT44(uVar18,uVar17)) -
            ((param_2->field0_0x0)._s_0.X - (double)CONCAT44(uVar18,uVar17)) * (dVar7 - dVar16) <
            0.0)) {
          iVar12 = iVar12 + -1;
        }
      }
      else if ((dVar3 < dVar7) &&
              (0.0 < (dVar3 - dVar16) * (dVar6 - (double)CONCAT44(uVar18,uVar17)) -
                     ((param_2->field0_0x0)._s_0.X - (double)CONCAT44(uVar18,uVar17)) *
                     (dVar7 - dVar16))) {
        iVar12 = iVar12 + 1;
      }
      puVar2 = (undefined4 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar14);
      uVar17 = *puVar2;
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      lVar14 = lVar14 + 0x10;
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return iVar12 != 0;
}

// Convert<float> @ 1494e35c0

TVector<float> * __cdecl
UE::Geometry::Convert<float>(TVector<float> *__return_storage_ptr__,Vector<3,float> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->mTuple)._Elems[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->mTuple)._Elems[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->mTuple)._Elems[2];
  return __return_storage_ptr__;
}

// Convert<float> @ 1494e35e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Circle3<float> * __cdecl
UE::Geometry::Convert<float>(Circle3<float> *__return_storage_ptr__,TCircle3<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  initializer_list<float> local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  Vector<3,float> local_68;
  Vector<3,float> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  fVar1 = (param_1->Frame).Rotation.field0_0x0._s_0.X;
  local_88._First = &local_78;
  fVar2 = (param_1->Frame).Rotation.field0_0x0._s_0.Y;
  fVar5 = (param_1->Frame).Rotation.field0_0x0._s_0.Z;
  fVar3 = (param_1->Frame).Rotation.field0_0x0._s_0.W;
  fVar5 = fVar5 + fVar5;
  fVar4 = param_1->Radius;
  local_88._Last = &local_6c;
  local_78 = fVar3 * (fVar2 + fVar2) + fVar5 * fVar1;
  local_74 = fVar5 * fVar2 - fVar3 * (fVar1 + fVar1);
  local_70 = __real_3f800000 - ((fVar2 + fVar2) * fVar2 + (fVar1 + fVar1) * fVar1);
  gte::Vector<3,float>::Vector<3,float>(&local_58,&local_88);
  local_78 = (param_1->Frame).Origin.field0_0x0._s_0.X;
  local_88._First = &local_78;
  local_74 = (param_1->Frame).Origin.field0_0x0._s_0.Y;
  local_70 = (param_1->Frame).Origin.field0_0x0._s_0.Z;
  local_88._Last = &local_6c;
  gte::Vector<3,float>::Vector<3,float>(&local_68,&local_88);
  *(undefined8 *)(__return_storage_ptr__->center).mTuple._Elems = local_68.mTuple._Elems._0_8_;
  (__return_storage_ptr__->center).mTuple._Elems[2] = local_68.mTuple._Elems[2];
  *(undefined8 *)(__return_storage_ptr__->normal).mTuple._Elems = local_58.mTuple._Elems._0_8_;
  (__return_storage_ptr__->normal).mTuple._Elems[2] = local_58.mTuple._Elems[2];
  __return_storage_ptr__->radius = fVar4;
  return __return_storage_ptr__;
}

// Convert<float> @ 1494e3750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Line<3,float> * __cdecl
UE::Geometry::Convert<float>(Line<3,float> *__return_storage_ptr__,TLine3<float> *param_1)

{
  undefined1 auStack_78 [32];
  initializer_list<float> local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  Vector<3,float> local_38;
  Vector<3,float> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = (param_1->Direction).field0_0x0._s_0.X;
  local_58._First = &local_48;
  local_44 = (param_1->Direction).field0_0x0._s_0.Y;
  local_40 = (param_1->Direction).field0_0x0._s_0.Z;
  local_58._Last = &local_3c;
  gte::Vector<3,float>::Vector<3,float>(&local_28,&local_58);
  local_48 = (param_1->Origin).field0_0x0._s_0.X;
  local_58._First = &local_48;
  local_44 = (param_1->Origin).field0_0x0._s_0.Y;
  local_40 = (param_1->Origin).field0_0x0._s_0.Z;
  local_58._Last = &local_3c;
  gte::Vector<3,float>::Vector<3,float>(&local_38,&local_58);
  *(undefined8 *)(__return_storage_ptr__->origin).mTuple._Elems = local_38.mTuple._Elems._0_8_;
  (__return_storage_ptr__->origin).mTuple._Elems[2] = local_38.mTuple._Elems[2];
  *(undefined8 *)(__return_storage_ptr__->direction).mTuple._Elems = local_28.mTuple._Elems._0_8_;
  (__return_storage_ptr__->direction).mTuple._Elems[2] = local_28.mTuple._Elems[2];
  return __return_storage_ptr__;
}

// Convert<float> @ 1494e3840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Vector<3,float> * __cdecl
UE::Geometry::Convert<float>(Vector<3,float> *__return_storage_ptr__,TVector<float> *param_1)

{
  undefined1 auStack_58 [32];
  initializer_list<float> local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28 = (param_1->field0_0x0)._s_0.X;
  local_38._First = &local_28;
  local_24 = (param_1->field0_0x0)._s_0.Y;
  local_20 = (param_1->field0_0x0)._s_0.Z;
  local_38._Last = &local_1c;
  gte::Vector<3,float>::Vector<3,float>(__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// Convert<double> @ 1494e38c0

TVector<double> * __cdecl
UE::Geometry::Convert<double>(TVector<double> *__return_storage_ptr__,Vector<3,double> *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->mTuple)._Elems[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->mTuple)._Elems[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->mTuple)._Elems[2];
  return __return_storage_ptr__;
}

// Convert<double> @ 1494e38e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Circle3<double> * __cdecl
UE::Geometry::Convert<double>(Circle3<double> *__return_storage_ptr__,TCircle3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = (param_1->Frame).Rotation.field0_0x0._s_0.Y;
  dVar2 = (param_1->Frame).Rotation.field0_0x0._s_0.X;
  dVar3 = (param_1->Frame).Rotation.field0_0x0._s_0.W;
  dVar4 = (param_1->Frame).Rotation.field0_0x0._s_0.Z;
  dVar4 = dVar4 + dVar4;
  dVar5 = (param_1->Frame).Origin.field0_0x0._s_0.Z;
  dVar7 = dVar4 * dVar1 - dVar3 * (dVar2 + dVar2);
  dVar8 = (param_1->Frame).Origin.field0_0x0._s_0.X;
  dVar9 = (param_1->Frame).Origin.field0_0x0._s_0.Y;
  __return_storage_ptr__->radius = param_1->Radius;
  dVar10 = __real_3ff0000000000000;
  (__return_storage_ptr__->center).mTuple._Elems[0] = dVar8;
  (__return_storage_ptr__->center).mTuple._Elems[1] = dVar9;
  (__return_storage_ptr__->center).mTuple._Elems[2] = dVar5;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar4 * dVar2 + dVar3 * (dVar1 + dVar1);
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->normal).mTuple._Elems = auVar6;
  (__return_storage_ptr__->normal).mTuple._Elems[2] =
       dVar10 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  return __return_storage_ptr__;
}

// Convert<double> @ 1494e39c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Line<3,double> * __cdecl
UE::Geometry::Convert<double>(Line<3,double> *__return_storage_ptr__,TLine3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (param_1->Direction).field0_0x0._s_0.X;
  dVar5 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar3 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->origin).mTuple._Elems[0] = (param_1->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->origin).mTuple._Elems[1] = dVar3;
  (__return_storage_ptr__->direction).mTuple._Elems[0] = dVar4;
  (__return_storage_ptr__->direction).mTuple._Elems[1] = dVar5;
  (__return_storage_ptr__->origin).mTuple._Elems[2] = dVar2;
  (__return_storage_ptr__->direction).mTuple._Elems[2] = dVar1;
  return __return_storage_ptr__;
}

// Convert<double> @ 1494e3a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Vector<3,double> * __cdecl
UE::Geometry::Convert<double>(Vector<3,double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined1 auStack_58 [32];
  initializer_list<double> local_38;
  double local_28;
  double dStack_20;
  double local_18;
  double local_10;
  
  local_10 = (double)(__security_cookie.value ^ (ulonglong)auStack_58);
  local_28 = (param_1->field0_0x0)._s_0.X;
  dStack_20 = (param_1->field0_0x0)._s_0.Y;
  local_38._First = &local_28;
  local_38._Last = &local_10;
  local_18 = (param_1->field0_0x0)._s_0.Z;
  gte::Vector<3,double>::Vector<3,double>(__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// ConvertGeneralizedPolygonToPath<float,__int64> @ 1494e4a30

vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
* __cdecl UE::Geometry::Private::ConvertGeneralizedPolygonToPath<float,__int64>
                    (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                     *__return_storage_ptr__,TGeneralPolygon2<float> *param_1,
                    TVector2<float> *param_2,float *param_3)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  AddGeneralizedPolygonToPaths<float,__int64>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// ConvertGeneralizedPolygonToPath<double,__int64> @ 1494e4a60

vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
* __cdecl UE::Geometry::Private::ConvertGeneralizedPolygonToPath<double,__int64>
                    (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                     *__return_storage_ptr__,TGeneralPolygon2<double> *param_1,
                    TVector2<double> *param_2,double *param_3)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  AddGeneralizedPolygonToPaths<double,__int64>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// ConvertPathToPolygon<__int64,float> @ 1494e4a90

TPolygon2<float> * __cdecl
UE::Geometry::Private::ConvertPathToPolygon<__int64,float>
          (TPolygon2<float> *__return_storage_ptr__,
          vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *param_1
          ,TVector2<float> *param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  TPolygon2<float> *pTVar6;
  Point<__int64> *pPVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float local_38;
  float fStack_34;
  
  uVar8 = 0;
  (__return_storage_ptr__->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Vertices).ArrayNum = 0;
  fVar3 = __real_25000000;
  (__return_storage_ptr__->Vertices).ArrayMax = 0;
  pPVar7 = (param_1->_Mypair)._Myval2._Myfirst;
  uVar10 = uVar8;
  if ((longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)pPVar7 >> 4 != 0) {
    do {
      pFVar1 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      local_38 = (float)*(longlong *)((longlong)&pPVar7->x + uVar8) * fVar3 * *param_3 +
                 (param_2->field0_0x0)._s_0.X;
      fStack_34 = (float)*(longlong *)((longlong)&pPVar7->y + uVar8) * fVar3 * *param_3 +
                  (param_2->field0_0x0)._s_0.Y;
      if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar1 + (longlong)(__return_storage_ptr__->Vertices).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TPolygon2<float> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = (__return_storage_ptr__->Vertices).ArrayNum;
      if (iVar5 == (__return_storage_ptr__->Vertices).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Vertices).ArrayMax);
      }
      uVar9 = (int)uVar10 + 1;
      (__return_storage_ptr__->Vertices).ArrayNum = iVar5 + 1;
      uVar8 = uVar8 + 0x10;
      *(ulonglong *)
       ((__return_storage_ptr__->Vertices).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           CONCAT44(fStack_34,local_38);
      pPVar7 = (param_1->_Mypair)._Myval2._Myfirst;
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)((longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)pPVar7 >> 4));
  }
  return __return_storage_ptr__;
}

// ConvertPathToPolygon<__int64,double> @ 1494e4c20

TPolygon2<double> * __cdecl
UE::Geometry::Private::ConvertPathToPolygon<__int64,double>
          (TPolygon2<double> *__return_storage_ptr__,
          vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *param_1
          ,TVector2<double> *param_2,double *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  TPolygon2<double> *pTVar6;
  Point<__int64> *pPVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  double local_38;
  double dStack_30;
  
  uVar8 = 0;
  (__return_storage_ptr__->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Vertices).ArrayNum = 0;
  dVar3 = __real_3ca0000000000001;
  (__return_storage_ptr__->Vertices).ArrayMax = 0;
  pPVar7 = (param_1->_Mypair)._Myval2._Myfirst;
  uVar10 = uVar8;
  if ((longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)pPVar7 >> 4 != 0) {
    do {
      pFVar1 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      local_38 = (double)*(longlong *)((longlong)&pPVar7->x + uVar8) * dVar3 * *param_3 +
                 (param_2->field0_0x0)._s_0.X;
      dStack_30 = (double)*(longlong *)((longlong)&pPVar7->y + uVar8) * dVar3 * *param_3 +
                  (param_2->field0_0x0)._s_0.Y;
      if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar1 + (longlong)(__return_storage_ptr__->Vertices).ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TPolygon2<double> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = (__return_storage_ptr__->Vertices).ArrayNum;
      if (iVar5 == (__return_storage_ptr__->Vertices).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->Vertices).ArrayMax);
      }
      uVar9 = (int)uVar10 + 1;
      (__return_storage_ptr__->Vertices).ArrayNum = iVar5 + 1;
      uVar8 = uVar8 + 0x10;
      pFVar1 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(double *)pFVar1 = local_38;
      *(double *)(pFVar1 + 8) = dStack_30;
      pPVar7 = (param_1->_Mypair)._Myval2._Myfirst;
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)((longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)pPVar7 >> 4));
  }
  return __return_storage_ptr__;
}

// ConvertPathToUEPath<__int64,double> @ 1494e4dc0

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::Private::ConvertPathToUEPath<__int64,double>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *param_1
          ,TVector2<double> *param_2,double *param_3)

{
  int *piVar1;
  Point<__int64> *pPVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  Point<__int64> *pPVar9;
  ulonglong uVar10;
  double local_38;
  double dStack_30;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar10 = (longlong)(param_1->_Mypair)._Myval2._Mylast -
           (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 4;
  iVar7 = (int)uVar10;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar10 & 0xffffffff);
  }
  if (0 < iVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  dVar5 = __real_3ca0000000000001;
  pPVar2 = (param_1->_Mypair)._Myval2._Mylast;
  pPVar9 = (param_1->_Mypair)._Myval2._Myfirst;
  while( true ) {
    if (pPVar9 == pPVar2) {
      return __return_storage_ptr__;
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_38 = (double)pPVar9->x * dVar5 * *param_3 + (param_2->field0_0x0)._s_0.X;
    dStack_30 = (double)pPVar9->y * dVar5 * *param_3 + (param_2->field0_0x0)._s_0.Y;
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pPVar9 = pPVar9 + 1;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(double *)pFVar3 = local_38;
    *(double *)(pFVar3 + 8) = dStack_30;
  }
  pcVar4 = (code *)swi(3);
  pTVar8 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar8;
}

// ConvertPathsToUEPaths<__int64,double> @ 1494e4f60

/* WARNING: Removing unreachable block (ram,0x0001494e5233) */

TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__cdecl UE::Geometry::Private::ConvertPathsToUEPaths<__int64,double>
                  (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,
                  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                  *param_1,TVector2<double> *param_2,double *param_3)

{
  int *piVar1;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar2;
  Point<__int64> *pPVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  longlong lVar11;
  Point<__int64> *pPVar12;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar13;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  double local_48;
  double dStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar9 = ((longlong)(param_1->_Mypair)._Myval2._Mylast -
          (longlong)(param_1->_Mypair)._Myval2._Myfirst) / 0x18;
  iVar8 = (int)uVar9;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
  }
  if (0 < iVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar8,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  dVar6 = __real_3ca0000000000001;
  pvVar2 = (param_1->_Mypair)._Myval2._Mylast;
  pvVar13 = (param_1->_Mypair)._Myval2._Myfirst;
  while( true ) {
    if (pvVar13 == pvVar2) {
      return __return_storage_ptr__;
    }
    uVar9 = (longlong)(pvVar13->_Mypair)._Myval2._Mylast -
            (longlong)(pvVar13->_Mypair)._Myval2._Myfirst >> 4;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    iStack_4c = 0;
    iVar8 = (int)uVar9;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
    }
    if (0 < iVar8) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,&local_58,0,&iStack_4c);
    }
    pPVar3 = (pvVar13->_Mypair)._Myval2._Mylast;
    for (pPVar12 = (pvVar13->_Mypair)._Myval2._Myfirst; pPVar12 != pPVar3; pPVar12 = pPVar12 + 1) {
      local_48 = (double)pPVar12->x * dVar6 * *param_3 + (param_2->field0_0x0)._s_0.X;
      dStack_40 = (double)pPVar12->y * dVar6 * *param_3 + (param_2->field0_0x0)._s_0.Y;
      if (((local_58.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_58.Data + (longlong)iStack_4c * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      if (local_50 == iStack_4c) {
        local_50 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_58,&iStack_4c);
      }
      *(double *)(local_58.Data + (longlong)local_50 * 0x10) = local_48;
      *(double *)(local_58.Data + (longlong)local_50 * 0x10 + 8) = dStack_40;
      local_50 = local_50 + 1;
    }
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar8;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar4 + lVar11 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar4 + lVar11 * 0x10) = local_58.Data;
    *(int *)(pFVar4 + lVar11 * 0x10 + 8) = local_50;
    *(int *)(pFVar4 + lVar11 * 0x10 + 0xc) = iStack_4c;
    pvVar13 = pvVar13 + 1;
  }
  pcVar5 = (code *)swi(3);
  pTVar10 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *)(*pcVar5)();
  return pTVar10;
}

// ConvertPolyTreeToPolygons<__int64,float> @ 1494e5290

void __cdecl
UE::Geometry::Private::ConvertPolyTreeToPolygons<__int64,float>
          (PolyPath<__int64> *param_1,
          TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_> *param_2,
          TVector2<float> *param_3,float *param_4,int param_5)

{
  PolyPath<__int64> *pPVar1;
  FScriptContainerElement *pFVar2;
  PolyPath<__int64> **ppPVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  int iVar6;
  longlong lVar7;
  PolyPath<__int64> **ppPVar8;
  int iVar9;
  bool bVar10;
  TPolygon2<float> local_48;
  TPolygon2<float> local_38;
  
  iVar6 = -1;
  if (param_2->ArrayNum != 0) {
    iVar6 = param_5;
  }
  ConvertPathToPolygon<__int64,float>(&local_48,&param_1->polygon_,param_3,param_4);
  if (0 < local_48.Vertices.ArrayNum) {
    pPVar1 = param_1->parent_;
    bVar10 = pPVar1 != (PolyPath<__int64> *)0x0;
    for (; pPVar1 != (PolyPath<__int64> *)0x0; pPVar1 = pPVar1->parent_) {
      bVar10 = (bool)(bVar10 ^ 1);
    }
    if (bVar10) {
      if ((-1 < iVar6) && (iVar6 < param_2->ArrayNum)) {
        iVar9 = local_48.Vertices.ArrayNum;
        if ((iVar6 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar9 = local_48.Vertices.ArrayNum, bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar5.Data = local_48.Vertices.AllocatorInstance.Data;
        local_38.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (iVar9 == 0) {
          local_38.Vertices.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar9,0,(ForAnyElementType *)&local_38,iVar9,&local_38.Vertices.ArrayMax);
          memcpy(local_38.Vertices.AllocatorInstance.Data,FVar5.Data,(longlong)iVar9 << 3);
        }
        TGeneralPolygon2<float>::AddHole
                  ((TGeneralPolygon2<float> *)(pFVar2 + (longlong)iVar6 * 0x28),&local_38,false,
                   false);
        goto LAB_1494e54c8;
      }
      bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7949019982745043083>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\Curve\\ClipperUtils.inl"
                          ,0x8b,"OutPolygons.IsValidIndex(ParentPolygonIdx)");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar5.Data = local_48.Vertices.AllocatorInstance.Data;
    param_2->ArrayNum = iVar6 + 1;
    lVar7 = (longlong)iVar6;
    pFVar2 = (param_2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar7 * 0x28) = 0;
    *(int *)(pFVar2 + lVar7 * 0x28 + 8) = local_48.Vertices.ArrayNum;
    pFVar2 = pFVar2 + lVar7 * 0x28;
    if (local_48.Vertices.ArrayNum == 0) {
      *(int *)(pFVar2 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_48.Vertices.ArrayNum,0,(ForAnyElementType *)pFVar2,
                 local_48.Vertices.ArrayNum,(int *)(pFVar2 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar5.Data,
             (longlong)local_48.Vertices.ArrayNum << 3);
    }
    *(FScriptContainerElement **)&pFVar2[0x18].field_0x0 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)&pFVar2[0x20].field_0x0 = (FScriptContainerElement *)0x0;
    bVar10 = TPolygon2<float>::IsClockwise(&local_48);
    pFVar2[0x10].field_0x0 = bVar10;
  }
LAB_1494e54c8:
  ppPVar3 = (param_1->childs_)._Mypair._Myval2._Mylast;
  for (ppPVar8 = (param_1->childs_)._Mypair._Myval2._Myfirst; ppPVar8 != ppPVar3;
      ppPVar8 = ppPVar8 + 1) {
    ConvertPolyTreeToPolygons<__int64,float>(*ppPVar8,param_2,param_3,param_4,iVar6);
  }
  if (local_48.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Vertices.AllocatorInstance.Data);
  }
  return;
}

// ConvertPolyTreeToPolygons<__int64,double> @ 1494e5540

void __cdecl
UE::Geometry::Private::ConvertPolyTreeToPolygons<__int64,double>
          (PolyPath<__int64> *param_1,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_2,
          TVector2<double> *param_3,double *param_4,int param_5)

{
  PolyPath<__int64> *pPVar1;
  FScriptContainerElement *pFVar2;
  PolyPath<__int64> **ppPVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  int iVar6;
  longlong lVar7;
  PolyPath<__int64> **ppPVar8;
  int iVar9;
  bool bVar10;
  TPolygon2<double> local_48;
  TPolygon2<double> local_38;
  
  iVar6 = -1;
  if (param_2->ArrayNum != 0) {
    iVar6 = param_5;
  }
  ConvertPathToPolygon<__int64,double>(&local_48,&param_1->polygon_,param_3,param_4);
  if (0 < local_48.Vertices.ArrayNum) {
    pPVar1 = param_1->parent_;
    bVar10 = pPVar1 != (PolyPath<__int64> *)0x0;
    for (; pPVar1 != (PolyPath<__int64> *)0x0; pPVar1 = pPVar1->parent_) {
      bVar10 = (bool)(bVar10 ^ 1);
    }
    if (bVar10) {
      if ((-1 < iVar6) && (iVar6 < param_2->ArrayNum)) {
        iVar9 = local_48.Vertices.ArrayNum;
        if ((iVar6 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar9 = local_48.Vertices.ArrayNum, bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar5.Data = local_48.Vertices.AllocatorInstance.Data;
        local_38.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (iVar9 == 0) {
          local_38.Vertices.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar9,0,(ForAnyElementType *)&local_38,iVar9,&local_38.Vertices.ArrayMax
                    );
          memcpy(local_38.Vertices.AllocatorInstance.Data,FVar5.Data,(longlong)iVar9 << 4);
        }
        TGeneralPolygon2<double>::AddHole
                  ((TGeneralPolygon2<double> *)(pFVar2 + (longlong)iVar6 * 0x28),&local_38,false,
                   false);
        goto LAB_1494e5778;
      }
      bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7949019982745043083>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\Curve\\ClipperUtils.inl"
                          ,0x8b,"OutPolygons.IsValidIndex(ParentPolygonIdx)");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    FVar5.Data = local_48.Vertices.AllocatorInstance.Data;
    param_2->ArrayNum = iVar6 + 1;
    lVar7 = (longlong)iVar6;
    pFVar2 = (param_2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar7 * 0x28) = 0;
    *(int *)(pFVar2 + lVar7 * 0x28 + 8) = local_48.Vertices.ArrayNum;
    pFVar2 = pFVar2 + lVar7 * 0x28;
    if (local_48.Vertices.ArrayNum == 0) {
      *(int *)(pFVar2 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_48.Vertices.ArrayNum,0,(ForAnyElementType *)pFVar2,
                 local_48.Vertices.ArrayNum,(int *)(pFVar2 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar5.Data,
             (longlong)local_48.Vertices.ArrayNum << 4);
    }
    *(FScriptContainerElement **)&pFVar2[0x18].field_0x0 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)&pFVar2[0x20].field_0x0 = (FScriptContainerElement *)0x0;
    bVar10 = TPolygon2<double>::IsClockwise(&local_48);
    pFVar2[0x10].field_0x0 = bVar10;
  }
LAB_1494e5778:
  ppPVar3 = (param_1->childs_)._Mypair._Myval2._Mylast;
  for (ppPVar8 = (param_1->childs_)._Mypair._Myval2._Myfirst; ppPVar8 != ppPVar3;
      ppPVar8 = ppPVar8 + 1) {
    ConvertPolyTreeToPolygons<__int64,double>(*ppPVar8,param_2,param_3,param_4,iVar6);
  }
  if (local_48.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Vertices.AllocatorInstance.Data);
  }
  return;
}

// ConvertPolygonToPath<float,__int64> @ 1494e57f0

vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> * __cdecl
UE::Geometry::Private::ConvertPolygonToPath<float,__int64>
          (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
           *__return_storage_ptr__,TPolygon2<float> *param_1,TVector2<float> *param_2,float *param_3
          )

{
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float local_res8;
  float fStackX_c;
  Point<__int64> local_48 [3];
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (Point<__int64> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (Point<__int64> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (Point<__int64> *)0x0;
  std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::reserve
            (__return_storage_ptr__,(longlong)(param_1->Vertices).ArrayNum);
  fVar4 = __real_5a000000;
  fVar3 = __real_3f800000;
  iVar9 = (param_1->Vertices).ArrayNum;
  uVar8 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar9) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pvVar7 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)(*pcVar2)();
        return pvVar7;
      }
      uVar1 = *(undefined8 *)((param_1->Vertices).AllocatorInstance.Data + lVar10);
      local_res8 = (float)uVar1;
      fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      local_48[0].x =
           (long64)((local_res8 - (param_2->field0_0x0)._s_0.X) * (fVar3 / *param_3) * fVar4);
      local_48[0].y =
           (long64)((fStackX_c - (param_2->field0_0x0)._s_0.Y) * (fVar3 / *param_3) * fVar4);
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
      _Emplace_one_at_back<Clipper2Lib::Point<__int64>_>(__return_storage_ptr__,local_48);
      iVar9 = (param_1->Vertices).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar9);
  }
  return __return_storage_ptr__;
}

// ConvertPolygonToPath<double,__int64> @ 1494e5960

vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> * __cdecl
UE::Geometry::Private::ConvertPolygonToPath<double,__int64>
          (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
           *__return_storage_ptr__,TPolygon2<double> *param_1,TVector2<double> *param_2,
          double *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  Point<__int64> local_48 [3];
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (Point<__int64> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (Point<__int64> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (Point<__int64> *)0x0;
  std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::reserve
            (__return_storage_ptr__,(longlong)(param_1->Vertices).ArrayNum);
  dVar4 = __real_433fffffffffffff;
  dVar3 = __real_3ff0000000000000;
  iVar10 = (param_1->Vertices).ArrayNum;
  uVar8 = 0;
  if (0 < iVar10) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar10) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pvVar7 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)(*pcVar2)();
        return pvVar7;
      }
      pFVar1 = (param_1->Vertices).AllocatorInstance.Data + lVar9;
      local_48[0].x =
           (long64)((*(double *)pFVar1 - (param_2->field0_0x0)._s_0.X) * (dVar3 / *param_3) * dVar4)
      ;
      local_48[0].y =
           (long64)((*(double *)(pFVar1 + 8) - (param_2->field0_0x0)._s_0.Y) * (dVar3 / *param_3) *
                   dVar4);
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
      _Emplace_one_at_back<Clipper2Lib::Point<__int64>_>(__return_storage_ptr__,local_48);
      iVar10 = (param_1->Vertices).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar10);
  }
  return __return_storage_ptr__;
}

// ConvertPolygonsToPaths<float,__int64> @ 1494e5ac0

vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
* __cdecl UE::Geometry::Private::ConvertPolygonsToPaths<float,__int64>
                    (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                     *__return_storage_ptr__,
                    TArray<TArrayView<UE::Math::TVector2<float>,int>,TSizedDefaultAllocator<32>_>
                    *param_1,TVector2<float> *param_2,float *param_3)

{
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> **ppvVar1;
  uint uVar2;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  Point<__int64> *pPVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  Point<__int64> *pPVar11;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  *pvVar12;
  Point<__int64> *pPVar13;
  int iVar14;
  ulong64 uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  TArray<TArrayView<UE::Math::TVector2<float>,int>,TSizedDefaultAllocator<32>_> *local_res10;
  float local_90;
  float fStack_8c;
  Point<__int64> local_88;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> local_78 [2];
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_res10 = param_1;
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::reserve(__return_storage_ptr__,(longlong)param_1->ArrayNum);
  fVar6 = __real_5a000000;
  fVar5 = __real_3f800000;
  uVar2 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar2;
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar19 = pFVar17 + uVar10 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArrayView<UE::Math::TVector2<float>,int>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar19) {
      return __return_storage_ptr__;
    }
    uVar10 = (ulonglong)*(int *)(pFVar17 + 8);
    local_78[0]._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
    local_78[0]._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
    local_78[0]._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
    if (uVar10 != 0) {
      if (0xfffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
        _Xlength();
      }
      pPVar11 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 0x10);
      memmove(pPVar11,local_78[0]._Mypair._Myval2._Myfirst,
              (longlong)local_78[0]._Mypair._Myval2._Mylast -
              (longlong)local_78[0]._Mypair._Myval2._Myfirst);
      if (local_78[0]._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
        uVar15 = (longlong)local_78[0]._Mypair._Myval2._Myend -
                 (longlong)local_78[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        pPVar13 = local_78[0]._Mypair._Myval2._Myfirst;
        if (0xfff < uVar15) {
          pPVar13 = (Point<__int64> *)local_78[0]._Mypair._Myval2._Myfirst[-1].y;
          uVar15 = uVar15 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_78[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar13))) {
LAB_1494e5d47:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pPVar13,uVar15);
      }
      local_78[0]._Mypair._Myval2._Myend = pPVar11 + uVar10;
      local_78[0]._Mypair._Myval2._Mylast = pPVar11;
    }
    iVar14 = *(int *)(pFVar17 + 8);
    uVar16 = 0;
    local_78[0]._Mypair._Myval2._Myfirst = local_78[0]._Mypair._Myval2._Mylast;
    if (0 < iVar14) {
      lVar18 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar16 < iVar14) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          pvVar12 = (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                     *)(*pcVar4)();
          return pvVar12;
        }
        local_90 = (float)*(undefined8 *)(lVar18 + *(longlong *)pFVar17);
        fStack_8c = (float)((ulonglong)*(undefined8 *)(lVar18 + *(longlong *)pFVar17) >> 0x20);
        local_88.x = (long64)((local_90 - (param_2->field0_0x0)._s_0.X) * (fVar5 / *param_3) * fVar6
                             );
        local_88.y = (long64)((fStack_8c - (param_2->field0_0x0)._s_0.Y) * (fVar5 / *param_3) *
                             fVar6);
        std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
        _Emplace_one_at_back<Clipper2Lib::Point<__int64>_>(local_78,&local_88);
        iVar14 = *(int *)(pFVar17 + 8);
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 8;
      } while ((int)uVar16 < iVar14);
    }
    pPVar7 = local_78[0]._Mypair._Myval2._Myend;
    pPVar13 = local_78[0]._Mypair._Myval2._Mylast;
    pPVar11 = local_78[0]._Mypair._Myval2._Myfirst;
    pvVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
    if (pvVar3 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::
      _Emplace_reallocate<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                (__return_storage_ptr__,pvVar3,local_78);
    }
    else {
      local_78[0]._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
      local_78[0]._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
      local_78[0]._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
      (pvVar3->_Mypair)._Myval2._Myfirst = pPVar11;
      (pvVar3->_Mypair)._Myval2._Mylast = pPVar13;
      (pvVar3->_Mypair)._Myval2._Myend = pPVar7;
      ppvVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
      *ppvVar1 = *ppvVar1 + 1;
    }
    if (local_78[0]._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
      uVar15 = (longlong)local_78[0]._Mypair._Myval2._Myend -
               (longlong)local_78[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
      pPVar11 = local_78[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar15) {
        pPVar11 = (Point<__int64> *)local_78[0]._Mypair._Myval2._Myfirst[-1].y;
        uVar15 = uVar15 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_78[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar11)))
        goto LAB_1494e5d47;
      }
      ::operator_delete(pPVar11,uVar15);
    }
    pFVar17 = pFVar17 + 0x10;
    uVar10 = (ulonglong)uVar2;
    param_1 = local_res10;
  } while( true );
}

// ConvertPolygonsToPaths<double,__int64> @ 1494e5da0

vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
* __cdecl UE::Geometry::Private::ConvertPolygonsToPaths<double,__int64>
                    (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                     *__return_storage_ptr__,
                    TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_>
                    *param_1,TVector2<double> *param_2,double *param_3)

{
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> **ppvVar1;
  uint uVar2;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  Point<__int64> *pPVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  Point<__int64> *pPVar11;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  *pvVar12;
  Point<__int64> *pPVar13;
  int iVar14;
  ulong64 uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_> *local_res10;
  Point<__int64> local_80;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> local_70 [2];
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_res10 = param_1;
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::reserve(__return_storage_ptr__,(longlong)param_1->ArrayNum);
  dVar6 = __real_433fffffffffffff;
  dVar5 = __real_3ff0000000000000;
  uVar2 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar2;
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar19 = pFVar17 + uVar10 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArrayView<UE::Math::TVector2<double>,int>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar19) {
      return __return_storage_ptr__;
    }
    uVar10 = (ulonglong)*(int *)(pFVar17 + 8);
    local_70[0]._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
    local_70[0]._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
    local_70[0]._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
    if (uVar10 != 0) {
      if (0xfffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
        _Xlength();
      }
      pPVar11 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 0x10);
      memmove(pPVar11,local_70[0]._Mypair._Myval2._Myfirst,
              (longlong)local_70[0]._Mypair._Myval2._Mylast -
              (longlong)local_70[0]._Mypair._Myval2._Myfirst);
      if (local_70[0]._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
        uVar15 = (longlong)local_70[0]._Mypair._Myval2._Myend -
                 (longlong)local_70[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        pPVar13 = local_70[0]._Mypair._Myval2._Myfirst;
        if (0xfff < uVar15) {
          pPVar13 = (Point<__int64> *)local_70[0]._Mypair._Myval2._Myfirst[-1].y;
          uVar15 = uVar15 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_70[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar13))) {
LAB_1494e6030:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pPVar13,uVar15);
      }
      local_70[0]._Mypair._Myval2._Myend = pPVar11 + uVar10;
      local_70[0]._Mypair._Myval2._Mylast = pPVar11;
    }
    iVar14 = *(int *)(pFVar17 + 8);
    uVar16 = 0;
    local_70[0]._Mypair._Myval2._Myfirst = local_70[0]._Mypair._Myval2._Mylast;
    if (0 < iVar14) {
      lVar18 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar16 < iVar14) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          pvVar12 = (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                     *)(*pcVar4)();
          return pvVar12;
        }
        local_80.x = (long64)((*(double *)(*(longlong *)pFVar17 + lVar18) -
                              (param_2->field0_0x0)._s_0.X) * (dVar5 / *param_3) * dVar6);
        local_80.y = (long64)((((double *)(*(longlong *)pFVar17 + lVar18))[1] -
                              (param_2->field0_0x0)._s_0.Y) * (dVar5 / *param_3) * dVar6);
        std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
        _Emplace_one_at_back<Clipper2Lib::Point<__int64>_>(local_70,&local_80);
        iVar14 = *(int *)(pFVar17 + 8);
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 0x10;
        param_1 = local_res10;
      } while ((int)uVar16 < iVar14);
    }
    pPVar7 = local_70[0]._Mypair._Myval2._Myend;
    pPVar13 = local_70[0]._Mypair._Myval2._Mylast;
    pPVar11 = local_70[0]._Mypair._Myval2._Myfirst;
    pvVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
    if (pvVar3 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::
      _Emplace_reallocate<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                (__return_storage_ptr__,pvVar3,local_70);
    }
    else {
      local_70[0]._Mypair._Myval2._Mylast = (Point<__int64> *)0x0;
      local_70[0]._Mypair._Myval2._Myfirst = (Point<__int64> *)0x0;
      local_70[0]._Mypair._Myval2._Myend = (Point<__int64> *)0x0;
      (pvVar3->_Mypair)._Myval2._Myfirst = pPVar11;
      (pvVar3->_Mypair)._Myval2._Mylast = pPVar13;
      (pvVar3->_Mypair)._Myval2._Myend = pPVar7;
      ppvVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
      *ppvVar1 = *ppvVar1 + 1;
    }
    if (local_70[0]._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
      uVar15 = (longlong)local_70[0]._Mypair._Myval2._Myend -
               (longlong)local_70[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
      pPVar11 = local_70[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar15) {
        pPVar11 = (Point<__int64> *)local_70[0]._Mypair._Myval2._Myfirst[-1].y;
        uVar15 = uVar15 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_70[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar11)))
        goto LAB_1494e6030;
      }
      ::operator_delete(pPVar11,uVar15);
    }
    uVar10 = (ulonglong)uVar2;
    pFVar17 = pFVar17 + 0x10;
  } while( true );
}

// DeleterFunc<UE::Geometry::TMinVolumeBox3Internal<float>_> @ 1494e6240

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::TMinVolumeBox3Internal<float>_>
          (void *param_1)

{
  ::operator_delete(param_1,0x50);
  return;
}

// DeleterFunc<UE::Geometry::TMinVolumeBox3Internal<double>_> @ 1494e6250

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::TMinVolumeBox3Internal<double>_>
          (void *param_1)

{
  ::operator_delete(param_1,0x80);
  return;
}

// DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<float>_> @ 1494e6260

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<float>_>
          (void *param_1)

{
  std::
  vector<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>,std::allocator<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>_>_>
  ::
  ~vector<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>,std::allocator<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>_>_>
            ((vector<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>,std::allocator<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>_>_>
              *)((longlong)param_1 + 0x2798));
  std::vector<gte::Vector<3,double>,std::allocator<gte::Vector<3,double>_>_>::
  ~vector<gte::Vector<3,double>,std::allocator<gte::Vector<3,double>_>_>
            ((vector<gte::Vector<3,double>,std::allocator<gte::Vector<3,double>_>_> *)
             ((longlong)param_1 + 0x13e0));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  ::operator_delete(param_1,0x27b0);
  return;
}

// DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<double>_> @ 1494e62b0

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::TMinVolumeSphere3Internal<double>_>
          (void *param_1)

{
  std::
  vector<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>,std::allocator<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>_>_>
  ::
  ~vector<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>,std::allocator<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>_>_>
            ((vector<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>,std::allocator<gte::Vector<3,gte::BSRational<gte::UIntegerAP32>_>_>_>
              *)((longlong)param_1 + 0x27a8));
  std::vector<gte::Vector<3,double>,std::allocator<gte::Vector<3,double>_>_>::
  ~vector<gte::Vector<3,double>,std::allocator<gte::Vector<3,double>_>_>
            ((vector<gte::Vector<3,double>,std::allocator<gte::Vector<3,double>_>_> *)
             ((longlong)param_1 + 0x13f0));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  ::operator_delete(param_1,0x27c0);
  return;
}

// DoesCylinderIntersectBox<float> @ 1494e6440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::DoesCylinderIntersectBox<float>
          (TAxisAlignedBox3<float> *param_1,TVector<float> *param_2,TVector<float> *param_3,
          float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [12];
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  Vector<3,float> local_68;
  Vector<3,float> local_58;
  Vector<3,float> local_48;
  Vector<3,float> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  fVar2 = (param_1->Min).field0_0x0._s_0.X;
  if ((((param_1->Max).field0_0x0._s_0.X <= fVar2 && fVar2 != (param_1->Max).field0_0x0._s_0.X) ||
      (fVar2 = (param_1->Min).field0_0x0._s_0.Y, pfVar1 = &(param_1->Max).field0_0x0._s_0.Y,
      *pfVar1 <= fVar2 && fVar2 != *pfVar1)) ||
     (fVar2 = (param_1->Min).field0_0x0._s_0.Z, pfVar1 = &(param_1->Max).field0_0x0._s_0.Z,
     *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
    local_c8[0] = (TIQuery<float,gte::AlignedBox<3,float>,gte::Cylinder3<float>_>)0x0;
  }
  else {
    local_78 = (param_3->field0_0x0)._s_0.X;
    local_b8._0_8_ = &local_78;
    local_74 = (param_3->field0_0x0)._s_0.Y;
    local_70 = (param_3->field0_0x0)._s_0.Z;
    unique0x00008e00 = &local_6c;
    gte::Vector<3,float>::Vector<3,float>(&local_38,(initializer_list<float> *)local_b8);
    local_78 = (param_2->field0_0x0)._s_0.X;
    local_b8._0_8_ = &local_78;
    local_74 = (param_2->field0_0x0)._s_0.Y;
    local_70 = (param_2->field0_0x0)._s_0.Z;
    unique0x00008e00 = &local_6c;
    gte::Vector<3,float>::Vector<3,float>(&local_48,(initializer_list<float> *)local_b8);
    fStack_ac = local_38.mTuple._Elems[0];
    local_a8 = local_38.mTuple._Elems[1];
    fStack_a4 = local_38.mTuple._Elems[2];
    local_b8._0_8_ = &local_78;
    local_98 = local_48.mTuple._Elems[0];
    fStack_94 = local_48.mTuple._Elems[1];
    fStack_90 = local_48.mTuple._Elems[2];
    fStack_8c = fStack_ac;
    local_88 = CONCAT44(local_38.mTuple._Elems[2],local_a8);
    local_78 = (param_1->Max).field0_0x0._s_0.X;
    local_70 = (param_1->Max).field0_0x0._s_0.Z;
    local_7c = param_5;
    local_74 = (param_1->Max).field0_0x0._s_0.Y;
    local_80 = param_4;
    unique0x10000512 = &local_6c;
    gte::Vector<3,float>::Vector<3,float>(&local_58,(initializer_list<float> *)local_b8);
    local_78 = (param_1->Min).field0_0x0._s_0.X;
    local_b8._0_8_ = &local_78;
    local_74 = (param_1->Min).field0_0x0._s_0.Y;
    local_70 = (param_1->Min).field0_0x0._s_0.Z;
    unique0x00008e00 = &local_6c;
    gte::Vector<3,float>::Vector<3,float>(&local_68,(initializer_list<float> *)local_b8);
    fStack_ac = local_58.mTuple._Elems[0];
    local_a8 = local_58.mTuple._Elems[1];
    local_b8._8_4_ = local_68.mTuple._Elems[2];
    fStack_a4 = local_58.mTuple._Elems[2];
    gte::TIQuery<float,gte::AlignedBox<3,float>,gte::Cylinder3<float>_>::operator()
              ((TIQuery<float,gte::AlignedBox<3,float>,gte::Cylinder3<float>_> *)local_c8,
               (AlignedBox<3,float> *)local_c8,(Cylinder3<float> *)local_b8);
  }
  return (bool)local_c8[0];
}

// DoesCylinderIntersectBox<double> @ 1494e6660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::DoesCylinderIntersectBox<double>
          (TAxisAlignedBox3<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          double param_4,double param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_128 [32];
  AlignedBox<3,double> local_108;
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  double local_90;
  Cylinder3<double> local_88 [2];
  
  local_88[0].radius = (double)(__security_cookie.value ^ (ulonglong)auStack_128);
  local_88[0].axis.direction.mTuple._Elems[0] = (param_1->Max).field0_0x0._s_0.X;
  local_88[0].axis.origin.mTuple._Elems[0] = (param_1->Min).field0_0x0._s_0.X;
  if (((local_88[0].axis.direction.mTuple._Elems[0] < local_88[0].axis.origin.mTuple._Elems[0]) ||
      (local_88[0].axis.origin.mTuple._Elems[1] = (param_1->Min).field0_0x0._s_0.Y,
      pdVar1 = &(param_1->Max).field0_0x0._s_0.Y,
      *pdVar1 <= local_88[0].axis.origin.mTuple._Elems[1] &&
      local_88[0].axis.origin.mTuple._Elems[1] != *pdVar1)) ||
     (local_88[0].axis.origin.mTuple._Elems[2] = (param_1->Min).field0_0x0._s_0.Z,
     pdVar1 = &(param_1->Max).field0_0x0._s_0.Z,
     *pdVar1 <= local_88[0].axis.origin.mTuple._Elems[2] &&
     local_88[0].axis.origin.mTuple._Elems[2] != *pdVar1)) {
    local_108.min.mTuple._Elems[0]._0_1_ = 0;
  }
  else {
    dVar3 = *(double *)&param_3->field0_0x0;
    dVar4 = *(double *)((longlong)&param_3->field0_0x0 + 8);
    uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
    local_b8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
    uStack_b4 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
    local_c8 = (param_2->field0_0x0)._s_0.X;
    dStack_c0 = (param_2->field0_0x0)._s_0.Y;
    local_108.max.mTuple._Elems[2]._0_4_ = SUB84(dVar4,0);
    local_108.max.mTuple._Elems[2]._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
    local_108.max.mTuple._Elems[1]._0_4_ = SUB84(dVar3,0);
    local_108.max.mTuple._Elems[1]._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
    uStack_a0 = (undefined4)uVar2;
    uStack_9c = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_a8 = local_108.max.mTuple._Elems[2]._0_4_;
    uStack_a4 = local_108.max.mTuple._Elems[2]._4_4_;
    local_88[0].axis.direction.mTuple._Elems[1] = (param_1->Max).field0_0x0._s_0.Y;
    local_88[0].axis.direction.mTuple._Elems[2] = (param_1->Max).field0_0x0._s_0.Z;
    uStack_b0 = local_108.max.mTuple._Elems[1]._0_4_;
    uStack_ac = local_108.max.mTuple._Elems[1]._4_4_;
    local_90 = param_5;
    local_108.max.mTuple._Elems[1] = dVar3;
    local_108.max.mTuple._Elems[2] = dVar4;
    local_98 = param_4;
    gte::TIQuery<double,gte::AlignedBox<3,double>,gte::Cylinder3<double>_>::operator()
              ((TIQuery<double,gte::AlignedBox<3,double>,gte::Cylinder3<double>_> *)&local_108,
               &local_108,local_88);
  }
  return (bool)local_108.min.mTuple._Elems[0]._0_1_;
}

// Offset<float> @ 1494e92f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::Private::Offset<float>
          (TArray<TArrayView<UE::Math::TVector2<float>,int>,TSizedDefaultAllocator<32>_> *param_1,
          EPolygonOffsetJoinType *param_2,EPolygonOffsetEndType *param_3,float *param_4,
          float *param_5,
          TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_> *param_6,
          double param_7,double param_8)

{
  int *piVar1;
  int iVar2;
  TGeneralPolygon2<float> *pTVar3;
  PolyPath<__int64> *this;
  code *pcVar4;
  undefined1 this_00 [8];
  PolyPath<__int64> *pPVar5;
  EPolygonOffsetEndType *pEVar6;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar7;
  PolyPath<__int64> *pPVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  TPolygon2<float> *this_01;
  longlong lVar12;
  Point<double> *pPVar13;
  longlong lVar14;
  ulong64 uVar15;
  FScriptContainerElement *pFVar16;
  PolyPath<__int64> *pPVar17;
  Point<__int64> *pPVar18;
  FScriptContainerElement *pFVar19;
  Group *pGVar20;
  Group *pGVar21;
  char cVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 local_res8 [8];
  float local_res10 [2];
  EPolygonOffsetEndType *local_res18;
  TVector2<float>_u_0 local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  undefined4 local_2b8;
  undefined1 local_2b0 [8];
  undefined8 uStack_2a8;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *local_2a0;
  TPolygon2<float> local_298;
  FScriptContainerElement local_288;
  void *local_280;
  undefined8 local_278;
  TVector2<float>_u_0 local_270;
  float fStack_268;
  float fStack_264;
  undefined4 local_260;
  undefined1 local_258 [8];
  Point<__int64> *local_250;
  Point<__int64> *local_248;
  Point<__int64> *pPStack_240;
  PolyPath<__int64> *local_238;
  PolyPath<__int64> *pPStack_230;
  PolyPath<__int64> **local_228;
  PolyPath<__int64> *local_220;
  ClipperOffset local_218;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_178;
  ClipperBase local_158;
  TPolygon2<float> local_68;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_58;
  
  iVar11 = param_1->ArrayNum;
  pFVar16 = (param_1->AllocatorInstance).Data;
  pFVar19 = pFVar16 + (longlong)iVar11 * 0x10;
  local_2b8 = 0;
  local_2c8._s_0.X = 0.0;
  local_2c8._s_0.Y = 0.0;
  fStack_2c0 = 0.0;
  fStack_2bc = 0.0;
  local_res18 = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArrayView<UE::Math::TVector2<float>,int>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    pEVar6 = local_res18;
    if (pFVar16 == pFVar19) break;
    iVar2 = *(int *)(pFVar16 + 8);
    if (iVar2 == 0) {
LAB_1494e9452:
      pFVar16 = pFVar16 + 0x10;
    }
    else {
      if ((iVar2 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      UE::Math::TBox2<float>::TBox2<float>
                ((TBox2<float> *)&local_270._s_0,*(TVector2<float> **)pFVar16,iVar2);
      if ((char)local_2b8 == '\0') {
        if ((char)local_260 != '\0') {
          local_2b8 = local_260;
          local_2c8._s_0.X = local_270._s_0.X;
          fStack_2bc = fStack_264;
          local_2c8._s_0.Y = local_270._s_0.Y;
          fStack_2c0 = fStack_268;
        }
        goto LAB_1494e9452;
      }
      if ((char)local_260 == '\0') goto LAB_1494e9452;
      pFVar16 = pFVar16 + 0x10;
      if (local_270._s_0.X <= local_2c8._s_0.X) {
        local_2c8._s_0.X = local_270._s_0.X;
      }
      if (local_270._s_0.Y <= local_2c8._s_0.Y) {
        local_2c8._s_0.Y = local_270._s_0.Y;
      }
      if (fStack_2c0 <= fStack_268) {
        fStack_2c0 = fStack_268;
      }
      if (fStack_2bc <= fStack_264) {
        fStack_2bc = fStack_264;
      }
    }
  }
  local_218.group_delta_ = 0.0;
  local_218.abs_group_delta_ = 0.0;
  local_218.norms._Mypair._Myval2._Myfirst = (Point<double> *)0x0;
  local_218.norms._Mypair._Myval2._Mylast = (Point<double> *)0x0;
  local_218.solution._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_218.solution._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  fVar26 = 0.0;
  local_218.miter_limit_ = ___xmm_00000000000000004000000000000000;
  local_218.arc_tolerance_ = _UNK_15076ace8;
  fVar23 = *param_4;
  local_218.temp_lim_ = 0.0;
  local_218.steps_per_rad_ = 0.0;
  local_218.norms._Mypair._Myval2._Myend = (Point<double> *)0x0;
  local_218.solution._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_218.groups_._Mypair._Myval2._Myfirst = (Group *)0x0;
  local_218.groups_._Mypair._Myval2._Mylast = (Group *)0x0;
  local_218.groups_._Mypair._Myval2._Myend = (Group *)0x0;
  local_218.join_type_ = Square;
  local_218.preserve_collinear_ = false;
  local_218.reverse_solution_ = false;
  if (*local_res18 == Polygon) {
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
  }
  else {
    fVar23 = (float)((uint)fVar23 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  if (*param_2 == Miter) {
    fVar26 = *param_5;
  }
  fVar26 = fVar26 + fVar23;
  local_2a0 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
              CONCAT71(local_2a0._1_7_,1);
  local_2b8 = local_2a0._0_4_;
  local_2c8._s_0.Y = local_2c8._s_0.Y - fVar26;
  fStack_2bc = fVar26 + fStack_2bc;
  local_2c8._s_0.X = local_2c8._s_0.X - fVar26;
  fStack_2c0 = fVar26 + fStack_2c0;
  local_218.CustomStepsPerRadScaleFactor = param_8;
  if (param_8 <= __real_3e45798ee2308c3a) {
    local_218.CustomStepsPerRadScaleFactor = __real_3e45798ee2308c3a;
  }
  local_2b0._4_4_ = local_2c8._s_0.Y;
  local_2b0._0_4_ = local_2c8._s_0.X;
  uStack_2a8 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
               CONCAT44(fStack_2bc,fStack_2c0);
  local_res10[0] = fStack_2bc - local_2c8._s_0.Y;
  if (fStack_2bc - local_2c8._s_0.Y <= fStack_2c0 - local_2c8._s_0.X) {
    local_res10[0] = fStack_2c0 - local_2c8._s_0.X;
  }
  if (local_res10[0] <= __real_358637bd) {
    local_res10[0] = __real_358637bd;
  }
  local_218.BoundsScaleFactor = (double)local_res10[0] * __real_3ca0000000000001;
  if (param_7 <= 0.0) {
    local_218.MaxStepsPerRadian = __real_409f400000000000;
  }
  else {
    local_218.MaxStepsPerRadian = param_7;
    if (__real_409f400000000000 <= param_7) {
      local_218.MaxStepsPerRadian = __real_409f400000000000;
    }
  }
  ConvertPolygonsToPaths<float,__int64>
            (&local_58,param_1,(TVector2<float> *)&local_2c8._s_0,local_res10);
  local_218.merge_groups_ = false;
  Clipper2Lib::ClipperOffset::AddPaths(&local_218,&local_58,(uint)*param_2,(uint)*pEVar6);
  auVar24._0_8_ = (double)*param_5;
  auVar24._8_8_ = 0;
  auVar25 = roundps(auVar24,ZEXT416((uint)((*param_4 / local_res10[0]) * __real_5a000000)),1);
  local_218.miter_limit_ = auVar24._0_8_;
  Clipper2Lib::ClipperOffset::Execute(&local_218,&local_178,(double)auVar25._0_4_);
  lVar12 = (longlong)local_178._Mypair._Myval2._Mylast -
           (longlong)local_178._Mypair._Myval2._Myfirst >> 0x3f;
  lVar14 = ((longlong)local_178._Mypair._Myval2._Mylast -
           (longlong)local_178._Mypair._Myval2._Myfirst) / 0x18 + lVar12;
  if (lVar14 == lVar12) {
    piVar1 = &param_6->ArrayMax;
    pTVar3 = (TGeneralPolygon2<float> *)(param_6->AllocatorInstance).Data;
    if (*piVar1 < 0) {
      DestructItems<UE::Geometry::TGeneralPolygon2<float>,int>(pTVar3,param_6->ArrayNum);
      param_6->ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_6->AllocatorInstance,0,piVar1);
      }
      cVar22 = '\x01';
    }
    else {
      DestructItems<UE::Geometry::TGeneralPolygon2<float>,int>(pTVar3,param_6->ArrayNum);
      param_6->ArrayNum = 0;
      cVar22 = '\x01';
    }
  }
  else {
    cVar22 = '\x01';
    if ((ulonglong)(lVar14 - lVar12) < 2) {
      TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_>::Reset(param_6,0);
      this_01 = ConvertPathToPolygon<__int64,float>
                          (&local_68,local_178._Mypair._Myval2._Mylast + -1,
                           (TVector2<float> *)&local_2c8._s_0,local_res10);
      TPolygon2<float>::TPolygon2<float>(&local_298,this_01);
      local_280 = (void *)0x0;
      local_278 = 0;
      local_288 = (FScriptContainerElement)TPolygon2<float>::IsClockwise(this_01);
      pFVar16 = (param_6->AllocatorInstance).Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_298) &&
          ((FScriptContainerElement *)&local_298 < pFVar16 + (longlong)param_6->ArrayMax * 0x28)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar11 = param_6->ArrayNum;
      if (iVar11 == param_6->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      lVar12 = (longlong)iVar11;
      param_6->ArrayNum = iVar11 + 1;
      pFVar16 = (param_6->AllocatorInstance).Data;
      *(undefined8 *)(pFVar16 + lVar12 * 0x28) = 0;
      *(FScriptContainerElement **)(pFVar16 + lVar12 * 0x28) =
           local_298.Vertices.AllocatorInstance.Data;
      local_298.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar16 + lVar12 * 0x28 + 8) = local_298.Vertices.ArrayNum;
      *(int *)(pFVar16 + lVar12 * 0x28 + 0xc) = local_298.Vertices.ArrayMax;
      local_298.Vertices.ArrayNum = 0;
      local_298.Vertices.ArrayMax = 0;
      *(undefined8 *)(pFVar16 + lVar12 * 0x28 + 0x18) = 0;
      pFVar16[lVar12 * 0x28 + 0x10] = local_288;
      *(void **)(pFVar16 + lVar12 * 0x28 + 0x18) = local_280;
      local_280 = (void *)0x0;
      *(undefined4 *)(pFVar16 + lVar12 * 0x28 + 0x20) = (undefined4)local_278;
      *(undefined4 *)(pFVar16 + lVar12 * 0x28 + 0x24) = local_278._4_4_;
      local_278 = 0;
      DestructItems<UE::Geometry::TPolygon2<float>,int>((TPolygon2<float> *)0x0,0);
      if (local_280 != (void *)0x0) {
        FMemory::Free(local_280);
      }
      if (local_298.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Vertices.AllocatorInstance.Data);
      }
      if (local_68.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Vertices.AllocatorInstance.Data);
      }
    }
    else {
      local_158.cliptype_ = None;
      local_158.fillrule_ = EvenOdd;
      local_158.fillpos = Positive;
      local_158.bot_y_ = 0;
      local_158.scanline_list_.comp = (less<__int64>)0x0;
      local_158.PreserveCollinear = false;
      local_158.ReverseSolution = false;
      local_158.has_open_paths_ = false;
      local_158.minima_list_sorted_ = false;
      local_158.using_polytree_ = false;
      local_158.succeeded_ = true;
      local_158._padding_ = (longlong)&___7Clipper64_Clipper2Lib__6B_;
      local_158.actives_ = (Active *)0x0;
      local_158.sel_ = (Active *)0x0;
      local_158.horz_joiners_ = (Joiner *)0x0;
      local_158.minima_list_._Mypair._Myval2._Myfirst = (LocalMinima **)0x0;
      local_158.minima_list_._Mypair._Myval2._Mylast = (LocalMinima **)0x0;
      local_158.minima_list_._Mypair._Myval2._Myend = (LocalMinima **)0x0;
      local_158.current_locmin_iter_ =
           (_Vector_iterator<std::_Vector_val<std::_Simple_types<Clipper2Lib::LocalMinima_*>_>_>)0x0
      ;
      local_158.vertex_lists_._Mypair._Myval2._Myfirst = (Vertex **)0x0;
      local_158.vertex_lists_._Mypair._Myval2._Mylast = (Vertex **)0x0;
      local_158.vertex_lists_._Mypair._Myval2._Myend = (Vertex **)0x0;
      local_158.scanline_list_.c._Mypair._Myval2._Myfirst = (long64 *)0x0;
      local_158.scanline_list_.c._Mypair._Myval2._Mylast = (long64 *)0x0;
      local_158.scanline_list_.c._Mypair._Myval2._Myend = (long64 *)0x0;
      local_158.intersect_nodes_._Mypair._Myval2._Myfirst = (IntersectNode *)0x0;
      local_158.intersect_nodes_._Mypair._Myval2._Mylast = (IntersectNode *)0x0;
      local_158.intersect_nodes_._Mypair._Myval2._Myend = (IntersectNode *)0x0;
      local_158.outrec_list_._Mypair._Myval2._Myfirst = (OutRec **)0x0;
      local_158.outrec_list_._Mypair._Myval2._Mylast = (OutRec **)0x0;
      local_158.outrec_list_._Mypair._Myval2._Myend = (OutRec **)0x0;
      local_158.joiner_list_._Mypair._Myval2._Myfirst = (Joiner **)0x0;
      local_158.joiner_list_._Mypair._Myval2._Mylast = (Joiner **)0x0;
      local_158.joiner_list_._Mypair._Myval2._Myend = (Joiner **)0x0;
      Clipper2Lib::ClipperBase::AddPaths(&local_158,&local_178,Subject,false);
      local_250 = (Point<__int64> *)0x0;
      local_248 = (Point<__int64> *)0x0;
      pPStack_240 = (Point<__int64> *)0x0;
      local_258 = (undefined1  [8])__real_3ff0000000000000;
      local_238 = (PolyPath<__int64> *)0x0;
      pPStack_230 = (PolyPath<__int64> *)0x0;
      local_228 = (PolyPath<__int64> **)0x0;
      local_220 = (PolyPath<__int64> *)0x0;
      local_2b0 = (undefined1  [8])0x0;
      uStack_2a8 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                    *)0x0;
      local_2a0 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                   *)0x0;
      bVar9 = Clipper2Lib::ClipperBase::ExecuteInternal(&local_158,Union,NonZero,true);
      if (bVar9) {
        Clipper2Lib::ClipperBase::BuildTree
                  (&local_158,(PolyPath<__int64> *)local_258,
                   (vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
                    *)local_2b0);
      }
      Clipper2Lib::ClipperBase::CleanUp(&local_158);
      cVar22 = local_158.succeeded_;
      if (local_158.succeeded_ != false) {
        TArray<UE::Geometry::TGeneralPolygon2<float>,TSizedDefaultAllocator<32>_>::Reset(param_6,0);
        ConvertPolyTreeToPolygons<__int64,float>
                  ((PolyPath<__int64> *)local_258,param_6,(TVector2<float> *)&local_2c8._s_0,
                   local_res10,-1);
      }
      pvVar7 = uStack_2a8;
      this_00 = local_2b0;
      pPVar17 = local_238;
      pPVar5 = pPStack_230;
      if (local_2b0 != (undefined1  [8])0x0) {
        for (; this_00 != (undefined1  [8])pvVar7;
            this_00 = (undefined1  [8])((longlong)this_00 + 0x18)) {
          std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
          _Tidy((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *
                )this_00);
        }
        std::
        allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
        ::deallocate((allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                      *)local_2b0,
                     (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                      *)local_2b0,((longlong)local_2a0 - (longlong)local_2b0) / 0x18);
        local_2a0 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                     *)0x0;
        local_2b0 = (undefined1  [8])0x0;
        uStack_2a8 = (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                      *)0x0;
        pPVar17 = local_238;
        pPVar5 = pPStack_230;
      }
      for (; pPVar8 = pPStack_230, pPVar17 != pPStack_230;
          pPVar17 = (PolyPath<__int64> *)&pPVar17->polygon_) {
        this = (PolyPath<__int64> *)pPVar17->scale_;
        pPStack_230 = pPVar5;
        if (this != (PolyPath<__int64> *)0x0) {
          Clipper2Lib::PolyPath<__int64>::~PolyPath<__int64>(this);
          ::operator_delete(this,0x40);
        }
        pPVar5 = pPStack_230;
        pPStack_230 = pPVar8;
      }
      pPStack_230 = pPVar5;
      if ((longlong)pPVar5 - (longlong)local_238 >> 3 != 0) {
        pPStack_230 = local_238;
      }
      if (local_238 != (PolyPath<__int64> *)0x0) {
        uVar15 = (longlong)local_228 - (longlong)local_238 & 0xfffffffffffffff8;
        pPVar17 = local_238;
        if (0xfff < uVar15) {
          pPVar17 = local_238[0xffffffffffffffff].parent_;
          uVar15 = uVar15 + 0x27;
          if (0x1f < (ulonglong)((longlong)local_238 + (-8 - (longlong)pPVar17))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pPVar17,uVar15);
        local_228 = (PolyPath<__int64> **)0x0;
        local_238 = (PolyPath<__int64> *)0x0;
        pPStack_230 = (PolyPath<__int64> *)0x0;
      }
      if (local_250 != (Point<__int64> *)0x0) {
        std::allocator<Clipper2Lib::Point<__int64>_>::deallocate
                  ((allocator<Clipper2Lib::Point<__int64>_> *)&local_250,local_250,
                   (longlong)pPStack_240 - (longlong)local_250 >> 4);
        local_250 = (Point<__int64> *)0x0;
        local_248 = (Point<__int64> *)0x0;
        pPStack_240 = (Point<__int64> *)0x0;
      }
      Clipper2Lib::ClipperBase::~ClipperBase(&local_158);
    }
  }
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::_Tidy(&local_178);
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::_Tidy(&local_58);
  pGVar21 = local_218.groups_._Mypair._Myval2._Mylast;
  pGVar20 = local_218.groups_._Mypair._Myval2._Myfirst;
  if (local_218.groups_._Mypair._Myval2._Myfirst != local_218.groups_._Mypair._Myval2._Mylast) {
    do {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (&pGVar20->path_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar20->paths_out_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar20->paths_in_);
      pGVar20 = pGVar20 + 1;
    } while (pGVar20 != pGVar21);
    local_218.groups_._Mypair._Myval2._Mylast = local_218.groups_._Mypair._Myval2._Myfirst;
  }
  pGVar21 = local_218.groups_._Mypair._Myval2._Mylast;
  if (local_218.norms._Mypair._Myval2._Myfirst != local_218.norms._Mypair._Myval2._Mylast) {
    local_218.norms._Mypair._Myval2._Mylast = local_218.norms._Mypair._Myval2._Myfirst;
  }
  pGVar20 = local_218.groups_._Mypair._Myval2._Myfirst;
  if (local_218.groups_._Mypair._Myval2._Myfirst != (Group *)0x0) {
    for (; pGVar20 != pGVar21; pGVar20 = pGVar20 + 1) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (&pGVar20->path_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar20->paths_out_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar20->paths_in_);
    }
    uVar15 = (((longlong)local_218.groups_._Mypair._Myval2._Myend -
              (longlong)local_218.groups_._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
    pGVar21 = local_218.groups_._Mypair._Myval2._Myfirst;
    if (0xfff < uVar15) {
      pGVar21 = *(Group **)&local_218.groups_._Mypair._Myval2._Myfirst[-1].end_type_;
      uVar15 = uVar15 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_218.groups_._Mypair._Myval2._Myfirst + (-8 - (longlong)pGVar21)))
      goto LAB_1494e9c92;
    }
    ::operator_delete(pGVar21,uVar15);
    local_218.groups_._Mypair._Myval2._Myfirst = (Group *)0x0;
    local_218.groups_._Mypair._Myval2._Mylast = (Group *)0x0;
    local_218.groups_._Mypair._Myval2._Myend = (Group *)0x0;
  }
  pvVar7 = local_218.solution._Mypair._Myval2._Mylast;
  pPVar18 = (Point<__int64> *)local_218.solution._Mypair._Myval2._Myfirst;
  if ((Point<__int64> *)local_218.solution._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    for (; pPVar18 != (Point<__int64> *)pvVar7;
        pPVar18 = (Point<__int64> *)((longlong)(pPVar18 + 1) + 8)) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                ((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)pPVar18);
    }
    uVar15 = (((longlong)local_218.solution._Mypair._Myval2._Myend -
              (longlong)local_218.solution._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pPVar18 = (Point<__int64> *)local_218.solution._Mypair._Myval2._Myfirst;
    if (0xfff < uVar15) {
      pPVar18 = (Point<__int64> *)
                ((Point<__int64> *)((longlong)local_218.solution._Mypair._Myval2._Myfirst + -0x10))
                ->y;
      uVar15 = uVar15 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_218.solution._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar18)))
      goto LAB_1494e9c92;
    }
    ::operator_delete(pPVar18,uVar15);
    local_218.solution._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_218.solution._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_218.solution._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  }
  if (local_218.norms._Mypair._Myval2._Myfirst != (Point<double> *)0x0) {
    uVar15 = (longlong)local_218.norms._Mypair._Myval2._Myend -
             (longlong)local_218.norms._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
    pPVar13 = local_218.norms._Mypair._Myval2._Myfirst;
    if (0xfff < uVar15) {
      pPVar13 = (Point<double> *)local_218.norms._Mypair._Myval2._Myfirst[-1].y;
      uVar15 = uVar15 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_218.norms._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar13))) {
LAB_1494e9c92:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar13,uVar15);
  }
  return (bool)cVar22;
}

// Offset<double> @ 1494e9ce0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::Private::Offset<double>
          (TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_> *param_1,
          EPolygonOffsetJoinType *param_2,EPolygonOffsetEndType *param_3,double *param_4,
          double *param_5,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_6,
          double param_7,double param_8)

{
  int *piVar1;
  int iVar2;
  TGeneralPolygon2<double> *pTVar3;
  PolyPath<__int64> *this;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar7;
  PolyPath<__int64> *pPVar8;
  EPolygonOffsetEndType *pEVar9;
  PolyPath<__int64> *pPVar10;
  vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *pvVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  TPolygon2<double> *this_00;
  longlong lVar15;
  Point<double> *pPVar16;
  longlong lVar17;
  ulong64 uVar18;
  FScriptContainerElement *pFVar19;
  PolyPath<__int64> *pPVar20;
  Point<__int64> *pPVar21;
  FScriptContainerElement *pFVar22;
  Group *pGVar23;
  Group *pGVar24;
  char cVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 local_res8 [8];
  double local_res10;
  EPolygonOffsetEndType *local_res18;
  TVector2<double>_u_0 local_308;
  undefined1 local_2f8 [12];
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  TPolygon2<double> local_2e0;
  FScriptContainerElement local_2d0;
  void *local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  Point<__int64> *local_2b0;
  Point<__int64> *local_2a8;
  Point<__int64> *pPStack_2a0;
  PolyPath<__int64> *local_298;
  PolyPath<__int64> *pPStack_290;
  PolyPath<__int64> **local_288;
  PolyPath<__int64> *local_280;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_278;
  undefined1 local_258;
  undefined7 uStack_257;
  TVector2<double>_u_0 local_250;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  char local_230;
  undefined7 uStack_22f;
  ClipperOffset local_228;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_188;
  ClipperBase local_168;
  TPolygon2<double> local_78;
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  local_68 [2];
  
  iVar14 = param_1->ArrayNum;
  pFVar19 = (param_1->AllocatorInstance).Data;
  pFVar22 = pFVar19 + (longlong)iVar14 * 0x10;
  local_2e8 = 0;
  local_308._s_0.X = 0.0;
  local_308._s_0.Y = 0.0;
  _local_2f8 = ZEXT816(0);
  local_res18 = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArrayView<UE::Math::TVector2<double>,int>_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    pEVar9 = local_res18;
    if (pFVar19 == pFVar22) break;
    iVar2 = *(int *)(pFVar19 + 8);
    if (iVar2 == 0) {
LAB_1494e9e50:
      pFVar19 = pFVar19 + 0x10;
    }
    else {
      if ((iVar2 < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      UE::Math::TBox2<double>::TBox2<double>
                ((TBox2<double> *)&local_250._s_0,*(TVector2<double> **)pFVar19,iVar2);
      if ((char)local_2e8 == '\0') {
        if (local_230 != '\0') {
          local_2e8 = CONCAT71(uStack_22f,local_230);
          auVar6._4_8_ = stack0xfffffffffffffd10;
          auVar6._0_4_ = uStack_23c;
          local_2f8._0_8_ = auVar6._0_8_ << 0x20;
          local_2f8._8_4_ = uStack_238;
          uStack_2ec = uStack_234;
          local_308._s_0.Y = local_250._s_0.Y;
          local_2f8._4_4_ = uStack_23c;
          local_2f8._0_4_ = local_240;
          local_308._s_0.X = local_250._s_0.X;
        }
        goto LAB_1494e9e50;
      }
      if (local_230 == '\0') goto LAB_1494e9e50;
      pFVar19 = pFVar19 + 0x10;
      uVar27 = SUB84(local_308._s_0.Y,0);
      uVar28 = (undefined4)((ulonglong)local_308._8_8_ >> 0x20);
      if (local_250._s_0.X <= local_308._s_0.X) {
        local_308._s_0.X = local_250._s_0.X;
      }
      if (local_250._s_0.Y <= local_308._s_0.Y) {
        uVar27 = SUB84(local_250._s_0.Y,0);
        uVar28 = (undefined4)((ulonglong)local_250._8_8_ >> 0x20);
      }
      dVar26 = (double)local_2f8._0_8_;
      if ((double)local_2f8._0_8_ <= (double)CONCAT44(uStack_23c,local_240)) {
        dVar26 = (double)CONCAT44(uStack_23c,local_240);
      }
      local_308._s_0.Y = (double)CONCAT44(uVar28,uVar27);
      uVar27 = local_2f8._8_4_;
      uVar28 = local_2f8._12_4_;
      if (stack0xfffffffffffffd10 <= (double)CONCAT44(uStack_234,uStack_238)) {
        uVar27 = uStack_238;
        uVar28 = uStack_234;
      }
      uStack_2ec = uVar28;
      local_2f8._8_4_ = uVar27;
      local_2f8._0_8_ = dVar26;
    }
  }
  local_228.group_delta_ = 0.0;
  local_228.abs_group_delta_ = 0.0;
  uVar27 = 0;
  uVar28 = 0;
  local_228.norms._Mypair._Myval2._Myfirst = (Point<double> *)0x0;
  local_228.norms._Mypair._Myval2._Mylast = (Point<double> *)0x0;
  local_228.solution._Mypair._Myval2._Mylast =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_228.solution._Mypair._Myval2._Myend =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_228.miter_limit_ = ___xmm_00000000000000004000000000000000;
  local_228.arc_tolerance_ = _UNK_15076ace8;
  dVar26 = *param_4;
  local_228.temp_lim_ = 0.0;
  local_228.steps_per_rad_ = 0.0;
  local_228.norms._Mypair._Myval2._Myend = (Point<double> *)0x0;
  local_228.solution._Mypair._Myval2._Myfirst =
       (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  local_228.groups_._Mypair._Myval2._Myfirst = (Group *)0x0;
  local_228.groups_._Mypair._Myval2._Mylast = (Group *)0x0;
  local_228.groups_._Mypair._Myval2._Myend = (Group *)0x0;
  local_228.join_type_ = Square;
  local_228.preserve_collinear_ = false;
  local_228.reverse_solution_ = false;
  if (*local_res18 == Polygon) {
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
  }
  else {
    dVar26 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  if (*param_2 == Miter) {
    uVar27 = SUB84(*param_5,0);
    uVar28 = (undefined4)((ulonglong)*param_5 >> 0x20);
  }
  dVar26 = (double)CONCAT44(uVar28,uVar27) + dVar26;
  local_258 = 1;
  local_308._s_0.X = local_308._s_0.X - dVar26;
  auVar29._0_8_ = local_308._s_0.Y - dVar26;
  auVar29._8_8_ = 0;
  dVar31 = dVar26 + stack0xfffffffffffffd10;
  dVar30 = (dVar26 + (double)local_2f8._0_8_) - local_308._s_0.X;
  local_2e8 = CONCAT71(uStack_257,1);
  local_res10 = dVar31 - auVar29._0_8_;
  if (dVar31 - auVar29._0_8_ <= dVar30) {
    local_res10 = dVar30;
  }
  if (param_8 <= __real_3e45798ee2308c3a) {
    param_8 = __real_3e45798ee2308c3a;
  }
  local_2f8._8_4_ = SUB84(dVar31,0);
  local_2f8._0_8_ = dVar26 + (double)local_2f8._0_8_;
  uStack_2ec = (int)((ulonglong)dVar31 >> 0x20);
  if (local_res10 <= __real_3e45798ee2308c3a) {
    local_res10 = __real_3e45798ee2308c3a;
  }
  local_228.BoundsScaleFactor = local_res10 * __real_3ca0000000000001;
  if (param_7 <= 0.0) {
    local_228.MaxStepsPerRadian = __real_409f400000000000;
  }
  else {
    local_228.MaxStepsPerRadian = param_7;
    if (__real_409f400000000000 <= param_7) {
      local_228.MaxStepsPerRadian = __real_409f400000000000;
    }
  }
  local_308._s_0.Y = auVar29._0_8_;
  local_228.CustomStepsPerRadScaleFactor = param_8;
  ConvertPolygonsToPaths<double,__int64>
            (local_68,param_1,(TVector2<double> *)&local_308._s_0,&local_res10);
  local_228.merge_groups_ = false;
  Clipper2Lib::ClipperOffset::AddPaths(&local_228,local_68,(uint)*param_2,(uint)*pEVar9);
  local_228.miter_limit_ = *param_5;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (*param_4 / local_res10) * __real_433fffffffffffff;
  auVar29 = roundpd(auVar29,auVar5,1);
  Clipper2Lib::ClipperOffset::Execute(&local_228,&local_188,auVar29._0_8_);
  lVar15 = (longlong)local_188._Mypair._Myval2._Mylast -
           (longlong)local_188._Mypair._Myval2._Myfirst >> 0x3f;
  lVar17 = ((longlong)local_188._Mypair._Myval2._Mylast -
           (longlong)local_188._Mypair._Myval2._Myfirst) / 0x18 + lVar15;
  if (lVar17 == lVar15) {
    piVar1 = &param_6->ArrayMax;
    pTVar3 = (TGeneralPolygon2<double> *)(param_6->AllocatorInstance).Data;
    if (*piVar1 < 0) {
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar3,param_6->ArrayNum);
      param_6->ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_6->AllocatorInstance,0,piVar1);
      }
      cVar25 = '\x01';
    }
    else {
      DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>(pTVar3,param_6->ArrayNum);
      param_6->ArrayNum = 0;
      cVar25 = '\x01';
    }
  }
  else {
    cVar25 = '\x01';
    if ((ulonglong)(lVar17 - lVar15) < 2) {
      TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::Reset(param_6,0);
      this_00 = ConvertPathToPolygon<__int64,double>
                          (&local_78,local_188._Mypair._Myval2._Mylast + -1,
                           (TVector2<double> *)&local_308._s_0,&local_res10);
      TPolygon2<double>::TPolygon2<double>(&local_2e0,this_00);
      local_2c8 = (void *)0x0;
      local_2c0 = 0;
      local_2d0 = (FScriptContainerElement)TPolygon2<double>::IsClockwise(this_00);
      pFVar19 = (param_6->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)&local_2e0) &&
          ((FScriptContainerElement *)&local_2e0 < pFVar19 + (longlong)param_6->ArrayMax * 0x28)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      iVar14 = param_6->ArrayNum;
      if (iVar14 == param_6->ArrayMax) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      lVar15 = (longlong)iVar14;
      param_6->ArrayNum = iVar14 + 1;
      pFVar19 = (param_6->AllocatorInstance).Data;
      *(undefined8 *)(pFVar19 + lVar15 * 0x28) = 0;
      *(FScriptContainerElement **)(pFVar19 + lVar15 * 0x28) =
           local_2e0.Vertices.AllocatorInstance.Data;
      local_2e0.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar19 + lVar15 * 0x28 + 8) = local_2e0.Vertices.ArrayNum;
      *(int *)(pFVar19 + lVar15 * 0x28 + 0xc) = local_2e0.Vertices.ArrayMax;
      local_2e0.Vertices.ArrayNum = 0;
      local_2e0.Vertices.ArrayMax = 0;
      *(undefined8 *)(pFVar19 + lVar15 * 0x28 + 0x18) = 0;
      pFVar19[lVar15 * 0x28 + 0x10] = local_2d0;
      *(void **)(pFVar19 + lVar15 * 0x28 + 0x18) = local_2c8;
      local_2c8 = (void *)0x0;
      *(undefined4 *)(pFVar19 + lVar15 * 0x28 + 0x20) = (undefined4)local_2c0;
      *(undefined4 *)(pFVar19 + lVar15 * 0x28 + 0x24) = local_2c0._4_4_;
      local_2c0 = 0;
      DestructItems<UE::Geometry::TPolygon2<double>,int>((TPolygon2<double> *)0x0,0);
      if (local_2c8 != (void *)0x0) {
        FMemory::Free(local_2c8);
      }
      if (local_2e0.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Vertices.AllocatorInstance.Data);
      }
      if (local_78.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Vertices.AllocatorInstance.Data);
      }
    }
    else {
      local_168.cliptype_ = None;
      local_168.fillrule_ = EvenOdd;
      local_168.fillpos = Positive;
      local_168.bot_y_ = 0;
      local_168.scanline_list_.comp = (less<__int64>)0x0;
      local_168.PreserveCollinear = false;
      local_168.ReverseSolution = false;
      local_168.has_open_paths_ = false;
      local_168.minima_list_sorted_ = false;
      local_168.using_polytree_ = false;
      local_168.succeeded_ = true;
      local_168._padding_ = (longlong)&___7Clipper64_Clipper2Lib__6B_;
      local_168.actives_ = (Active *)0x0;
      local_168.sel_ = (Active *)0x0;
      local_168.horz_joiners_ = (Joiner *)0x0;
      local_168.minima_list_._Mypair._Myval2._Myfirst = (LocalMinima **)0x0;
      local_168.minima_list_._Mypair._Myval2._Mylast = (LocalMinima **)0x0;
      local_168.minima_list_._Mypair._Myval2._Myend = (LocalMinima **)0x0;
      local_168.current_locmin_iter_ =
           (_Vector_iterator<std::_Vector_val<std::_Simple_types<Clipper2Lib::LocalMinima_*>_>_>)0x0
      ;
      local_168.vertex_lists_._Mypair._Myval2._Myfirst = (Vertex **)0x0;
      local_168.vertex_lists_._Mypair._Myval2._Mylast = (Vertex **)0x0;
      local_168.vertex_lists_._Mypair._Myval2._Myend = (Vertex **)0x0;
      local_168.scanline_list_.c._Mypair._Myval2._Myfirst = (long64 *)0x0;
      local_168.scanline_list_.c._Mypair._Myval2._Mylast = (long64 *)0x0;
      local_168.scanline_list_.c._Mypair._Myval2._Myend = (long64 *)0x0;
      local_168.intersect_nodes_._Mypair._Myval2._Myfirst = (IntersectNode *)0x0;
      local_168.intersect_nodes_._Mypair._Myval2._Mylast = (IntersectNode *)0x0;
      local_168.intersect_nodes_._Mypair._Myval2._Myend = (IntersectNode *)0x0;
      local_168.outrec_list_._Mypair._Myval2._Myfirst = (OutRec **)0x0;
      local_168.outrec_list_._Mypair._Myval2._Mylast = (OutRec **)0x0;
      local_168.outrec_list_._Mypair._Myval2._Myend = (OutRec **)0x0;
      local_168.joiner_list_._Mypair._Myval2._Myfirst = (Joiner **)0x0;
      local_168.joiner_list_._Mypair._Myval2._Mylast = (Joiner **)0x0;
      local_168.joiner_list_._Mypair._Myval2._Myend = (Joiner **)0x0;
      Clipper2Lib::ClipperBase::AddPaths(&local_168,&local_188,Subject,false);
      local_2b0 = (Point<__int64> *)0x0;
      local_2a8 = (Point<__int64> *)0x0;
      pPStack_2a0 = (Point<__int64> *)0x0;
      local_2b8 = (undefined1  [8])__real_3ff0000000000000;
      local_298 = (PolyPath<__int64> *)0x0;
      pPStack_290 = (PolyPath<__int64> *)0x0;
      local_288 = (PolyPath<__int64> **)0x0;
      local_280 = (PolyPath<__int64> *)0x0;
      local_278._Mypair._Myval2._Myfirst =
           (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
      local_278._Mypair._Myval2._Mylast =
           (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
      local_278._Mypair._Myval2._Myend =
           (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
      bVar12 = Clipper2Lib::ClipperBase::ExecuteInternal(&local_168,Union,NonZero,true);
      if (bVar12) {
        Clipper2Lib::ClipperBase::BuildTree(&local_168,(PolyPath<__int64> *)local_2b8,&local_278);
      }
      Clipper2Lib::ClipperBase::CleanUp(&local_168);
      cVar25 = local_168.succeeded_;
      if (local_168.succeeded_ != false) {
        TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::Reset(param_6,0)
        ;
        ConvertPolyTreeToPolygons<__int64,double>
                  ((PolyPath<__int64> *)local_2b8,param_6,(TVector2<double> *)&local_308._s_0,
                   &local_res10,-1);
      }
      pvVar11 = local_278._Mypair._Myval2._Mylast;
      pvVar7 = local_278._Mypair._Myval2._Myfirst;
      pPVar20 = local_298;
      pPVar8 = pPStack_290;
      if (local_278._Mypair._Myval2._Myfirst !=
          (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0)
      {
        for (; pvVar7 != pvVar11; pvVar7 = pvVar7 + 1) {
          std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::
          _Tidy(pvVar7);
        }
        std::
        allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
        ::deallocate((allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>
                      *)&local_278,local_278._Mypair._Myval2._Myfirst,
                     ((longlong)local_278._Mypair._Myval2._Myend -
                     (longlong)local_278._Mypair._Myval2._Myfirst) / 0x18);
        local_278._Mypair._Myval2._Myend =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
        local_278._Mypair._Myval2._Myfirst =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
        local_278._Mypair._Myval2._Mylast =
             (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)
             0x0;
        pPVar20 = local_298;
        pPVar8 = pPStack_290;
      }
      for (; pPVar10 = pPStack_290, pPVar20 != pPStack_290;
          pPVar20 = (PolyPath<__int64> *)&pPVar20->polygon_) {
        this = (PolyPath<__int64> *)pPVar20->scale_;
        pPStack_290 = pPVar8;
        if (this != (PolyPath<__int64> *)0x0) {
          Clipper2Lib::PolyPath<__int64>::~PolyPath<__int64>(this);
          ::operator_delete(this,0x40);
        }
        pPVar8 = pPStack_290;
        pPStack_290 = pPVar10;
      }
      pPStack_290 = pPVar8;
      if ((longlong)pPVar8 - (longlong)local_298 >> 3 != 0) {
        pPStack_290 = local_298;
      }
      if (local_298 != (PolyPath<__int64> *)0x0) {
        uVar18 = (longlong)local_288 - (longlong)local_298 & 0xfffffffffffffff8;
        pPVar20 = local_298;
        if (0xfff < uVar18) {
          pPVar20 = local_298[0xffffffffffffffff].parent_;
          uVar18 = uVar18 + 0x27;
          if (0x1f < (ulonglong)((longlong)local_298 + (-8 - (longlong)pPVar20))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pPVar20,uVar18);
        local_288 = (PolyPath<__int64> **)0x0;
        local_298 = (PolyPath<__int64> *)0x0;
        pPStack_290 = (PolyPath<__int64> *)0x0;
      }
      if (local_2b0 != (Point<__int64> *)0x0) {
        std::allocator<Clipper2Lib::Point<__int64>_>::deallocate
                  ((allocator<Clipper2Lib::Point<__int64>_> *)&local_2b0,local_2b0,
                   (longlong)pPStack_2a0 - (longlong)local_2b0 >> 4);
        local_2b0 = (Point<__int64> *)0x0;
        local_2a8 = (Point<__int64> *)0x0;
        pPStack_2a0 = (Point<__int64> *)0x0;
      }
      Clipper2Lib::ClipperBase::~ClipperBase(&local_168);
    }
  }
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::_Tidy(&local_188);
  std::
  vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
  ::_Tidy(local_68);
  pGVar24 = local_228.groups_._Mypair._Myval2._Mylast;
  pGVar23 = local_228.groups_._Mypair._Myval2._Myfirst;
  if (local_228.groups_._Mypair._Myval2._Myfirst != local_228.groups_._Mypair._Myval2._Mylast) {
    do {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (&pGVar23->path_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar23->paths_out_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar23->paths_in_);
      pGVar23 = pGVar23 + 1;
    } while (pGVar23 != pGVar24);
    local_228.groups_._Mypair._Myval2._Mylast = local_228.groups_._Mypair._Myval2._Myfirst;
  }
  pGVar24 = local_228.groups_._Mypair._Myval2._Mylast;
  if (local_228.norms._Mypair._Myval2._Myfirst != local_228.norms._Mypair._Myval2._Mylast) {
    local_228.norms._Mypair._Myval2._Mylast = local_228.norms._Mypair._Myval2._Myfirst;
  }
  pGVar23 = local_228.groups_._Mypair._Myval2._Myfirst;
  if (local_228.groups_._Mypair._Myval2._Myfirst != (Group *)0x0) {
    for (; pGVar23 != pGVar24; pGVar23 = pGVar23 + 1) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                (&pGVar23->path_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar23->paths_out_);
      std::
      vector<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>,std::allocator<std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>_>_>
      ::_Tidy(&pGVar23->paths_in_);
    }
    uVar18 = (((longlong)local_228.groups_._Mypair._Myval2._Myend -
              (longlong)local_228.groups_._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
    pGVar24 = local_228.groups_._Mypair._Myval2._Myfirst;
    if (0xfff < uVar18) {
      pGVar24 = *(Group **)&local_228.groups_._Mypair._Myval2._Myfirst[-1].end_type_;
      uVar18 = uVar18 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_228.groups_._Mypair._Myval2._Myfirst + (-8 - (longlong)pGVar24)))
      goto LAB_1494ea692;
    }
    ::operator_delete(pGVar24,uVar18);
    local_228.groups_._Mypair._Myval2._Myfirst = (Group *)0x0;
    local_228.groups_._Mypair._Myval2._Mylast = (Group *)0x0;
    local_228.groups_._Mypair._Myval2._Myend = (Group *)0x0;
  }
  pvVar7 = local_228.solution._Mypair._Myval2._Mylast;
  pPVar21 = (Point<__int64> *)local_228.solution._Mypair._Myval2._Myfirst;
  if ((Point<__int64> *)local_228.solution._Mypair._Myval2._Myfirst != (Point<__int64> *)0x0) {
    for (; pPVar21 != (Point<__int64> *)pvVar7;
        pPVar21 = (Point<__int64> *)((longlong)(pPVar21 + 1) + 8)) {
      std::vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>::_Tidy
                ((vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_>
                  *)pPVar21);
    }
    uVar18 = (((longlong)local_228.solution._Mypair._Myval2._Myend -
              (longlong)local_228.solution._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pPVar21 = (Point<__int64> *)local_228.solution._Mypair._Myval2._Myfirst;
    if (0xfff < uVar18) {
      pPVar21 = (Point<__int64> *)
                ((Point<__int64> *)((longlong)local_228.solution._Mypair._Myval2._Myfirst + -0x10))
                ->y;
      uVar18 = uVar18 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_228.solution._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar21)))
      goto LAB_1494ea692;
    }
    ::operator_delete(pPVar21,uVar18);
    local_228.solution._Mypair._Myval2._Mylast =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_228.solution._Mypair._Myval2._Myend =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
    local_228.solution._Mypair._Myval2._Myfirst =
         (vector<Clipper2Lib::Point<__int64>,std::allocator<Clipper2Lib::Point<__int64>_>_> *)0x0;
  }
  if (local_228.norms._Mypair._Myval2._Myfirst != (Point<double> *)0x0) {
    uVar18 = (longlong)local_228.norms._Mypair._Myval2._Myend -
             (longlong)local_228.norms._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
    pPVar16 = local_228.norms._Mypair._Myval2._Myfirst;
    if (0xfff < uVar18) {
      pPVar16 = (Point<double> *)local_228.norms._Mypair._Myval2._Myfirst[-1].y;
      uVar18 = uVar18 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_228.norms._Mypair._Myval2._Myfirst + (-8 - (longlong)pPVar16))) {
LAB_1494ea692:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar16,uVar18);
  }
  return (bool)cVar25;
}

// PackVector<float,__int64> @ 1494ea9b0

Point<__int64> * __cdecl
UE::Geometry::Private::PackVector<float,__int64>
          (Point<__int64> *__return_storage_ptr__,TVector2<float> param_1,TVector2<float> *param_2,
          float *param_3)

{
  float fVar1;
  float fVar2;
  float local_res10;
  float fStackX_14;
  
  fVar2 = __real_3f800000 / *param_3;
  local_res10 = param_1.field0_0x0._0_4_;
  fStackX_14 = param_1.field0_0x0._4_4_;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  __return_storage_ptr__->x =
       (longlong)((local_res10 - (param_2->field0_0x0)._s_0.X) * fVar2 * __real_5a000000);
  __return_storage_ptr__->y = (longlong)((fStackX_14 - fVar1) * fVar2 * __real_5a000000);
  return __return_storage_ptr__;
}

// PackVector<double,__int64> @ 1494eaa10

Point<__int64> * __cdecl
UE::Geometry::Private::PackVector<double,__int64>
          (Point<__int64> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_3ff0000000000000 / *param_3;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  __return_storage_ptr__->x =
       (longlong)
       (((param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) * dVar3 *
       __real_433fffffffffffff);
  __return_storage_ptr__->y = (longlong)((dVar1 - dVar2) * dVar3 * __real_433fffffffffffff);
  return __return_storage_ptr__;
}

// SignedArea2<float,UE::Math::TVector2<float>_> @ 1494eaa70

float __cdecl
UE::Geometry::CurveUtil::SignedArea2<float,UE::Math::TVector2<float>_>
          (TArrayView<UE::Math::TVector2<float>_const_,int> *param_1)

{
  int iVar1;
  TVector2<float> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  
  iVar1 = param_1->ArrayNum;
  fVar11 = 0.0;
  if (iVar1 == 0) {
    return 0.0;
  }
  if (0 < iVar1) {
    lVar5 = 0;
    uVar8 = iVar1 - 1U;
    uVar9 = 0;
    lVar4 = (longlong)(int)(iVar1 - 1U);
    do {
      lVar10 = lVar5;
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        fVar11 = (float)(*pcVar3)();
        return fVar11;
      }
      pTVar2 = param_1->DataPtr;
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        fVar11 = (float)(*pcVar3)();
        return fVar11;
      }
      fVar11 = fVar11 + (param_1->DataPtr[lVar10].field0_0x0._s_0.Y *
                         pTVar2[lVar4].field0_0x0._s_0.X -
                        pTVar2[lVar4].field0_0x0._s_0.Y * param_1->DataPtr[lVar10].field0_0x0._s_0.X
                        );
      lVar5 = lVar10 + 1;
      uVar8 = uVar9;
      uVar9 = uVar9 + 1;
      lVar4 = lVar10;
    } while (lVar10 + 1 < (longlong)iVar1);
  }
  return fVar11 * __real_3f000000;
}

// SignedArea2<double,UE::Math::TVector2<double>_> @ 1494eabe0

double __cdecl
UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>
          (TArrayView<UE::Math::TVector2<double>_const_,int> *param_1)

{
  int iVar1;
  TVector2<double> *pTVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  
  iVar1 = param_1->ArrayNum;
  lVar8 = (longlong)iVar1;
  dVar13 = 0.0;
  if (iVar1 == 0) {
    return 0.0;
  }
  dVar4 = 0.0;
  if (0 < iVar1) {
    lVar5 = 0;
    lVar12 = (longlong)(int)(iVar1 - 1U) << 4;
    uVar9 = iVar1 - 1U;
    uVar10 = 0;
    do {
      lVar11 = lVar5;
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        dVar13 = (double)(*pcVar3)();
        return dVar13;
      }
      pTVar2 = param_1->DataPtr;
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        dVar13 = (double)(*pcVar3)();
        return dVar13;
      }
      dVar13 = dVar13 + (*(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar11 + 8) *
                         *(double *)((longlong)&pTVar2->field0_0x0 + lVar12) -
                        *(double *)((longlong)&pTVar2->field0_0x0 + lVar12 + 8) *
                        *(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar11));
      lVar8 = lVar8 + -1;
      lVar5 = lVar11 + 0x10;
      lVar12 = lVar11;
      uVar9 = uVar10;
      uVar10 = uVar10 + 1;
      dVar4 = dVar13;
    } while (lVar8 != 0);
  }
  return dVar4 * __real_3fe0000000000000;
}

// UnpackVector<__int64,float> @ 1494eedb0

TVector2<float> __cdecl
UE::Geometry::Private::UnpackVector<__int64,float>
          (Point<__int64> *param_1,TVector2<float> *param_2,float *param_3)

{
  float *in_R9;
  
  *(float *)&param_1->x = (float)(longlong)param_2->field0_0x0 * __real_25000000 * *in_R9 + *param_3
  ;
  *(float *)((longlong)&param_1->x + 4) =
       (float)(longlong)param_2[1].field0_0x0 * __real_25000000 * *in_R9 + param_3[1];
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// UnpackVector<__int64,double> @ 1494eee00

TVector2<double> * __cdecl
UE::Geometry::Private::UnpackVector<__int64,double>
          (TVector2<double> *__return_storage_ptr__,Point<__int64> *param_1,
          TVector2<double> *param_2,double *param_3)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)param_1->x * __real_3ca0000000000001 * *param_3 + (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)param_1->y * __real_3ca0000000000001 * *param_3 + (param_2->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

// ~ScopedListener @ 149502140

void __thiscall
UE::Geometry::SplineCurveFitUtils::ScopedListener::~ScopedListener(ScopedListener *this)

{
  this->_padding_ = (longlong)&___7ScopedListener_SplineCurveFitUtils_Geometry_UE__6B_;
  gte::Logger::Unsubscribe((Listener *)this);
  gte::Logger::Listener::~Listener((Listener *)this);
  return;
}

// BSplineCurveFit @ 14950c3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Geometry::BSplineCurveFit
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *_Dst;
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_268 [32];
  bool local_228;
  TArray<float,TSizedDefaultAllocator<32>_> local_220;
  int local_210;
  int local_20c;
  float local_208;
  float fStack_204;
  Listener local_200;
  char local_1f0;
  BSplineCurveFit<float> local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_20c = param_1->ArrayNum;
  lVar9 = (longlong)param_3;
  if (((param_2 < 1) || (param_3 <= param_2)) || (local_20c < param_3)) {
    bVar4 = false;
  }
  else {
    uVar8 = 0;
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    local_210 = param_2;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_220,local_20c * 2,Default)
    ;
    iVar6 = param_1->ArrayNum;
    uVar11 = uVar8;
    uVar15 = uVar8;
    if (0 < (longlong)iVar6) {
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar14 = (uint)uVar15;
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + uVar8 * 8);
        uVar7 = 0;
        if ((int)uVar14 < local_220.ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        *(undefined4 *)(local_220.AllocatorInstance.Data + uVar8 * 8) = uVar2;
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + uVar8 * 8 + 4);
        uVar7 = 0;
        if ((int)(uVar14 + 1) < local_220.ArrayNum) {
          uVar7 = ~(uVar14 + 1) >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        *(undefined4 *)(local_220.AllocatorInstance.Data + uVar8 * 8 + 4) = uVar2;
        uVar8 = uVar8 + 1;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar15 = (ulonglong)(uVar14 + 2);
      } while ((longlong)uVar8 < (longlong)iVar6);
    }
    gte::Logger::Listener::Listener(&local_200,-1);
    local_1f0 = '\0';
    local_200._padding_ = (longlong)&___7ScopedListener_SplineCurveFitUtils_Geometry_UE__6B_;
    gte::Logger::Subscribe(&local_200);
    gte::BSplineCurveFit<float>::BSplineCurveFit<float>
              (&local_1e8,2,local_20c,(float *)local_220.AllocatorInstance.Data,local_210,param_3);
    if (local_1f0 == '\0') {
      iVar6 = param_4->ArrayNum;
      piVar1 = &param_4->ArrayNum;
      local_228 = true;
      if (iVar6 < param_3) {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,param_3 - iVar6,&param_4->AllocatorInstance,piVar1,&param_4->ArrayMax);
      }
      else {
        if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
        }
        if (param_3 < iVar6) {
          uVar7 = iVar6 - param_3;
          if (((int)(uVar7 | param_3) < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (uVar7 != 0) {
            _Dst = (param_4->AllocatorInstance).Data + lVar9 * 8;
            iVar6 = (*piVar1 - uVar7) - param_3;
            if (iVar6 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar7 * 8,(longlong)iVar6 << 3);
            }
            *piVar1 = *piVar1 - uVar7;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,&param_4->AllocatorInstance,*piVar1,&param_4->ArrayMax);
          }
        }
      }
      uVar7 = 0;
      bVar4 = true;
      if (0 < lVar9) {
        lVar13 = 0;
        pfVar12 = local_1e8.mControlData._Mypair._Myval2._Myfirst;
        do {
          local_208 = *pfVar12;
          fStack_204 = pfVar12[1];
          uVar10 = 0;
          if ((int)uVar7 < *piVar1) {
            uVar10 = ~uVar7 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar7 = uVar7 + 1;
          pfVar12 = pfVar12 + 2;
          *(ulonglong *)((param_4->AllocatorInstance).Data + lVar13 * 8) =
               CONCAT44(fStack_204,local_208);
          lVar13 = lVar13 + 1;
          bVar4 = local_228;
        } while (lVar13 < lVar9);
      }
    }
    else {
      bVar4 = false;
    }
    gte::BasisFunction<float>::~BasisFunction<float>(&local_1e8.mBasis);
    std::vector<float,std::allocator<float>_>::_Tidy(&local_1e8.mControlData);
    local_200._padding_ = (longlong)&___7ScopedListener_SplineCurveFitUtils_Geometry_UE__6B_;
    gte::Logger::Unsubscribe(&local_200);
    gte::Logger::Listener::~Listener(&local_200);
    if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
  }
  return bVar4;
}

// BSplineCurveFit @ 14950c850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Geometry::BSplineCurveFit
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_288 [32];
  bool local_248;
  TArray<float,TSizedDefaultAllocator<32>_> local_240;
  int local_230;
  int local_22c;
  Listener local_228;
  char local_218;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_210;
  BSplineCurveFit<float> local_208;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_22c = param_1->ArrayNum;
  lVar15 = (longlong)param_3;
  local_248 = false;
  if (((param_2 < 1) || (param_3 <= param_2)) || (local_22c < param_3)) {
    local_248 = false;
  }
  else {
    local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.ArrayNum = 0;
    local_240.ArrayMax = 0;
    local_230 = param_2;
    local_210 = param_4;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_240,local_22c * 3,Default)
    ;
    lVar16 = (longlong)param_1->ArrayNum;
    uVar12 = 0;
    if (0 < lVar16) {
      lVar13 = 0;
      uVar17 = 2;
      do {
        uVar14 = ~uVar12 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar13);
        uVar10 = 0;
        if ((int)(uVar17 - 2) < local_240.ArrayNum) {
          uVar10 = ~(uVar17 - 2) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        *(undefined4 *)(local_240.AllocatorInstance.Data + lVar13) = uVar2;
        uVar10 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar13 + 4);
        uVar10 = 0;
        if ((int)(uVar17 - 1) < local_240.ArrayNum) {
          uVar10 = ~(uVar17 - 1) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        *(undefined4 *)(local_240.AllocatorInstance.Data + lVar13 + 4) = uVar2;
        uVar10 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar13 + 8);
        uVar10 = 0;
        if ((int)uVar17 < local_240.ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar12 = uVar12 + 1;
        uVar17 = uVar17 + 3;
        *(undefined4 *)(local_240.AllocatorInstance.Data + lVar13 + 8) = uVar2;
        lVar13 = lVar13 + 0xc;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    gte::Logger::Listener::Listener(&local_228,-1);
    local_218 = '\0';
    local_228._padding_ = (longlong)&___7ScopedListener_SplineCurveFitUtils_Geometry_UE__6B_;
    gte::Logger::Subscribe(&local_228);
    gte::BSplineCurveFit<float>::BSplineCurveFit<float>
              (&local_208,3,local_22c,(float *)local_240.AllocatorInstance.Data,local_230,param_3);
    pTVar7 = local_210;
    if (local_218 == '\0') {
      iVar11 = local_210->ArrayNum;
      piVar1 = &local_210->ArrayNum;
      local_248 = true;
      if (iVar11 < param_3) {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,param_3 - iVar11,&local_210->AllocatorInstance,piVar1,&local_210->ArrayMax)
        ;
      }
      else {
        if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
        }
        if (param_3 < iVar11) {
          uVar12 = iVar11 - param_3;
          if (((int)(param_3 | uVar12) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (uVar12 != 0) {
            pFVar5 = (pTVar7->AllocatorInstance).Data + lVar15 * 0xc;
            iVar11 = (*piVar1 - uVar12) - param_3;
            if (iVar11 != 0) {
              memmove(pFVar5,pFVar5 + (longlong)(int)uVar12 * 0xc,(longlong)iVar11 * 0xc);
            }
            *piVar1 = *piVar1 - uVar12;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&pTVar7->AllocatorInstance,*piVar1,&pTVar7->ArrayMax);
          }
        }
      }
      uVar12 = 0;
      if (0 < param_3) {
        lVar16 = 0;
        do {
          uVar2 = *(undefined4 *)
                   (lVar16 + (longlong)local_208.mControlData._Mypair._Myval2._Myfirst);
          uVar3 = *(undefined4 *)
                   (lVar16 + 4 + (longlong)local_208.mControlData._Mypair._Myval2._Myfirst);
          uVar4 = *(undefined4 *)
                   (lVar16 + 8 + (longlong)local_208.mControlData._Mypair._Myval2._Myfirst);
          uVar17 = 0;
          if ((int)uVar12 < *piVar1) {
            uVar17 = ~uVar12 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          pFVar5 = (pTVar7->AllocatorInstance).Data;
          uVar12 = uVar12 + 1;
          *(undefined4 *)(pFVar5 + lVar16) = uVar2;
          *(undefined4 *)(pFVar5 + lVar16 + 4) = uVar3;
          *(undefined4 *)(pFVar5 + lVar16 + 8) = uVar4;
          lVar16 = lVar16 + 0xc;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    gte::BasisFunction<float>::~BasisFunction<float>(&local_208.mBasis);
    std::vector<float,std::allocator<float>_>::_Tidy(&local_208.mControlData);
    local_228._padding_ = (longlong)&___7ScopedListener_SplineCurveFitUtils_Geometry_UE__6B_;
    gte::Logger::Unsubscribe(&local_228);
    gte::Logger::Listener::~Listener(&local_228);
    if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.AllocatorInstance.Data);
    }
  }
  return local_248;
}

// HasValidParameters @ 14951b930

bool __cdecl
UE::Geometry::SplineCurveFitUtils::HasValidParameters(int param_1,int param_2,int param_3)

{
  if ((0 < param_2) && (param_2 < param_3)) {
    return param_3 <= param_1;
  }
  return false;
}

// PathsDifference @ 149521420

bool __cdecl
UE::Geometry::PathsDifference
          (TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_2,
          TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  bool bVar1;
  ClipType local_res10 [6];
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res10[0] = Difference;
  bVar1 = Private::ClipPaths<double>(local_res10,param_1,&local_18,param_3);
  return bVar1;
}

// PathsIntersection @ 149521460

bool __cdecl
UE::Geometry::PathsIntersection
          (TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_2,
          TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  bool bVar1;
  ClipType local_res10 [6];
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_res10[0] = Intersection;
  bVar1 = Private::ClipPaths<double>(local_res10,param_1,&local_18,param_3);
  return bVar1;
}

// PolygonsDifference @ 1495214a0

bool __cdecl
UE::Geometry::PolygonsDifference
          (TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_2,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  ClipType local_res8 [8];
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8[0] = Difference;
  bVar1 = Private::ClipArrays<double>(local_res8,&local_18,&local_28,param_3);
  return bVar1;
}

// PolygonsExclusiveOr @ 1495214e0

bool __cdecl
UE::Geometry::PolygonsExclusiveOr
          (TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_2,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  ClipType local_res8 [8];
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8[0] = Xor;
  bVar1 = Private::ClipArrays<double>(local_res8,&local_18,&local_28,param_3);
  return bVar1;
}

// PolygonsIntersection @ 149521520

bool __cdecl
UE::Geometry::PolygonsIntersection
          (TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_1,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_2,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  ClipType local_res8 [8];
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8[0] = Intersection;
  bVar1 = Private::ClipArrays<double>(local_res8,&local_18,&local_28,param_3);
  return bVar1;
}

// PolygonsOffset @ 149521560

bool __cdecl
UE::Geometry::PolygonsOffset
          (double param_1,TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_2,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4,double param_5,EPolygonOffsetJoinType param_6,EPolygonOffsetEndType param_7,
          double param_8,double param_9)

{
  bool bVar1;
  double local_res8 [4];
  TArrayView<double_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.DataPtr = local_res8;
  local_28.ArrayNum = 1;
  local_res8[0] = param_1;
  bVar1 = Private::ApplyOffsetsToGeneralPolygons<double>
                    (&local_18,&param_6,&param_7,&local_28,&param_5,param_3,param_4,param_8,param_9)
  ;
  return bVar1;
}

// PolygonsOffsets @ 1495215e0

bool __cdecl
UE::Geometry::PolygonsOffsets
          (double param_1,double param_2,
          TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_3,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5,double param_6,EPolygonOffsetJoinType param_7,EPolygonOffsetEndType param_8,
          double param_9,double param_10)

{
  bool bVar1;
  double local_38;
  double local_30;
  TArrayView<double_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_28.DataPtr = &local_38;
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_28.ArrayNum = 2;
  local_38 = param_1;
  local_30 = param_2;
  bVar1 = Private::ApplyOffsetsToGeneralPolygons<double>
                    (&local_18,&param_7,&param_8,&local_28,&param_6,param_4,param_5,param_9,param_10
                    );
  return bVar1;
}

// PolygonsUnion @ 149521680

bool __cdecl
UE::Geometry::PolygonsUnion
          (TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> *param_1,
          TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ClipType local_res18 [2];
  uint uStack_2c;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_28;
  TArrayView<UE::Geometry::TGeneralPolygon2<double>_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res18[0] = Union;
  local_28._8_8_ = (ulonglong)uStack_2c << 0x20;
  local_28.DataPtr = (TGeneralPolygon2<double> *)0x0;
  bVar3 = Private::ClipArrays<double>(local_res18,&local_18,&local_28,param_2);
  if (((param_3) && (!bVar3)) &&
     ((TGeneralPolygon2<double> *)(param_2->AllocatorInstance).Data != param_1->DataPtr)) {
    iVar1 = param_1->ArrayNum;
    TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>::Reset(param_2,iVar1)
    ;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9a9,L"Invalid range size: %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else if (iVar1 == 0) {
      return bVar3;
    }
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    ConstructItems<UE::Geometry::TGeneralPolygon2<double>,UE::Geometry::TGeneralPolygon2<double>,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28,param_1->DataPtr,iVar1);
  }
  return bVar3;
}

// Report @ 149522c90

void __thiscall
UE::Geometry::SplineCurveFitUtils::ScopedListener::Report
          (ScopedListener *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  this->bHasReport = true;
  return;
}

// IsInsideExact<double> @ 14958f4a0

int __cdecl
UE::Geometry::TetUtil::IsInsideExact<double>
          (TTetrahedron3<double> *param_1,TVector<double> *param_2)

{
  int iVar1;
  int iVar2;
  FIndex3i **ppFVar3;
  int iVar4;
  double dVar5;
  
  ppFVar3 = &`struct_UE::Geometry::FIndex3i_const*___ptr64___cdecl_UE::Geometry::TetUtil::GetTetFaceOrdering<0>(void)'
             ::__l2::FaceMap;
  iVar4 = 0;
  do {
    dVar5 = ExactPredicates::Orient3<double>
                      (param_1->V + (int)*ppFVar3,param_1->V + (int)((ulonglong)*ppFVar3 >> 0x20),
                       param_1->V + *(int *)(ppFVar3 + 1),param_2);
    if (dVar5 <= 0.0) {
      iVar2 = (0.0 <= dVar5) - 1;
      if (iVar2 != 0) goto LAB_14958f53a;
    }
    else {
      iVar2 = 1;
LAB_14958f53a:
      iVar1 = iVar2 * iVar4;
      iVar4 = iVar2;
      if (iVar1 < 0) {
        return 0;
      }
    }
    ppFVar3 = (FIndex3i **)((longlong)ppFVar3 + 0xc);
    if (0x154bacecf < (longlong)ppFVar3) {
      return iVar4;
    }
  } while( true );
}

// operator() @ 1495ad9f0

void __thiscall
`UE::Geometry::
ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'::__l2::OrderData,`FastTriWinding::ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'::__l2::<lambda_3>,`FastTriWinding::ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'::__l2::<lambda_4>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 (*pauVar3) [16];
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
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
  int iVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double local_188;
  double dStack_180;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  
  pauVar3 = *(undefined1 (**) [16])this;
  auVar7 = *pauVar3;
  dVar17 = *(double *)pauVar3[1];
  dVar16 = *(double *)(pauVar3[1] + 8);
  dVar15 = *(double *)pauVar3[2];
  dVar14 = *(double *)(pauVar3[2] + 8);
  dVar13 = *(double *)pauVar3[3];
  dVar12 = *(double *)(pauVar3[3] + 8);
  dVar11 = *(double *)pauVar3[4];
  dVar10 = *(double *)(pauVar3[4] + 8);
  dVar9 = *(double *)pauVar3[5];
  dVar8 = *(double *)(pauVar3[5] + 8);
  dVar2 = *(double *)pauVar3[6];
  iVar20 = (param_1 + 1) * **(int **)((longlong)this + 8);
  iVar18 = **(int **)((longlong)this + 0x10);
  if (iVar20 < **(int **)((longlong)this + 0x10)) {
    iVar18 = iVar20;
  }
  iVar20 = **(int **)((longlong)this + 8) * param_1;
  while( true ) {
    local_188 = auVar7._0_8_;
    dStack_180 = auVar7._8_8_;
    if (iVar18 <= iVar20) break;
    `FastTriWinding::
    ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'
    ::__l2::<lambda_3>::operator()
              (*(void **)((longlong)this + 0x18),(OrderData *)&local_118._s_0,iVar20);
    iVar20 = iVar20 + 1;
    dVar17 = dVar17 + local_118._s_0.Z;
    auVar7._8_4_ = SUB84(dStack_180 + local_118._s_0.Y,0);
    auVar7._0_8_ = local_188 + local_118._s_0.X;
    auVar7._12_4_ = (int)((ulonglong)(dStack_180 + local_118._s_0.Y) >> 0x20);
    uVar23 = SUB84(local_b8,0);
    uVar24 = (undefined4)((ulonglong)local_b8 >> 0x20);
    if (local_b8 <= dVar2) {
      uVar23 = SUB84(dVar2,0);
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar16 = dVar16 + local_100;
    dVar15 = dVar15 + local_f8;
    dVar14 = dVar14 + local_f0;
    dVar13 = dVar13 + local_e8;
    dVar2 = (double)CONCAT44(uVar24,uVar23);
    dVar12 = dVar12 + local_e0;
    dVar11 = dVar11 + local_d8;
    dVar10 = dVar10 + local_d0;
    dVar9 = dVar9 + local_c8;
    dVar8 = dVar8 + local_c0;
  }
  plVar4 = *(longlong **)((longlong)this + 0x28);
  uVar21 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *plVar4;
  lVar22 = (longlong)param_1 * 0x68;
  *(double *)(lVar22 + lVar5) = local_188;
  ((double *)(lVar22 + lVar5))[1] = dStack_180;
  pdVar1 = (double *)(lVar22 + 0x10 + lVar5);
  *pdVar1 = dVar17;
  pdVar1[1] = dVar16;
  pdVar1 = (double *)(lVar22 + 0x20 + lVar5);
  *pdVar1 = dVar15;
  pdVar1[1] = dVar14;
  pdVar1 = (double *)(lVar22 + 0x30 + lVar5);
  *pdVar1 = dVar13;
  pdVar1[1] = dVar12;
  pdVar1 = (double *)(lVar22 + 0x40 + lVar5);
  *pdVar1 = dVar11;
  pdVar1[1] = dVar10;
  pdVar1 = (double *)(lVar22 + 0x50 + lVar5);
  *pdVar1 = dVar9;
  pdVar1[1] = dVar8;
  *(double *)(lVar22 + 0x60 + lVar5) = dVar2;
  return;
}

// operator() @ 1495adcd0

void __thiscall
`UE::Geometry::
ParallelTransformReduce<int,`FastTriWinding::ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'::__l2::PData,`FastTriWinding::ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'::__l2::<lambda_1>,`FastTriWinding::ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  pdVar2 = *(double **)this;
  dVar8 = *pdVar2;
  dVar9 = pdVar2[1];
  dVar10 = pdVar2[2];
  dVar7 = pdVar2[3];
  iVar13 = (param_1 + 1) * **(int **)((longlong)this + 8);
  uVar15 = **(int **)((longlong)this + 8) * param_1;
  lVar18 = (longlong)(int)uVar15;
  iVar11 = **(int **)((longlong)this + 0x10);
  if (iVar13 < **(int **)((longlong)this + 0x10)) {
    iVar11 = iVar13;
  }
  for (; lVar18 < iVar11; lVar18 = lVar18 + 1) {
    plVar3 = *(longlong **)((longlong)this + 0x18);
    plVar4 = (longlong *)*plVar3;
    uVar14 = 0;
    if ((int)uVar15 < (int)plVar4[1]) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = plVar3[1];
    uVar15 = uVar15 + 1;
    uVar14 = *(uint *)(*plVar4 + lVar18 * 4);
    uVar16 = (ulonglong)(uVar14 >> 9);
    uVar17 = (ulonglong)(uVar14 & 0x1ff);
    dVar1 = *(double *)(*(longlong *)(*(longlong *)(lVar5 + 0x38) + uVar16 * 8) + uVar17 * 8);
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + uVar16 * 8);
    dVar8 = dVar8 + dVar1 * *(double *)(lVar5 + uVar17 * 0x18);
    dVar9 = dVar9 + dVar1 * *(double *)(lVar5 + 8 + uVar17 * 0x18);
    dVar10 = dVar10 + dVar1 * *(double *)(lVar5 + 0x10 + uVar17 * 0x18);
    dVar7 = dVar7 + dVar1;
  }
  plVar3 = *(longlong **)((longlong)this + 0x28);
  uVar15 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar18 = *plVar3;
  pdVar2 = (double *)((longlong)param_1 * 0x20 + lVar18);
  *pdVar2 = dVar8;
  pdVar2[1] = dVar9;
  pdVar2 = (double *)((longlong)param_1 * 0x20 + 0x10 + lVar18);
  *pdVar2 = dVar10;
  pdVar2[1] = dVar7;
  return;
}

