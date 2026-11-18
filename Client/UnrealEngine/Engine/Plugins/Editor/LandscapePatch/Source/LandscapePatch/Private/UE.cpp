// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 14

// Construct<FLandscapePatchComponentInstanceData> @ 14db09520

void __cdecl
UE::CoreUObject::Private::Construct<FLandscapePatchComponentInstanceData>(void *param_1)

{
  memset(param_1,0,0xb8);
  FSceneComponentInstanceData::FSceneComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FLandscapePatchComponentInstanceData__6B_;
  return;
}

// ConstructForTests<FLandscapePatchComponentInstanceData> @ 14db09560

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapePatchComponentInstanceData>(void *param_1)

{
  FSceneComponentInstanceData::FSceneComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FLandscapePatchComponentInstanceData__6B_;
  return;
}

// Destruct<FLandscapePatchComponentInstanceData> @ 14db09590

void __cdecl UE::CoreUObject::Private::Destruct<FLandscapePatchComponentInstanceData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSceneComponentInstanceData__6B_;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x68));
  FInstanceCacheDataBase::~FInstanceCacheDataBase(param_1);
  return;
}

// Copy<FLandscapePatchComponentInstanceData> @ 14db095a0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapePatchComponentInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *this;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FInstanceCacheDataBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_);
    }
    this = &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).ArrayNum;
    ((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->_padding_ =
         ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_;
    *(undefined1 *)
     &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
      Data = *(undefined1 *)
              &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
               AllocatorInstance.Data;
    piVar1 = &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).ArrayNum;
    *(undefined4 *)
     ((longlong)
      &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
       Data + 4) = *(undefined4 *)
                    ((longlong)
                     &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
                      AllocatorInstance.Data + 4);
    if (this != piVar1) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->ReferencedNames,
                 (int *)((longlong)param_1 + 0xb0),
                 (ForElementType<FSetElementId> *)
                 &((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->ReferencedNames,
                 (int)((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->_padding_);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)piVar1);
    }
    param_1 = &((FInstanceCacheDataBase *)((longlong)param_1 + 0xb0))->SavedProperties;
    param_2 = &((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->SavedProperties;
  }
  return true;
}

// Construct<FLandscapeTexturePatchEncodingSettings> @ 14db0baf0

void __cdecl
UE::CoreUObject::Private::Construct<FLandscapeTexturePatchEncodingSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FLandscapeTexturePatchEncodingSettings> @ 14db0bb10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeTexturePatchEncodingSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  return;
}

// Destruct<FLandscapeTexturePatchEncodingSettings> @ 14db0bb30

void __cdecl
UE::CoreUObject::Private::Destruct<FLandscapeTexturePatchEncodingSettings>(void *param_1)

{
  return;
}

// Copy<FLandscapeTexturePatchEncodingSettings> @ 14db0bb40

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeTexturePatchEncodingSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_2;
    do {
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
      puVar4 = puVar4 + 2;
      puVar1 = (undefined8 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLandscapeHeightPatchConvertToNativeParams> @ 14db0bb70

void __cdecl
UE::CoreUObject::Private::Construct<FLandscapeHeightPatchConvertToNativeParams>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FLandscapeHeightPatchConvertToNativeParams> @ 14db0bb90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLandscapeHeightPatchConvertToNativeParams>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FLandscapeHeightPatchConvertToNativeParams> @ 14db0bbb0

void __cdecl
UE::CoreUObject::Private::Destruct<FLandscapeHeightPatchConvertToNativeParams>(void *param_1)

{
  return;
}

// Copy<FLandscapeHeightPatchConvertToNativeParams> @ 14db0bbc0

bool __cdecl
UE::CoreUObject::Private::Copy<FLandscapeHeightPatchConvertToNativeParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CopyTextureOnRenderThread @ 14db15d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Landscape::PatchUtil::CopyTextureOnRenderThread
          (FRHICommandListImmediate *param_1,FTextureResource *param_2,FTextureResource *param_3)

{
  wchar_t *pwVar1;
  EShaderPlatform EVar2;
  FRDGEventName *pFVar3;
  TRefCountPtr<IPooledRenderTarget> TVar4;
  FRDGTexture *pFVar5;
  FRDGTexture *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_878 [32];
  undefined1 local_848 [16];
  FRDGEventName local_838;
  FRDGEventName local_820;
  FRDGBuilder local_808;
  ulonglong local_38;
  
  EVar2 = GMaxRHIShaderPlatform;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  pwVar8 = (wchar_t *)0x0;
  pFVar3 = FRDGEventName::FRDGEventName(&local_820,1,L"LandscapeTexturePatchCopyTexture");
  local_838.EventFormat = pFVar3->EventFormat;
  ::FString::FString(&local_838.FormattedEventName,&pFVar3->FormattedEventName);
  FRDGBuilder::FRDGBuilder(&local_808,param_1,&local_838,None,EVar2);
  if (local_820.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pwVar1 = (wchar_t *)param_2->_padding_;
  pwVar7 = pwVar8;
  if ((pwVar1 != (wchar_t *)0x0) && ((char)pwVar1[0x89] == '\0')) {
    pwVar7 = pwVar1;
  }
  TVar4 = CreateRenderTarget((FRHITexture *)local_848,pwVar7);
  pFVar5 = FRDGBuilder::RegisterExternalTexture
                     (&local_808,(TRefCountPtr<IPooledRenderTarget> *)TVar4.Reference,None);
  if ((longlong *)local_848._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_848._0_8_ + 0x38))();
  }
  pwVar1 = (wchar_t *)param_3->_padding_;
  if ((pwVar1 != (wchar_t *)0x0) && ((char)pwVar1[0x89] == '\0')) {
    pwVar8 = pwVar1;
  }
  TVar4 = CreateRenderTarget((FRHITexture *)(local_848 + 8),pwVar8);
  pFVar6 = FRDGBuilder::RegisterExternalTexture
                     (&local_808,(TRefCountPtr<IPooledRenderTarget> *)TVar4.Reference,None);
  if ((longlong *)local_848._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_848._8_8_ + 0x38))();
  }
  FSimpleTextureCopyPS::AddToRenderGraph(&local_808,pFVar5,pFVar6);
  FRDGBuilder::Execute(&local_808);
  FRDGBuilder::~FRDGBuilder(&local_808);
  return;
}

// GetHeightmapToWorld @ 14db18520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UE::Landscape::PatchUtil::GetHeightmapToWorld
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1)

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
  __m128 _Var11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  _Var11 = GlobalVectorConstants::FloatZero;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)_Var11.m128_f32[2];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)_Var11.m128_f32[3];
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  dVar8 = __real_c070000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar15 = (param_1->Scale3D).ZW.m128d_f64[0] * __real_3f80000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar15;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  dVar4 = (param_1->Rotation).XY.m128d_f64[1];
  dVar15 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar15;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
  auVar14 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar8 = dVar8 * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar15 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar12 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar6 = (param_1->Scale3D).XY.m128d_f64[0] * ___xmm_bfe0000000000000bfe0000000000000;
  dVar7 = (param_1->Scale3D).XY.m128d_f64[1] * _UNK_150689738;
  uVar20 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar16 = blendpd(auVar12,auVar14,2);
  auVar21._8_4_ = SUB84(dVar7,0);
  auVar21._0_8_ = dVar6;
  auVar21._12_4_ = uVar20;
  dVar4 = auVar14._0_8_;
  auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar6;
  auVar22._8_8_ = dVar8 * auVar12._8_8_ - dVar4 * dVar7;
  auVar23._8_4_ = SUB84(dVar7,0);
  auVar23._0_8_ = dVar6;
  auVar23._12_4_ = uVar20;
  auVar12._8_4_ = SUB84(dVar15,0);
  auVar12._0_8_ = dVar8;
  auVar12._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar12 = blendpd(auVar23,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar4 - auVar16._0_8_ * dVar8;
  auVar13._8_8_ = auVar12._8_8_ * auVar14._8_8_ - auVar16._8_8_ * dVar15;
  auVar12 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar15 = auVar22._8_8_ + auVar22._8_8_;
  dVar5 = auVar13._0_8_ + auVar13._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar23 = blendpd(auVar22,auVar13,2);
  auVar18._8_4_ = SUB84(dVar5,0);
  auVar18._0_8_ = dVar15;
  auVar18._12_4_ = uVar20;
  auVar16._8_4_ = SUB84(dVar5,0);
  auVar16._0_8_ = dVar15;
  auVar16._12_4_ = uVar20;
  auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar23 = blendpd(auVar16,auVar24,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar15;
  auVar19._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar4 * dVar5;
  auVar12 = blendpd(auVar12,auVar14,2);
  auVar17._0_8_ = auVar23._0_8_ * dVar4 - auVar12._0_8_ * auVar24._0_8_;
  auVar17._8_8_ = auVar23._8_8_ * auVar14._8_8_ - auVar12._8_8_ * auVar24._8_8_;
  auVar14._8_4_ = SUB84(auVar19._8_8_,0);
  auVar14._0_8_ = auVar19._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  dVar4 = (param_1->Translation).XY.m128d_f64[1];
  dVar10 = (param_1->Translation).ZW.m128d_f64[0];
  auVar12 = blendpd(auVar19,auVar17,2);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       dVar15 * dVar9 + dVar6 + auVar14._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       dVar5 * dVar9 + dVar7 + auVar17._0_8_ + dVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       auVar24._0_8_ * dVar9 + dVar8 + auVar12._0_8_ + dVar10;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

