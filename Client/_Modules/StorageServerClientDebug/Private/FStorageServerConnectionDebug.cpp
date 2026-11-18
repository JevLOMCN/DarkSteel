// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClientDebug
// Functions: 7

// operator() @ 148ce56d0

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
`FStorageServerConnectionDebug::OnDraw'::__l5::<lambda_2>::operator()
          (void *this,FString *param_1,int param_2,int param_3,bool param_4)

{
  FText *pFVar1;
  UFont *pUVar2;
  TVector2<double>_u_0 local_248;
  FText local_238;
  undefined1 local_228 [152];
  longlong local_190;
  longlong lStack_188;
  bool local_170;
  bool local_16f;
  
  local_248._s_0.X = (double)param_2;
  local_248._s_0.Y = (double)param_3;
  pFVar1 = FText::FromString(&local_238,param_1);
  pUVar2 = UEngine::GetTinyFont();
  FCanvasTextItem::FCanvasTextItem
            ((FCanvasTextItem *)local_228,(TVector2<double> *)&local_248._s_0,pFVar1,pUVar2,
             &FLinearColor::Yellow);
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
  }
  local_228._72_4_ = local_228._72_4_ | 2;
  local_228._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_170 = param_4;
  local_190 = ___xmm_3ff00000000000003ff0000000000000;
  lStack_188 = _UNK_150689688;
  local_16f = param_4;
  UCanvas::DrawItem(*(UCanvas **)this,(FCanvasItem *)local_228);
  FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_228);
  return;
}

// CreateZenIcon @ 148ce5af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FStorageServerConnectionDebug::CreateZenIcon(FStorageServerConnectionDebug *this)

{
  int iVar1;
  UTexture2D *pUVar2;
  UClass *pUVar3;
  FUObjectItem *this_00;
  
  if ((this->ZenIcon == (UTexture2D *)0x0) &&
     ((GEngine->DefaultZenStreamingTextureName).AssetPath.PackageName != (FName)0x0)) {
    pUVar2 = (UTexture2D *)
             FSoftObjectPath::TryLoad
                       (&GEngine->DefaultZenStreamingTextureName,(FUObjectSerializeContext *)0x0);
    if (pUVar2 != (UTexture2D *)0x0) {
      pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        this->ZenIcon = pUVar2;
        this_00 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&pUVar2->_padding_ + 4));
        FUObjectItem::SetRootFlags(this_00,RootSet);
        return;
      }
    }
    this->ZenIcon = (UTexture2D *)0x0;
  }
  return;
}

// DestroyZenIcon @ 148ce5ba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FStorageServerConnectionDebug::DestroyZenIcon(FStorageServerConnectionDebug *this)

{
  FUObjectItem *this_00;
  
  if (this->ZenIcon != (UTexture2D *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this->ZenIcon->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    this->ZenIcon = (UTexture2D *)0x0;
    this->bDestroyZenIcon = false;
  }
  return;
}

// DrawZenIndicator @ 148ce5bf0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FStorageServerConnectionDebug::DrawZenIndicator
          (FStorageServerConnectionDebug *this,UCanvas *param_1)

{
  int iVar1;
  FCanvas *this_00;
  UTexture2D *pUVar2;
  UClass *pUVar3;
  FUObjectItem *this_01;
  UFont *this_02;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  TVector2<double>_u_0 local_2a8;
  undefined8 uStack_298;
  FLinearColor_u_0 local_288;
  FLinearColor_u_0 local_278;
  FLinearColor_u_0 local_268;
  FString local_258;
  FString local_248;
  TObjectPtr<UTexture>_u_0 local_238;
  double local_230;
  undefined8 uStack_228;
  FCanvasTileItem local_218;
  FCanvasTileItem local_168;
  
  uVar5 = 0;
  if ((this->ZenIcon == (UTexture2D *)0x0) &&
     ((GEngine->DefaultZenStreamingTextureName).AssetPath.PackageName != (FName)0x0)) {
    pUVar2 = (UTexture2D *)
             FSoftObjectPath::TryLoad
                       (&GEngine->DefaultZenStreamingTextureName,(FUObjectSerializeContext *)0x0);
    if (pUVar2 != (UTexture2D *)0x0) {
      pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        this->ZenIcon = pUVar2;
        this_01 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&pUVar2->_padding_ + 4));
        FUObjectItem::SetRootFlags(this_01,RootSet);
        goto LAB_148ce5c8f;
      }
    }
    this->ZenIcon = (UTexture2D *)0x0;
  }
LAB_148ce5c8f:
  if (this->ZenIcon == (UTexture2D *)0x0) {
    return;
  }
  UCanvas::MakeIcon((FCanvasIcon *)&local_238.ObjectPtr,(UTexture *)this->ZenIcon,0.0,0.0,0.0,0.0);
  this_02 = UEngine::GetSmallFont();
  fVar10 = __real_3f800000;
  fVar12 = GZenIndicatorAlpha;
  if (__real_3f800000 <= GZenIndicatorAlpha) {
    fVar12 = __real_3f800000;
  }
  dVar11 = this->IndicatorElapsedTime - (double)GZenIndicatorFadeTime;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (__real_4014000000000000 <= dVar11) {
    dVar11 = __real_4014000000000000;
  }
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  if ((0.0 < GZenIndicatorFadeTime) && (0.0 < (float)dVar11)) {
    fVar12 = GZenIndicatorAlpha - GZenIndicatorAlpha * __real_3e4ccccd * (float)dVar11;
  }
  fVar8 = param_1->ClipX;
  fVar7 = (float)(**(code **)(this->ZenIcon->_padding_ + 0x368))();
  fVar9 = param_1->ClipY;
  fVar13 = (fVar8 - fVar7) * GZenIndicatorPosX;
  fVar8 = (float)(**(code **)(this->ZenIcon->_padding_ + 0x370))();
  fVar14 = (fVar9 - fVar8) * GZenIndicatorPosY;
  fVar8 = (float)(**(code **)(this->ZenIcon->_padding_ + 0x368))();
  fVar8 = fVar8 + ___real_43880000;
  fVar9 = (float)(**(code **)(this->ZenIcon->_padding_ + 0x370))();
  fVar9 = fVar9 + __real_41800000;
  fVar7 = (float)(**(code **)(this->ZenIcon->_padding_ + 0x368))();
  local_2b8 = (wchar_t *)(double)fVar8;
  local_278._0_8_ = 0;
  uVar6 = 0;
  local_278._s_0.B = 0.0;
  local_288._s_0.R = 0.7;
  local_288._s_0.G = 0.7;
  _uStack_2b0 = (undefined8)fVar9;
  local_288._s_0.B = 0.7;
  local_268._0_8_ = 0x3f800000;
  local_268._s_0.B = 0.0;
  fVar15 = fVar7 + fVar13 + __real_41800000;
  fVar7 = fVar14 + __real_41000000;
  local_2a8._s_0.X = (double)(fVar13 - __real_41000000);
  local_2a8._s_0.Y = (double)(fVar14 - __real_41000000);
  local_288._s_0.A = fVar12;
  local_278._s_0.A = fVar12;
  local_268._s_0.A = fVar12;
  FCanvasTileItem::FCanvasTileItem
            (&local_218,(TVector2<double> *)&local_2a8._s_0,(TVector2<double> *)&local_2b8,
             (FLinearColor *)&local_278._s_0);
  fVar8 = (float)(**(code **)(this->ZenIcon->_padding_ + 0x370))();
  fVar9 = (float)(**(code **)(this->ZenIcon->_padding_ + 0x368))();
  local_2a8._s_0.X = (double)fVar9;
  local_2b8 = (wchar_t *)(double)fVar13;
  _uStack_2b0 = (undefined8)fVar14;
  local_2a8._s_0.Y = (double)fVar8;
  FCanvasTileItem::FCanvasTileItem
            (&local_168,(TVector2<double> *)&local_2b8,(TVector2<double> *)&local_2a8._s_0,
             (FLinearColor *)&local_268._s_0);
  local_168._padding_._4_4_ = 0xb;
  local_218._padding_._4_4_ = 0xb;
  UCanvas::DrawItem(param_1,(FCanvasItem *)&local_218);
  UCanvas::SetDrawColor(param_1,0xff,0xff,0xff,(uchar)(int)(fVar12 * __real_437f0000));
  local_2a8._s_0.X = (double)local_238;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_238.DebugPtr != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_238.DebugPtr);
  }
  local_2a8._s_0.Y = local_230;
  uStack_298 = uStack_228;
  UCanvas::DrawIcon(param_1,(FCanvasIcon *)&local_2a8._s_0,fVar13,fVar14,fVar10);
  UE::IsUsingZenPakFileStreaming();
  ::FString::PrintfImpl(&local_248,L"Zen %s from: %s");
  if (local_248.Data.ArrayNum == 0) {
    local_2b8 = L"";
LAB_148ce605a:
    sVar4 = wcslen(local_2b8);
    uVar6 = (undefined4)sVar4;
  }
  else {
    local_2b8 = (wchar_t *)local_248.Data.AllocatorInstance.Data;
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_148ce605a;
  }
  uStack_2b0 = uVar6;
  dVar11 = (double)fVar15;
  local_2a8._s_0.X = (double)local_2b8;
  local_2a8._s_0.Y = (double)_uStack_2b0;
  FCanvas::DrawShadowedString
            (param_1->Canvas,dVar11,(double)fVar7,(TStringView<wchar_t> *)&local_2a8._s_0,this_02,
             (FLinearColor *)&local_288._s_0,&FLinearColor::Black);
  ::FString::PrintfImpl(&local_258,L"Bandwidth: %.2f Mbps");
  this_00 = param_1->Canvas;
  if (local_258.Data.ArrayNum == 0) {
    local_2b8 = L"";
  }
  else {
    local_2b8 = (wchar_t *)local_258.Data.AllocatorInstance.Data;
    if (local_258.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_148ce60f7;
  }
  sVar4 = wcslen(local_2b8);
  uVar5 = (undefined4)sVar4;
LAB_148ce60f7:
  uStack_2b0 = uVar5;
  local_2a8._s_0.X = (double)local_2b8;
  local_2a8._s_0.Y = (double)_uStack_2b0;
  fVar10 = UFont::GetMaxCharHeight(this_02);
  FCanvas::DrawShadowedString
            (this_00,dVar11,(double)(fVar10 + fVar7 + __real_41000000),
             (TStringView<wchar_t> *)&local_2a8._s_0,this_02,(FLinearColor *)&local_288._s_0,
             &FLinearColor::Black);
  if (fVar12 == 0.0) {
    this->bDestroyZenIcon = true;
    GZenShowIndicator = false;
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadZenStreamingSettings @ 148ce63b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FStorageServerConnectionDebug::LoadZenStreamingSettings(FStorageServerConnectionDebug *this)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined *puVar9;
  float local_res8 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res8[0]._0_1_ = GZenShowIndicator;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/StorageServerClient.ZenStreamingSettings",L"zen.indicator.show",
             (bool *)local_res8,&GGameIni);
  uVar3 = CVarShowZenIndicator._8_8_;
  cVar4 = local_res8[0]._0_1_;
  if ((bool)local_res8[0]._0_1_ != GZenShowIndicator) {
    local_res8[0] = 0.0;
    local_res8[1] = 0.0;
    local_50.AccessType = 0x3000000;
    local_50._4_1_ = 0;
    lVar1 = *(longlong *)CVarShowZenIndicator._8_8_;
    local_50.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_50.bDestroyed = false;
    local_50._20_4_ = 0xf000000;
    local_38 = (FDelegateAllocation *)CONCAT44(local_38._4_4_,0x1000000);
    uVar6 = (**(code **)(lVar1 + 0xa8))(CVarShowZenIndicator._8_8_,&local_68,&local_50);
    puVar9 = &u_0;
    if (cVar4 != '\0') {
      puVar9 = &u_1;
    }
    (**(code **)(lVar1 + 0xb0))(uVar3,puVar9,uVar6);
  }
  local_res8[0] = GZenIndicatorPosX;
  FConfigCacheIni::GetFloat
            (GConfig,L"/Script/StorageServerClient.ZenStreamingSettings",L"zen.indicator.x",
             local_res8,&GGameIni);
  fVar5 = local_res8[0];
  if (local_res8[0] != GZenIndicatorPosX) {
    local_res8[0] = 0.0;
    local_res8[1] = 0.0;
    IConsoleVariable::Set<float>
              ((IConsoleVariable *)CVarZenIndicatorPosX._8_8_,fVar5,ECVF_SetByGameSetting,(FName)0x0
              );
  }
  local_res8[0] = GZenIndicatorPosY;
  FConfigCacheIni::GetFloat
            (GConfig,L"/Script/StorageServerClient.ZenStreamingSettings",L"zen.indicator.y",
             local_res8,&GGameIni);
  fVar5 = local_res8[0];
  if (local_res8[0] != GZenIndicatorPosY) {
    local_res8[0] = 0.0;
    local_res8[1] = 0.0;
    IConsoleVariable::Set<float>
              ((IConsoleVariable *)CVarZenIndicatorPosY._8_8_,fVar5,ECVF_SetByGameSetting,(FName)0x0
              );
  }
  local_res8[0] = GZenIndicatorFadeTime;
  FConfigCacheIni::GetFloat
            (GConfig,L"/Script/StorageServerClient.ZenStreamingSettings",L"zen.indicator.fadetime",
             local_res8,&GGameIni);
  fVar5 = local_res8[0];
  if (local_res8[0] != GZenIndicatorFadeTime) {
    local_res8[0] = 0.0;
    local_res8[1] = 0.0;
    IConsoleVariable::Set<float>
              ((IConsoleVariable *)CVarZenIndicatorFadeTime._8_8_,fVar5,ECVF_SetByGameSetting,
               (FName)0x0);
  }
  local_res8[0] = GZenIndicatorAlpha;
  FConfigCacheIni::GetFloat
            (GConfig,L"/Script/StorageServerClient.ZenStreamingSettings",L"zen.indicator.alpha",
             local_res8,&GGameIni);
  fVar5 = local_res8[0];
  if (local_res8[0] != GZenIndicatorAlpha) {
    local_res8[0] = 0.0;
    local_res8[1] = 0.0;
    IConsoleVariable::Set<float>
              ((IConsoleVariable *)CVarZenIndicatorAlpha._8_8_,fVar5,ECVF_SetByGameSetting,
               (FName)0x0);
  }
  uVar3 = CVarShowZenIndicator._8_8_;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)(*(longlong *)CVarShowZenIndicator._8_8_ + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FStorageServerConnectionDebug::LoadZenStreamingSettings'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  (*pcVar2)(uVar3,&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  uVar3 = CVarZenIndicatorFadeTime._8_8_;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)(*(longlong *)CVarZenIndicatorFadeTime._8_8_ + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FStorageServerConnectionDebug::LoadZenStreamingSettings'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar7[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  (*pcVar2)(uVar3,&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// OnDraw @ 148ce67d0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FStorageServerConnectionDebug::OnDraw
          (FStorageServerConnectionDebug *this,UCanvas *param_1,APlayerController *param_2)

{
  uint *puVar1;
  HistoryItem *pHVar2;
  double dVar3;
  FLinearColor FVar4;
  undefined1 auVar5 [16];
  FText *pFVar6;
  UFont *pUVar7;
  FUObjectItem *this_00;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  FScriptContainerElement *pFVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  LARGE_INTEGER LVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  longlong *plVar24;
  double dVar25;
  LARGE_INTEGER local_res8;
  FCanvasItem local_3e8;
  longlong *local_3a8;
  LARGE_INTEGER local_3a0;
  undefined8 local_398;
  longlong *local_390;
  LARGE_INTEGER local_388;
  undefined8 local_380;
  undefined4 local_378;
  TVector2<double>_u_0 local_368;
  TVector2<double>_u_0 local_358;
  int local_348;
  TVector2<double>_u_0 local_340;
  double local_330;
  FText local_328;
  FString local_318;
  longlong *local_308;
  double local_300;
  undefined1 local_2f8 [152];
  undefined1 local_260 [16];
  undefined2 local_240;
  
  if (&this->CS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  if (GZenShowGraphs != false) {
    QueryPerformanceCounter(&local_res8);
    dVar22 = __real_4030000000000000;
    lVar8 = (longlong)(this->History)._Mypair._Myval2._Mylast -
            (longlong)(this->History)._Mypair._Myval2._Myfirst;
    dVar21 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    iVar11 = (int)(param_1->ClipX * __real_3e4ccccd);
    iVar12 = (int)(param_1->ClipX * __real_3ecccccd);
    lVar13 = lVar8 >> 0x3f;
    iVar9 = (int)(param_1->ClipY * __real_3e3851ec);
    local_res8.s.LowPart = iVar9;
    iVar10 = (int)(param_1->ClipY * __real_3df5c28f);
    local_330 = (double)iVar12 * __real_3fb1111111111111;
    local_348 = iVar12;
    local_340._s_0.X = (double)param_1;
    local_300 = dVar21;
    if (lVar8 / 0x28 + lVar13 != lVar13) {
      dVar14 = (double)iVar10 + __real_4030000000000000;
      ::FString::PrintfImpl(&local_318,L"Request Throughput MIN/MAX: [%.2f] / [%.2f] Mbps");
      `FStorageServerConnectionDebug::OnDraw'::__l5::<lambda_2>::operator()
                (&local_340,&local_318,iVar11,(int)dVar14,false);
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      iVar10 = (int)((double)(int)dVar14 + dVar22);
    }
    dVar14 = HeightScaleThroughput;
    FVar4.field0_0x0 = FLinearColor::White.field0_0x0;
    local_3e8.StereoDepth = 0;
    local_3e8.BlendMode = SE_BLEND_Opaque;
    local_3e8.bFreezeTime = false;
    local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    plVar24 = (longlong *)(double)iVar11;
    local_378 = 0x3f800000;
    local_398 = 0;
    dVar23 = (double)(iVar12 + iVar11);
    uVar17 = 0;
    uVar18 = 0;
    iVar10 = (int)((double)iVar10 + dVar22);
    iVar9 = iVar9 + iVar10;
    local_380 = 0;
    local_3e8.Color.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
    dVar22 = (double)iVar9;
    local_3e8.Position.field0_0x0._s_0.X = (double)plVar24;
    local_3e8.Position.field0_0x0._s_0.Y = dVar22;
    local_3a8 = plVar24;
    local_3a0 = (LARGE_INTEGER)dVar22;
    local_390 = (longlong *)dVar23;
    local_388 = (LARGE_INTEGER)dVar22;
    local_308 = plVar24;
    UCanvas::DrawItem(param_1,&local_3e8);
    pFVar16 = (FScriptContainerElement *)(double)iVar10;
    local_3e8.StereoDepth = 0;
    local_3e8.BlendMode = SE_BLEND_Opaque;
    local_3e8.bFreezeTime = false;
    local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_398 = 0;
    local_380 = 0;
    local_3e8.Color.field0_0x0._s_0 = FVar4.field0_0x0;
    local_378 = 0x3f800000;
    local_3e8.Position.field0_0x0._0_8_ = plVar24;
    local_3e8.Position.field0_0x0._s_0.Y = (double)pFVar16;
    local_3a8 = plVar24;
    local_3a0 = (LARGE_INTEGER)pFVar16;
    local_390 = plVar24;
    local_388 = (LARGE_INTEGER)dVar22;
    local_318.Data.AllocatorInstance.Data = pFVar16;
    UCanvas::DrawItem(param_1,&local_3e8);
    local_398 = 0;
    local_380 = 0;
    local_3e8.StereoDepth = 0;
    local_3e8.BlendMode = SE_BLEND_Opaque;
    local_3e8.bFreezeTime = false;
    local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_3e8.Color.field0_0x0._s_0 = FVar4.field0_0x0;
    local_378 = 0x3f800000;
    local_3e8.Position.field0_0x0._s_0.X = dVar23;
    local_3e8.Position.field0_0x0._8_8_ = pFVar16;
    local_3a8 = (longlong *)dVar23;
    local_3a0 = (LARGE_INTEGER)pFVar16;
    local_390 = (longlong *)dVar23;
    local_388 = (LARGE_INTEGER)dVar22;
    UCanvas::DrawItem(param_1,&local_3e8);
    ::FString::FString((FString *)&local_368._s_0,L"ZenServer Throughput Mbps");
    local_340._s_0.Y = (double)(iVar9 + 10);
    local_340._0_8_ = plVar24;
    pFVar6 = FText::FromString((FText *)&local_358._s_0,(FString *)&local_368._s_0);
    pUVar7 = UEngine::GetTinyFont();
    FCanvasTextItem::FCanvasTextItem
              ((FCanvasTextItem *)local_2f8,(TVector2<double> *)&local_340._s_0,pFVar6,pUVar7,
               &FLinearColor::Yellow);
    if ((longlong *)local_358._s_0.X != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_358._s_0.X + 0x10))();
    }
    auVar5 = ___xmm_3ff00000000000003ff0000000000000;
    local_2f8._72_4_ = local_2f8._72_4_ | 2;
    local_2f8._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
    local_240 = 0;
    local_260 = ___xmm_3ff00000000000003ff0000000000000;
    UCanvas::DrawItem(param_1,(FCanvasItem *)local_2f8);
    FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2f8);
    if ((void *)local_368._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_368._s_0.X);
    }
    iVar10 = (int)(((longlong)(this->History)._Mypair._Myval2._Mylast -
                   (longlong)(this->History)._Mypair._Myval2._Myfirst) / 0x28) + -1;
    lVar13 = (longlong)iVar10;
    dVar19 = auVar5._0_8_;
    if (-1 < iVar10) {
      local_340._s_0.X = (double)(iVar9 + -1);
      lVar8 = lVar13 * 0x28;
      dVar25 = (double)(int)local_res8.s.LowPart;
      do {
        pHVar2 = (this->History)._Mypair._Myval2._Myfirst;
        local_398 = 0;
        local_380 = 0;
        local_3e8.StereoDepth = 0;
        local_3e8.BlendMode = SE_BLEND_Opaque;
        local_3e8.bFreezeTime = false;
        local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
        local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
        local_3e8.Color.field0_0x0._s_0 = FLinearColor::Yellow.field0_0x0;
        dVar3 = dVar23 - (dVar21 - *(double *)((longlong)&pHVar2->Time + lVar8)) * local_330;
        local_378 = 0x40400000;
        dVar15 = (dVar19 / dVar14) * *(double *)((longlong)&pHVar2->Throughput + lVar8) * dVar25;
        if (dVar25 <= dVar15) {
          dVar15 = dVar25;
        }
        local_3e8.Position.field0_0x0._s_0.X = dVar3;
        local_3e8.Position.field0_0x0._s_0.Y = local_340._s_0.X;
        local_3a8 = (longlong *)dVar3;
        local_3a0 = (LARGE_INTEGER)local_340._s_0.X;
        local_390 = (longlong *)dVar3;
        local_388 = (LARGE_INTEGER)(dVar22 - dVar15);
        UCanvas::DrawItem(param_1,&local_3e8);
        ::FString::PrintfImpl((FString *)&local_358._s_0,L"%.2f");
        local_368._s_0.X = (double)(int)dVar3;
        local_368._s_0.Y = (double)(int)((dVar22 - dVar15) - __real_4026000000000000);
        pFVar6 = FText::FromString(&local_328,(FString *)&local_358._s_0);
        pUVar7 = UEngine::GetTinyFont();
        FCanvasTextItem::FCanvasTextItem
                  ((FCanvasTextItem *)local_2f8,(TVector2<double> *)&local_368._s_0,pFVar6,pUVar7,
                   &FLinearColor::Yellow);
        if (local_328.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
        }
        local_2f8._72_4_ = local_2f8._72_4_ | 2;
        local_240 = 0x101;
        local_2f8._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
        local_260 = auVar5;
        UCanvas::DrawItem(param_1,(FCanvasItem *)local_2f8);
        FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2f8);
        if ((longlong *)local_358._s_0.X != (longlong *)0x0) {
          FMemory::Free((void *)local_358._s_0.X);
        }
        dVar3 = *(double *)((longlong)&pHVar2->Throughput + lVar8);
        lVar8 = lVar8 + -0x28;
        lVar13 = lVar13 + -1;
        if (dVar3 <= (double)CONCAT44(uVar18,uVar17)) {
          dVar3 = (double)CONCAT44(uVar18,uVar17);
        }
        uVar17 = SUB84(dVar3,0);
        uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
        plVar24 = local_308;
      } while (-1 < lVar13);
    }
    dVar22 = HeightScaleRequest;
    FVar4.field0_0x0 = FLinearColor::White.field0_0x0;
    if ((double)CONCAT44(uVar18,uVar17) <= dVar19) {
      uVar17 = auVar5._0_4_;
      uVar18 = auVar5._4_4_;
    }
    if (__real_40b7700000000000 <= (double)CONCAT44(uVar18,uVar17)) {
      uVar17 = SUB84(__real_40b7700000000000,0);
      uVar18 = (undefined4)((ulonglong)__real_40b7700000000000 >> 0x20);
    }
    dVar14 = (double)(int)local_res8.s.LowPart;
    local_3e8.StereoDepth = 0;
    local_3e8.BlendMode = SE_BLEND_Opaque;
    local_3e8.bFreezeTime = false;
    local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_378 = 0x3f800000;
    HeightScaleThroughput = (double)CONCAT44(uVar18,uVar17);
    uVar17 = 0;
    uVar18 = 0;
    local_398 = 0;
    local_380 = 0;
    local_3e8.Color.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
    iVar10 = (int)(dVar14 + __real_4040000000000000 + (double)local_318.Data.AllocatorInstance.Data)
    ;
    iVar9 = iVar10 + local_res8.s.LowPart;
    LVar20 = (LARGE_INTEGER)(double)iVar9;
    local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_res8 = LVar20;
    local_3e8.Position.field0_0x0._0_8_ = plVar24;
    local_3e8.Position.field0_0x0._s_0.Y = (double)LVar20;
    local_3a8 = plVar24;
    local_3a0 = LVar20;
    local_390 = (longlong *)dVar23;
    local_388 = LVar20;
    UCanvas::DrawItem(param_1,&local_3e8);
    dVar21 = (double)iVar10;
    local_3e8.StereoDepth = 0;
    local_3e8.BlendMode = SE_BLEND_Opaque;
    local_3e8.bFreezeTime = false;
    local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_398 = 0;
    local_380 = 0;
    local_3e8.Color.field0_0x0._s_0 = FVar4.field0_0x0;
    local_378 = 0x3f800000;
    local_3e8.Position.field0_0x0._0_8_ = plVar24;
    local_3e8.Position.field0_0x0._s_0.Y = dVar21;
    local_3a8 = plVar24;
    local_3a0 = (LARGE_INTEGER)dVar21;
    local_390 = plVar24;
    local_388 = LVar20;
    UCanvas::DrawItem(param_1,&local_3e8);
    local_398 = 0;
    local_380 = 0;
    local_3e8.StereoDepth = 0;
    local_3e8.BlendMode = SE_BLEND_Opaque;
    local_3e8.bFreezeTime = false;
    local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_3e8.Color.field0_0x0._s_0 = FVar4.field0_0x0;
    local_378 = 0x3f800000;
    local_3e8.Position.field0_0x0._0_8_ = dVar23;
    local_3e8.Position.field0_0x0._s_0.Y = dVar21;
    local_3a8 = (longlong *)dVar23;
    local_3a0 = (LARGE_INTEGER)dVar21;
    local_390 = (longlong *)dVar23;
    local_388 = LVar20;
    UCanvas::DrawItem(param_1,&local_3e8);
    ::FString::FString((FString *)&local_368._s_0,L"ZenServer Request/Sec Count");
    local_358._s_0.Y = (double)(iVar9 + 10);
    local_358._0_8_ = plVar24;
    pFVar6 = FText::FromString(&local_328,(FString *)&local_368._s_0);
    pUVar7 = UEngine::GetTinyFont();
    FCanvasTextItem::FCanvasTextItem
              ((FCanvasTextItem *)local_2f8,(TVector2<double> *)&local_358._s_0,pFVar6,pUVar7,
               &FLinearColor::Yellow);
    if (local_328.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
    }
    local_2f8._72_4_ = local_2f8._72_4_ | 2;
    local_240 = 0;
    local_2f8._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
    local_260 = auVar5;
    UCanvas::DrawItem(param_1,(FCanvasItem *)local_2f8);
    FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2f8);
    if ((void *)local_368._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_368._s_0.X);
    }
    dVar21 = local_300;
    iVar10 = (int)(((longlong)(this->History)._Mypair._Myval2._Mylast -
                   (longlong)(this->History)._Mypair._Myval2._Myfirst) / 0x28) + -1;
    lVar13 = (longlong)iVar10;
    if (-1 < iVar10) {
      iVar11 = local_348 + iVar11;
      lVar8 = lVar13 * 0x28;
      do {
        pHVar2 = (this->History)._Mypair._Myval2._Myfirst;
        local_3e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
        local_398 = 0;
        local_378 = 0x40400000;
        local_380 = 0;
        local_3e8.Color.field0_0x0._s_0 = FLinearColor::Gray.field0_0x0;
        dVar23 = (double)iVar11 -
                 (dVar21 - *(double *)((longlong)&pHVar2->Time + lVar8)) * local_330;
        local_3e8.StereoDepth = 0;
        local_3e8.BlendMode = SE_BLEND_Opaque;
        local_3e8.bFreezeTime = false;
        local_3e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
        dVar25 = (double)*(uint *)((longlong)&pHVar2->RequestCount + lVar8) * (dVar19 / dVar22) *
                 dVar14;
        if (dVar14 <= dVar25) {
          dVar25 = dVar14;
        }
        LVar20.s = (_struct_19)(local_res8.s - dVar25);
        local_3e8.Position.field0_0x0._s_0.X = dVar23;
        local_3e8.Position.field0_0x0._s_0.Y = (double)(iVar9 + -1);
        local_3a8 = (longlong *)dVar23;
        local_3a0 = (LARGE_INTEGER)(double)(iVar9 + -1);
        local_390 = (longlong *)dVar23;
        local_388 = LVar20;
        UCanvas::DrawItem(param_1,&local_3e8);
        ::FString::PrintfImpl((FString *)&local_368._s_0,L"%.d");
        local_358._s_0.X = (double)(int)dVar23;
        local_358._s_0.Y = (double)(int)((double)LVar20 - __real_4026000000000000);
        pFVar6 = FText::FromString(&local_328,(FString *)&local_368._s_0);
        pUVar7 = UEngine::GetTinyFont();
        FCanvasTextItem::FCanvasTextItem
                  ((FCanvasTextItem *)local_2f8,(TVector2<double> *)&local_358._s_0,pFVar6,pUVar7,
                   &FLinearColor::Yellow);
        if (local_328.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_328.TextData.Reference + 0x10))();
        }
        local_2f8._72_4_ = local_2f8._72_4_ | 2;
        local_240 = 0x101;
        local_2f8._136_16_ = (undefined1  [16])FLinearColor::Black.field0_0x0;
        local_260 = auVar5;
        UCanvas::DrawItem(param_1,(FCanvasItem *)local_2f8);
        FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_2f8);
        if ((void *)local_368._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_368._s_0.X);
        }
        puVar1 = (uint *)((longlong)&pHVar2->RequestCount + lVar8);
        lVar8 = lVar8 + -0x28;
        lVar13 = lVar13 + -1;
        dVar23 = (double)*puVar1;
        if (dVar23 <= (double)CONCAT44(uVar18,uVar17)) {
          dVar23 = (double)CONCAT44(uVar18,uVar17);
        }
        uVar17 = SUB84(dVar23,0);
        uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
      } while (-1 < lVar13);
    }
    if ((double)CONCAT44(uVar18,uVar17) <= dVar19) {
      uVar17 = auVar5._0_4_;
      uVar18 = auVar5._4_4_;
    }
    if (__real_40b3880000000000 <= (double)CONCAT44(uVar18,uVar17)) {
      uVar17 = SUB84(__real_40b3880000000000,0);
      uVar18 = (undefined4)((ulonglong)__real_40b3880000000000 >> 0x20);
    }
    HeightScaleRequest = (double)CONCAT44(uVar18,uVar17);
  }
  if (GZenShowIndicator == false) {
    if ((this->bDestroyZenIcon != false) && (this->ZenIcon != (UTexture2D *)0x0)) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->ZenIcon->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this_00,RootSet);
      this->ZenIcon = (UTexture2D *)0x0;
      this->bDestroyZenIcon = false;
    }
  }
  else {
    if (SettingsLoaded == false) {
      LoadZenStreamingSettings(this);
      SettingsLoaded = true;
    }
    DrawZenIndicator(this,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148ce738a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// OnTick @ 148ce73a0

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

bool __thiscall
FStorageServerConnectionDebug::OnTick(FStorageServerConnectionDebug *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  HistoryItem **ppHVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  HistoryItem *pHVar11;
  longlong lVar12;
  undefined1 auStackY_e8 [32];
  LARGE_INTEGER local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  LARGE_INTEGER local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  uint local_80;
  double local_78;
  double dStack_70;
  HistoryItem local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_a8);
  dVar7 = __real_3ff0000000000000;
  dVar6 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar2 = this->IndicatorLastTime;
  dVar5 = dVar6 - this->UpdateStatsTime;
  this->IndicatorLastTime = dVar6;
  this->IndicatorElapsedTime = (dVar6 - dVar2) + this->IndicatorElapsedTime;
  if (dVar7 < dVar5) {
    this->UpdateStatsTime = dVar6;
    local_78 = 0.0;
    dStack_70 = 0.0;
    local_88 = 0;
    local_80 = 0;
    (**(code **)((longlong)*this->StorageServerPlatformFile + 0x250))
              (this->StorageServerPlatformFile,&local_88);
    if (local_78 < dStack_70) {
      dVar7 = dVar7 / dVar5;
      this->MaxReqThroughput = dStack_70;
      this->MinReqThroughput = local_78;
      if ((longlong)(local_88 * 8) < 0) {
        dVar2 = (double)((local_88 & 0x1fffffffffffffff) << 2);
        dVar2 = dVar2 + dVar2;
      }
      else {
        dVar2 = (double)(longlong)(local_88 * 8);
      }
      dVar5 = (double)local_80 * dVar7;
      this->Throughput = dVar2 * dVar7 * __real_3eb0c6f7a0b5ed8d;
      lVar12 = (longlong)dVar5;
      if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != dVar5)) {
        auVar3._8_4_ = SUB84(dVar5,0);
        auVar3._0_8_ = dVar5;
        auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uVar10 = movmskpd(0,auVar3);
        dVar5 = (double)(longlong)(lVar12 + (ulonglong)(uVar10 & 1 ^ 1));
      }
      this->ReqCount = (uint)(longlong)dVar5;
    }
    if ((GZenShowDebugMessage != false) && (GEngine != (UEngine *)0x0)) {
      local_a8.QuadPart = 0;
      UE::IsUsingZenPakFileStreaming();
      ::FString::PrintfImpl((FString *)&local_98.s,L"ZenServer %s from %s [%.2fMbps]");
      if ((void *)local_a8.QuadPart != (void *)0x0) {
        FMemory::Free((void *)local_a8);
      }
      local_a8 = local_98;
      local_a0 = local_90;
      local_9c = local_8c;
      UEngine::AddOnScreenDebugMessage
                (GEngine,(ulong64)this,__real_3f800000,FColor::White,(FString *)&local_a8.s,false,
                 &UE::Math::TVector2<double>::UnitVector);
      if ((void *)local_a8.QuadPart != (void *)0x0) {
        FMemory::Free((void *)local_a8);
      }
    }
    pHVar11 = (this->History)._Mypair._Myval2._Mylast;
    local_68.MaxRequestThroughput = this->MaxReqThroughput;
    local_68.MinRequestThroughput._0_4_ = *(undefined4 *)&this->MinReqThroughput;
    local_68.MinRequestThroughput._4_4_ = *(undefined4 *)((longlong)&this->MinReqThroughput + 4);
    local_68.Throughput = this->Throughput;
    local_68.RequestCount = this->ReqCount;
    local_68.Time = dVar6;
    if (pHVar11 == (this->History)._Mypair._Myval2._Myend) {
      std::
      vector<FStorageServerConnectionDebug::HistoryItem,std::allocator<FStorageServerConnectionDebug::HistoryItem>_>
      ::_Emplace_reallocate<FStorageServerConnectionDebug::HistoryItem>
                (&this->History,pHVar11,&local_68);
    }
    else {
      auVar4._8_4_ = SUB84(local_68.MaxRequestThroughput,0);
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)local_68.MaxRequestThroughput >> 0x20);
      pHVar11->Time = dVar6;
      pHVar11->MaxRequestThroughput = (double)auVar4._8_8_;
      *(undefined4 *)&pHVar11->MinRequestThroughput = local_68.MinRequestThroughput._0_4_;
      *(undefined4 *)((longlong)&pHVar11->MinRequestThroughput + 4) =
           local_68.MinRequestThroughput._4_4_;
      *(int *)&pHVar11->Throughput = SUB84(local_68.Throughput,0);
      *(int *)((longlong)&pHVar11->Throughput + 4) = (int)((ulonglong)local_68.Throughput >> 0x20);
      *(ulonglong *)&pHVar11->RequestCount = CONCAT44(local_68._36_4_,local_68.RequestCount);
      ppHVar1 = &(this->History)._Mypair._Myval2._Mylast;
      *ppHVar1 = *ppHVar1 + 1;
    }
    __GTraceCounterZenClient_ThroughputMbps.Value = this->Throughput;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenClient_ThroughputMbps.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenClient_ThroughputMbps.CounterName,
                           TraceCounterType_Float,
                           __GTraceCounterZenClient_ThroughputMbps.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenClient_ThroughputMbps.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenClient_ThroughputMbps.CounterId._2_2_ = 0;
          __GTraceCounterZenClient_ThroughputMbps.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenClient_ThroughputMbps.CounterId._0_2_,
                 __GTraceCounterZenClient_ThroughputMbps.Value);
    }
    __GTraceCounterZenClient_MaxReqThroughputMbps.Value = this->MaxReqThroughput;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenClient_MaxReqThroughputMbps.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenClient_MaxReqThroughputMbps.CounterName,
                           TraceCounterType_Float,
                           __GTraceCounterZenClient_MaxReqThroughputMbps.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenClient_MaxReqThroughputMbps.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenClient_MaxReqThroughputMbps.CounterId._2_2_ = 0;
          __GTraceCounterZenClient_MaxReqThroughputMbps.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenClient_MaxReqThroughputMbps.CounterId._0_2_,
                 __GTraceCounterZenClient_MaxReqThroughputMbps.Value);
    }
    __GTraceCounterZenClient_MinReqThroughputMbps.Value = this->MinReqThroughput;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenClient_MinReqThroughputMbps.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenClient_MinReqThroughputMbps.CounterName,
                           TraceCounterType_Float,
                           __GTraceCounterZenClient_MinReqThroughputMbps.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenClient_MinReqThroughputMbps.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenClient_MinReqThroughputMbps.CounterId._2_2_ = 0;
          __GTraceCounterZenClient_MinReqThroughputMbps.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenClient_MinReqThroughputMbps.CounterId._0_2_,
                 __GTraceCounterZenClient_MinReqThroughputMbps.Value);
    }
    __GTraceCounterZenClient_RequestCountPerSec.Value = (long64)this->ReqCount;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenClient_RequestCountPerSec.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenClient_RequestCountPerSec.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterZenClient_RequestCountPerSec.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenClient_RequestCountPerSec.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenClient_RequestCountPerSec.CounterId._2_2_ = 0;
          __GTraceCounterZenClient_RequestCountPerSec.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenClient_RequestCountPerSec.CounterId._0_2_,
                 __GTraceCounterZenClient_RequestCountPerSec.Value);
    }
  }
  dVar2 = __real_402e000000000000;
  pHVar11 = (this->History)._Mypair._Myval2._Myfirst;
  if (pHVar11 != (this->History)._Mypair._Myval2._Mylast) {
    do {
      if (dVar6 - pHVar11->Time <= dVar2) break;
      memmove(pHVar11,pHVar11 + 1,
              (longlong)(this->History)._Mypair._Myval2._Mylast - (longlong)(pHVar11 + 1));
      ppHVar1 = &(this->History)._Mypair._Myval2._Mylast;
      *ppHVar1 = *ppHVar1 + -1;
      pHVar11 = (this->History)._Mypair._Myval2._Myfirst;
    } while (pHVar11 != (this->History)._Mypair._Myval2._Mylast);
  }
  bVar8 = IsInGameThread();
  if (bVar8) {
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_ThroughputMbps.Name,_GCsvStat_ThroughputMbps.CategoryIndex,
               this->Throughput,Set);
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_MaxReqThroughputMbps.Name,_GCsvStat_MaxReqThroughputMbps.CategoryIndex,
               this->MaxReqThroughput,Set);
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_MinReqThroughputMbps.Name,_GCsvStat_MinReqThroughputMbps.CategoryIndex,
               this->MinReqThroughput,Set);
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_RequestCountPerSec.Name,_GCsvStat_RequestCountPerSec.CategoryIndex,
               this->ReqCount,Set);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

