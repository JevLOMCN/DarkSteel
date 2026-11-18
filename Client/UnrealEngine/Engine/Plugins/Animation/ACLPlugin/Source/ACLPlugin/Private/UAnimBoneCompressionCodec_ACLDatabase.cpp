// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 11

// StaticClass @ 14de8e770

UClass * __cdecl UAnimBoneCompressionCodec_ACLDatabase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimBoneCompressionCodec_ACLDatabase",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec_ACLDatabase,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionCodec_ACLDatabase>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec_ACLDatabase>,local_res8,
               UAnimBoneCompressionCodec_ACLBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.InnerSingleton;
}

// UAnimBoneCompressionCodec_ACLDatabase @ 14deb19d0

UAnimBoneCompressionCodec_ACLDatabase * __thiscall
UAnimBoneCompressionCodec_ACLDatabase::UAnimBoneCompressionCodec_ACLDatabase
          (UAnimBoneCompressionCodec_ACLDatabase *this,FVTableHelper *param_1)

{
  UAnimBoneCompressionCodec::UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec_ACLDatabase__6B_;
  (this->DatabaseAsset).field0_0x0.DebugPtr = (UAnimationCompressionLibraryDatabase *)0x0;
  return this;
}

// UAnimBoneCompressionCodec_ACLDatabase @ 14deb1a00

UAnimBoneCompressionCodec_ACLDatabase * __thiscall
UAnimBoneCompressionCodec_ACLDatabase::UAnimBoneCompressionCodec_ACLDatabase
          (UAnimBoneCompressionCodec_ACLDatabase *this,FObjectInitializer *param_1)

{
  UAnimBoneCompressionCodec::UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec_ACLDatabase__6B_;
  (this->DatabaseAsset).field0_0x0.DebugPtr = (UAnimationCompressionLibraryDatabase *)0x0;
  return this;
}

// ~UAnimBoneCompressionCodec_ACLDatabase @ 14deb1db0

void __thiscall
UAnimBoneCompressionCodec_ACLDatabase::~UAnimBoneCompressionCodec_ACLDatabase
          (UAnimBoneCompressionCodec_ACLDatabase *this)

{
  this->_padding_ = (longlong)&___7UAnimBoneCompressionCodec_ACLBase__6B_;
  UAnimBoneCompressionCodec::~UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this);
  return;
}

// AllocateAnimData @ 14deb2be0

TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_> __thiscall
UAnimBoneCompressionCodec_ACLDatabase::AllocateAnimData(UAnimBoneCompressionCodec_ACLDatabase *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ICompressedAnimData *in_RDX;
  
  puVar1 = ::operator_new(0x40);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *puVar1 = &___7FACLDatabaseCompressedAnimData__6B_;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  in_RDX->_padding_ = (longlong)puVar2;
  puVar2[6] = this;
  return (TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_>)in_RDX;
}

// ByteSwapIn @ 14deb3020

void __thiscall
UAnimBoneCompressionCodec_ACLDatabase::ByteSwapIn
          (UAnimBoneCompressionCodec_ACLDatabase *this,ICompressedAnimData *param_1,
          TArrayView<unsigned_char,int> *param_2,FMemoryReader *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressedData.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimBoneCompressionCodec_ACLDatabase.cpp"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ByteSwapOut @ 14deb3080

void __thiscall
UAnimBoneCompressionCodec_ACLDatabase::ByteSwapOut
          (UAnimBoneCompressionCodec_ACLDatabase *this,ICompressedAnimData *param_1,
          TArrayView<unsigned_char,int> *param_2,FMemoryWriter *param_3)

{
  return;
}

// DecompressBone @ 14deb37e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimBoneCompressionCodec_ACLDatabase::DecompressBone
          (UAnimBoneCompressionCodec_ACLDatabase *this,FAnimSequenceDecompressionContext *param_1,
          int param_2,TTransform<double> *param_3)

{
  uint uVar1;
  int iVar2;
  ICompressedAnimData *pIVar3;
  compressed_tracks *pcVar4;
  database_context<UEDefaultDatabaseSettings> *pdVar5;
  compressed_database *pcVar6;
  code *pcVar7;
  bool bVar8;
  uint *puVar9;
  undefined1 auStack_108 [32];
  FFrameTime local_e8;
  UEOutputTrackWriter<1> local_e0;
  UEOutputTrackWriter<0> local_c8;
  persistent_transform_decompression_context_v0 local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pIVar3 = param_1->CompressedAnimData;
  acl::decompression_context<UEDefaultDBDecompressionSettings>::
  decompression_context<UEDefaultDBDecompressionSettings>
            ((decompression_context<UEDefaultDBDecompressionSettings> *)&local_a8);
  if ((int)pIVar3[2]._padding_ == 0) {
    return;
  }
  pcVar4 = *(compressed_tracks **)&pIVar3[1].CompressedNumberOfKeys;
  if (((((pcVar4 == (compressed_tracks *)0x0) || (((ulonglong)pcVar4 & 0xf) != 0)) ||
       (pcVar4->m_padding[0] != 0xac11ac11)) ||
      ((*(char *)((longlong)pcVar4->m_padding + 6) != '\0' ||
       (3 < (ushort)((short)pcVar4->m_padding[1] - 7U))))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedClipData != nullptr && CompressedClipData->is_valid(false).empty()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimBoneCompressionCodec_ACLDatabase.cpp"
                         ,0x161,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pdVar5 = *(database_context<UEDefaultDatabaseSettings> **)&pIVar3[2].CompressedNumberOfKeys;
  puVar9 = (uint *)0x0;
  if ((((pdVar5 != (database_context<UEDefaultDatabaseSettings> *)0x0) &&
       (((ulonglong)pcVar4 & 0xf) == 0)) &&
      ((pcVar4->m_padding[0] == 0xac11ac11 &&
       (((*(char *)((longlong)pcVar4->m_padding + 6) == '\0' &&
         ((ushort)((short)pcVar4->m_padding[1] - 7U) < 4)) &&
        (pcVar6 = (pdVar5->m_context).db, pcVar6 != (compressed_database *)0x0)))))) &&
     (((short)pcVar4->m_padding[1] == 10 && ((pcVar4[1].m_padding[1] & 0x100) != 0)))) {
    uVar1 = pcVar4[4].m_buffer_header.size;
    if (uVar1 != 0xffffffff) {
      puVar9 = (uint *)((longlong)pcVar4[2].m_padding + ((ulonglong)uVar1 - 8));
    }
    uVar1 = *puVar9;
    if (((uVar1 != 0xffffffff) &&
        (uVar1 <= (pcVar6[1].m_padding[1] + pcVar6[2].m_buffer_header.size * 2) * 8 - 0x10)) &&
       ((*(uint *)((pdVar5->m_context).clip_segment_headers + uVar1) ==
         (pcVar4->m_buffer_header).hash &&
        (bVar8 = acl::acl_impl::
                 initialize_v0<UEDefaultDBDecompressionSettings,UEDefaultDatabaseSettings>
                           (&local_a8,pcVar4,pdVar5), bVar8)))) goto LAB_14deb3940;
  }
  if (2 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  acl::decompression_context<UEDefaultDBDecompressionSettings>::initialize
            ((decompression_context<UEDefaultDBDecompressionSettings> *)&local_a8,pcVar4);
LAB_14deb3940:
  local_e8 = param_1->SamplingTime;
  iVar2 = (param_1->SamplingRate).Denominator;
  acl::decompression_context<UEDefaultDBDecompressionSettings>::seek
            ((decompression_context<UEDefaultDBDecompressionSettings> *)&local_a8,
             ((float)((longlong)iVar2 * (longlong)local_e8.FrameNumber.Value.Value) +
             local_e8.SubFrame * (float)iVar2) / (float)(param_1->SamplingRate).Numerator,
             (uint)(param_1->Interpolation == Step));
  if ((local_a8.tracks[1].m_padding[1] & 2) == 0) {
    local_c8.RefPoses = (TTransform<double> *)0x0;
    local_c8.TrackToBoneMapping = (FTrackToSkeletonMap *)0x0;
    local_c8.Atom = (FACLTransform *)param_3;
    acl::acl_impl::decompress_track_v0<UEDefaultDBDecompressionSettings,UEOutputTrackWriter<0>_>
              (&local_a8,param_2,&local_c8);
  }
  else {
    if (((param_1->RefPoses).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DecompContext.GetRefLocalPoses().Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                           ,0x172,
                           L"Reference pose must be provided in the FAnimSequenceDecompressionContext constructor to use bind pose stripping"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((param_1->TrackToSkeletonMap).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DecompContext.GetTrackToSkeletonMap().Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                           ,0x173,
                           L"TrackToSkeletonMap must be provided in the FAnimSequenceDecompressionContext constructor to use bind pose stripping"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_e0.RefPoses = (param_1->RefPoses).DataPtr;
    local_e0.TrackToBoneMapping = (param_1->TrackToSkeletonMap).DataPtr;
    if (local_a8.tracks != (compressed_tracks *)0x0) {
      local_e0.Atom = (FACLTransform *)param_3;
      acl::acl_impl::decompress_track_v0<UEDefaultDBDecompressionSettings,UEOutputTrackWriter<1>_>
                (&local_a8,param_2,&local_e0);
    }
  }
  return;
}

// DecompressPose @ 14deb4c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimBoneCompressionCodec_ACLDatabase::DecompressPose
          (UAnimBoneCompressionCodec_ACLDatabase *this,FAnimSequenceDecompressionContext *param_1,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_2,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_3,
          TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *param_4,
          TArrayView<UE::Math::TTransform<double>,int> *param_5)

{
  uint uVar1;
  ICompressedAnimData *pIVar2;
  compressed_tracks *pcVar3;
  database_context<UEDefaultDatabaseSettings> *pdVar4;
  compressed_database *pcVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  TArrayView<UE::Math::TTransform<double>,int> *pTVar8;
  int iVar9;
  bool bVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  ulong64 uVar13;
  FAtomIndices *_Dst;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *pTVar22;
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
  pIVar2 = param_1->CompressedAnimData;
  local_120 = param_5;
  local_138 = param_3;
  local_110 = param_1;
  acl::decompression_context<UEDefaultDBDecompressionSettings>::
  decompression_context<UEDefaultDBDecompressionSettings>
            ((decompression_context<UEDefaultDBDecompressionSettings> *)&local_b8);
  if ((int)pIVar2[2]._padding_ == 0) {
    return;
  }
  pcVar3 = *(compressed_tracks **)&pIVar2[1].CompressedNumberOfKeys;
  if (((((pcVar3 == (compressed_tracks *)0x0) || (((ulonglong)pcVar3 & 0xf) != 0)) ||
       (pcVar3->m_padding[0] != 0xac11ac11)) ||
      ((*(char *)((longlong)pcVar3->m_padding + 6) != '\0' ||
       (3 < (ushort)((short)pcVar3->m_padding[1] - 7U))))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompressedClipData != nullptr && CompressedClipData->is_valid(false).empty()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimBoneCompressionCodec_ACLDatabase.cpp"
                          ,0x129,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pdVar4 = *(database_context<UEDefaultDatabaseSettings> **)&pIVar2[2].CompressedNumberOfKeys;
  puVar11 = (uint *)0x0;
  if ((((pdVar4 != (database_context<UEDefaultDatabaseSettings> *)0x0) &&
       (((ulonglong)pcVar3 & 0xf) == 0)) &&
      ((pcVar3->m_padding[0] == 0xac11ac11 &&
       (((*(char *)((longlong)pcVar3->m_padding + 6) == '\0' &&
         ((ushort)((short)pcVar3->m_padding[1] - 7U) < 4)) &&
        (pcVar5 = (pdVar4->m_context).db, pcVar5 != (compressed_database *)0x0)))))) &&
     (((short)pcVar3->m_padding[1] == 10 && ((pcVar3[1].m_padding[1] & 0x100) != 0)))) {
    uVar1 = pcVar3[4].m_buffer_header.size;
    if (uVar1 != 0xffffffff) {
      puVar11 = (uint *)((longlong)pcVar3[2].m_padding + ((ulonglong)uVar1 - 8));
    }
    uVar1 = *puVar11;
    if (((uVar1 != 0xffffffff) &&
        (uVar1 <= (pcVar5[1].m_padding[1] + pcVar5[2].m_buffer_header.size * 2) * 8 - 0x10)) &&
       ((*(uint *)((pdVar4->m_context).clip_segment_headers + uVar1) ==
         (pcVar3->m_buffer_header).hash &&
        (bVar10 = acl::acl_impl::
                  initialize_v0<UEDefaultDBDecompressionSettings,UEDefaultDatabaseSettings>
                            (&local_b8,pcVar3,pdVar4), bVar10)))) goto LAB_14deb4dc0;
  }
  if (2 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  acl::decompression_context<UEDefaultDBDecompressionSettings>::initialize
            ((decompression_context<UEDefaultDBDecompressionSettings> *)&local_b8,pcVar3);
LAB_14deb4dc0:
  local_118 = param_1->SamplingTime;
  iVar16 = (param_1->SamplingRate).Denominator;
  acl::decompression_context<UEDefaultDBDecompressionSettings>::seek
            ((decompression_context<UEDefaultDBDecompressionSettings> *)&local_b8,
             ((float)((longlong)iVar16 * (longlong)local_118.FrameNumber.Value.Value) +
             (float)iVar16 * local_118.SubFrame) / (float)(param_1->SamplingRate).Numerator,
             (uint)(param_1->Interpolation == Step));
  local_128 = local_b8.tracks;
  local_130 = local_b8.tracks[1].m_buffer_header.size;
  uVar17 = (ulonglong)(int)local_130;
  puVar11 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_100 = &local_145;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_108,puVar11);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar17;
  uVar13 = SUB168(ZEXT816(6) * auVar7,0);
  if (SUB168(ZEXT816(6) * auVar7,8) != 0) {
    uVar13 = 0xffffffffffffffff;
  }
  _Dst = FMemStackBase::Alloc((FMemStackBase *)(pFVar12 + 2),uVar13,0x10);
  memset(_Dst,0xff,uVar17 * 6);
  local_144 = param_2->ArrayNum;
  uVar17 = (ulonglong)(int)local_144;
  iVar19 = -1;
  pFVar21 = (param_2->AllocatorInstance).Data;
  iVar16 = param_5->ArrayNum;
  iVar18 = 0x7fffffff;
  local_140 = pFVar21 + uVar17 * 8;
  iVar20 = -1;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar17) {
      local_148 = 0;
      `TCheckedPointerIterator<BoneTrackPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_148);
    }
    if (pFVar21 == local_140) break;
    _Dst[*(int *)(pFVar21 + 4)].Rotation = *(ushort *)pFVar21;
    iVar14 = *(int *)pFVar21;
    iVar15 = iVar14;
    if (iVar16 < iVar14) {
      iVar15 = iVar16;
    }
    iVar16 = iVar15;
    if (iVar14 < iVar20) {
      iVar14 = iVar20;
    }
    iVar20 = *(int *)(pFVar21 + 4);
    iVar15 = iVar20;
    if (iVar18 < iVar20) {
      iVar15 = iVar18;
    }
    iVar18 = iVar15;
    if (iVar20 < iVar19) {
      iVar20 = iVar19;
    }
    iVar19 = iVar20;
    pFVar21 = pFVar21 + 8;
    uVar17 = (ulonglong)local_144;
    iVar20 = iVar14;
  }
  pFVar21 = (local_138->AllocatorInstance).Data;
  iVar14 = local_138->ArrayNum;
  local_140 = pFVar21 + (longlong)iVar14 * 8;
  while( true ) {
    if (local_138->ArrayNum != iVar14) {
      local_147 = 0;
      `TCheckedPointerIterator<BoneTrackPair_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_147);
    }
    if (pFVar21 == local_140) break;
    _Dst[*(int *)(pFVar21 + 4)].Translation = *(ushort *)pFVar21;
    iVar15 = *(int *)pFVar21;
    iVar9 = iVar15;
    if (iVar16 < iVar15) {
      iVar9 = iVar16;
    }
    iVar16 = iVar9;
    if (iVar15 < iVar20) {
      iVar15 = iVar20;
    }
    iVar20 = *(int *)(pFVar21 + 4);
    iVar9 = iVar20;
    if (iVar18 < iVar20) {
      iVar9 = iVar18;
    }
    iVar18 = iVar9;
    if (iVar20 < iVar19) {
      iVar20 = iVar19;
    }
    iVar19 = iVar20;
    pFVar21 = pFVar21 + 8;
    iVar20 = iVar15;
  }
  if ((local_128[1].m_padding[1] & 1) != 0) {
    local_144 = param_4->ArrayNum;
    uVar17 = (ulonglong)(int)local_144;
    pTVar22 = (TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *)(param_4->AllocatorInstance).Data
    ;
    local_138 = (TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *)
                (&pTVar22->AllocatorInstance + uVar17);
    while( true ) {
      if (param_4->ArrayNum != (int)uVar17) {
        local_146 = 0;
        `TCheckedPointerIterator<BoneTrackPair_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_146);
      }
      if (pTVar22 == local_138) break;
      _Dst[*(int *)((longlong)&(pTVar22->AllocatorInstance).Data + 4)].Scale =
           *(ushort *)&(pTVar22->AllocatorInstance).Data;
      iVar14 = *(int *)&(pTVar22->AllocatorInstance).Data;
      iVar15 = iVar14;
      if (iVar16 < iVar14) {
        iVar15 = iVar16;
      }
      iVar16 = iVar15;
      if (iVar14 < iVar20) {
        iVar14 = iVar20;
      }
      iVar20 = *(int *)((longlong)&(pTVar22->AllocatorInstance).Data + 4);
      iVar15 = iVar20;
      if (iVar18 < iVar20) {
        iVar15 = iVar18;
      }
      iVar18 = iVar15;
      if (iVar20 < iVar19) {
        iVar20 = iVar19;
      }
      iVar19 = iVar20;
      pTVar22 = (TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> *)&pTVar22->ArrayNum;
      uVar17 = (ulonglong)local_144;
      iVar20 = iVar14;
    }
  }
  pTVar8 = local_120;
  pcVar3 = local_128;
  if (((iVar16 < 0) || (local_120->ArrayNum <= iVar16)) &&
     (local_158 = iVar16,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutAtoms.IsValidIndex(MinAtomIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                         ,0x1cf,L"Invalid atom index: %d"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((iVar20 < 0) || (pTVar8->ArrayNum <= iVar20)) &&
     (local_158 = iVar20,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutAtoms.IsValidIndex(MaxAtomIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                         ,0x1d0,L"Invalid atom index: %d"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar18 < 0) &&
     (local_158 = iVar18,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("MinTrackIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                         ,0x1d1,L"Invalid track index: %d"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((int)local_130 <= iVar19) &&
     (local_158 = iVar19,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxTrackIndex < ACLBoneCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\ACLDecompressionImpl.h"
                         ,0x1d2,L"Invalid track index: %d"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pcVar3[1].m_padding[1] & 2) == 0) {
    local_d8.Atoms = (FACLTransform *)pTVar8->DataPtr;
    local_d8.RefPoses = (TTransform<double> *)0x0;
    local_d8.TrackToBoneMapping = (FTrackToSkeletonMap *)0x0;
    if (local_b8.tracks != (compressed_tracks *)0x0) {
      local_d8.TrackToAtomsMap = _Dst;
      acl::acl_impl::decompress_tracks_v0<UEDefaultDBDecompressionSettings,FUEOutputWriter<0>_>
                (&local_b8,&local_d8);
    }
  }
  else {
    local_f8.RefPoses = (local_110->RefPoses).DataPtr;
    local_f8.TrackToBoneMapping = (local_110->TrackToSkeletonMap).DataPtr;
    local_f8.Atoms = (FACLTransform *)pTVar8->DataPtr;
    if (local_b8.tracks != (compressed_tracks *)0x0) {
      local_f8.TrackToAtomsMap = _Dst;
      acl::acl_impl::decompress_tracks_v0<UEDefaultDBDecompressionSettings,FUEOutputWriter<1>_>
                (&local_b8,&local_f8);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14deb5ab0

UClass * __cdecl UAnimBoneCompressionCodec_ACLDatabase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimBoneCompressionCodec_ACLDatabase",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec_ACLDatabase,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBoneCompressionCodec_ACLDatabase>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec_ACLDatabase>,local_res8,
               UAnimBoneCompressionCodec_ACLBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLDatabase.InnerSingleton;
}

// StaticRegisterNativesUAnimBoneCompressionCodec_ACLDatabase @ 14deb8660

void __cdecl
UAnimBoneCompressionCodec_ACLDatabase::StaticRegisterNativesUAnimBoneCompressionCodec_ACLDatabase
          (void)

{
  return;
}

