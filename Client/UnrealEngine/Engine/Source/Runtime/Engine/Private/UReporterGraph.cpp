// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 147aa3b30

UClass * __cdecl UReporterGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReporterGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReporterGraph",
               &Z_Registration_Info_UClass_UReporterGraph.InnerSingleton,
               StaticRegisterNativesUReporterGraph,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UReporterGraph>,InternalVTableHelperCtorCaller<UReporterGraph>,
               local_res8,UReporterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReporterGraph.InnerSingleton;
}

// UReporterGraph @ 147abe120

UReporterGraph * __thiscall
UReporterGraph::UReporterGraph(UReporterGraph *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UReporterGraph__6B_;
  (this->Thresholds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Thresholds).ArrayNum = 0;
  (this->Thresholds).ArrayMax = 0;
  (this->CurrentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentData).ArrayNum = 0;
  (this->CurrentData).ArrayMax = 0;
  return this;
}

// UReporterGraph @ 147abe160

UReporterGraph * __thiscall
UReporterGraph::UReporterGraph(UReporterGraph *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FLinearColor FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UReporterGraph__6B_;
  (this->Thresholds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Thresholds).ArrayNum = 0;
  (this->Thresholds).ArrayMax = 0;
  (this->CurrentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentData).ArrayNum = 0;
  FVar2 = FLinearColor::Yellow;
  (this->CurrentData).ArrayMax = 0;
  this->bOffsetDataSets = 0;
  this->bDrawCursorOnGraph = 0;
  this->bUseTinyFont = 0;
  (this->BackgroundColor).field0_0x0.Bits = 0;
  (this->AxesColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->AxisStyle = Grid;
  this->DataStyle = Filled;
  this->LegendPosition = Outside;
  this->NumXNotches = 10;
  this->NumYNotches = 10;
  return this;
}

// ~UReporterGraph @ 147abfd20

void __thiscall UReporterGraph::~UReporterGraph(UReporterGraph *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UReporterGraph__6B_;
  DestructItems<FGraphLine,int>
            ((FGraphLine *)(this->CurrentData).AllocatorInstance.Data,(this->CurrentData).ArrayNum);
  pFVar1 = (this->CurrentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGraphThreshold,int>
            ((FGraphThreshold *)(this->Thresholds).AllocatorInstance.Data,
             (this->Thresholds).ArrayNum);
  pFVar1 = (this->Thresholds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UReporterBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DataToNormalized @ 147acf950

TVector2<double> * __thiscall
UReporterGraph::DataToNormalized
          (UReporterGraph *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->GraphMinMaxData).Max.field0_0x0._s_0.X;
  dVar2 = (this->GraphMinMaxData).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  dVar1 = (dVar4 - (this->GraphMinMaxData).Min.field0_0x0._s_0.X) / (dVar1 - dVar2);
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar4 = ((__return_storage_ptr__->field0_0x0)._s_0.Y -
          (this->GraphMinMaxData).Min.field0_0x0._s_0.Y) /
          ((this->GraphMinMaxData).Max.field0_0x0._s_0.Y -
          (this->GraphMinMaxData).Min.field0_0x0._s_0.Y);
  dVar2 = (this->GraphScreenSize).Max.field0_0x0._s_0.Y;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  dVar3 = (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * ((this->GraphScreenSize).Max.field0_0x0._s_0.X -
               (this->GraphScreenSize).Min.field0_0x0._s_0.X) +
       (this->GraphScreenSize).Min.field0_0x0._s_0.X;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar4 * (dVar2 - dVar3) + (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

// Draw @ 147ad2c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReporterGraph::Draw(UReporterGraph *this,UCanvas *param_1)

{
  FLinearColor_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  double local_d8;
  double local_d0;
  TVector2<double>_u_0 local_c8;
  FCanvasTileItem local_b8;
  
  if ((char)this->_padding_ != '\0') {
    (**(code **)(this->_padding_ + 0x2b8))(this,&local_e8,&this->GraphScreenSize,param_1);
    (**(code **)(this->_padding_ + 0x2b8))(this,&local_d8,&(this->GraphScreenSize).Max,param_1);
    local_f8._s_0.R = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.R];
    local_f8._s_0.G = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.G];
    local_f8._s_0.B = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.B];
    local_c8._s_0.X = local_d8 - local_e8._s_0.X;
    local_f8._s_0.A = (float)(this->BackgroundColor).field0_0x0._s_0.A * __real_3b808081;
    local_c8._s_0.Y = local_d0 - local_e8._s_0.Y;
    FCanvasTileItem::FCanvasTileItem
              (&local_b8,(TVector2<double> *)&local_e8._s_0,GWhiteTexture,
               (TVector2<double> *)&local_c8._s_0,(FLinearColor *)&local_f8._s_0);
    local_b8._padding_._4_4_ = 2;
    UCanvas::DrawItem(param_1,(FCanvasItem *)&local_b8,(TVector2<double> *)&local_e8._s_0);
    if (this->DataStyle == Lines) {
      DrawAxes(this,param_1);
      DrawData(this,param_1);
    }
    else if (this->DataStyle == Filled) {
      DrawData(this,param_1);
      DrawAxes(this,param_1);
    }
    DrawLegend(this,param_1);
    DrawThresholds(this,param_1);
  }
  return;
}

// DrawAxes @ 147ad2e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReporterGraph::DrawAxes(UReporterGraph *this,UCanvas *param_1)

{
  double dVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  undefined1 auVar4 [12];
  double dVar5;
  int iVar6;
  UFont *pUVar7;
  size_t sVar8;
  wchar_t *_Str;
  undefined4 uVar9;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar10 [16];
  double dVar12;
  float fVar13;
  int local_res8 [2];
  int local_res10 [2];
  TStringView<wchar_t> local_a8;
  TVector2<double>_u_0 local_98;
  TVector2<double>_u_0 local_88;
  undefined1 local_78 [80];
  undefined8 uVar11;
  
  fVar13 = __real_3f800000;
  if (param_1->Canvas->bStereoRendering == false) {
    fVar13 = param_1->Canvas->DPIScale;
  }
  TVar2 = (TVector2<double>_u_0)
          *(TVector2<double>_u_0 *)&(this->GraphScreenSize).Min.field0_0x0._s_0;
  dVar12 = (this->GraphScreenSize).Max.field0_0x0._s_0.X;
  dVar1 = (this->GraphScreenSize).Max.field0_0x0._s_0.Y;
  local_88._s_0.Y = TVar2._s_0.Y;
  local_88._s_0.X = dVar12;
  local_78._0_8_ = TVar2._s_0.X;
  uVar11 = local_78._0_8_;
  local_78._8_8_ = dVar1;
  if (this->bUseTinyFont == 0) {
    pUVar7 = UEngine::GetSmallFont();
  }
  else {
    pUVar7 = UEngine::GetTinyFont();
  }
  ::FString::PrintfImpl((FString *)&local_98._s_0,L"%.2f");
  uVar9 = 0;
  if (local_98._8_4_ == 0) {
    local_a8.DataPtr = L"";
LAB_147ad2ed3:
    sVar8 = wcslen(local_a8.DataPtr);
    local_a8.Size = (int)sVar8;
  }
  else {
    local_a8.Size = 0;
    local_a8.DataPtr = (wchar_t *)local_98._s_0.X;
    if ((wchar_t *)local_98._s_0.X != (wchar_t *)0x0) goto LAB_147ad2ed3;
  }
  StringSize(pUVar7,local_res8,local_res10,&local_a8);
  if ((void *)local_98._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_98._s_0.X);
  }
  dVar5 = __real_bfe0000000000000;
  dVar3 = __real_3ff0000000000000 / (double)fVar13;
  dVar12 = (double)(float)((dVar12 - (double)uVar11) * (double)param_1->SizeX * dVar3) *
           __real_3fe6666666666666;
  iVar6 = -(int)((longlong)
                 ROUND(__real_bfe0000000000000 - (dVar12 + dVar12) / (double)local_res8[0]) >> 1);
  this->NumXNotches = iVar6;
  local_98 = TVar2;
  DrawAxis(this,param_1,(TVector2<double> *)&local_98._s_0,(TVector2<double> *)&local_88._s_0,
           (float)iVar6,false);
  ::FString::PrintfImpl((FString *)&local_a8,L"%.2f");
  if (local_a8.Size == 0) {
    local_98._s_0.X = (double)L"";
    _Str = L"";
  }
  else {
    local_98._s_0.X = (double)local_a8.DataPtr;
    _Str = local_a8.DataPtr;
    if (local_a8.DataPtr == (wchar_t *)0x0) goto LAB_147ad2fe1;
  }
  sVar8 = wcslen(_Str);
  uVar9 = (undefined4)sVar8;
LAB_147ad2fe1:
  local_98._8_4_ = uVar9;
  local_88._s_0.Y = local_98._s_0.Y;
  local_88._s_0.X = local_98._s_0.X;
  StringSize(pUVar7,local_res8,local_res10,(TStringView<wchar_t> *)&local_88._s_0);
  uVar11 = extraout_XMM0._8_8_;
  if (local_a8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_a8.DataPtr);
    uVar11 = extraout_XMM0_00._8_8_;
  }
  auVar4._4_8_ = uVar11;
  auVar4._0_4_ = TVar2._4_4_;
  auVar10._0_8_ = auVar4._0_8_ << 0x20;
  auVar10._8_4_ = TVar2._8_4_;
  auVar10._12_4_ = TVar2._12_4_;
  dVar12 = (double)(float)((dVar1 - auVar10._8_8_) * (double)param_1->SizeY * dVar3) *
           __real_3fe6666666666666;
  iVar6 = -(int)((longlong)ROUND(dVar5 - (dVar12 + dVar12) / (double)local_res10[0]) >> 1);
  this->NumYNotches = iVar6;
  local_88 = TVar2;
  DrawAxis(this,param_1,(TVector2<double> *)&local_88._s_0,(TVector2<double> *)local_78,(float)iVar6
           ,true);
  return;
}

// DrawAxis @ 147ad30d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReporterGraph::DrawAxis
          (UReporterGraph *this,UCanvas *param_1,TVector2<double> *param_2,TVector2<double> *param_3
          ,float param_4,bool param_5)

{
  FLinearColor *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Type TVar5;
  FCanvas *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [12];
  float fVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  UFont *pUVar19;
  size_t sVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  FScriptContainerElement *pFVar23;
  double *pdVar24;
  FScriptContainerElement *pFVar25;
  UFont *pUVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  float fVar33;
  double dVar34;
  float fVar36;
  undefined1 extraout_XMM0 [16];
  undefined8 uVar37;
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar35 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  double dVar38;
  double dVar39;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  int local_res8 [2];
  UCanvas *local_res10;
  TVector2<double> *local_res18;
  int local_res20 [2];
  undefined3 in_stack_00000031;
  ulonglong in_stack_fffffffffffffc20;
  undefined1 local_3c8 [8];
  float fStack_3c0;
  float fStack_3bc;
  double local_3b8;
  double dStack_3b0;
  UFont *local_3a8;
  FString local_3a0;
  FString local_390;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  FScriptContainerElement *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  FScriptContainerElement *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *local_2f8;
  uint uStack_2f0;
  undefined4 uStack_2ec;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined **local_2a8;
  TVector2<double>_u_0 local_2a0;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined **local_228;
  TVector2<double>_u_0 local_220;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [160];
  
  pFVar1 = &this->AxesColor;
  pFVar23 = (FScriptContainerElement *)(in_stack_fffffffffffffc20 & 0xffffffff00000000);
  local_res10 = param_1;
  local_res18 = param_2;
  pUVar26 = (UFont *)pFVar1;
  UReporterBase::DrawLine((UReporterBase *)this,param_1,param_2,param_3,pFVar1,Line);
  fVar10 = __real_3f800000;
  dVar39 = (param_2->field0_0x0)._s_0.X;
  dVar8 = 0.0;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar34 = dVar2 - dVar4;
  fVar33 = (pFVar1->field0_0x0)._s_0.R;
  fVar36 = (this->AxesColor).field0_0x0._s_0.G;
  local_3c8 = *(undefined1 (*) [8])&pFVar1->field0_0x0;
  fStack_3c0 = (this->AxesColor).field0_0x0._s_0.B;
  fStack_3bc = (this->AxesColor).field0_0x0._s_0.A;
  TVar5 = this->AxisStyle;
  bVar16 = param_5;
  auVar40._0_8_ = dVar34 * dVar34 + (dVar39 - dVar3) * (dVar39 - dVar3);
  auVar40._8_8_ = 0;
  auVar40 = sqrtpd(unaff_XMM6,auVar40);
  fVar41 = (float)((__real_3ff0000000000000 / (double)param_4) * auVar40._0_8_);
  local_3b8 = (param_2->field0_0x0)._s_0.X;
  dStack_3b0 = (param_2->field0_0x0)._s_0.Y;
  if (TVar5 == Lines) {
    fVar41 = (float)auVar40._0_8_;
    fVar42 = __real_3f800000;
  }
  else {
    fVar42 = param_4;
    if (TVar5 != Notches) {
      dVar8 = 0.0;
      if (TVar5 == Grid) {
        fVar33 = fVar33 * ___xmm_3e0000003e0000003e0000003e000000;
        fVar36 = fVar36 * _UNK_150925104;
        fStack_3c0 = fStack_3c0 * _UNK_150925108;
        fStack_3bc = fStack_3bc * _UNK_15092510c;
        local_3c8._4_4_ = fVar36;
        local_3c8._0_4_ = fVar33;
        dVar8 = 0.0;
        if (param_5 == false) {
          dVar8 = dVar3 - dVar39;
        }
      }
      goto LAB_147ad328c;
    }
  }
  if (param_5 == false) {
    dVar8 = (dVar3 - dVar39) * ___real_bfa99999a0000000;
    dStack_3b0 = dStack_3b0 + dVar8 * __real_bfe0000000000000;
  }
  else {
    local_3b8 = local_3b8 + (dVar4 - dVar2) * ___real_3f999999a0000000;
  }
LAB_147ad328c:
  fVar15 = fStack_3bc;
  fVar14 = fStack_3c0;
  if (this->bUseTinyFont == 0) {
    pUVar19 = UEngine::GetSmallFont();
  }
  else {
    pUVar19 = UEngine::GetTinyFont();
  }
  dVar13 = __real_4010000000000000;
  dVar34 = __real_4014000000000000;
  dVar39 = (this->GraphScreenSize).Max.field0_0x0._s_0.X;
  dVar2 = (this->GraphScreenSize).Max.field0_0x0._s_0.Y;
  iVar29 = 0;
  dVar3 = (this->GraphScreenSize).Min.field0_0x0._s_0.X;
  dVar4 = (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
  auVar40 = ZEXT816(0);
  local_3a8 = pUVar19;
  if (0.0 < fVar42 + fVar10) {
    do {
      ::FString::PrintfImpl(&local_3a0,L"%1.2f");
      if (local_3a0.Data.ArrayNum == 0) {
        local_348 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad335d:
        sVar20 = wcslen((wchar_t *)local_348);
        iVar17 = (int)sVar20;
      }
      else {
        iVar17 = 0;
        local_348 = local_3a0.Data.AllocatorInstance.Data;
        if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147ad335d;
      }
      local_1a8._12_4_ = uStack_33c;
      local_1a8.Size = iVar17;
      local_1a8.DataPtr = (wchar_t *)local_348;
      iStack_340 = iVar17;
      StringSize(pUVar19,(int *)&param_4,local_res8,&local_1a8);
      (**(code **)(this->_padding_ + 0x2b8))(this,&local_358,&local_3b8,param_1);
      pFVar6 = param_1->Canvas;
      pUVar26 = pUVar19;
      pFVar23 = (FScriptContainerElement *)pFVar1;
      if (bVar16 == false) {
        if (local_3a0.Data.ArrayNum == 0) {
          local_328 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad357a:
          sVar20 = wcslen((wchar_t *)local_328);
          iVar17 = (int)sVar20;
        }
        else {
          iVar17 = 0;
          local_328 = local_3a0.Data.AllocatorInstance.Data;
          if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_147ad357a;
        }
        dVar38 = dVar34;
        if (this->AxisStyle != Grid) {
          dVar38 = (double)param_1->SizeY * dVar8;
          dVar38 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar38,0) ^ (uint)__xmm_80000000000000008000000000000000);
        }
        local_188._12_4_ = uStack_31c;
        local_188.Size = iVar17;
        local_188.DataPtr = (wchar_t *)local_328;
        iStack_320 = iVar17;
        FCanvas::DrawShadowedString
                  (pFVar6,local_358 - (double)((float)(int)param_4 * __real_3f000000),
                   dVar38 + local_350,&local_188,pUVar19,pFVar1,&FLinearColor::Black);
        local_2c8 = local_3b8;
        local_210 = 0;
        local_208 = 0;
        local_2c0 = (dVar2 - dVar4) + dStack_3b0;
        local_200 = 0;
        local_1b8 = 0;
        local_228 = &___7FCanvasLineItem__6B_;
        local_220 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        local_1d8 = 0;
        local_1c0 = 0;
        local_1f8 = fVar33;
        fStack_1f4 = fVar36;
        fStack_1f0 = fVar14;
        fStack_1ec = fVar15;
        puVar21 = (undefined8 *)
                  (**(code **)(this->_padding_ + 0x2b8))(this,local_118,&local_2c8,param_1);
        puVar22 = (undefined8 *)
                  (**(code **)(this->_padding_ + 0x2b8))(this,local_108,&local_3b8,param_1);
        local_1e8 = *puVar22;
        local_1e0 = puVar22[1];
        local_1d0 = *puVar21;
        local_1c8 = puVar21[1];
        (*(code *)local_228[3])(&local_228,param_1->Canvas);
        local_3b8 = local_3b8 + (double)fVar41;
        local_228 = &___7FCanvasItem__6B_;
      }
      else {
        if (local_3a0.Data.ArrayNum == 0) {
          local_338 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad33db:
          sVar20 = wcslen((wchar_t *)local_338);
          iVar17 = (int)sVar20;
        }
        else {
          iVar17 = 0;
          local_338 = local_3a0.Data.AllocatorInstance.Data;
          if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_147ad33db;
        }
        local_198._12_4_ = uStack_32c;
        local_198.Size = iVar17;
        local_198.DataPtr = (wchar_t *)local_338;
        iStack_330 = iVar17;
        FCanvas::DrawShadowedString
                  (pFVar6,(local_358 - (double)(int)param_4) - dVar13,
                   local_350 - (double)((float)local_res8[0] * __real_3f000000),&local_198,pUVar19,
                   pFVar1,&FLinearColor::Black);
        local_238 = 0;
        local_290 = 0;
        local_2d8 = (dVar39 - dVar3) + local_3b8;
        local_288 = 0;
        local_280 = 0;
        local_2a8 = &___7FCanvasLineItem__6B_;
        local_2d0 = dStack_3b0;
        local_258 = 0;
        local_240 = 0;
        local_2a0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        local_278 = fVar33;
        fStack_274 = fVar36;
        fStack_270 = fVar14;
        fStack_26c = fVar15;
        puVar21 = (undefined8 *)
                  (**(code **)(this->_padding_ + 0x2b8))(this,local_138,&local_2d8,param_1);
        puVar22 = (undefined8 *)
                  (**(code **)(this->_padding_ + 0x2b8))(this,local_128,&local_3b8,param_1);
        local_268 = *puVar22;
        local_260 = puVar22[1];
        local_250 = *puVar21;
        local_248 = puVar21[1];
        (*(code *)local_2a8[3])(&local_2a8,param_1->Canvas);
        dStack_3b0 = dStack_3b0 + (double)fVar41;
        local_2a8 = &___7FCanvasItem__6B_;
      }
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
      iVar29 = iVar29 + 1;
      auVar40 = ZEXT416((uint)(float)iVar29);
    } while ((float)iVar29 < fVar42 + fVar10);
  }
  uVar12 = __xmm_80000000000000008000000000000000._4_4_;
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  if (((bVar16 != false) && (this->bDrawExtremes != 0)) &&
     (uVar28 = 0, 0 < (this->CurrentData).ArrayNum)) {
    pUVar19 = (UFont *)0x0;
    lVar31 = 0;
    do {
      iVar29 = (this->CurrentData).ArrayNum;
      pFVar25 = (FScriptContainerElement *)(longlong)iVar29;
      uVar30 = ~uVar28 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar28 < iVar29) {
        uVar18 = uVar30;
      }
      if (uVar18 == 0) {
        pUVar26 = (UFont *)(longlong)(int)uVar28;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        auVar40 = extraout_XMM0;
        pFVar23 = pFVar25;
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar37 = auVar40._8_8_;
      if (*(int *)((this->CurrentData).AllocatorInstance.Data + lVar31 + 8) != 0) {
        iVar29 = (this->CurrentData).ArrayNum;
        pFVar25 = (FScriptContainerElement *)(longlong)iVar29;
        uVar18 = 0;
        if ((int)uVar28 < iVar29) {
          uVar18 = uVar30;
        }
        if (uVar18 == 0) {
          pUVar26 = (UFont *)(longlong)(int)uVar28;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar37 = extraout_XMM0_00._8_8_;
          pFVar23 = pFVar25;
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        dVar2 = __real_3ff0000000000000;
        pFVar25 = (this->CurrentData).AllocatorInstance.Data;
        auVar9._4_8_ = uVar37;
        auVar9._0_4_ = *(undefined4 *)(pFVar25 + lVar31 + 0x24);
        auVar35._0_8_ = auVar9._0_8_ << 0x20;
        auVar35._8_4_ = *(undefined4 *)(pFVar25 + lVar31 + 0x28);
        auVar35._12_4_ = *(undefined4 *)(pFVar25 + lVar31 + 0x2c);
        dVar39 = ((local_res18->field0_0x0)._s_0.X - (this->GraphMinMaxData).Min.field0_0x0._s_0.X)
                 / ((this->GraphMinMaxData).Max.field0_0x0._s_0.X -
                   (this->GraphMinMaxData).Min.field0_0x0._s_0.X);
        if (__real_3ff0000000000000 <= dVar39) {
          dVar39 = __real_3ff0000000000000;
        }
        if (dVar39 <= 0.0) {
          dVar39 = 0.0;
        }
        local_378 = dVar39 * ((this->GraphScreenSize).Max.field0_0x0._s_0.X -
                             (this->GraphScreenSize).Min.field0_0x0._s_0.X) +
                    (this->GraphScreenSize).Min.field0_0x0._s_0.X;
        dVar39 = (auVar35._8_8_ - (this->GraphMinMaxData).Min.field0_0x0._s_0.Y) /
                 ((this->GraphMinMaxData).Max.field0_0x0._s_0.Y -
                 (this->GraphMinMaxData).Min.field0_0x0._s_0.Y);
        if (__real_3ff0000000000000 <= dVar39) {
          dVar39 = __real_3ff0000000000000;
        }
        if (dVar39 <= 0.0) {
          dVar39 = 0.0;
        }
        dStack_370 = dVar39 * ((this->GraphScreenSize).Max.field0_0x0._s_0.Y -
                              (this->GraphScreenSize).Min.field0_0x0._s_0.Y) +
                     (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
        (**(code **)(this->_padding_ + 0x2b8))(this,&local_368,&local_378,param_1,pUVar26,pFVar23);
        uVar18 = 0;
        if ((int)uVar28 < (this->CurrentData).ArrayNum) {
          uVar18 = uVar30;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ::FString::PrintfImpl((FString *)local_3c8,L"%.2f");
        if (fStack_3c0 == 0.0) {
          local_318 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad3982:
          sVar20 = wcslen((wchar_t *)local_318);
          iVar29 = (int)sVar20;
        }
        else {
          iVar29 = 0;
          local_318 = (FScriptContainerElement *)local_3c8;
          if (local_3c8 != (undefined1  [8])0x0) goto LAB_147ad3982;
        }
        local_178._12_4_ = uStack_30c;
        local_178.Size = iVar29;
        local_178.DataPtr = (wchar_t *)local_318;
        iStack_310 = iVar29;
        StringSize(local_3a8,(int *)&param_5,local_res20,&local_178);
        pFVar6 = param_1->Canvas;
        uVar18 = 0;
        if ((int)uVar28 < (this->CurrentData).ArrayNum) {
          uVar18 = uVar30;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar23 = (this->CurrentData).AllocatorInstance.Data;
        if (fStack_3c0 == 0.0) {
          local_308 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad3a30:
          sVar20 = wcslen((wchar_t *)local_308);
          iVar29 = (int)sVar20;
        }
        else {
          iVar29 = 0;
          local_308 = (FScriptContainerElement *)local_3c8;
          if (local_3c8 != (undefined1  [8])0x0) goto LAB_147ad3a30;
        }
        fVar33 = __real_3f000000;
        dVar39 = dVar34;
        if (this->AxisStyle != Grid) {
          dVar39 = (double)local_res10->SizeY * dVar8;
          dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar12,
                                    SUB84(dVar39,0) ^ uVar11);
        }
        local_168._12_4_ = uStack_2fc;
        local_168.Size = iVar29;
        local_168.DataPtr = (wchar_t *)local_308;
        pFVar23 = pFVar23 + lVar31 + 0x10;
        pUVar26 = local_3a8;
        iStack_300 = iVar29;
        FCanvas::DrawShadowedString
                  (pFVar6,local_368 - (double)((float)_param_5 * __real_3f000000),
                   dVar39 + dStack_360,&local_168,local_3a8,(FLinearColor *)pFVar23,
                   &FLinearColor::Black);
        iVar29 = (this->CurrentData).ArrayNum;
        pFVar25 = (FScriptContainerElement *)(longlong)iVar29;
        uVar18 = 0;
        if ((int)uVar28 < iVar29) {
          uVar18 = uVar30;
        }
        if ((uVar18 == 0) &&
           (pUVar26 = pUVar19,
           bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , pFVar23 = pFVar25, bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar29 = (this->CurrentData).ArrayNum;
        pFVar27 = (FScriptContainerElement *)(longlong)iVar29;
        pFVar25 = (this->CurrentData).AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar28 < iVar29) {
          uVar18 = uVar30;
        }
        if ((uVar18 == 0) &&
           (pUVar26 = pUVar19,
           bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , pFVar23 = pFVar27, bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar29 = *(int *)(pFVar25 + lVar31 + 8);
        pFVar27 = (FScriptContainerElement *)(longlong)iVar29;
        uVar32 = *(int *)((this->CurrentData).AllocatorInstance.Data + lVar31 + 8) - 1;
        uVar18 = 0;
        if ((int)uVar32 < iVar29) {
          uVar18 = ~uVar32 >> 0x1f;
        }
        if (uVar18 == 0) {
          pUVar26 = (UFont *)(longlong)(int)uVar32;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          pFVar23 = pFVar27;
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        param_1 = local_res10;
        dVar39 = (*(double *)(*(longlong *)(pFVar25 + lVar31) + 8 + (longlong)(int)uVar32 * 0x10) -
                 (this->GraphMinMaxData).Min.field0_0x0._s_0.Y) /
                 ((this->GraphMinMaxData).Max.field0_0x0._s_0.Y -
                 (this->GraphMinMaxData).Min.field0_0x0._s_0.Y);
        if (dVar2 <= dVar39) {
          dVar39 = dVar2;
        }
        if (dVar39 <= 0.0) {
          dVar39 = 0.0;
        }
        local_2b8 = (this->GraphScreenSize).Max.field0_0x0._s_0.X;
        local_2b0 = dVar39 * ((this->GraphScreenSize).Max.field0_0x0._s_0.Y -
                             (this->GraphScreenSize).Min.field0_0x0._s_0.Y) +
                    (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
        pdVar24 = (double *)
                  (**(code **)(this->_padding_ + 0x2b8))
                            (this,local_f8,&local_2b8,local_res10,pUVar26,pFVar23);
        uVar32 = 0;
        local_368 = *pdVar24;
        dStack_360 = pdVar24[1];
        uVar18 = uVar32;
        if ((int)uVar28 < (this->CurrentData).ArrayNum) {
          uVar18 = uVar30;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ::FString::PrintfImpl(&local_390,L"%.2f");
        if (local_3c8 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_3c8);
        }
        local_2f8 = local_390.Data.AllocatorInstance.Data;
        iVar29 = local_390.Data.ArrayNum;
        local_3c8 = (undefined1  [8])local_390.Data.AllocatorInstance.Data;
        local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        fStack_3c0 = (float)local_390.Data.ArrayNum;
        fStack_3bc = (float)local_390.Data.ArrayMax;
        local_390.Data.ArrayNum = 0;
        local_390.Data.ArrayMax = 0;
        if ((float)iVar29 == 0.0) {
          local_2f8 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad3cd8:
          sVar20 = wcslen((wchar_t *)local_2f8);
          uVar32 = (uint)sVar20;
        }
        else if (local_2f8 != (FScriptContainerElement *)0x0) goto LAB_147ad3cd8;
        local_158._12_4_ = uStack_2ec;
        local_158.Size = uVar32;
        local_158.DataPtr = (wchar_t *)local_2f8;
        uStack_2f0 = uVar32;
        StringSize(local_3a8,(int *)&param_5,local_res20,&local_158);
        pFVar6 = param_1->Canvas;
        uVar18 = 0;
        if ((int)uVar28 < (this->CurrentData).ArrayNum) {
          uVar18 = uVar30;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar23 = (this->CurrentData).AllocatorInstance.Data + lVar31 + 0x10;
        if (fStack_3c0 == 0.0) {
          local_2e8 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad3d8a:
          sVar20 = wcslen((wchar_t *)local_2e8);
          iVar29 = (int)sVar20;
        }
        else {
          iVar29 = 0;
          local_2e8 = (FScriptContainerElement *)local_3c8;
          if (local_3c8 != (undefined1  [8])0x0) goto LAB_147ad3d8a;
        }
        dVar39 = dVar34;
        if (this->AxisStyle != Grid) {
          dVar39 = (double)param_1->SizeY * dVar8;
          dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar12,
                                    SUB84(dVar39,0) ^ uVar11);
        }
        local_148._12_4_ = uStack_2dc;
        local_148.Size = iVar29;
        local_148.DataPtr = (wchar_t *)local_2e8;
        pUVar26 = local_3a8;
        iStack_2e0 = iVar29;
        FCanvas::DrawShadowedString
                  (pFVar6,local_368 - (double)((float)_param_5 * fVar33),dVar39 + dStack_360,
                   &local_148,local_3a8,(FLinearColor *)pFVar23,&FLinearColor::Black);
        auVar40 = extraout_XMM0_01;
        if (local_3c8 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_3c8);
          auVar40 = extraout_XMM0_02;
        }
      }
      uVar28 = uVar28 + 1;
      pUVar19 = (UFont *)((longlong)&pUVar19->_padding_ + 1);
      lVar31 = lVar31 + 0x50;
    } while ((int)uVar28 < (this->CurrentData).ArrayNum);
  }
  return;
}

// DrawBackground @ 147ad3e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReporterGraph::DrawBackground(UReporterGraph *this,UCanvas *param_1)

{
  FLinearColor_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  double local_d8;
  double local_d0;
  TVector2<double>_u_0 local_c8;
  FCanvasTileItem local_b8;
  
  (**(code **)(this->_padding_ + 0x2b8))(this,&local_e8,&this->GraphScreenSize,param_1);
  (**(code **)(this->_padding_ + 0x2b8))(this,&local_d8,&(this->GraphScreenSize).Max,param_1);
  local_f8._s_0.R = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.R];
  local_f8._s_0.G = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.G];
  local_f8._s_0.B = FLinearColor::sRGBToLinearTable[(this->BackgroundColor).field0_0x0._s_0.B];
  local_c8._s_0.X = local_d8 - local_e8._s_0.X;
  local_f8._s_0.A = (float)(this->BackgroundColor).field0_0x0._s_0.A * __real_3b808081;
  local_c8._s_0.Y = local_d0 - local_e8._s_0.Y;
  FCanvasTileItem::FCanvasTileItem
            (&local_b8,(TVector2<double> *)&local_e8._s_0,GWhiteTexture,
             (TVector2<double> *)&local_c8._s_0,(FLinearColor *)&local_f8._s_0);
  local_b8._padding_._4_4_ = 2;
  UCanvas::DrawItem(param_1,(FCanvasItem *)&local_b8,(TVector2<double> *)&local_e8._s_0);
  return;
}

// DrawData @ 147ad3fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReporterGraph::DrawData(UReporterGraph *this,UCanvas *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FCanvas *this_00;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  UFont *pUVar17;
  double *pdVar18;
  size_t sVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  int local_res8 [2];
  UCanvas *local_res10;
  float local_res18;
  int local_res20 [2];
  longlong local_208;
  longlong local_1f8;
  TVector2<double>_u_0 local_1f0;
  TVector2<double>_u_0 local_1e0;
  TVector2<double>_u_0 local_1d0;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  undefined *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TVector2<double>_u_0 local_188;
  TVector2<double>_u_0 local_178;
  TVector2<double>_u_0 local_168;
  TVector2<double>_u_0 local_158;
  double local_148;
  double local_140;
  undefined1 local_138 [8];
  double local_130;
  undefined1 local_128 [8];
  double local_120;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  undefined1 local_f8 [184];
  
  local_res10 = param_1;
  (**(code **)(this->_padding_ + 0x2b8))(this,local_128,&this->GraphScreenSize,param_1);
  (**(code **)(this->_padding_ + 0x2b8))(this,local_138,&(this->GraphScreenSize).Max,param_1);
  fVar28 = (float)((double)(float)((this->GraphScreenSize).Max.field0_0x0._s_0.Y -
                                  (this->GraphScreenSize).Min.field0_0x0._s_0.Y) /
                  (double)CONCAT44((uint)((ulonglong)(local_130 - local_120) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_130 - local_120,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  local_res18 = fVar28;
  if (this->bUseTinyFont == 0) {
    pUVar17 = UEngine::GetSmallFont();
  }
  else {
    pUVar17 = UEngine::GetTinyFont();
  }
  uStack_190 = 1;
  local_198 = &u_0;
  local_118._12_4_ = uStack_18c;
  local_118.Size = 1;
  local_118.DataPtr = L"0";
  StringSize(pUVar17,local_res8,local_res20,&local_118);
  dVar13 = __real_3ff0000000000000;
  fVar29 = 0.0;
  if ((this->bDrawCursorOnGraph != 0) && (this->DataStyle == Lines)) {
    local_178._s_0.Y = (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
    dVar24 = ((double)this->CursorLocation - (this->GraphMinMaxData).Min.field0_0x0._s_0.X) /
             ((this->GraphMinMaxData).Max.field0_0x0._s_0.X -
             (this->GraphMinMaxData).Min.field0_0x0._s_0.X);
    if (__real_3ff0000000000000 <= dVar24) {
      dVar24 = __real_3ff0000000000000;
    }
    if (dVar24 <= 0.0) {
      dVar24 = 0.0;
    }
    local_188._s_0.Y = (this->GraphScreenSize).Max.field0_0x0._s_0.Y;
    local_188._s_0.X =
         dVar24 * ((this->GraphScreenSize).Max.field0_0x0._s_0.X -
                  (this->GraphScreenSize).Min.field0_0x0._s_0.X) +
         (this->GraphScreenSize).Min.field0_0x0._s_0.X;
    local_178._s_0.X = local_188._s_0.X;
    UReporterBase::DrawLine
              ((UReporterBase *)this,param_1,(TVector2<double> *)&local_178._s_0,
               (TVector2<double> *)&local_188._s_0,&FLinearColor::White,Line);
  }
  uVar22 = 0;
  if (0 < (this->CurrentData).ArrayNum) {
    local_1f8 = 0;
    do {
      if ((this->bOffsetDataSets != 0) && ((uVar22 & 1) != 0)) {
        fVar29 = fVar29 + fVar28;
      }
      local_208 = 0x10;
      uVar21 = ~uVar22 >> 0x1f;
      uVar23 = 1;
      while( true ) {
        uVar15 = 0;
        if ((int)uVar22 < (this->CurrentData).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)((this->CurrentData).AllocatorInstance.Data + local_1f8 + 8) <= (int)uVar23)
        break;
        uVar15 = 0;
        if ((int)uVar22 < (this->CurrentData).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->CurrentData).AllocatorInstance.Data;
        lVar20 = (longlong)(int)uVar22 * 0x50;
        uVar15 = 0;
        if ((int)(uVar23 - 1) < *(int *)(pFVar5 + lVar20 + 8)) {
          uVar15 = -uVar23 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pdVar18 = (double *)(*(longlong *)(pFVar5 + lVar20) + -0x10 + local_208);
        dVar24 = *pdVar18;
        dVar4 = pdVar18[1];
        uVar15 = 0;
        if ((int)uVar22 < (this->CurrentData).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->CurrentData).AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)uVar23 < *(int *)(pFVar5 + lVar20 + 8)) {
          uVar15 = ~uVar23 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        dVar27 = (this->GraphMinMaxData).Min.field0_0x0._s_0.X;
        dVar1 = (this->GraphMinMaxData).Min.field0_0x0._s_0.Y;
        dVar2 = (this->GraphScreenSize).Min.field0_0x0._s_0.X;
        dVar3 = (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
        dVar26 = (this->GraphScreenSize).Max.field0_0x0._s_0.Y - dVar3;
        dVar8 = dVar13 / ((this->GraphMinMaxData).Max.field0_0x0._s_0.X - dVar27);
        pdVar18 = (double *)(*(longlong *)(pFVar5 + lVar20) + local_208);
        dVar11 = *pdVar18;
        dVar12 = pdVar18[1];
        dVar9 = (dVar24 - dVar27) * dVar8;
        dVar25 = dVar13 / ((this->GraphMinMaxData).Max.field0_0x0._s_0.Y - dVar1);
        if (dVar13 <= dVar9) {
          dVar9 = dVar13;
        }
        dVar10 = (dVar4 - dVar1) * dVar25;
        dVar7 = (this->GraphScreenSize).Max.field0_0x0._s_0.X - dVar2;
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        if (dVar13 <= dVar10) {
          dVar10 = dVar13;
        }
        if (dVar10 <= 0.0) {
          dVar10 = 0.0;
        }
        dVar9 = dVar9 * dVar7 + dVar2;
        dVar8 = (dVar11 - dVar27) * dVar8;
        dVar25 = (dVar12 - dVar1) * dVar25;
        dVar27 = dVar10 * dVar26 + dVar3;
        if (dVar13 <= dVar8) {
          dVar8 = dVar13;
        }
        if (dVar13 <= dVar25) {
          dVar25 = dVar13;
        }
        if (dVar8 <= 0.0) {
          dVar8 = 0.0;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        dVar2 = dVar8 * dVar7 + dVar2;
        dVar8 = dVar25 * dVar26 + dVar3;
        if (this->DataStyle == Lines) {
          dVar1 = __real_bff0000000000000;
          if ((uVar22 & 1) != 0) {
            dVar1 = dVar13;
          }
          dVar1 = (double)fVar29 * dVar1;
          uVar15 = 0;
          if ((int)uVar22 < (this->CurrentData).ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_168._s_0.X = dVar2 + dVar1;
          local_168._s_0.Y = dVar8 + dVar1;
          local_158._s_0.X = dVar9 + dVar1;
          local_158._s_0.Y = dVar27 + dVar1;
          UReporterBase::DrawLine
                    ((UReporterBase *)this,local_res10,(TVector2<double> *)&local_158._s_0,
                     (TVector2<double> *)&local_168._s_0,
                     (FLinearColor *)((this->CurrentData).AllocatorInstance.Data + lVar20 + 0x10),
                     Line);
          if (((this->bDrawCursorOnGraph == 0) ||
              (dVar27 = (double)this->CursorLocation, dVar27 < dVar24)) || (dVar11 <= dVar27))
          goto LAB_147ad48a6;
          dVar27 = (double)(float)((dVar27 - dVar24) / (dVar11 - dVar24));
          dVar24 = ((dVar27 * (dVar11 - dVar24) + dVar24) -
                   (this->GraphMinMaxData).Min.field0_0x0._s_0.X) /
                   ((this->GraphMinMaxData).Max.field0_0x0._s_0.X -
                   (this->GraphMinMaxData).Min.field0_0x0._s_0.X);
          if (dVar13 <= dVar24) {
            dVar24 = dVar13;
          }
          if (dVar24 <= 0.0) {
            dVar24 = 0.0;
          }
          local_148 = dVar24 * ((this->GraphScreenSize).Max.field0_0x0._s_0.X -
                               (this->GraphScreenSize).Min.field0_0x0._s_0.X) +
                      (this->GraphScreenSize).Min.field0_0x0._s_0.X;
          dVar24 = (((dVar12 - dVar4) * dVar27 + dVar4) -
                   (this->GraphMinMaxData).Min.field0_0x0._s_0.Y) /
                   ((this->GraphMinMaxData).Max.field0_0x0._s_0.Y -
                   (this->GraphMinMaxData).Min.field0_0x0._s_0.Y);
          if (dVar13 <= dVar24) {
            dVar24 = dVar13;
          }
          if (dVar24 <= 0.0) {
            dVar24 = 0.0;
          }
          local_140 = dVar24 * ((this->GraphScreenSize).Max.field0_0x0._s_0.Y -
                               (this->GraphScreenSize).Min.field0_0x0._s_0.Y) +
                      (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
          pdVar18 = (double *)
                    (**(code **)(this->_padding_ + 0x2b8))(this,local_f8,&local_148,local_res10);
          dVar24 = *pdVar18;
          dVar4 = pdVar18[1];
          this_00 = local_res10->Canvas;
          uVar15 = 0;
          if ((int)uVar22 < (this->CurrentData).ArrayNum) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->CurrentData).AllocatorInstance.Data;
          ::FString::PrintfImpl(&local_1a8,L"%1.2f");
          if (local_1a8.Data.ArrayNum == 0) {
            local_1b8 = (FScriptContainerElement *)0x15060d16c;
LAB_147ad46d0:
            sVar19 = wcslen((wchar_t *)local_1b8);
            iVar16 = (int)sVar19;
          }
          else {
            iVar16 = 0;
            local_1b8 = local_1a8.Data.AllocatorInstance.Data;
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_147ad46d0;
          }
          local_108._12_4_ = uStack_1ac;
          local_108.Size = iVar16;
          local_108.DataPtr = (wchar_t *)local_1b8;
          iStack_1b0 = iVar16;
          FCanvas::DrawShadowedString
                    (this_00,(double)local_res8[0] + dVar1 + dVar24,dVar1 + dVar4,&local_108,pUVar17
                     ,(FLinearColor *)(pFVar5 + lVar20 + 0x10),&FLinearColor::Black);
          if (local_1a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_147ad48a6;
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          uVar23 = uVar23 + 1;
          local_208 = local_208 + 0x10;
        }
        else {
          uVar15 = 0;
          if ((int)uVar22 < (this->CurrentData).ArrayNum) {
            uVar15 = uVar21;
          }
          local_1d0._s_0.Y = dVar26 * dVar1 + dVar3;
          local_1f0._s_0.X = dVar9;
          local_1f0._s_0.Y = dVar27;
          local_1e0._s_0.X = dVar2;
          local_1e0._s_0.Y = dVar8;
          local_1d0._s_0.X = dVar9;
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UReporterBase::DrawTriangle
                    ((UReporterBase *)this,local_res10,(TVector2<double> *)&local_1d0._s_0,
                     (TVector2<double> *)&local_1e0._s_0,(TVector2<double> *)&local_1f0._s_0,
                     (FLinearColor *)((this->CurrentData).AllocatorInstance.Data + lVar20 + 0x10));
          uVar15 = 0;
          if ((int)uVar22 < (this->CurrentData).ArrayNum) {
            uVar15 = uVar21;
          }
          local_1e0._s_0.Y =
               ((this->GraphScreenSize).Max.field0_0x0._s_0.Y -
               (this->GraphScreenSize).Min.field0_0x0._s_0.Y) *
               (this->GraphMinMaxData).Min.field0_0x0._s_0.Y +
               (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
          local_1f0._s_0.X = dVar2;
          local_1f0._s_0.Y = dVar8;
          local_1e0._s_0.X = dVar2;
          local_1d0._s_0.X = dVar9;
          local_1d0._s_0.Y = local_1e0._s_0.Y;
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UReporterBase::DrawTriangle
                    ((UReporterBase *)this,local_res10,(TVector2<double> *)&local_1d0._s_0,
                     (TVector2<double> *)&local_1e0._s_0,(TVector2<double> *)&local_1f0._s_0,
                     (FLinearColor *)((this->CurrentData).AllocatorInstance.Data + lVar20 + 0x10));
LAB_147ad48a6:
          uVar23 = uVar23 + 1;
          local_208 = local_208 + 0x10;
        }
      }
      local_1f8 = local_1f8 + 0x50;
      uVar22 = uVar22 + 1;
      fVar28 = local_res18;
    } while ((int)uVar22 < (this->CurrentData).ArrayNum);
  }
  return;
}

// DrawLegend @ 147ad4e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReporterGraph::DrawLegend(UReporterGraph *this,UCanvas *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UFont *pUVar10;
  size_t sVar11;
  FText *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  int local_res8 [2];
  UCanvas *local_res10;
  int local_res18 [2];
  int local_res20;
  double local_300;
  double dStack_2f8;
  wchar_t *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  double local_2c8;
  double local_2c0;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  FText local_298;
  undefined1 local_288 [72];
  uint local_240;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  longlong local_1f0;
  longlong lStack_1e8;
  
  dStack_2f8 = (this->GraphScreenSize).Max.field0_0x0._s_0.Y;
  local_300 = (this->GraphScreenSize).Min.field0_0x0._s_0.X;
  local_res10 = param_1;
  if (this->bUseTinyFont == 0) {
    pUVar10 = UEngine::GetSmallFont();
  }
  else {
    pUVar10 = UEngine::GetTinyFont();
  }
  uStack_2d0 = 5;
  local_2d8 = L"99.99";
  local_2b8._12_4_ = uStack_2cc;
  local_2b8.Size = 5;
  local_2b8.DataPtr = L"99.99";
  StringSize(pUVar10,local_res8,local_res18,&local_2b8);
  lVar6 = _UNK_150689688;
  lVar5 = ___xmm_3ff00000000000003ff0000000000000;
  fVar4 = __real_3b808081;
  uVar17 = 0;
  local_res20 = -local_res8[0];
  if (0 < (this->CurrentData).ArrayNum) {
    lVar16 = 0;
    do {
      iVar8 = local_res20;
      (**(code **)(this->_padding_ + 0x2b8))(this,&local_2c8,&local_300,param_1);
      uVar15 = ~uVar17 >> 0x1f;
      if (this->LegendPosition == Outside) {
        uVar9 = 0;
        if ((int)uVar17 < (this->CurrentData).ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->CurrentData).AllocatorInstance.Data;
        if (*(int *)(pFVar1 + lVar16 + 0x48) == 0) {
          local_2e8 = L"";
LAB_147ad4ff5:
          sVar11 = wcslen(local_2e8);
          iVar8 = (int)sVar11;
        }
        else {
          local_2e8 = *(wchar_t **)(pFVar1 + lVar16 + 0x40);
          iVar8 = 0;
          if (local_2e8 != (wchar_t *)0x0) goto LAB_147ad4ff5;
        }
        local_2a8._12_4_ = uStack_2dc;
        local_2a8.Size = iVar8;
        local_2a8.DataPtr = local_2e8;
        iStack_2e0 = iVar8;
        StringSize(pUVar10,local_res8,local_res18,&local_2a8);
        iVar8 = local_res8[0] + 10;
      }
      this->LegendWidth = (float)iVar8;
      uVar9 = 0;
      if ((int)uVar17 < (this->CurrentData).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->CurrentData).AllocatorInstance.Data;
      lVar14 = (longlong)(int)uVar17 * 0x50;
      uVar9 = 0;
      if ((int)uVar17 < (this->CurrentData).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->CurrentData).AllocatorInstance.Data;
      if (*(int *)(pFVar2 + lVar14 + 0x48) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)(pFVar2 + lVar14 + 0x40);
      }
      pFVar12 = FText::FromString(&local_298,pwVar13);
      FCanvasTextItem::FCanvasTextItem
                ((FCanvasTextItem *)local_288,&UE::Math::TVector2<double>::ZeroVector,pFVar12,
                 pUVar10,(FLinearColor *)(pFVar1 + lVar14 + 0x10));
      if (local_298.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
      }
      local_240 = local_240 | 2;
      local_1f0 = lVar5;
      lStack_1e8 = lVar6;
      local_200 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.R];
      local_1fc = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.G];
      local_1f8 = FLinearColor::sRGBToLinearTable[FColor::Black.field0_0x0._s_0.B];
      uVar9 = 0;
      if ((int)uVar17 < (this->CurrentData).ArrayNum) {
        uVar9 = uVar15;
      }
      local_1f4 = (float)FColor::Black.field0_0x0._3_1_ * fVar4;
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1 = local_res10;
      pFVar1 = (this->CurrentData).AllocatorInstance.Data + lVar16 + 0x10;
      local_288._48_8_ = *(undefined8 *)pFVar1;
      local_288._56_8_ = *(undefined8 *)(pFVar1 + 8);
      UCanvas::DrawItem(local_res10,(FCanvasItem *)local_288,
                        (float)(local_2c8 - (double)this->LegendWidth),(float)local_2c0);
      dStack_2f8 = dStack_2f8 -
                   ((this->GraphScreenSize).Max.field0_0x0._s_0.Y -
                   (this->GraphScreenSize).Min.field0_0x0._s_0.Y) /
                   (double)(this->CurrentData).ArrayNum;
      FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_288);
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x50;
    } while ((int)uVar17 < (this->CurrentData).ArrayNum);
  }
  return;
}

// DrawThresholds @ 147ad5660

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReporterGraph::DrawThresholds(UReporterGraph *this,UCanvas *param_1)

{
  FCanvas *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UFont *pUVar9;
  size_t sVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  TVector2<double> local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  double local_88;
  double local_80;
  TVector2<double>_u_0 local_78;
  TStringView<wchar_t> local_68 [4];
  
  if (this->bUseTinyFont == 0) {
    pUVar9 = UEngine::GetSmallFont();
  }
  else {
    pUVar9 = UEngine::GetTinyFont();
  }
  dVar5 = __real_3ff0000000000000;
  uVar13 = 0;
  if (0 < (this->Thresholds).ArrayNum) {
    lVar11 = 0;
    do {
      uVar12 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < (this->Thresholds).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->GraphMinMaxData).Max.field0_0x0._s_0.Y <=
          (double)*(float *)((this->Thresholds).AllocatorInstance.Data + lVar11)) {
        return;
      }
      uVar7 = 0;
      if ((int)uVar13 < (this->Thresholds).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar17 = (this->GraphMinMaxData).Min.field0_0x0._s_0.X;
      local_a8.field0_0x0._s_0.X = (this->GraphScreenSize).Max.field0_0x0._s_0.X;
      uVar7 = 0;
      if ((int)uVar13 < (this->Thresholds).ArrayNum) {
        uVar7 = uVar12;
      }
      dVar16 = ((double)*(float *)((this->Thresholds).AllocatorInstance.Data + lVar11) -
               (this->GraphMinMaxData).Min.field0_0x0._s_0.Y) /
               ((this->GraphMinMaxData).Max.field0_0x0._s_0.Y -
               (this->GraphMinMaxData).Min.field0_0x0._s_0.Y);
      if (dVar5 <= dVar16) {
        dVar16 = dVar5;
      }
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      dVar16 = dVar16 * ((this->GraphScreenSize).Max.field0_0x0._s_0.Y -
                        (this->GraphScreenSize).Min.field0_0x0._s_0.Y) +
               (this->GraphScreenSize).Min.field0_0x0._s_0.Y;
      dVar17 = dVar17 / (dVar17 - (this->GraphMinMaxData).Max.field0_0x0._s_0.X);
      if (dVar5 <= dVar17) {
        dVar17 = dVar5;
      }
      if (dVar17 <= 0.0) {
        dVar17 = 0.0;
      }
      dVar17 = dVar17 * (local_a8.field0_0x0._s_0.X - (this->GraphScreenSize).Min.field0_0x0._s_0.X)
               + (this->GraphScreenSize).Min.field0_0x0._s_0.X;
      uVar14 = SUB84(dVar16,0);
      uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar4._8_4_ = uVar14;
      auVar4._0_8_ = dVar17;
      auVar4._12_4_ = uVar15;
      local_a8.field0_0x0._s_0.Y = auVar4._8_8_;
      local_78._8_4_ = uVar14;
      local_78._s_0.X = dVar17;
      local_78._12_4_ = uVar15;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UReporterBase::DrawLine
                ((UReporterBase *)this,param_1,(TVector2<double> *)&local_78._s_0,&local_a8,
                 (FLinearColor *)((this->Thresholds).AllocatorInstance.Data + lVar11 + 4),Dash);
      (**(code **)(this->_padding_ + 0x2b8))(this,&local_88,&local_a8,param_1);
      this_00 = param_1->Canvas;
      uVar7 = 0;
      if ((int)uVar13 < (this->Thresholds).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Thresholds).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar13 < (this->Thresholds).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Thresholds).AllocatorInstance.Data;
      if (*(int *)(pFVar2 + lVar11 + 0x20) == 0) {
        local_98 = L"";
LAB_147ad5960:
        sVar10 = wcslen(local_98);
        iVar8 = (int)sVar10;
      }
      else {
        local_98 = *(wchar_t **)(pFVar2 + lVar11 + 0x18);
        iVar8 = 0;
        if (local_98 != (wchar_t *)0x0) goto LAB_147ad5960;
      }
      local_68[0]._12_4_ = uStack_8c;
      local_68[0].Size = iVar8;
      local_68[0].DataPtr = local_98;
      iStack_90 = iVar8;
      FCanvas::DrawShadowedString
                (this_00,local_88,local_80,local_68,pUVar9,(FLinearColor *)(pFVar1 + lVar11 + 4),
                 &FLinearColor::Black);
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x28;
    } while ((int)uVar13 < (this->Thresholds).ArrayNum);
  }
  return;
}

// GetDefaultFont @ 147ae61c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UFont * __thiscall UReporterGraph::GetDefaultFont(UReporterGraph *this)

{
  UFont *pUVar1;
  
  if (this->bUseTinyFont == 0) {
    pUVar1 = UEngine::GetSmallFont();
    return pUVar1;
  }
  return (GEngine->TinyFont).field0_0x0.DebugPtr;
}

// GetGraphLine @ 147ae8750

FGraphLine * __thiscall UReporterGraph::GetGraphLine(UReporterGraph *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FGraphLine *pFVar5;
  
  if (-1 < param_1) {
    iVar1 = (this->CurrentData).ArrayNum;
    if (param_1 <= iVar1) {
      uVar4 = 0;
      if (param_1 < iVar1) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FGraphLine *)(*pcVar2)();
          return pFVar5;
        }
      }
      return (FGraphLine *)((this->CurrentData).AllocatorInstance.Data + (longlong)param_1 * 0x50);
    }
  }
  return (FGraphLine *)0x0;
}

// GetPrivateStaticClass @ 147aebcd0

UClass * __cdecl UReporterGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReporterGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReporterGraph",
               &Z_Registration_Info_UClass_UReporterGraph.InnerSingleton,
               StaticRegisterNativesUReporterGraph,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UReporterGraph>,InternalVTableHelperCtorCaller<UReporterGraph>,
               local_res8,UReporterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReporterGraph.InnerSingleton;
}

// GetThreshold @ 147aeeeb0

FGraphThreshold * __thiscall UReporterGraph::GetThreshold(UReporterGraph *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGraphThreshold *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Thresholds).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Thresholds).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FGraphThreshold *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FGraphThreshold *)((this->Thresholds).AllocatorInstance.Data + (longlong)param_1 * 0x28)
    ;
  }
  return (FGraphThreshold *)0x0;
}

// SetAxesMinMax @ 147b11980

void __thiscall
UReporterGraph::SetAxesMinMax
          (UReporterGraph *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->GraphMinMaxData).Min.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->GraphMinMaxData).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->GraphMinMaxData).Max.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->GraphMinMaxData).Max.field0_0x0._s_0.Y = dVar1;
  return;
}

// SetAxesMinMax @ 147b119a0

void __thiscall
UReporterGraph::SetAxesMinMax
          (UReporterGraph *this,float param_1,float param_2,float param_3,float param_4)

{
  TVector2<double>_u_0 TVar1;
  
  (this->GraphMinMaxData).Min.field0_0x0._s_0.X = (double)param_1;
  (this->GraphMinMaxData).Min.field0_0x0._s_0.Y = (double)param_3;
  TVar1._8_4_ = SUB84((double)param_4,0);
  TVar1._s_0.X = (double)param_2;
  TVar1._12_4_ = (int)((ulonglong)(double)param_4 >> 0x20);
  (this->GraphMinMaxData).Max.field0_0x0 = TVar1;
  return;
}

// SetBackgroundColor @ 147b119e0

void __thiscall UReporterGraph::SetBackgroundColor(UReporterGraph *this,FColor param_1)

{
  (this->BackgroundColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
  return;
}

// SetGraphScreenSize @ 147b132e0

void __thiscall
UReporterGraph::SetGraphScreenSize
          (UReporterGraph *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->GraphScreenSize).Min.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->GraphScreenSize).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->GraphScreenSize).Max.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->GraphScreenSize).Max.field0_0x0._s_0.Y = dVar1;
  return;
}

// SetGraphScreenSize @ 147b13300

void __thiscall
UReporterGraph::SetGraphScreenSize
          (UReporterGraph *this,float param_1,float param_2,float param_3,float param_4)

{
  TVector2<double>_u_0 TVar1;
  
  (this->GraphScreenSize).Min.field0_0x0._s_0.X = (double)param_1;
  (this->GraphScreenSize).Min.field0_0x0._s_0.Y = (double)param_3;
  TVar1._8_4_ = SUB84((double)param_4,0);
  TVar1._s_0.X = (double)param_2;
  TVar1._12_4_ = (int)((ulonglong)(double)param_4 >> 0x20);
  (this->GraphScreenSize).Max.field0_0x0 = TVar1;
  return;
}

// SetLegendPosition @ 147b133a0

void __thiscall UReporterGraph::SetLegendPosition(UReporterGraph *this,Type param_1)

{
  this->LegendPosition = param_1;
  return;
}

// SetNumGraphLines @ 147b133b0

void __thiscall UReporterGraph::SetNumGraphLines(UReporterGraph *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<FGraphLine,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 local_30;
  
  pTVar3 = &this->CurrentData;
  uVar10 = (ulonglong)(uint)param_1;
  DestructItems<FGraphLine,int>
            ((FGraphLine *)(pTVar3->AllocatorInstance).Data,(this->CurrentData).ArrayNum);
  piVar1 = &(this->CurrentData).ArrayMax;
  (this->CurrentData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  if (0 < param_1) {
    do {
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar9 + (longlong)*piVar1 * 0x50)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->CurrentData).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&pTVar3->AllocatorInstance,piVar1);
      }
      pvVar5 = local_78;
      (this->CurrentData).ArrayNum = iVar7 + 1;
      pFVar9 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
      *(undefined8 *)pFVar9 = 0;
      lVar8 = (longlong)(int)local_70;
      *(int *)(pFVar9 + 8) = (int)local_70;
      if ((int)local_70 == 0) {
        *(int *)(pFVar9 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_70,0,(ForAnyElementType *)pFVar9,(int)local_70,
                   (int *)(pFVar9 + 0xc));
        memcpy(*(void **)pFVar9,pvVar5,lVar8 << 4);
      }
      pvVar5 = local_38;
      pFVar2 = pFVar9 + 0x40;
      *(undefined8 *)(pFVar9 + 0x10) = local_68;
      *(undefined8 *)(pFVar9 + 0x18) = uStack_60;
      *(undefined8 *)(pFVar9 + 0x20) = local_58;
      *(undefined8 *)(pFVar9 + 0x28) = uStack_50;
      *(undefined8 *)(pFVar9 + 0x30) = local_48;
      *(undefined8 *)(pFVar9 + 0x38) = uStack_40;
      *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
      lVar8 = (longlong)(int)local_30;
      *(int *)(pFVar9 + 0x48) = (int)local_30;
      if ((int)local_30 == 0) {
        *(undefined4 *)(pFVar9 + 0x4c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_30,0,(ForAnyElementType *)pFVar2,(int)local_30,
                   (int *)(pFVar9 + 0x4c));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar2,pvVar5,lVar8 * 2);
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  this->LegendWidth = 1.1754944e-38;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// SetNumThresholds @ 147b13650

void __thiscall UReporterGraph::SetNumThresholds(UReporterGraph *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_38;
  FLinearColor_u_0 local_34;
  FString local_20;
  
  uVar7 = (ulonglong)(uint)param_1;
  DestructItems<FGraphThreshold,int>
            ((FGraphThreshold *)(this->Thresholds).AllocatorInstance.Data,
             (this->Thresholds).ArrayNum);
  piVar1 = &(this->Thresholds).ArrayMax;
  (this->Thresholds).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->Thresholds).AllocatorInstance,0,piVar1);
  }
  local_38 = 0;
  local_34 = FLinearColor::White.field0_0x0;
  ::FString::FString(&local_20,"UNDEFINED");
  if (0 < param_1) {
    do {
      pFVar3 = (this->Thresholds).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar1 * 0x28)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->Thresholds).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&(this->Thresholds).AllocatorInstance,piVar1);
      }
      (this->Thresholds).ArrayNum = iVar6 + 1;
      pFVar3 = (this->Thresholds).AllocatorInstance.Data;
      lVar2 = (longlong)iVar6 * 5 + 3;
      *(undefined4 *)(pFVar3 + lVar2 * 8 + -0x18) = local_38;
      *(undefined8 *)(pFVar3 + lVar2 * 8 + -0x14) = local_34._0_8_;
      *(undefined8 *)(pFVar3 + lVar2 * 8 + -0x14 + 8) = local_34._8_8_;
      ::FString::FString((FString *)(pFVar3 + lVar2 * 8),&local_20);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  this->LegendWidth = 1.1754944e-38;
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUReporterGraph @ 147b17350

void __cdecl UReporterGraph::StaticRegisterNativesUReporterGraph(void)

{
  return;
}

// ToScreenSpace @ 147b1cdd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector2<double> * __thiscall
UReporterGraph::ToScreenSpace
          (UReporterGraph *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          UCanvas *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = __real_3ff0000000000000;
  fVar3 = __real_3f800000;
  if (param_2->Canvas->bStereoRendering == false) {
    fVar3 = param_2->Canvas->DPIScale;
  }
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  iVar1 = param_2->SizeX;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  iVar2 = param_2->SizeY;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)iVar1 * dVar4 * (dVar6 / (double)fVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((double)iVar2 - (double)iVar2 * (__return_storage_ptr__->field0_0x0)._s_0.Y) *
       (dVar6 / (double)fVar3);
  return __return_storage_ptr__;
}

