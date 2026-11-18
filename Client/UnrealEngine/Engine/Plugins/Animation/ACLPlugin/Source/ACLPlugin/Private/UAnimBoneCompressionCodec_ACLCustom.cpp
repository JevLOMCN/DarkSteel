// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 8

// StaticClass @ 14de8f750

UClass * __cdecl UAnimBoneCompressionCodec_ACLCustom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimBoneCompressionCodec_ACLCustom",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec_ACLCustom,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionCodec_ACLCustom>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec_ACLCustom>,local_res8,
               UAnimBoneCompressionCodec_ACLBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.InnerSingleton;
}

// UAnimBoneCompressionCodec_ACLCustom @ 14deb1970

UAnimBoneCompressionCodec_ACLCustom * __thiscall
UAnimBoneCompressionCodec_ACLCustom::UAnimBoneCompressionCodec_ACLCustom
          (UAnimBoneCompressionCodec_ACLCustom *this,FVTableHelper *param_1)

{
  UAnimBoneCompressionCodec::UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this,param_1);
  *(undefined ***)this = &___7UAnimBoneCompressionCodec_ACLCustom__6B_;
  return this;
}

// UAnimBoneCompressionCodec_ACLCustom @ 14deb19a0

UAnimBoneCompressionCodec_ACLCustom * __thiscall
UAnimBoneCompressionCodec_ACLCustom::UAnimBoneCompressionCodec_ACLCustom
          (UAnimBoneCompressionCodec_ACLCustom *this,FObjectInitializer *param_1)

{
  UAnimBoneCompressionCodec::UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this,param_1);
  *(undefined ***)this = &___7UAnimBoneCompressionCodec_ACLCustom__6B_;
  return this;
}

// ~UAnimBoneCompressionCodec_ACLCustom @ 14deb1d90

void __thiscall
UAnimBoneCompressionCodec_ACLCustom::~UAnimBoneCompressionCodec_ACLCustom
          (UAnimBoneCompressionCodec_ACLCustom *this)

{
  *(undefined ***)this = &___7UAnimBoneCompressionCodec_ACLBase__6B_;
  UAnimBoneCompressionCodec::~UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this);
  return;
}

// DecompressBone @ 14deb35d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAnimBoneCompressionCodec_ACLCustom::DecompressBone
          (UAnimBoneCompressionCodec_ACLCustom *this,FAnimSequenceDecompressionContext *param_1,
          int param_2,TTransform<double> *param_3)

{
  int iVar1;
  compressed_tracks *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_108 [32];
  FFrameTime local_e8;
  UEOutputTrackWriter<1> local_e0;
  UEOutputTrackWriter<0> local_c8;
  persistent_transform_decompression_context_v0 local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pcVar2 = *(compressed_tracks **)&param_1->CompressedAnimData[1].CompressedNumberOfKeys;
  if ((((pcVar2 == (compressed_tracks *)0x0) || (((ulonglong)pcVar2 & 0xf) != 0)) ||
      (pcVar2->m_padding[0] != 0xac11ac11)) ||
     ((*(char *)((longlong)pcVar2->m_padding + 6) != '\0' ||
      (3 < (ushort)((short)pcVar2->m_padding[1] - 7U))))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressedClipData != nullptr && CompressedClipData->is_valid(false).empty()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimBoneCompressionCodec_ACLCustom.cpp"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    acl::decompression_context<UEDebugDecompressionSettings>::
    decompression_context<UEDebugDecompressionSettings>
              ((decompression_context<UEDebugDecompressionSettings> *)&local_a8);
    if (((ulonglong)pcVar2 & 0xf) != 0) goto LAB_14deb369e;
  }
  else {
    acl::decompression_context<UEDebugDecompressionSettings>::
    decompression_context<UEDebugDecompressionSettings>
              ((decompression_context<UEDebugDecompressionSettings> *)&local_a8);
  }
  if (((pcVar2->m_padding[0] == 0xac11ac11) && (*(char *)((longlong)pcVar2->m_padding + 6) == '\0'))
     && (((ushort)((short)pcVar2->m_padding[1] - 7U) < 4 && ((short)pcVar2->m_padding[1] == 10)))) {
    acl::acl_impl::initialize_v0<UEDebugDecompressionSettings,acl::null_database_settings>
              (&local_a8,pcVar2,(database_context<acl::null_database_settings> *)0x0);
  }
LAB_14deb369e:
  local_e8 = param_1->SamplingTime;
  iVar1 = (param_1->SamplingRate).Denominator;
  acl::decompression_context<UEDebugDecompressionSettings>::seek
            ((decompression_context<UEDebugDecompressionSettings> *)&local_a8,
             ((float)((longlong)iVar1 * (longlong)local_e8.FrameNumber.Value.Value) +
             (float)iVar1 * local_e8.SubFrame) / (float)(param_1->SamplingRate).Numerator,
             (uint)(param_1->Interpolation == Step));
  if ((local_a8.tracks[1].m_padding[1] & 2) == 0) {
    local_c8.RefPoses = (TTransform<double> *)0x0;
    local_c8.TrackToBoneMapping = (FTrackToSkeletonMap *)0x0;
    local_c8.Atom = (FACLTransform *)param_3;
    acl::acl_impl::decompress_track_v0<UEDebugDecompressionSettings,UEOutputTrackWriter<0>_>
              (&local_a8,param_2,&local_c8);
  }
  else {
    if ((param_1->RefPoses).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecompContext.GetRefLocalPoses().Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                         ,0x172,
                         L"Reference pose must be provided in the FAnimSequenceDecompressionContext constructor to use bind pose stripping"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_1->TrackToSkeletonMap).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecompContext.GetTrackToSkeletonMap().Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                         ,0x173,
                         L"TrackToSkeletonMap must be provided in the FAnimSequenceDecompressionContext constructor to use bind pose stripping"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_e0.RefPoses = (param_1->RefPoses).DataPtr;
    local_e0.TrackToBoneMapping = (param_1->TrackToSkeletonMap).DataPtr;
    if (local_a8.tracks != (compressed_tracks *)0x0) {
      local_e0.Atom = (FACLTransform *)param_3;
      acl::acl_impl::decompress_track_v0<UEDebugDecompressionSettings,UEOutputTrackWriter<1>_>
                (&local_a8,param_2,&local_e0);
    }
  }
  return;
}

// DecompressPose @ 14deb4770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAnimBoneCompressionCodec_ACLCustom::DecompressPose
          (UAnimBoneCompressionCodec_ACLCustom *this,FAnimSequenceDecompressionContext *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_3,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<UE::Math::TTransform<double>,int> *param_5)

{
  compressed_tracks *pcVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  TArrayView<UE::Math::TTransform<double>,int> *pTVar4;
  int iVar5;
  bool bVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  ulong64 uVar9;
  FAtomIndices *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined1 auStack_178 [32];
  int local_158;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  uint local_144;
  FScriptContainerElement *local_140;
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *local_138;
  uint local_130;
  compressed_tracks *local_128;
  TArrayView<UE::Math::TTransform<double>,int> *local_120;
  FFrameTime local_118;
  FAnimSequenceDecompressionContext *local_110;
  code *local_108;
  undefined1 *local_100;
  FUEOutputWriter<1> local_f8;
  FUEOutputWriter<0> local_d8;
  persistent_transform_decompression_context_v0 local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  pcVar1 = *(compressed_tracks **)&param_1->CompressedAnimData[1].CompressedNumberOfKeys;
  local_120 = param_5;
  local_138 = param_3;
  local_110 = param_1;
  if ((((pcVar1 == (compressed_tracks *)0x0) || (((ulonglong)pcVar1 & 0xf) != 0)) ||
      (pcVar1->m_padding[0] != 0xac11ac11)) ||
     ((*(char *)((longlong)pcVar1->m_padding + 6) != '\0' ||
      (3 < (ushort)((short)pcVar1->m_padding[1] - 7U))))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressedClipData != nullptr && CompressedClipData->is_valid(false).empty()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimBoneCompressionCodec_ACLCustom.cpp"
                       ,0x49,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    acl::decompression_context<UEDebugDecompressionSettings>::
    decompression_context<UEDebugDecompressionSettings>
              ((decompression_context<UEDebugDecompressionSettings> *)&local_b8);
    if (((ulonglong)pcVar1 & 0xf) != 0) goto LAB_14deb485f;
  }
  else {
    acl::decompression_context<UEDebugDecompressionSettings>::
    decompression_context<UEDebugDecompressionSettings>
              ((decompression_context<UEDebugDecompressionSettings> *)&local_b8);
  }
  if (((pcVar1->m_padding[0] == 0xac11ac11) && (*(char *)((longlong)pcVar1->m_padding + 6) == '\0'))
     && (((ushort)((short)pcVar1->m_padding[1] - 7U) < 4 && ((short)pcVar1->m_padding[1] == 10)))) {
    acl::acl_impl::initialize_v0<UEDebugDecompressionSettings,acl::null_database_settings>
              (&local_b8,pcVar1,(database_context<acl::null_database_settings> *)0x0);
  }
LAB_14deb485f:
  local_118 = param_1->SamplingTime;
  iVar12 = (param_1->SamplingRate).Denominator;
  acl::decompression_context<UEDebugDecompressionSettings>::seek
            ((decompression_context<UEDebugDecompressionSettings> *)&local_b8,
             ((float)((longlong)iVar12 * (longlong)local_118.FrameNumber.Value.Value) +
             (float)iVar12 * local_118.SubFrame) / (float)(param_1->SamplingRate).Numerator,
             (uint)(param_1->Interpolation == Step));
  local_128 = local_b8.tracks;
  local_130 = local_b8.tracks[1].m_buffer_header.size;
  uVar13 = (ulonglong)(int)local_130;
  puVar7 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_100 = &local_145;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_108,puVar7);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar13;
  uVar9 = SUB168(ZEXT816(6) * auVar3,0);
  if (SUB168(ZEXT816(6) * auVar3,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  _Dst = FMemStackBase::Alloc((FMemStackBase *)(pFVar8 + 2),uVar9,0x10);
  memset(_Dst,0xff,uVar13 * 6);
  local_144 = param_2->ArrayNum;
  uVar13 = (ulonglong)(int)local_144;
  iVar15 = -1;
  pFVar17 = (param_2->AllocatorInstance).Data;
  iVar12 = param_5->ArrayNum;
  iVar14 = 0x7fffffff;
  local_140 = pFVar17 + uVar13 * 8;
  iVar16 = -1;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar13) {
      local_148 = 0;
      `TCheckedPointerIterator<BoneTrackPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_148);
    }
    if (pFVar17 == local_140) break;
    _Dst[*(int *)(pFVar17 + 4)].Rotation = *(ushort *)pFVar17;
    iVar10 = *(int *)pFVar17;
    iVar11 = iVar10;
    if (iVar12 < iVar10) {
      iVar11 = iVar12;
    }
    iVar12 = iVar11;
    if (iVar10 < iVar16) {
      iVar10 = iVar16;
    }
    iVar16 = *(int *)(pFVar17 + 4);
    iVar11 = iVar16;
    if (iVar14 < iVar16) {
      iVar11 = iVar14;
    }
    iVar14 = iVar11;
    if (iVar16 < iVar15) {
      iVar16 = iVar15;
    }
    iVar15 = iVar16;
    pFVar17 = pFVar17 + 8;
    uVar13 = (ulonglong)local_144;
    iVar16 = iVar10;
  }
  pFVar17 = (local_138->AllocatorInstance).Data;
  iVar10 = local_138->ArrayNum;
  local_140 = pFVar17 + (longlong)iVar10 * 8;
  while( true ) {
    if (local_138->ArrayNum != iVar10) {
      local_147 = 0;
      `TCheckedPointerIterator<BoneTrackPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_147);
    }
    if (pFVar17 == local_140) break;
    _Dst[*(int *)(pFVar17 + 4)].Translation = *(ushort *)pFVar17;
    iVar11 = *(int *)pFVar17;
    iVar5 = iVar11;
    if (iVar12 < iVar11) {
      iVar5 = iVar12;
    }
    iVar12 = iVar5;
    if (iVar11 < iVar16) {
      iVar11 = iVar16;
    }
    iVar16 = *(int *)(pFVar17 + 4);
    iVar5 = iVar16;
    if (iVar14 < iVar16) {
      iVar5 = iVar14;
    }
    iVar14 = iVar5;
    if (iVar16 < iVar15) {
      iVar16 = iVar15;
    }
    iVar15 = iVar16;
    pFVar17 = pFVar17 + 8;
    iVar16 = iVar11;
  }
  if ((local_128[1].m_padding[1] & 1) != 0) {
    local_144 = param_4->ArrayNum;
    uVar13 = (ulonglong)(int)local_144;
    pTVar18 = (TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *)(param_4->AllocatorInstance).Data
    ;
    local_138 = (TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *)
                (&pTVar18->AllocatorInstance + uVar13);
    while( true ) {
      if (param_4->ArrayNum != (int)uVar13) {
        local_146 = 0;
        `TCheckedPointerIterator<BoneTrackPair_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_146);
      }
      if (pTVar18 == local_138) break;
      _Dst[*(int *)((longlong)&(pTVar18->AllocatorInstance).Data + 4)].Scale =
           *(ushort *)&(pTVar18->AllocatorInstance).Data;
      iVar10 = *(int *)&(pTVar18->AllocatorInstance).Data;
      iVar11 = iVar10;
      if (iVar12 < iVar10) {
        iVar11 = iVar12;
      }
      iVar12 = iVar11;
      if (iVar10 < iVar16) {
        iVar10 = iVar16;
      }
      iVar16 = *(int *)((longlong)&(pTVar18->AllocatorInstance).Data + 4);
      iVar11 = iVar16;
      if (iVar14 < iVar16) {
        iVar11 = iVar14;
      }
      iVar14 = iVar11;
      if (iVar16 < iVar15) {
        iVar16 = iVar15;
      }
      iVar15 = iVar16;
      pTVar18 = (TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *)&pTVar18->ArrayNum;
      uVar13 = (ulonglong)local_144;
      iVar16 = iVar10;
    }
  }
  pTVar4 = local_120;
  pcVar1 = local_128;
  if (((iVar12 < 0) || (local_120->ArrayNum <= iVar12)) &&
     (local_158 = iVar12,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutAtoms.IsValidIndex(MinAtomIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                        ,0x1cf,L"Invalid atom index: %d"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((iVar16 < 0) || (pTVar4->ArrayNum <= iVar16)) &&
     (local_158 = iVar16,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutAtoms.IsValidIndex(MaxAtomIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                        ,0x1d0,L"Invalid atom index: %d"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((iVar14 < 0) &&
     (local_158 = iVar14,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("MinTrackIndex >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                        ,0x1d1,L"Invalid track index: %d"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((int)local_130 <= iVar15) &&
     (local_158 = iVar15,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("MaxTrackIndex < ACLBoneCount",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                        ,0x1d2,L"Invalid track index: %d"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pcVar1[1].m_padding[1] & 2) == 0) {
    local_d8.Atoms = (FACLTransform *)pTVar4->DataPtr;
    local_d8.RefPoses = (TTransform<double> *)0x0;
    local_d8.TrackToBoneMapping = (FTrackToSkeletonMap *)0x0;
    if (local_b8.tracks != (compressed_tracks *)0x0) {
      local_d8.TrackToAtomsMap = _Dst;
      acl::acl_impl::decompress_tracks_v0<UEDebugDecompressionSettings,FUEOutputWriter<0>_>
                (&local_b8,&local_d8);
    }
  }
  else {
    local_f8.RefPoses = (local_110->RefPoses).DataPtr;
    local_f8.TrackToBoneMapping = (local_110->TrackToSkeletonMap).DataPtr;
    local_f8.Atoms = (FACLTransform *)pTVar4->DataPtr;
    if (local_b8.tracks != (compressed_tracks *)0x0) {
      local_f8.TrackToAtomsMap = _Dst;
      acl::acl_impl::decompress_tracks_v0<UEDebugDecompressionSettings,FUEOutputWriter<1>_>
                (&local_b8,&local_f8);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14deb59f0

UClass * __cdecl UAnimBoneCompressionCodec_ACLCustom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimBoneCompressionCodec_ACLCustom",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec_ACLCustom,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionCodec_ACLCustom>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec_ACLCustom>,local_res8,
               UAnimBoneCompressionCodec_ACLBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.InnerSingleton;
}

// StaticRegisterNativesUAnimBoneCompressionCodec_ACLCustom @ 14deb8650

void __cdecl
UAnimBoneCompressionCodec_ACLCustom::StaticRegisterNativesUAnimBoneCompressionCodec_ACLCustom(void)

{
  return;
}

