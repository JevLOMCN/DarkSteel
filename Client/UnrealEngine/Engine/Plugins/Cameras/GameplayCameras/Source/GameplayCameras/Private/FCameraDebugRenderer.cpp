// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 49

// FCameraDebugRenderer @ 14d58c6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCameraDebugRenderer * __thiscall
UE::Cameras::FCameraDebugRenderer::FCameraDebugRenderer
          (FCameraDebugRenderer *this,UWorld *param_1,UCanvas *param_2,bool param_3)

{
  wchar_t *pwVar1;
  FSceneView *pFVar2;
  FSceneView *pFVar3;
  
  pwVar1 = (this->Formatter).StringBuffer;
  pFVar2 = (FSceneView *)0x0;
  (this->Formatter)._padding_ = (longlong)pwVar1;
  (this->Formatter)._padding_ = (longlong)pwVar1;
  this->World = (UWorld *)0x0;
  (this->Formatter)._padding_ = (longlong)&this->LineBuilder;
  pwVar1 = (this->LineBuilder).StringBuffer;
  (this->LineBuilder)._padding_ = (longlong)pwVar1;
  (this->LineBuilder)._padding_ = (longlong)pwVar1;
  (this->LineBuilder)._padding_ = (longlong)&this->IndentLevel;
  this->Canvas = (FCanvas *)0x0;
  this->SceneView = (FSceneView *)0x0;
  this->bIsExternalRendering = false;
  *(undefined2 *)&(this->Formatter)._padding_ = 0;
  *(undefined2 *)&(this->LineBuilder)._padding_ = 0;
  this->IndentLevel = '\0';
  this->RightMargin = 0.0;
  pFVar3 = pFVar2;
  if (param_2 != (UCanvas *)0x0) {
    pFVar3 = (FSceneView *)param_2->Canvas;
    pFVar2 = param_2->SceneView;
  }
  Initialize(this,param_1,pFVar2,(FCanvas *)pFVar3,param_3);
  return this;
}

// FCameraDebugRenderer @ 14d58c790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCameraDebugRenderer * __thiscall
UE::Cameras::FCameraDebugRenderer::FCameraDebugRenderer
          (FCameraDebugRenderer *this,UWorld *param_1,FSceneView *param_2,FCanvas *param_3,
          bool param_4)

{
  wchar_t *pwVar1;
  
  pwVar1 = (this->Formatter).StringBuffer;
  this->World = (UWorld *)0x0;
  (this->Formatter)._padding_ = (longlong)pwVar1;
  (this->Formatter)._padding_ = (longlong)pwVar1;
  (this->Formatter)._padding_ = (longlong)&this->LineBuilder;
  pwVar1 = (this->LineBuilder).StringBuffer;
  (this->LineBuilder)._padding_ = (longlong)pwVar1;
  (this->LineBuilder)._padding_ = (longlong)pwVar1;
  (this->LineBuilder)._padding_ = (longlong)&this->IndentLevel;
  this->Canvas = (FCanvas *)0x0;
  this->SceneView = (FSceneView *)0x0;
  this->bIsExternalRendering = false;
  *(undefined2 *)&(this->Formatter)._padding_ = 0;
  *(undefined2 *)&(this->LineBuilder)._padding_ = 0;
  this->IndentLevel = '\0';
  this->RightMargin = 0.0;
  Initialize(this,param_1,param_2,param_3,param_4);
  return this;
}

// ~FCameraDebugRenderer @ 14d590dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::~FCameraDebugRenderer(FCameraDebugRenderer *this)

{
  FlushText(this);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&this->LineBuilder);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&this->Formatter);
  return;
}

// AddIndent @ 14d598270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::AddIndent(FCameraDebugRenderer *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  FlushText(this);
  cVar2 = this->IndentLevel;
  fVar3 = (float)(cVar2 * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin);
  if (__real_322bcc77 <
      (float)((uint)((this->NextDrawPosition).field0_0x0._s_0.X - fVar3) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    iVar1 = this->MaxCharHeight;
    (this->NextDrawPosition).field0_0x0._s_0.X = fVar3;
    (this->NextDrawPosition).field0_0x0._s_0.Y =
         (float)iVar1 + (this->NextDrawPosition).field0_0x0._s_0.Y;
  }
  cVar2 = cVar2 + '\x01';
  this->IndentLevel = cVar2;
  (this->NextDrawPosition).field0_0x0._s_0.X =
       (float)(cVar2 * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin);
  return;
}

// AddText @ 14d598770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::AddText(FCameraDebugRenderer *this,FString *param_1)

{
  ulong64 uVar1;
  size_t sVar2;
  void *pvVar3;
  wchar_t *_Str;
  int iVar4;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar4 = 0;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_14d5987b0;
  }
  sVar2 = wcslen(_Str);
  iVar4 = (int)sVar2;
LAB_14d5987b0:
  uVar1 = (longlong)iVar4 * 2;
  if ((ulonglong)(this->LineBuilder)._padding_ < (this->LineBuilder)._padding_ + uVar1) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)&this->LineBuilder,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)(this->LineBuilder)._padding_,_Str,uVar1);
    (this->LineBuilder)._padding_ = (longlong)((longlong)pvVar3 + uVar1);
  }
  return;
}

// AddText @ 14d598810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::AddText(FCameraDebugRenderer *this,wchar_t *param_1)

{
  wchar_t *_Str;
  ulong64 uVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  char local_res18 [16];
  
  (this->Formatter)._padding_ = (this->Formatter)._padding_;
  TStringBuilderBase<wchar_t>::AppendV
            ((TStringBuilderBase<wchar_t> *)&this->Formatter,param_1,local_res18);
  if ((ulonglong)(this->Formatter)._padding_ < (this->Formatter)._padding_ + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&this->Formatter,1);
  }
  iVar4 = 0;
  *(undefined2 *)(this->Formatter)._padding_ = 0;
  _Str = (wchar_t *)(this->Formatter)._padding_;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar4 = (int)sVar2;
  }
  uVar1 = (longlong)iVar4 * 2;
  if ((ulonglong)(this->LineBuilder)._padding_ < (this->LineBuilder)._padding_ + uVar1) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)&this->LineBuilder,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)(this->LineBuilder)._padding_,_Str,uVar1);
    (this->LineBuilder)._padding_ = (longlong)((longlong)pvVar3 + uVar1);
  }
  return;
}

// AddTextFmtImpl @ 14d5988e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::AddTextFmtImpl
          (FCameraDebugRenderer *this,wchar_t *param_1,char *param_2)

{
  wchar_t *_Str;
  ulong64 uVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  
  (this->Formatter)._padding_ = (this->Formatter)._padding_;
  TStringBuilderBase<wchar_t>::AppendV
            ((TStringBuilderBase<wchar_t> *)&this->Formatter,param_1,param_2);
  if ((ulonglong)(this->Formatter)._padding_ < (this->Formatter)._padding_ + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&this->Formatter,1);
  }
  iVar4 = 0;
  *(undefined2 *)(this->Formatter)._padding_ = 0;
  _Str = (wchar_t *)(this->Formatter)._padding_;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar4 = (int)sVar2;
  }
  uVar1 = (longlong)iVar4 * 2;
  if ((ulonglong)(this->LineBuilder)._padding_ < (this->LineBuilder)._padding_ + uVar1) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)&this->LineBuilder,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)(this->LineBuilder)._padding_,_Str,uVar1);
    (this->LineBuilder)._padding_ = (longlong)((longlong)pvVar3 + uVar1);
  }
  return;
}

// AddTextImpl @ 14d5989b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::AddTextImpl(FCameraDebugRenderer *this,wchar_t *param_1)

{
  ulong64 uVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar4 = (int)sVar2;
  }
  uVar1 = (longlong)iVar4 * 2;
  if ((ulonglong)(this->LineBuilder)._padding_ < (this->LineBuilder)._padding_ + uVar1) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)&this->LineBuilder,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)(this->LineBuilder)._padding_,param_1,uVar1);
    (this->LineBuilder)._padding_ = (longlong)((longlong)pvVar3 + uVar1);
  }
  return;
}

// BeginDrawing @ 14d59a940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::BeginDrawing(FCameraDebugRenderer *this)

{
  FCameraDebugColors::Set(&GGameplayCamerasDebugColorScheme);
  return;
}

// Draw2DBox @ 14d59e230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::Draw2DBox
          (FCameraDebugRenderer *this,TBox2<double> *param_1,FLinearColor *param_2,float param_3)

{
  FCanvasItem local_78;
  double local_38;
  double local_30;
  float local_28;
  void *local_20;
  undefined8 local_18;
  
  if (this->Canvas != (FCanvas *)0x0) {
    local_78.Position.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    local_78.Position.field0_0x0._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
    local_30 = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
    local_78.StereoDepth = 0;
    local_78.BlendMode = SE_BLEND_Opaque;
    local_38 = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
    local_78.bFreezeTime = false;
    local_78.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_78._padding_ = (longlong)&___7FCanvasBoxItem__6B_;
    local_78.Color.field0_0x0._0_8_ = *(undefined8 *)&param_2->field0_0x0;
    local_78.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_20 = (void *)0x0;
    local_18 = 0;
    local_28 = param_3;
    FCanvas::DrawItem(this->Canvas,&local_78);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
  }
  return;
}

// Draw2DBox @ 14d59e2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::Draw2DBox
          (FCameraDebugRenderer *this,TVector2<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,float param_4)

{
  FCanvasItem local_78;
  double local_38;
  double dStack_30;
  float local_28;
  void *local_20;
  undefined8 local_18;
  
  if (this->Canvas != (FCanvas *)0x0) {
    local_78.Position.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_78.Position.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_78.StereoDepth = 0;
    local_78.BlendMode = SE_BLEND_Opaque;
    local_38 = (param_2->field0_0x0)._s_0.X;
    dStack_30 = (param_2->field0_0x0)._s_0.Y;
    local_78.bFreezeTime = false;
    local_78.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_78._padding_ = (longlong)&___7FCanvasBoxItem__6B_;
    local_78.Color.field0_0x0._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_78.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    local_20 = (void *)0x0;
    local_18 = 0;
    local_28 = param_4;
    FCanvas::DrawItem(this->Canvas,&local_78);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
  }
  return;
}

// Draw2DCircle @ 14d59e360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::Draw2DCircle
          (FCameraDebugRenderer *this,TVector2<double> *param_1,float param_2,FLinearColor *param_3,
          float param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  FCanvasItem local_118;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  float local_a8;
  
  if ((param_5 < 1) && (param_5 = (int)param_2 / 0x19, param_5 < 6)) {
    param_5 = 6;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  iVar6 = 0;
  dVar5 = (double)param_2;
  dVar2 = dVar5 + (param_1->field0_0x0)._s_0.X;
  if (0 < param_5) {
    do {
      iVar6 = iVar6 + 1;
      __libm_sse2_sincosf_();
      dVar3 = (double)extraout_XMM0_Db * dVar5 + (param_1->field0_0x0)._s_0.X;
      dVar4 = (param_1->field0_0x0)._s_0.Y - (double)extraout_XMM0_Da * dVar5;
      if (this->Canvas != (FCanvas *)0x0) {
        local_118.Color.field0_0x0._0_8_ = *(undefined8 *)&param_3->field0_0x0;
        local_118.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
        local_118.StereoDepth = 0;
        local_118.BlendMode = SE_BLEND_Opaque;
        local_c8 = 0;
        local_b0 = 0;
        local_a8 = param_4;
        local_118.bFreezeTime = false;
        local_118.BatchedElementParameters = (FBatchedElementParameters *)0x0;
        local_118._padding_ = (longlong)&___7FCanvasLineItem__6B_;
        local_118.Position.field0_0x0._s_0.X = dVar2;
        local_118.Position.field0_0x0._s_0.Y = dVar1;
        local_d8 = dVar2;
        local_d0 = dVar1;
        local_c0 = dVar3;
        local_b8 = dVar4;
        FCanvas::DrawItem(this->Canvas,&local_118);
      }
      dVar2 = dVar3;
      dVar1 = dVar4;
    } while (iVar6 < param_5);
  }
  return;
}

// Draw2DLine @ 14d59e580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::Draw2DLine
          (FCameraDebugRenderer *this,TVector2<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,float param_4)

{
  FCanvasItem local_88;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  double local_30;
  double dStack_28;
  undefined8 local_20;
  float local_18;
  
  if (this->Canvas != (FCanvas *)0x0) {
    local_88.Position.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_88.Position.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_88.StereoDepth = 0;
    local_88.BlendMode = SE_BLEND_Opaque;
    local_88.bFreezeTime = false;
    local_88.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_30 = (param_2->field0_0x0)._s_0.X;
    dStack_28 = (param_2->field0_0x0)._s_0.Y;
    local_88._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_38 = 0;
    local_88.Color.field0_0x0._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_88.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    local_20 = 0;
    local_18 = param_4;
    local_48 = local_88.Position.field0_0x0._s_0.X;
    dStack_40 = local_88.Position.field0_0x0._s_0.Y;
    FCanvas::DrawItem(this->Canvas,&local_88);
  }
  return;
}

// Draw2DPointCross @ 14d59e610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::Draw2DPointCross
          (FCameraDebugRenderer *this,TVector2<double> *param_1,float param_2,FLinearColor *param_3,
          float param_4)

{
  double dVar1;
  FCanvasItem local_148;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  float local_d8;
  FCanvasItem local_c8;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  float local_58;
  
  if (this->Canvas != (FCanvas *)0x0) {
    local_148.Position.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (double)(param_2 * __real_3f000000);
    local_148.StereoDepth = 0;
    local_148.BlendMode = SE_BLEND_Opaque;
    local_148.bFreezeTime = false;
    local_148.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_148._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_f0 = (param_1->field0_0x0)._s_0.X;
    local_148.Position.field0_0x0._s_0.X = local_f0 - dVar1;
    local_f0 = local_f0 + dVar1;
    local_f8 = 0;
    local_e0 = 0;
    local_d8 = param_4;
    local_148.Color.field0_0x0._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_148.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    local_108 = local_148.Position.field0_0x0._s_0.X;
    local_100 = local_148.Position.field0_0x0._s_0.Y;
    local_e8 = local_148.Position.field0_0x0._s_0.Y;
    FCanvas::DrawItem(this->Canvas,&local_148);
    local_c8.Position.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_68 = (param_1->field0_0x0)._s_0.Y;
    local_c8.Position.field0_0x0._s_0.Y = local_68 - dVar1;
    local_68 = local_68 + dVar1;
    local_78 = 0;
    local_60 = 0;
    local_c8.Color.field0_0x0._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_c8.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    local_c8.StereoDepth = 0;
    local_c8.BlendMode = SE_BLEND_Opaque;
    local_58 = param_4;
    local_c8.bFreezeTime = false;
    local_c8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_c8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_88 = local_c8.Position.field0_0x0._s_0.X;
    local_80 = local_c8.Position.field0_0x0._s_0.Y;
    local_70 = local_c8.Position.field0_0x0._s_0.X;
    FCanvas::DrawItem(this->Canvas,&local_c8);
  }
  return;
}

// DrawBox @ 14d59ebe0

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
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawBox
          (FCameraDebugRenderer *this,TTransform<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ULineBatchComponent *this_00;
  ULineBatchComponent *pUVar13;
  longlong lVar14;
  longlong lVar15;
  ULineBatchComponent *pUVar16;
  ULineBatchComponent *pUVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_228 [32];
  ForAnyElementType local_208;
  uint local_200;
  uint local_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  FBatchedLine *local_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  TArrayView<FBatchedLine,int> local_1c8;
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_198 [6];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138 [6];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_228;
  pUVar16 = (ULineBatchComponent *)0x0;
  this_00 = pUVar16;
  if (this->World != (UWorld *)0x0) {
    this_00 = UWorld::GetLineBatcher(this->World,Foreground);
  }
  if (this_00 != (ULineBatchComponent *)0x0) {
    local_198[0] = *(double *)&param_2->field0_0x0;
    local_198[1] = *(double *)((longlong)&param_2->field0_0x0 + 8);
    local_198[2] = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_198[3] = (double)CONCAT44((uint)((ulonglong)local_198[0] >> 0x20) ^ uVar11,
                                    SUB84(local_198[0],0) ^ uVar18);
    uVar22 = SUB84(local_198[1],0) ^ uVar18;
    uVar23 = (uint)((ulonglong)local_198[1] >> 0x20) ^ uVar11;
    local_198[5] = local_198[2];
    local_158 = local_198[2];
    local_140 = local_198[2];
    local_138[2] = (double)CONCAT44((uint)((ulonglong)local_198[2] >> 0x20) ^ uVar11,
                                    SUB84(local_198[2],0) ^ uVar18);
    local_198[4] = local_198[1];
    local_168 = local_198[3];
    local_160 = CONCAT44(uVar23,uVar22);
    local_150 = local_198[0];
    local_148 = CONCAT44(uVar23,uVar22);
    local_138[0] = local_198[0];
    local_138[1] = local_198[1];
    local_138[3] = local_198[3];
    local_138[4] = local_198[1];
    local_138[5] = local_138[2];
    local_108 = local_198[3];
    local_100 = CONCAT44(uVar23,uVar22);
    local_f8 = local_138[2];
    local_f0 = local_198[0];
    local_e8 = CONCAT44(uVar23,uVar22);
    local_e0 = local_138[2];
    pUVar13 = pUVar16;
    do {
      auVar2 = *(undefined1 (*) [16])((longlong)local_198 + (longlong)pUVar13);
      dVar39 = *(double *)(&pUVar13->field_0x10 + (longlong)local_198);
      auVar37 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      auVar19 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar30 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
      auVar26 = blendpd(auVar19,auVar37,2);
      dVar41 = auVar2._8_8_;
      dVar1 = auVar37._0_8_;
      auVar42._0_8_ = dVar41 * auVar19._0_8_ - auVar19._8_8_ * auVar2._0_8_;
      auVar42._8_8_ = dVar39 * auVar19._8_8_ - dVar1 * dVar41;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar39;
      auVar19 = blendpd(auVar2,auVar19,2);
      auVar20._0_8_ = auVar19._0_8_ * dVar1 - auVar26._0_8_ * dVar39;
      auVar20._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar26._8_8_ * 0.0;
      auVar19 = blendpd(auVar42,auVar20,2);
      auVar43._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar43._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      dVar38 = auVar42._8_8_ + auVar42._8_8_;
      dVar40 = auVar20._0_8_ + auVar20._0_8_;
      auVar32._8_4_ = SUB84(dVar40,0);
      auVar32._0_8_ = dVar38;
      uVar24 = (undefined4)((ulonglong)dVar40 >> 0x20);
      auVar32._12_4_ = uVar24;
      auVar27._8_4_ = SUB84(dVar40,0);
      auVar27._0_8_ = dVar38;
      auVar27._12_4_ = uVar24;
      auVar19 = blendpd(auVar27,auVar43,2);
      auVar26 = blendpd(auVar30,auVar37,2);
      auVar33._0_8_ = auVar32._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar38;
      auVar33._8_8_ = auVar43._0_8_ * auVar30._8_8_ - dVar1 * dVar40;
      auVar21._8_4_ = SUB84(auVar33._8_8_,0);
      auVar21._0_8_ = auVar33._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
      auVar28._0_8_ = auVar19._0_8_ * dVar1 - auVar26._0_8_ * auVar43._0_8_;
      auVar28._8_8_ = auVar19._8_8_ * auVar37._8_8_ - auVar26._8_8_ * auVar43._8_8_;
      auVar37 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar34 = blendpd(auVar33,auVar28,2);
      dVar1 = *(double *)(&pUVar13->field_0x10 + (longlong)local_138);
      auVar19 = *(undefined1 (*) [16])((longlong)local_138 + (longlong)pUVar13);
      dVar40 = dVar4 * dVar40 + dVar41 + auVar28._0_8_;
      auVar30 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar41 = auVar19._8_8_;
      auVar26._8_4_ = SUB84(dVar40,0);
      auVar26._0_8_ = dVar4 * dVar38 + auVar2._0_8_ + auVar21._8_8_;
      auVar26._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      *(undefined1 (*) [16])((longlong)local_198 + (longlong)pUVar13) = auVar26;
      auVar2 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      dVar40 = auVar2._0_8_;
      *(double *)(&pUVar13->field_0x10 + (longlong)local_198) =
           dVar4 * auVar43._0_8_ + dVar39 + auVar34._0_8_;
      dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
      auVar44._0_8_ = dVar41 * auVar30._0_8_ - auVar30._8_8_ * auVar19._0_8_;
      auVar44._8_8_ = dVar1 * auVar30._8_8_ - dVar40 * dVar41;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar1;
      auVar26 = blendpd(auVar19,auVar34,2);
      auVar34 = blendpd(auVar30,auVar2,2);
      auVar30._0_8_ = auVar26._0_8_ * dVar40 - auVar34._0_8_ * dVar1;
      auVar30._8_8_ = auVar26._8_8_ * auVar2._8_8_ - auVar34._8_8_ * 0.0;
      auVar26 = blendpd(auVar44,auVar30,2);
      dVar39 = auVar44._8_8_ + auVar44._8_8_;
      dVar38 = auVar30._0_8_ + auVar30._0_8_;
      auVar45._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar45._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar35._8_4_ = SUB84(dVar38,0);
      auVar35._0_8_ = dVar39;
      uVar24 = (undefined4)((ulonglong)dVar38 >> 0x20);
      auVar35._12_4_ = uVar24;
      auVar29._8_4_ = SUB84(dVar38,0);
      auVar29._0_8_ = dVar39;
      auVar29._12_4_ = uVar24;
      auVar26 = blendpd(auVar37,auVar2,2);
      auVar30 = blendpd(auVar29,auVar45,2);
      auVar36._0_8_ = auVar35._8_8_ * auVar37._0_8_ - auVar37._8_8_ * dVar39;
      auVar36._8_8_ = auVar45._0_8_ * auVar37._8_8_ - dVar40 * dVar38;
      auVar37._8_4_ = SUB84(auVar36._8_8_,0);
      auVar37._0_8_ = auVar36._0_8_;
      auVar37._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar31._0_8_ = auVar30._0_8_ * dVar40 - auVar26._0_8_ * auVar45._0_8_;
      auVar31._8_8_ = auVar30._8_8_ * auVar2._8_8_ - auVar26._8_8_ * auVar45._8_8_;
      dVar39 = dVar4 * dVar39 + auVar19._0_8_ + auVar37._8_8_;
      dVar40 = dVar4 * dVar38 + dVar41 + auVar31._0_8_;
      uVar24 = SUB84(dVar40,0);
      uVar25 = (undefined4)((ulonglong)dVar40 >> 0x20);
      auVar37 = blendpd(auVar36,auVar31,2);
      auVar2._8_4_ = uVar24;
      auVar2._0_8_ = dVar39;
      auVar2._12_4_ = uVar25;
      *(undefined1 (*) [16])((longlong)local_138 + (longlong)pUVar13) = auVar2;
      local_1a8 = dVar4 * auVar45._0_8_ + dVar1 + auVar37._0_8_;
      local_1b8._8_4_ = uVar24;
      local_1b8._0_8_ = dVar39;
      local_1b8._12_4_ = uVar25;
      *(double *)(&pUVar13->field_0x10 + (longlong)local_138) = local_1a8;
      pUVar13 = (ULineBatchComponent *)&pUVar13->field_0x18;
    } while ((longlong)pUVar13 < 0x60);
    local_1f8 = (param_1->Translation).XY.m128d_f64[0];
    dStack_1f0 = (param_1->Translation).XY.m128d_f64[1];
    local_1e8 = (param_1->Translation).ZW.m128d_f64[0];
    uVar18 = 1;
    local_200 = 0;
    local_1fc = 0;
    local_208.Data = (FScriptContainerElement *)0x0;
    pUVar13 = pUVar16;
    pUVar17 = pUVar16;
    while( true ) {
      iVar12 = (int)pUVar13;
      uVar11 = uVar18 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      lVar14 = (longlong)(int)uVar11;
      dVar41 = local_1f8 + *(double *)((longlong)local_198 + (longlong)pUVar17);
      dVar39 = dStack_1f0 + *(double *)(&pUVar17->field_0x8 + (longlong)local_198);
      dVar1 = local_1e8 + *(double *)(&pUVar17->field_0x10 + (longlong)local_198);
      dVar40 = local_1f8 + local_198[lVar14 * 3];
      dVar4 = dStack_1f0 + local_198[lVar14 * 3 + 1];
      dVar38 = local_1e8 + local_198[lVar14 * 3 + 2];
      if (iVar12 == (int)pUVar16) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_208,(int *)&local_1fc);
      }
      lVar15 = (longlong)iVar12;
      local_200 = iVar12 + 1;
      *(double *)(local_208.Data + lVar15 * 0x50) = dVar41;
      *(double *)(local_208.Data + lVar15 * 0x50 + 8) = dVar39;
      *(double *)(local_208.Data + lVar15 * 0x50 + 0x10) = dVar1;
      *(double *)(local_208.Data + lVar15 * 0x50 + 0x18) = dVar40;
      *(double *)(local_208.Data + lVar15 * 0x50 + 0x20) = dVar4;
      *(double *)(local_208.Data + lVar15 * 0x50 + 0x28) = dVar38;
      uVar8 = *(undefined8 *)&param_3->field0_0x0;
      uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      *(undefined4 *)(local_208.Data + lVar15 * 0x50 + 0x44) = 0;
      dVar5 = local_1f8 + local_138[lVar14 * 3];
      dVar6 = dStack_1f0 + local_138[lVar14 * 3 + 1];
      dVar40 = local_1f8 + *(double *)((longlong)local_138 + (longlong)pUVar17);
      dVar4 = dStack_1f0 + *(double *)(&pUVar17->field_0x8 + (longlong)local_138);
      *(undefined8 *)(local_208.Data + lVar15 * 0x50 + 0x30) = uVar8;
      *(undefined8 *)(local_208.Data + lVar15 * 0x50 + 0x30 + 8) = uVar9;
      local_208.Data[lVar15 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
      *(float *)(local_208.Data + lVar15 * 0x50 + 0x40) = param_4;
      dVar7 = local_1e8 + local_138[lVar14 * 3 + 2];
      dVar38 = local_1e8 + *(double *)(&pUVar17->field_0x10 + (longlong)local_138);
      *(undefined4 *)(local_208.Data + lVar15 * 0x50 + 0x4c) = 0;
      if (local_200 == local_1fc) {
        local_200 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&local_208,(int *)&local_1fc);
      }
      uVar11 = local_200 + 1;
      lVar14 = (longlong)(int)local_200;
      *(double *)(local_208.Data + lVar14 * 0x50) = dVar40;
      *(double *)(local_208.Data + lVar14 * 0x50 + 8) = dVar4;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x10) = dVar38;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x18) = dVar5;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x20) = dVar6;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x28) = dVar7;
      uVar8 = *(undefined8 *)&param_3->field0_0x0;
      uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      *(undefined4 *)(local_208.Data + lVar14 * 0x50 + 0x44) = 0;
      *(float *)(local_208.Data + lVar14 * 0x50 + 0x40) = param_4;
      *(undefined8 *)(local_208.Data + lVar14 * 0x50 + 0x30) = uVar8;
      *(undefined8 *)(local_208.Data + lVar14 * 0x50 + 0x30 + 8) = uVar9;
      local_208.Data[lVar14 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
      *(undefined4 *)(local_208.Data + lVar14 * 0x50 + 0x4c) = 0;
      if (uVar11 == local_1fc) {
        local_200 = uVar11;
        uVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_208,(int *)&local_1fc);
      }
      uVar22 = uVar11 + 1;
      uVar18 = uVar18 + 1;
      pUVar17 = (ULineBatchComponent *)&pUVar17->field_0x18;
      lVar14 = (longlong)(int)uVar11;
      *(double *)(local_208.Data + lVar14 * 0x50) = dVar41;
      *(double *)(local_208.Data + lVar14 * 0x50 + 8) = dVar39;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x10) = dVar1;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x18) = dVar40;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x20) = dVar4;
      *(double *)(local_208.Data + lVar14 * 0x50 + 0x28) = dVar38;
      uVar8 = *(undefined8 *)&param_3->field0_0x0;
      uVar9 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      *(undefined4 *)(local_208.Data + lVar14 * 0x50 + 0x44) = 0;
      *(float *)(local_208.Data + lVar14 * 0x50 + 0x40) = param_4;
      local_208.Data[lVar14 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
      *(undefined4 *)(local_208.Data + lVar14 * 0x50 + 0x4c) = 0;
      *(undefined8 *)(local_208.Data + lVar14 * 0x50 + 0x30) = uVar8;
      *(undefined8 *)(local_208.Data + lVar14 * 0x50 + 0x30 + 8) = uVar9;
      local_200 = uVar22;
      if (0x5f < (longlong)pUVar17) break;
      pUVar16 = (ULineBatchComponent *)(ulonglong)local_1fc;
      pUVar13 = (ULineBatchComponent *)(ulonglong)uVar22;
    }
    local_1d8 = (FBatchedLine *)local_208.Data;
    if (((int)uVar22 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_1c8._12_4_ = uStack_1cc;
    local_1c8.ArrayNum = uVar22;
    local_1c8.DataPtr = local_1d8;
    uStack_1d0 = uVar22;
    ULineBatchComponent::DrawLines(this_00,&local_1c8);
    if (local_208.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data);
    }
  }
  return;
}

// DrawBox @ 14d59f280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawBox
          (FCameraDebugRenderer *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,float param_4)

{
  ULineBatchComponent *this_00;
  FLinearColor_u_0 local_18;
  
  if (this->World != (UWorld *)0x0) {
    this_00 = UWorld::GetLineBatcher(this->World,Foreground);
    if (this_00 != (ULineBatchComponent *)0x0) {
      local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
      local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      ULineBatchComponent::DrawBox
                (this_00,param_1,param_2,(FLinearColor *)&local_18._s_0,0.0,'\x01',param_4,0);
    }
  }
  return;
}

// DrawCamera @ 14d59f310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawCamera
          (FCameraDebugRenderer *this,TTransform<double> *param_1,float param_2,float param_3,
          float param_4,FLinearColor *param_5,float param_6,float param_7)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  ULineBatchComponent *this_00;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  float fVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_238 [32];
  ForAnyElementType local_218;
  undefined8 local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  FBatchedLine *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TVector<double>_u_0 local_1d8;
  TArrayView<FBatchedLine,int> local_1b8;
  TVector<double>_u_0 local_1a8;
  TQuat<double> local_188;
  undefined1 local_168 [16];
  double local_158;
  undefined1 local_148 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  ulonglong local_c8 [22];
  
  local_c8[0] = __security_cookie.value ^ (ulonglong)auStack_238;
  if (param_3 <= 0.0) {
    param_3 = __real_3f800000;
  }
  if (param_6 <= 0.0) {
    param_6 = GGameplayCamerasDebugDefaultCameraSize;
  }
  this_00 = (ULineBatchComponent *)0x0;
  if (this->World != (UWorld *)0x0) {
    this_00 = UWorld::GetLineBatcher(this->World,Foreground);
  }
  if (this_00 != (ULineBatchComponent *)0x0) {
    fVar24 = tanf(param_2 * __real_3c0efa35);
    pauVar22 = (undefined1 (*) [16])&local_128;
    local_1f0 = (double)param_6;
    dVar34 = (double)((fVar24 * param_6) / param_3);
    dVar39 = (double)(fVar24 * param_6);
    dVar2 = dVar39 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
    dVar3 = dVar39 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
    dVar39 = dVar39 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
    dVar4 = dVar34 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
            UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X * local_1f0;
    dVar5 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X * local_1f0 -
            dVar34 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    dVar25 = dVar34 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z +
             UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z * local_1f0;
    dVar6 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z * local_1f0 -
            dVar34 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    dVar29 = dVar34 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
             UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * local_1f0;
    dVar34 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * local_1f0 -
             dVar34 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    local_128 = dVar2 + dVar4;
    local_e0 = dVar4 - dVar2;
    local_118 = dVar3 + dVar25;
    dStack_120 = dVar39 + dVar29;
    dStack_d8 = dVar29 - dVar39;
    local_d0 = dVar25 - dVar3;
    local_110 = dVar5 + dVar2;
    dStack_108 = dVar34 + dVar39;
    local_1f8 = (param_1->Translation).ZW.m128d_f64[0];
    local_f8 = dVar5 - dVar2;
    dStack_f0 = dVar34 - dVar39;
    local_100 = dVar6 + dVar3;
    local_208 = (param_1->Translation).XY.m128d_f64[0];
    dStack_200 = (param_1->Translation).XY.m128d_f64[1];
    local_e8 = dVar6 - dVar3;
    do {
      auVar27 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      dVar29 = auVar27._0_8_;
      auVar28 = *pauVar22;
      dVar2 = *(double *)pauVar22[1];
      local_148 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar30 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
      auVar32 = blendpd(local_148,auVar27,2);
      dVar25 = auVar28._8_8_;
      auVar40._0_8_ = dVar25 * local_148._0_8_ - local_148._8_8_ * auVar28._0_8_;
      auVar40._8_8_ = dVar2 * local_148._8_8_ - dVar29 * dVar25;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar2;
      auVar26 = blendpd(auVar28,auVar26,2);
      auVar33._0_8_ = auVar26._0_8_ * dVar29 - auVar32._0_8_ * dVar2;
      auVar33._8_8_ = auVar26._8_8_ * auVar27._8_8_ - auVar32._8_8_ * 0.0;
      auVar26 = blendpd(auVar40,auVar33,2);
      dVar39 = auVar40._8_8_ + auVar40._8_8_;
      dVar3 = auVar33._0_8_ + auVar33._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar41._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar41._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar35._8_4_ = SUB84(dVar3,0);
      auVar35._0_8_ = dVar39;
      auVar35._12_4_ = uVar37;
      auVar32._8_4_ = SUB84(dVar3,0);
      auVar32._0_8_ = dVar39;
      auVar32._12_4_ = uVar37;
      auVar26 = blendpd(auVar32,auVar41,2);
      auVar33 = blendpd(auVar30,auVar27,2);
      auVar36._0_8_ = auVar35._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar39;
      auVar36._8_8_ = auVar41._0_8_ * auVar30._8_8_ - dVar29 * dVar3;
      auVar30._0_8_ = auVar26._0_8_ * dVar29 - auVar33._0_8_ * auVar41._0_8_;
      auVar30._8_8_ = auVar26._8_8_ * auVar27._8_8_ - auVar33._8_8_ * auVar41._8_8_;
      auVar27._8_4_ = SUB84(auVar36._8_8_,0);
      auVar27._0_8_ = auVar36._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar26 = blendpd(auVar36,auVar30,2);
      dVar39 = dVar39 * dVar4 + auVar28._0_8_ + auVar27._8_8_;
      dVar3 = dVar3 * dVar4 + dVar25 + auVar30._0_8_;
      uVar37 = SUB84(dVar3,0);
      uVar38 = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_158 = auVar41._0_8_ * dVar4 + dVar2 + auVar26._0_8_;
      local_168._8_4_ = uVar37;
      local_168._0_8_ = dVar39;
      local_168._12_4_ = uVar38;
      auVar7._4_8_ = auVar30._0_8_;
      auVar7._0_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar28._0_8_ = auVar7._0_8_ << 0x20;
      auVar28._8_4_ = uVar37;
      auVar28._12_4_ = uVar38;
      *(double *)*pauVar22 = local_208 + dVar39;
      *(double *)(*pauVar22 + 8) = dStack_200 + auVar28._8_8_;
      *(double *)pauVar22[1] = local_1f8 + local_158;
      pauVar22 = (undefined1 (*) [16])(pauVar22[1] + 8);
    } while (pauVar22 != (undefined1 (*) [16])local_c8);
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210 = 0;
    iVar20 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    dVar29 = local_118;
    dVar4 = dStack_120;
    dVar3 = local_128;
    dVar39 = local_1f8;
    dVar2 = local_208;
    auVar11._8_8_ = dStack_200;
    auVar11._0_8_ = local_208;
    uVar12 = (ulonglong)local_208 >> 0x20;
    uVar37 = SUB84(dStack_200,0);
    uVar13 = (ulonglong)dStack_200 >> 0x20;
    iVar21 = iVar20 + 1;
    lVar23 = (longlong)iVar20;
    *(undefined1 (*) [16])&local_218.Data[lVar23 * 0x50].field_0x0 = auVar11;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = local_128;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dStack_120;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = local_1f8;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = local_118;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if (iVar21 == local_210._4_4_) {
      local_210._0_4_ = iVar21;
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    dVar34 = local_100;
    dVar5 = dStack_108;
    dVar25 = local_110;
    local_210._0_4_ = iVar21 + 1;
    lVar23 = (longlong)iVar21;
    *(undefined1 (*) [16])&local_218.Data[lVar23 * 0x50].field_0x0 = auVar11;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = local_110;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dStack_108;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar39;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = local_100;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if ((int)local_210 == local_210._4_4_) {
      local_210._0_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    dVar15 = local_e8;
    dVar14 = dStack_f0;
    dVar6 = local_f8;
    iVar21 = (int)local_210 + 1;
    lVar23 = (longlong)(int)local_210;
    *(undefined1 (*) [16])&local_218.Data[lVar23 * 0x50].field_0x0 = auVar11;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = local_f8;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dStack_f0;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar39;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = local_e8;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if (iVar21 == local_210._4_4_) {
      local_210._0_4_ = iVar21;
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    dVar18 = local_d0;
    dVar17 = dStack_d8;
    dVar16 = local_e0;
    local_210._0_4_ = iVar21 + 1;
    lVar23 = (longlong)iVar21;
    *(undefined1 (*) [16])&local_218.Data[lVar23 * 0x50].field_0x0 = auVar11;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar39;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = local_e0;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dStack_d8;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = local_d0;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if ((int)local_210 == local_210._4_4_) {
      local_210._0_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    iVar21 = (int)local_210 + 1;
    lVar23 = (longlong)(int)local_210;
    *(double *)&local_218.Data[lVar23 * 0x50].field_0x0 = dVar3;
    *(double *)(local_218.Data + lVar23 * 0x50 + 8) = dVar4;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = dVar25;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dVar5;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar29;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = dVar34;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if (iVar21 == local_210._4_4_) {
      local_210._0_4_ = iVar21;
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    local_210._0_4_ = iVar21 + 1;
    lVar23 = (longlong)iVar21;
    *(double *)&local_218.Data[lVar23 * 0x50].field_0x0 = dVar25;
    *(double *)(local_218.Data + lVar23 * 0x50 + 8) = dVar5;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = dVar6;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dVar14;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar34;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = dVar15;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if ((int)local_210 == local_210._4_4_) {
      local_210._0_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    iVar21 = (int)local_210 + 1;
    lVar23 = (longlong)(int)local_210;
    *(double *)&local_218.Data[lVar23 * 0x50].field_0x0 = dVar6;
    *(double *)(local_218.Data + lVar23 * 0x50 + 8) = dVar14;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = dVar16;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dVar17;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar15;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = dVar18;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if (iVar21 == local_210._4_4_) {
      local_210._0_4_ = iVar21;
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    local_210._0_4_ = iVar21 + 1;
    lVar23 = (longlong)iVar21;
    *(double *)&local_218.Data[lVar23 * 0x50].field_0x0 = dVar16;
    *(double *)(local_218.Data + lVar23 * 0x50 + 8) = dVar17;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = dVar3;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dVar4;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar18;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = dVar29;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if ((int)local_210 == local_210._4_4_) {
      local_210._0_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    iVar21 = (int)local_210 + 1;
    lVar23 = (longlong)(int)local_210;
    *(double *)&local_218.Data[lVar23 * 0x50].field_0x0 = dVar3;
    *(double *)(local_218.Data + lVar23 * 0x50 + 8) = dVar4;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = dVar6;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dVar14;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar29;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = dVar15;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if (iVar21 == local_210._4_4_) {
      local_210._0_4_ = iVar21;
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_218,(int *)((longlong)&local_210 + 4));
    }
    local_210._0_4_ = iVar21 + 1;
    lVar23 = (longlong)iVar21;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = dVar16;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x18 + 8) = dVar17;
    fVar24 = __real_00000000;
    *(double *)&local_218.Data[lVar23 * 0x50].field_0x0 = dVar25;
    *(double *)(local_218.Data + lVar23 * 0x50 + 8) = dVar5;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar34;
    *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = dVar18;
    uVar9 = *(undefined8 *)&param_5->field0_0x0;
    uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
    *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
    *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
    local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
    *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
    if (fVar24 < param_4) {
      local_188.Z = (param_1->Rotation).ZW.m128d_f64[0];
      local_188.W = (param_1->Rotation).ZW.m128d_f64[1];
      local_188.X = (param_1->Rotation).XY.m128d_f64[0];
      dVar39 = (param_1->Rotation).XY.m128d_f64[1];
      local_1a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_1a8._s_0.Y = _UNK_150689518;
      local_1a8._s_0.Z = 0.0;
      local_188.Y = dVar39;
      UE::Math::TQuat<double>::RotateVector
                (&local_188,(TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_1a8._s_0);
      auVar8._4_8_ = dVar39;
      auVar8._0_4_ = (int)uVar12;
      auVar31._0_8_ = auVar8._0_8_ << 0x20;
      auVar31._8_4_ = uVar37;
      auVar31._12_4_ = (int)uVar13;
      dVar25 = (double)param_4;
      dVar39 = local_1d8._s_0.X * local_1f0;
      dVar3 = local_1d8._s_0.Y * local_1f0;
      dVar29 = local_1d8._s_0.Z * dVar25 + local_1f8;
      dVar4 = local_1d8._s_0.Z * local_1f0 + local_1f8;
      if ((int)local_210 == local_210._4_4_) {
        local_210._0_4_ =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&local_218,(int *)((longlong)&local_210 + 4));
      }
      lVar23 = (longlong)(int)local_210;
      *(double *)&local_218.Data[lVar23 * 0x50].field_0x0 = dVar39 + dVar2;
      *(double *)(local_218.Data + lVar23 * 0x50 + 8) = dVar3 + auVar31._8_8_;
      *(double *)(local_218.Data + lVar23 * 0x50 + 0x10) = dVar4;
      *(double *)(local_218.Data + lVar23 * 0x50 + 0x18) = local_1d8._s_0.X * dVar25 + dVar2;
      *(double *)(local_218.Data + lVar23 * 0x50 + 0x20) = local_1d8._s_0.Y * dVar25 + auVar31._8_8_
      ;
      *(double *)(local_218.Data + lVar23 * 0x50 + 0x28) = dVar29;
      uVar9 = *(undefined8 *)&param_5->field0_0x0;
      uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
      *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x44) = 0;
      *(float *)(local_218.Data + lVar23 * 0x50 + 0x40) = param_7;
      *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30) = uVar9;
      *(undefined8 *)(local_218.Data + lVar23 * 0x50 + 0x30 + 8) = uVar10;
      local_218.Data[lVar23 * 0x50 + 0x48] = (FScriptContainerElement)0x1;
      *(undefined4 *)(local_218.Data + lVar23 * 0x50 + 0x4c) = 0;
      local_210._0_4_ = (int)local_210 + 1;
    }
    iVar21 = (int)local_210;
    local_1e8 = (FBatchedLine *)local_218.Data;
    if (((int)local_210 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iStack_1e0 = iVar21;
    local_1b8._12_4_ = uStack_1dc;
    local_1b8.ArrayNum = iVar21;
    local_1b8.DataPtr = local_1e8;
    ULineBatchComponent::DrawLines(this_00,&local_1b8);
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
  }
  return;
}

// DrawCameraPose @ 14d59fcf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawCameraPose
          (FCameraDebugRenderer *this,FCameraPose *param_1,FLinearColor *param_2,float param_3)

{
  double dVar1;
  TQuat<double> *pTVar2;
  float fVar3;
  TQuat<double> local_98;
  TTransform<double> local_78;
  
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Translation.XY.m128d_f64[0] = (param_1->Location).field0_0x0._s_0.X;
  local_78.Translation.XY.m128d_f64[1] = (param_1->Location).field0_0x0._s_0.Y;
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_78.Translation.ZW.m128d_f64[0] = (param_1->Location).field0_0x0._s_0.Z;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  pTVar2 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_98);
  local_78.Rotation.XY.m128d_f64[0] = pTVar2->X;
  local_78.Rotation.XY.m128d_f64[1] = pTVar2->Y;
  local_78.Rotation.ZW.m128d_f64[0] = pTVar2->Z;
  local_78.Rotation.ZW.m128d_f64[1] = pTVar2->W;
  dVar1 = FCameraPose::GetEffectiveFieldOfView
                    (param_1->FocalLength,param_1->FieldOfView,param_1->SensorWidth,
                     param_1->SensorHeight,param_1->SqueezeFactor,param_1->Overscan);
  if (param_1->SensorHeight <= 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = param_1->SensorWidth / param_1->SensorHeight;
  }
  DrawCamera(this,&local_78,(float)dVar1,fVar3,(float)param_1->TargetDistance,param_2,param_3,
             __real_3f800000);
  return;
}

// DrawClock @ 14d5a0070

/* WARNING: Removing unreachable block (ram,0x00014d5a02d1) */
/* WARNING: Removing unreachable block (ram,0x00014d5a02f6) */
/* WARNING: Removing unreachable block (ram,0x00014d5a030a) */
/* WARNING: Removing unreachable block (ram,0x00014d5a032f) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawClock
          (FCameraDebugRenderer *this,FCameraDebugClock *param_1,FText *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  uint uVar5;
  ITextData *pIVar6;
  TVector2<float> TVar7;
  TRefCountPtr<ITextData> TVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  float local_res18;
  float fStackX_1c;
  FText local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  FCameraDebugClockRenderer local_a8;
  
  FText::FText(&local_e8);
  TVar8.Reference = local_e8.TextData.Reference;
  fVar1 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.R];
  fVar2 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.G];
  fVar3 = FLinearColor::sRGBToLinearTable
          [FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.B];
  pIVar6 = (param_2->TextData).Reference;
  fVar9 = (float)((int)(GGameplayCamerasDebugBackgroundOpacity * __real_437f0000) & 0xff) *
          __real_3b808081;
  local_d8 = FLinearColor::sRGBToLinearTable
             [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.R];
  fStack_d4 = FLinearColor::sRGBToLinearTable
              [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.G];
  fStack_d0 = FLinearColor::sRGBToLinearTable
              [FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._s_0.B];
  local_c8 = FLinearColor::sRGBToLinearTable
             [FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._s_0.R];
  fStack_cc = (float)FCameraDebugColors::CurrentColorScheme.Title.field0_0x0._3_1_ * __real_3b808081
  ;
  fStack_c4 = FLinearColor::sRGBToLinearTable
              [FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._s_0.G];
  fStack_c0 = FLinearColor::sRGBToLinearTable
              [FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._s_0.B];
  local_b8 = FLinearColor::sRGBToLinearTable
             [FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._s_0.R];
  fStack_bc = (float)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._3_1_ *
              __real_3b808081;
  fStack_b4 = FLinearColor::sRGBToLinearTable
              [FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._s_0.G];
  fStack_b0 = FLinearColor::sRGBToLinearTable
              [FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._s_0.B];
  fStack_ac = (float)FCameraDebugColors::CurrentColorScheme.Warning.field0_0x0._3_1_ *
              __real_3b808081;
  if (local_e8.TextData.Reference != pIVar6) {
    local_e8.TextData.Reference = pIVar6;
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res8);
    }
    if (TVar8.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
    }
  }
  TVar8.Reference = local_e8.TextData.Reference;
  uVar5 = param_2->Flags;
  local_e8.Flags = uVar5;
  TVar7 = GetNextCardPosition(this);
  local_a8.Canvas = this->Canvas;
  local_a8.DrawParams.ClockPosition.field0_0x0 = *(TVector2<float>_u_0 *)TVar7.field0_0x0;
  local_res18 = (float)GGameplayCamerasDebugCardWidth;
  fStackX_1c = (float)GGameplayCamerasDebugCardHeight;
  local_a8.DrawParams.ClockBackgroundColor.field0_0x0._0_8_ = CONCAT44(fVar2,fVar1);
  local_a8.DrawParams.ClockBackgroundColor.field0_0x0._8_8_ = CONCAT44(fVar9,fVar3);
  local_a8.DrawParams.ClockSize.field0_0x0._s_0.Y = fStackX_1c;
  local_a8.DrawParams.ClockSize.field0_0x0._s_0.X = local_res18;
  local_a8.DrawParams.ClockName.Flags = uVar5;
  local_a8.DrawParams.ClockName.TextData.Reference = TVar8.Reference;
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_res10);
    TVar8.Reference = local_e8.TextData.Reference;
    local_a8.DrawParams.ClockName.Flags = local_e8.Flags;
  }
  local_a8.DrawParams.ClockNameColor.field0_0x0._0_8_ = CONCAT44(fStack_d4,local_d8);
  local_a8.DrawParams.ClockNameColor.field0_0x0._8_8_ = CONCAT44(fStack_cc,fStack_d0);
  uVar4 = (param_1->Value).TypeIndex;
  local_a8.DrawParams.ClockFaceColor.field0_0x0._0_8_ = CONCAT44(fStack_c4,local_c8);
  local_a8.DrawParams.ClockFaceColor.field0_0x0._8_8_ = CONCAT44(fStack_bc,fStack_c0);
  local_a8.DrawParams.ClockValueLineColor.field0_0x0._0_8_ = CONCAT44(fStack_b4,local_b8);
  local_a8.DrawParams.ClockValueLineColor.field0_0x0._8_8_ = CONCAT44(fStack_ac,fStack_b0);
  if (uVar4 == '\0') {
    Cameras::Internal::FCameraDebugClockRenderer::DrawVectorClock
              (&local_a8,(TVector2<double> *)param_1,(double)(param_1->Value)._padding_);
    TVar8.Reference = local_e8.TextData.Reference;
  }
  else if (uVar4 == '\x01') {
    Cameras::Internal::FCameraDebugClockRenderer::DrawAngleClock
              (&local_a8,(double)(param_1->Value)._padding_);
    TVar8.Reference = local_e8.TextData.Reference;
  }
  if (local_a8.DrawParams.ClockName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.DrawParams.ClockName.TextData.Reference + 0x10))();
    TVar8.Reference = local_e8.TextData.Reference;
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
  }
  return;
}

// DrawCoordinateSystem @ 14d5a0380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawCoordinateSystem
          (FCameraDebugRenderer *this,TTransform<double> *param_1,float param_2)

{
  code *pcVar1;
  double dVar2;
  TRotator<double> *this_00;
  ULineBatchComponent *pUVar3;
  TVector<double> *pTVar4;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  TVector<double> local_80;
  TQuat<double> local_68;
  TRotator<double> local_48 [2];
  
  local_68.X = (param_1->Rotation).XY.m128d_f64[0];
  local_68.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_68.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_68.W = (param_1->Rotation).ZW.m128d_f64[1];
  this_00 = UE::Math::TQuat<double>::Rotator(&local_68,local_48);
  local_c8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_c0 = (param_1->Translation).XY.m128d_f64[1];
  local_b8 = (param_1->Translation).ZW.m128d_f64[0];
  if (this->World != (UWorld *)0x0) {
    pUVar3 = UWorld::GetLineBatcher(this->World,Foreground);
    if (pUVar3 != (ULineBatchComponent *)0x0) {
      if (param_2 <= 0.0) {
        param_2 = GGameplayCamerasDebugDefaultCoordinateSystemAxesLength;
      }
      dVar2 = (double)param_2;
      pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xa90);
      local_b0._8_4_ = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar2,0);
      local_b0._0_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X * dVar2;
      local_b0._12_4_ =
           (int)((ulonglong)(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar2) >>
                0x20);
      local_b0._16_8_ = dVar2 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      pTVar4 = UE::Math::TRotator<double>::RotateVector
                         (this_00,&local_80,(TVector<double> *)local_b0);
      local_98._16_8_ = (pTVar4->field0_0x0)._s_0.Z + local_b8;
      local_98._8_8_ = (pTVar4->field0_0x0)._s_0.Y + dStack_c0;
      local_98._0_8_ = local_c8 + (pTVar4->field0_0x0)._s_0.X;
      (*pcVar1)(pUVar3,&local_c8,local_98,&FLinearColor::Red,1,0,0,0);
      pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xa90);
      local_98._8_4_ = SUB84(UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * dVar2,0);
      local_98._0_8_ = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * dVar2;
      local_98._12_4_ =
           (int)((ulonglong)(UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * dVar2) >>
                0x20);
      local_98._16_8_ = dVar2 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      pTVar4 = UE::Math::TRotator<double>::RotateVector
                         (this_00,&local_80,(TVector<double> *)local_98);
      local_b0._16_8_ = (pTVar4->field0_0x0)._s_0.Z + local_b8;
      local_b0._8_8_ = (pTVar4->field0_0x0)._s_0.Y + dStack_c0;
      local_b0._0_8_ = local_c8 + (pTVar4->field0_0x0)._s_0.X;
      (*pcVar1)(pUVar3,&local_c8,local_b0,&FLinearColor::Green,1,0,0,0);
      pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xa90);
      local_98._16_8_ = dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      local_98._8_4_ = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2,0);
      local_98._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar2;
      local_98._12_4_ =
           (int)((ulonglong)(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2) >> 0x20)
      ;
      pTVar4 = UE::Math::TRotator<double>::RotateVector
                         (this_00,&local_80,(TVector<double> *)local_98);
      local_b0._16_8_ = local_b8 + (pTVar4->field0_0x0)._s_0.Z;
      local_b0._8_8_ = dStack_c0 + (pTVar4->field0_0x0)._s_0.Y;
      local_b0._0_8_ = local_c8 + (pTVar4->field0_0x0)._s_0.X;
      (*pcVar1)(pUVar3,&local_c8,local_b0,&FLinearColor::Blue,1,0,0,0);
    }
  }
  return;
}

// DrawCoordinateSystem @ 14d5a0600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawCoordinateSystem
          (FCameraDebugRenderer *this,TVector<double> *param_1,TRotator<double> *param_2,
          float param_3)

{
  code *pcVar1;
  double dVar2;
  ULineBatchComponent *pUVar3;
  TVector<double> *pTVar4;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  TVector<double> local_48 [2];
  
  if ((this->World != (UWorld *)0x0) &&
     (pUVar3 = UWorld::GetLineBatcher(this->World,Foreground), pUVar3 != (ULineBatchComponent *)0x0)
     ) {
    if (param_3 <= 0.0) {
      param_3 = GGameplayCamerasDebugDefaultCoordinateSystemAxesLength;
    }
    dVar2 = (double)param_3;
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xa90);
    local_78._8_4_ = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar2,0);
    local_78._0_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X * dVar2;
    local_78._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * dVar2) >>
              0x20);
    local_78._16_8_ = dVar2 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    pTVar4 = UE::Math::TRotator<double>::RotateVector(param_2,local_48,(TVector<double> *)local_78);
    local_60._16_8_ = (pTVar4->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    local_60._8_8_ = (pTVar4->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_60._0_8_ = (pTVar4->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
    (*pcVar1)(pUVar3,param_1,local_60,&FLinearColor::Red,1,0,0,0);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xa90);
    local_60._8_4_ = SUB84(UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * dVar2,0);
    local_60._0_8_ = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * dVar2;
    local_60._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * dVar2) >> 0x20
              );
    local_60._16_8_ = dVar2 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
    pTVar4 = UE::Math::TRotator<double>::RotateVector(param_2,local_48,(TVector<double> *)local_60);
    local_78._16_8_ = (pTVar4->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    local_78._8_8_ = (pTVar4->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_78._0_8_ = (param_1->field0_0x0)._s_0.X + (pTVar4->field0_0x0)._s_0.X;
    (*pcVar1)(pUVar3,param_1,local_78,&FLinearColor::Green,1,0,0,0);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0xa90);
    local_60._16_8_ = dVar2 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    local_60._8_4_ = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2,0);
    local_60._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar2;
    local_60._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2) >> 0x20);
    pTVar4 = UE::Math::TRotator<double>::RotateVector(param_2,local_48,(TVector<double> *)local_60);
    local_78._16_8_ = (pTVar4->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    local_78._8_8_ = (pTVar4->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_78._0_8_ = (pTVar4->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
    (*pcVar1)(pUVar3,param_1,local_78,&FLinearColor::Blue,1,0,0,0);
  }
  return;
}

// DrawDirectionalArrow @ 14d5a0900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawDirectionalArrow
          (FCameraDebugRenderer *this,TVector<double> *param_1,TVector<double> *param_2,
          float param_3,FLinearColor *param_4,float param_5)

{
  ULineBatchComponent *this_00;
  FLinearColor_u_0 local_28 [2];
  
  if (this->World != (UWorld *)0x0) {
    this_00 = UWorld::GetLineBatcher(this->World,Foreground);
    if (this_00 != (ULineBatchComponent *)0x0) {
      local_28[0]._0_8_ = *(undefined8 *)&param_4->field0_0x0;
      local_28[0]._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
      ULineBatchComponent::DrawDirectionalArrow
                (this_00,param_1,param_2,param_3,(FLinearColor *)&local_28[0]._s_0,0.0,'\x01',
                 param_5,0);
    }
  }
  return;
}

// DrawLine @ 14d5a1520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawLine
          (FCameraDebugRenderer *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,float param_4)

{
  ULineBatchComponent *pUVar1;
  
  if (this->World != (UWorld *)0x0) {
    pUVar1 = UWorld::GetLineBatcher(this->World,Foreground);
    if (pUVar1 != (ULineBatchComponent *)0x0) {
      (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,param_1,param_2,param_3,1,param_4,0,0);
    }
  }
  return;
}

// DrawPoint @ 14d5a15a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawPoint
          (FCameraDebugRenderer *this,TVector<double> *param_1,float param_2,FLinearColor *param_3,
          float param_4)

{
  ULineBatchComponent *pUVar1;
  
  if (this->World != (UWorld *)0x0) {
    pUVar1 = UWorld::GetLineBatcher(this->World,Foreground);
    if (pUVar1 != (ULineBatchComponent *)0x0) {
      (**(code **)(*(longlong *)pUVar1 + 0xa98))(pUVar1,param_1,param_3,param_2,1,0,0);
    }
  }
  return;
}

// DrawSphere @ 14d5a1620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawSphere
          (FCameraDebugRenderer *this,TVector<double> *param_1,float param_2,int param_3,
          FLinearColor *param_4,float param_5)

{
  ULineBatchComponent *this_00;
  FLinearColor_u_0 local_28 [2];
  
  if (this->World != (UWorld *)0x0) {
    this_00 = UWorld::GetLineBatcher(this->World,Foreground);
    if (this_00 != (ULineBatchComponent *)0x0) {
      local_28[0]._0_8_ = *(undefined8 *)&param_4->field0_0x0;
      local_28[0]._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
      ULineBatchComponent::DrawSphere
                (this_00,param_1,param_2,param_3,(FLinearColor *)&local_28[0]._s_0,0.0,'\x01',
                 param_5,0);
    }
  }
  return;
}

// DrawText @ 14d5a16c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawText
          (FCameraDebugRenderer *this,TVector<double> *param_1,TVector2<double> *param_2,
          FString *param_3,FLinearColor *param_4,UFont *param_5,float param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FText *pFVar4;
  FSceneView *this_00;
  TVector2<double>_u_0 local_278;
  TVector2<double>_u_0 local_268;
  FText local_258;
  FCanvasTextItem local_248;
  
  if ((this->Canvas != (FCanvas *)0x0) && (this_00 = this->SceneView, this_00 != (FSceneView *)0x0))
  {
    if (param_5 == (UFont *)0x0) {
      param_5 = UEngine::GetSmallFont();
      this_00 = this->SceneView;
    }
    dVar1 = (param_2->field0_0x0)._s_0.X;
    if ((dVar1 != 0.0) ||
       (uVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,
       uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
       (param_2->field0_0x0)._s_0.Y != 0.0)) {
      uVar2 = dVar1 / (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 8) -
                              *(int *)&(this_00->UnscaledViewRect).field0_0x0);
      uVar3 = (param_2->field0_0x0)._s_0.Y /
              (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 0xc) -
                      *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 4));
    }
    FSceneView::WorldToPixel(this_00,param_1,(TVector2<double> *)&local_278._s_0);
    pFVar4 = FText::FromString(&local_258,param_3);
    local_268._s_0.X = (double)uVar2 + local_278._s_0.X;
    local_268._s_0.Y = (double)uVar3 + local_278._s_0.Y;
    FCanvasTextItem::FCanvasTextItem
              (&local_248,(TVector2<double> *)&local_268._s_0,pFVar4,param_5,param_4);
    if (local_258.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
    }
    local_248._padding_ = (longlong)(double)param_6;
    local_248._padding_._4_4_ = 2;
    local_248._padding_ = local_248._padding_;
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_248);
    FCanvasTextItem::~FCanvasTextItem(&local_248);
  }
  return;
}

// DrawText @ 14d5a1860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawText
          (FCameraDebugRenderer *this,TVector<double> *param_1,FString *param_2,
          FLinearColor *param_3,UFont *param_4,float param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FText *pFVar3;
  FSceneView *this_00;
  TVector2<double>_u_0 local_278;
  TVector2<double>_u_0 local_268;
  FText local_258;
  FCanvasTextItem local_248;
  
  if ((this->Canvas != (FCanvas *)0x0) && (this_00 = this->SceneView, this_00 != (FSceneView *)0x0))
  {
    if (param_4 == (UFont *)0x0) {
      param_4 = UEngine::GetSmallFont();
      this_00 = this->SceneView;
    }
    if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X != 0.0) ||
       (uVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,
       uVar1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
       UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y != 0.0)) {
      uVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X /
              (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 8) -
                      *(int *)&(this_00->UnscaledViewRect).field0_0x0);
      uVar1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y /
              (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 0xc) -
                      *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 4));
    }
    FSceneView::WorldToPixel(this_00,param_1,(TVector2<double> *)&local_278._s_0);
    pFVar3 = FText::FromString(&local_258,param_2);
    local_268._s_0.X = (double)uVar2 + local_278._s_0.X;
    local_268._s_0.Y = (double)uVar1 + local_278._s_0.Y;
    FCanvasTextItem::FCanvasTextItem
              (&local_248,(TVector2<double> *)&local_268._s_0,pFVar3,param_4,param_3);
    if (local_258.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
    }
    local_248._padding_ = (longlong)(double)param_5;
    local_248._padding_._4_4_ = 2;
    local_248._padding_ = local_248._padding_;
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_248);
    FCanvasTextItem::~FCanvasTextItem(&local_248);
  }
  return;
}

// DrawTextBackgroundTile @ 14d5a19e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawTextBackgroundTile(FCameraDebugRenderer *this,float param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  FCanvas *this_00;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FLinearColor_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  FCanvasTileItem local_d8;
  
  if (__real_322bcc77 <
      (float)((uint)((this->NextDrawPosition).field0_0x0._s_0.X -
                    (float)(this->IndentLevel * GGameplayCamerasDebugIndent +
                           GGameplayCamerasDebugLeftMargin)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar8 = (float)this->MaxCharHeight + (this->NextDrawPosition).field0_0x0._s_0.Y;
  }
  else {
    fVar8 = (this->NextDrawPosition).field0_0x0._s_0.Y;
  }
  fVar9 = param_1 * __real_437f0000;
  uVar6 = (ulonglong)FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.B;
  uVar5 = (ulonglong)FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.G;
  fVar7 = (float)GGameplayCamerasDebugInnerMargin;
  uVar4 = (ulonglong)FCameraDebugColors::CurrentColorScheme.Background.field0_0x0._s_0.R;
  local_e8._s_0.X = (double)((float)GGameplayCamerasDebugLeftMargin - fVar7);
  local_e8._s_0.Y = (double)((float)GGameplayCamerasDebugTopMargin - fVar7);
  local_f8._s_0.X = (double)(fVar7 + this->RightMargin) - local_e8._s_0.X;
  local_f8._s_0.Y = (double)(fVar7 + fVar8) - local_e8._s_0.Y;
  if ((this->Canvas != (FCanvas *)0x0) && ((float)GGameplayCamerasDebugTopMargin < fVar8)) {
    FCanvas::PushDepthSortKey(this->Canvas,GGameplayCamerasDebugBackgroundDepthSortKey);
    local_108._s_0.R = FLinearColor::sRGBToLinearTable[uVar4];
    local_108._s_0.G = FLinearColor::sRGBToLinearTable[uVar5];
    local_108._s_0.B = FLinearColor::sRGBToLinearTable[uVar6];
    local_108._s_0.A = (float)((int)fVar9 & 0xff) * __real_3b808081;
    FCanvasTileItem::FCanvasTileItem
              (&local_d8,(TVector2<double> *)&local_e8._s_0,(TVector2<double> *)&local_f8._s_0,
               (FLinearColor *)&local_108._s_0);
    local_d8._padding_._4_4_ = 2;
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_d8);
    this_00 = this->Canvas;
    if ((this_00->DepthSortKeyStack).ArrayNum < 1) {
      FCanvas::PushDepthSortKey(this_00,0);
    }
    else {
      iVar3 = (this_00->DepthSortKeyStack).ArrayNum;
      uVar1 = iVar3 - 1;
      _Dst = (this_00->DepthSortKeyStack).AllocatorInstance.Data + (longlong)(int)uVar1 * 4;
      iVar3 = ~uVar1 + iVar3;
      if (iVar3 != 0) {
        memmove(_Dst,_Dst + 4,(longlong)iVar3 << 2);
      }
      piVar2 = &(this_00->DepthSortKeyStack).ArrayNum;
      *piVar2 = *piVar2 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(this_00->DepthSortKeyStack).AllocatorInstance,
                 (this_00->DepthSortKeyStack).ArrayNum,&(this_00->DepthSortKeyStack).ArrayMax);
    }
  }
  return;
}

// DrawTextView @ 14d5a1c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawTextView
          (FCameraDebugRenderer *this,TVector<double> *param_1,TVector2<double> *param_2,
          TStringView<wchar_t> *param_3,FLinearColor *param_4,UFont *param_5,float param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSceneView *this_00;
  TVector2<double>_u_0 local_268;
  TVector2<double>_u_0 local_258;
  FCanvasTextItemBase local_248;
  UFont *local_b0;
  TReferenceControllerBase<1> *local_70;
  char local_48;
  wchar_t *local_40;
  undefined8 uStack_38;
  
  if ((this->Canvas != (FCanvas *)0x0) && (this_00 = this->SceneView, this_00 != (FSceneView *)0x0))
  {
    if (param_5 == (UFont *)0x0) {
      param_5 = UEngine::GetSmallFont();
      this_00 = this->SceneView;
    }
    dVar1 = (param_2->field0_0x0)._s_0.X;
    if ((dVar1 != 0.0) ||
       (uVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,
       uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
       (param_2->field0_0x0)._s_0.Y != 0.0)) {
      uVar2 = dVar1 / (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 8) -
                              *(int *)&(this_00->UnscaledViewRect).field0_0x0);
      uVar3 = (param_2->field0_0x0)._s_0.Y /
              (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 0xc) -
                      *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 4));
    }
    FSceneView::WorldToPixel(this_00,param_1,(TVector2<double> *)&local_268._s_0);
    local_258._s_0.X = (double)uVar2 + local_268._s_0.X;
    local_258._s_0.Y = (double)uVar3 + local_268._s_0.Y;
    FCanvasTextItemBase::FCanvasTextItemBase(&local_248,(TVector2<double> *)&local_258._s_0,param_4)
    ;
    local_40 = param_3->DataPtr;
    uStack_38 = *(undefined8 *)&param_3->Size;
    dVar1 = (double)param_6;
    local_48 = '\0';
    local_248._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
    local_248._padding_._4_4_ = 2;
    local_248.Scale.field0_0x0._8_4_ = SUB84(dVar1,0);
    local_248.Scale.field0_0x0._s_0.X = dVar1;
    local_248.Scale.field0_0x0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_b0 = param_5;
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_248);
    if (local_48 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    }
    FCanvasTextItemBase::~FCanvasTextItemBase(&local_248);
  }
  return;
}

// DrawTextView @ 14d5a1dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawTextView
          (FCameraDebugRenderer *this,TVector<double> *param_1,TStringView<wchar_t> *param_2,
          FLinearColor *param_3,UFont *param_4,float param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSceneView *this_00;
  TVector2<double>_u_0 local_268;
  TVector2<double>_u_0 local_258;
  FCanvasTextItemBase local_248;
  UFont *local_b0;
  TReferenceControllerBase<1> *local_70;
  char local_48;
  wchar_t *local_40;
  undefined8 uStack_38;
  
  if ((this->Canvas != (FCanvas *)0x0) && (this_00 = this->SceneView, this_00 != (FSceneView *)0x0))
  {
    if (param_4 == (UFont *)0x0) {
      param_4 = UEngine::GetSmallFont();
      this_00 = this->SceneView;
    }
    if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X != 0.0) ||
       (uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,
       uVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
       UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y != 0.0)) {
      uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X /
              (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 8) -
                      *(int *)&(this_00->UnscaledViewRect).field0_0x0);
      uVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y /
              (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 0xc) -
                      *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 4));
    }
    FSceneView::WorldToPixel(this_00,param_1,(TVector2<double> *)&local_268._s_0);
    local_258._s_0.X = (double)uVar3 + local_268._s_0.X;
    local_258._s_0.Y = (double)uVar2 + local_268._s_0.Y;
    FCanvasTextItemBase::FCanvasTextItemBase(&local_248,(TVector2<double> *)&local_258._s_0,param_3)
    ;
    local_40 = param_2->DataPtr;
    uStack_38 = *(undefined8 *)&param_2->Size;
    dVar1 = (double)param_5;
    local_48 = '\0';
    local_248._padding_ = (longlong)&___7FCanvasTextStringViewItem__6B_;
    local_248._padding_._4_4_ = 2;
    local_248.Scale.field0_0x0._8_4_ = SUB84(dVar1,0);
    local_248.Scale.field0_0x0._s_0.X = dVar1;
    local_248.Scale.field0_0x0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_b0 = param_4;
    FCanvas::DrawItem(this->Canvas,(FCanvasItem *)&local_248);
    if (local_48 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    }
    FCanvasTextItemBase::~FCanvasTextItemBase(&local_248);
  }
  return;
}

// EndDrawing @ 14d5a2f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::EndDrawing(FCameraDebugRenderer *this)

{
  if (GGameplayCamerasDebugDrawBackground) {
    DrawTextBackgroundTile(this,GGameplayCamerasDebugBackgroundOpacity);
    return;
  }
  return;
}

// FlushText @ 14d5a56a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::FlushText(FCameraDebugRenderer *this)

{
  float *pfVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  TVector2<float>_u_0 TVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  TArray<TVariant<UE::Cameras::FDebugTextDrawCommand,UE::Cameras::FDebugTextNewLineCommand,UE::Cameras::FDebugTextSetColorCommand>,TSizedDefaultAllocator<32>_>
  local_b8;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FDebugTextRenderer local_88;
  
  if (0 < (int)((this->LineBuilder)._padding_ - (this->LineBuilder)._padding_ >> 1)) {
    fVar13 = (float)(int)(this->CanvasSize).field0_0x0._s_0.Y;
    pfVar1 = &(this->NextDrawPosition).field0_0x0._s_0.Y;
    if (*pfVar1 <= fVar13 && fVar13 != *pfVar1) {
      local_88.Canvas = this->Canvas;
      local_88.Font = this->RenderFont;
      local_88.DrawColor.field0_0x0 = (this->DrawColor).field0_0x0;
      local_88.bEndWithNewLine = false;
      local_88.RightMargin = 0.0;
      fVar13 = UFont::GetMaxCharHeight(local_88.Font);
      pwVar10 = (wchar_t *)(this->LineBuilder)._padding_;
      TVar4 = (this->NextDrawPosition).field0_0x0;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      fVar14 = (float)(this->IndentLevel * GGameplayCamerasDebugIndent +
                      GGameplayCamerasDebugLeftMargin);
      pwVar2 = pwVar10 + (int)((this->LineBuilder)._padding_ - (longlong)pwVar10 >> 1);
      local_88.LineSpacing = fVar13;
      local_88.LeftMargin = fVar14;
      do {
        bVar12 = false;
        pwVar11 = pwVar10;
        iVar7 = local_b8.ArrayNum;
LAB_14d5a5791:
        if ((pwVar10 == pwVar2) || (*pwVar10 == L'\0')) {
          bVar5 = true;
LAB_14d5a57ae:
          bVar6 = bVar5;
          bVar5 = false;
        }
        else {
          bVar6 = false;
          bVar5 = false;
          if (*pwVar10 != L'\n') goto LAB_14d5a57ae;
          bVar5 = true;
        }
        if (!bVar12) {
          if (bVar5) {
            bVar5 = true;
          }
          else {
            if (!bVar6) {
              if (*pwVar10 == L'{') {
                iStack_a0 = (int)((longlong)pwVar10 - (longlong)pwVar11 >> 1);
                local_a8 = pwVar11;
                if (iStack_a0 != 0) {
                  if (iVar7 == local_b8.ArrayMax) {
                    iVar7 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x818,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
                  }
                  lVar9 = (longlong)iVar7;
                  iVar7 = iVar7 + 1;
                  pFVar3 = local_b8.AllocatorInstance.Data + lVar9 * 0x18;
                  *(undefined4 *)pFVar3 = (undefined4)local_a8;
                  *(undefined4 *)(pFVar3 + 4) = local_a8._4_4_;
                  *(int *)(pFVar3 + 8) = iStack_a0;
                  *(undefined4 *)(pFVar3 + 0xc) = uStack_9c;
                  local_b8.AllocatorInstance.Data[lVar9 * 0x18 + 0x10] =
                       (FScriptContainerElement)0x0;
                  local_b8.ArrayNum = iVar7;
                }
                pwVar10 = pwVar10 + 1;
                bVar12 = true;
                pwVar11 = pwVar10;
              }
              else {
LAB_14d5a58fa:
                pwVar10 = pwVar10 + 1;
              }
              goto LAB_14d5a5791;
            }
            bVar5 = false;
          }
          iStack_90 = (int)((longlong)pwVar10 - (longlong)pwVar11 >> 1);
          iVar8 = iVar7;
          local_98 = pwVar11;
          if (iStack_90 != 0) {
            if (iVar7 == local_b8.ArrayMax) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
            }
            iVar8 = iVar7 + 1;
            pFVar3 = local_b8.AllocatorInstance.Data + (longlong)iVar7 * 0x18;
            *(undefined4 *)pFVar3 = (undefined4)local_98;
            *(undefined4 *)(pFVar3 + 4) = local_98._4_4_;
            *(int *)(pFVar3 + 8) = iStack_90;
            *(undefined4 *)(pFVar3 + 0xc) = uStack_8c;
            local_b8.AllocatorInstance.Data[(longlong)iVar7 * 0x18 + 0x10] =
                 (FScriptContainerElement)0x0;
            local_b8.ArrayNum = iVar8;
          }
          iVar7 = iVar8;
          if (bVar5) {
            if (iVar8 == local_b8.ArrayMax) {
              iVar8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
            }
            iVar7 = iVar8 + 1;
            lVar9 = (longlong)iVar8;
            *(float *)(local_b8.AllocatorInstance.Data + lVar9 * 0x18) = fVar13;
            *(float *)(local_b8.AllocatorInstance.Data + lVar9 * 0x18 + 4) = fVar14;
            local_b8.AllocatorInstance.Data[lVar9 * 0x18 + 0x10] = (FScriptContainerElement)0x1;
            local_b8.ArrayNum = iVar7;
          }
          if (bVar6) goto LAB_14d5a5923;
          pwVar10 = pwVar10 + 1;
          pwVar11 = pwVar10;
          goto LAB_14d5a5791;
        }
        if (*pwVar10 != L'}') {
          if (bVar5) {
            bVar12 = true;
          }
          else {
            if (!bVar6) goto LAB_14d5a58fa;
            bVar12 = false;
          }
          FDebugTextRenderer::AddDrawCommand(&local_88,pwVar11,pwVar10,bVar12,&local_b8);
LAB_14d5a5923:
          local_88.NextDrawPosition.field0_0x0 = TVar4;
          FDebugTextRenderer::ExecuteCommands(&local_88,&local_b8);
          if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_88.RightMargin <= this->RightMargin) {
            local_88.RightMargin = this->RightMargin;
          }
          (this->NextDrawPosition).field0_0x0 = local_88.NextDrawPosition.field0_0x0;
          this->RightMargin = local_88.RightMargin;
          break;
        }
        FDebugTextRenderer::AddTokenCommand(&local_88,pwVar11,pwVar10,&local_b8);
        pwVar10 = pwVar10 + 1;
      } while( true );
    }
    (this->LineBuilder)._padding_ = (this->LineBuilder)._padding_;
  }
  return;
}

// GetDebugLineBatcher @ 14d5a74e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

ULineBatchComponent * __thiscall
UE::Cameras::FCameraDebugRenderer::GetDebugLineBatcher(FCameraDebugRenderer *this)

{
  ULineBatchComponent *pUVar1;
  
  if (this->World != (UWorld *)0x0) {
    pUVar1 = UWorld::GetLineBatcher(this->World,Foreground);
    return pUVar1;
  }
  return (ULineBatchComponent *)0x0;
}

// GetIndentMargin @ 14d5a8620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall UE::Cameras::FCameraDebugRenderer::GetIndentMargin(FCameraDebugRenderer *this)

{
  return (float)(this->IndentLevel * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin);
}

// GetNextCardPosition @ 14d5a8860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<float> __thiscall
UE::Cameras::FCameraDebugRenderer::GetNextCardPosition(FCameraDebugRenderer *this)

{
  double dVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 in_RDX;
  
  TVar2 = (this->NextCardPosition).field0_0x0;
  this->NextCardColumn = this->NextCardColumn + '\x01';
  *(TVector2<float>_u_0 *)in_RDX = TVar2;
  if (GGameplayCamerasDebugMaxCardColumns <= this->NextCardColumn) {
    dVar1 = (this->CanvasSize).field0_0x0._s_0.X;
    this->NextCardColumn = '\0';
    (this->NextCardPosition).field0_0x0._s_0.X =
         (float)((dVar1 - (double)GGameplayCamerasDebugCardWidth) -
                (double)GGameplayCamerasDebugRightMargin);
    (this->NextCardPosition).field0_0x0._s_0.Y =
         (float)(GGameplayCamerasDebugCardHeight + GGameplayCamerasDebugCardGap) +
         (this->NextCardPosition).field0_0x0._s_0.Y;
    return (TVector2<float>)in_RDX;
  }
  (this->NextCardPosition).field0_0x0._s_0.X =
       (this->NextCardPosition).field0_0x0._s_0.X -
       ((float)GGameplayCamerasDebugCardGap + (float)GGameplayCamerasDebugCardWidth);
  return (TVector2<float>)in_RDX;
}

// GetNextDrawGraphParams @ 14d5a8920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::GetNextDrawGraphParams
          (FCameraDebugRenderer *this,FCameraDebugGraphDrawParams *param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float> TVar4;
  undefined1 local_res10 [8];
  
  pIVar1 = (param_1->GraphName).TextData.Reference;
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (param_1->GraphName).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (param_1->GraphName).Flags = param_2->Flags;
  TVar4 = GetNextCardPosition(this);
                    /* WARNING: Load size is inaccurate */
  (param_1->GraphPosition).field0_0x0 = (TVector2<float>_u_0)*TVar4.field0_0x0;
  TVar3._s_0.Y = (float)GGameplayCamerasDebugCardHeight;
  TVar3._s_0.X = (float)GGameplayCamerasDebugCardWidth;
  (param_1->GraphSize).field0_0x0 = TVar3;
  return;
}

// GetTextColor @ 14d5ab7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FColor __thiscall UE::Cameras::FCameraDebugRenderer::GetTextColor(FCameraDebugRenderer *this)

{
  FColor_u_0 *in_RDX;
  
  *in_RDX = (this->DrawColor).field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// GetVisitFlags @ 14d5acf80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ECameraDebugDrawVisitFlags __thiscall
UE::Cameras::FCameraDebugRenderer::GetVisitFlags(FCameraDebugRenderer *this)

{
  return this->VisitFlags;
}

// Initialize @ 14d5ad2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDebugRenderer::Initialize
          (FCameraDebugRenderer *this,UWorld *param_1,FSceneView *param_2,FCanvas *param_3,
          bool param_4)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  UFont *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  this->bIsExternalRendering = param_4;
  this->World = param_1;
  (this->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  this_00 = UEngine::GetSmallFont();
  this->RenderFont = this_00;
  fVar7 = UFont::GetMaxCharHeight(this_00);
  this->MaxCharHeight = (int)fVar7;
  TVar1._s_0.Y = (float)GGameplayCamerasDebugTopMargin;
  TVar1._s_0.X = (float)GGameplayCamerasDebugLeftMargin;
  (this->NextDrawPosition).field0_0x0 = TVar1;
  (this->NextCardPosition).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->NextCardColumn = '\0';
  (this->CanvasSize).field0_0x0._s_0.X = 0.0;
  (this->CanvasSize).field0_0x0._s_0.Y = 0.0;
  if ((param_2 != (FSceneView *)0x0) && (param_3 != (FCanvas *)0x0)) {
    this->SceneView = param_2;
    this->Canvas = param_3;
    uVar3 = *(undefined8 *)&(param_3->ViewRect).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(param_3->ViewRect).field0_0x0 + 8);
    iVar6 = (int)((ulonglong)uVar3 >> 0x20);
    iVar5 = (int)((ulonglong)uVar4 >> 0x20);
    if (((int)uVar4 == (int)uVar3) || (iVar5 == iVar6)) {
      uVar3 = *(undefined8 *)&(param_2->UnconstrainedViewRect).field0_0x0;
      uVar4 = *(undefined8 *)((longlong)&(param_2->UnconstrainedViewRect).field0_0x0 + 8);
      iVar6 = (int)((ulonglong)uVar3 >> 0x20);
      iVar5 = (int)((ulonglong)uVar4 >> 0x20);
    }
    (this->CanvasSize).field0_0x0._s_0.X = (double)((int)uVar4 - (int)uVar3);
    (this->CanvasSize).field0_0x0._s_0.Y = (double)(iVar5 - iVar6);
    TVar2._s_0.Y = (float)GGameplayCamerasDebugTopMargin;
    TVar2._s_0.X = ((float)(this->CanvasSize).field0_0x0._s_0.X -
                   (float)GGameplayCamerasDebugCardWidth) - (float)GGameplayCamerasDebugRightMargin;
    (this->NextCardPosition).field0_0x0 = TVar2;
  }
  return;
}

// NewLine @ 14d5b6ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UE::Cameras::FCameraDebugRenderer::NewLine(FCameraDebugRenderer *this,bool param_1)

{
  int iVar1;
  float fVar2;
  
  FlushText(this);
  fVar2 = (float)(this->IndentLevel * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin)
  ;
  if (((float)((uint)((this->NextDrawPosition).field0_0x0._s_0.X - fVar2) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) && (param_1)) {
    return false;
  }
  iVar1 = this->MaxCharHeight;
  (this->NextDrawPosition).field0_0x0._s_0.X = fVar2;
  (this->NextDrawPosition).field0_0x0._s_0.Y =
       (float)iVar1 + (this->NextDrawPosition).field0_0x0._s_0.Y;
  return true;
}

// RemoveIndent @ 14d5cb980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::RemoveIndent(FCameraDebugRenderer *this)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  undefined1 local_res8 [32];
  
  FlushText(this);
  cVar1 = this->IndentLevel;
  fVar4 = (float)(cVar1 * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin);
  if (__real_322bcc77 <
      (float)((uint)((this->NextDrawPosition).field0_0x0._s_0.X - fVar4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    iVar2 = this->MaxCharHeight;
    (this->NextDrawPosition).field0_0x0._s_0.X = fVar4;
    (this->NextDrawPosition).field0_0x0._s_0.Y =
         (float)iVar2 + (this->NextDrawPosition).field0_0x0._s_0.Y;
  }
  if ((cVar1 < '\x01') &&
     (bVar3 = `UE::Cameras::FCameraDebugRenderer::RemoveIndent'::__l3::<lambda_1>::operator()
                        (local_res8), !bVar3)) {
    return;
  }
  this->IndentLevel = this->IndentLevel + -1;
  (this->NextDrawPosition).field0_0x0._s_0.X =
       (float)(this->IndentLevel * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin);
  return;
}

// ResetVisitFlags @ 14d5cc140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::ResetVisitFlags(FCameraDebugRenderer *this)

{
  this->VisitFlags = None;
  return;
}

// SetTextColor @ 14d5cf180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FColor __thiscall
UE::Cameras::FCameraDebugRenderer::SetTextColor(FCameraDebugRenderer *this,FColor *param_1)

{
  FColor_u_0 *in_R8;
  
  FlushText(this);
  param_1->field0_0x0 = (this->DrawColor).field0_0x0;
  (this->DrawColor).field0_0x0 = *in_R8;
  return (FColor)SUB84(param_1,0);
}

// SkipAllBlocks @ 14d5cff70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::SkipAllBlocks(FCameraDebugRenderer *this)

{
  this->VisitFlags = this->VisitFlags | (SkipChildrenBlocks|SkipAttachedBlocks);
  return;
}

// SkipAttachedBlocks @ 14d5cff80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::SkipAttachedBlocks(FCameraDebugRenderer *this)

{
  this->VisitFlags = this->VisitFlags | SkipAttachedBlocks;
  return;
}

// SkipChildrenBlocks @ 14d5cffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Cameras::FCameraDebugRenderer::SkipChildrenBlocks(FCameraDebugRenderer *this)

{
  this->VisitFlags = this->VisitFlags | SkipChildrenBlocks;
  return;
}

// DrawGraph<1> @ 14d64f030

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

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawGraph<1>
          (FCameraDebugRenderer *this,TCameraDebugGraph<1> *param_1,FText *param_2)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  FCameraDebugColors *pFVar4;
  ForElementType<FLinearColor> FVar5;
  undefined1 auStackY_128 [32];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  FCameraDebugGraphDrawParams local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FCameraDebugGraphDrawParams::FCameraDebugGraphDrawParams(&local_c8);
  GetNextDrawGraphParams(this,&local_c8,param_2);
  pFVar4 = FCameraDebugColors::Get();
  local_c8.GraphLineColors.ArrayNum = 0;
  if (local_c8.GraphLineColors.ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
              (0x10,4,0,&local_c8.GraphLineColors.AllocatorInstance,0,
               &local_c8.GraphLineColors.ArrayMax);
  }
  local_d8 = FLinearColor::sRGBToLinearTable[(pFVar4->Notice).field0_0x0._s_0.R];
  fStack_d4 = FLinearColor::sRGBToLinearTable[(pFVar4->Notice).field0_0x0._s_0.G];
  fStack_d0 = FLinearColor::sRGBToLinearTable[(pFVar4->Notice).field0_0x0._s_0.B];
  FVar5 = (ForElementType<FLinearColor>)&local_c8.GraphLineColors;
  if (local_c8.GraphLineColors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0)
  {
    FVar5 = local_c8.GraphLineColors.AllocatorInstance.SecondaryData;
  }
  fStack_cc = (float)(pFVar4->Notice).field0_0x0._s_0.A * __real_3b808081;
  if ((ulonglong)FVar5 <= &local_d8) {
    FVar5 = (ForElementType<FLinearColor>)&local_c8.GraphLineColors;
    if (local_c8.GraphLineColors.AllocatorInstance.SecondaryData !=
        (ForElementType<FLinearColor>)0x0) {
      FVar5 = local_c8.GraphLineColors.AllocatorInstance.SecondaryData;
    }
    if ((&local_d8 < (float *)((longlong)local_c8.GraphLineColors.ArrayMax * 0x10 + (longlong)FVar5)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_c8.GraphLineColors.ArrayNum == local_c8.GraphLineColors.ArrayMax) {
    local_c8.GraphLineColors.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
                   (0x410,&local_c8.GraphLineColors.AllocatorInstance,
                    &local_c8.GraphLineColors.ArrayMax);
  }
  FVar5 = (ForElementType<FLinearColor>)&local_c8.GraphLineColors;
  if (local_c8.GraphLineColors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0)
  {
    FVar5 = local_c8.GraphLineColors.AllocatorInstance.SecondaryData;
  }
  pfVar1 = (float *)((longlong)FVar5 + (longlong)local_c8.GraphLineColors.ArrayNum * 0x10);
  local_c8.GraphLineColors.ArrayNum = local_c8.GraphLineColors.ArrayNum + 1;
  *(ulonglong *)pfVar1 = CONCAT44(fStack_d4,local_d8);
  *(ulonglong *)(pfVar1 + 2) = CONCAT44(fStack_cc,fStack_d0);
  TCameraDebugGraph<1>::Draw(param_1,this->Canvas,&local_c8);
  if (local_c8.GraphLineColors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0)
  {
    FMemory::Free((void *)local_c8.GraphLineColors.AllocatorInstance.SecondaryData);
  }
  if (local_c8.GraphName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.GraphName.TextData.Reference + 0x10))();
  }
  return;
}

// DrawGraph<3> @ 14d64f230

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

void __thiscall
UE::Cameras::FCameraDebugRenderer::DrawGraph<3>
          (FCameraDebugRenderer *this,TCameraDebugGraph<3> *param_1,FText *param_2)

{
  undefined1 auStack_e8 [32];
  FCameraDebugGraphDrawParams local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FCameraDebugGraphDrawParams::FCameraDebugGraphDrawParams(&local_c8);
  GetNextDrawGraphParams(this,&local_c8,param_2);
  FCameraDebugGraphDrawParams::SetupDefaultLineColors<3>(&local_c8);
  TCameraDebugGraph<3>::Draw(param_1,this->Canvas,&local_c8);
  if (local_c8.GraphLineColors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0)
  {
    FMemory::Free((void *)local_c8.GraphLineColors.AllocatorInstance.SecondaryData);
  }
  if (local_c8.GraphName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.GraphName.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 150582530

bool __thiscall
`UE::Cameras::FCameraDebugRenderer::RemoveIndent'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8378285093348703968>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8378285093348703968>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

