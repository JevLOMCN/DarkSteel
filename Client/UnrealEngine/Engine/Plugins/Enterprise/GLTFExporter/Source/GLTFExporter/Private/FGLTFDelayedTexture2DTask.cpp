// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// GetName @ 14e5f7e10

FString * __thiscall
FGLTFDelayedTexture2DTask::GetName(FGLTFDelayedTexture2DTask *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  if (this->Texture2D == (UTexture2D *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  local_res8[0] = (FName)this->Texture2D->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Process @ 14e606e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FGLTFDelayedTexture2DTask::Process(FGLTFDelayedTexture2DTask *this)

{
  atomic<int> *paVar1;
  uchar uVar2;
  UTexture2D *pUVar3;
  FGLTFJsonTexture *pFVar4;
  FGLTFConvertBuilder *this_00;
  FScriptContainerElement *pFVar5;
  TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
  *this_01;
  code *pcVar6;
  TIntPoint<int> TVar7;
  float fVar8;
  byte bVar9;
  bool bVar10;
  EPixelFormat EVar11;
  int iVar12;
  int iVar13;
  TextureAddress TVar14;
  size_t sVar15;
  UClass *pUVar16;
  UObject *pUVar17;
  UTextureRenderTarget2D *this_02;
  FTextureRenderTargetResource *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  FTextureResource *pFVar20;
  FGLTFJsonImage *pFVar21;
  FGLTFJsonSampler *pFVar22;
  bool bVar23;
  longlong *plVar24;
  undefined **ppuVar25;
  TReferenceControllerBase<1> *pTVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  wchar_t *_Str;
  uint uVar29;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_338 [32];
  undefined1 local_307 [7];
  uint local_300;
  uint uStack_2fc;
  FName local_2f4;
  FString local_2e8;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_2d8;
  TReferenceControllerBase<1> *local_2d0;
  FGameTime local_2c8;
  FString local_2b0;
  FCanvasTileItem local_298;
  undefined1 local_1e8 [128];
  FCanvas local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pUVar3 = this->Texture2D;
  UStreamableRenderAsset::SetForceMipLevelsToBeResident
            ((UStreamableRenderAsset *)pUVar3,__real_41f00000,0);
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)pUVar3,false,false);
  local_2f4 = (FName)this->Texture2D->_padding_;
  ::FName::ToString(&local_2f4,&this->JsonTexture->Name);
  bVar23 = (bool)(*(byte *)((longlong)&this->Texture2D->_padding_ + 6) & 1);
  if (bVar23 != this->bToSRGB) {
    pFVar4 = this->JsonTexture;
    _Str = L"_Linear";
    if (this->bToSRGB != false) {
      _Str = L"_sRGB";
    }
    sVar15 = wcslen(_Str);
    ::FString::AppendChars(&pFVar4->Name,_Str,(int)sVar15);
  }
  pUVar3 = this->Texture2D;
  fVar32 = (float)(**(code **)(pUVar3->_padding_ + 0x368))(pUVar3);
  fVar8 = __real_bf000000;
  fVar33 = __real_bf000000 - (fVar32 + fVar32);
  fVar32 = (float)(**(code **)(pUVar3->_padding_ + 0x370))(pUVar3);
  pUVar16 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar12 = (int)pUVar16->_padding_;
  if (((*(int *)(pUVar3->_padding_ + 0x38) < iVar12) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar12 * 8)
       != &pUVar16->_padding_)) || (pUVar3 == (UTexture2D *)0x0)) {
    bVar9 = (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3);
  }
  else {
    iVar12 = UTexture2D::GetNumMipsAllowed(pUVar3,true);
    iVar13 = UTexture2D::GetNumMips(pUVar3);
    bVar9 = (char)iVar13 - (char)iVar12;
  }
  uVar29 = -((int)ROUND(fVar33) >> 1) >> (bVar9 & 0x1f);
  uVar31 = -((int)ROUND(fVar8 - (fVar32 + fVar32)) >> 1) >> (bVar9 & 0x1f);
  uVar28 = 1;
  if (1 < (int)uVar29) {
    uVar28 = uVar29;
  }
  uVar29 = 1;
  if (1 < (int)uVar31) {
    uVar29 = uVar31;
  }
  local_300 = uVar28;
  uStack_2fc = uVar29;
  pUVar17 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar17,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar16 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1e8,pUVar16);
  local_1e8._8_8_ = pUVar17;
  this_02 = (UTextureRenderTarget2D *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
  if (local_1e8._64_8_ != 0) {
    plVar24 = (longlong *)(local_1e8 + 0x50);
    if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_1e8._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  UTextureRenderTarget2D::InitCustomFormat(this_02,uVar28,uVar29,PF_B8G8R8A8,true);
  *(undefined4 *)&this_02->_padding_ = 0x400ccccd;
  pUVar3 = this->Texture2D;
  pFVar18 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                      ((UTextureRenderTarget *)this_02);
  pTVar30 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
  if ((pFVar18 == (FTextureRenderTargetResource *)0x0) || (&pFVar18->_padding_ == (longlong *)0x0))
  goto LAB_14e607190;
  uVar2 = ((TEnumAsByte<TextureCompressionSettings> *)&pUVar3->_padding_)->Value;
  pTVar26 = (TReferenceControllerBase<1> *)0x0;
  if (uVar2 == '\x01') {
    pTVar19 = ::operator_new(0x10);
    pTVar26 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      ppuVar25 = &___7FGLTFNormalMapPreview__6B_;
LAB_14e6070bc:
      pTVar19->_padding_ = (longlong)ppuVar25;
      pTVar19->SharedReferenceCount = (atomic<int>)0x1;
      pTVar19->WeakReferenceCount = (atomic<int>)0x0;
      pTVar26 = pTVar19;
    }
  }
  else if ((((uVar2 == '\x06') || (uVar2 == '\n')) || (uVar2 == '\f')) &&
          (pTVar19 = ::operator_new(0x10), pTVar19 != (TReferenceControllerBase<1> *)0x0)) {
    ppuVar25 = &___7FGLTFSimpleTexture2DPreview__6B_;
    goto LAB_14e6070bc;
  }
  local_2c8.DeltaRealTimeSeconds = 0.0;
  local_2c8.DeltaWorldTimeSeconds = 0.0;
  local_2c8.RealTimeSeconds = 0.0;
  local_2c8.WorldTimeSeconds = 0.0;
  FCanvas::FCanvas(&local_168,(FRenderTarget *)&pFVar18->_padding_,(FHitProxyConsumer *)0x0,
                   &local_2c8,GMaxRHIFeatureLevel,__real_3f800000);
  pFVar20 = UTexture::GetResource((UTexture *)pUVar3);
  FCanvasTileItem::FCanvasTileItem
            (&local_298,&UE::Math::TVector2<double>::ZeroVector,(FTexture *)pFVar20,
             &FLinearColor::White);
  local_298._padding_ = (longlong)pTVar26;
  FCanvasTileItem::Draw(&local_298,&local_168);
  FCanvas::Flush_GameThread(&local_168,false);
  FlushRenderingCommands();
  FCanvas::SetRenderTarget_GameThread(&local_168,(FRenderTarget *)0x0);
  FlushRenderingCommands();
  local_298._padding_ = (longlong)&___7FCanvasItem__6B_;
  FCanvas::~FCanvas(&local_168);
  if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTVar26->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    if (*paVar1 == (atomic<int>)0x0) {
      (**(code **)pTVar26->_padding_)(pTVar26,1);
    }
  }
LAB_14e607190:
  pTVar19 = ::operator_new(0x20);
  pTVar26 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    pTVar19->SharedReferenceCount = (atomic<int>)0x1;
    pTVar30 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(pTVar19 + 1);
    pTVar19->WeakReferenceCount = (atomic<int>)0x1;
    pTVar19[1]._padding_ = 0;
    pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar19->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_UFColor__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar26 = pTVar19;
    if ((pTVar30 == (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar10 = FGLTFTextureUtilities::ReadPixels(this_02,pTVar30);
  this_00 = this->Builder;
  if (bVar10) {
    if ((*(char *)(this_00->_padding_ + 0xae) != '\0') &&
       ((char)this->Texture2D->_padding_ == '\x01')) {
      pFVar5 = (pTVar30->AllocatorInstance).Data;
      iVar12 = pTVar30->ArrayNum;
      pFVar27 = pFVar5 + 1;
      while( true ) {
        if (pTVar30->ArrayNum != iVar12) {
          `TCheckedPointerIterator<FColor,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_307);
        }
        if (pFVar27 + -1 == pFVar5 + (longlong)iVar12 * 4) break;
        *pFVar27 = (FScriptContainerElement)~(byte)*pFVar27;
        pFVar27 = pFVar27 + 4;
      }
    }
    FGLTFTextureUtilities::TransformColorSpace(pTVar30,bVar23,this->bToSRGB);
    EVar11 = UTexture2D::GetPixelFormat(this->Texture2D,0);
    bVar23 = FGLTFTextureUtilities::IsAlphaless(EVar11);
    pFVar4 = this->JsonTexture;
    this_01 = (this->Builder->ImageConverter).Ptr;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d8 = pTVar30;
    local_2d0 = pTVar26;
    ::FString::FString(&local_2b0,&pFVar4->Name);
    TVar7.field0_0x0._s_0.Y = uStack_2fc;
    TVar7.field0_0x0._s_0.X = local_300;
    pFVar21 = TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
              ::GetOrAdd(this_01,(TGLTFSuperfluous<FString> *)&local_2b0,bVar23,TVar7,
                         (TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *)
                         &local_2d8);
    this->JsonTexture->Source = pFVar21;
    if (this->TextureAddressX == TA_MAX) {
      TVar14 = (**(code **)(this->Texture2D->_padding_ + 0x388))();
      this->TextureAddressX = TVar14;
    }
    TVar14 = this->TextureAddressY;
    if (TVar14 == TA_MAX) {
      TVar14 = (**(code **)(this->Texture2D->_padding_ + 0x388))();
      this->TextureAddressY = TVar14;
    }
    pFVar22 = TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
              ::GetOrAdd((this->Builder->SamplerConverter).Ptr,this->TextureAddressX,TVar14,
                         (uint)*(byte *)((longlong)&this->Texture2D->_padding_ + 1),
                         (uint)*(byte *)((longlong)&this->Texture2D->_padding_ + 7));
    this->JsonTexture->Sampler = pFVar22;
  }
  else {
    ::FString::PrintfImpl(&local_2e8,L"Failed to read pixels for 2D texture %s");
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)this_00,&local_2e8);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  return;
}

