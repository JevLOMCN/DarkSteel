// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1474221e0

UClass * __cdecl UAnimCompress_PerTrackCompression::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_PerTrackCompression",
               &Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton,
               StaticRegisterNativesUAnimCompress_PerTrackCompression,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_PerTrackCompression>,
               InternalVTableHelperCtorCaller<UAnimCompress_PerTrackCompression>,local_res8,
               UAnimCompress_RemoveLinearKeys::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton;
}

// UAnimCompress_PerTrackCompression @ 147434610

UAnimCompress_PerTrackCompression * __thiscall
UAnimCompress_PerTrackCompression::UAnimCompress_PerTrackCompression
          (UAnimCompress_PerTrackCompression *this,FVTableHelper *param_1)

{
  UAnimCompress::UAnimCompress((UAnimCompress *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCompress_PerTrackCompression__6B_;
  (this->AllowedRotationFormats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedRotationFormats).ArrayNum = 0;
  (this->AllowedRotationFormats).ArrayMax = 0;
  (this->AllowedTranslationFormats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedTranslationFormats).ArrayNum = 0;
  (this->AllowedTranslationFormats).ArrayMax = 0;
  (this->AllowedScaleFormats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedScaleFormats).ArrayNum = 0;
  (this->AllowedScaleFormats).ArrayMax = 0;
  return this;
}

// UAnimCompress_PerTrackCompression @ 147434660

UAnimCompress_PerTrackCompression * __thiscall
UAnimCompress_PerTrackCompression::UAnimCompress_PerTrackCompression
          (UAnimCompress_PerTrackCompression *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  TArray<TEnumAsByte<AnimationCompressionFormat>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TEnumAsByte<AnimationCompressionFormat>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UAnimCompress_PerTrackCompression *pUVar9;
  FScriptContainerElement local_38;
  FScriptContainerElement local_37;
  FScriptContainerElement local_36;
  FScriptContainerElement local_35;
  FScriptContainerElement local_34;
  FScriptContainerElement local_33;
  FScriptContainerElement local_32;
  FScriptContainerElement local_31 [9];
  
  UAnimCompress_RemoveLinearKeys::UAnimCompress_RemoveLinearKeys
            ((UAnimCompress_RemoveLinearKeys *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCompress_PerTrackCompression__6B_;
  pTVar2 = &this->AllowedTranslationFormats;
  pTVar3 = &this->AllowedScaleFormats;
  (this->AllowedRotationFormats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllowedRotationFormats).ArrayNum = 0;
  (this->AllowedRotationFormats).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllowedTranslationFormats).ArrayNum = 0;
  (this->AllowedTranslationFormats).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AllowedScaleFormats).ArrayNum = 0;
  (this->AllowedScaleFormats).ArrayMax = 0;
  ::FString::operator=((FString *)&this->_padding_,L"Compress each track independently");
  this->bResampleAnimation = 0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffc;
  this->bUseAdaptiveError = 0;
  this->bUseOverrideForEndEffectors = 0;
  this->bUseAdaptiveError2 = 0;
  this->MaxPosDiffBitwise = 0.007;
  this->MaxAngleDiffBitwise = 0.002;
  this->MaxScaleDiffBitwise = 0.0007;
  this->MaxZeroingThreshold = 0.0002;
  this->ResampledFramerate = 15.0;
  this->MinKeysForResampling = 10;
  this->ParentingDivisor = 1.0;
  this->ParentingDivisorExponent = 1.0;
  this->TrackHeightBias = 1;
  this->RotationErrorSourceRatio = 0.8;
  this->TranslationErrorSourceRatio = 0.8;
  this->ScaleErrorSourceRatio = 0.001;
  this->MaxErrorPerTrackRatio = 0.3;
  this->PerturbationProbeSize = 0.001;
  pFVar5 = (this->AllowedRotationFormats).AllocatorInstance.Data;
  local_38 = (FScriptContainerElement)0x6;
  if ((pFVar5 <= &local_38) && (&local_38 < pFVar5 + (this->AllowedRotationFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedRotationFormats).ArrayNum;
  if (iVar8 == (this->AllowedRotationFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->AllowedRotationFormats).AllocatorInstance,
                       &(this->AllowedRotationFormats).ArrayMax);
  }
  (this->AllowedRotationFormats).ArrayNum = iVar8 + 1;
  local_37 = (FScriptContainerElement)0x2;
  (this->AllowedRotationFormats).AllocatorInstance.Data[iVar8] = local_38;
  pFVar5 = (this->AllowedRotationFormats).AllocatorInstance.Data;
  if ((pFVar5 <= &local_37) && (&local_37 < pFVar5 + (this->AllowedRotationFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedRotationFormats).ArrayNum;
  if (iVar8 == (this->AllowedRotationFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->AllowedRotationFormats).AllocatorInstance,
                       &(this->AllowedRotationFormats).ArrayMax);
  }
  (this->AllowedRotationFormats).ArrayNum = iVar8 + 1;
  local_36 = (FScriptContainerElement)0x6;
  (this->AllowedRotationFormats).AllocatorInstance.Data[iVar8] = local_37;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= &local_36) && (&local_36 < pFVar5 + (this->AllowedTranslationFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedTranslationFormats).ArrayNum;
  if (iVar8 == (this->AllowedTranslationFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,&(this->AllowedTranslationFormats).ArrayMax)
    ;
  }
  (this->AllowedTranslationFormats).ArrayNum = iVar8 + 1;
  local_35 = (FScriptContainerElement)0x3;
  (pTVar2->AllocatorInstance).Data[iVar8] = local_36;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= &local_35) && (&local_35 < pFVar5 + (this->AllowedTranslationFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedTranslationFormats).ArrayNum;
  if (iVar8 == (this->AllowedTranslationFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,&(this->AllowedTranslationFormats).ArrayMax)
    ;
  }
  (this->AllowedTranslationFormats).ArrayNum = iVar8 + 1;
  local_34 = (FScriptContainerElement)0x2;
  (pTVar2->AllocatorInstance).Data[iVar8] = local_35;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= &local_34) && (&local_34 < pFVar5 + (this->AllowedTranslationFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedTranslationFormats).ArrayNum;
  if (iVar8 == (this->AllowedTranslationFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,&(this->AllowedTranslationFormats).ArrayMax)
    ;
  }
  (this->AllowedTranslationFormats).ArrayNum = iVar8 + 1;
  local_33 = (FScriptContainerElement)0x6;
  (pTVar2->AllocatorInstance).Data[iVar8] = local_34;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar5 <= &local_33) && (&local_33 < pFVar5 + (this->AllowedScaleFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedScaleFormats).ArrayNum;
  if (iVar8 == (this->AllowedScaleFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->AllowedScaleFormats).ArrayMax);
  }
  (this->AllowedScaleFormats).ArrayNum = iVar8 + 1;
  local_32 = (FScriptContainerElement)0x3;
  (pTVar3->AllocatorInstance).Data[iVar8] = local_33;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar5 <= &local_32) && (&local_32 < pFVar5 + (this->AllowedScaleFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedScaleFormats).ArrayNum;
  if (iVar8 == (this->AllowedScaleFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->AllowedScaleFormats).ArrayMax);
  }
  (this->AllowedScaleFormats).ArrayNum = iVar8 + 1;
  local_31[0] = (FScriptContainerElement)0x2;
  (pTVar3->AllocatorInstance).Data[iVar8] = local_32;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar5 <= local_31) && (local_31 < pFVar5 + (this->AllowedScaleFormats).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pUVar9 = (UAnimCompress_PerTrackCompression *)(*pcVar6)();
      return pUVar9;
    }
  }
  iVar8 = (this->AllowedScaleFormats).ArrayNum;
  if (iVar8 == (this->AllowedScaleFormats).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar3->AllocatorInstance,&(this->AllowedScaleFormats).ArrayMax);
  }
  (this->AllowedScaleFormats).ArrayNum = iVar8 + 1;
  (pTVar3->AllocatorInstance).Data[iVar8] = local_31[0];
  return this;
}

// ~UAnimCompress_PerTrackCompression @ 1474369a0

void __thiscall
UAnimCompress_PerTrackCompression::~UAnimCompress_PerTrackCompression
          (UAnimCompress_PerTrackCompression *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimCompress_PerTrackCompression__6B_;
  pFVar1 = (this->AllowedScaleFormats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllowedTranslationFormats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllowedRotationFormats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAnimCompress_RemoveLinearKeys__6B_;
  UAnimCompress::~UAnimCompress((UAnimCompress *)this);
  return;
}

// DecompressBone @ 147445630

void __thiscall
UAnimCompress_PerTrackCompression::DecompressBone
          (UAnimCompress_PerTrackCompression *this,FAnimSequenceDecompressionContext *param_1,
          int param_2,TTransform<double> *param_3)

{
  ICompressedAnimData *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  pIVar1 = param_1->CompressedAnimData;
  (param_3->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (param_3->Rotation).XY.m128d_f64[1] = (double)fVar2;
  (param_3->Rotation).ZW.m128d_f64[0] = (double)fVar3;
  (param_3->Rotation).ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (param_3->Translation).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (param_3->Translation).XY.m128d_f64[1] = (double)fVar2;
  (param_3->Translation).ZW.m128d_f64[0] = (double)fVar3;
  (param_3->Translation).ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (param_3->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (param_3->Scale3D).XY.m128d_f64[1] = (double)fVar2;
  (param_3->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
  (param_3->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
  AEFPerTrackCompressionCodec::GetBoneAtomTranslation(param_3,param_1,param_2);
  AEFPerTrackCompressionCodec::GetBoneAtomRotation(param_3,param_1,param_2);
  if (0 < pIVar1[2].CompressedNumberOfKeys) {
    AEFPerTrackCompressionCodec::GetBoneAtomScale(param_3,param_1,param_2);
  }
  return;
}

// GetPrivateStaticClass @ 147461e20

UClass * __cdecl UAnimCompress_PerTrackCompression::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress_PerTrackCompression",
               &Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton,
               StaticRegisterNativesUAnimCompress_PerTrackCompression,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress_PerTrackCompression>,
               InternalVTableHelperCtorCaller<UAnimCompress_PerTrackCompression>,local_res8,
               UAnimCompress_RemoveLinearKeys::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress_PerTrackCompression.InnerSingleton;
}

// StaticRegisterNativesUAnimCompress_PerTrackCompression @ 14747b270

void __cdecl
UAnimCompress_PerTrackCompression::StaticRegisterNativesUAnimCompress_PerTrackCompression(void)

{
  return;
}

