// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 24

// ComputeReprojectionError @ 14d36cc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
FOpenCVHelper::ComputeReprojectionError
          (TTransform<double> *param_1,Mat *param_2,
          vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *param_3,
          vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_4)

{
  uchar *puVar1;
  Mat *pMVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  bool bVar9;
  __uint64 _Var10;
  MatCommaInitializer_<double> *pMVar11;
  MatExpr *pMVar12;
  _InputOutputArray *p_Var13;
  _InputArray *p_Var14;
  float *pfVar15;
  Point_<float> *pPVar16;
  longlong lVar17;
  ulong64 uVar18;
  int iVar19;
  longlong lVar20;
  void *pvVar21;
  longlong lVar22;
  Point_<float> *pPVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_8a8 [32];
  MatConstIterator local_868;
  _InputArray local_840;
  _InputArray local_828;
  void *local_810;
  longlong lStack_808;
  longlong local_800;
  undefined1 local_7f8 [16];
  Size_<int> local_7e8;
  uchar *local_7e0;
  Size_<int> local_7d8;
  TMatrix<double> local_7c8;
  _Bxty local_748;
  undefined8 local_738;
  Mat local_728;
  Mat local_6c8;
  Mat local_668;
  Mat local_608;
  Mat local_5a8;
  Mat local_548;
  MatExpr local_4e8;
  Mat local_388;
  MatExpr local_328;
  MatExpr local_1c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  lVar22 = (longlong)(param_3->_Mypair)._Myval2._Mylast -
           (longlong)(param_3->_Mypair)._Myval2._Myfirst;
  iVar7 = (int)(lVar22 >> 0x3f);
  iVar6 = (int)(lVar22 / 0xc) + iVar7;
  if (iVar6 == iVar7) {
    return __real_bff0000000000000;
  }
  iVar19 = (int)((longlong)(param_4->_Mypair)._Myval2._Mylast -
                 (longlong)(param_4->_Mypair)._Myval2._Myfirst >> 3);
  if (iVar19 == 0) {
    return __real_bff0000000000000;
  }
  if (iVar6 - iVar7 != iVar19) {
    return __real_bff0000000000000;
  }
  UE::Math::TTransform<double>::ToMatrixNoScale(param_1,&local_7c8);
  cv::Mat::Mat(&local_6c8,3,1,6);
  local_868.m = &local_6c8;
  pvVar21 = (void *)0x0;
  local_868.elemSize = (ulong64)pvVar21;
  if (0 < local_6c8.dims) {
    local_868.elemSize = (ulong64)local_6c8.step.p[local_6c8.dims + -1];
  }
  local_868.ptr = (uchar *)0x0;
  local_868.sliceStart = (uchar *)0x0;
  local_868.sliceEnd = (uchar *)0x0;
  if ((local_6c8.flags & 0x4000U) != 0) {
    bVar9 = cv::Mat::empty(&local_6c8);
    uVar18 = local_868.elemSize;
    if (bVar9) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_748,
                 "!m->empty()");
      cv::error(-0xd7,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_748,
                "cv::MatConstIterator::MatConstIterator",
                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\OpenCV\\Source\\ThirdParty\\OpenCV\\include\\opencv2\\core\\mat.inl.hpp"
                ,0x8e5);
      pcVar3 = (code *)swi(3);
      dVar4 = (double)(*pcVar3)();
      return dVar4;
    }
    puVar1 = (local_868.m)->data;
    local_868.sliceStart = puVar1;
    _Var10 = cv::Mat::total(local_868.m);
    local_868.sliceEnd = (uchar *)(_Var10 * uVar18 + (longlong)puVar1);
  }
  cv::MatConstIterator::seek(&local_868,(int *)0x0,false);
  *(double *)local_868.ptr = local_7c8.M[3][0];
  local_7e8 = (Size_<int>)local_868.ptr;
  if ((local_868.m != (Mat *)0x0) &&
     (local_7e8 = (Size_<int>)(local_868.elemSize + (longlong)local_868.ptr),
     local_868.sliceEnd <= local_868.elemSize + (longlong)local_868.ptr)) {
    cv::MatConstIterator::seek(&local_868,1,true);
    local_7e8 = (Size_<int>)local_868.ptr;
  }
  local_7f8._8_8_ = local_868.elemSize;
  local_7e0 = local_868.sliceStart;
  local_7d8 = (Size_<int>)local_868.sliceEnd;
  local_7f8._0_8_ = local_868.m;
  pMVar11 = cv::MatCommaInitializer_<double>::operator_<double>
                      ((MatCommaInitializer_<double> *)local_7f8,local_7c8.M[3][1]);
  pMVar11 = cv::MatCommaInitializer_<double>::operator_<double>(pMVar11,local_7c8.M[3][2]);
  pMVar2 = *(Mat **)&pMVar11->it;
  cv::Mat::Mat(&local_668);
  local_668.flags = (local_668.flags & 0xfffff000U) + 6;
  cv::Mat_<double>::operator=((Mat_<double> *)&local_668,pMVar2);
  cv::Mat::Mat(&local_388,&local_668);
  cv::Mat::~Mat(&local_668);
  cv::Mat::~Mat(&local_6c8);
  pMVar12 = cv::Mat::zeros(&local_4e8,3,3,6);
  cv::Mat::Mat(&local_728);
  (**(code **)((longlong)*pMVar12->op + 0x10))(pMVar12->op,pMVar12,&local_728,0xffffffff);
  cv::Mat::~Mat(&local_4e8.c);
  cv::Mat::~Mat(&local_4e8.b);
  cv::Mat::~Mat(&local_4e8.a);
  *(double *)local_728.data = local_7c8.M[0][0];
  *(double *)((longlong)local_728.data + 8) = local_7c8.M[1][0];
  *(double *)((longlong)local_728.data + 0x10) = local_7c8.M[2][0];
  *(double *)((longlong)local_728.data + *local_728.step.p) = local_7c8.M[0][1];
  *(double *)((longlong)local_728.data + *local_728.step.p + 8) = local_7c8.M[1][1];
  *(double *)((longlong)local_728.data + *local_728.step.p + 0x10) = local_7c8.M[2][1];
  *(double *)((longlong)local_728.data + *local_728.step.p * 2) = local_7c8.M[0][2];
  *(double *)((longlong)local_728.data + *local_728.step.p * 2 + 8) = local_7c8.M[1][2];
  *(double *)((longlong)local_728.data + *local_728.step.p * 2 + 0x10) = local_7c8.M[2][2];
  pMVar12 = cv::Mat::t(&local_728,&local_4e8);
  cv::Mat::Mat(&local_548);
  (**(code **)((longlong)*pMVar12->op + 0x10))(pMVar12->op,pMVar12,&local_548,0xffffffff);
  cv::Mat::~Mat(&local_4e8.c);
  cv::Mat::~Mat(&local_4e8.b);
  cv::Mat::~Mat(&local_4e8.a);
  cv::Mat::Mat(&local_5a8);
  p_Var13 = cv::noArray();
  local_840.obj = &local_5a8;
  local_840.sz.width = 0;
  local_840.sz.height = 0;
  local_828.obj = &local_548;
  local_840.flags = 0x2010000;
  local_828.sz.width = 0;
  local_828.sz.height = 0;
  local_828.flags = 0x1010000;
  cv::Rodrigues(&local_828,(_OutputArray *)&local_840,(_OutputArray *)p_Var13);
  pMVar12 = cv::Mat::inv(&local_728,&local_1c8,0);
  pMVar12 = cv::operator-(&local_328,pMVar12);
  pMVar12 = cv::operator*(&local_4e8,pMVar12,&local_388);
  cv::Mat::Mat(&local_608);
  (**(code **)((longlong)*pMVar12->op + 0x10))(pMVar12->op,pMVar12,&local_608,0xffffffff);
  cv::Mat::~Mat(&local_4e8.c);
  cv::Mat::~Mat(&local_4e8.b);
  cv::Mat::~Mat(&local_4e8.a);
  cv::Mat::~Mat(&local_328.c);
  cv::Mat::~Mat(&local_328.b);
  cv::Mat::~Mat(&local_328.a);
  cv::Mat::~Mat(&local_1c8.c);
  cv::Mat::~Mat(&local_1c8.b);
  cv::Mat::~Mat(&local_1c8.a);
  local_800 = 0;
  local_810 = (void *)0x0;
  lStack_808 = 0;
  p_Var13 = cv::noArray();
  local_828.sz.width = 0;
  local_828.sz.height = 0;
  local_828.obj = &local_810;
  local_828.flags = -0x7dfcfff3;
  p_Var14 = (_InputArray *)cv::noArray();
  local_7f8._8_8_ = &local_608;
  local_840.sz.width = 0;
  local_840.sz.height = 0;
  local_868.elemSize = (ulong64)&local_5a8;
  local_840.flags = 0x1010000;
  dVar5 = 0.0;
  dVar4 = 0.0;
  local_7e8.width = 0;
  local_7e8.height = 0;
  local_7f8._0_4_ = 0x1010000;
  local_868.ptr = (uchar *)0x0;
  local_868.m = (Mat *)CONCAT44(local_868.m._4_4_,0x1010000);
  local_738 = 0;
  local_748._0_4_ = 0x81030015;
  local_840.obj = param_2;
  local_748._8_8_ = param_3;
  cv::projectPoints((_InputArray *)&local_748,(_InputArray *)&local_868,(_InputArray *)local_7f8,
                    &local_840,p_Var14,(_OutputArray *)&local_828,(_OutputArray *)p_Var13,0.0);
  lVar22 = (longlong)iVar19;
  dVar8 = __real_bff0000000000000;
  if (lStack_808 - (longlong)local_810 >> 3 == lVar22) {
    if (lVar22 < 4) {
      dVar8 = dVar4;
      if (iVar19 < 1) goto LAB_14d36d3c1;
      pPVar23 = (param_4->_Mypair)._Myval2._Myfirst;
    }
    else {
      pPVar23 = (param_4->_Mypair)._Myval2._Myfirst;
      lVar17 = (longlong)pPVar23 - (longlong)local_810;
      lVar20 = (lVar22 - 4U >> 2) + 1;
      pfVar15 = (float *)((longlong)local_810 + 0xc);
      pvVar21 = (void *)(lVar20 * 4);
      do {
        fVar25 = *(float *)(lVar17 + -0xc + (longlong)pfVar15) - pfVar15[-3];
        fVar24 = *(float *)(lVar17 + -8 + (longlong)pfVar15) - pfVar15[-2];
        fVar26 = *(float *)(lVar17 + (longlong)pfVar15) - *pfVar15;
        fVar28 = *(float *)(lVar17 + 8 + (longlong)pfVar15) - pfVar15[2];
        fVar30 = *(float *)(lVar17 + 0x10 + (longlong)pfVar15) - pfVar15[4];
        fVar27 = *(float *)(lVar17 + -4 + (longlong)pfVar15) - pfVar15[-1];
        fVar29 = *(float *)(lVar17 + 4 + (longlong)pfVar15) - pfVar15[1];
        fVar31 = *(float *)(lVar17 + 0xc + (longlong)pfVar15) - pfVar15[3];
        pfVar15 = pfVar15 + 8;
        dVar4 = dVar4 + (double)(fVar25 * fVar25 + fVar24 * fVar24) +
                (double)(fVar26 * fVar26 + fVar27 * fVar27) +
                (double)(fVar28 * fVar28 + fVar29 * fVar29) +
                (double)(fVar30 * fVar30 + fVar31 * fVar31);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar8 = dVar4;
      dVar5 = dVar4;
      if (lVar22 <= (longlong)pvVar21) goto LAB_14d36d3c1;
    }
    pPVar16 = pPVar23 + (longlong)pvVar21;
    lVar22 = lVar22 - (longlong)pvVar21;
    do {
      fVar24 = pPVar16->y -
               *(float *)(((longlong)local_810 - (longlong)pPVar23) + 4 + (longlong)pPVar16);
      fVar25 = pPVar16->x -
               *(float *)(((longlong)local_810 - (longlong)pPVar23) + (longlong)pPVar16);
      pPVar16 = pPVar16 + 1;
      dVar5 = dVar5 + (double)(fVar24 * fVar24 + fVar25 * fVar25);
      lVar22 = lVar22 + -1;
      dVar8 = dVar5;
    } while (lVar22 != 0);
  }
LAB_14d36d3c1:
  if (local_810 != (void *)0x0) {
    uVar18 = local_800 - (longlong)local_810 & 0xfffffffffffffff8;
    pvVar21 = local_810;
    if (0xfff < uVar18) {
      pvVar21 = *(void **)((longlong)local_810 + -8);
      uVar18 = uVar18 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_810 + (-8 - (longlong)pvVar21))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar21,uVar18);
    local_800 = 0;
    local_810 = (void *)0x0;
    lStack_808 = 0;
  }
  cv::Mat::~Mat(&local_608);
  cv::Mat::~Mat(&local_5a8);
  cv::Mat::~Mat(&local_548);
  cv::Mat::~Mat(&local_728);
  cv::Mat::~Mat(&local_388);
  return dVar8;
}

// ComputeReprojectionError @ 14d36d4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
FOpenCVHelper::ComputeReprojectionError
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TTransform<double> *param_5)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  MatExpr *pMVar9;
  _InputOutputArray *p_Var10;
  _InputArray *p_Var11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  uint uVar19;
  undefined1 auStackY_4a8 [32];
  undefined1 local_458 [8];
  ForAnyElementType local_450;
  uint local_448;
  uint local_444;
  float local_440;
  float fStack_43c;
  float local_438;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_430;
  TVector2<float>_u_0 local_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  _InputArray local_400;
  _InputArray local_3e8;
  _InputArray local_3d0;
  _InputArray local_3b8;
  Mat local_398;
  Mat local_338;
  Mat local_2d8;
  Mat local_278;
  Mat local_218;
  MatExpr local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  dVar17 = __real_bff0000000000000;
  if (param_1->ArrayNum != 0) {
    iVar1 = param_2->ArrayNum;
    if ((iVar1 != 0) && (param_1->ArrayNum == iVar1)) {
      pMVar9 = cv::Mat::eye(&local_1b8,3,3,6);
      cv::Mat::Mat(&local_398);
      (**(code **)((longlong)*pMVar9->op + 0x10))(pMVar9->op,pMVar9,&local_398,0xffffffff);
      cv::Mat::~Mat(&local_1b8.c);
      cv::Mat::~Mat(&local_1b8.b);
      cv::Mat::~Mat(&local_1b8.a);
      *(double *)local_398.data = (param_3->field0_0x0)._s_0.X;
      *(double *)((longlong)local_398.data + *local_398.step.p + 8) = (param_3->field0_0x0)._s_0.Y;
      *(double *)((longlong)local_398.data + 0x10) = (param_4->field0_0x0)._s_0.X;
      *(double *)((longlong)local_398.data + *local_398.step.p + 0x10) =
           (param_4->field0_0x0)._s_0.Y;
      cv::Mat::Mat(&local_2d8);
      cv::Mat::Mat(&local_338);
      MakeObjectVectorsFromCameraPose(param_5,&local_2d8,&local_338);
      iVar2 = param_1->ArrayNum;
      uVar14 = 0;
      pFVar13 = (param_1->AllocatorInstance).Data;
      uVar19 = (uint)__xmm_80000000000000008000000000000000;
      uVar15 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      local_450.Data = (FScriptContainerElement *)0x0;
      local_448 = 0;
      pFVar3 = pFVar13 + (longlong)iVar2 * 0x18;
      local_444 = 0;
      uVar12 = uVar14;
      while( true ) {
        uVar8 = (uint)uVar12;
        if (param_1->ArrayNum != iVar2) {
          local_458[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_458);
          uVar8 = local_448;
        }
        if (pFVar13 == pFVar3) break;
        local_440 = (float)*(double *)(pFVar13 + 8);
        fStack_43c = (float)(double)CONCAT44((uint)((ulonglong)*(double *)(pFVar13 + 0x10) >> 0x20)
                                             ^ (uint)uVar15,
                                             SUB84(*(double *)(pFVar13 + 0x10),0) ^ uVar19);
        local_438 = (float)*(double *)pFVar13;
        if (((local_450.Data <= (FScriptContainerElement *)&local_440) &&
            ((FScriptContainerElement *)&local_440 < local_450.Data + (longlong)(int)local_444 * 0xc
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), uVar8 = local_448, bVar7)) {
          pcVar4 = (code *)swi(3);
          dVar17 = (double)(*pcVar4)();
          return dVar17;
        }
        if (uVar8 == local_444) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_450,(int *)&local_444);
        }
        local_448 = uVar8 + 1;
        pFVar13 = pFVar13 + 0x18;
        *(ulonglong *)(local_450.Data + (longlong)(int)uVar8 * 0xc) = CONCAT44(fStack_43c,local_440)
        ;
        *(float *)(local_450.Data + (longlong)(int)uVar8 * 0xc + 8) = local_438;
        uVar12 = (ulonglong)local_448;
      }
      local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_430.ArrayNum = 0;
      local_430.ArrayMax = 0;
      local_420 = (TVector2<float>_u_0)0x0;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::Init
                (&local_430,(TVector2<float> *)&local_420._s_0,iVar1);
      cv::Mat::Mat(&local_218,param_1->ArrayNum,1,0x15,local_450.Data,0);
      cv::Mat::Mat(&local_278,local_430.ArrayNum,1,0xd,local_430.AllocatorInstance.Data,0);
      p_Var10 = cv::noArray();
      local_408 = 0;
      local_418._8_8_ = &local_278;
      local_418._0_4_ = 0x2010000;
      p_Var11 = (_InputArray *)cv::noArray();
      local_400.obj = &local_398;
      local_400.sz.width = 0;
      local_400.sz.height = 0;
      local_3e8.obj = &local_338;
      local_400.flags = 0x1010000;
      local_3d0.obj = &local_2d8;
      local_3e8.sz.width = 0;
      local_3e8.sz.height = 0;
      local_3b8.obj = &local_218;
      local_3e8.flags = 0x1010000;
      dVar5 = 0.0;
      local_3d0.sz.width = 0;
      local_3d0.sz.height = 0;
      local_3d0.flags = 0x1010000;
      local_3b8.sz.width = 0;
      local_3b8.sz.height = 0;
      local_3b8.flags = 0x1010000;
      cv::projectPoints(&local_3b8,&local_3d0,&local_3e8,&local_400,p_Var11,
                        (_OutputArray *)local_418,(_OutputArray *)p_Var10,0.0);
      dVar17 = __real_bff0000000000000;
      if ((local_430.ArrayNum == iVar1) && (uVar15 = uVar14, dVar17 = 0.0, 0 < iVar1)) {
        do {
          uVar8 = (uint)uVar15;
          uVar19 = 0;
          if ((int)uVar8 < local_430.ArrayNum) {
            uVar19 = ~uVar8 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            dVar17 = (double)(*pcVar4)();
            return dVar17;
          }
          FVar6.Data = local_430.AllocatorInstance.Data;
          uVar19 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar19 = ~uVar8 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            dVar17 = (double)(*pcVar4)();
            return dVar17;
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          fVar16 = *(float *)(FVar6.Data + uVar14 * 8 + 4) - *(float *)(pFVar3 + uVar14 * 8 + 4);
          fVar18 = *(float *)(FVar6.Data + uVar14 * 8) - *(float *)(pFVar3 + uVar14 * 8);
          uVar14 = uVar14 + 1;
          dVar5 = dVar5 + (double)(fVar16 * fVar16 + fVar18 * fVar18);
          uVar15 = (ulonglong)(uVar8 + 1);
          dVar17 = dVar5;
        } while ((longlong)uVar14 < (longlong)iVar1);
      }
      cv::Mat::~Mat(&local_278);
      cv::Mat::~Mat(&local_218);
      if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.AllocatorInstance.Data);
      }
      if (local_450.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data);
      }
      cv::Mat::~Mat(&local_338);
      cv::Mat::~Mat(&local_2d8);
      cv::Mat::~Mat(&local_398);
    }
  }
  return dVar17;
}

// ConvertCoordinateSystem @ 14d36da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FOpenCVHelper::ConvertCoordinateSystem
          (TTransform<double> *param_1,EAxis param_2,EAxis param_3,EAxis param_4)

{
  TVector<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_2f8 [64];
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  local_2b8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_2b8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_2b8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_2b8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_2b8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_2b8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_2b8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_2b8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_2b8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_2b8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_2b8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_2b8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_2b8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_2b8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_2b8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_2b8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  pTVar1 = UnitVectorFromAxisEnum(param_2);
  local_2b8.M[0][0] = (pTVar1->field0_0x0)._s_0.X;
  local_2b8.M[1][0] = (pTVar1->field0_0x0)._s_0.Y;
  local_2b8.M[2][0] = (pTVar1->field0_0x0)._s_0.Z;
  pTVar1 = UnitVectorFromAxisEnum(param_3);
  local_2b8.M[0][1] = (pTVar1->field0_0x0)._s_0.X;
  local_2b8.M[1][1] = (pTVar1->field0_0x0)._s_0.Y;
  local_2b8.M[2][1] = (pTVar1->field0_0x0)._s_0.Z;
  pTVar1 = UnitVectorFromAxisEnum(param_4);
  local_238.M[0][0] = local_2b8.M[0][0];
  local_2b8.M[0][2] = (pTVar1->field0_0x0)._s_0.X;
  local_2b8.M[1][2] = (pTVar1->field0_0x0)._s_0.Y;
  local_2b8.M[2][2] = (pTVar1->field0_0x0)._s_0.Z;
  local_238.M[0][2] = local_2b8.M[2][0];
  local_238.M[0][1] = local_2b8.M[1][0];
  local_238.M[1][0] = local_2b8.M[0][1];
  local_238.M[0][3] = local_2b8.M[3][0];
  local_238.M[1][2] = local_2b8.M[2][1];
  local_238.M[1][1] = local_2b8.M[1][1];
  local_238.M[2][3] = local_2b8.M[3][2];
  local_238.M[1][3] = local_2b8.M[3][1];
  local_238.M[3][1] = local_2b8.M[1][3];
  local_238.M[3][0] = local_2b8.M[0][3];
  local_238.M[3][3] = local_2b8.M[3][3];
  local_238.M[3][2] = local_2b8.M[2][3];
  local_238.M[2][0] = local_2b8.M[0][2];
  local_238.M[2][1] = local_2b8.M[1][2];
  local_238.M[2][2] = local_2b8.M[2][2];
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_b8);
  VectorMatrixMultiply(&local_1b8,&local_238,pTVar2);
  VectorMatrixMultiply(&local_138,&local_1b8,&local_2b8);
  UE::Math::TTransform<double>::SetFromMatrix(param_1,&local_138);
  return;
}

// ConvertOpenCVToUnreal @ 14d36dc10

TVector<double> * __cdecl
FOpenCVHelper::ConvertOpenCVToUnreal
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  uVar2 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar3,uVar2);
  return __return_storage_ptr__;
}

// ConvertOpenCVToUnreal @ 14d36dc40

void __cdecl FOpenCVHelper::ConvertOpenCVToUnreal(TTransform<double> *param_1)

{
  ConvertCoordinateSystem(param_1,Z,X,Yn);
  return;
}

// ConvertUnrealToOpenCV @ 14d36e150

TVector<double> * __cdecl
FOpenCVHelper::ConvertUnrealToOpenCV
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar2 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar3,uVar2);
  return __return_storage_ptr__;
}

// ConvertUnrealToOpenCV @ 14d36e180

void __cdecl FOpenCVHelper::ConvertUnrealToOpenCV(TTransform<double> *param_1)

{
  ConvertCoordinateSystem(param_1,Y,Zn,X);
  return;
}

// DrawArucoMarkers @ 14d36e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FOpenCVHelper::DrawArucoMarkers
          (TArray<FArucoMarker,TSizedDefaultAllocator<32>_> *param_1,UTexture2D *param_2)

{
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  Point_<float> *pPVar5;
  Point_<float> *pPVar6;
  Point_<float> *pPVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar16;
  int *_Dst;
  Point_<float> PVar17;
  Point_<float> PVar18;
  FTexturePlatformData *pFVar19;
  void *pvVar20;
  int *_Dst_00;
  Point_<float> _Dst_01;
  ulonglong uVar21;
  ulonglong uVar22;
  ulong64 uVar23;
  Point_<float> PVar24;
  longlong lVar25;
  ulonglong uVar26;
  Point_<float> **ppPVar27;
  size_t sVar28;
  ulonglong uVar29;
  Point_<float> **ppPVar30;
  undefined1 auStackY_2c8 [32];
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> local_298;
  int *local_280;
  int *piStack_278;
  int *local_270;
  uint local_268;
  vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
  local_260;
  longlong local_248;
  ulonglong local_240;
  TArray<FArucoMarker,TSizedDefaultAllocator<32>_> *local_238;
  UTexture2D *local_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined1 local_210 [16];
  undefined8 local_200;
  _InputArray local_1f8;
  _InputArray local_1e0;
  _InputArray local_1c8;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  _InputArray local_180;
  undefined1 local_168 [16];
  undefined8 local_158;
  Scalar_<double> local_150;
  Mat local_128;
  Mat local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (param_2 != (UTexture2D *)0x0) {
    iVar13 = param_1->ArrayNum;
    uVar26 = (ulonglong)iVar13;
    if (iVar13 != 0) {
      uVar29 = 0;
      local_270 = (int *)0x0;
      local_280 = (int *)0x0;
      piStack_278 = (int *)0x0;
      local_240 = uVar26;
      local_238 = param_1;
      local_230 = param_2;
      if (0x3fffffffffffffff < uVar26) {
                    /* WARNING: Subroutine does not return */
        std::vector<int,std::allocator<int>_>::_Xlength();
      }
      piVar15 = std::_Allocate<16,std::_Default_allocate_traits>(uVar26 * 4);
      memmove(piVar15,local_280,(longlong)piStack_278 - (longlong)local_280);
      if (local_280 != (int *)0x0) {
        std::allocator<int>::deallocate
                  ((allocator<int> *)&local_280,local_280,
                   (longlong)local_270 - (longlong)local_280 >> 2);
      }
      local_270 = piVar15 + uVar26;
      local_260._Mypair._Myval2._Myend =
           (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
      local_260._Mypair._Myval2._Myfirst =
           (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
      local_260._Mypair._Myval2._Mylast =
           (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
      local_280 = piVar15;
      piStack_278 = piVar15;
      if (0xaaaaaaaaaaaaaaa < uVar26) {
                    /* WARNING: Subroutine does not return */
        std::
        vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
        ::_Xlength();
      }
      pvVar16 = std::_Allocate<16,std::_Default_allocate_traits>(uVar26 * 0x18);
      if (local_260._Mypair._Myval2._Myfirst != local_260._Mypair._Myval2._Mylast) {
        ppPVar27 = &((local_260._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Mylast;
        ppPVar30 = &(pvVar16->_Mypair)._Myval2._Myend;
        do {
          pPVar5 = ((_Vector_val<std::_Simple_types<cv::Point_<float>_>_> *)(ppPVar27 + -1))->
                   _Myfirst;
          pPVar6 = ppPVar27[1];
          pPVar7 = *ppPVar27;
          ppPVar27[1] = (Point_<float> *)0x0;
          *ppPVar27 = (Point_<float> *)0x0;
          ((_Vector_val<std::_Simple_types<cv::Point_<float>_>_> *)(ppPVar27 + -1))->_Myfirst =
               (Point_<float> *)0x0;
          ((_Vector_val<std::_Simple_types<cv::Point_<float>_>_> *)(ppPVar30 + -2))->_Myfirst =
               pPVar5;
          pvVar1 = (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)(ppPVar27 + 2);
          ppPVar30[-1] = pPVar7;
          *ppPVar30 = pPVar6;
          ppPVar27 = ppPVar27 + 3;
          ppPVar30 = ppPVar30 + 3;
        } while (pvVar1 != local_260._Mypair._Myval2._Mylast);
      }
      std::
      vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
      ::_Change_array(&local_260,pvVar16,0,uVar26);
      local_268 = 0;
      if (0 < iVar13) {
        local_248 = 0;
        uVar26 = uVar29;
        do {
          uVar12 = 0;
          if ((int)(uint)uVar29 < param_1->ArrayNum) {
            uVar12 = ~(uint)uVar29 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          piVar15 = piStack_278;
          pFVar8 = (param_1->AllocatorInstance).Data;
          if (piStack_278 == local_270) {
            lVar25 = (longlong)piStack_278 - (longlong)local_280 >> 2;
            if (lVar25 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::vector<int,std::allocator<int>_>::_Xlength();
            }
            uVar29 = lVar25 + 1;
            uVar21 = (longlong)local_270 - (longlong)local_280 >> 2;
            if (0x3fffffffffffffff - (uVar21 >> 1) < uVar21) {
              uVar22 = 0x3fffffffffffffff;
            }
            else {
              uVar21 = (uVar21 >> 1) + uVar21;
              uVar22 = uVar29;
              if (uVar29 <= uVar21) {
                uVar22 = uVar21;
              }
              if (0x3fffffffffffffff < uVar22) goto LAB_14d36ee16;
            }
            _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 4);
            _Dst[lVar25] = *(int *)(pFVar8 + uVar26);
            if (piVar15 == piStack_278) {
              sVar28 = (longlong)piStack_278 - (longlong)local_280;
              _Dst_00 = _Dst;
              piVar15 = local_280;
            }
            else {
              memmove(_Dst,local_280,(longlong)piVar15 - (longlong)local_280);
              sVar28 = (longlong)piStack_278 - (longlong)piVar15;
              _Dst_00 = _Dst + lVar25 + 1;
            }
            memmove(_Dst_00,piVar15,sVar28);
            if (local_280 != (int *)0x0) {
              uVar23 = (longlong)local_270 - (longlong)local_280 & 0xfffffffffffffffc;
              piVar15 = local_280;
              if (0xfff < uVar23) {
                piVar15 = *(int **)(local_280 + -2);
                uVar23 = uVar23 + 0x27;
                if (0x1f < (ulonglong)((longlong)local_280 + (-8 - (longlong)piVar15)))
                goto LAB_14d36eb0c;
              }
              ::operator_delete(piVar15,uVar23);
            }
            piStack_278 = _Dst + uVar29;
            local_270 = _Dst + uVar22;
            local_280 = _Dst;
          }
          else {
            *piStack_278 = *(int *)(pFVar8 + uVar26);
            piStack_278 = piStack_278 + 1;
          }
          local_298._Mypair._Myval2._Myend = (Point_<float> *)0x0;
          local_298._Mypair._Myval2._Myfirst = (Point_<float> *)0x0;
          local_298._Mypair._Myval2._Mylast = (Point_<float> *)0x0;
          PVar17 = (Point_<float>)::operator_new(0x20);
          memmove((void *)PVar17,local_298._Mypair._Myval2._Myfirst,
                  (longlong)local_298._Mypair._Myval2._Mylast -
                  (longlong)local_298._Mypair._Myval2._Myfirst);
          if (local_298._Mypair._Myval2._Myfirst != (Point_<float> *)0x0) {
            uVar23 = (longlong)local_298._Mypair._Myval2._Myend -
                     (longlong)local_298._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
            PVar24 = (Point_<float>)local_298._Mypair._Myval2._Myfirst;
            if (0xfff < uVar23) {
              PVar24 = *(Point_<float> *)((longlong)local_298._Mypair._Myval2._Myfirst + -8);
              uVar23 = uVar23 + 0x27;
              if (0x1f < ((longlong)local_298._Mypair._Myval2._Myfirst - (longlong)PVar24) - 8U)
              goto LAB_14d36eb0c;
            }
            ::operator_delete((void *)PVar24,uVar23);
          }
          local_298._Mypair._Myval2._Myend = (Point_<float> *)((longlong)PVar17 + 0x20);
          uVar2 = *(undefined4 *)(pFVar8 + uVar26 + 4);
          fVar3 = *(float *)(pFVar8 + uVar26 + 8);
          if (PVar17 == (Point_<float>)local_298._Mypair._Myval2._Myend) {
            local_298._Mypair._Myval2._Myfirst = (Point_<float> *)PVar17;
            local_298._Mypair._Myval2._Mylast = (Point_<float> *)PVar17;
            PVar18 = (Point_<float>)std::_Allocate<16,std::_Default_allocate_traits>(0x30);
            *(undefined4 *)PVar18 = uVar2;
            PVar24 = (Point_<float>)((longlong)PVar18 + 8);
            *(float *)((longlong)PVar18 + 4) = fVar3;
            if (PVar17 == (Point_<float>)local_298._Mypair._Myval2._Mylast) {
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast -
                       (longlong)local_298._Mypair._Myval2._Myfirst;
              _Dst_01 = PVar18;
              PVar17 = (Point_<float>)local_298._Mypair._Myval2._Myfirst;
            }
            else {
              memmove((void *)PVar18,local_298._Mypair._Myval2._Myfirst,
                      (longlong)PVar17 - (longlong)local_298._Mypair._Myval2._Myfirst);
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast - (longlong)PVar17;
              _Dst_01 = PVar24;
            }
            memmove((void *)_Dst_01,(void *)PVar17,sVar28);
            if (local_298._Mypair._Myval2._Myfirst != (Point_<float> *)0x0) {
              uVar23 = (longlong)local_298._Mypair._Myval2._Myend -
                       (longlong)local_298._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
              PVar17 = (Point_<float>)local_298._Mypair._Myval2._Myfirst;
              if (0xfff < uVar23) {
                PVar17 = *(Point_<float> *)((longlong)local_298._Mypair._Myval2._Myfirst + -8);
                uVar23 = uVar23 + 0x27;
                if (0x1f < ((longlong)local_298._Mypair._Myval2._Myfirst - (longlong)PVar17) - 8U)
                goto LAB_14d36eb0c;
              }
              ::operator_delete((void *)PVar17,uVar23);
            }
            local_298._Mypair._Myval2._Myend = (Point_<float> *)((longlong)PVar18 + 0x30);
          }
          else {
            *(undefined4 *)PVar17 = uVar2;
            PVar24 = (Point_<float>)((longlong)PVar17 + 8);
            *(float *)((longlong)PVar17 + 4) = fVar3;
            PVar18 = PVar17;
          }
          fVar3 = *(float *)(pFVar8 + uVar26 + 0xc);
          fVar4 = *(float *)(pFVar8 + uVar26 + 0x10);
          local_298._Mypair._Myval2._Myfirst = (Point_<float> *)PVar18;
          if (PVar24 == (Point_<float>)local_298._Mypair._Myval2._Myend) {
            lVar25 = (longlong)PVar24 - (longlong)PVar18 >> 3;
            local_298._Mypair._Myval2._Mylast = (Point_<float> *)PVar24;
            if (lVar25 == 0x1fffffffffffffff) goto LAB_14d36ee10;
            uVar29 = lVar25 + 1;
            uVar21 = (longlong)local_298._Mypair._Myval2._Myend - (longlong)PVar18 >> 3;
            if (0x1fffffffffffffff - (uVar21 >> 1) < uVar21) {
              uVar22 = 0x1fffffffffffffff;
            }
            else {
              uVar21 = uVar21 + (uVar21 >> 1);
              uVar22 = uVar29;
              if (uVar29 <= uVar21) {
                uVar22 = uVar21;
              }
              if (0x1fffffffffffffff < uVar22) goto LAB_14d36ee16;
            }
            PVar17 = (Point_<float>)std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 8);
            ((Point_<float> *)((longlong)PVar17 + lVar25 * 8))->x = fVar3;
            ((float *)((longlong)PVar17 + 4))[lVar25 * 2] = fVar4;
            if (PVar24 == (Point_<float>)local_298._Mypair._Myval2._Mylast) {
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast -
                       (longlong)local_298._Mypair._Myval2._Myfirst;
              PVar18 = PVar17;
              PVar24 = (Point_<float>)local_298._Mypair._Myval2._Myfirst;
            }
            else {
              memmove((void *)PVar17,local_298._Mypair._Myval2._Myfirst,
                      (longlong)PVar24 - (longlong)local_298._Mypair._Myval2._Myfirst);
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast - (longlong)PVar24;
              PVar18 = (Point_<float>)((longlong)PVar17 + (lVar25 + 1) * 8);
            }
            memmove((void *)PVar18,(void *)PVar24,sVar28);
            if (local_298._Mypair._Myval2._Myfirst != (Point_<float> *)0x0) {
              uVar23 = (longlong)local_298._Mypair._Myval2._Myend -
                       (longlong)local_298._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
              PVar24 = (Point_<float>)local_298._Mypair._Myval2._Myfirst;
              if (0xfff < uVar23) {
                PVar24 = *(Point_<float> *)((longlong)local_298._Mypair._Myval2._Myfirst + -8);
                uVar23 = uVar23 + 0x27;
                if (0x1f < ((longlong)local_298._Mypair._Myval2._Myfirst - (longlong)PVar24) - 8U) {
LAB_14d36eb0c:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)PVar24,uVar23);
            }
            local_298._Mypair._Myval2._Myend = (Point_<float> *)((longlong)PVar17 + uVar22 * 8);
            PVar24 = (Point_<float>)((longlong)PVar17 + uVar29 * 8);
            local_298._Mypair._Myval2._Myfirst = (Point_<float> *)PVar17;
          }
          else {
            *(float *)PVar24 = fVar3;
            *(float *)((longlong)PVar24 + 4) = fVar4;
            PVar24 = (Point_<float>)((longlong)PVar24 + 8);
          }
          fVar3 = *(float *)(pFVar8 + uVar26 + 0x14);
          fVar4 = *(float *)(pFVar8 + uVar26 + 0x18);
          if (PVar24 == (Point_<float>)local_298._Mypair._Myval2._Myend) {
            lVar25 = (longlong)PVar24 - (longlong)local_298._Mypair._Myval2._Myfirst >> 3;
            local_298._Mypair._Myval2._Mylast = (Point_<float> *)PVar24;
            if (lVar25 == 0x1fffffffffffffff) goto LAB_14d36ee10;
            uVar29 = lVar25 + 1;
            uVar21 = (longlong)local_298._Mypair._Myval2._Myend -
                     (longlong)local_298._Mypair._Myval2._Myfirst >> 3;
            if (0x1fffffffffffffff - (uVar21 >> 1) < uVar21) {
              uVar22 = 0x1fffffffffffffff;
            }
            else {
              uVar21 = (uVar21 >> 1) + uVar21;
              uVar22 = uVar29;
              if (uVar29 <= uVar21) {
                uVar22 = uVar21;
              }
              if (0x1fffffffffffffff < uVar22) goto LAB_14d36ee16;
            }
            PVar17 = (Point_<float>)std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 8);
            ((Point_<float> *)((longlong)PVar17 + lVar25 * 8))->x = fVar3;
            ((float *)((longlong)PVar17 + 4))[lVar25 * 2] = fVar4;
            if (PVar24 == (Point_<float>)local_298._Mypair._Myval2._Mylast) {
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast -
                       (longlong)local_298._Mypair._Myval2._Myfirst;
              PVar18 = PVar17;
              PVar24 = (Point_<float>)local_298._Mypair._Myval2._Myfirst;
            }
            else {
              memmove((void *)PVar17,local_298._Mypair._Myval2._Myfirst,
                      (longlong)PVar24 - (longlong)local_298._Mypair._Myval2._Myfirst);
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast - (longlong)PVar24;
              PVar18 = (Point_<float>)((longlong)PVar17 + (lVar25 + 1) * 8);
            }
            memmove((void *)PVar18,(void *)PVar24,sVar28);
            if (local_298._Mypair._Myval2._Myfirst != (Point_<float> *)0x0) {
              std::allocator<cv::Point_<float>_>::deallocate
                        ((allocator<cv::Point_<float>_> *)&local_298,
                         local_298._Mypair._Myval2._Myfirst,
                         (longlong)local_298._Mypair._Myval2._Myend -
                         (longlong)local_298._Mypair._Myval2._Myfirst >> 3);
            }
            local_298._Mypair._Myval2._Myend = (Point_<float> *)((longlong)PVar17 + uVar22 * 8);
            PVar24 = (Point_<float>)((longlong)PVar17 + uVar29 * 8);
            local_298._Mypair._Myval2._Myfirst = (Point_<float> *)PVar17;
          }
          else {
            *(float *)PVar24 = fVar3;
            *(float *)((longlong)PVar24 + 4) = fVar4;
            PVar24 = (Point_<float>)((longlong)PVar24 + 8);
          }
          fVar3 = *(float *)(pFVar8 + uVar26 + 0x1c);
          fVar4 = *(float *)(pFVar8 + uVar26 + 0x20);
          if (PVar24 == (Point_<float>)local_298._Mypair._Myval2._Myend) {
            lVar25 = (longlong)PVar24 - (longlong)local_298._Mypair._Myval2._Myfirst >> 3;
            local_298._Mypair._Myval2._Mylast = (Point_<float> *)PVar24;
            if (lVar25 == 0x1fffffffffffffff) {
LAB_14d36ee10:
                    /* WARNING: Subroutine does not return */
              std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Xlength();
            }
            uVar29 = lVar25 + 1;
            uVar21 = (longlong)local_298._Mypair._Myval2._Myend -
                     (longlong)local_298._Mypair._Myval2._Myfirst >> 3;
            if (0x1fffffffffffffff - (uVar21 >> 1) < uVar21) {
              uVar22 = 0x1fffffffffffffff;
            }
            else {
              uVar21 = (uVar21 >> 1) + uVar21;
              uVar22 = uVar29;
              if (uVar29 <= uVar21) {
                uVar22 = uVar21;
              }
              if (0x1fffffffffffffff < uVar22) {
LAB_14d36ee16:
                    /* WARNING: Subroutine does not return */
                std::_Throw_bad_array_new_length();
              }
            }
            PVar17 = (Point_<float>)std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 8);
            ((Point_<float> *)((longlong)PVar17 + lVar25 * 8))->x = fVar3;
            ((float *)((longlong)PVar17 + 4))[lVar25 * 2] = fVar4;
            if (PVar24 == (Point_<float>)local_298._Mypair._Myval2._Mylast) {
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast -
                       (longlong)local_298._Mypair._Myval2._Myfirst;
              PVar18 = PVar17;
              PVar24 = (Point_<float>)local_298._Mypair._Myval2._Myfirst;
            }
            else {
              memmove((void *)PVar17,local_298._Mypair._Myval2._Myfirst,
                      (longlong)PVar24 - (longlong)local_298._Mypair._Myval2._Myfirst);
              PVar18 = (Point_<float>)((Point_<float> *)((longlong)PVar17 + lVar25 * 8) + 1);
              sVar28 = (longlong)local_298._Mypair._Myval2._Mylast - (longlong)PVar24;
            }
            memmove((void *)PVar18,(void *)PVar24,sVar28);
            if ((Point_<float>)local_298._Mypair._Myval2._Myfirst != (Point_<float>)0x0) {
              std::allocator<cv::Point_<float>_>::deallocate
                        ((allocator<cv::Point_<float>_> *)&local_298,
                         local_298._Mypair._Myval2._Myfirst,
                         (longlong)local_298._Mypair._Myval2._Myend -
                         (longlong)local_298._Mypair._Myval2._Myfirst >> 3);
            }
            local_298._Mypair._Myval2._Mylast = (Point_<float> *)((longlong)PVar17 + uVar29 * 8);
            local_298._Mypair._Myval2._Myend = (Point_<float> *)(uVar22 * 8 + (longlong)PVar17);
            local_298._Mypair._Myval2._Myfirst = (Point_<float> *)PVar17;
          }
          else {
            *(float *)PVar24 = fVar3;
            *(float *)((longlong)PVar24 + 4) = fVar4;
            local_298._Mypair._Myval2._Mylast = (Point_<float> *)((longlong)PVar24 + 8);
          }
          if (local_260._Mypair._Myval2._Mylast == local_260._Mypair._Myval2._Myend) {
            std::
            vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
            ::
            _Emplace_reallocate<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&>
                      (&local_260,local_260._Mypair._Myval2._Mylast,&local_298);
          }
          else {
            std::
            _Default_allocator_traits<std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
            ::
            construct<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&>
                      ((allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>
                        *)&local_260,local_260._Mypair._Myval2._Mylast,&local_298);
            local_260._Mypair._Myval2._Mylast = local_260._Mypair._Myval2._Mylast + 1;
          }
          if ((Point_<float>)local_298._Mypair._Myval2._Myfirst != (Point_<float>)0x0) {
            std::allocator<cv::Point_<float>_>::deallocate
                      ((allocator<cv::Point_<float>_> *)&local_298,
                       local_298._Mypair._Myval2._Myfirst,
                       (longlong)local_298._Mypair._Myval2._Myend -
                       (longlong)local_298._Mypair._Myval2._Myfirst >> 3);
          }
          uVar26 = uVar26 + 0x24;
          local_268 = local_268 + 1;
          uVar29 = (ulonglong)local_268;
          local_248 = local_248 + 1;
          param_1 = local_238;
          param_2 = local_230;
        } while (local_248 < (longlong)local_240);
      }
      pFVar19 = UTexture2D::GetPlatformData(param_2);
      if (((pFVar19->Mips).Array.ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      lVar25 = *(longlong *)(pFVar19->Mips).Array.AllocatorInstance.Data;
      pvVar20 = FBulkData::Lock((FBulkData *)(lVar25 + 0x20),2);
      iVar13 = UTexture2D::GetSizeX(param_2);
      iVar14 = UTexture2D::GetSizeY(param_2);
      cv::Mat::Mat(&local_c8,iVar14,iVar13,0x18,pvVar20,0);
      cv::Mat::Mat(&local_128);
      local_228._8_8_ = &local_128;
      local_218 = 0;
      local_228._0_4_ = 0x2010000;
      cv::Mat::copyTo(&local_c8,(_OutputArray *)local_228);
      local_210._8_8_ = &local_128;
      local_200 = 0;
      local_1f8.obj = &local_128;
      local_210._0_4_ = 0x2010000;
      local_1f8.sz.width = 0;
      local_1f8.sz.height = 0;
      local_1f8.flags = 0x1010000;
      cv::cvtColor(&local_1f8,(_OutputArray *)local_210,1,0);
      local_1e0.obj = &local_280;
      local_1c8.obj = &local_260;
      local_1e0.sz.width = 0;
      local_1e0.sz.height = 0;
      local_150._0_8_ = ___xmm_406fe000000000000000000000000000;
      local_150._8_8_ = _UNK_152b00168;
      local_1b0._8_8_ = &local_128;
      local_1e0.flags = -0x7efcfffc;
      local_1c8.sz.width = 0;
      local_1c8.sz.height = 0;
      local_1c8.flags = -0x7efbfff3;
      local_150._16_8_ = 0;
      local_150._24_8_ = 0;
      local_1a0 = 0;
      local_1b0._0_4_ = 0x3010000;
      cv::aruco::drawDetectedMarkers
                ((_InputOutputArray *)local_1b0,&local_1c8,&local_1e0,&local_150);
      local_198._8_8_ = &local_128;
      local_188 = 0;
      local_180.obj = &local_128;
      local_198._0_4_ = 0x2010000;
      local_180.sz.width = 0;
      local_180.sz.height = 0;
      local_180.flags = 0x1010000;
      cv::cvtColor(&local_180,(_OutputArray *)local_198,0,0);
      local_168._8_8_ = &local_c8;
      local_158 = 0;
      local_168._0_4_ = 0x2010000;
      cv::Mat::copyTo(&local_128,(_OutputArray *)local_168);
      FBulkData::Unlock((FBulkData *)(lVar25 + 0x20));
      (**(code **)(param_2->_padding_ + 0x328))(param_2);
      cv::Mat::~Mat(&local_128);
      cv::Mat::~Mat(&local_c8);
      std::
      vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
      ::
      ~vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
                (&local_260);
      if (local_280 != (int *)0x0) {
        uVar23 = (longlong)local_270 - (longlong)local_280 & 0xfffffffffffffffc;
        piVar15 = local_280;
        if (0xfff < uVar23) {
          piVar15 = *(int **)(local_280 + -2);
          uVar23 = uVar23 + 0x27;
          if (0x1f < (ulonglong)((longlong)local_280 + (-8 - (longlong)piVar15))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(piVar15,uVar23);
      }
      return true;
    }
  }
  return false;
}

// DrawCheckerboardCorners @ 14d36ee30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FOpenCVHelper::DrawCheckerboardCorners
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,
          TIntPoint<int> param_2,UTexture2D *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  FTexturePlatformData *pFVar7;
  void *pvVar8;
  undefined1 auStackY_158 [32];
  _InputArray local_128;
  undefined1 local_110 [16];
  undefined8 local_100;
  Mat local_f8;
  Mat local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((param_3 == (UTexture2D *)0x0) || (param_1->ArrayNum == 0)) {
    bVar3 = false;
  }
  else {
    cv::Mat::Mat(&local_98,param_1->ArrayNum,1,0xd,(param_1->AllocatorInstance).Data,0);
    pFVar7 = UTexture2D::GetPlatformData(param_3);
    if ((pFVar7->Mips).Array.ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    lVar1 = *(longlong *)(pFVar7->Mips).Array.AllocatorInstance.Data;
    pvVar8 = FBulkData::Lock((FBulkData *)(lVar1 + 0x20),2);
    iVar5 = UTexture2D::GetSizeY(param_3);
    iVar6 = UTexture2D::GetSizeX(param_3);
    cv::Mat::Mat(&local_f8,iVar5,iVar6,0x18,pvVar8,0);
    local_128.obj = &local_98;
    local_110._8_8_ = &local_f8;
    local_128.sz.width = 0;
    local_128.sz.height = 0;
    local_128.flags = 0x1010000;
    local_100 = 0;
    local_110._0_4_ = 0x3010000;
    cv::drawChessboardCorners
              ((_InputOutputArray *)local_110,(Size_<int>)param_2.field0_0x0,&local_128,true);
    FBulkData::Unlock((FBulkData *)(lVar1 + 0x20));
    (**(code **)(param_3->_padding_ + 0x328))(param_3);
    cv::Mat::~Mat(&local_f8);
    cv::Mat::~Mat(&local_98);
    bVar3 = true;
  }
  return bVar3;
}

// DrawCheckerboardCorners @ 14d36f000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FOpenCVHelper::DrawCheckerboardCorners
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TIntPoint<int> param_2,UTexture2D *param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  FTexturePlatformData *pFVar8;
  void *pvVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [8];
  ForAnyElementType local_150;
  int local_148;
  int local_144;
  float local_140;
  float fStack_13c;
  _InputArray local_138;
  undefined1 local_120 [16];
  undefined8 local_110;
  Mat local_108;
  Mat local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar1 = param_1->ArrayNum;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  local_144 = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,&local_150,0,&local_144);
  }
  iVar6 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar11 + (longlong)iVar6 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar6) {
      local_158[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_158);
    }
    if (pFVar11 == pFVar10) break;
    local_140 = (float)*(double *)pFVar11;
    fStack_13c = (float)*(double *)(pFVar11 + 8);
    if (((local_150.Data <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < local_150.Data + (longlong)local_144 * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (local_148 == local_144) {
      local_148 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_150,&local_144);
    }
    pFVar11 = pFVar11 + 0x10;
    *(ulonglong *)(local_150.Data + (longlong)local_148 * 8) = CONCAT44(fStack_13c,local_140);
    local_148 = local_148 + 1;
  }
  if ((param_3 == (UTexture2D *)0x0) || (local_148 == 0)) {
    bVar4 = false;
  }
  else {
    cv::Mat::Mat(&local_a8,local_148,1,0xd,local_150.Data,0);
    pFVar8 = UTexture2D::GetPlatformData(param_3);
    if (((pFVar8->Mips).Array.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar2 = *(longlong *)(pFVar8->Mips).Array.AllocatorInstance.Data;
    pvVar9 = FBulkData::Lock((FBulkData *)(lVar2 + 0x20),2);
    iVar6 = UTexture2D::GetSizeY(param_3);
    iVar7 = UTexture2D::GetSizeX(param_3);
    cv::Mat::Mat(&local_108,iVar6,iVar7,0x18,pvVar9,0);
    local_120._8_8_ = &local_108;
    local_138.sz.width = 0;
    local_138.sz.height = 0;
    local_138.flags = 0x1010000;
    local_110 = 0;
    local_120._0_4_ = 0x3010000;
    local_138.obj = &local_a8;
    cv::drawChessboardCorners
              ((_InputOutputArray *)local_120,(Size_<int>)param_2.field0_0x0,&local_138,true);
    FBulkData::Unlock((FBulkData *)(lVar2 + 0x20));
    (**(code **)(param_3->_padding_ + 0x328))(param_3);
    cv::Mat::~Mat(&local_108);
    cv::Mat::~Mat(&local_a8);
    bVar4 = true;
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  return bVar4;
}

// FitLine3D @ 14d36f350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FOpenCVHelper::FitLine3D
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3)

{
  int iVar1;
  undefined1 auStackY_f8 [32];
  _InputArray local_c0;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Mat local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  iVar1 = param_1->ArrayNum;
  if (1 < iVar1) {
    cv::Mat::Mat(&local_78,iVar1,1,0x16,(param_1->AllocatorInstance).Data,0);
    local_a8._8_8_ = &local_90;
    local_98 = &DAT_600000001;
    local_90 = 0;
    uStack_88 = 0;
    local_c0.obj = &local_78;
    local_80 = 0;
    local_a8._0_4_ = 0xc2020005;
    local_c0.sz.width = 0;
    local_c0.sz.height = 0;
    local_c0.flags = 0x1010000;
    cv::fitLine(&local_c0,(_OutputArray *)local_a8,2,0.0,___xmm_3f847ae147ae147b3f847ae147ae147b,
                _UNK_152b00158);
    (param_2->field0_0x0)._s_0.X = (double)(float)local_90;
    (param_2->field0_0x0)._s_0.Y = (double)local_90._4_4_;
    (param_2->field0_0x0)._s_0.Z = (double)(float)uStack_88;
    (param_3->field0_0x0)._s_0.X = (double)uStack_88._4_4_;
    (param_3->field0_0x0)._s_0.Y = (double)(float)local_80;
    (param_3->field0_0x0)._s_0.Z = (double)local_80._4_4_;
    cv::Mat::~Mat(&local_78);
  }
  return 1 < iVar1;
}

// IdentifyArucoMarkers @ 14d36f790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FOpenCVHelper::IdentifyArucoMarkers
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,TIntPoint<int> param_2,
          EArucoDictionary param_3,TArray<FArucoMarker,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  undefined4 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  _InputArray *p_Var10;
  _InputArray *p_Var11;
  _InputOutputArray *p_Var12;
  longlong lVar13;
  void *pvVar14;
  ulong64 uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStackY_278 [32];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  longlong *plStack_218;
  void *local_210;
  longlong lStack_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  _InputArray local_1b0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  _InputArray local_168;
  vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
  local_150;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  Mat local_108;
  Mat local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  lVar17 = 0;
  cv::Mat::Mat(&local_a8,param_2.field0_0x0._4_4_,param_2.field0_0x0._0_4_,0x18,
               (param_1->AllocatorInstance).Data,0);
  cv::Mat::Mat(&local_108);
  local_1c8._8_8_ = &local_108;
  local_1b8 = 0;
  local_1b0.obj = &local_a8;
  local_1c8._0_4_ = 0x2010000;
  local_1b0.sz.width = 0;
  local_1b0.sz.height = 0;
  local_1b0.flags = 0x1010000;
  cv::cvtColor(&local_1b0,(_OutputArray *)local_1c8,0xb,0);
  local_200 = 0;
  local_150._Mypair._Myval2._Myend =
       (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
  local_210 = (void *)0x0;
  lStack_208 = 0;
  local_150._Mypair._Myval2._Myfirst =
       (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
  local_150._Mypair._Myval2._Mylast =
       (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
  switch(param_3) {
  case DICT_4X4_50:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_4X4_50);
    break;
  case DICT_4X4_100:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_4X4_100);
    break;
  case DICT_4X4_250:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_4X4_250);
    break;
  case DICT_4X4_1000:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_4X4_1000);
    break;
  case DICT_5X5_50:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_5X5_50);
    break;
  case DICT_5X5_100:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_5X5_100);
    break;
  case DICT_5X5_250:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_5X5_250);
    break;
  case DICT_5X5_1000:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_5X5_1000);
    break;
  case DICT_6X6_50:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_6X6_50);
    break;
  case DICT_6X6_100:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_6X6_100);
    break;
  case DICT_6X6_250:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_6X6_250);
    break;
  case DICT_6X6_1000:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_6X6_1000);
    break;
  case DICT_7X7_50:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_7X7_50);
    break;
  case DICT_7X7_100:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_7X7_100);
    break;
  case DICT_7X7_250:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_7X7_250);
    break;
  case DICT_7X7_1000:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_7X7_1000);
    break;
  case DICT_ARUCO_ORIGINAL:
    cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_220,DICT_ARUCO_ORIGINAL);
    break;
  default:
    local_228[0] = 0;
    `UE::Aruco::Private::GetArucoDictionary'::__l4::<lambda_1>::operator()(local_228);
    local_220 = (undefined1  [8])0x0;
    plStack_218 = (longlong *)0x0;
  }
  if (local_220 == (undefined1  [8])0x0) {
    bVar7 = false;
  }
  else {
    cv::aruco::DetectorParameters::create((Ptr<cv::aruco::DetectorParameters> *)local_1d8);
    *(undefined4 *)(local_1d8._0_8_ + 0x48) = 1;
    p_Var10 = (_InputArray *)cv::noArray();
    p_Var11 = (_InputArray *)cv::noArray();
    p_Var12 = cv::noArray();
    local_198._8_8_ = &local_210;
    local_180._8_8_ = &local_150;
    local_168.obj = &local_108;
    local_188 = 0;
    local_198._0_4_ = 0x82030004;
    local_170 = 0;
    local_180._0_4_ = 0x8204000d;
    local_168.sz.width = 0;
    local_168.sz.height = 0;
    local_168.flags = 0x1010000;
    cv::aruco::detectMarkers
              (&local_168,(Ptr<cv::aruco::Dictionary> *)local_220,(_OutputArray *)local_180,
               (_OutputArray *)local_198,(Ptr<cv::aruco::DetectorParameters> *)local_1d8,
               (_OutputArray *)p_Var12,p_Var11,p_Var10);
    piVar3 = &param_4->ArrayMax;
    param_4->ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,0,&param_4->AllocatorInstance,0,piVar3);
    }
    iVar16 = (int)(lStack_208 - (longlong)local_210 >> 2);
    if (iVar16 < 1) {
      bVar7 = false;
    }
    else {
      if (*piVar3 < iVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,iVar16,&param_4->AllocatorInstance,param_4->ArrayNum,piVar3);
      }
      lVar18 = lVar17;
      if (0 < iVar16) {
        do {
          pFVar4 = (param_4->AllocatorInstance).Data;
          local_138 = *(undefined4 *)((longlong)local_210 + lVar17 * 4);
          puVar5 = *(undefined4 **)
                    ((longlong)&((local_150._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myfirst +
                    lVar18);
          local_1f8 = *puVar5;
          uStack_1f4 = puVar5[1];
          lVar13 = *(longlong *)
                    ((longlong)&((local_150._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myfirst +
                    lVar18);
          local_1f0 = *(undefined4 *)(lVar13 + 8);
          uStack_1ec = *(undefined4 *)(lVar13 + 0xc);
          lVar13 = *(longlong *)
                    ((longlong)&((local_150._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myfirst +
                    lVar18);
          local_1e8 = *(undefined4 *)(lVar13 + 0x10);
          uStack_1e4 = *(undefined4 *)(lVar13 + 0x14);
          lVar13 = *(longlong *)
                    ((longlong)&((local_150._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myfirst +
                    lVar18);
          local_1e0 = *(undefined4 *)(lVar13 + 0x18);
          uStack_1dc = *(undefined4 *)(lVar13 + 0x1c);
          uStack_134 = local_1f8;
          uStack_130 = uStack_1f4;
          uStack_12c = local_1f0;
          uStack_128 = uStack_1ec;
          uStack_124 = local_1e8;
          uStack_120 = uStack_1e4;
          uStack_11c = local_1e0;
          uStack_118 = uStack_1dc;
          if (((pFVar4 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 < pFVar4 + (longlong)*piVar3 * 0x24)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar9 = param_4->ArrayNum;
          if (iVar9 == *piVar3) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x424,&param_4->AllocatorInstance,piVar3);
          }
          lVar17 = lVar17 + 1;
          param_4->ArrayNum = iVar9 + 1;
          lVar13 = (longlong)iVar9;
          pFVar4 = (param_4->AllocatorInstance).Data;
          *(ulonglong *)(pFVar4 + lVar13 * 0x24) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(pFVar4 + lVar13 * 0x24 + 8) = CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(pFVar4 + lVar13 * 0x24 + 0x10) = CONCAT44(uStack_124,uStack_128);
          *(ulonglong *)(pFVar4 + lVar13 * 0x24 + 0x10 + 8) = CONCAT44(uStack_11c,uStack_120);
          *(undefined4 *)(pFVar4 + lVar13 * 0x24 + 0x20) = uStack_118;
          lVar18 = lVar18 + 0x18;
        } while (lVar17 < iVar16);
      }
      bVar7 = true;
    }
    if ((longlong *)local_1d8._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar1 = (longlong *)(local_1d8._8_8_ + 8);
      lVar17 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (*(code *)**(undefined8 **)local_1d8._8_8_)(local_1d8._8_8_);
        LOCK();
        piVar3 = (int *)(local_1d8._8_8_ + 0xc);
        iVar16 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*(longlong *)local_1d8._8_8_ + 8))(local_1d8._8_8_);
        }
      }
    }
  }
  plVar1 = plStack_218;
  if (plStack_218 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_218 + 1;
    lVar17 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_218)(plStack_218);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar16 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  std::
  vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
  ::
  ~vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
            (&local_150);
  if (local_210 != (void *)0x0) {
    uVar15 = local_200 - (longlong)local_210 & 0xfffffffffffffffc;
    pvVar14 = local_210;
    if (0xfff < uVar15) {
      pvVar14 = *(void **)((longlong)local_210 + -8);
      uVar15 = uVar15 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)pvVar14))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar14,uVar15);
    local_200 = 0;
    local_210 = (void *)0x0;
    lStack_208 = 0;
  }
  cv::Mat::~Mat(&local_108);
  cv::Mat::~Mat(&local_a8);
  return bVar7;
}

// IdentifyCheckerboard @ 14d36fdf0

bool __cdecl
FOpenCVHelper::IdentifyCheckerboard
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,TIntPoint<int> param_2,
          TIntPoint<int> param_3,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  TIntRect<int>_u_0 local_18;
  
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_18._s_0.Max.field0_0x0 = (TIntPoint<int>)param_2.field0_0x0;
  bVar1 = IdentifyCheckerboard(param_1,param_2,(TIntRect<int> *)&local_18._s_0,param_3,param_4);
  return bVar1;
}

// IdentifyCheckerboard @ 14d36fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FOpenCVHelper::IdentifyCheckerboard
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,TIntPoint<int> param_2,
          TIntRect<int> *param_3,TIntPoint<int> param_4,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uStackX_24;
  undefined1 auStackY_2b8 [32];
  undefined1 local_288 [8];
  Rect_<int> local_280;
  TVector2<float>_u_0 local_270;
  TermCriteria local_268;
  undefined1 local_258 [16];
  undefined8 local_248;
  _InputArray local_240;
  undefined1 local_228 [16];
  undefined8 local_218;
  _InputArray local_210;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  _InputArray local_1e0;
  Mat local_1c8;
  Mat local_168;
  Mat local_108;
  Mat local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  lVar10 = 0;
  uVar8 = param_2.field0_0x0._0_4_;
  uVar6 = param_2.field0_0x0._4_4_;
  cv::Mat::Mat(&local_a8,uVar6,uVar8,0x18,(param_1->AllocatorInstance).Data,0);
  uVar14 = uVar8;
  if (*(int *)&param_3->field0_0x0 < (int)uVar8) {
    uVar14 = *(uint *)&param_3->field0_0x0;
  }
  uVar5 = 0;
  uVar12 = 0;
  if (0 < (int)uVar14) {
    uVar12 = uVar14;
  }
  iVar13 = *(int *)((longlong)&param_3->field0_0x0 + 4);
  *(uint *)&param_3->field0_0x0 = uVar12;
  uVar14 = uVar6;
  if (iVar13 < (int)uVar6) {
    uVar14 = *(uint *)((longlong)&param_3->field0_0x0 + 4);
  }
  uVar11 = 0;
  if (0 < (int)uVar14) {
    uVar11 = uVar14;
  }
  *(uint *)((longlong)&param_3->field0_0x0 + 4) = uVar11;
  if (*(int *)((longlong)&param_3->field0_0x0 + 8) < (int)uVar8) {
    uVar8 = *(uint *)((longlong)&param_3->field0_0x0 + 8);
  }
  uVar14 = uVar5;
  if (0 < (int)uVar8) {
    uVar14 = uVar8;
  }
  *(uint *)((longlong)&param_3->field0_0x0 + 8) = uVar14;
  if (*(int *)((longlong)&param_3->field0_0x0 + 0xc) < (int)uVar6) {
    uVar6 = *(uint *)((longlong)&param_3->field0_0x0 + 0xc);
  }
  uVar8 = uVar5;
  if (0 < (int)uVar6) {
    uVar8 = uVar6;
  }
  *(uint *)((longlong)&param_3->field0_0x0 + 0xc) = uVar8;
  if (((int)(uVar14 - uVar12) < 1) || ((int)(uVar8 - uVar11) < 1)) {
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
    bVar3 = false;
  }
  else {
    local_280.x = uVar12;
    local_280.y = uVar11;
    local_280.width = uVar14 - uVar12;
    local_280.height = uVar8 - uVar11;
    cv::Mat::Mat(&local_108,&local_a8,&local_280);
    cv::Mat::Mat(&local_1c8);
    local_258._8_8_ = &local_1c8;
    local_248 = 0;
    local_240.obj = &local_108;
    local_258._0_4_ = 0x2010000;
    local_240.sz.width = 0;
    local_240.sz.height = 0;
    local_240.flags = 0x1010000;
    cv::cvtColor(&local_240,(_OutputArray *)local_258,0xb,0);
    uStackX_24 = param_4.field0_0x0._4_4_;
    local_270 = (TVector2<float>_u_0)0x0;
    iVar13 = param_4.field0_0x0._0_4_ * uStackX_24;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::Init
              (param_5,(TVector2<float> *)&local_270._s_0,iVar13);
    cv::Mat::Mat(&local_168,iVar13,1,0xd,(param_5->AllocatorInstance).Data,0);
    local_228._8_8_ = &local_168;
    local_218 = 0;
    local_210.obj = &local_1c8;
    local_228._0_4_ = 0x2010000;
    local_210.sz.width = 0;
    local_210.sz.height = 0;
    local_210.flags = 0x1010000;
    bVar3 = cv::findChessboardCorners
                      (&local_210,
                       (Size_<int>)
                       ((ulonglong)uStackX_24 << 0x20 | (ulonglong)param_4.field0_0x0 & 0xffffffff),
                       (_OutputArray *)local_228,0xb);
    if ((bVar3) && (param_5->ArrayNum == iVar13)) {
      local_1f8._8_8_ = &local_168;
      local_1e0.obj = &local_1c8;
      local_268.epsilon = __real_3f50624dd2f1a9fc;
      local_1e8 = 0;
      local_1f8._0_4_ = 0x3010000;
      local_1e0.sz.width = 0;
      local_1e0.sz.height = 0;
      local_1e0.flags = 0x1010000;
      local_268.type = 3;
      local_268.maxCount = 0x1e;
      cv::cornerSubPix(&local_1e0,(_InputOutputArray *)local_1f8,(Size_<int>)0xb0000000b,
                       (Size_<int>)0xffffffffffffffff,&local_268);
      if (1 < iVar13) {
        if (param_5->ArrayNum < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        uVar14 = iVar13 - 1;
        pFVar7 = (param_5->AllocatorInstance).Data;
        if ((int)uVar14 < param_5->ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar9 = (param_5->AllocatorInstance).Data;
        if (*(float *)(pFVar9 + (longlong)(int)uVar14 * 8 + 4) < *(float *)(pFVar7 + 4)) {
          iVar13 = param_5->ArrayNum / 2;
          if (0 < iVar13) {
            pFVar7 = pFVar9 + (longlong)(param_5->ArrayNum + -1) * 8;
            do {
              uVar1 = *(undefined8 *)(pFVar9 + lVar10 * 8);
              *(undefined8 *)(pFVar9 + lVar10 * 8) = *(undefined8 *)pFVar7;
              lVar10 = lVar10 + 1;
              *(undefined8 *)pFVar7 = uVar1;
              pFVar7 = pFVar7 + -8;
            } while (lVar10 < iVar13);
          }
        }
      }
      pFVar9 = (param_5->AllocatorInstance).Data;
      iVar13 = param_5->ArrayNum;
      pFVar7 = pFVar9 + (longlong)iVar13 * 8;
      while( true ) {
        if (param_5->ArrayNum != iVar13) {
          `TCheckedPointerIterator<UE::Math::TVector2<float>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_288);
        }
        if (pFVar9 == pFVar7) break;
        uVar1 = *(undefined8 *)&param_3->field0_0x0;
        *(float *)pFVar9 = (float)(int)uVar1 + *(float *)pFVar9;
        *(float *)(pFVar9 + 4) = (float)(int)((ulonglong)uVar1 >> 0x20) + *(float *)(pFVar9 + 4);
        pFVar9 = pFVar9 + 8;
      }
      bVar3 = true;
    }
    else {
      param_5->ArrayNum = 0;
      if (param_5->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
      }
      bVar3 = false;
    }
    cv::Mat::~Mat(&local_168);
    cv::Mat::~Mat(&local_1c8);
    cv::Mat::~Mat(&local_108);
  }
  cv::Mat::~Mat(&local_a8);
  return bVar3;
}

// MakeCameraPoseFromObjectVectors @ 14d370400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FOpenCVHelper::MakeCameraPoseFromObjectVectors
          (Mat *param_1,Mat *param_2,TTransform<double> *param_3)

{
  ulong64 uVar1;
  uint uVar2;
  int iVar3;
  _InputOutputArray *p_Var4;
  MatExpr *pMVar5;
  double *pdVar6;
  undefined1 auStack_638 [32];
  undefined1 local_618 [16];
  undefined8 local_608;
  _InputArray local_600;
  TMatrix<double> local_5e8;
  Mat local_568;
  Mat local_508;
  Mat local_4a8;
  MatExpr local_448;
  MatExpr local_2e8;
  MatExpr local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_638;
  cv::Mat::Mat(&local_4a8);
  p_Var4 = cv::noArray();
  local_618._0_4_ = 0x2010000;
  local_618._8_8_ = &local_4a8;
  local_608 = 0;
  local_600.sz.width = 0;
  local_600.sz.height = 0;
  local_600.flags = 0x1010000;
  local_600.obj = param_1;
  cv::Rodrigues(&local_600,(_OutputArray *)local_618,(_OutputArray *)p_Var4);
  pMVar5 = cv::Mat::t(&local_4a8,&local_448);
  cv::Mat::Mat(&local_508);
  (**(code **)((longlong)*pMVar5->op + 0x10))(pMVar5->op,pMVar5,&local_508,0xffffffff);
  cv::Mat::~Mat(&local_448.c);
  cv::Mat::~Mat(&local_448.b);
  cv::Mat::~Mat(&local_448.a);
  pMVar5 = cv::Mat::t(&local_4a8,&local_188);
  pMVar5 = cv::operator-(&local_2e8,pMVar5);
  pMVar5 = cv::operator*(&local_448,pMVar5,param_2);
  cv::Mat::Mat(&local_568);
  (**(code **)((longlong)*pMVar5->op + 0x10))(pMVar5->op,pMVar5,&local_568,0xffffffff);
  cv::Mat::~Mat(&local_448.c);
  cv::Mat::~Mat(&local_448.b);
  cv::Mat::~Mat(&local_448.a);
  cv::Mat::~Mat(&local_2e8.c);
  cv::Mat::~Mat(&local_2e8.b);
  cv::Mat::~Mat(&local_2e8.a);
  cv::Mat::~Mat(&local_188.c);
  cv::Mat::~Mat(&local_188.b);
  cv::Mat::~Mat(&local_188.a);
  local_5e8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  uVar1 = *local_508.step.p;
  local_5e8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_5e8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_5e8.M[0][0] = *(double *)local_508.data;
  local_5e8.M[2][0] = *(double *)((longlong)local_508.data + 0x10);
  local_5e8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_5e8.M[1][0] = *(double *)((longlong)local_508.data + 8);
  local_5e8.M[1][1] = *(double *)(uVar1 + 8 + (longlong)local_508.data);
  local_5e8.M[0][1] = *(double *)(uVar1 + (longlong)local_508.data);
  local_5e8.M[0][2] = *(double *)((longlong)local_508.data + uVar1 * 2);
  local_5e8.M[2][1] = *(double *)(uVar1 + 0x10 + (longlong)local_508.data);
  local_5e8.M[2][2] = *(double *)((longlong)local_508.data + uVar1 * 2 + 0x10);
  local_5e8.M[1][2] = *(double *)((longlong)local_508.data + uVar1 * 2 + 8);
  uVar2 = local_568.flags & 0x4000;
  if ((uVar2 == 0) && (*local_568.size.p != 1)) {
    local_5e8.M[3][0] = *(double *)local_568.data;
LAB_14d3706a9:
    if (*local_568.size.p == 1) goto LAB_14d3706f2;
    if (local_568.size.p[1] == 1) {
      local_5e8.M[3][1] = *(double *)((longlong)local_568.data + *local_568.step.p);
    }
    else {
      iVar3 = (int)(1 / (longlong)local_568.cols);
      local_5e8.M[3][1] =
           *(double *)
            ((longlong)local_568.data +
            (longlong)(1 - iVar3 * local_568.cols) * 8 + (longlong)iVar3 * *local_568.step.p);
    }
LAB_14d370701:
    if (*local_568.size.p != 1) {
      if (local_568.size.p[1] == 1) {
        pdVar6 = (double *)((longlong)local_568.data + *local_568.step.p * 2);
      }
      else {
        iVar3 = (int)(2 / (longlong)local_568.cols);
        pdVar6 = (double *)
                 ((longlong)local_568.data +
                 (longlong)(2 - iVar3 * local_568.cols) * 8 + (longlong)iVar3 * *local_568.step.p);
      }
      goto LAB_14d370741;
    }
  }
  else {
    local_5e8.M[3][0] = *(double *)local_568.data;
    if (uVar2 == 0) goto LAB_14d3706a9;
LAB_14d3706f2:
    local_5e8.M[3][1] = *(double *)((longlong)local_568.data + 8);
    if (uVar2 == 0) goto LAB_14d370701;
  }
  pdVar6 = (double *)((longlong)local_568.data + 0x10);
LAB_14d370741:
  local_5e8.M[3][2] = *pdVar6;
  UE::Math::TTransform<double>::SetFromMatrix(param_3,&local_5e8);
  ConvertCoordinateSystem(param_3,Z,X,Yn);
  cv::Mat::~Mat(&local_568);
  cv::Mat::~Mat(&local_508);
  cv::Mat::~Mat(&local_4a8);
  return;
}

// MakeObjectVectorsFromCameraPose @ 14d3707c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FOpenCVHelper::MakeObjectVectorsFromCameraPose
          (TTransform<double> *param_1,Mat *param_2,Mat *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  int iVar15;
  double *pdVar16;
  MatExpr *pMVar17;
  _InputOutputArray *p_Var18;
  double dVar19;
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [16];
  undefined8 local_678;
  _InputArray local_670;
  TTransform<double> local_658;
  Mat local_5f8;
  Mat local_598;
  Mat local_538;
  MatExpr local_4d8;
  MatExpr local_378;
  MatExpr local_218;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_6a8;
  local_658.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  local_658.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
  local_658.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  local_658.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
  local_658.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_658.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  local_658.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_658.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_658.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  local_658.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
  local_658.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_658.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  ConvertCoordinateSystem(&local_658,Y,Zn,X);
  dVar14 = local_658.Translation.ZW.m128d_f64[0];
  dVar13 = local_658.Translation.XY.m128d_f64[1];
  dVar12 = local_658.Translation.XY.m128d_f64[0];
  fVar1 = GlobalVectorConstants::FloatOne.m128_f32[0];
  fVar2 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatOne.m128_f32[2];
  dVar11 = local_658.Rotation.XY.m128d_f64[1] + local_658.Rotation.XY.m128d_f64[1];
  dVar19 = local_658.Rotation.ZW.m128d_f64[0] + local_658.Rotation.ZW.m128d_f64[0];
  dVar7 = (local_658.Rotation.XY.m128d_f64[0] + local_658.Rotation.XY.m128d_f64[0]) *
          local_658.Rotation.XY.m128d_f64[0];
  dVar8 = dVar11 * local_658.Rotation.XY.m128d_f64[1];
  dVar4 = dVar19 * local_658.Rotation.ZW.m128d_f64[0];
  dVar9 = dVar11 * local_658.Rotation.XY.m128d_f64[0];
  dVar10 = dVar19 * local_658.Rotation.XY.m128d_f64[1];
  dVar11 = dVar11 * local_658.Rotation.ZW.m128d_f64[1];
  dVar5 = local_658.Rotation.ZW.m128d_f64[1] * dVar19;
  dVar6 = local_658.Rotation.ZW.m128d_f64[1] *
          (local_658.Rotation.XY.m128d_f64[0] + local_658.Rotation.XY.m128d_f64[0]);
  dVar19 = local_658.Rotation.XY.m128d_f64[0] * dVar19;
  cv::Mat::Mat(&local_5f8,3,1,6);
  *(double *)local_5f8.data = dVar12;
  if (((local_5f8.flags & 0x4000U) == 0) && (*local_5f8.size.p != 1)) {
    if (local_5f8.size.p[1] == 1) {
      pdVar16 = (double *)((longlong)local_5f8.data + *local_5f8.step.p);
    }
    else {
      iVar15 = (int)(1 / (longlong)local_5f8.cols);
      pdVar16 = (double *)
                ((longlong)local_5f8.data +
                (longlong)(1 - local_5f8.cols * iVar15) * 8 + (longlong)iVar15 * *local_5f8.step.p);
    }
  }
  else {
    pdVar16 = (double *)((longlong)local_5f8.data + 8);
  }
  *pdVar16 = dVar13;
  if (((local_5f8.flags & 0x4000U) == 0) && (*local_5f8.size.p != 1)) {
    if (local_5f8.size.p[1] == 1) {
      pdVar16 = (double *)((longlong)local_5f8.data + *local_5f8.step.p * 2);
    }
    else {
      iVar15 = (int)(2 / (longlong)local_5f8.cols);
      pdVar16 = (double *)
                ((longlong)local_5f8.data +
                (longlong)(2 - local_5f8.cols * iVar15) * 8 + (longlong)iVar15 * *local_5f8.step.p);
    }
  }
  else {
    pdVar16 = (double *)((longlong)local_5f8.data + 0x10);
  }
  *pdVar16 = dVar14;
  cv::Mat::Mat(&local_598,3,3,6);
  *(double *)local_598.data = (double)fVar1 - (dVar4 + dVar8);
  *(double *)((longlong)local_598.data + 8) = dVar9 - dVar5;
  *(double *)((longlong)local_598.data + 0x10) = dVar11 + dVar19;
  *(double *)((longlong)local_598.data + *local_598.step.p) = dVar5 + dVar9;
  *(double *)(*local_598.step.p + 8 + (longlong)local_598.data) = (double)fVar2 - (dVar4 + dVar7);
  *(double *)(*local_598.step.p + 0x10 + (longlong)local_598.data) = dVar10 - dVar6;
  *(double *)((longlong)local_598.data + *local_598.step.p * 2) = dVar19 - dVar11;
  *(double *)((longlong)local_598.data + *local_598.step.p * 2 + 8) = dVar6 + dVar10;
  *(double *)((longlong)local_598.data + *local_598.step.p * 2 + 0x10) =
       (double)fVar3 - (dVar7 + dVar8);
  pMVar17 = cv::Mat::t(&local_598,&local_4d8);
  cv::Mat::Mat(&local_538);
  (**(code **)((longlong)*pMVar17->op + 0x10))(pMVar17->op,pMVar17,&local_538,0xffffffff);
  cv::Mat::~Mat(&local_4d8.c);
  cv::Mat::~Mat(&local_4d8.b);
  cv::Mat::~Mat(&local_4d8.a);
  pMVar17 = cv::Mat::inv(&local_598,&local_218,0);
  pMVar17 = cv::operator-(&local_378,pMVar17);
  pMVar17 = cv::operator*(&local_4d8,pMVar17,&local_5f8);
  (**(code **)((longlong)*pMVar17->op + 0x10))(pMVar17->op,pMVar17,param_3,0xffffffff);
  cv::Mat::~Mat(&local_4d8.c);
  cv::Mat::~Mat(&local_4d8.b);
  cv::Mat::~Mat(&local_4d8.a);
  cv::Mat::~Mat(&local_378.c);
  cv::Mat::~Mat(&local_378.b);
  cv::Mat::~Mat(&local_378.a);
  cv::Mat::~Mat(&local_218.c);
  cv::Mat::~Mat(&local_218.b);
  cv::Mat::~Mat(&local_218.a);
  p_Var18 = cv::noArray();
  local_688._0_4_ = 0x2010000;
  local_678 = 0;
  local_670.sz.width = 0;
  local_670.sz.height = 0;
  local_670.obj = &local_538;
  local_670.flags = 0x1010000;
  local_688._8_8_ = param_2;
  cv::Rodrigues(&local_670,(_OutputArray *)local_688,(_OutputArray *)p_Var18);
  cv::Mat::~Mat(&local_538);
  cv::Mat::~Mat(&local_598);
  cv::Mat::~Mat(&local_5f8);
  return;
}

// ProjectPoints @ 14d3724a0

bool __cdecl
FOpenCVHelper::ProjectPoints
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,TTransform<double> *param_5,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_28 [4];
  float local_24;
  float fStack_20;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar4 = ProjectPoints(param_1,param_2,param_3,param_4,param_5,&local_18);
  if (bVar4) {
    iVar3 = local_18.ArrayNum;
    uVar7 = (ulonglong)local_18.ArrayNum;
    pFVar8 = local_18.AllocatorInstance.Data + uVar7 * 0x10;
    FVar9.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar3) {
        local_28[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_28);
      }
      if (FVar9.Data == pFVar8) break;
      pFVar1 = (param_6->AllocatorInstance).Data;
      local_24 = (float)*(double *)FVar9.Data;
      fStack_20 = (float)*(double *)(FVar9.Data + 8);
      if ((pFVar1 <= (FScriptContainerElement *)&local_24) &&
         ((FScriptContainerElement *)&local_24 < pFVar1 + (longlong)param_6->ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      iVar6 = param_6->ArrayNum;
      if (iVar6 == param_6->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_6->AllocatorInstance,&param_6->ArrayMax);
        param_6->ArrayNum = iVar6;
      }
      FVar9.Data = FVar9.Data + 0x10;
      param_6->ArrayNum = iVar6 + 1;
      *(ulonglong *)((param_6->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           CONCAT44(fStack_20,local_24);
      uVar7 = local_18._8_8_ & 0xffffffff;
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar4;
}

// ProjectPoints @ 14d372640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FOpenCVHelper::ProjectPoints
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,TTransform<double> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  MatExpr *pMVar9;
  _InputOutputArray *p_Var10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStackY_538 [32];
  undefined1 local_4e8 [8];
  ForAnyElementType local_4e0;
  int local_4d8;
  int iStack_4d4;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  TTransform<double> *local_4a8;
  TVector2<double> *local_4a0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_498;
  undefined1 local_490 [16];
  undefined8 local_480;
  _InputArray local_478;
  _InputArray local_460;
  _InputArray local_448;
  _InputArray local_430;
  _InputArray local_418;
  Mat local_3f8;
  Mat local_398;
  Mat local_338;
  Mat local_2d8;
  Mat local_278;
  Mat local_218;
  MatExpr local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_538;
  uVar2 = param_1->ArrayNum;
  uVar13 = (ulonglong)uVar2;
  local_4a8 = param_5;
  local_4e0.Data = (FScriptContainerElement *)0x0;
  local_4d8 = 0;
  iStack_4d4 = 0;
  local_4a0 = param_2;
  local_498 = param_4;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar2,&local_4e0,0,&iStack_4d4);
  }
  iVar8 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar3 = pFVar12 + (longlong)iVar8 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_4e8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_4e8);
    }
    if (pFVar12 == pFVar3) break;
    local_4d0 = *(undefined8 *)(pFVar12 + 8);
    uStack_4c8 = CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar12 + 0x10) >> 0x20) ^ (uint)uVar5,
                          (uint)*(undefined8 *)(pFVar12 + 0x10) ^ uVar14);
    local_4c0 = *(undefined8 *)pFVar12;
    if (((local_4e0.Data <= (FScriptContainerElement *)&local_4d0) &&
        ((FScriptContainerElement *)&local_4d0 < local_4e0.Data + (longlong)iStack_4d4 * 0x18)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_4d8 == iStack_4d4) {
      local_4d8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4e0,&iStack_4d4);
    }
    lVar11 = (longlong)local_4d8;
    pFVar12 = pFVar12 + 0x18;
    local_4d8 = local_4d8 + 1;
    *(undefined8 *)(local_4e0.Data + lVar11 * 0x18) = local_4d0;
    *(undefined8 *)(local_4e0.Data + lVar11 * 0x18 + 8) = uStack_4c8;
    *(undefined8 *)(local_4e0.Data + lVar11 * 0x18 + 0x10) = local_4c0;
  }
  cv::Mat::Mat(&local_218,uVar2,1,0x16,local_4e0.Data,0);
  cv::Mat::Mat(&local_338);
  cv::Mat::Mat(&local_398);
  MakeObjectVectorsFromCameraPose(local_4a8,&local_338,&local_398);
  pMVar9 = cv::Mat::eye(&local_1b8,3,3,6);
  cv::Mat::Mat(&local_3f8);
  (**(code **)((longlong)*pMVar9->op + 0x10))(pMVar9->op,pMVar9,&local_3f8,0xffffffff);
  cv::Mat::~Mat(&local_1b8.c);
  cv::Mat::~Mat(&local_1b8.b);
  cv::Mat::~Mat(&local_1b8.a);
  *(double *)local_3f8.data = (local_4a0->field0_0x0)._s_0.X;
  *(double *)((longlong)local_3f8.data + *local_3f8.step.p + 8) = (local_4a0->field0_0x0)._s_0.Y;
  *(double *)((longlong)local_3f8.data + 0x10) = (param_3->field0_0x0)._s_0.X;
  *(double *)((longlong)local_3f8.data + *local_3f8.step.p + 0x10) = (param_3->field0_0x0)._s_0.Y;
  cv::Mat::Mat(&local_278,local_498->ArrayNum,1,5,(local_498->AllocatorInstance).Data,0);
  piVar1 = &param_6->ArrayMax;
  local_4b8 = 0;
  uStack_4b0 = 0;
  param_6->ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&param_6->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar2) {
    do {
      pFVar3 = (param_6->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_4b8) &&
          ((FScriptContainerElement *)&local_4b8 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar8 = param_6->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_6->AllocatorInstance,piVar1);
      }
      param_6->ArrayNum = iVar8 + 1;
      pFVar3 = (param_6->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar3 = local_4b8;
      *(undefined8 *)(pFVar3 + 8) = uStack_4b0;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  cv::Mat::Mat(&local_2d8,uVar2,1,0xe,(param_6->AllocatorInstance).Data,0);
  p_Var10 = cv::noArray();
  local_490._8_8_ = &local_2d8;
  local_480 = 0;
  local_478.obj = &local_278;
  local_490._0_4_ = 0x2010000;
  local_460.obj = &local_3f8;
  local_478.sz.width = 0;
  local_478.sz.height = 0;
  local_448.obj = &local_398;
  local_478.flags = 0x1010000;
  local_430.obj = &local_338;
  local_418.obj = &local_218;
  local_460.sz.width = 0;
  local_460.sz.height = 0;
  local_460.flags = 0x1010000;
  local_448.sz.width = 0;
  local_448.sz.height = 0;
  local_448.flags = 0x1010000;
  local_430.sz.width = 0;
  local_430.sz.height = 0;
  local_430.flags = 0x1010000;
  local_418.sz.width = 0;
  local_418.sz.height = 0;
  local_418.flags = 0x1010000;
  cv::projectPoints(&local_418,&local_430,&local_448,&local_460,&local_478,(_OutputArray *)local_490
                    ,(_OutputArray *)p_Var10,0.0);
  cv::Mat::~Mat(&local_2d8);
  cv::Mat::~Mat(&local_278);
  cv::Mat::~Mat(&local_3f8);
  cv::Mat::~Mat(&local_398);
  cv::Mat::~Mat(&local_338);
  cv::Mat::~Mat(&local_218);
  if (local_4e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.Data);
  }
  return true;
}

// SolvePnP @ 14d372bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FOpenCVHelper::SolvePnP
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,TTransform<double> *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  MatExpr *pMVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 auStackY_538 [32];
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined1 local_4e6 [6];
  ForAnyElementType local_4e0;
  undefined8 local_4d8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_4b0;
  TVector2<double> *local_4a8;
  TVector2<double> *local_4a0;
  TTransform<double> *local_498;
  undefined1 local_490 [16];
  undefined8 local_480;
  undefined1 local_478 [16];
  undefined8 local_468;
  _InputArray local_460;
  _InputArray local_448;
  _InputArray local_430;
  _InputArray local_418;
  Mat local_3f8;
  Mat local_398;
  Mat local_338;
  Mat local_2d8;
  Mat local_278;
  Mat local_218;
  MatExpr local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_538;
  iVar2 = param_1->ArrayNum;
  local_4d0 = param_5;
  local_498 = param_6;
  local_4b0 = param_2;
  local_4a8 = param_3;
  local_4a0 = param_4;
  if (param_2->ArrayNum != iVar2) {
    local_4e8 = 0;
    bVar7 = `FOpenCVHelper::SolvePnP'::__l3::<lambda_1>::operator()(&local_4e8);
    if (!bVar7) {
      return false;
    }
  }
  if (iVar2 < 6) {
    if ((byte)LogOpenCVHelper._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenCVHelper);
    return false;
  }
  uVar3 = local_4d0->ArrayNum;
  if ((uVar3 != 0) && ((0xe < uVar3 || ((0x5130U >> (uVar3 & 0x1f) & 1) == 0)))) {
    local_4e7 = 0;
    bVar7 = `FOpenCVHelper::SolvePnP'::__l27::<lambda_2>::operator()(&local_4e7);
    if (!bVar7) {
      return false;
    }
  }
  local_4d8 = 0;
  local_4e0.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar2,&local_4e0,0,(int *)((longlong)&local_4d8 + 4));
  iVar4 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar1 = pFVar11 + (longlong)iVar4 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_4e6[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_4e6);
    }
    if (pFVar11 == pFVar1) break;
    local_4c8 = *(undefined8 *)(pFVar11 + 8);
    uStack_4c0 = CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar11 + 0x10) >> 0x20) ^ (uint)uVar6,
                          (uint)*(undefined8 *)(pFVar11 + 0x10) ^ uVar12);
    local_4b8 = *(undefined8 *)pFVar11;
    if (((local_4e0.Data <= (FScriptContainerElement *)&local_4c8) &&
        ((FScriptContainerElement *)&local_4c8 < local_4e0.Data + (longlong)local_4d8._4_4_ * 0x18))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar9 = (int)local_4d8;
    if ((int)local_4d8 == local_4d8._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_4e0,(int *)((longlong)&local_4d8 + 4));
    }
    pFVar11 = pFVar11 + 0x18;
    local_4d8 = CONCAT44(local_4d8._4_4_,iVar9 + 1);
    *(undefined8 *)(local_4e0.Data + (longlong)iVar9 * 0x18) = local_4c8;
    *(undefined8 *)(local_4e0.Data + (longlong)iVar9 * 0x18 + 8) = uStack_4c0;
    *(undefined8 *)(local_4e0.Data + (longlong)iVar9 * 0x18 + 0x10) = local_4b8;
  }
  cv::Mat::Mat(&local_218,iVar2,1,0x16,local_4e0.Data,0);
  cv::Mat::Mat(&local_278,iVar2,1,0xd,(local_4b0->AllocatorInstance).Data,0);
  cv::Mat::Mat(&local_2d8,uVar3,1,5,(local_4d0->AllocatorInstance).Data,0);
  pMVar10 = cv::Mat::eye(&local_1b8,3,3,6);
  cv::Mat::Mat(&local_3f8);
  (**(code **)((longlong)*pMVar10->op + 0x10))(pMVar10->op,pMVar10,&local_3f8,0xffffffff);
  cv::Mat::~Mat(&local_1b8.c);
  cv::Mat::~Mat(&local_1b8.b);
  cv::Mat::~Mat(&local_1b8.a);
  *(double *)local_3f8.data = (local_4a8->field0_0x0)._s_0.X;
  *(double *)((longlong)local_3f8.data + *local_3f8.step.p + 8) = (local_4a8->field0_0x0)._s_0.Y;
  *(double *)((longlong)local_3f8.data + 0x10) = (local_4a0->field0_0x0)._s_0.X;
  *(double *)((longlong)local_3f8.data + *local_3f8.step.p + 0x10) = (local_4a0->field0_0x0)._s_0.Y;
  cv::Mat::Mat(&local_338);
  cv::Mat::Mat(&local_398);
  local_490._8_8_ = &local_398;
  local_480 = 0;
  local_478._8_8_ = &local_338;
  local_460.obj = &local_2d8;
  local_490._0_4_ = 0x2010000;
  local_468 = 0;
  local_478._0_4_ = 0x2010000;
  local_460.sz.width = 0;
  local_460.sz.height = 0;
  local_460.flags = 0x1010000;
  local_448.obj = &local_3f8;
  local_430.obj = &local_278;
  local_418.obj = &local_218;
  local_448.sz.width = 0;
  local_448.sz.height = 0;
  local_448.flags = 0x1010000;
  local_430.sz.width = 0;
  local_430.sz.height = 0;
  local_430.flags = 0x1010000;
  local_418.sz.width = 0;
  local_418.sz.height = 0;
  local_418.flags = 0x1010000;
  bVar7 = cv::solvePnP(&local_418,&local_430,&local_448,&local_460,(_OutputArray *)local_478,
                       (_OutputArray *)local_490,false,0);
  if (bVar7) {
    MakeCameraPoseFromObjectVectors(&local_338,&local_398,local_498);
  }
  cv::Mat::~Mat(&local_398);
  cv::Mat::~Mat(&local_338);
  cv::Mat::~Mat(&local_3f8);
  cv::Mat::~Mat(&local_2d8);
  cv::Mat::~Mat(&local_278);
  cv::Mat::~Mat(&local_218);
  if (local_4e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.Data);
    return bVar7;
  }
  return bVar7;
}

// TextureFromCvMat @ 14d373360

UTexture2D * __cdecl FOpenCVHelper::TextureFromCvMat(Mat *param_1,UTexture2D *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  EPixelFormat EVar4;
  bool bVar5;
  int iVar6;
  UTexture2D *pUVar7;
  FTexturePlatformData *pFVar8;
  void *_Dst;
  uint uVar9;
  EPixelFormat EVar10;
  
  if (param_2 == (UTexture2D *)0x0) {
    pUVar7 = TextureFromCvMat(param_1,(FString *)0x0,(FName *)0x0);
    return pUVar7;
  }
  iVar1 = param_1->cols;
  if (((iVar1 < 1) || (param_1->rows < 1)) || ((param_1->flags & 7U) != 0)) {
LAB_14d3734b8:
    pUVar7 = (UTexture2D *)0x0;
  }
  else {
    uVar9 = param_1->flags >> 3 & 0x1ff;
    if (uVar9 == 0) {
      EVar10 = PF_G8;
    }
    else {
      if (uVar9 != 3) goto LAB_14d3734b8;
      EVar10 = PF_B8G8R8A8;
    }
    iVar6 = UTexture2D::GetSizeX(param_2);
    if (((iVar6 == iVar1) &&
        (iVar1 = param_1->rows, iVar6 = UTexture2D::GetSizeY(param_2), iVar6 == iVar1)) &&
       (EVar4 = UTexture2D::GetPixelFormat(param_2,0), EVar4 == EVar10)) {
      pFVar8 = UTexture2D::GetPlatformData(param_2);
      if (((pFVar8->Mips).Array.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UTexture2D *)(*pcVar3)();
        return pUVar7;
      }
      lVar2 = *(longlong *)(pFVar8->Mips).Array.AllocatorInstance.Data;
      _Dst = FBulkData::Lock((FBulkData *)(lVar2 + 0x20),2);
      memcpy(_Dst,param_1->data,
             (ulonglong)((param_1->flags >> 3 & 0x1ffU) + 1) *
             (longlong)(param_1->cols * param_1->rows));
      FBulkData::Unlock((FBulkData *)(lVar2 + 0x20));
      (**(code **)(param_2->_padding_ + 0x328))(param_2);
      return param_2;
    }
    pUVar7 = TextureFromCvMat(param_1,(FString *)0x0,(FName *)0x0);
  }
  return pUVar7;
}

// TextureFromCvMat @ 14d3734e0

UTexture2D * __cdecl FOpenCVHelper::TextureFromCvMat(Mat *param_1,FString *param_2,FName *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UTexture2D *pUVar5;
  FTexturePlatformData *pFVar6;
  void *_Dst;
  uint uVar7;
  EPixelFormat EVar8;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  if (((0 < param_1->cols) && (0 < param_1->rows)) && ((param_1->flags & 7U) == 0)) {
    uVar7 = param_1->flags >> 3 & 0x1ff;
    if (uVar7 == 0) {
      EVar8 = PF_G8;
    }
    else {
      if (uVar7 != 3) {
        return (UTexture2D *)0x0;
      }
      EVar8 = PF_B8G8R8A8;
    }
    local_18.DataPtr = (uchar *)0x0;
    local_18.ArrayNum = 0;
    pUVar5 = UTexture2D::CreateTransient(param_1->cols,param_1->rows,EVar8,(FName)0x0,&local_18);
    if (pUVar5 != (UTexture2D *)0x0) {
      *(byte *)&pUVar5->_padding_ = (byte)pUVar5->_padding_ | 1;
      pbVar1 = (byte *)((longlong)&pUVar5->_padding_ + 6);
      *pbVar1 = *pbVar1 & 0xfe;
      if ((param_1->flags & 0xff8U) == 0) {
        *(undefined1 *)&pUVar5->_padding_ = 3;
      }
      pFVar6 = UTexture2D::GetPlatformData(pUVar5);
      if (((pFVar6->Mips).Array.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UTexture2D *)(*pcVar3)();
        return pUVar5;
      }
      lVar2 = *(longlong *)(pFVar6->Mips).Array.AllocatorInstance.Data;
      _Dst = FBulkData::Lock((FBulkData *)(lVar2 + 0x20),2);
      memcpy(_Dst,param_1->data,
             (ulonglong)((param_1->flags >> 3 & 0x1ffU) + 1) *
             (longlong)(param_1->rows * param_1->cols));
      FBulkData::Unlock((FBulkData *)(lVar2 + 0x20));
      (**(code **)(pUVar5->_padding_ + 0x328))(pUVar5);
      return pUVar5;
    }
  }
  return (UTexture2D *)0x0;
}

// UnitVectorFromAxisEnum @ 14d373650

TVector<double> * __cdecl FOpenCVHelper::UnitVectorFromAxisEnum(EAxis param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < UnitVectors.ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<double> *)(UnitVectors.AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
}

// operator() @ 15057a980

bool __thiscall `FOpenCVHelper::SolvePnP'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5720011606289546658>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5720011606289546658>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057aa00

bool __thiscall `FOpenCVHelper::SolvePnP'::__l27::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5720011606289546639>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5720011606289546639>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

