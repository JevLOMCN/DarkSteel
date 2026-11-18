// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 10

// StaticClass @ 14cea7040

UClass * __cdecl UGeometryScriptLibrary_TextureMapFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_TextureMapFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_TextureMapFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_TextureMapFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_TextureMapFunctions @ 14ceae930

UGeometryScriptLibrary_TextureMapFunctions * __thiscall
UGeometryScriptLibrary_TextureMapFunctions::UGeometryScriptLibrary_TextureMapFunctions
          (UGeometryScriptLibrary_TextureMapFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_TextureMapFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_TextureMapFunctions @ 14ceae960

UGeometryScriptLibrary_TextureMapFunctions * __thiscall
UGeometryScriptLibrary_TextureMapFunctions::UGeometryScriptLibrary_TextureMapFunctions
          (UGeometryScriptLibrary_TextureMapFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_TextureMapFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_TextureMapFunctions @ 14ceaec10

void __thiscall
UGeometryScriptLibrary_TextureMapFunctions::~UGeometryScriptLibrary_TextureMapFunctions
          (UGeometryScriptLibrary_TextureMapFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_TextureMapFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14cebd370

UClass * __cdecl UGeometryScriptLibrary_TextureMapFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_TextureMapFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_TextureMapFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_TextureMapFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_TextureMapFunctions.InnerSingleton;
}

// SampleTexture2DAtUVPositions @ 14cec1890

void __cdecl
UGeometryScriptLibrary_TextureMapFunctions::SampleTexture2DAtUVPositions
          (FGeometryScriptUVList *param_1,UTexture2D *param_2,
          FGeometryScriptSampleTextureOptions *param_3,FGeometryScriptColorList *param_4,
          UGeometryScriptDebug *param_5)

{
  bool bVar1;
  FText *pFVar2;
  FText local_48;
  TImageBuilder<UE::Math::TVector4<float>_> local_38;
  
  if (param_2 == (UTexture2D *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_TextureMapFunctions",
                        L"SampleTexture2DAtUVPositions_InvalidInput2",
                        L"SampleTexture2DAtUVPositions: Texture is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar2);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_38.Dimensions.Width = 0;
    local_38.Dimensions.Height = 0;
    local_38.Image.DimensionY = 0;
    local_38.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Image.Buffer.ArrayNum = 0;
    local_38.Image.Buffer.ArrayMax = 0;
    local_38.Image.DimensionX = 0;
    bVar1 = UE::AssetUtils::ReadTexture(param_2,&local_38,false);
    if (bVar1) {
      UE::Geometry::`anonymous_namespace'::SampleImageBuilderAtUVPositions
                (&local_38,param_1,param_3,param_4);
    }
    else {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"UGeometryScriptLibrary_TextureMapFunctions",
                          L"SampleTexture2DAtUVPositions_TexReadFailed",
                          L"SampleTexture2DAtUVPositions: Error reading source texture data. If using this function at Runtime, The Compression Settings type on the UTexture2D Asset must be set to VectorDisplacementmap (RGBA8)."
                         );
      UE::Geometry::AppendError(param_5,OperationFailed,pFVar2);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    if (local_38.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Image.Buffer.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->List).SharedReferenceCount.ReferenceController);
  return;
}

// SampleTextureRenderTarget2DAtUVPositions @ 14cec19b0

void __cdecl
UGeometryScriptLibrary_TextureMapFunctions::SampleTextureRenderTarget2DAtUVPositions
          (FGeometryScriptUVList *param_1,UTextureRenderTarget2D *param_2,
          FGeometryScriptSampleTextureOptions *param_3,FGeometryScriptColorList *param_4,
          UGeometryScriptDebug *param_5)

{
  code *pcVar1;
  FImageDimensions FVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FText *pFVar5;
  FTextureRenderTargetResource *pFVar6;
  longlong lVar7;
  ulong64 uVar8;
  longlong lVar9;
  TImageBuilder<UE::Math::TVector4<float>_> local_d8;
  ECubeFace local_a8;
  ERangeCompressionMode EStack_a4;
  uint uStack_a0;
  float fStack_9c;
  undefined2 local_98;
  undefined2 uStack_96;
  int iStack_94;
  uint uStack_90;
  TIntRect<int>_u_0 local_88;
  FReadSurfaceDataFlags local_78;
  FText local_58;
  FText local_48;
  FText local_38;
  
  if (param_2 == (UTextureRenderTarget2D *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_TextureMapFunctions",
                        L"SampleTextureRenderTarget2DAtUVPositions_InvalidInput",
                        L"SampleTextureRenderTarget2DAtUVPositions: Texture is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar5);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
    return;
  }
  pFVar6 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)param_2)
  ;
  if (pFVar6 == (FTextureRenderTargetResource *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_TextureMapFunctions",
                        L"SampleTextureRenderTarget2DAtUVPositions_NullResource",
                        L"SampleTextureRenderTarget2DAtUVPositions: Render target resource is Null")
    ;
    UE::Geometry::AppendError(param_5,OperationFailed,pFVar5);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
  }
  else {
    lVar7 = (longlong)param_2->SizeX;
    FVar2.Width = param_2->SizeX;
    FVar2.Height = param_2->SizeY;
    lVar9 = (longlong)param_2->SizeY;
    local_a8 = CubeFace_MAX;
    EStack_a4 = RCM_MinMax;
    fStack_9c = 16000.0;
    local_98 = 0;
    iStack_94 = 0;
    uStack_90 = 0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_d8.Image.Buffer.ArrayMax = 0;
    local_d8.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Image.Buffer.ArrayNum = 0;
    if ((param_2->SizeX < 0) || (param_2->SizeY < 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidthIn >= 0 && HeightIn >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageDimensions.h"
                         ,0x20,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar8 = lVar7 * lVar9;
    local_d8.Dimensions = FVar2;
    local_d8.Image.DimensionX = lVar7;
    local_d8.Image.DimensionY = lVar9;
    if (uVar8 - local_d8.Image.Buffer.ArrayNum == 0 ||
        (longlong)uVar8 < local_d8.Image.Buffer.ArrayNum) {
      if ((longlong)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar8);
      }
      if ((longlong)uVar8 < local_d8.Image.Buffer.ArrayNum) {
        lVar7 = local_d8.Image.Buffer.ArrayNum - uVar8;
        if ((((uint)(uVar8 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar7 >> 0x3f) ^ 1)) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (lVar7 != 0) {
          lVar9 = (local_d8.Image.Buffer.ArrayNum - lVar7) - uVar8;
          if (lVar9 != 0) {
            memmove(local_d8.Image.Buffer.AllocatorInstance.Data + uVar8 * 0x10,
                    local_d8.Image.Buffer.AllocatorInstance.Data + uVar8 * 0x10 + lVar7 * 0x10,
                    lVar9 * 0x10);
          }
          local_d8.Image.Buffer.ArrayNum = local_d8.Image.Buffer.ArrayNum - lVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (0x10,0x10,(ForAnyElementType *)&local_d8.Image,local_d8.Image.Buffer.ArrayNum,
                     &local_d8.Image.Buffer.ArrayMax);
        }
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar8 - local_d8.Image.Buffer.ArrayNum,
                 (ForAnyElementType *)&local_d8.Image,&local_d8.Image.Buffer.ArrayNum,
                 &local_d8.Image.Buffer.ArrayMax);
    }
    FVar3.Data = local_d8.Image.Buffer.AllocatorInstance.Data;
    if (local_d8.Image.Buffer.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78.CompressionMode = EStack_a4;
    local_78.CubeFace = local_a8;
    local_78.MaxDepthRange = fStack_9c;
    local_78._8_4_ = uStack_a0;
    local_78._18_2_ = uStack_96;
    local_78.bOutputStencil = (bool)(undefined1)local_98;
    local_78.MipLevel = local_98._1_1_;
    local_78.ArrayIndex = iStack_94;
    local_88._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_88._8_4_ = param_2->SizeX;
    local_88._12_4_ = param_2->SizeY;
    local_78.GPUIndex = uStack_90;
    bVar4 = FRenderTarget::ReadLinearColorPixelsPtr
                      ((FRenderTarget *)&pFVar6->_padding_,(FLinearColor *)FVar3.Data,&local_78,
                       (TIntRect<int> *)&local_88._s_0);
    if (bVar4) {
      UE::Geometry::`anonymous_namespace'::SampleImageBuilderAtUVPositions
                (&local_d8,param_1,param_3,param_4);
    }
    else {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"UGeometryScriptLibrary_TextureMapFunctions",
                          L"SampleTextureRenderTarget2DAtUVPositions_GpuReadFailed",
                          L"SampleTextureRenderTarget2DAtUVPositions: Error reading texture data from the GPU."
                         );
      UE::Geometry::AppendError(param_5,OperationFailed,pFVar5);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    if (local_d8.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Image.Buffer.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->List).SharedReferenceCount.ReferenceController);
  }
  return;
}

// StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions @ 14cec28c0

void __cdecl
UGeometryScriptLibrary_TextureMapFunctions::
StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSampleTexture2DAtUVPositions @ 14ced5380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_TextureMapFunctions::execSampleTexture2DAtUVPositions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UGeometryScriptDebug *pUVar11;
  ulonglong *puVar12;
  char cVar13;
  char cVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  FText *pFVar22;
  ulonglong uVar23;
  TVector4<float> *pTVar24;
  FLinearColor *pFVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  longlong lVar28;
  TReferenceControllerBase<1> *pTVar29;
  uint uVar30;
  uint uVar31;
  FGeometryScriptColorList *this;
  longlong lVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  UGeometryScriptDebug *local_218;
  UTexture2D *local_210;
  TImageBuilder<UE::Math::TVector4<float>_> local_208;
  ulonglong *local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  FGeometryScriptColorList local_1c8;
  ulonglong *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  TVector4<float>_u_0 local_1a8;
  undefined2 local_198;
  undefined6 uStack_196;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  undefined8 local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  TVector2<double>_u_0 local_148;
  TVector2<double>_u_0 local_138;
  FText local_128;
  FText local_118;
  TVector4<float>_u_0 local_108;
  TVector4<float>_u_0 local_f8;
  TVector4<float>_u_0 local_e8;
  TVector4<float>_u_0 local_d8;
  FLinearColor local_c8 [9];
  
  local_1d8 = (ulonglong *)0x0;
  pTStack_1d0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  uVar31 = 0;
  local_210 = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  dStack_190 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_188 = _UNK_150689688;
  local_198 = 0x100;
  dStack_180 = 0.0;
  dStack_178 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_1c8.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  local_1c8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_218 = (UGeometryScriptDebug *)0x0;
  this = &local_1c8;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    this = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  pTVar29 = pTStack_1d0;
  puVar12 = local_1d8;
  pUVar11 = local_218;
  local_170 = CONCAT62(uStack_196,local_198);
  local_1b8 = local_1d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b0 = pTStack_1d0;
  dStack_168 = dStack_190;
  local_150 = dStack_178;
  local_160 = dStack_188;
  dStack_158 = dStack_180;
  if (pTStack_1d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_1d0->SharedReferenceCount = (atomic<int>)((int)pTStack_1d0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_210 == (UTexture2D *)0x0) {
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_128,L"UGeometryScriptLibrary_TextureMapFunctions",
                         L"SampleTexture2DAtUVPositions_InvalidInput2",
                         L"SampleTexture2DAtUVPositions: Texture is Null");
    UE::Geometry::AppendError(pUVar11,InvalidInputs,pFVar22);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
  }
  else {
    local_208.Dimensions.Width = 0;
    local_208.Dimensions.Height = 0;
    local_208.Image.DimensionY = 0;
    local_208.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Image.Buffer.ArrayNum = 0;
    local_208.Image.Buffer.ArrayMax = 0;
    local_208.Image.DimensionX = 0;
    bVar19 = UE::AssetUtils::ReadTexture(local_210,&local_208,false);
    if (bVar19) {
      FGeometryScriptColorList::Reset(this,0);
      if ((puVar12 != (ulonglong *)0x0) && ((int)puVar12[1] != 0)) {
        uVar21 = (uint)puVar12[1];
        lVar28 = (longlong)(int)uVar21;
        if (((this->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar4 = (this->List).Object;
        iVar20 = pTVar4->ArrayNum;
        piVar1 = &pTVar4->ArrayNum;
        if (iVar20 < (int)uVar21) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,uVar21 - iVar20,&pTVar4->AllocatorInstance,piVar1,&pTVar4->ArrayMax);
        }
        else {
          if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
          }
          if ((int)uVar21 < iVar20) {
            uVar30 = iVar20 - uVar21;
            if (((int)(uVar30 | uVar21) < 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar19)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (uVar30 != 0) {
              pFVar26 = (pTVar4->AllocatorInstance).Data + lVar28 * 0x10;
              iVar20 = (*piVar1 - uVar21) - uVar30;
              if (iVar20 != 0) {
                memmove(pFVar26,pFVar26 + (longlong)(int)uVar30 * 0x10,(longlong)iVar20 << 4);
              }
              *piVar1 = *piVar1 - uVar30;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,&pTVar4->AllocatorInstance,*piVar1,&pTVar4->ArrayMax);
            }
          }
        }
        dVar18 = local_150;
        dVar17 = dStack_158;
        dVar16 = local_160;
        dVar15 = dStack_168;
        puVar12 = local_1b8;
        uVar10 = _UNK_150689648;
        uVar9 = ___xmm_3f800000000000000000000000000000;
        dVar8 = __real_3ff0000000000000;
        if (0 < (int)uVar21) {
          cVar14 = local_170._1_1_;
          lVar32 = 0;
          cVar13 = (char)local_170;
          do {
            uVar21 = 0;
            if ((int)uVar31 < (int)puVar12[1]) {
              uVar21 = ~uVar31 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar23 = *puVar12;
            local_1a8._0_8_ = uVar9;
            local_1a8._8_8_ = uVar10;
            dVar38 = dVar15 * *(double *)(lVar32 + uVar23) + dVar17;
            dVar37 = dVar16 * ((double *)(lVar32 + uVar23))[1] + dVar18;
            if (cVar14 == '\0') {
              if (cVar13 != '\0') {
                if (0.0 <= dVar38) {
                  if (dVar8 <= dVar38) {
                    dVar38 = dVar8;
                  }
                }
                else {
                  dVar38 = 0.0;
                }
                if (0.0 <= dVar37) {
                  dVar33 = dVar37;
                  if (dVar8 <= dVar37) {
                    dVar33 = dVar8;
                  }
                }
                else {
                  dVar33 = 0.0;
                }
                goto LAB_14ced59bc;
              }
              local_e8._0_8_ = 0;
              local_e8._8_8_ = 0;
              if (0.0 <= dVar38) {
                if (dVar8 <= dVar38) {
                  dVar38 = dVar8;
                }
              }
              else {
                dVar38 = 0.0;
              }
              if (0.0 <= dVar37) {
                if (dVar8 <= dVar37) {
                  dVar37 = dVar8;
                }
              }
              else {
                dVar37 = 0.0;
              }
              local_138._s_0.X = (double)local_208.Dimensions.Width * dVar38;
              local_138._s_0.Y = (double)local_208.Dimensions.Height * dVar37;
              UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<double,0>
                        (&local_208,(TVector4<float> *)&local_d8._s_0,
                         (TVector2<double> *)&local_138._s_0,(TVector4<float> *)&local_e8._s_0);
              local_1a8._0_8_ = local_d8._0_8_;
              local_1a8._8_8_ = local_d8._8_8_;
            }
            else {
              lVar27 = (longlong)dVar38;
              dVar33 = dVar38;
              if ((lVar27 != -0x8000000000000000) && ((double)lVar27 != dVar38)) {
                auVar34._8_8_ = dVar38;
                auVar34._0_8_ = dVar38;
                uVar21 = movmskpd((int)uVar23,auVar34);
                uVar23 = (ulonglong)(uVar21 & 1);
                dVar33 = (double)(longlong)(lVar27 - uVar23);
              }
              lVar27 = (longlong)dVar37;
              dVar38 = dVar38 - dVar33;
              dVar35 = dVar37;
              if ((lVar27 != -0x8000000000000000) && ((double)lVar27 != dVar37)) {
                auVar36._8_8_ = dVar37;
                auVar36._0_8_ = dVar37;
                uVar21 = movmskpd((int)uVar23,auVar36);
                dVar35 = (double)(longlong)(lVar27 - (ulonglong)(uVar21 & 1));
              }
              dVar33 = dVar37 - dVar35;
              if (cVar13 == '\0') {
                local_108._0_8_ = 0;
                local_108._8_8_ = 0;
                local_148._s_0.Y = (double)local_208.Dimensions.Height * (dVar37 - dVar35);
                local_148._s_0.X = (double)local_208.Dimensions.Width * dVar38;
                UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<double,1>
                          (&local_208,(TVector4<float> *)&local_f8._s_0,
                           (TVector2<double> *)&local_148._s_0,(TVector4<float> *)&local_108._s_0);
                local_1a8._0_8_ = local_f8._0_8_;
                local_1a8._8_8_ = local_f8._8_8_;
              }
              else {
LAB_14ced59bc:
                pTVar24 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                    (&local_208.Image,
                                     (longlong)(int)((double)local_208.Dimensions.Height * dVar33) *
                                     (longlong)local_208.Dimensions.Width +
                                     (longlong)(int)((double)local_208.Dimensions.Width * dVar38));
                local_1a8._0_8_ = *(undefined8 *)&pTVar24->field0_0x0;
                local_1a8._8_8_ = *(undefined8 *)((longlong)&pTVar24->field0_0x0 + 8);
              }
            }
            pFVar25 = FLinearColor::FLinearColor(local_c8,(TVector4<float> *)&local_1a8._s_0);
            uVar6 = *(undefined8 *)&pFVar25->field0_0x0;
            uVar7 = *(undefined8 *)((longlong)&pFVar25->field0_0x0 + 8);
            uVar21 = 0;
            if ((int)uVar31 < *piVar1) {
              uVar21 = ~uVar31 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar31 = uVar31 + 1;
            pFVar26 = (pTVar4->AllocatorInstance).Data + lVar32;
            *(undefined8 *)pFVar26 = uVar6;
            *(undefined8 *)(pFVar26 + 8) = uVar7;
            lVar32 = lVar32 + 0x10;
            lVar28 = lVar28 + -1;
            pTVar29 = local_1b0;
          } while (lVar28 != 0);
        }
      }
    }
    else {
      pFVar22 = FText::AsLocalizable_Advanced_LocText
                          (&local_118,L"UGeometryScriptLibrary_TextureMapFunctions",
                           L"SampleTexture2DAtUVPositions_TexReadFailed",
                           L"SampleTexture2DAtUVPositions: Error reading source texture data. If using this function at Runtime, The Compression Settings type on the UTexture2D Asset must be set to VectorDisplacementmap (RGBA8)."
                          );
      UE::Geometry::AppendError(pUVar11,OperationFailed,pFVar22);
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
    }
    if (local_208.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Image.Buffer.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1d0);
  return;
}

// execSampleTextureRenderTarget2DAtUVPositions @ 14ced5b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_TextureMapFunctions::execSampleTextureRenderTarget2DAtUVPositions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FImageDimensions FVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UGeometryScriptDebug *pUVar12;
  ForAnyElementType FVar13;
  UTextureRenderTarget *pUVar14;
  char cVar15;
  char cVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  FText *pFVar24;
  FTextureRenderTargetResource *pFVar25;
  ulonglong uVar26;
  TVector4<float> *pTVar27;
  FLinearColor *pFVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  longlong lVar31;
  ulong64 uVar32;
  uint uVar33;
  longlong lVar34;
  TReferenceControllerBase<1> *pTVar35;
  FGeometryScriptColorList *this;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  UGeometryScriptDebug *local_res20;
  TImageBuilder<UE::Math::TVector4<float>_> local_278;
  UTextureRenderTarget *local_248;
  ulonglong *local_240;
  ECubeFace local_238;
  ERangeCompressionMode EStack_234;
  uint uStack_230;
  float fStack_22c;
  undefined2 local_228;
  undefined2 uStack_226;
  int iStack_224;
  uint uStack_220;
  int local_218;
  int iStack_214;
  ulonglong *local_210;
  TReferenceControllerBase<1> *pTStack_208;
  TIntRect<int>_u_0 local_200;
  FGeometryScriptColorList local_1f0;
  TReferenceControllerBase<1> *local_1e0;
  TVector4<float>_u_0 local_1d8;
  undefined2 local_1c8;
  undefined6 uStack_1c6;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  TVector2<double>_u_0 local_178;
  TVector2<double>_u_0 local_168;
  FReadSurfaceDataFlags local_158;
  FText local_138;
  FText local_128;
  FText local_118;
  TVector4<float>_u_0 local_108;
  TVector4<float>_u_0 local_f8;
  TVector4<float>_u_0 local_e8;
  TVector4<float>_u_0 local_d8;
  FLinearColor local_c8 [9];
  
  local_210 = (ulonglong *)0x0;
  pTStack_208 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  local_248 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  dStack_1c0 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_1b8 = _UNK_150689688;
  local_1c8 = 0x100;
  dStack_1b0 = 0.0;
  dStack_1a8 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_1f0.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  local_1f0.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  this = &local_1f0;
  if ((FGeometryScriptColorList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptColorList *)0x0) {
    this = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pTVar35 = pTStack_208;
  pUVar14 = local_248;
  pUVar12 = local_res20;
  local_1a0 = CONCAT62(uStack_1c6,local_1c8);
  local_240 = local_210;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1e0 = pTStack_208;
  dStack_198 = dStack_1c0;
  local_180 = dStack_1a8;
  local_190 = dStack_1b8;
  dStack_188 = dStack_1b0;
  if (pTStack_208 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_208->SharedReferenceCount = (atomic<int>)((int)pTStack_208->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_248 == (UTextureRenderTarget *)0x0) {
    pFVar24 = FText::AsLocalizable_Advanced_LocText
                        (&local_138,L"UGeometryScriptLibrary_TextureMapFunctions",
                         L"SampleTextureRenderTarget2DAtUVPositions_InvalidInput",
                         L"SampleTextureRenderTarget2DAtUVPositions: Texture is Null");
    UE::Geometry::AppendError(pUVar12,InvalidInputs,pFVar24);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar25 = UTextureRenderTarget::GameThread_GetRenderTargetResource(local_248);
    if (pFVar25 == (FTextureRenderTargetResource *)0x0) {
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_128,L"UGeometryScriptLibrary_TextureMapFunctions",
                           L"SampleTextureRenderTarget2DAtUVPositions_NullResource",
                           L"SampleTextureRenderTarget2DAtUVPositions: Render target resource is Null"
                          );
      UE::Geometry::AppendError(pUVar12,OperationFailed,pFVar24);
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
    }
    else {
      iVar22 = *(int *)((longlong)&pUVar14[1]._padding_ + 4);
      lVar31 = (longlong)iVar22;
      local_228 = 0;
      iStack_224 = 0;
      uStack_220 = 0;
      uStack_230 = uStack_230 & 0xffffff00;
      local_278.Image.Buffer.ArrayMax = 0;
      iVar2 = (int)pUVar14[1]._padding_;
      FVar8 = (FImageDimensions)pUVar14[1]._padding_;
      lVar34 = (longlong)iVar2;
      local_238 = CubeFace_MAX;
      EStack_234 = RCM_MinMax;
      fStack_22c = 16000.0;
      local_278.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Image.Buffer.ArrayNum = 0;
      if (((iVar2 < 0) || (iVar22 < 0)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("WidthIn >= 0 && HeightIn >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageDimensions.h"
                              ,0x20,L""), bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar32 = lVar31 * lVar34;
      local_278.Dimensions = FVar8;
      local_278.Image.DimensionX = lVar34;
      local_278.Image.DimensionY = lVar31;
      local_218 = iVar2;
      iStack_214 = iVar22;
      if (uVar32 - local_278.Image.Buffer.ArrayNum == 0 ||
          (longlong)uVar32 < local_278.Image.Buffer.ArrayNum) {
        if ((longlong)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar32);
        }
        if ((longlong)uVar32 < local_278.Image.Buffer.ArrayNum) {
          lVar31 = local_278.Image.Buffer.ArrayNum - uVar32;
          if (((((uint)((ulonglong)lVar31 >> 0x3f) ^ 1) & ((uint)(uVar32 >> 0x3f) ^ 1)) == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar21)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (lVar31 != 0) {
            lVar34 = (local_278.Image.Buffer.ArrayNum - lVar31) - uVar32;
            if (lVar34 != 0) {
              memmove(local_278.Image.Buffer.AllocatorInstance.Data + uVar32 * 0x10,
                      local_278.Image.Buffer.AllocatorInstance.Data + uVar32 * 0x10 + lVar31 * 0x10,
                      lVar34 * 0x10);
            }
            local_278.Image.Buffer.ArrayNum = local_278.Image.Buffer.ArrayNum - lVar31;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x10,0x10,(ForAnyElementType *)&local_278.Image,
                       local_278.Image.Buffer.ArrayNum,&local_278.Image.Buffer.ArrayMax);
          }
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (0x10,0x10,uVar32 - local_278.Image.Buffer.ArrayNum,
                   (ForAnyElementType *)&local_278.Image,&local_278.Image.Buffer.ArrayNum,
                   &local_278.Image.Buffer.ArrayMax);
      }
      FVar13.Data = local_278.Image.Buffer.AllocatorInstance.Data;
      if ((local_278.Image.Buffer.ArrayNum < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_158.CompressionMode = EStack_234;
      local_158.CubeFace = local_238;
      local_158.MaxDepthRange = fStack_22c;
      local_158._8_4_ = uStack_230;
      local_158._18_2_ = uStack_226;
      local_158.bOutputStencil = (bool)(undefined1)local_228;
      local_158.MipLevel = local_228._1_1_;
      local_158.ArrayIndex = iStack_224;
      local_200._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_200._8_4_ = (undefined4)pUVar14[1]._padding_;
      local_200._12_4_ = *(undefined4 *)((longlong)&pUVar14[1]._padding_ + 4);
      local_158.GPUIndex = uStack_220;
      bVar21 = FRenderTarget::ReadLinearColorPixelsPtr
                         ((FRenderTarget *)&pFVar25->_padding_,(FLinearColor *)FVar13.Data,
                          &local_158,(TIntRect<int> *)&local_200._s_0);
      if (bVar21) {
        FGeometryScriptColorList::Reset(this,0);
        if (local_240 != (ulonglong *)0x0) {
          uVar23 = (uint)local_240[1];
          lVar31 = (longlong)(int)uVar23;
          if (uVar23 != 0) {
            if (((this->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar21)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar4 = (this->List).Object;
            iVar22 = pTVar4->ArrayNum;
            piVar1 = &pTVar4->ArrayNum;
            if (iVar22 < (int)uVar23) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,uVar23 - iVar22,&pTVar4->AllocatorInstance,piVar1,&pTVar4->ArrayMax)
              ;
            }
            else {
              if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
              }
              if ((int)uVar23 < iVar22) {
                uVar33 = iVar22 - uVar23;
                if (((int)(uVar33 | uVar23) < 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (uVar33 != 0) {
                  pFVar29 = (pTVar4->AllocatorInstance).Data + lVar31 * 0x10;
                  iVar22 = (*piVar1 - uVar33) - uVar23;
                  if (iVar22 != 0) {
                    memmove(pFVar29,pFVar29 + (longlong)(int)uVar33 * 0x10,(longlong)iVar22 << 4);
                  }
                  *piVar1 = *piVar1 - uVar33;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,&pTVar4->AllocatorInstance,*piVar1,&pTVar4->ArrayMax);
                }
              }
            }
            dVar20 = local_180;
            dVar19 = dStack_188;
            dVar18 = local_190;
            dVar17 = dStack_198;
            uVar11 = _UNK_150689648;
            uVar10 = ___xmm_3f800000000000000000000000000000;
            dVar9 = __real_3ff0000000000000;
            uVar33 = 0;
            if (0 < (int)uVar23) {
              cVar16 = local_1a0._1_1_;
              lVar34 = 0;
              cVar15 = (char)local_1a0;
              do {
                uVar23 = 0;
                if ((int)uVar33 < (int)local_240[1]) {
                  uVar23 = ~uVar33 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar26 = *local_240;
                local_1d8._0_8_ = uVar10;
                local_1d8._8_8_ = uVar11;
                dVar41 = dVar17 * SUB168(*(undefined1 (*) [16])(uVar26 + lVar34),0) + dVar19;
                dVar40 = SUB168(*(undefined1 (*) [16])(uVar26 + lVar34),8) * dVar18 + dVar20;
                if (cVar16 == '\0') {
                  if (cVar15 != '\0') {
                    if (0.0 <= dVar41) {
                      if (dVar9 <= dVar41) {
                        dVar41 = dVar9;
                      }
                    }
                    else {
                      dVar41 = 0.0;
                    }
                    if (0.0 <= dVar40) {
                      dVar36 = dVar40;
                      if (dVar9 <= dVar40) {
                        dVar36 = dVar9;
                      }
                    }
                    else {
                      dVar36 = 0.0;
                    }
                    goto LAB_14ced63cf;
                  }
                  local_e8._0_8_ = 0;
                  local_e8._8_8_ = 0;
                  if (0.0 <= dVar41) {
                    if (dVar9 <= dVar41) {
                      dVar41 = dVar9;
                    }
                  }
                  else {
                    dVar41 = 0.0;
                  }
                  if (0.0 <= dVar40) {
                    if (dVar9 <= dVar40) {
                      dVar40 = dVar9;
                    }
                  }
                  else {
                    dVar40 = 0.0;
                  }
                  local_168._s_0.X = (double)local_278.Dimensions.Width * dVar41;
                  local_168._s_0.Y = (double)local_278.Dimensions.Height * dVar40;
                  UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<double,0>
                            (&local_278,(TVector4<float> *)&local_d8._s_0,
                             (TVector2<double> *)&local_168._s_0,(TVector4<float> *)&local_e8._s_0);
                  local_1d8._0_8_ = local_d8._0_8_;
                  local_1d8._8_8_ = local_d8._8_8_;
                }
                else {
                  lVar30 = (longlong)dVar41;
                  dVar36 = dVar41;
                  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != dVar41)) {
                    auVar37._8_8_ = dVar41;
                    auVar37._0_8_ = dVar41;
                    uVar23 = movmskpd((int)uVar26,auVar37);
                    uVar26 = (ulonglong)(uVar23 & 1);
                    dVar36 = (double)(longlong)(lVar30 - uVar26);
                  }
                  lVar30 = (longlong)dVar40;
                  dVar41 = dVar41 - dVar36;
                  dVar38 = dVar40;
                  if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != dVar40)) {
                    auVar39._8_8_ = dVar40;
                    auVar39._0_8_ = dVar40;
                    uVar23 = movmskpd((int)uVar26,auVar39);
                    dVar38 = (double)(longlong)(lVar30 - (ulonglong)(uVar23 & 1));
                  }
                  dVar36 = dVar40 - dVar38;
                  if (cVar15 == '\0') {
                    local_108._0_8_ = 0;
                    local_108._8_8_ = 0;
                    local_178._s_0.Y = (double)local_278.Dimensions.Height * (dVar40 - dVar38);
                    local_178._s_0.X = (double)local_278.Dimensions.Width * dVar41;
                    UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::
                    BilinearSample<double,1>
                              (&local_278,(TVector4<float> *)&local_f8._s_0,
                               (TVector2<double> *)&local_178._s_0,
                               (TVector4<float> *)&local_108._s_0);
                    local_1d8._0_8_ = local_f8._0_8_;
                    local_1d8._8_8_ = local_f8._8_8_;
                  }
                  else {
LAB_14ced63cf:
                    pTVar27 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                        (&local_278.Image,
                                         (longlong)
                                         (int)((double)local_278.Dimensions.Height * dVar36) *
                                         (longlong)local_278.Dimensions.Width +
                                         (longlong)
                                         (int)((double)local_278.Dimensions.Width * dVar41));
                    local_1d8._0_8_ = *(undefined8 *)&pTVar27->field0_0x0;
                    local_1d8._8_8_ = *(undefined8 *)((longlong)&pTVar27->field0_0x0 + 8);
                  }
                }
                pFVar28 = FLinearColor::FLinearColor(local_c8,(TVector4<float> *)&local_1d8._s_0);
                uVar6 = *(undefined8 *)&pFVar28->field0_0x0;
                uVar7 = *(undefined8 *)((longlong)&pFVar28->field0_0x0 + 8);
                uVar23 = 0;
                if ((int)uVar33 < *piVar1) {
                  uVar23 = ~uVar33 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar33 = uVar33 + 1;
                pFVar29 = (pTVar4->AllocatorInstance).Data + lVar34;
                *(undefined8 *)pFVar29 = uVar6;
                *(undefined8 *)(pFVar29 + 8) = uVar7;
                lVar34 = lVar34 + 0x10;
                lVar31 = lVar31 + -1;
                pTVar35 = local_1e0;
              } while (lVar31 != 0);
            }
          }
        }
      }
      else {
        pFVar24 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"UGeometryScriptLibrary_TextureMapFunctions",
                             L"SampleTextureRenderTarget2DAtUVPositions_GpuReadFailed",
                             L"SampleTextureRenderTarget2DAtUVPositions: Error reading texture data from the GPU."
                            );
        UE::Geometry::AppendError(pUVar12,OperationFailed,pFVar24);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
      }
      if (local_278.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Image.Buffer.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f0.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_208);
  return;
}

