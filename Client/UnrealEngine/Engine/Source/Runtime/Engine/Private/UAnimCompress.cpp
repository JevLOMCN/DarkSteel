// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1473c7140

UClass * __cdecl UAnimCompress::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress",
               &Z_Registration_Info_UClass_UAnimCompress.InnerSingleton,
               StaticRegisterNativesUAnimCompress,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress>,
               InternalVTableHelperCtorCaller<UAnimCompress>,local_res8,
               UAnimBoneCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress.InnerSingleton;
}

// UAnimCompress @ 1473d86e0

UAnimCompress * __thiscall UAnimCompress::UAnimCompress(UAnimCompress *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAnimCompress__6B_;
  return this;
}

// UAnimCompress @ 1473d8720

UAnimCompress * __thiscall
UAnimCompress::UAnimCompress(UAnimCompress *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec__6B_;
  ::FString::FString((FString *)&this->_padding_,L"None");
  this->TranslationCompressionFormat = '\0';
  this->RotationCompressionFormat = '\x01';
  this->_padding_ = (longlong)&___7UAnimCompress__6B_;
  return this;
}

// ~UAnimCompress @ 1473db460

void __thiscall UAnimCompress::~UAnimCompress(UAnimCompress *this)

{
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AllocateAnimData @ 1473e1910

TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_> __thiscall
UAnimCompress::AllocateAnimData(UAnimCompress *this)

{
  undefined8 *puVar1;
  ICompressedAnimData *in_RDX;
  
  puVar1 = ::operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &___7FUECompressedAnimData__6B_;
    puVar1[6] = 2;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_>)in_RDX;
}

// ByteSwapIn @ 1473f0f70

void __thiscall
UAnimCompress::ByteSwapIn
          (UAnimCompress *this,ICompressedAnimData *param_1,TArrayView<unsigned_char,int> *param_2,
          FMemoryReader *param_3)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = param_2->DataPtr;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < param_1[1].CompressedNumberOfKeys) {
    do {
      (**(code **)(param_3->_padding_ + 0x188))(param_3,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1].CompressedNumberOfKeys);
  }
  if (0 < param_1[2].CompressedNumberOfKeys) {
    do {
      (**(code **)(param_3->_padding_ + 0x188))(param_3,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[2].CompressedNumberOfKeys);
  }
  AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>((FUECompressedAnimData *)param_1);
  if ((param_1[5]._padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RotationCodec",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                         ,0x4bc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473f104c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1[5]._padding_)
            ((undefined8 *)param_1[5]._padding_,param_1,param_3);
  return;
}

// ByteSwapOut @ 1473f1090

void __thiscall
UAnimCompress::ByteSwapOut
          (UAnimCompress *this,ICompressedAnimData *param_1,TArrayView<unsigned_char,int> *param_2,
          FMemoryWriter *param_3)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = param_2->DataPtr;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < param_1[1].CompressedNumberOfKeys) {
    do {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1].CompressedNumberOfKeys);
  }
  if (0 < param_1[2].CompressedNumberOfKeys) {
    do {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,puVar3,4);
      puVar3 = puVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[2].CompressedNumberOfKeys);
  }
  AnimationFormat_SetInterfaceLinks<FUECompressedAnimData>((FUECompressedAnimData *)param_1);
  if ((param_1[5]._padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RotationCodec",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompressionTypes.cpp"
                         ,0x4bc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473f116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[5]._padding_ + 8))
            ((longlong *)param_1[5]._padding_,param_1,param_3);
  return;
}

// DecompressBone @ 1473f5d10

void __thiscall
UAnimCompress::DecompressBone
          (UAnimCompress *this,FAnimSequenceDecompressionContext *param_1,int param_2,
          TTransform<double> *param_3)

{
  double dVar1;
  ICompressedAnimData *pIVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  TTransform<double> *pTVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(param_3->Translation).ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64 = auVar11;
  pIVar2 = param_1->CompressedAnimData;
  (**(code **)(**(longlong **)&pIVar2[4].CompressedNumberOfKeys + 0x30))
            (*(longlong **)&pIVar2[4].CompressedNumberOfKeys,param_3,param_1,param_2);
  (**(code **)(*(longlong *)pIVar2[5]._padding_ + 0x28))
            ((longlong *)pIVar2[5]._padding_,param_3,param_1,param_2);
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pIVar2[2].CompressedNumberOfKeys < 1) {
    if (param_1->bAdditiveAnimation == false) {
      if ((param_1->RefPoses).ArrayNum < 1) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("DecompContext.GetRefLocalPoses().Num() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompress.cpp"
                            ,0x2ef,
                            L"Reference pose must be provided in the FAnimSequenceDecompressionContext constructor"
                           );
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((param_1->TrackToSkeletonMap).ArrayNum < 1) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("DecompContext.GetTrackToSkeletonMap().Num() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCompress.cpp"
                            ,0x2f0,
                            L"TrackToSkeletonMap must be provided in the FAnimSequenceDecompressionContext constructor"
                           );
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar15 = 0;
      if (param_2 < (param_1->TrackToSkeletonMap).ArrayNum) {
        uVar15 = (uint)~param_2 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar16 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                          (&param_1->RefPoses,
                           (param_1->TrackToSkeletonMap).DataPtr[param_2].BoneTreeIndex);
      dVar12 = (pTVar16->Scale3D).XY.m128d_f64[1];
      dVar1 = (pTVar16->Scale3D).ZW.m128d_f64[0];
      uVar17 = SUB84(dVar1,0);
      uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
      (param_3->Scale3D).XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
      (param_3->Scale3D).XY.m128d_f64[1] = dVar12;
    }
    else {
      uVar17 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar18 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      (param_3->Scale3D).XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_3->Scale3D).XY.m128d_f64[1] = (double)uVar13;
    }
    (param_3->Scale3D).ZW.m128d_f64[0] = (double)CONCAT44(uVar18,uVar17);
    (param_3->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  else {
    (**(code **)(**(longlong **)&pIVar2[5].CompressedNumberOfKeys + 0x38))
              (*(longlong **)&pIVar2[5].CompressedNumberOfKeys,param_3,param_1,param_2);
  }
  return;
}

// DecompressPose @ 1473f9110

void __thiscall
UAnimCompress::DecompressPose
          (UAnimCompress *this,FAnimSequenceDecompressionContext *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_3,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<UE::Math::TTransform<double>,int> *param_5)

{
  ICompressedAnimData *pIVar1;
  
  pIVar1 = param_1->CompressedAnimData;
  (**(code **)(**(longlong **)&pIVar1[4].CompressedNumberOfKeys + 0x18))
            (*(longlong **)&pIVar1[4].CompressedNumberOfKeys,param_5,param_3,param_1);
  (**(code **)(*(longlong *)pIVar1[5]._padding_ + 0x10))
            ((longlong *)pIVar1[5]._padding_,param_5,param_2,param_1);
  if (0 < pIVar1[2].CompressedNumberOfKeys) {
    (**(code **)(**(longlong **)&pIVar1[5].CompressedNumberOfKeys + 0x20))
              (*(longlong **)&pIVar1[5].CompressedNumberOfKeys,param_5,param_4,param_1);
  }
  return;
}

// GetPrivateStaticClass @ 147403c80

UClass * __cdecl UAnimCompress::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCompress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCompress",
               &Z_Registration_Info_UClass_UAnimCompress.InnerSingleton,
               StaticRegisterNativesUAnimCompress,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCompress>,
               InternalVTableHelperCtorCaller<UAnimCompress>,local_res8,
               UAnimBoneCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCompress.InnerSingleton;
}

// StaticRegisterNativesUAnimCompress @ 147419c00

void __cdecl UAnimCompress::StaticRegisterNativesUAnimCompress(void)

{
  return;
}

