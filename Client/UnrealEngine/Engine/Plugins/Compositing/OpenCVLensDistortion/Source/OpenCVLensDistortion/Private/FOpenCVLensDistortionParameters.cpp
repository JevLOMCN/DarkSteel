// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 3

// StaticStruct @ 14d7c6230

UScriptStruct * __cdecl FOpenCVLensDistortionParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVLensDistortion();
    Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters,(UObject *)pUVar1
                         ,L"OpenCVLensDistortionParameters");
  }
  return Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParameters.OuterSingleton;
}

// CreateUndistortUVDisplacementMap @ 14d7c76d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UTexture2D * __thiscall
FOpenCVLensDistortionParameters::CreateUndistortUVDisplacementMap
          (FOpenCVLensDistortionParameters *this,TIntPoint<int> *param_1,float param_2,
          FOpenCVCameraViewInfo *param_3)

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
  ushort local_828;
  ushort local_826 [3];
  Size_<int> local_820;
  void *local_818;
  Size_<int> local_810;
  undefined8 local_808;
  double local_800;
  double local_7f8;
  double local_7f0;
  UTexture2D *local_7e8;
  FBulkData *local_7e0;
  _InputArray local_7d8;
  _InputArray local_7c0;
  _InputArray local_7a8;
  _InputArray local_790;
  undefined1 local_778 [16];
  undefined8 local_768;
  _InputArray local_760;
  _InputArray local_748;
  _InputArray local_730;
  undefined1 local_718 [16];
  undefined8 local_708;
  undefined1 local_700 [16];
  undefined8 local_6f0;
  _InputArray local_6e8;
  _InputArray local_6d0;
  _InputArray local_6b8;
  _InputArray local_6a0;
  _InputArray local_688;
  _InputArray local_670;
  undefined1 local_658 [16];
  undefined8 local_648;
  undefined1 local_640 [16];
  undefined8 local_630;
  _InputArray local_628;
  TVector2<double>_u_0 local_610;
  double local_600;
  Point_<double> local_5f8;
  TArrayView<unsigned_char_const_,__int64> local_5e8;
  Mat local_5d8;
  Mat local_578;
  Mat local_518;
  Mat local_4b8;
  Mat local_458;
  Mat local_3f8;
  Mat local_398;
  MatExpr local_338;
  MatExpr local_1d8;
  ulonglong local_78;
  ulonglong uVar18;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_878;
  cv::Mat::Mat(&local_578,(param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y,5);
  cv::Mat::Mat(&local_3f8,(param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y,5);
  local_820.width = (param_1->field0_0x0)._s_0.X;
  local_820.height = (param_1->field0_0x0)._s_0.Y;
  pMVar9 = cv::Mat::eye(&local_338,3,3,6);
  cv::Mat::Mat(&local_458);
  (**(code **)((longlong)*pMVar9->op + 0x10))(pMVar9->op,pMVar9,&local_458,0xffffffff);
  cv::Mat::~Mat(&local_338.c);
  cv::Mat::~Mat(&local_338.b);
  cv::Mat::~Mat(&local_338.a);
  local_610._s_0.X = (double)(param_1->field0_0x0)._s_0.X;
  local_610._s_0.Y = (double)(param_1->field0_0x0)._s_0.Y;
  FOpenCVLensDistortionParametersBase::CreateOpenCVCameraMatrix
            ((FOpenCVLensDistortionParametersBase *)this,&local_4b8,
             (TVector2<double> *)&local_610._s_0);
  FOpenCVLensDistortionParametersBase::ConvertToOpenCVDistortionCoefficients
            ((FOpenCVLensDistortionParametersBase *)this,&local_518);
  pMVar9 = cv::Mat::eye(&local_1d8,3,3,6);
  cv::Mat::Mat(&local_5d8);
  (**(code **)((longlong)*pMVar9->op + 0x10))(pMVar9->op,pMVar9,&local_5d8,0xffffffff);
  cv::Mat::~Mat(&local_1d8.c);
  cv::Mat::~Mat(&local_1d8.b);
  cv::Mat::~Mat(&local_1d8.a);
  if (this->field_0x40 == '\0') {
    SVar4.height = local_820.height;
    SVar4.width = local_820.width;
    local_688.obj = &local_518;
    local_670.obj = &local_4b8;
    local_688.sz.width = 0;
    local_688.sz.height = 0;
    local_688.flags = 0x1010000;
    local_670.sz.width = 0;
    local_670.sz.height = 0;
    local_670.flags = 0x1010000;
    pMVar10 = cv::getOptimalNewCameraMatrix
                        (&local_398,&local_670,&local_688,SVar4,(double)(__real_3f800000 - param_2),
                         (Size_<int>)0x0,(Rect_<int> *)0x0,false);
    cv::Mat::operator=(&local_5d8,pMVar10);
    cv::Mat::~Mat(&local_398);
    local_658._8_8_ = &local_3f8;
    local_648 = 0;
    local_640._8_8_ = &local_578;
    local_628.obj = &local_5d8;
    local_7d8.obj = &local_458;
    local_658._0_4_ = 0x2010000;
    local_7c0.obj = &local_518;
    local_630 = 0;
    local_7a8.obj = &local_4b8;
    local_640._0_4_ = 0x2010000;
    local_628.sz.width = 0;
    local_628.sz.height = 0;
    SVar5.height = local_820.height;
    SVar5.width = local_820.width;
    local_628.flags = 0x1010000;
    local_7d8.sz.width = 0;
    local_7d8.sz.height = 0;
    local_7d8.flags = 0x1010000;
    local_7c0.sz.width = 0;
    local_7c0.sz.height = 0;
    local_7c0.flags = 0x1010000;
    local_7a8.sz.width = 0;
    local_7a8.sz.height = 0;
    local_7a8.flags = 0x1010000;
    cv::initUndistortRectifyMap
              (&local_7a8,&local_7c0,&local_7d8,&local_628,SVar5,local_578.flags & 0xfff,
               (_OutputArray *)local_640,(_OutputArray *)local_658);
  }
  else {
    local_778._8_8_ = &local_5d8;
    local_760.obj = &local_458;
    local_810.width = 0;
    local_810.height = 0;
    local_748.obj = &local_518;
    local_768 = 0;
    local_730.obj = &local_4b8;
    local_778._0_4_ = 0x2010000;
    local_760.sz.width = 0;
    local_760.sz.height = 0;
    local_760.flags = 0x1010000;
    local_748.sz.width = 0;
    local_748.sz.height = 0;
    local_748.flags = 0x1010000;
    local_730.sz.width = 0;
    local_730.sz.height = 0;
    local_730.flags = 0x1010000;
    cv::fisheye::estimateNewCameraMatrixForUndistortRectify
              (&local_730,&local_748,&local_820,&local_760,(_OutputArray *)local_778,
               (double)(__real_3f800000 - param_2),&local_810,__real_3ff0000000000000);
    local_718._8_8_ = &local_3f8;
    local_708 = 0;
    local_700._8_8_ = &local_578;
    local_6e8.obj = &local_5d8;
    local_6d0.obj = &local_458;
    local_718._0_4_ = 0x2010000;
    local_6b8.obj = &local_518;
    local_6f0 = 0;
    local_6a0.obj = &local_4b8;
    local_700._0_4_ = 0x2010000;
    local_6e8.sz.width = 0;
    local_6e8.sz.height = 0;
    local_6e8.flags = 0x1010000;
    local_6d0.sz.width = 0;
    local_6d0.sz.height = 0;
    local_6d0.flags = 0x1010000;
    local_6b8.sz.width = 0;
    local_6b8.sz.height = 0;
    local_6b8.flags = 0x1010000;
    local_6a0.sz.width = 0;
    local_6a0.sz.height = 0;
    local_6a0.flags = 0x1010000;
    cv::fisheye::initUndistortRectifyMap
              (&local_6a0,&local_6b8,&local_6d0,&local_6e8,&local_820,local_578.flags & 0xfff,
               (_OutputArray *)local_700,(_OutputArray *)local_718);
  }
  uVar19 = 0;
  SVar6.height = local_820.height;
  SVar6.width = local_820.width;
  local_790.obj = &local_5d8;
  local_790.sz.width = 0;
  local_790.sz.height = 0;
  local_790.flags = 0x1010000;
  local_5f8.x = 0.0;
  local_5f8.y = 0.0;
  cv::calibrationMatrixValues
            (&local_790,SVar6,0.0,0.0,&local_800,&local_7f8,&local_600,&local_5f8,&local_7f0);
  param_3->HorizontalFOV = (float)local_800;
  param_3->VerticalFOV = (float)local_7f8;
  param_3->FocalLengthRatio = (float)local_7f0;
  cv::Mat::~Mat(&local_5d8);
  cv::Mat::~Mat(&local_518);
  cv::Mat::~Mat(&local_4b8);
  cv::Mat::~Mat(&local_458);
  local_808 = 0;
  local_5e8.DataPtr = (uchar *)0x0;
  local_5e8.ArrayNum = 0;
  pUVar11 = UTexture2D::CreateTransient
                      ((param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y,PF_G16R16F,
                       (FName)0x0,&local_5e8);
  local_7e8 = pUVar11;
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
  local_7e0 = (FBulkData *)(*(longlong *)(pFVar12->Mips).Array.AllocatorInstance.Data + 0x20);
  local_818 = FBulkData::Lock(local_7e0,2);
  if ((local_818 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenCVLensDistortion\\Source\\OpenCVLensDistortion\\Private\\OpenCVLensDistortionParameters.cpp"
                         ,0x41,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pUVar11 = (UTexture2D *)(*pcVar3)();
    return pUVar11;
  }
  pvVar13 = local_818;
  uVar16 = uVar19;
  uVar21 = uVar19;
  if (0 < (param_1->field0_0x0)._s_0.Y) {
    do {
      iVar15 = (param_1->field0_0x0)._s_0.X;
      iVar20 = (int)uVar16;
      iVar8 = iVar15 * iVar20;
      pvVar14 = pvVar13;
      if (0 < iVar15) {
        uVar16 = uVar19;
        uVar18 = uVar19;
        do {
          iVar2 = (param_1->field0_0x0)._s_0.Y;
          local_828 = 0;
          fVar1 = *(float *)(local_3f8.data + uVar16 + uVar21 * *local_3f8.step.p);
          FGenericPlatformMath::StoreHalf
                    (&local_828,
                     (*(float *)(local_578.data + uVar16 + uVar21 * *local_578.step.p) -
                     (float)(int)uVar18) / (float)iVar15);
          *(ushort *)((longlong)pvVar13 + uVar16 + (longlong)(iVar8 * 2) * 2) = local_828;
          local_826[0] = 0;
          FGenericPlatformMath::StoreHalf(local_826,(fVar1 - (float)iVar20) / (float)iVar2);
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          *(ushort *)((longlong)pvVar13 + uVar16 + (longlong)(iVar8 * 2) * 2 + 2) = local_826[0];
          uVar16 = uVar16 + 4;
          iVar15 = (param_1->field0_0x0)._s_0.X;
          pvVar14 = local_818;
        } while ((int)uVar17 < iVar15);
      }
      pvVar13 = pvVar14;
      pUVar11 = local_7e8;
      uVar16 = (ulonglong)(iVar20 + 1U);
      uVar21 = uVar21 + 1;
    } while ((int)(iVar20 + 1U) < (param_1->field0_0x0)._s_0.Y);
  }
  FBulkData::Unlock(local_7e0);
  (**(code **)(pUVar11->_padding_ + 0x328))(pUVar11);
  cv::Mat::~Mat(&local_3f8);
  cv::Mat::~Mat(&local_578);
  return pUVar11;
}

// DrawDisplacementMapToRenderTarget @ 14d7c7f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget
          (UWorld *param_1,UTextureRenderTarget2D *param_2,UTexture2D *param_3)

{
  int iVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTextureResource *pFVar6;
  FTextureRenderTargetResource *pFVar7;
  FRenderCommandList *this;
  FRenderCommandTag *pFVar8;
  FStaticBasicLogRecord *pFVar9;
  code **ppcVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FTextureResource *local_b8;
  FTextureRenderTargetResource *pFStack_b0;
  code *local_a8;
  Type TStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenCVLensDistortion\\Source\\OpenCVLensDistortion\\Private\\LensDistortionDisplacementMapRendering.cpp"
                         ,0x9e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 == (UTextureRenderTarget2D *)0x0) {
    if ((byte)LogOpenCVLensDistortion._0_1_ < 2) {
      return;
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    if ((param_3 != (UTexture2D *)0x0) &&
       (pFVar6 = UTexture::GetResource((UTexture *)param_3), pFVar6 != (FTextureResource *)0x0)) {
      pcVar3 = (code *)param_2->_padding_;
      pFVar7 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                         ((UTextureRenderTarget *)param_2);
      local_b8 = UTexture::GetResource((UTexture *)param_3);
      local_98[0] = (code *)0x0;
      TStack_a0 = param_1->Scene->FeatureLevel;
      pFStack_b0 = pFVar7;
      local_a8 = pcVar3;
      local_70 = FMemory::Malloc(0x28,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      local_70[1] = (code *)local_b8;
      local_70[2] = (code *)pFStack_b0;
      local_70[3] = local_a8;
      local_70[4] = (code *)CONCAT44(uStack_9c,TStack_a0);
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget_::__l2::TSTR_CaptureCommand178>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        if (this->bInitialized == 0) {
          FRenderCommandList::Init(this);
        }
        iVar1 = (this->CommandLists).ArrayNum;
        uVar11 = iVar1 - 1;
        uVar5 = 0;
        if ((int)uVar11 < iVar1) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_c8 = (longlong)(int)uVar11;
          local_c0 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar1 = (this->CommandLists).ArrayNum;
        local_68._16_8_ = local_88[0];
        local_68._24_8_ = local_88[1];
        local_68._32_8_ = local_88[2];
        local_38 = 2;
        pFVar2 = (this->CommandLists).AllocatorInstance.Data;
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_70 = (code **)0x0;
        local_98[0] = (code *)0x0;
        pFVar8 = (FRenderCommandTag *)
                 TRenderCommandTag<`FOpenCVLensDistortionParameters::DrawDisplacementMapToRenderTarget'::__l2::TSTR_CaptureCommand178>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar2 + (iVar1 + -1),
                   (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_68,pFVar8);
        uVar12 = (ulonglong)local_38;
        if ((2 < uVar12) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            ppcVar10 = (code **)(local_68 + 0x10);
            if (local_40 != (code **)0x0) {
              ppcVar10 = local_40;
            }
            (**(code **)(*ppcVar10 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12])(local_68);
        }
      }
      if (local_98[0] == (code *)0x0) {
        return;
      }
      ppcVar10 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar10 = local_70;
      }
      (**(code **)(*ppcVar10 + 0x10))();
      return;
    }
    if ((byte)LogOpenCVLensDistortion._0_1_ < 2) {
      return;
    }
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogOpenCVLensDistortion);
  return;
}

