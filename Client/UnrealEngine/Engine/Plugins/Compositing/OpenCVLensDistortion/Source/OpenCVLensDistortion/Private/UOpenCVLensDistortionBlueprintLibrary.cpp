// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 12

// StaticClass @ 14d7c6270

UClass * __cdecl UOpenCVLensDistortionBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVLensDistortion",L"OpenCVLensDistortionBlueprintLibrary",
               &Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenCVLensDistortionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UOpenCVLensDistortionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton;
}

// UOpenCVLensDistortionBlueprintLibrary @ 14d7c7340

UOpenCVLensDistortionBlueprintLibrary * __thiscall
UOpenCVLensDistortionBlueprintLibrary::UOpenCVLensDistortionBlueprintLibrary
          (UOpenCVLensDistortionBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UOpenCVLensDistortionBlueprintLibrary__6B_;
  return this;
}

// UOpenCVLensDistortionBlueprintLibrary @ 14d7c7370

UOpenCVLensDistortionBlueprintLibrary * __thiscall
UOpenCVLensDistortionBlueprintLibrary::UOpenCVLensDistortionBlueprintLibrary
          (UOpenCVLensDistortionBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UOpenCVLensDistortionBlueprintLibrary__6B_;
  return this;
}

// ~UOpenCVLensDistortionBlueprintLibrary @ 14d7c73c0

void __thiscall
UOpenCVLensDistortionBlueprintLibrary::~UOpenCVLensDistortionBlueprintLibrary
          (UOpenCVLensDistortionBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UOpenCVLensDistortionBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CreateUndistortUVDisplacementMap @ 14d7c7ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UTexture2D * __cdecl
UOpenCVLensDistortionBlueprintLibrary::CreateUndistortUVDisplacementMap
          (FOpenCVLensDistortionParameters *param_1,TIntPoint<int> *param_2,float param_3,
          FOpenCVCameraViewInfo *param_4)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  Size_<int> SVar4;
  Size_<int> SVar5;
  Size_<int> SVar6;
  bool bVar7;
  int iVar8;
  MatExpr *pMVar9;
  Mat *pMVar10;
  UTexture2D *pUVar11;
  FTexturePlatformData *pFVar12;
  void *pvVar13;
  void *pvVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStackY_878 [32];
  ushort uStack_828;
  ushort auStack_826 [3];
  Size_<int> SStack_820;
  void *pvStack_818;
  Size_<int> SStack_810;
  undefined8 uStack_808;
  double dStack_800;
  double dStack_7f8;
  double dStack_7f0;
  UTexture2D *pUStack_7e8;
  FBulkData *pFStack_7e0;
  _InputArray _Stack_7d8;
  _InputArray _Stack_7c0;
  _InputArray _Stack_7a8;
  _InputArray _Stack_790;
  undefined1 auStack_778 [16];
  undefined8 uStack_768;
  _InputArray _Stack_760;
  _InputArray _Stack_748;
  _InputArray _Stack_730;
  undefined1 auStack_718 [16];
  undefined8 uStack_708;
  undefined1 auStack_700 [16];
  undefined8 uStack_6f0;
  _InputArray _Stack_6e8;
  _InputArray _Stack_6d0;
  _InputArray _Stack_6b8;
  _InputArray _Stack_6a0;
  _InputArray _Stack_688;
  _InputArray _Stack_670;
  undefined1 auStack_658 [16];
  undefined8 uStack_648;
  undefined1 auStack_640 [16];
  undefined8 uStack_630;
  _InputArray _Stack_628;
  TVector2<double>_u_0 TStack_610;
  double dStack_600;
  Point_<double> PStack_5f8;
  TArrayView<unsigned_char_const_,__int64> TStack_5e8;
  Mat MStack_5d8;
  Mat MStack_578;
  Mat MStack_518;
  Mat MStack_4b8;
  Mat MStack_458;
  Mat MStack_3f8;
  Mat MStack_398;
  MatExpr MStack_338;
  MatExpr MStack_1d8;
  ulonglong uStack_78;
  ulonglong uVar18;
  
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_878;
  cv::Mat::Mat(&MStack_578,(param_2->field0_0x0)._s_0.X,(param_2->field0_0x0)._s_0.Y,5);
  cv::Mat::Mat(&MStack_3f8,(param_2->field0_0x0)._s_0.X,(param_2->field0_0x0)._s_0.Y,5);
  SStack_820.width = (param_2->field0_0x0)._s_0.X;
  SStack_820.height = (param_2->field0_0x0)._s_0.Y;
  pMVar9 = cv::Mat::eye(&MStack_338,3,3,6);
  cv::Mat::Mat(&MStack_458);
  (**(code **)((longlong)*pMVar9->op + 0x10))(pMVar9->op,pMVar9,&MStack_458,0xffffffff);
  cv::Mat::~Mat(&MStack_338.c);
  cv::Mat::~Mat(&MStack_338.b);
  cv::Mat::~Mat(&MStack_338.a);
  TStack_610._s_0.X = (double)(param_2->field0_0x0)._s_0.X;
  TStack_610._s_0.Y = (double)(param_2->field0_0x0)._s_0.Y;
  FOpenCVLensDistortionParametersBase::CreateOpenCVCameraMatrix
            ((FOpenCVLensDistortionParametersBase *)param_1,&MStack_4b8,
             (TVector2<double> *)&TStack_610._s_0);
  FOpenCVLensDistortionParametersBase::ConvertToOpenCVDistortionCoefficients
            ((FOpenCVLensDistortionParametersBase *)param_1,&MStack_518);
  pMVar9 = cv::Mat::eye(&MStack_1d8,3,3,6);
  cv::Mat::Mat(&MStack_5d8);
  (**(code **)((longlong)*pMVar9->op + 0x10))(pMVar9->op,pMVar9,&MStack_5d8,0xffffffff);
  cv::Mat::~Mat(&MStack_1d8.c);
  cv::Mat::~Mat(&MStack_1d8.b);
  cv::Mat::~Mat(&MStack_1d8.a);
  if (param_1->field_0x40 == '\0') {
    SVar4.height = SStack_820.height;
    SVar4.width = SStack_820.width;
    _Stack_688.obj = &MStack_518;
    _Stack_670.obj = &MStack_4b8;
    _Stack_688.sz.width = 0;
    _Stack_688.sz.height = 0;
    _Stack_688.flags = 0x1010000;
    _Stack_670.sz.width = 0;
    _Stack_670.sz.height = 0;
    _Stack_670.flags = 0x1010000;
    pMVar10 = cv::getOptimalNewCameraMatrix
                        (&MStack_398,&_Stack_670,&_Stack_688,SVar4,
                         (double)(__real_3f800000 - param_3),(Size_<int>)0x0,(Rect_<int> *)0x0,false
                        );
    cv::Mat::operator=(&MStack_5d8,pMVar10);
    cv::Mat::~Mat(&MStack_398);
    auStack_658._8_8_ = &MStack_3f8;
    uStack_648 = 0;
    auStack_640._8_8_ = &MStack_578;
    _Stack_628.obj = &MStack_5d8;
    _Stack_7d8.obj = &MStack_458;
    auStack_658._0_4_ = 0x2010000;
    _Stack_7c0.obj = &MStack_518;
    uStack_630 = 0;
    _Stack_7a8.obj = &MStack_4b8;
    auStack_640._0_4_ = 0x2010000;
    _Stack_628.sz.width = 0;
    _Stack_628.sz.height = 0;
    SVar5.height = SStack_820.height;
    SVar5.width = SStack_820.width;
    _Stack_628.flags = 0x1010000;
    _Stack_7d8.sz.width = 0;
    _Stack_7d8.sz.height = 0;
    _Stack_7d8.flags = 0x1010000;
    _Stack_7c0.sz.width = 0;
    _Stack_7c0.sz.height = 0;
    _Stack_7c0.flags = 0x1010000;
    _Stack_7a8.sz.width = 0;
    _Stack_7a8.sz.height = 0;
    _Stack_7a8.flags = 0x1010000;
    cv::initUndistortRectifyMap
              (&_Stack_7a8,&_Stack_7c0,&_Stack_7d8,&_Stack_628,SVar5,MStack_578.flags & 0xfff,
               (_OutputArray *)auStack_640,(_OutputArray *)auStack_658);
  }
  else {
    auStack_778._8_8_ = &MStack_5d8;
    _Stack_760.obj = &MStack_458;
    SStack_810.width = 0;
    SStack_810.height = 0;
    _Stack_748.obj = &MStack_518;
    uStack_768 = 0;
    _Stack_730.obj = &MStack_4b8;
    auStack_778._0_4_ = 0x2010000;
    _Stack_760.sz.width = 0;
    _Stack_760.sz.height = 0;
    _Stack_760.flags = 0x1010000;
    _Stack_748.sz.width = 0;
    _Stack_748.sz.height = 0;
    _Stack_748.flags = 0x1010000;
    _Stack_730.sz.width = 0;
    _Stack_730.sz.height = 0;
    _Stack_730.flags = 0x1010000;
    cv::fisheye::estimateNewCameraMatrixForUndistortRectify
              (&_Stack_730,&_Stack_748,&SStack_820,&_Stack_760,(_OutputArray *)auStack_778,
               (double)(__real_3f800000 - param_3),&SStack_810,__real_3ff0000000000000);
    auStack_718._8_8_ = &MStack_3f8;
    uStack_708 = 0;
    auStack_700._8_8_ = &MStack_578;
    _Stack_6e8.obj = &MStack_5d8;
    _Stack_6d0.obj = &MStack_458;
    auStack_718._0_4_ = 0x2010000;
    _Stack_6b8.obj = &MStack_518;
    uStack_6f0 = 0;
    _Stack_6a0.obj = &MStack_4b8;
    auStack_700._0_4_ = 0x2010000;
    _Stack_6e8.sz.width = 0;
    _Stack_6e8.sz.height = 0;
    _Stack_6e8.flags = 0x1010000;
    _Stack_6d0.sz.width = 0;
    _Stack_6d0.sz.height = 0;
    _Stack_6d0.flags = 0x1010000;
    _Stack_6b8.sz.width = 0;
    _Stack_6b8.sz.height = 0;
    _Stack_6b8.flags = 0x1010000;
    _Stack_6a0.sz.width = 0;
    _Stack_6a0.sz.height = 0;
    _Stack_6a0.flags = 0x1010000;
    cv::fisheye::initUndistortRectifyMap
              (&_Stack_6a0,&_Stack_6b8,&_Stack_6d0,&_Stack_6e8,&SStack_820,MStack_578.flags & 0xfff,
               (_OutputArray *)auStack_700,(_OutputArray *)auStack_718);
  }
  uVar19 = 0;
  SVar6.height = SStack_820.height;
  SVar6.width = SStack_820.width;
  _Stack_790.obj = &MStack_5d8;
  _Stack_790.sz.width = 0;
  _Stack_790.sz.height = 0;
  _Stack_790.flags = 0x1010000;
  PStack_5f8.x = 0.0;
  PStack_5f8.y = 0.0;
  cv::calibrationMatrixValues
            (&_Stack_790,SVar6,0.0,0.0,&dStack_800,&dStack_7f8,&dStack_600,&PStack_5f8,&dStack_7f0);
  param_4->HorizontalFOV = (float)dStack_800;
  param_4->VerticalFOV = (float)dStack_7f8;
  param_4->FocalLengthRatio = (float)dStack_7f0;
  cv::Mat::~Mat(&MStack_5d8);
  cv::Mat::~Mat(&MStack_518);
  cv::Mat::~Mat(&MStack_4b8);
  cv::Mat::~Mat(&MStack_458);
  uStack_808 = 0;
  TStack_5e8.DataPtr = (uchar *)0x0;
  TStack_5e8.ArrayNum = 0;
  pUVar11 = UTexture2D::CreateTransient
                      ((param_2->field0_0x0)._s_0.X,(param_2->field0_0x0)._s_0.Y,PF_G16R16F,
                       (FName)0x0,&TStack_5e8);
  pUStack_7e8 = pUVar11;
  pFVar12 = UTexture2D::GetPlatformData(pUVar11);
  if (((pFVar12->Mips).Array.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    pUVar11 = (UTexture2D *)(*pcVar3)();
    return pUVar11;
  }
  pFStack_7e0 = (FBulkData *)(*(longlong *)(pFVar12->Mips).Array.AllocatorInstance.Data + 0x20);
  pvStack_818 = FBulkData::Lock(pFStack_7e0,2);
  if ((pvStack_818 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenCVLensDistortion\\Source\\OpenCVLensDistortion\\Private\\OpenCVLensDistortionParameters.cpp"
                         ,0x41,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pUVar11 = (UTexture2D *)(*pcVar3)();
    return pUVar11;
  }
  pvVar13 = pvStack_818;
  uVar16 = uVar19;
  uVar21 = uVar19;
  if (0 < (param_2->field0_0x0)._s_0.Y) {
    do {
      iVar15 = (param_2->field0_0x0)._s_0.X;
      iVar20 = (int)uVar16;
      iVar8 = iVar15 * iVar20;
      pvVar14 = pvVar13;
      if (0 < iVar15) {
        uVar16 = uVar19;
        uVar18 = uVar19;
        do {
          iVar2 = (param_2->field0_0x0)._s_0.Y;
          uStack_828 = 0;
          fVar1 = *(float *)(MStack_3f8.data + uVar16 + uVar21 * *MStack_3f8.step.p);
          FGenericPlatformMath::StoreHalf
                    (&uStack_828,
                     (*(float *)(MStack_578.data + uVar16 + uVar21 * *MStack_578.step.p) -
                     (float)(int)uVar18) / (float)iVar15);
          *(ushort *)((longlong)pvVar13 + uVar16 + (longlong)(iVar8 * 2) * 2) = uStack_828;
          auStack_826[0] = 0;
          FGenericPlatformMath::StoreHalf(auStack_826,(fVar1 - (float)iVar20) / (float)iVar2);
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          *(ushort *)((longlong)pvVar13 + uVar16 + (longlong)(iVar8 * 2) * 2 + 2) = auStack_826[0];
          uVar16 = uVar16 + 4;
          iVar15 = (param_2->field0_0x0)._s_0.X;
          pvVar14 = pvStack_818;
        } while ((int)uVar17 < iVar15);
      }
      pvVar13 = pvVar14;
      pUVar11 = pUStack_7e8;
      uVar16 = (ulonglong)(iVar20 + 1U);
      uVar21 = uVar21 + 1;
    } while ((int)(iVar20 + 1U) < (param_2->field0_0x0)._s_0.Y);
  }
  FBulkData::Unlock(pFStack_7e0);
  (**(code **)(pUVar11->_padding_ + 0x328))(pUVar11);
  cv::Mat::~Mat(&MStack_3f8);
  cv::Mat::~Mat(&MStack_578);
  return pUVar11;
}

// DrawDisplacementMapToRenderTarget @ 14d7c81f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UOpenCVLensDistortionBlueprintLibrary::DrawDisplacementMapToRenderTarget
          (UObject *param_1,UTextureRenderTarget2D *param_2,UTexture2D *param_3)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
  FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget(pUVar1,param_2,param_3);
  return;
}

// GetPrivateStaticClass @ 14d7c8e30

UClass * __cdecl UOpenCVLensDistortionBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVLensDistortion",L"OpenCVLensDistortionBlueprintLibrary",
               &Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenCVLensDistortionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UOpenCVLensDistortionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary @ 14d7c99c0

void __cdecl
UOpenCVLensDistortionBlueprintLibrary::StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateUndistortUVDisplacementMap @ 14d7c9ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UOpenCVLensDistortionBlueprintLibrary::execCreateUndistortUVDisplacementMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FOpenCVLensDistortionParameters *pFVar1;
  FProperty *pFVar2;
  UTexture2D *pUVar3;
  FOpenCVLensDistortionParameters *this;
  TIntPoint<int> *pTVar4;
  FOpenCVCameraViewInfo *pFVar5;
  float local_res10 [2];
  TIntPoint<int> local_res18;
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_68;
  if (pFVar1 != (FOpenCVLensDistortionParameters *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  pTVar4 = &local_res18;
  if ((TIntPoint<int> *)param_2->MostRecentPropertyAddress != (TIntPoint<int> *)0x0) {
    pTVar4 = (TIntPoint<int> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
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
  pFVar5 = &local_78;
  if ((FOpenCVCameraViewInfo *)param_2->MostRecentPropertyAddress != (FOpenCVCameraViewInfo *)0x0) {
    pFVar5 = (FOpenCVCameraViewInfo *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FOpenCVLensDistortionParameters::CreateUndistortUVDisplacementMap
                     (this,pTVar4,local_res10[0],pFVar5);
  *(UTexture2D **)param_3 = pUVar3;
  return;
}

// execDrawDisplacementMapToRenderTarget @ 14d7c9d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UOpenCVLensDistortionBlueprintLibrary::execDrawDisplacementMapToRenderTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture2D *pUVar2;
  UTextureRenderTarget2D *pUVar3;
  UWorld *pUVar4;
  UTexture2D *local_res10 [2];
  UTextureRenderTarget2D *local_res20;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
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
  local_res10[0] = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UWorld *)(**(code **)(*local_18[0] + 0x180))();
  FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget(pUVar4,pUVar3,pUVar2);
  return;
}

// execEqualEqual_CompareLensDistortionModels @ 14d7c9e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UOpenCVLensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FOpenCVLensDistortionParametersBase *pFVar3;
  FOpenCVLensDistortionParametersBase *this;
  FOpenCVLensDistortionParametersBase local_a8;
  FOpenCVLensDistortionParametersBase local_58;
  
  local_a8.bUseFisheyeModel = false;
  local_a8.K1 = 0.0;
  local_a8.K2 = 0.0;
  local_a8.P1 = 0.0;
  local_a8.P2 = 0.0;
  local_a8.K3 = 0.0;
  local_a8.K4 = 0.0;
  local_a8.K5 = 0.0;
  local_a8.K6 = 0.0;
  local_a8.F.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.F.field0_0x0._s_0.Y = _UNK_150689688;
  local_a8.C.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_a8.C.field0_0x0._s_0.Y = _UNK_150689678;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar3 = (FOpenCVLensDistortionParametersBase *)param_2->MostRecentPropertyAddress;
  local_58.bUseFisheyeModel = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.K1 = 0.0;
  local_58.K2 = 0.0;
  local_58.P1 = 0.0;
  local_58.P2 = 0.0;
  this = &local_a8;
  if (pFVar3 != (FOpenCVLensDistortionParametersBase *)0x0) {
    this = pFVar3;
  }
  local_58.K3 = 0.0;
  local_58.K4 = 0.0;
  local_58.K5 = 0.0;
  local_58.K6 = 0.0;
  local_58.F.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_58.F.field0_0x0._s_0.Y = _UNK_150689688;
  local_58.C.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_58.C.field0_0x0._s_0.Y = _UNK_150689678;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar3 = &local_58;
  if ((FOpenCVLensDistortionParametersBase *)param_2->MostRecentPropertyAddress !=
      (FOpenCVLensDistortionParametersBase *)0x0) {
    pFVar3 = (FOpenCVLensDistortionParametersBase *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FOpenCVLensDistortionParametersBase::operator==(this,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execNotEqual_CompareLensDistortionModels @ 14d7ca000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UOpenCVLensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FOpenCVLensDistortionParametersBase *pFVar3;
  FOpenCVLensDistortionParametersBase *this;
  FOpenCVLensDistortionParametersBase local_a8;
  FOpenCVLensDistortionParametersBase local_58;
  
  local_a8.bUseFisheyeModel = false;
  local_a8.K1 = 0.0;
  local_a8.K2 = 0.0;
  local_a8.P1 = 0.0;
  local_a8.P2 = 0.0;
  local_a8.K3 = 0.0;
  local_a8.K4 = 0.0;
  local_a8.K5 = 0.0;
  local_a8.K6 = 0.0;
  local_a8.F.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.F.field0_0x0._s_0.Y = _UNK_150689688;
  local_a8.C.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_a8.C.field0_0x0._s_0.Y = _UNK_150689678;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pFVar3 = (FOpenCVLensDistortionParametersBase *)param_2->MostRecentPropertyAddress;
  local_58.bUseFisheyeModel = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_58.K1 = 0.0;
  local_58.K2 = 0.0;
  local_58.P1 = 0.0;
  local_58.P2 = 0.0;
  this = &local_a8;
  if (pFVar3 != (FOpenCVLensDistortionParametersBase *)0x0) {
    this = pFVar3;
  }
  local_58.K3 = 0.0;
  local_58.K4 = 0.0;
  local_58.K5 = 0.0;
  local_58.K6 = 0.0;
  local_58.F.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_58.F.field0_0x0._s_0.Y = _UNK_150689688;
  local_58.C.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_58.C.field0_0x0._s_0.Y = _UNK_150689678;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar3 = &local_58;
  if ((FOpenCVLensDistortionParametersBase *)param_2->MostRecentPropertyAddress !=
      (FOpenCVLensDistortionParametersBase *)0x0) {
    pFVar3 = (FOpenCVLensDistortionParametersBase *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FOpenCVLensDistortionParametersBase::operator==(this,pFVar3);
  *(bool *)param_3 = !bVar2;
  return;
}

