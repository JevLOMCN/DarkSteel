// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 11

// StaticClass @ 14de8e830

UClass * __cdecl UAnimCurveCompressionCodec_ACL::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimCurveCompressionCodec_ACL",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.InnerSingleton,
               StaticRegisterNativesUAnimCurveCompressionCodec_ACL,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCurveCompressionCodec_ACL>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_ACL>,local_res8,
               UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.InnerSingleton;
}

// UAnimCurveCompressionCodec_ACL @ 14deb1a90

UAnimCurveCompressionCodec_ACL * __thiscall
UAnimCurveCompressionCodec_ACL::UAnimCurveCompressionCodec_ACL
          (UAnimCurveCompressionCodec_ACL *this,FVTableHelper *param_1)

{
  UAnimCurveCompressionCodec::UAnimCurveCompressionCodec((UAnimCurveCompressionCodec *)this,param_1)
  ;
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_ACL__6B_;
  return this;
}

// UAnimCurveCompressionCodec_ACL @ 14deb1ac0

UAnimCurveCompressionCodec_ACL * __thiscall
UAnimCurveCompressionCodec_ACL::UAnimCurveCompressionCodec_ACL
          (UAnimCurveCompressionCodec_ACL *this,FObjectInitializer *param_1)

{
  UAnimCurveCompressionCodec::UAnimCurveCompressionCodec((UAnimCurveCompressionCodec *)this,param_1)
  ;
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_ACL__6B_;
  return this;
}

// ~UAnimCurveCompressionCodec_ACL @ 14deb1df0

void __thiscall
UAnimCurveCompressionCodec_ACL::~UAnimCurveCompressionCodec_ACL
          (UAnimCurveCompressionCodec_ACL *this)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_ACL__6B_;
  UAnimCurveCompressionCodec::~UAnimCurveCompressionCodec((UAnimCurveCompressionCodec *)this);
  return;
}

// operator() @ 14deb1f60

FName __thiscall
`UAnimCurveCompressionCodec_ACL::DecompressCurves'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  uint uVar5;
  uint in_register_00000014;
  uint uVar6;
  uint in_R8D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if ((int)in_R8D < (int)plVar1[1]) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  uVar5 = *(uint *)(*plVar1 + 8 + (longlong)(int)in_R8D * 0xc);
  uVar6 = 0;
  if ((int)uVar5 < (int)plVar1[1]) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 = *(undefined8 *)(*plVar1 + (longlong)(int)uVar5 * 0xc);
  return FVar4;
}

// operator() @ 14deb2100

float __thiscall
`UAnimCurveCompressionCodec_ACL::DecompressCurves'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  plVar2 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
  }
  uVar5 = *(uint *)(*plVar1 + 8 + (longlong)param_1 * 0xc);
  uVar6 = 0;
  if ((int)uVar5 < (int)plVar2[1]) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar7 = (float)(*pcVar3)();
      return fVar7;
    }
  }
  return *(float *)(*plVar2 + (longlong)(int)uVar5 * 4);
}

// DecompressCurve @ 14deb3c70

float __thiscall
UAnimCurveCompressionCodec_ACL::DecompressCurve
          (UAnimCurveCompressionCodec_ACL *this,FCompressedAnimSequence *param_1,FName param_2,
          float param_3)

{
  int iVar1;
  compressed_tracks *pcVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  UEScalarCurveWriter local_res10 [2];
  decompression_context<UECurveDecompressionSettings> local_68;
  
  iVar1 = (param_1->IndexedCurveNames).ArrayNum;
  if (iVar1 == 0) {
    return 0.0;
  }
  pcVar2 = (compressed_tracks *)(param_1->CompressedCurveByteStream).AllocatorInstance.Data;
  if (((((pcVar2 == (compressed_tracks *)0x0) || (((ulonglong)pcVar2 & 0xf) != 0)) ||
       (pcVar2->m_padding[0] != 0xac11ac11)) ||
      ((*(undefined1 *)((longlong)pcVar2->m_padding + 6) != '\0' ||
       (3 < (ushort)((short)pcVar2->m_padding[1] - 7U))))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedTracks != nullptr && CompressedTracks->is_valid(false).empty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimCurveCompressionCodec_ACL.cpp"
                         ,0x1a2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar9 = (float)(*pcVar3)();
    return fVar9;
  }
  acl::decompression_context<UECurveDecompressionSettings>::
  decompression_context<UECurveDecompressionSettings>(&local_68);
  acl::decompression_context<UECurveDecompressionSettings>::initialize(&local_68,pcVar2);
  acl::decompression_context<UECurveDecompressionSettings>::seek(&local_68,param_3,none);
  uVar8 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (param_1->IndexedCurveNames).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar9 = (float)(*pcVar3)();
        return fVar9;
      }
      if (*(FName *)((param_1->IndexedCurveNames).AllocatorInstance.Data + lVar7) == param_2) {
        if ((int)uVar8 < 0) {
          return 0.0;
        }
        local_res10[0].SampleValue = 0.0;
        acl::decompression_context<UECurveDecompressionSettings>::
        decompress_track<UEScalarCurveWriter>(&local_68,uVar8,local_res10);
        return local_res10[0].SampleValue;
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar6 < iVar1);
  }
  return 0.0;
}

// DecompressCurves @ 14deb3e20

void __thiscall
UAnimCurveCompressionCodec_ACL::DecompressCurves
          (UAnimCurveCompressionCodec_ACL *this,FCompressedAnimSequence *param_1,
          FBlendedCurve *param_2,float param_3)

{
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  compressed_tracks *this_00;
  FCurveFilter *pFVar3;
  code *pcVar4;
  bool bVar5;
  error_result eVar6;
  UECurveWriter local_res10;
  undefined1 local_98 [8];
  TArray<float,TMemStackAllocator<0>_> local_90;
  <lambda_2> local_78;
  <lambda_2> local_68;
  decompression_context<UECurveDecompressionSettings> local_58;
  
  uVar2 = (param_1->IndexedCurveNames).ArrayNum;
  pTVar1 = &param_1->IndexedCurveNames;
  if (uVar2 != 0) {
    this_00 = (compressed_tracks *)(param_1->CompressedCurveByteStream).AllocatorInstance.Data;
    if (((this_00 == (compressed_tracks *)0x0) ||
        (eVar6 = acl::compressed_tracks::is_valid(this_00,SUB81(local_98,0)),
        *(longlong *)eVar6.m_error != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedTracks != nullptr && CompressedTracks->is_valid(false).empty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimCurveCompressionCodec_ACL.cpp"
                           ,0x16f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    acl::decompression_context<UECurveDecompressionSettings>::
    decompression_context<UECurveDecompressionSettings>(&local_58);
    acl::decompression_context<UECurveDecompressionSettings>::initialize(&local_58,this_00);
    acl::decompression_context<UECurveDecompressionSettings>::seek(&local_58,param_3,none);
    local_90.AllocatorInstance.Data = (float *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<float>_>
                (4,4,uVar2,&local_90.AllocatorInstance,&local_90.ArrayNum,&local_90.ArrayMax);
    }
    local_res10.Buffer = &local_90;
    acl::decompression_context<UECurveDecompressionSettings>::decompress_tracks<UECurveWriter>
              (&local_58,&local_res10);
    pFVar3 = *(FCurveFilter **)&param_2->field_0x18;
    param_2->field_0x10 = 1;
    if (((pFVar3 == (FCurveFilter *)0x0) || (pFVar3->FilterMode == None)) ||
       ((pFVar3->FilterMode == DisallowFiltered && ((int)pFVar3->_padding_ == 0)))) {
      local_68.DecompressionBuffer = &local_90;
      local_68.IndexedCurveNames = pTVar1;
      UE::Anim::FCurveUtils::
      BuildLinearUnfiltered<_UAnimCurveCompressionCodec_ACL::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_ACL::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,uVar2,
                 (<lambda_1>)pTVar1,&local_68);
    }
    else {
      local_78.DecompressionBuffer = &local_90;
      local_78.IndexedCurveNames = pTVar1;
      UE::Anim::FCurveUtils::
      BuildSortedFiltered<_UAnimCurveCompressionCodec_ACL::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_ACL::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,uVar2,
                 (<lambda_1>)pTVar1,&local_78,pFVar3);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14deb5c30

UClass * __cdecl UAnimCurveCompressionCodec_ACL::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimCurveCompressionCodec_ACL",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.InnerSingleton,
               StaticRegisterNativesUAnimCurveCompressionCodec_ACL,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCurveCompressionCodec_ACL>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_ACL>,local_res8,
               UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_ACL.InnerSingleton;
}

// StaticRegisterNativesUAnimCurveCompressionCodec_ACL @ 14deb8680

void __cdecl
UAnimCurveCompressionCodec_ACL::StaticRegisterNativesUAnimCurveCompressionCodec_ACL(void)

{
  return;
}

// ValidateCompressedData @ 14deb91b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAnimCurveCompressionCodec_ACL::ValidateCompressedData
          (UAnimCurveCompressionCodec_ACL *this,UObject *param_1,FCompressedAnimSequence *param_2)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  FString local_28;
  FString local_18;
  
  bVar5 = false;
  bVar7 = false;
  if ((param_2->IndexedCurveNames).ArrayNum == 0) {
    return true;
  }
  pFVar3 = (param_2->CompressedCurveByteStream).AllocatorInstance.Data;
  if ((((pFVar3 == (FScriptContainerElement *)0x0) || (((ulonglong)pFVar3 & 0xf) != 0)) ||
      (*(uint *)(pFVar3 + 8) != 0xac11ac11)) ||
     ((pFVar3[0xe] != (FScriptContainerElement)0x0 || (3 < (ushort)(*(short *)(pFVar3 + 0xc) - 7U)))
     )) {
    if (1 < (byte)LogAnimationCompression._0_1_) {
      if (param_1 != (UObject *)0x0) {
        pFVar9 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
        if ((pFVar9->Data).ArrayNum == 0) {
          bVar5 = true;
        }
        else {
          bVar5 = true;
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      if (bVar5) {
LAB_14deb9359:
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_14deb9363:
    bVar7 = false;
  }
  else {
    uVar1 = *(uint *)pFVar3;
    uVar2 = (param_2->CompressedCurveByteStream).ArrayNum;
    if ((ulonglong)uVar1 + 4 <= (ulonglong)uVar2) {
      uVar8 = 0;
      if ((int)uVar1 < (int)uVar2) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)((param_2->CompressedCurveByteStream).AllocatorInstance.Data + (int)uVar1) ==
          -0x5053233) {
        if (1 < (byte)LogAnimationCompression._0_1_) {
          if (param_1 != (UObject *)0x0) {
            pFVar9 = UObjectBaseUtility::GetPathName
                               ((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
            if ((pFVar9->Data).ArrayNum == 0) {
              bVar7 = true;
            }
            else {
              bVar7 = true;
            }
          }
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          if (bVar7) goto LAB_14deb9359;
        }
        goto LAB_14deb9363;
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

