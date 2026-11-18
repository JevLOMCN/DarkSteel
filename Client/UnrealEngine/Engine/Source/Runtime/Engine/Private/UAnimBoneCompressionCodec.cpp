// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1473cb3d0

UClass * __cdecl UAnimBoneCompressionCodec::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBoneCompressionCodec",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionCodec>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton;
}

// UAnimBoneCompressionCodec @ 1473d83e0

UAnimBoneCompressionCodec * __thiscall
UAnimBoneCompressionCodec::UAnimBoneCompressionCodec
          (UAnimBoneCompressionCodec *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec__6B_;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  return this;
}

// UAnimBoneCompressionCodec @ 1473d8420

UAnimBoneCompressionCodec * __thiscall
UAnimBoneCompressionCodec::UAnimBoneCompressionCodec
          (UAnimBoneCompressionCodec *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec__6B_;
  ::FString::FString(&this->Description,L"None");
  return this;
}

// ~UAnimBoneCompressionCodec @ 1473db330

void __thiscall
UAnimBoneCompressionCodec::~UAnimBoneCompressionCodec(UAnimBoneCompressionCodec *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec__6B_;
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AllocateAnimData @ 1473e18d0

TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_> __thiscall
UAnimBoneCompressionCodec::AllocateAnimData(UAnimBoneCompressionCodec *this)

{
  ICompressedAnimData *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBoneCompressionCodec.h"
             ,0x57,L"Pure virtual not implemented (%s)");
  in_RDX->_padding_ = 0;
  return (TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_>)in_RDX;
}

// ByteSwapIn @ 1473f0f40

void __thiscall
UAnimBoneCompressionCodec::ByteSwapIn
          (UAnimBoneCompressionCodec *this,ICompressedAnimData *param_1,
          TArrayView<unsigned_char,int> *param_2,FMemoryReader *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBoneCompressionCodec.h"
             ,0x60,L"Pure virtual not implemented (%s)");
  return;
}

// ByteSwapOut @ 1473f1060

void __thiscall
UAnimBoneCompressionCodec::ByteSwapOut
          (UAnimBoneCompressionCodec *this,ICompressedAnimData *param_1,
          TArrayView<unsigned_char,int> *param_2,FMemoryWriter *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBoneCompressionCodec.h"
             ,0x69,L"Pure virtual not implemented (%s)");
  return;
}

// DecompressBone @ 1473f5ce0

void __thiscall
UAnimBoneCompressionCodec::DecompressBone
          (UAnimBoneCompressionCodec *this,FAnimSequenceDecompressionContext *param_1,int param_2,
          TTransform<double> *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBoneCompressionCodec.h"
             ,0x73,L"Pure virtual not implemented (%s)");
  return;
}

// DecompressPose @ 1473f8c00

void __thiscall
UAnimBoneCompressionCodec::DecompressPose
          (UAnimBoneCompressionCodec *this,FAnimSequenceDecompressionContext *param_1,
          FAnimPoseDecompressionData *param_2)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 *pTVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  __m128d *p_Var12;
  TQuat<double> *pTVar13;
  ForElementType<UE::Math::TTransform<double>_> FVar14;
  TQuat<double> *pTVar15;
  TVector<double> *pTVar16;
  undefined1 local_res18 [8];
  ForElementType<UE::Math::TTransform<double>_> local_78;
  int local_70 [2];
  code *local_68;
  undefined1 *local_60;
  TTransform<double> *local_58;
  int local_50;
  FMemMark local_48;
  
  uVar2 = param_2->OutAtomRotations->ArrayNum;
  puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_60 = local_res18;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar10);
  local_48.Mem = (FMemStackBase *)(pFVar11 + 2);
  local_48.Top = (local_48.Mem)->Top;
  local_48.SavedChunk = *(FTaggedMemory **)(pFVar11 + 4);
  local_48.bPopped = false;
  local_48.NextTopmostMark = *(FMemMark **)(pFVar11 + 5);
  pFVar11[5] = (FTlsAutoCleanup)&local_48;
  *(int *)(pFVar11 + 6) = *(int *)(pFVar11 + 6) + 1;
  local_78.Data = (TTransform<double> *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  if ((int)uVar2 < 1) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
  }
  else {
    iVar9 = UE::Core::Private::
            ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                      (0x60,0x10,uVar2,&local_78,local_70,local_70 + 1);
    DefaultConstructItems<UE::Math::TTransform<double>,int>(local_78.Data + iVar9,uVar2);
  }
  iVar9 = param_2->OutAtomRotations->ArrayNum;
  if (((iVar9 != param_2->OutAtomTranslations->ArrayNum) ||
      (iVar9 != param_2->OutAtomScales3D->ArrayNum)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecompressionData.GetOutAtomRotations().Num() == DecompressionData.GetOutAtomTranslations().Num() && DecompressionData.GetOutAtomRotations().Num() == DecompressionData.GetOutAtomScales3D().Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBoneCompressionCodec.cpp"
                         ,0x59,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < (int)uVar2) {
    if (((param_2->OutAtomRotations->ArrayNum < (int)uVar2) || (local_70[0] < (int)uVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DecompressionData.GetOutAtomRotations().Num() >= NumTransforms && OutAtoms.Num() >= NumTransforms"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBoneCompressionCodec.cpp"
                           ,0x5c,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar13 = param_2->OutAtomRotations->DataPtr;
    pTVar15 = pTVar13 + (int)uVar2;
    FVar14.Data = local_78.Data;
    for (; pTVar13 != pTVar15; pTVar13 = pTVar13 + 1) {
      dVar1 = pTVar13->Z;
      dVar4 = pTVar13->W;
      dVar5 = pTVar13->Y;
      ((FVar14.Data)->Rotation).XY.m128d_f64[0] = pTVar13->X;
      ((FVar14.Data)->Rotation).XY.m128d_f64[1] = dVar5;
      ((FVar14.Data)->Rotation).ZW.m128d_f64[0] = dVar1;
      ((FVar14.Data)->Rotation).ZW.m128d_f64[1] = dVar4;
      FVar14.Data = FVar14.Data + 1;
    }
    if (((param_2->OutAtomTranslations->ArrayNum < (int)uVar2) || (local_70[0] < (int)uVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DecompressionData.GetOutAtomTranslations().Num() >= NumTransforms && OutAtoms.Num() >= NumTransforms"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBoneCompressionCodec.cpp"
                           ,0x60,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar16 = param_2->OutAtomTranslations->DataPtr;
    pTVar6 = pTVar16 + (int)uVar2;
    if (pTVar16 != pTVar6) {
      p_Var12 = &((local_78.Data)->Translation).ZW;
      do {
        pTVar7 = &pTVar16->field0_0x0;
        dVar4 = (pTVar16->field0_0x0)._s_0.Y;
        dVar1 = (pTVar16->field0_0x0)._s_0.Z;
        pTVar16 = pTVar16 + 1;
        (((VectorRegister4Double *)(p_Var12 + -1))->XY).m128d_f64[0] = (pTVar7->_s_0).X;
        (((VectorRegister4Double *)(p_Var12 + -1))->XY).m128d_f64[1] = dVar4;
        p_Var12->m128d_f64[0] = dVar1;
        p_Var12->m128d_f64[1] = 0.0;
        p_Var12 = p_Var12 + 6;
      } while (pTVar16 != pTVar6);
    }
    if (((param_2->OutAtomScales3D->ArrayNum < (int)uVar2) || (local_70[0] < (int)uVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DecompressionData.GetOutAtomScales3D().Num() >= NumTransforms && OutAtoms.Num() >= NumTransforms"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBoneCompressionCodec.cpp"
                           ,100,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar16 = param_2->OutAtomScales3D->DataPtr;
    pTVar6 = pTVar16 + (int)uVar2;
    if (pTVar16 != pTVar6) {
      p_Var12 = &((local_78.Data)->Scale3D).ZW;
      do {
        pTVar7 = &pTVar16->field0_0x0;
        dVar4 = (pTVar16->field0_0x0)._s_0.Y;
        dVar1 = (pTVar16->field0_0x0)._s_0.Z;
        pTVar16 = pTVar16 + 1;
        (((VectorRegister4Double *)(p_Var12 + -1))->XY).m128d_f64[0] = (pTVar7->_s_0).X;
        (((VectorRegister4Double *)(p_Var12 + -1))->XY).m128d_f64[1] = dVar4;
        p_Var12->m128d_f64[0] = dVar1;
        p_Var12->m128d_f64[1] = 0.0;
        p_Var12 = p_Var12 + 6;
      } while (pTVar16 != pTVar6);
    }
  }
  iVar9 = local_70[0];
  local_58 = local_78.Data;
  if ((local_70[0] < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_50 = iVar9;
  (**(code **)(this->_padding_ + 0x2e0))
            (this,param_1,param_2->RotationPairs,param_2->TranslationPairs,param_2->ScalePairs,
             &local_58);
  if (0 < (int)uVar2) {
    if (((local_70[0] < (int)uVar2) || (param_2->OutAtomRotations->ArrayNum < (int)uVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutAtoms.Num() >= NumTransforms && DecompressionData.GetOutAtomRotations().Num() >= NumTransforms"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBoneCompressionCodec.cpp"
                           ,0x6d,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar13 = param_2->OutAtomRotations->DataPtr;
    for (FVar14.Data = local_78.Data; FVar14.Data != local_78.Data + (int)uVar2;
        FVar14.Data = FVar14.Data + 1) {
      dVar1 = ((FVar14.Data)->Rotation).XY.m128d_f64[1];
      dVar4 = ((FVar14.Data)->Rotation).ZW.m128d_f64[0];
      dVar5 = ((FVar14.Data)->Rotation).ZW.m128d_f64[1];
      pTVar13->X = ((FVar14.Data)->Rotation).XY.m128d_f64[0];
      pTVar13->Y = dVar1;
      pTVar13->Z = dVar4;
      pTVar13->W = dVar5;
      pTVar13 = pTVar13 + 1;
    }
    if (((local_70[0] < (int)uVar2) || (param_2->OutAtomTranslations->ArrayNum < (int)uVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutAtoms.Num() >= NumTransforms && DecompressionData.GetOutAtomTranslations().Num() >= NumTransforms"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBoneCompressionCodec.cpp"
                           ,0x71,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = param_2->OutAtomTranslations->DataPtr;
    for (FVar14.Data = local_78.Data; FVar14.Data != local_78.Data + (int)uVar2;
        FVar14.Data = FVar14.Data + 1) {
      dVar1 = ((FVar14.Data)->Translation).XY.m128d_f64[1];
      (pTVar6->field0_0x0)._s_0.X = ((FVar14.Data)->Translation).XY.m128d_f64[0];
      (pTVar6->field0_0x0)._s_0.Y = dVar1;
      (pTVar6->field0_0x0)._s_0.Z = ((FVar14.Data)->Translation).ZW.m128d_f64[0];
      pTVar6 = pTVar6 + 1;
    }
    if (((local_70[0] < (int)uVar2) || (param_2->OutAtomScales3D->ArrayNum < (int)uVar2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutAtoms.Num() >= NumTransforms && DecompressionData.GetOutAtomScales3D().Num() >= NumTransforms"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBoneCompressionCodec.cpp"
                           ,0x75,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = param_2->OutAtomScales3D->DataPtr;
    for (FVar14.Data = local_78.Data; FVar14.Data != local_78.Data + (int)uVar2;
        FVar14.Data = FVar14.Data + 1) {
      dVar1 = ((FVar14.Data)->Scale3D).XY.m128d_f64[1];
      (pTVar6->field0_0x0)._s_0.X = ((FVar14.Data)->Scale3D).XY.m128d_f64[0];
      (pTVar6->field0_0x0)._s_0.Y = dVar1;
      (pTVar6->field0_0x0)._s_0.Z = ((FVar14.Data)->Scale3D).ZW.m128d_f64[0];
      pTVar6 = pTVar6 + 1;
    }
  }
  if (local_48.bPopped == false) {
    if (((local_48.Mem)->TopMark != &local_48) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_48.bPopped = true;
    (local_48.Mem)->NumMarks = (local_48.Mem)->NumMarks + -1;
    if (local_48.SavedChunk != (local_48.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_48.Mem,local_48.SavedChunk);
    }
    (local_48.Mem)->Top = local_48.Top;
    (local_48.Mem)->TopMark = local_48.NextTopmostMark;
  }
  return;
}

// DecompressPose @ 1473f90e0

void __thiscall
UAnimBoneCompressionCodec::DecompressPose
          (UAnimBoneCompressionCodec *this,FAnimSequenceDecompressionContext *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_3,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<UE::Math::TTransform<double>,int> *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBoneCompressionCodec.h"
             ,0x70,L"Pure virtual not implemented (%s)");
  return;
}

// GetCodec @ 147400580

UAnimBoneCompressionCodec * __thiscall
UAnimBoneCompressionCodec::GetCodec(UAnimBoneCompressionCodec *this,FString *param_1)

{
  int iVar1;
  UAnimBoneCompressionCodec *pUVar2;
  bool bVar3;
  wchar_t *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x2b8))(this,&local_18);
  iVar1 = (param_1->Data).ArrayNum;
  if (local_10 == iVar1) {
    if (local_10 < 2) {
      bVar3 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        (local_18,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = local_10 + iVar1 == 1;
  }
  pUVar2 = (UAnimBoneCompressionCodec *)0x0;
  if (bVar3) {
    pUVar2 = this;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return pUVar2;
}

// GetCodecDDCHandle @ 1474006a0

FString * __thiscall
UAnimBoneCompressionCodec::GetCodecDDCHandle
          (UAnimBoneCompressionCodec *this,FString *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  FName local_res8;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,0x80);
  local_res8 = (FName)this->_padding_;
  ::FName::AppendString(&local_res8,__return_storage_ptr__);
  lVar2 = this->_padding_;
  while( true ) {
    if (lVar2 == 0) {
      return __return_storage_ptr__;
    }
    pUVar3 = UAnimBoneCompressionSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) break;
    ::FString::AppendChars(__return_storage_ptr__,L".",1);
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::AppendString(&local_res8,__return_storage_ptr__);
    lVar2 = *(longlong *)(lVar2 + 0x20);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474038e0

UClass * __cdecl UAnimBoneCompressionCodec::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBoneCompressionCodec",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionCodec>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec.InnerSingleton;
}

// StaticRegisterNativesUAnimBoneCompressionCodec @ 147419bb0

void __cdecl UAnimBoneCompressionCodec::StaticRegisterNativesUAnimBoneCompressionCodec(void)

{
  return;
}

