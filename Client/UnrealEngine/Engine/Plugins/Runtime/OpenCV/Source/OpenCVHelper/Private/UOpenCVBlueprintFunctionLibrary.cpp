// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 10

// StaticClass @ 14d36bd00

UClass * __cdecl UOpenCVBlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVHelper",L"OpenCVBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUOpenCVBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenCVBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UOpenCVBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton;
}

// UOpenCVBlueprintFunctionLibrary @ 14d36c750

UOpenCVBlueprintFunctionLibrary * __thiscall
UOpenCVBlueprintFunctionLibrary::UOpenCVBlueprintFunctionLibrary
          (UOpenCVBlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UOpenCVBlueprintFunctionLibrary__6B_;
  return this;
}

// UOpenCVBlueprintFunctionLibrary @ 14d36c780

UOpenCVBlueprintFunctionLibrary * __thiscall
UOpenCVBlueprintFunctionLibrary::UOpenCVBlueprintFunctionLibrary
          (UOpenCVBlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UOpenCVBlueprintFunctionLibrary__6B_;
  return this;
}

// ~UOpenCVBlueprintFunctionLibrary @ 14d36c940

void __thiscall
UOpenCVBlueprintFunctionLibrary::~UOpenCVBlueprintFunctionLibrary
          (UOpenCVBlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7UOpenCVBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14d36f6d0

UClass * __cdecl UOpenCVBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVHelper",L"OpenCVBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUOpenCVBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenCVBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UOpenCVBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton;
}

// OpenCVArucoDetectMarkers @ 14d370ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UOpenCVBlueprintFunctionLibrary::OpenCVArucoDetectMarkers
          (UTextureRenderTarget2D *param_1,EOpenCVArucoDictionary param_2,
          EOpenCVArucoDictionarySize param_3,bool param_4,bool param_5,float param_6,
          FOpenCVLensDistortionParametersBase *param_7,UTexture2D **param_8,
          TArray<FOpenCVArucoDetectedMarker,TSizedDefaultAllocator<32>_> *param_9)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  float *pfVar4;
  FOpenCVArucoDetectedMarker *pFVar5;
  code *pcVar6;
  longlong lVar7;
  Size_<int> SVar8;
  Size_<int> SVar9;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar10;
  float fVar11;
  double dVar12;
  __m128d _Var13;
  __m128d _Var14;
  __m128d _Var15;
  char cVar16;
  bool bVar17;
  int iVar18;
  FTextureRenderTargetResource *pFVar19;
  _InputArray *p_Var20;
  _InputArray *p_Var21;
  _InputOutputArray *p_Var22;
  MatExpr *pMVar23;
  Mat *pMVar24;
  UTexture2D *pUVar25;
  FStaticBasicLogRecord *pFVar26;
  void *pvVar27;
  PREDEFINED_DICTIONARY_NAME PVar28;
  Size_<int> SVar29;
  ulong64 uVar30;
  longlong *plVar31;
  float *pfVar32;
  longlong lVar33;
  ulonglong uVar34;
  PREDEFINED_DICTIONARY_NAME PVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar39;
  double dVar40;
  double dVar41;
  undefined1 auStackY_e28 [32];
  int local_dd8;
  int iStack_dd4;
  UTexture2D **local_dd0;
  longlong local_dc8;
  void *local_dc0;
  longlong lStack_db8;
  longlong local_db0;
  void *local_da8;
  undefined8 local_da0;
  undefined4 local_d98;
  undefined4 uStack_d94;
  undefined4 local_d90;
  undefined4 uStack_d8c;
  longlong local_d88;
  double local_d80;
  double dStack_d78;
  vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
  local_d70;
  vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_> local_d58;
  undefined8 local_d40;
  undefined4 uStack_d38;
  undefined4 uStack_d34;
  undefined2 local_d30;
  ushort uStack_d2e;
  undefined4 uStack_d2c;
  undefined4 uStack_d28;
  vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_> local_d20;
  _InputArray local_d08;
  undefined1 local_cf0 [16];
  undefined8 local_ce0;
  undefined1 local_cd8 [16];
  undefined8 local_cc8;
  _InputArray local_cc0;
  undefined1 local_ca8 [16];
  undefined8 local_c98;
  undefined1 local_c90 [16];
  undefined8 local_c80;
  _InputArray local_c78;
  undefined1 local_c60 [16];
  undefined8 local_c50;
  undefined1 local_c48 [16];
  undefined8 local_c38;
  _InputArray local_c30;
  _InputArray local_c18;
  _InputArray local_c00;
  undefined1 local_be8 [16];
  undefined8 local_bd8;
  _InputArray local_bd0;
  _InputArray local_bb8;
  _InputArray local_ba0;
  undefined1 local_b88 [16];
  undefined8 local_b78;
  _InputArray local_b70;
  _InputArray local_b58;
  undefined1 local_b40 [16];
  undefined8 local_b30;
  undefined1 local_b28 [16];
  undefined8 local_b18;
  TTransform<double> local_b08;
  undefined1 local_aa8 [16];
  undefined1 local_a98 [16];
  _InputArray local_a88;
  _InputArray local_a70;
  _InputArray local_a58;
  undefined8 local_a38;
  undefined8 uStack_a30;
  longlong local_a28;
  undefined4 local_a20;
  TMatrix<double> local_a18;
  undefined8 local_998;
  undefined8 uStack_990;
  Scalar_<double> local_988;
  TTransform<double> local_968;
  FOpenCVArucoDetectedMarker local_908;
  Mat local_888;
  Mat local_828;
  Mat local_7c8;
  Mat local_768;
  Mat local_708;
  Mat local_6a8;
  Mat local_648;
  MatExpr local_5e8;
  MatExpr local_488;
  MatExpr local_328;
  MatExpr local_1c8;
  ulonglong local_68;
  ulonglong uVar38;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_e28;
  local_dd0 = param_8;
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
      return 0;
    }
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
    return 0;
  }
  if ((param_5) && (param_6 <= 0.0)) {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
      return 0;
    }
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
    return 0;
  }
  if ((param_1->RenderTargetFormat).Value != '\x02') {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
      return 0;
    }
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
    return 0;
  }
  pFVar19 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                      ((UTextureRenderTarget *)param_1);
  iVar18 = 0;
  plVar31 = &pFVar19->_padding_;
  if (pFVar19 == (FTextureRenderTargetResource *)0x0) {
    plVar31 = (longlong *)0x0;
  }
  if (plVar31 == (longlong *)0x0) {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
      return 0;
    }
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
    return 0;
  }
  local_da8 = (void *)0x0;
  local_998 = 0;
  uStack_990 = 0;
  local_da0 = 0;
  local_d40 = 6;
  uStack_d38 = CONCAT31(uStack_d38._1_3_,1);
  uStack_d34 = 0x467a0000;
  uStack_a30 = CONCAT44(0x467a0000,uStack_d38);
  local_d30 = 0;
  uStack_d2c = 0;
  uStack_d28 = 0;
  local_a28 = (ulonglong)uStack_d2e << 0x10;
  local_a38 = 6;
  PVar35 = DICT_4X4_50;
  local_a20 = 0;
  cVar16 = (**(code **)(*plVar31 + 0x60))(plVar31,&local_da8,&local_a38,&local_998);
  if (cVar16 == '\0') {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) goto LAB_14d371ef9;
    pFVar26 = &::LOG_Static;
  }
  else {
    (**(code **)(*plVar31 + 0x28))(plVar31,&local_dd8);
    if (((0 < local_dd8) && (0 < iStack_dd4)) && ((int)local_da0 == iStack_dd4 * local_dd8)) {
      SVar29.height = iStack_dd4;
      SVar29.width = local_dd8;
      cv::Mat::Mat(&local_828,SVar29,0x18,local_da8,0);
      cv::Mat::Mat(&local_6a8);
      local_cd8._8_8_ = &local_6a8;
      local_cc8 = 0;
      local_cc0.obj = &local_828;
      local_cd8._0_4_ = 0x2010000;
      local_cc0.sz.width = 0;
      local_cc0.sz.height = 0;
      local_cc0.flags = 0x1010000;
      cv::cvtColor(&local_cc0,(_OutputArray *)local_cd8,0xb,0);
      PVar28 = DICT_ARUCO_ORIGINAL;
      if (param_2 == Dict4x4) {
        if (param_3 != DictSize50) {
          if (param_3 == DictSize100) {
            PVar35 = DICT_4X4_100;
          }
          else if (param_3 == DictSize250) {
            PVar35 = DICT_4X4_250;
          }
          else {
            PVar35 = PVar28;
            if (param_3 == DictSize1000) {
              PVar35 = DICT_4X4_1000;
            }
          }
        }
      }
      else if (param_2 == Dict5x5) {
        if (param_3 == DictSize50) {
          PVar35 = DICT_5X5_50;
        }
        else if (param_3 == DictSize100) {
          PVar35 = DICT_5X5_100;
        }
        else if (param_3 == DictSize250) {
          PVar35 = DICT_5X5_250;
        }
        else {
          PVar35 = PVar28;
          if (param_3 == DictSize1000) {
            PVar35 = DICT_5X5_1000;
          }
        }
      }
      else if (param_2 == Dict6x6) {
        if (param_3 == DictSize50) {
          PVar35 = DICT_6X6_50;
        }
        else if (param_3 == DictSize100) {
          PVar35 = DICT_6X6_100;
        }
        else if (param_3 == DictSize250) {
          PVar35 = DICT_6X6_250;
        }
        else {
          PVar35 = PVar28;
          if (param_3 == DictSize1000) {
            PVar35 = DICT_6X6_1000;
          }
        }
      }
      else {
        PVar35 = PVar28;
        if (param_2 == Dict7x7) {
          if (param_3 == DictSize50) {
            PVar35 = DICT_7X7_50;
          }
          else if (param_3 == DictSize100) {
            PVar35 = DICT_7X7_100;
          }
          else if (param_3 == DictSize250) {
            PVar35 = DICT_7X7_250;
          }
          else if (param_3 == DictSize1000) {
            PVar35 = DICT_7X7_1000;
          }
        }
      }
      cv::aruco::getPredefinedDictionary((Ptr<cv::aruco::Dictionary> *)local_a98,PVar35);
      local_db0 = 0;
      local_d70._Mypair._Myval2._Myend =
           (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
      local_dc0 = (void *)0x0;
      lStack_db8 = 0;
      local_d70._Mypair._Myval2._Myfirst =
           (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
      local_d70._Mypair._Myval2._Mylast =
           (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
      cv::aruco::DetectorParameters::create((Ptr<cv::aruco::DetectorParameters> *)local_aa8);
      p_Var20 = (_InputArray *)cv::noArray();
      p_Var21 = (_InputArray *)cv::noArray();
      p_Var22 = cv::noArray();
      local_ca8._8_8_ = &local_dc0;
      local_c90._8_8_ = &local_d70;
      local_c78.obj = &local_6a8;
      local_c98 = 0;
      local_ca8._0_4_ = 0x82030004;
      local_c80 = 0;
      local_c90._0_4_ = 0x8204000d;
      local_c78.sz.width = 0;
      local_c78.sz.height = 0;
      local_c78.flags = 0x1010000;
      cv::aruco::detectMarkers
                (&local_c78,(Ptr<cv::aruco::Dictionary> *)local_a98,(_OutputArray *)local_c90,
                 (_OutputArray *)local_ca8,(Ptr<cv::aruco::DetectorParameters> *)local_aa8,
                 (_OutputArray *)p_Var22,p_Var21,p_Var20);
      lVar33 = lStack_db8 - (longlong)local_dc0 >> 2;
      local_d88 = lVar33;
      if (0 < (int)lVar33) {
        lVar37 = (longlong)(int)lVar33;
        pvVar10 = local_d70._Mypair._Myval2._Myfirst;
        local_dc8 = lVar37;
        if (lVar37 == ((longlong)local_d70._Mypair._Myval2._Mylast -
                      (longlong)local_d70._Mypair._Myval2._Myfirst) / 0x18) {
          for (; pvVar10 != local_d70._Mypair._Myval2._Mylast; pvVar10 = pvVar10 + 1) {
            if (((longlong)(pvVar10->_Mypair)._Myval2._Mylast -
                 (longlong)(pvVar10->_Mypair)._Myval2._Myfirst & 0xfffffffffffffff8U) != 0x20) {
              if (1 < (byte)LogOpenCVBlueprintFunctionLibrary._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
              }
              goto LAB_14d3714f4;
            }
          }
          local_d58._Mypair._Myval2._Myend = (Vec<double,3> *)0x0;
          local_d20._Mypair._Myval2._Myend = (Vec<double,3> *)0x0;
          local_d58._Mypair._Myval2._Myfirst = (Vec<double,3> *)0x0;
          local_d58._Mypair._Myval2._Mylast = (Vec<double,3> *)0x0;
          local_d20._Mypair._Myval2._Myfirst = (Vec<double,3> *)0x0;
          local_d20._Mypair._Myval2._Mylast = (Vec<double,3> *)0x0;
          pMVar23 = cv::Mat::eye(&local_5e8,3,3,6);
          cv::Mat::Mat(&local_708);
          (**(code **)((longlong)*pMVar23->op + 0x10))(pMVar23->op,pMVar23,&local_708,0xffffffff);
          cv::Mat::~Mat(&local_5e8.c);
          cv::Mat::~Mat(&local_5e8.b);
          cv::Mat::~Mat(&local_5e8.a);
          pMVar23 = cv::Mat::zeros(&local_488,1,8,6);
          cv::Mat::Mat(&local_768);
          (**(code **)((longlong)*pMVar23->op + 0x10))(pMVar23->op,pMVar23);
          cv::Mat::~Mat(&local_488.c);
          cv::Mat::~Mat(&local_488.b);
          cv::Mat::~Mat(&local_488.a);
          if (param_5) {
            dVar40 = (double)local_dd8;
            dVar41 = (double)iStack_dd4;
            pMVar23 = cv::Mat::eye(&local_328,3,3,6);
            cv::Mat::Mat(&local_888);
            (**(code **)((longlong)*pMVar23->op + 0x10))(pMVar23->op,pMVar23,&local_888,0xffffffff);
            cv::Mat::~Mat(&local_328.c);
            cv::Mat::~Mat(&local_328.b);
            cv::Mat::~Mat(&local_328.a);
            *(double *)local_888.data = dVar40 * (param_7->F).field0_0x0._s_0.X;
            *(double *)((longlong)local_888.data + *local_888.step.p + 8) =
                 dVar41 * (param_7->F).field0_0x0._s_0.Y;
            *(double *)((longlong)local_888.data + 0x10) = dVar40 * (param_7->C).field0_0x0._s_0.X;
            *(double *)((longlong)local_888.data + *local_888.step.p + 0x10) =
                 dVar41 * (param_7->C).field0_0x0._s_0.Y;
            cv::Mat::operator=(&local_708,&local_888);
            cv::Mat::~Mat(&local_888);
            pMVar24 = FOpenCVLensDistortionParametersBase::ConvertToOpenCVDistortionCoefficients
                                (param_7,&local_648);
            cv::Mat::operator=(&local_768,pMVar24);
            cv::Mat::~Mat(&local_648);
            p_Var22 = cv::noArray();
            local_c60._0_4_ = 0x82030016;
            local_c60._8_8_ = &local_d20;
            local_c50 = 0;
            local_c48._8_8_ = &local_d58;
            local_c30.obj = &local_768;
            local_c18.obj = &local_708;
            local_c00.obj = &local_d70;
            local_c38 = 0;
            local_c48._0_4_ = 0x82030016;
            local_c30.sz.width = 0;
            local_c30.sz.height = 0;
            local_c30.flags = 0x1010000;
            local_c18.sz.width = 0;
            local_c18.sz.height = 0;
            local_c18.flags = 0x1010000;
            local_c00.sz.width = 0;
            local_c00.sz.height = 0;
            local_c00.flags = -0x7efbfff3;
            cv::aruco::estimatePoseSingleMarkers
                      (&local_c00,param_6,&local_c18,&local_c30,(_OutputArray *)local_c48,
                       (_OutputArray *)local_c60,(_OutputArray *)p_Var22);
          }
          uVar39 = 0;
          if (param_4) {
            local_be8._8_8_ = &local_828;
            local_bd8 = 0;
            local_bd0.obj = &local_828;
            local_be8._0_4_ = 0x2010000;
            local_bd0.sz.width = 0;
            local_bd0.sz.height = 0;
            local_bd0.flags = 0x1010000;
            cv::cvtColor(&local_bd0,(_OutputArray *)local_be8,1,0);
            local_bb8.obj = &local_dc0;
            local_ba0.obj = &local_d70;
            local_bb8.sz.width = 0;
            local_bb8.sz.height = 0;
            local_b88._8_8_ = &local_828;
            local_bb8.flags = -0x7efcfffc;
            local_988._0_8_ = ___xmm_406fe000000000000000000000000000;
            local_988._8_8_ = _UNK_152b00168;
            local_ba0.sz.width = 0;
            local_ba0.sz.height = 0;
            local_988._16_8_ = ___xmm_0000000000000000406fe00000000000;
            local_988._24_8_ = _UNK_152b00148;
            local_ba0.flags = -0x7efbfff3;
            local_b78 = 0;
            local_b88._0_4_ = 0x3010000;
            cv::aruco::drawDetectedMarkers
                      ((_InputOutputArray *)local_b88,&local_ba0,&local_bb8,&local_988);
            fVar11 = __real_3d4ccccd;
            if ((param_5) &&
               (lVar7 = (longlong)local_d58._Mypair._Myval2._Mylast -
                        (longlong)local_d58._Mypair._Myval2._Myfirst >> 0x3f, lVar37 = local_dc8,
               ((longlong)local_d58._Mypair._Myval2._Mylast -
               (longlong)local_d58._Mypair._Myval2._Myfirst) / 0x18 + lVar7 != lVar7)) {
              local_d98 = 1;
              uStack_d94 = 3;
              SVar8.width = 1;
              SVar8.height = 3;
              local_d90 = 1;
              uStack_d8c = 3;
              SVar9.width = 1;
              SVar9.height = 3;
              uVar34 = uVar39;
              uVar38 = uVar39;
              do {
                local_a88.flags = -0x3efdfffa;
                local_a88.obj = local_d20._Mypair._Myval2._Myfirst + uVar34;
                local_a70.flags = -0x3efdfffa;
                local_a70.obj = local_d58._Mypair._Myval2._Myfirst + uVar34;
                local_b70.obj = &local_768;
                local_b58.obj = &local_708;
                local_b70.sz.width = 0;
                local_b70.sz.height = 0;
                local_b40._8_8_ = &local_828;
                local_b70.flags = 0x1010000;
                local_b58.sz.width = 0;
                local_b58.sz.height = 0;
                local_b58.flags = 0x1010000;
                local_b30 = 0;
                local_b40._0_4_ = 0x3010000;
                local_a88.sz = SVar8;
                local_a70.sz = SVar9;
                cv::aruco::drawAxis((_InputOutputArray *)local_b40,&local_b58,&local_b70,&local_a70,
                                    &local_a88,fVar11);
                uVar36 = (int)uVar38 + 1;
                uVar38 = (ulonglong)uVar36;
                uVar34 = (ulonglong)(int)uVar36;
                lVar33 = local_d88;
                lVar37 = local_dc8;
              } while (uVar34 < (ulonglong)
                                (((longlong)local_d58._Mypair._Myval2._Mylast -
                                 (longlong)local_d58._Mypair._Myval2._Myfirst) / 0x18));
            }
            local_b28._8_8_ = &local_828;
            local_b18 = 0;
            local_d08.obj = &local_828;
            local_b28._0_4_ = 0x2010000;
            local_d08.sz.width = 0;
            local_d08.sz.height = 0;
            local_d08.flags = 0x1010000;
            cv::cvtColor(&local_d08,(_OutputArray *)local_b28,0,0);
            pUVar25 = FOpenCVHelper::TextureFromCvMat(&local_828,(FString *)0x0,(FName *)0x0);
            *local_dd0 = pUVar25;
          }
          piVar1 = &param_9->ArrayMax;
          if (param_9->ArrayMax < (int)lVar33) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,(int)lVar33,&param_9->AllocatorInstance,param_9->ArrayNum,piVar1);
          }
          dVar12 = _UNK_1512468d8;
          dVar41 = ___xmm_40590000000000004059000000000000;
          dVar40 = __real_3ff0000000000000;
          uVar34 = uVar39;
          if (0 < lVar37) {
            do {
              local_908.Corners.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_908.Corners.ArrayNum = 0;
              local_908.Corners.ArrayMax = 0;
              local_908.Pose.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_908.Pose.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_908.Pose.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_908.Pose.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_908.Pose.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_908.Pose.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_908.Pose.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_908.Pose.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_908.Pose.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_908.Pose.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_908.Pose.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_908.Pose.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_908.Id = *(int *)((longlong)local_dc0 + uVar39 * 4);
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,4,&local_908.Corners.AllocatorInstance,0,&local_908.Corners.ArrayMax
                        );
              pfVar4 = *(float **)
                        ((longlong)&((local_d70._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Mylast
                        + uVar34);
              for (pfVar32 = *(float **)
                              ((longlong)
                               &((local_d70._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myfirst +
                              uVar34); pfVar32 != pfVar4; pfVar32 = pfVar32 + 2) {
                local_d80 = (double)(*pfVar32 / (float)local_dd8);
                dStack_d78 = (double)(pfVar32[1] / (float)iStack_dd4);
                if (((local_908.Corners.AllocatorInstance.Data <=
                      (FScriptContainerElement *)&local_d80) &&
                    ((FScriptContainerElement *)&local_d80 <
                     local_908.Corners.AllocatorInstance.Data +
                     (longlong)local_908.Corners.ArrayMax * 0x10)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  iVar18 = (*pcVar6)();
                  return iVar18;
                }
                iVar18 = local_908.Corners.ArrayNum;
                if (local_908.Corners.ArrayNum == local_908.Corners.ArrayMax) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_908.Corners.AllocatorInstance,
                                      &local_908.Corners.ArrayMax);
                }
                local_908.Corners.ArrayNum = iVar18 + 1;
                *(double *)(local_908.Corners.AllocatorInstance.Data + (longlong)iVar18 * 0x10) =
                     local_d80;
                *(double *)(local_908.Corners.AllocatorInstance.Data + (longlong)iVar18 * 0x10 + 8)
                     = dStack_d78;
              }
              local_b08.Translation.ZW.m128d_f64[0]._0_4_ =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
              local_b08.Translation.ZW.m128d_f64[0]._4_4_ =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
              local_b08.Translation.ZW.m128d_f64[1]._0_4_ =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
              local_b08.Translation.ZW.m128d_f64[1]._4_4_ =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
              local_b08.Scale3D.XY.m128d_f64[0]._0_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
              local_b08.Scale3D.XY.m128d_f64[0]._4_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
              local_b08.Scale3D.XY.m128d_f64[1]._0_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
              local_b08.Scale3D.XY.m128d_f64[1]._4_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
              local_b08.Scale3D.ZW.m128d_f64[0]._0_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
              local_b08.Scale3D.ZW.m128d_f64[0]._4_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
              local_b08.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
              local_b08.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
              local_b08.Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              local_b08.Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              local_b08.Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              _Var13.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              _Var14.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              _Var15.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              if (param_5) {
                local_b08.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                local_b08.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_b08.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                pMVar23 = cv::Mat::eye(&local_1c8,3,3,6);
                cv::Mat::Mat(&local_7c8);
                (**(code **)((longlong)*pMVar23->op + 0x10))
                          (pMVar23->op,pMVar23,&local_7c8,0xffffffff);
                cv::Mat::~Mat(&local_1c8.c);
                cv::Mat::~Mat(&local_1c8.b);
                cv::Mat::~Mat(&local_1c8.a);
                p_Var22 = cv::noArray();
                local_cf0._8_8_ = &local_7c8;
                local_a58.obj = &(local_d58._Mypair._Myval2._Myfirst)->field_0x0 + uVar34;
                local_dd0 = (UTexture2D **)0x300000001;
                local_a58.sz.width = 1;
                local_a58.sz.height = 3;
                local_ce0 = 0;
                local_cf0._0_4_ = 0x2010000;
                local_a58.flags = -0x3efdfffa;
                cv::Rodrigues(&local_a58,(_OutputArray *)local_cf0,(_OutputArray *)p_Var22);
                local_a18.M[0][3] = 0.0;
                local_a18.M[1][3] = 0.0;
                local_a18.M[0][0] = *(double *)local_7c8.data;
                local_a18.M[0][1] = *(double *)((longlong)local_7c8.data + 8);
                uVar30 = *local_7c8.step.p;
                local_a18.M[0][2] = *(double *)((longlong)local_7c8.data + 0x10);
                local_a18.M[1][0] = *(double *)((longlong)local_7c8.data + uVar30);
                local_a18.M[1][1] = ((double *)((longlong)local_7c8.data + uVar30))[1];
                local_a18.M[1][2] = *(double *)((longlong)local_7c8.data + uVar30 + 0x10);
                pdVar2 = (double *)((longlong)local_7c8.data + uVar30 * 2);
                local_a18.M[2][0] = *pdVar2;
                local_a18.M[2][1] = pdVar2[1];
                local_a18.M[3][0] =
                     *(double *)(&(local_d20._Mypair._Myval2._Myfirst)->field_0x0 + uVar34) * dVar41
                ;
                local_a18.M[3][1] =
                     *(double *)
                      ((longlong)(&(local_d20._Mypair._Myval2._Myfirst)->field_0x0 + uVar34) + 8) *
                     dVar12;
                local_a18.M[2][2] = *(double *)((longlong)local_7c8.data + uVar30 * 2 + 0x10);
                local_a18.M[3][2] =
                     *(double *)(&(local_d20._Mypair._Myval2._Myfirst)->field_0x10 + uVar34) *
                     dVar41;
                local_a18.M[2][3] = 0.0;
                local_a18.M[3][3] = dVar40;
                UE::Math::TTransform<double>::SetFromMatrix(&local_968,&local_a18);
                local_b08.Rotation.XY.m128d_f64[1] = local_968.Rotation.XY.m128d_f64[1];
                local_b08.Rotation.XY.m128d_f64[0] = local_968.Rotation.XY.m128d_f64[0];
                local_b08.Rotation.ZW.m128d_f64[1] = local_968.Rotation.ZW.m128d_f64[1];
                local_b08.Rotation.ZW.m128d_f64[0] = local_968.Rotation.ZW.m128d_f64[0];
                local_b08.Translation.XY.m128d_f64[1] = local_968.Translation.XY.m128d_f64[1];
                local_b08.Translation.XY.m128d_f64[0] = local_968.Translation.XY.m128d_f64[0];
                local_b08.Translation.ZW.m128d_f64[1] = local_968.Translation.ZW.m128d_f64[1];
                local_b08.Translation.ZW.m128d_f64[0] = local_968.Translation.ZW.m128d_f64[0];
                local_b08.Scale3D.XY.m128d_f64[1] = local_968.Scale3D.XY.m128d_f64[1];
                local_b08.Scale3D.XY.m128d_f64[0] = local_968.Scale3D.XY.m128d_f64[0];
                local_b08.Scale3D.ZW.m128d_f64[1] = local_968.Scale3D.ZW.m128d_f64[1];
                local_b08.Scale3D.ZW.m128d_f64[0] = local_968.Scale3D.ZW.m128d_f64[0];
                FOpenCVHelper::ConvertCoordinateSystem(&local_b08,Z,X,Yn);
                cv::Mat::~Mat(&local_7c8);
                _Var13.m128d_f64 = local_b08.Translation.ZW.m128d_f64;
                _Var14.m128d_f64 = local_b08.Scale3D.XY.m128d_f64;
                _Var15.m128d_f64 = local_b08.Scale3D.ZW.m128d_f64;
              }
              local_b08.Scale3D.ZW.m128d_f64 = _Var15.m128d_f64;
              local_b08.Scale3D.XY.m128d_f64 = _Var14.m128d_f64;
              local_b08.Translation.ZW.m128d_f64 = _Var13.m128d_f64;
              pFVar5 = (FOpenCVArucoDetectedMarker *)(param_9->AllocatorInstance).Data;
              local_908.Pose.Translation.ZW.m128d_f64[0] =
                   (double)CONCAT44(local_b08.Translation.ZW.m128d_f64[0]._4_4_,
                                    local_b08.Translation.ZW.m128d_f64[0]._0_4_);
              local_908.Pose.Translation.ZW.m128d_f64[1] =
                   (double)CONCAT44(local_b08.Translation.ZW.m128d_f64[1]._4_4_,
                                    local_b08.Translation.ZW.m128d_f64[1]._0_4_);
              local_908.Pose.Scale3D.XY.m128d_f64[0] =
                   (double)CONCAT44(local_b08.Scale3D.XY.m128d_f64[0]._4_4_,
                                    local_b08.Scale3D.XY.m128d_f64[0]._0_4_);
              local_908.Pose.Scale3D.XY.m128d_f64[1] =
                   (double)CONCAT44(local_b08.Scale3D.XY.m128d_f64[1]._4_4_,
                                    local_b08.Scale3D.XY.m128d_f64[1]._0_4_);
              local_908.Pose.Scale3D.ZW.m128d_f64[0] =
                   (double)CONCAT44(local_b08.Scale3D.ZW.m128d_f64[0]._4_4_,
                                    local_b08.Scale3D.ZW.m128d_f64[0]._0_4_);
              local_908.Pose.Scale3D.ZW.m128d_f64[1] =
                   (double)CONCAT44(local_b08.Scale3D.ZW.m128d_f64[1]._4_4_,
                                    local_b08.Scale3D.ZW.m128d_f64[1]._0_4_);
              local_908.Pose.Rotation.XY.m128d_f64 = local_b08.Rotation.XY.m128d_f64;
              local_908.Pose.Rotation.ZW.m128d_f64 = local_b08.Rotation.ZW.m128d_f64;
              local_908.Pose.Translation.XY.m128d_f64 = local_b08.Translation.XY.m128d_f64;
              if (((pFVar5 <= &local_908) && (&local_908 < pFVar5 + *piVar1)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar6 = (code *)swi(3);
                iVar18 = (*pcVar6)();
                return iVar18;
              }
              iVar18 = param_9->ArrayNum;
              if (iVar18 == *piVar1) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1080,&param_9->AllocatorInstance,piVar1);
              }
              param_9->ArrayNum = iVar18 + 1;
              FOpenCVArucoDetectedMarker::FOpenCVArucoDetectedMarker
                        ((FOpenCVArucoDetectedMarker *)
                         ((param_9->AllocatorInstance).Data + (longlong)iVar18 * 0x80),&local_908);
              if (local_908.Corners.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_908.Corners.AllocatorInstance.Data);
              }
              uVar39 = uVar39 + 1;
              lVar33 = local_d88;
              uVar34 = uVar34 + 0x18;
            } while ((longlong)uVar39 < local_dc8);
          }
          cv::Mat::~Mat(&local_768);
          cv::Mat::~Mat(&local_708);
          std::vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_>::
          ~vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_>(&local_d20);
          std::vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_>::
          ~vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_>(&local_d58);
        }
        else if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
LAB_14d3714f4:
          lVar33 = 0;
        }
        else {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
          lVar33 = 0;
        }
      }
      iVar18 = (int)lVar33;
      if ((longlong *)local_aa8._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar31 = (longlong *)(local_aa8._8_8_ + 8);
        lVar33 = *plVar31;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)lVar33 == 1) {
          (*(code *)**(undefined8 **)local_aa8._8_8_)(local_aa8._8_8_);
          LOCK();
          piVar1 = (int *)(local_aa8._8_8_ + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)local_aa8._8_8_ + 8))(local_aa8._8_8_);
          }
        }
      }
      std::
      vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
      ::
      ~vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
                (&local_d70);
      if (local_dc0 != (void *)0x0) {
        uVar30 = local_db0 - (longlong)local_dc0 & 0xfffffffffffffffc;
        pvVar27 = local_dc0;
        if (0xfff < uVar30) {
          pvVar27 = *(void **)((longlong)local_dc0 + -8);
          uVar30 = uVar30 + 0x27;
          if (0x1f < (ulonglong)((longlong)local_dc0 + (-8 - (longlong)pvVar27))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar27,uVar30);
        local_db0 = 0;
        local_dc0 = (void *)0x0;
        lStack_db8 = 0;
      }
      if ((longlong *)local_a98._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar31 = (longlong *)(local_a98._8_8_ + 8);
        lVar33 = *plVar31;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)lVar33 == 1) {
          (*(code *)**(undefined8 **)local_a98._8_8_)(local_a98._8_8_);
          LOCK();
          piVar1 = (int *)(local_a98._8_8_ + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)local_a98._8_8_ + 8))(local_a98._8_8_);
          }
        }
      }
      cv::Mat::~Mat(&local_6a8);
      cv::Mat::~Mat(&local_828);
      goto LAB_14d371ef9;
    }
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) goto LAB_14d371ef9;
    pFVar26 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar26,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
LAB_14d371ef9:
  if (local_da8 != (void *)0x0) {
    FMemory::Free(local_da8);
    return iVar18;
  }
  return iVar18;
}

// OpenCVChessboardDetectCorners @ 14d371f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UOpenCVBlueprintFunctionLibrary::OpenCVChessboardDetectCorners
          (UTextureRenderTarget2D *param_1,TIntPoint<int> param_2,bool param_3,UTexture2D **param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FTextureRenderTargetResource *pFVar11;
  UTexture2D *pUVar12;
  FStaticBasicLogRecord *pFVar13;
  Size_<int> SVar14;
  ulong64 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined1 auStackY_2b8 [32];
  undefined8 *local_268;
  undefined8 *puStack_260;
  longlong local_258;
  void *local_250;
  undefined8 local_248;
  int local_240;
  int iStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined2 local_228;
  ushort uStack_226;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined1 local_218 [16];
  TermCriteria local_208;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  _InputArray local_1e0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  _InputArray local_1b0;
  _InputArray local_198;
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  _InputArray local_150;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  Mat local_108;
  Mat local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
      return 0;
    }
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
    return 0;
  }
  if ((param_1->RenderTargetFormat).Value != '\x02') {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
      return 0;
    }
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
    return 0;
  }
  pFVar11 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                      ((UTextureRenderTarget *)param_1);
  iVar9 = 0;
  plVar17 = &pFVar11->_padding_;
  if (pFVar11 == (FTextureRenderTargetResource *)0x0) {
    plVar17 = (longlong *)0x0;
  }
  if (plVar17 == (longlong *)0x0) {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) {
      return 0;
    }
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
    return 0;
  }
  local_250 = (void *)0x0;
  local_118 = 0;
  uStack_110 = 0;
  local_248 = 0;
  local_238 = 6;
  uStack_230 = CONCAT31(uStack_230._1_3_,1);
  uStack_22c = 0x467a0000;
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  local_128 = (ulonglong)uStack_226 << 0x10;
  local_138 = 6;
  uStack_134 = 0;
  uStack_130 = uStack_230;
  uStack_12c = 0x467a0000;
  local_120 = 0;
  cVar7 = (**(code **)(*plVar17 + 0x60))(plVar17,&local_250,&local_138,&local_118);
  if (cVar7 == '\0') {
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) goto LAB_14d372448;
    pFVar13 = &::LOG_Static;
  }
  else {
    (**(code **)(*plVar17 + 0x28))(plVar17,&local_240);
    if (((0 < local_240) && (0 < iStack_23c)) && ((int)local_248 == iStack_23c * local_240)) {
      SVar14.height = iStack_23c;
      SVar14.width = local_240;
      cv::Mat::Mat(&local_a8,SVar14,0x18,local_250,0);
      cv::Mat::Mat(&local_108);
      local_1f8._8_8_ = &local_108;
      local_1e8 = 0;
      local_1e0.obj = &local_a8;
      local_1f8._0_4_ = 0x2010000;
      local_1e0.sz.width = 0;
      local_1e0.sz.height = 0;
      local_1e0.flags = 0x1010000;
      cv::cvtColor(&local_1e0,(_OutputArray *)local_1f8,0xb,0);
      local_1c8._8_8_ = &local_268;
      local_258 = 0;
      local_1b0.obj = &local_108;
      local_1b8 = 0;
      local_1c8._0_4_ = 0x8203000d;
      local_268 = (undefined8 *)0x0;
      puStack_260 = (undefined8 *)0x0;
      local_1b0.sz.width = 0;
      local_1b0.sz.height = 0;
      local_1b0.flags = 0x1010000;
      bVar8 = cv::findChessboardCorners
                        (&local_1b0,(Size_<int>)param_2.field0_0x0,(_OutputArray *)local_1c8,0xb);
      uVar18 = (longlong)puStack_260 - (longlong)local_268 >> 3;
      iVar9 = (int)uVar18;
      if (param_3) {
        local_198.obj = &local_268;
        local_198.flags = -0x7efcfff3;
        local_180._8_8_ = &local_a8;
        local_180._0_4_ = 0x3010000;
        local_198.sz.width = 0;
        local_198.sz.height = 0;
        local_170 = 0;
        cv::drawChessboardCorners
                  ((_InputOutputArray *)local_180,(Size_<int>)param_2.field0_0x0,&local_198,bVar8);
        pUVar12 = FOpenCVHelper::TextureFromCvMat(&local_a8,(FString *)0x0,(FName *)0x0);
        *param_4 = pUVar12;
      }
      if (bVar8) {
        local_168._8_8_ = &local_268;
        local_150.obj = &local_108;
        local_208.epsilon = __real_3f50624dd2f1a9fc;
        local_158 = 0;
        local_168._0_4_ = 0x8303000d;
        local_150.sz.width = 0;
        local_150.sz.height = 0;
        local_150.flags = 0x1010000;
        local_208.type = 3;
        local_208.maxCount = 0x1e;
        cv::cornerSubPix(&local_150,(_InputOutputArray *)local_168,(Size_<int>)0xb0000000b,
                         (Size_<int>)0xffffffffffffffff,&local_208);
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar18 & 0xffffffff);
        }
        piVar1 = &param_5->ArrayMax;
        puVar16 = local_268;
        puVar5 = puStack_260;
        if (param_5->ArrayMax < iVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar9,&param_5->AllocatorInstance,param_5->ArrayNum,piVar1);
          puVar16 = local_268;
          puVar5 = puStack_260;
        }
        for (; puVar6 = puStack_260, bVar8 = puVar16 != puStack_260, puStack_260 = puVar5, bVar8;
            puVar16 = puVar16 + 1) {
          dVar4 = (double)(float)((ulonglong)*puVar16 >> 0x20);
          pFVar2 = (param_5->AllocatorInstance).Data;
          local_218._8_4_ = SUB84(dVar4,0);
          local_218._0_8_ = (double)(float)*puVar16;
          local_218._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          if (((pFVar2 <= (FScriptContainerElement *)local_218) &&
              ((FScriptContainerElement *)local_218 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            iVar9 = (*pcVar3)();
            return iVar9;
          }
          iVar10 = param_5->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_5->AllocatorInstance,piVar1);
          }
          param_5->ArrayNum = iVar10 + 1;
          pFVar2 = (param_5->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(undefined8 *)pFVar2 = local_218._0_8_;
          *(undefined8 *)(pFVar2 + 8) = local_218._8_8_;
          puVar5 = puStack_260;
          puStack_260 = puVar6;
        }
      }
      if (local_268 != (undefined8 *)0x0) {
        uVar15 = local_258 - (longlong)local_268 & 0xfffffffffffffff8;
        puVar16 = local_268;
        if (0xfff < uVar15) {
          puVar16 = (undefined8 *)local_268[-1];
          uVar15 = uVar15 + 0x27;
          if (0x1f < (ulonglong)((longlong)local_268 + (-8 - (longlong)puVar16))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(puVar16,uVar15);
        local_258 = 0;
        local_268 = (undefined8 *)0x0;
        puStack_260 = (undefined8 *)0x0;
      }
      cv::Mat::~Mat(&local_108);
      cv::Mat::~Mat(&local_a8);
      goto LAB_14d372448;
    }
    if ((byte)LogOpenCVBlueprintFunctionLibrary._0_1_ < 2) goto LAB_14d372448;
    pFVar13 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar13,(FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
LAB_14d372448:
  if (local_250 != (void *)0x0) {
    FMemory::Free(local_250);
    return iVar9;
  }
  return iVar9;
}

// StaticRegisterNativesUOpenCVBlueprintFunctionLibrary @ 14d373320

void __cdecl
UOpenCVBlueprintFunctionLibrary::StaticRegisterNativesUOpenCVBlueprintFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOpenCVArucoDetectMarkers @ 14d373b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UOpenCVBlueprintFunctionLibrary::execOpenCVArucoDetectMarkers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FOpenCVLensDistortionParametersBase *pFVar1;
  FProperty *pFVar2;
  int iVar3;
  TArray<FOpenCVArucoDetectedMarker,TSizedDefaultAllocator<32>_> *pTVar4;
  UTexture2D **ppUVar5;
  FOpenCVLensDistortionParametersBase *pFVar6;
  bool bVar7;
  bool bVar8;
  EOpenCVArucoDictionarySize local_res10 [8];
  EOpenCVArucoDictionary local_res18 [8];
  int local_res20 [2];
  int local_b8;
  float local_b4;
  TArray<FOpenCVArucoDetectedMarker,TSizedDefaultAllocator<32>_> local_b0;
  UTexture2D *local_a0;
  UTextureRenderTarget2D *local_98 [2];
  FOpenCVLensDistortionParametersBase local_88;
  
  local_98[0] = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res18[0] = Dict4x4;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = DictSize50;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar7 = local_res20[0] != 0;
  local_b8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  bVar8 = local_b8 != 0;
  local_b4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  local_88.K1 = 0.0;
  local_88.K2 = 0.0;
  local_88.P1 = 0.0;
  local_88.P2 = 0.0;
  local_88.K3 = 0.0;
  local_88.K4 = 0.0;
  local_88.K5 = 0.0;
  local_88.K6 = 0.0;
  local_88.F.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_88.F.field0_0x0._s_0.Y = _UNK_150689688;
  local_88.C.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_88.C.field0_0x0._s_0.Y = _UNK_150689678;
  local_88.bUseFisheyeModel = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FOpenCVLensDistortionParametersBase *)param_2->MostRecentPropertyAddress;
  local_a0 = (UTexture2D *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_88;
  if (pFVar1 != (FOpenCVLensDistortionParametersBase *)0x0) {
    pFVar6 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  ppUVar5 = &local_a0;
  if ((UTexture2D **)param_2->MostRecentPropertyAddress != (UTexture2D **)0x0) {
    ppUVar5 = (UTexture2D **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pTVar4 = &local_b0;
  if ((TArray<FOpenCVArucoDetectedMarker,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FOpenCVArucoDetectedMarker,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FOpenCVArucoDetectedMarker,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = OpenCVArucoDetectMarkers
                    (local_98[0],local_res18[0],local_res10[0],bVar7,bVar8,local_b4,pFVar6,ppUVar5,
                     pTVar4);
  *(int *)param_3 = iVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar5 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar5);
  }
  DestructItems<FOpenCVArucoDetectedMarker,int>
            ((FOpenCVArucoDetectedMarker *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
  if ((FOpenCVArucoDetectedMarker *)local_b0.AllocatorInstance.Data !=
      (FOpenCVArucoDetectedMarker *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// execOpenCVChessboardDetectCorners @ 14d373e70

void __cdecl
UOpenCVBlueprintFunctionLibrary::execOpenCVChessboardDetectCorners
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  UTexture2D **ppUVar4;
  bool bVar5;
  int local_res10 [2];
  UTexture2D *local_res18;
  UTextureRenderTarget2D *local_res20;
  TIntPoint<int>_u_0 local_48;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_40;
  
  local_res20 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res18 = (UTexture2D *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  ppUVar4 = &local_res18;
  if ((UTexture2D **)param_2->MostRecentPropertyAddress != (UTexture2D **)0x0) {
    ppUVar4 = (UTexture2D **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pTVar3 = &local_40;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = OpenCVChessboardDetectCorners(local_res20,(TIntPoint<int>)local_48,bVar5,ppUVar4,pTVar3);
  *(int *)param_3 = iVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar4 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar4);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

