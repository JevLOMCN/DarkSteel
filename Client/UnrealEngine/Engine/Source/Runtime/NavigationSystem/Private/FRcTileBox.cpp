// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// FRcTileBox @ 146dd6c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FRcTileBox * __thiscall
FRcTileBox::FRcTileBox
          (FRcTileBox *this,TBox<double> *param_1,TVector<double> *param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FRcTileBox *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined1 local_d8;
  undefined1 local_d7 [7];
  TVector<double>_u_0 local_d0;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  TVector<double>_u_0 local_a0;
  double local_88;
  double local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((param_3 <= 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TileSizeInWorldUnits > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMeshGenerator.h"
                         ,0xd9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FRcTileBox *)(*pcVar3)();
    return pFVar7;
  }
  iVar6 = _finite((param_2->field0_0x0)._s_0.X);
  if (((iVar6 == 0) || (iVar6 = _finite((param_2->field0_0x0)._s_0.Y), iVar6 == 0)) ||
     (iVar6 = _finite((param_2->field0_0x0)._s_0.Z), iVar6 == 0)) {
    local_e8 = "FRcTileBox::FRcTileBox";
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!RcNavMeshOrigin.ContainsNaN()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMeshGenerator.h"
                       ,0xda,L"%hs: RcNavMeshOrigin ContainsNaN");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRcTileBox *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = _finite((param_1->Min).field0_0x0._s_0.X);
  if ((((iVar6 == 0) || (iVar6 = _finite((param_1->Min).field0_0x0._s_0.Y), iVar6 == 0)) ||
      ((iVar6 = _finite((param_1->Min).field0_0x0._s_0.Z), iVar6 == 0 ||
       ((iVar6 = _finite((param_1->Max).field0_0x0._s_0.X), iVar6 == 0 ||
        (iVar6 = _finite((param_1->Max).field0_0x0._s_0.Y), iVar6 == 0)))))) ||
     (iVar6 = _finite((param_1->Max).field0_0x0._s_0.Z), iVar6 == 0)) {
    local_e8 = "FRcTileBox::FRcTileBox";
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!UnrealBounds.ContainsNaN()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMeshGenerator.h"
                       ,0xdb,L"%hs: UnrealBounds ContainsNaN");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRcTileBox *)(*pcVar3)();
      return pFVar7;
    }
  }
  if ((param_1->IsValid != '\0') ||
     (bVar5 = `FRcTileBox::FRcTileBox'::__l28::<lambda_1>::operator()(local_d7), bVar5)) {
    uVar1 = *(undefined8 *)&(param_1->Min).field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->Min).field0_0x0 + 8);
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_d0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar11,(uint)uVar1 ^ uVar10);
    local_d0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar11,(uint)uVar2 ^ uVar10);
    local_d0._s_0.Y = (param_1->Min).field0_0x0._s_0.Z;
    uVar1 = *(undefined8 *)&(param_1->Max).field0_0x0;
    local_b8 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar11,(uint)uVar1 ^ uVar10);
    uVar1 = *(undefined8 *)((longlong)&(param_1->Max).field0_0x0 + 8);
    local_a8 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar11,(uint)uVar1 ^ uVar10);
    local_b0 = (param_1->Max).field0_0x0._s_0.Z;
    UE::Math::TBox<double>::TBox<double>
              ((TBox<double> *)&local_a0._s_0,(TVector<double> *)&local_d0._s_0,2);
    dVar4 = __real_3ff0000000000000 / param_3;
    lVar9 = (longlong)
            ROUND((local_a0._s_0.X - (param_2->field0_0x0)._s_0.X) * (dVar4 + dVar4) -
                  __real_3fe0000000000000) >> 1;
    if ((2 < (byte)LogNavigation._0_1_) && (lVar9 != (int)lVar9)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_static_int___cdecl_FRcTileBox::ClampToInt32(__int64)'::__l3::LOG_Static,
                 (FLogCategoryBase *)&LogNavigation);
    }
    lVar8 = 0x7fffffff;
    if (lVar9 < 0x7fffffff) {
      lVar8 = lVar9;
    }
    iVar6 = -0x80000000;
    if (-0x80000000 < lVar8) {
      iVar6 = (int)lVar8;
    }
    this->XMin = iVar6;
    iVar6 = `FRcTileBox::FRcTileBox'::__l2::<lambda_2>::operator()
                      (&local_d8,(local_88 - (param_2->field0_0x0)._s_0.X) * dVar4,iVar6);
    this->XMax = iVar6;
    lVar9 = (longlong)
            ROUND((local_a0._s_0.Z - (param_2->field0_0x0)._s_0.Z) * (dVar4 + dVar4) -
                  __real_3fe0000000000000) >> 1;
    if ((2 < (byte)LogNavigation._0_1_) && (lVar9 != (int)lVar9)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_static_int___cdecl_FRcTileBox::ClampToInt32(__int64)'::__l3::LOG_Static,
                 (FLogCategoryBase *)&LogNavigation);
    }
    lVar8 = 0x7fffffff;
    if (lVar9 < 0x7fffffff) {
      lVar8 = lVar9;
    }
    iVar6 = -0x80000000;
    if (-0x80000000 < lVar8) {
      iVar6 = (int)lVar8;
    }
    this->YMin = iVar6;
    iVar6 = `FRcTileBox::FRcTileBox'::__l2::<lambda_2>::operator()
                      (&local_d8,(local_78 - (param_2->field0_0x0)._s_0.Z) * dVar4,iVar6);
    this->YMax = iVar6;
  }
  else {
    this->XMax = -1;
    this->XMin = 0;
    this->YMin = 0;
    this->YMax = -1;
  }
  return this;
}

// operator() @ 146ddb7d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
`FRcTileBox::FRcTileBox'::__l2::<lambda_2>::operator()(void *this,double param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double local_res20;
  
  dVar4 = (param_1 + param_1) - __real_3fe0000000000000;
  dVar5 = modf(param_1,&local_res20);
  lVar3 = (longlong)ROUND(dVar4) >> 1;
  if (dVar5 == 0.0) {
    lVar3 = lVar3 + -1;
    if ((2 < (byte)LogNavigation._0_1_) && (lVar3 != (int)lVar3)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_static_int___cdecl_FRcTileBox::ClampToInt32(__int64)'::__l3::LOG_Static,
                 (FLogCategoryBase *)&LogNavigation);
    }
    lVar1 = 0x7fffffff;
    if (lVar3 < 0x7fffffff) {
      lVar1 = lVar3;
    }
    iVar2 = -0x80000000;
    if (-0x80000000 < lVar1) {
      iVar2 = (int)lVar1;
    }
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
    return param_2;
  }
  if ((2 < (byte)LogNavigation._0_1_) && (lVar3 != (int)lVar3)) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_static_int___cdecl_FRcTileBox::ClampToInt32(__int64)'::__l3::LOG_Static,
               (FLogCategoryBase *)&LogNavigation);
  }
  lVar1 = 0x7fffffff;
  if (lVar3 < 0x7fffffff) {
    lVar1 = lVar3;
  }
  iVar2 = -0x80000000;
  if (-0x80000000 < lVar1) {
    iVar2 = (int)lVar1;
  }
  return iVar2;
}

// operator() @ 1504fd060

bool __thiscall `FRcTileBox::FRcTileBox'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8602375342729986269>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8602375342729986269>,
                       &`public:___cdecl_`public:___cdecl_FRcTileBox::FRcTileBox(UE::Math::TBox<double>_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,double)___ptr64'::`28'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

