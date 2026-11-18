// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensCalibration
// Functions: 14

// StaticClass @ 14d7e31e0

UClass * __cdecl UOpenCVLensCalibrator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVLensCalibration",L"OpenCVLensCalibrator",
               &Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton,
               StaticRegisterNativesUOpenCVLensCalibrator,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOpenCVLensCalibrator>,
               InternalVTableHelperCtorCaller<UOpenCVLensCalibrator>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton;
}

// UOpenCVLensCalibrator @ 14d7e3b80

UOpenCVLensCalibrator * __thiscall
UOpenCVLensCalibrator::UOpenCVLensCalibrator(UOpenCVLensCalibrator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOpenCVLensCalibrator__6B_;
  (this->ImagePoints)._Mypair._Myval2._Myfirst =
       (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
  (this->ImagePoints)._Mypair._Myval2._Mylast =
       (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
  (this->ImagePoints)._Mypair._Myval2._Myend =
       (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
  (this->BoardPoints)._Mypair._Myval2._Myfirst = (Point3_<float> *)0x0;
  (this->BoardPoints)._Mypair._Myval2._Mylast = (Point3_<float> *)0x0;
  (this->BoardPoints)._Mypair._Myval2._Myend = (Point3_<float> *)0x0;
  (this->ImageSize).width = 0;
  (this->ImageSize).height = 0;
  (this->BoardSize).width = 0;
  (this->BoardSize).height = 0;
  return this;
}

// ~UOpenCVLensCalibrator @ 14d7e3bd0

void __thiscall UOpenCVLensCalibrator::~UOpenCVLensCalibrator(UOpenCVLensCalibrator *this)

{
  this->_padding_ = (longlong)&___7UOpenCVLensCalibrator__6B_;
  std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Tidy(&this->BoardPoints);
  std::
  vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
  ::
  ~vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
            (&this->ImagePoints);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateCalibrator @ 14d7e4db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOpenCVLensCalibrator * __cdecl
UOpenCVLensCalibrator::CreateCalibrator(int param_1,int param_2,float param_3,bool param_4)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOpenCVLensCalibrator *this;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = pUVar1;
  this = (UOpenCVLensCalibrator *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  Reset(this,param_1,param_2,param_3,param_4);
  return this;
}

// Feed @ 14d7e4ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UOpenCVLensCalibrator::Feed(UOpenCVLensCalibrator *this,Mat *param_1)

{
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> **ppvVar1;
  float *pfVar2;
  int *piVar3;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar4;
  Size_<int> SVar5;
  double dVar6;
  bool bVar7;
  Point_<float> PVar8;
  Point_<float> *_Dst;
  ulonglong uVar9;
  Point_<float> PVar10;
  ulong64 uVar11;
  size_t _Size;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStackY_138 [32];
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> local_108;
  _InputArray local_e8;
  _InputArray local_c8;
  _InputArray local_b0;
  Mat local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  piVar3 = (param_1->size).p;
  local_e8.flags = piVar3[1];
  local_e8._4_4_ = *piVar3;
  SVar5.height = local_e8._4_4_;
  SVar5.width = local_e8.flags;
  this->ImageSize = SVar5;
  if ((local_e8.flags < 1) || ((int)local_e8._4_4_ < 1)) {
    bVar7 = false;
  }
  else {
    uVar9 = (ulonglong)((this->BoardSize).height * (this->BoardSize).width);
    local_108._Mypair._Myval2._Myend = (Point_<float> *)0x0;
    local_108._Mypair._Myval2._Myfirst = (Point_<float> *)0x0;
    local_108._Mypair._Myval2._Mylast = (Point_<float> *)0x0;
    if (uVar9 != 0) {
      if (0x1fffffffffffffff < uVar9) goto LAB_14d7e52b9;
      PVar8 = (Point_<float>)std::_Allocate<16,std::_Default_allocate_traits>(uVar9 * 8);
      memmove((void *)PVar8,local_108._Mypair._Myval2._Myfirst,
              (longlong)local_108._Mypair._Myval2._Mylast -
              (longlong)local_108._Mypair._Myval2._Myfirst);
      if (local_108._Mypair._Myval2._Myfirst != (Point_<float> *)0x0) {
        uVar11 = (longlong)local_108._Mypair._Myval2._Myend -
                 (longlong)local_108._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
        PVar10 = (Point_<float>)local_108._Mypair._Myval2._Myfirst;
        if (0xfff < uVar11) {
          PVar10 = *(Point_<float> *)((longlong)local_108._Mypair._Myval2._Myfirst + -8);
          uVar11 = uVar11 + 0x27;
          if (0x1f < ((longlong)local_108._Mypair._Myval2._Myfirst - (longlong)PVar10) - 8U)
          goto LAB_14d7e5257;
        }
        ::operator_delete((void *)PVar10,uVar11);
      }
      local_108._Mypair._Myval2._Myend = (Point_<float> *)(uVar9 * 8 + (longlong)PVar8);
      local_108._Mypair._Myval2._Mylast = (Point_<float> *)PVar8;
    }
    local_108._Mypair._Myval2._Myfirst = local_108._Mypair._Myval2._Mylast;
    cv::Mat::Mat(&local_98);
    local_e8.obj = &local_98;
    local_e8.sz.width = 0;
    local_e8.sz.height = 0;
    local_e8.flags = 0x2010000;
    local_c8.sz.width = 0;
    local_c8.sz.height = 0;
    local_c8.flags = 0x1010000;
    local_c8.obj = param_1;
    cv::cvtColor(&local_c8,(_OutputArray *)&local_e8,6,0);
    local_c8.obj = &local_108;
    local_e8.obj = &local_98;
    local_c8.sz.width = 0;
    local_c8.sz.height = 0;
    local_c8.flags = -0x7dfcfff3;
    local_e8.sz.width = 0;
    local_e8.sz.height = 0;
    local_e8.flags = 0x1010000;
    bVar7 = cv::findChessboardCorners(&local_e8,this->BoardSize,(_OutputArray *)&local_c8,3);
    if (bVar7) {
      local_c8.obj = &local_108;
      local_b0.obj = &local_98;
      local_e8.obj = __real_3f50624dd2f1a9fc;
      local_c8.sz.width = 0;
      local_c8.sz.height = 0;
      local_c8.flags = -0x7cfcfff3;
      local_b0.sz.width = 0;
      local_b0.sz.height = 0;
      local_b0.flags = 0x1010000;
      local_e8.flags = 3;
      local_e8._4_4_ = 0x1e;
      cv::cornerSubPix(&local_b0,(_InputOutputArray *)&local_c8,(Size_<int>)0xb0000000b,
                       (Size_<int>)0xffffffffffffffff,(TermCriteria *)&local_e8);
      pvVar4 = (this->ImagePoints)._Mypair._Myval2._Mylast;
      if (pvVar4 == (this->ImagePoints)._Mypair._Myval2._Myend) {
        std::
        vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
        ::
        _Emplace_reallocate<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&>
                  (&this->ImagePoints,pvVar4,&local_108);
      }
      else {
        (pvVar4->_Mypair)._Myval2._Myfirst = (Point_<float> *)0x0;
        (pvVar4->_Mypair)._Myval2._Mylast = (Point_<float> *)0x0;
        (pvVar4->_Mypair)._Myval2._Myend = (Point_<float> *)0x0;
        uVar9 = (longlong)local_108._Mypair._Myval2._Mylast -
                (longlong)local_108._Mypair._Myval2._Myfirst >> 3;
        if (uVar9 != 0) {
          if (0x1fffffffffffffff < uVar9) {
LAB_14d7e52b9:
                    /* WARNING: Subroutine does not return */
            std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Xlength();
          }
          _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar9 * 8);
          (pvVar4->_Mypair)._Myval2._Myfirst = _Dst;
          (pvVar4->_Mypair)._Myval2._Mylast = _Dst;
          (pvVar4->_Mypair)._Myval2._Myend = _Dst + uVar9;
          _Size = (longlong)local_108._Mypair._Myval2._Mylast -
                  (longlong)local_108._Mypair._Myval2._Myfirst;
          memmove(_Dst,local_108._Mypair._Myval2._Myfirst,_Size);
          (pvVar4->_Mypair)._Myval2._Mylast = _Dst + ((longlong)_Size >> 3);
        }
        ppvVar1 = &(this->ImagePoints)._Mypair._Myval2._Mylast;
        *ppvVar1 = *ppvVar1 + 1;
      }
      if (local_108._Mypair._Myval2._Myfirst != local_108._Mypair._Myval2._Mylast) {
        dVar12 = (this->MinimumCornerCoordinates).field0_0x0._s_0.X;
        dVar13 = (this->MinimumCornerCoordinates).field0_0x0._s_0.Y;
        dVar14 = (this->MaximumCornerCoordinates).field0_0x0._s_0.X;
        dVar15 = (this->MaximumCornerCoordinates).field0_0x0._s_0.Y;
        PVar8 = (Point_<float>)local_108._Mypair._Myval2._Myfirst;
        do {
          dVar6 = (double)*(float *)PVar8;
          if (dVar12 <= (double)*(float *)PVar8) {
            dVar6 = dVar12;
          }
          dVar12 = dVar6;
          (this->MinimumCornerCoordinates).field0_0x0._s_0.X = dVar12;
          dVar6 = (double)*(float *)((longlong)PVar8 + 4);
          if (dVar13 <= (double)*(float *)((longlong)PVar8 + 4)) {
            dVar6 = dVar13;
          }
          dVar13 = dVar6;
          (this->MinimumCornerCoordinates).field0_0x0._s_0.Y = dVar13;
          dVar6 = (double)*(float *)PVar8;
          if ((double)*(float *)PVar8 <= dVar14) {
            dVar6 = dVar14;
          }
          dVar14 = dVar6;
          (this->MaximumCornerCoordinates).field0_0x0._s_0.X = dVar14;
          pfVar2 = (float *)((longlong)PVar8 + 4);
          PVar8 = (Point_<float>)((longlong)PVar8 + 8);
          dVar6 = (double)*pfVar2;
          if ((double)*pfVar2 <= dVar15) {
            dVar6 = dVar15;
          }
          dVar15 = dVar6;
          (this->MaximumCornerCoordinates).field0_0x0._s_0.Y = dVar15;
        } while (PVar8 != (Point_<float>)local_108._Mypair._Myval2._Mylast);
      }
    }
    cv::Mat::~Mat(&local_98);
    if (local_108._Mypair._Myval2._Myfirst != (Point_<float> *)0x0) {
      uVar11 = (longlong)local_108._Mypair._Myval2._Myend -
               (longlong)local_108._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
      PVar8 = (Point_<float>)local_108._Mypair._Myval2._Myfirst;
      if (0xfff < uVar11) {
        PVar8 = *(Point_<float> *)((longlong)local_108._Mypair._Myval2._Myfirst + -8);
        uVar11 = uVar11 + 0x27;
        if (0x1f < ((longlong)local_108._Mypair._Myval2._Myfirst - (longlong)PVar8) - 8U) {
LAB_14d7e5257:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)PVar8,uVar11);
    }
  }
  return bVar7;
}

// FeedImage @ 14d7e52d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UOpenCVLensCalibrator::FeedImage(UOpenCVLensCalibrator *this,FString *param_1)

{
  uint uVar1;
  bool bVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  wchar_t *_Str;
  uint uVar6;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  _InputArray local_1d0;
  _Bxty local_1b8;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  FScriptContainerElement local_198 [128];
  ForAnyElementType local_118;
  FScriptContainerElement *local_110;
  int local_108;
  Mat local_f8;
  Mat local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_118.Data = (FScriptContainerElement *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_110 = (FScriptContainerElement *)0x0;
      local_108 = 0;
      goto LAB_14d7e53b9;
    }
  }
  sVar3 = wcslen(_Str);
  local_108 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar3);
  uVar1 = local_108 + 1;
  uVar6 = uVar1;
  if (uVar1 < 0x81) {
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      uVar6 = 0;
      goto LAB_14d7e5370;
    }
  }
  else {
LAB_14d7e5370:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,uVar6,1);
  }
  local_110 = local_198;
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    local_110 = local_118.Data;
  }
  UE::Core::Private::Convert((uchar *)local_110,uVar1,_Str,(int)sVar3 + 1);
LAB_14d7e53b9:
  local_1b8._Ptr = (char *)0x0;
  local_1b8._8_8_ = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1b8,
             (char *)local_110,(longlong)local_108);
  cv::imread(&local_98,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1b8
             ,-1);
  bVar2 = cv::Mat::empty(&local_98);
  if (bVar2) {
    bVar2 = false;
  }
  else {
    cv::Mat::Mat(&local_f8);
    local_1e8._8_8_ = &local_f8;
    local_1d8 = 0;
    local_1d0.obj = &local_98;
    local_1e8._0_4_ = 0x2010000;
    local_1d0.sz.width = 0;
    local_1d0.sz.height = 0;
    local_1d0.flags = 0x1010000;
    cv::cvtColor(&local_1d0,(_OutputArray *)local_1e8,3,0);
    bVar2 = Feed(this,&local_f8);
    cv::Mat::~Mat(&local_f8);
  }
  cv::Mat::~Mat(&local_98);
  if (0xf < uStack_1a0) {
    uVar5 = uStack_1a0 + 1;
    uVar4 = local_1b8._Ptr;
    if (0xfff < uVar5) {
      uVar4 = *(undefined8 *)(local_1b8._Ptr + -8);
      uVar5 = uStack_1a0 + 0x28;
      if ((char *)0x1f < local_1b8._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  local_1b8._Ptr = local_1b8._Ptr & 0xffffffffffffff00;
  local_1a8 = ___xmm_000000000000000f0000000000000000;
  uStack_1a0 = _UNK_15076add8;
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return bVar2;
}

// FeedRenderTarget @ 14d7e5520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOpenCVLensCalibrator::FeedRenderTarget(UOpenCVLensCalibrator *this,UTextureRenderTarget2D *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FTextureRenderTargetResource *pFVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStackY_1d8 [32];
  char local_1a8;
  ForAnyElementType local_1a0;
  int local_198 [2];
  void *local_190;
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  UOpenCVLensCalibrator *local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 local_158;
  ushort uStack_156;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 local_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 local_13c;
  ushort uStack_13a;
  undefined4 uStack_138;
  undefined4 uStack_134;
  FName local_130;
  FString local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Mat local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_170 = this;
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    if (1 < (byte)LogOpenCVLensCalibration._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenCVLensCalibration)
      ;
    }
    return false;
  }
  plVar13 = (longlong *)0x0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198[0] = 0;
  local_198[1] = 0;
  pFVar8 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_1)
  ;
  plVar16 = &pFVar8->_padding_;
  if (pFVar8 == (FTextureRenderTargetResource *)0x0) {
    plVar16 = plVar13;
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  if (cVar4 == '\x02') {
    local_14c = 6;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_144 = CONCAT31(uStack_144._1_3_,1);
    uStack_140 = 0x467a0000;
    local_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    local_e8 = (ulonglong)uStack_13a << 0x10;
    local_f8 = 6;
    uStack_f4 = 0;
    uStack_f0 = uStack_144;
    uStack_ec = 0x467a0000;
    local_180 = (void *)0x0;
    local_178 = 0;
    local_e0 = 0;
    local_1a8 = (**(code **)(*plVar16 + 0x60))(plVar16,&local_180,&local_f8,&local_c8);
    pvVar9 = local_180;
    if (local_1a8 != '\0') {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_178 * 3,&local_1a0,local_198,local_198 + 1);
      pvVar9 = local_180;
      this = local_170;
      if (0 < (int)local_178) {
        uVar10 = 2;
        lVar14 = 2;
        plVar16 = plVar13;
        do {
          uVar12 = (uint)plVar13;
          uVar11 = ~uVar12 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar12 < (int)local_178) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          FVar1 = *(FScriptContainerElement *)((longlong)plVar16 + (longlong)local_180);
          uVar7 = 0;
          if ((int)(uVar10 - 2) < local_198[0]) {
            uVar7 = ~(uVar10 - 2) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          local_1a0.Data[lVar14 + -2] = FVar1;
          uVar7 = 0;
          if ((int)uVar12 < (int)local_178) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          FVar1 = *(FScriptContainerElement *)
                   ((undefined1 *)((longlong)plVar16 + 1) + (longlong)local_180);
          uVar7 = 0;
          if ((int)(uVar10 - 1) < local_198[0]) {
            uVar7 = ~(uVar10 - 1) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          local_1a0.Data[lVar14 + -1] = FVar1;
          uVar7 = 0;
          if ((int)uVar12 < (int)local_178) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          FVar1 = *(FScriptContainerElement *)
                   ((undefined1 *)((longlong)plVar16 + 2) + (longlong)local_180);
          uVar7 = 0;
          if ((int)uVar10 < local_198[0]) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          plVar13 = (longlong *)(ulonglong)(uVar12 + 1);
          uVar10 = uVar10 + 3;
          plVar16 = (longlong *)((longlong)plVar16 + 4);
          local_1a0.Data[lVar14] = FVar1;
          lVar14 = lVar14 + 3;
          pvVar9 = local_180;
          this = local_170;
        } while ((int)(uVar12 + 1) < (int)local_178);
      }
    }
LAB_14d7e5c22:
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    if (local_1a8 != '\0') {
      cv::Mat::Mat(&local_b8,param_1->SizeY,param_1->SizeX,0x10,local_1a0.Data,0);
      bVar5 = Feed(this,&local_b8);
      cv::Mat::~Mat(&local_b8);
      goto LAB_14d7e5c7b;
    }
  }
  else {
    if (cVar4 == '\n') {
      local_168 = 6;
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_160 = CONCAT31(uStack_160._1_3_,1);
      uStack_15c = 0x467a0000;
      local_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      local_108 = (ulonglong)uStack_156 << 0x10;
      local_118 = 6;
      uStack_114 = 0;
      uStack_110 = uStack_160;
      uStack_10c = 0x467a0000;
      local_190 = (void *)0x0;
      local_188 = 0;
      local_100 = 0;
      local_1a8 = (**(code **)(*plVar16 + 0x68))(plVar16,&local_190,&local_118,&local_d8);
      pvVar9 = local_190;
      if (local_1a8 != '\0') {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)local_188 * 3,&local_1a0,local_198,local_198 + 1);
        fVar3 = __real_437f0000;
        pvVar9 = local_190;
        this = local_170;
        if (0 < (int)local_188) {
          uVar10 = 2;
          lVar14 = 2;
          do {
            uVar12 = (uint)plVar13;
            uVar11 = ~uVar12 >> 0x1f;
            uVar7 = 0;
            if ((int)uVar12 < (int)local_188) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            lVar15 = (longlong)(int)uVar12;
            fVar17 = FGenericPlatformMath::LoadHalf
                               ((ushort *)((longlong)local_190 + lVar15 * 8 + 4));
            uVar7 = 0;
            if ((int)(uVar10 - 2) < local_198[0]) {
              uVar7 = ~(uVar10 - 2) >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            local_1a0.Data[lVar14 + -2] = SUB41((int)(fVar17 * fVar3),0);
            uVar7 = 0;
            if ((int)uVar12 < (int)local_188) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            fVar17 = FGenericPlatformMath::LoadHalf
                               ((ushort *)((longlong)local_190 + lVar15 * 8 + 2));
            uVar7 = 0;
            if ((int)(uVar10 - 1) < local_198[0]) {
              uVar7 = ~(uVar10 - 1) >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            local_1a0.Data[lVar14 + -1] = SUB41((int)(fVar17 * fVar3),0);
            uVar7 = 0;
            if ((int)uVar12 < (int)local_188) {
              uVar7 = uVar11;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            fVar17 = FGenericPlatformMath::LoadHalf((ushort *)((longlong)local_190 + lVar15 * 8));
            uVar7 = 0;
            if ((int)uVar10 < local_198[0]) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            plVar13 = (longlong *)(ulonglong)(uVar12 + 1);
            uVar10 = uVar10 + 3;
            local_1a0.Data[lVar14] = SUB41((int)(fVar17 * fVar3),0);
            lVar14 = lVar14 + 3;
            pvVar9 = local_190;
            this = local_170;
          } while ((int)(uVar12 + 1) < (int)local_188);
        }
      }
      goto LAB_14d7e5c22;
    }
    if (2 < (byte)LogOpenCVLensCalibration._0_1_) {
      local_130 = (FName)param_1->_padding_;
      ::FName::ToString(&local_130,&local_128);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenCVLensCalibration)
      ;
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
        bVar5 = false;
        goto LAB_14d7e5c7b;
      }
    }
  }
  bVar5 = false;
LAB_14d7e5c7b:
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  return bVar5;
}

// GetPrivateStaticClass @ 14d7e5ce0

UClass * __cdecl UOpenCVLensCalibrator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVLensCalibration",L"OpenCVLensCalibrator",
               &Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton,
               StaticRegisterNativesUOpenCVLensCalibrator,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOpenCVLensCalibrator>,
               InternalVTableHelperCtorCaller<UOpenCVLensCalibrator>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton;
}

// Reset @ 14d7e5dc0

void __thiscall
UOpenCVLensCalibrator::Reset
          (UOpenCVLensCalibrator *this,int param_1,int param_2,float param_3,bool param_4)

{
  Point3_<float> **ppPVar1;
  Point3_<float> *pPVar2;
  Point3_<float> *_Src;
  Point_<float> *pPVar3;
  Point_<float> *pPVar4;
  Point_<float> *pPVar5;
  Size_<int> SVar6;
  Point3_<float> *_Dst;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar7;
  int iVar8;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar9;
  int iVar10;
  Point3_<float> *pPVar11;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar12;
  longlong lVar13;
  Point_<float> **ppPVar14;
  ulonglong uVar15;
  Point3_<float> local_48 [2];
  
  this->bUseFisheyeModel = param_4;
  this->SquareSize = param_3;
  (this->MinimumCornerCoordinates).field0_0x0._s_0.X = 3.4028234663852886e+38;
  (this->MinimumCornerCoordinates).field0_0x0._s_0.Y = 3.4028234663852886e+38;
  (this->MaximumCornerCoordinates).field0_0x0._s_0.X = 1.1754943508222875e-38;
  (this->MaximumCornerCoordinates).field0_0x0._s_0.Y = 1.1754943508222875e-38;
  SVar6.height = param_2;
  SVar6.width = param_1;
  this->BoardSize = SVar6;
  pPVar11 = (this->BoardPoints)._Mypair._Myval2._Mylast;
  pPVar2 = (this->BoardPoints)._Mypair._Myval2._Myfirst;
  if (pPVar2 != pPVar11) {
    (this->BoardPoints)._Mypair._Myval2._Mylast = pPVar2;
    pPVar11 = pPVar2;
  }
  pPVar2 = (this->BoardPoints)._Mypair._Myval2._Myfirst;
  uVar15 = (ulonglong)((this->BoardSize).width * (this->BoardSize).height);
  if ((ulonglong)(((longlong)(this->BoardPoints)._Mypair._Myval2._Myend - (longlong)pPVar2) / 0xc) <
      uVar15) {
    if (0x1555555555555555 < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Xlength();
    }
    _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar15 * 0xc);
    _Src = (this->BoardPoints)._Mypair._Myval2._Myfirst;
    memmove(_Dst,_Src,(longlong)(this->BoardPoints)._Mypair._Myval2._Mylast - (longlong)_Src);
    std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Change_array
              (&this->BoardPoints,_Dst,((longlong)pPVar11 - (longlong)pPVar2) / 0xc,uVar15);
  }
  iVar10 = 0;
  if (0 < (this->BoardSize).height) {
    do {
      if (0 < (this->BoardSize).width) {
        iVar8 = 0;
        do {
          pPVar11 = (this->BoardPoints)._Mypair._Myval2._Mylast;
          local_48[0].z = 0.0;
          local_48[0].y = (float)iVar10 * this->SquareSize;
          local_48[0].x = (float)iVar8 * this->SquareSize;
          if (pPVar11 == (this->BoardPoints)._Mypair._Myval2._Myend) {
            std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::
            _Emplace_reallocate<cv::Point3_<float>_>(&this->BoardPoints,pPVar11,local_48);
          }
          else {
            pPVar11->x = local_48[0].x;
            pPVar11->y = local_48[0].y;
            pPVar11->z = 0.0;
            ppPVar1 = &(this->BoardPoints)._Mypair._Myval2._Mylast;
            *ppPVar1 = *ppPVar1 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (this->BoardSize).width);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (this->BoardSize).height);
  }
  pvVar12 = (this->ImagePoints)._Mypair._Myval2._Mylast;
  pvVar9 = (this->ImagePoints)._Mypair._Myval2._Myfirst;
  if (pvVar9 != pvVar12) {
    do {
      std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Tidy(pvVar9);
      pvVar9 = pvVar9 + 1;
    } while (pvVar9 != pvVar12);
    pvVar12 = (this->ImagePoints)._Mypair._Myval2._Myfirst;
    (this->ImagePoints)._Mypair._Myval2._Mylast = pvVar12;
  }
  pvVar9 = (this->ImagePoints)._Mypair._Myval2._Myfirst;
  if ((ulonglong)(((longlong)(this->ImagePoints)._Mypair._Myval2._Myend - (longlong)pvVar9) / 0x18)
      < 0x19) {
    lVar13 = (longlong)pvVar12 - (longlong)pvVar9;
    lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
    pvVar7 = ::operator_new(600);
    pvVar12 = (this->ImagePoints)._Mypair._Myval2._Mylast;
    pvVar9 = (this->ImagePoints)._Mypair._Myval2._Myfirst;
    if (pvVar9 != pvVar12) {
      ppPVar14 = &(pvVar7->_Mypair)._Myval2._Myend;
      do {
        pPVar3 = (pvVar9->_Mypair)._Myval2._Myend;
        pPVar4 = (pvVar9->_Mypair)._Myval2._Mylast;
        pPVar5 = (pvVar9->_Mypair)._Myval2._Myfirst;
        (pvVar9->_Mypair)._Myval2._Myend = (Point_<float> *)0x0;
        (pvVar9->_Mypair)._Myval2._Mylast = (Point_<float> *)0x0;
        (pvVar9->_Mypair)._Myval2._Myfirst = (Point_<float> *)0x0;
        pvVar9 = pvVar9 + 1;
        ((_Vector_val<std::_Simple_types<cv::Point_<float>_>_> *)(ppPVar14 + -2))->_Myfirst = pPVar5
        ;
        ppPVar14[-1] = pPVar4;
        *ppPVar14 = pPVar3;
        ppPVar14 = ppPVar14 + 3;
      } while (pvVar9 != pvVar12);
    }
    std::
    vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
    ::_Change_array(&this->ImagePoints,pvVar7,(lVar13 >> 2) - (lVar13 >> 0x3f),0x19);
  }
  return;
}

// StaticRegisterNativesUOpenCVLensCalibrator @ 14d7e6080

void __cdecl UOpenCVLensCalibrator::StaticRegisterNativesUOpenCVLensCalibrator(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UOpenCVLensCalibrator_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCalculateLensParameters @ 14d7e6270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UOpenCVLensCalibrator::execCalculateLensParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FOpenCVLensDistortionParameters *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FOpenCVLensDistortionParameters *pFVar4;
  float *pfVar5;
  FOpenCVCameraViewInfo *pFVar6;
  float local_res10 [2];
  FOpenCVCameraViewInfo local_78;
  FOpenCVLensDistortionParameters local_68;
  
  local_68._64_1_ = 0;
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  local_68._16_8_ = 0;
  local_68._24_8_ = 0;
  local_68._32_8_ = ___xmm_3ff00000000000003ff0000000000000;
  local_68._40_8_ = _UNK_150689688;
  local_68._48_8_ = ___xmm_3fe00000000000003fe0000000000000;
  local_68._56_8_ = _UNK_150689678;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar1 = (FOpenCVLensDistortionParameters *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_68;
  if (pFVar1 != (FOpenCVLensDistortionParameters *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78.HorizontalFOV = 0.0;
  local_78.VerticalFOV = 0.0;
  local_78.FocalLengthRatio = 0.0;
  pfVar5 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar6 = &local_78;
  if ((FOpenCVCameraViewInfo *)param_2->MostRecentPropertyAddress != (FOpenCVCameraViewInfo *)0x0) {
    pFVar6 = (FOpenCVCameraViewInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = CalculateLensParameters((UOpenCVLensCalibrator *)param_1,pFVar4,pfVar5,pFVar6);
  *(bool *)param_3 = bVar3;
  return;
}

// execCreateCalibrator @ 14d7e6410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UOpenCVLensCalibrator::execCreateCalibrator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UOpenCVLensCalibrator *this;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  int local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_bc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_bc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_bc);
  }
  local_c0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c4);
  }
  local_c8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  iVar4 = local_bc;
  iVar3 = local_c0;
  fVar2 = local_c4;
  bVar8 = local_c8 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._8_8_ = pUVar5;
  this = (UOpenCVLensCalibrator *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  Reset(this,iVar4,iVar3,fVar2,bVar8);
  *(UOpenCVLensCalibrator **)param_3 = this;
  return;
}

// execFeedImage @ 14d7e6620

void __cdecl UOpenCVLensCalibrator::execFeedImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FeedImage((UOpenCVLensCalibrator *)param_1,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execFeedRenderTarget @ 14d7e66d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UOpenCVLensCalibrator::execFeedRenderTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement FVar1;
  FProperty *pFVar2;
  code *pcVar3;
  float fVar4;
  UTextureRenderTarget *pUVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  FTextureRenderTargetResource *pFVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStackY_1e8 [32];
  char local_1b8;
  ForAnyElementType local_1b0;
  int local_1a8 [2];
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  UTextureRenderTarget *local_178;
  UOpenCVLensCalibrator *local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 local_158;
  ushort uStack_156;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 local_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 local_13c;
  ushort uStack_13a;
  undefined4 uStack_138;
  undefined4 uStack_134;
  FName local_130;
  FString local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Mat local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  plVar14 = (longlong *)0x0;
  local_178 = (UTextureRenderTarget *)0x0;
  local_180 = param_3;
  local_170 = (UOpenCVLensCalibrator *)param_1;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pUVar5 = local_178;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_178 == (UTextureRenderTarget *)0x0) {
    if (1 < (byte)LogOpenCVLensCalibration._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenCVLensCalibration)
      ;
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  pFVar9 = UTextureRenderTarget::GameThread_GetRenderTargetResource(local_178);
  plVar17 = &pFVar9->_padding_;
  if (pFVar9 == (FTextureRenderTargetResource *)0x0) {
    plVar17 = plVar14;
  }
  cVar6 = (**(code **)(pUVar5->_padding_ + 0x3d0))(pUVar5);
  if (cVar6 == '\x02') {
    local_14c = 6;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_144 = CONCAT31(uStack_144._1_3_,1);
    uStack_140 = 0x467a0000;
    local_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    local_e8 = (ulonglong)uStack_13a << 0x10;
    local_f8 = 6;
    uStack_f4 = 0;
    uStack_f0 = uStack_144;
    uStack_ec = 0x467a0000;
    local_190 = (void *)0x0;
    local_188 = 0;
    local_e0 = 0;
    local_1b8 = (**(code **)(*plVar17 + 0x60))(plVar17,&local_190,&local_f8,&local_c8);
    pvVar10 = local_190;
    if (local_1b8 != '\0') {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_188 * 3,&local_1b0,local_1a8,local_1a8 + 1);
      pvVar10 = local_190;
      param_3 = local_180;
      if (0 < (int)local_188) {
        uVar11 = 2;
        lVar15 = 2;
        plVar17 = plVar14;
        do {
          uVar13 = (uint)plVar14;
          uVar12 = ~uVar13 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar13 < (int)local_188) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar1 = *(FScriptContainerElement *)((longlong)plVar17 + (longlong)local_190);
          uVar8 = 0;
          if ((int)(uVar11 - 2) < local_1a8[0]) {
            uVar8 = ~(uVar11 - 2) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1b0.Data[lVar15 + -2] = FVar1;
          uVar8 = 0;
          if ((int)uVar13 < (int)local_188) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar1 = *(FScriptContainerElement *)
                   ((undefined1 *)((longlong)plVar17 + 1) + (longlong)local_190);
          uVar8 = 0;
          if ((int)(uVar11 - 1) < local_1a8[0]) {
            uVar8 = ~(uVar11 - 1) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1b0.Data[lVar15 + -1] = FVar1;
          uVar8 = 0;
          if ((int)uVar13 < (int)local_188) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar1 = *(FScriptContainerElement *)
                   ((undefined1 *)((longlong)plVar17 + 2) + (longlong)local_190);
          uVar8 = 0;
          if ((int)uVar11 < local_1a8[0]) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar14 = (longlong *)(ulonglong)(uVar13 + 1);
          uVar11 = uVar11 + 3;
          plVar17 = (longlong *)((longlong)plVar17 + 4);
          local_1b0.Data[lVar15] = FVar1;
          lVar15 = lVar15 + 3;
          pvVar10 = local_190;
          param_1 = (UObject *)local_170;
          param_3 = local_180;
        } while ((int)(uVar13 + 1) < (int)local_188);
      }
    }
  }
  else {
    if (cVar6 != '\n') {
      if (2 < (byte)LogOpenCVLensCalibration._0_1_) {
        local_130 = (FName)pUVar5->_padding_;
        ::FName::ToString(&local_130,&local_128);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogOpenCVLensCalibration);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14d7e6e28;
    }
    local_168 = 6;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_160 = CONCAT31(uStack_160._1_3_,1);
    uStack_15c = 0x467a0000;
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    local_108 = (ulonglong)uStack_156 << 0x10;
    local_118 = 6;
    uStack_114 = 0;
    uStack_110 = uStack_160;
    uStack_10c = 0x467a0000;
    local_1a0 = (void *)0x0;
    local_198 = 0;
    local_100 = 0;
    local_1b8 = (**(code **)(*plVar17 + 0x68))(plVar17,&local_1a0,&local_118,&local_d8);
    pvVar10 = local_1a0;
    if (local_1b8 != '\0') {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_198 * 3,&local_1b0,local_1a8,local_1a8 + 1);
      fVar4 = __real_437f0000;
      pvVar10 = local_1a0;
      param_3 = local_180;
      if (0 < (int)local_198) {
        uVar11 = 2;
        lVar15 = 2;
        do {
          uVar13 = (uint)plVar14;
          uVar12 = ~uVar13 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar13 < (int)local_198) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar16 = (longlong)(int)uVar13;
          fVar18 = FGenericPlatformMath::LoadHalf((ushort *)((longlong)local_1a0 + lVar16 * 8 + 4));
          uVar8 = 0;
          if ((int)(uVar11 - 2) < local_1a8[0]) {
            uVar8 = ~(uVar11 - 2) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1b0.Data[lVar15 + -2] = SUB41((int)(fVar18 * fVar4),0);
          uVar8 = 0;
          if ((int)uVar13 < (int)local_198) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar18 = FGenericPlatformMath::LoadHalf((ushort *)((longlong)local_1a0 + lVar16 * 8 + 2));
          uVar8 = 0;
          if ((int)(uVar11 - 1) < local_1a8[0]) {
            uVar8 = ~(uVar11 - 1) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1b0.Data[lVar15 + -1] = SUB41((int)(fVar18 * fVar4),0);
          uVar8 = 0;
          if ((int)uVar13 < (int)local_198) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar18 = FGenericPlatformMath::LoadHalf((ushort *)((longlong)local_1a0 + lVar16 * 8));
          uVar8 = 0;
          if ((int)uVar11 < local_1a8[0]) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar14 = (longlong *)(ulonglong)(uVar13 + 1);
          uVar11 = uVar11 + 3;
          local_1b0.Data[lVar15] = SUB41((int)(fVar18 * fVar4),0);
          lVar15 = lVar15 + 3;
          pvVar10 = local_1a0;
          param_1 = (UObject *)local_170;
          param_3 = local_180;
        } while ((int)(uVar13 + 1) < (int)local_198);
      }
    }
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  if (local_1b8 != '\0') {
    cv::Mat::Mat(&local_b8,*(int *)((longlong)&pUVar5[1]._padding_ + 4),(int)pUVar5[1]._padding_,
                 0x10,local_1b0.Data,0);
    bVar7 = Feed((UOpenCVLensCalibrator *)param_1,&local_b8);
    cv::Mat::~Mat(&local_b8);
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    *(bool *)param_3 = bVar7;
    return;
  }
LAB_14d7e6e28:
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

