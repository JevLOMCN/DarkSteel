// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1474219b0

UClass * __cdecl UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_CompressedRichCurve",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.
                InnerSingleton,StaticRegisterNativesUAnimCurveCompressionCodec_CompressedRichCurve,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_CompressedRichCurve>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_CompressedRichCurve>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.InnerSingleton;
}

// UAnimCurveCompressionCodec_CompressedRichCurve @ 147434e60

UAnimCurveCompressionCodec_CompressedRichCurve * __thiscall
UAnimCurveCompressionCodec_CompressedRichCurve::UAnimCurveCompressionCodec_CompressedRichCurve
          (UAnimCurveCompressionCodec_CompressedRichCurve *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_CompressedRichCurve__6B_;
  return this;
}

// UAnimCurveCompressionCodec_CompressedRichCurve @ 147434e90

UAnimCurveCompressionCodec_CompressedRichCurve * __thiscall
UAnimCurveCompressionCodec_CompressedRichCurve::UAnimCurveCompressionCodec_CompressedRichCurve
          (UAnimCurveCompressionCodec_CompressedRichCurve *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_CompressedRichCurve__6B_;
  return this;
}

// ~UAnimCurveCompressionCodec_CompressedRichCurve @ 147436a80

void __thiscall
UAnimCurveCompressionCodec_CompressedRichCurve::~UAnimCurveCompressionCodec_CompressedRichCurve
          (UAnimCurveCompressionCodec_CompressedRichCurve *this)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14743a820

FName __thiscall
`UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::<lambda_1>::operator()
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

// operator() @ 14743bb00

float __thiscall
`UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  plVar2 = *(longlong **)this;
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  lVar8 = (longlong)*(int *)(*plVar2 + 8 + (longlong)param_1 * 0xc);
  iVar1 = *(int *)(lVar3 + 8 + lVar8 * 0xc);
  lVar4 = *(longlong *)((longlong)this + 8);
  **(uint **)((longlong)this + 0x10) = (uint)*(byte *)(lVar3 + lVar8 * 0xc);
  *(uint *)(*(longlong *)((longlong)this + 0x10) + 4) = (uint)*(byte *)(lVar3 + 1 + lVar8 * 0xc);
  *(uint *)(*(longlong *)((longlong)this + 0x10) + 8) = (uint)*(byte *)(lVar3 + 2 + lVar8 * 0xc);
  *(uint *)(*(longlong *)((longlong)this + 0x10) + 0xc) = (uint)*(byte *)(lVar3 + 3 + lVar8 * 0xc);
  *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x10) =
       *(undefined4 *)(lVar3 + 4 + lVar8 * 0xc);
  *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x18) = iVar1 + lVar4;
  fVar9 = FCompressedRichCurve::StaticEval(*(FStaticEvalArgs **)((longlong)this + 0x10));
  return fVar9;
}

// DecompressCurve @ 147445740

float __thiscall
UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurve
          (UAnimCurveCompressionCodec_CompressedRichCurve *this,FCompressedAnimSequence *param_1,
          FName param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  FStaticEvalArgs local_58;
  
  lVar8 = (longlong)(param_1->IndexedCurveNames).ArrayNum;
  uVar7 = 0;
  pFVar1 = (param_1->CompressedCurveByteStream).AllocatorInstance.Data;
  if (0 < lVar8) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (param_1->IndexedCurveNames).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      if (*(FName *)((param_1->IndexedCurveNames).AllocatorInstance.Data + lVar6) == param_2) {
        lVar8 = (longlong)(int)uVar7;
        local_58.DefaultValue = 0.0;
        local_58.CompressionFormat = (ERichCurveCompressionFormat)(byte)pFVar1[lVar8 * 0xc];
        local_58.KeyTimeCompressionFormat =
             (ERichCurveKeyTimeCompressionFormat)(byte)pFVar1[lVar8 * 0xc + 1];
        local_58.PreInfinityExtrap = (ERichCurveExtrapolation)(byte)pFVar1[lVar8 * 0xc + 2];
        local_58.PostInfinityExtrap = (ERichCurveExtrapolation)(byte)pFVar1[lVar8 * 0xc + 3];
        local_58.ConstantValueNumKeys = *(TConstantValueNumKeys *)(pFVar1 + lVar8 * 0xc + 4);
        local_58.CompressedKeys = (uchar *)(pFVar1 + *(int *)(pFVar1 + lVar8 * 0xc + 8));
        local_58.Time = param_3;
        fVar9 = FCompressedRichCurve::StaticEval(&local_58);
        return fVar9;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar5 < lVar8);
  }
  return 0.0;
}

// DecompressCurves @ 147445c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves
          (UAnimCurveCompressionCodec_CompressedRichCurve *this,FCompressedAnimSequence *param_1,
          FBlendedCurve *param_2,float param_3)

{
  int iVar1;
  FCurveFilter *pFVar2;
  <lambda_2> local_58;
  FStaticEvalArgs local_38;
  
  local_38._8_8_ = _UNK_1516ceb78;
  local_38._0_8_ = ___xmm_00000005000000050000000100000000;
  local_58.IndexedCurveNames = &param_1->IndexedCurveNames;
  iVar1 = (param_1->IndexedCurveNames).ArrayNum;
  if (iVar1 != 0) {
    local_58.Buffer = (uchar *)(param_1->CompressedCurveByteStream).AllocatorInstance.Data;
    local_38.ConstantValueNumKeys.ConstantValue = 0.0;
    local_38.CompressedKeys = (uchar *)0x0;
    local_38.DefaultValue = 0.0;
    pFVar2 = *(FCurveFilter **)&param_2->field_0x18;
    param_2->field_0x10 = 1;
    local_38.Time = param_3;
    if (((pFVar2 != (FCurveFilter *)0x0) && (pFVar2->FilterMode != None)) &&
       ((pFVar2->FilterMode != DisallowFiltered || ((int)pFVar2->_padding_ != 0)))) {
      local_58.Args = &local_38;
      UE::Anim::FCurveUtils::
      BuildSortedFiltered<_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar1,
                 (<lambda_1>)local_58.IndexedCurveNames,&local_58,pFVar2);
      return;
    }
    local_58.Args = &local_38;
    UE::Anim::FCurveUtils::
    BuildLinearUnfiltered<_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_CompressedRichCurve::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar1,
               (<lambda_1>)local_58.IndexedCurveNames,&local_58);
  }
  return;
}

// GetPrivateStaticClass @ 1474621d0

UClass * __cdecl UAnimCurveCompressionCodec_CompressedRichCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_CompressedRichCurve",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.
                InnerSingleton,StaticRegisterNativesUAnimCurveCompressionCodec_CompressedRichCurve,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_CompressedRichCurve>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_CompressedRichCurve>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.InnerSingleton;
}

// StaticRegisterNativesUAnimCurveCompressionCodec_CompressedRichCurve @ 14747b2c0

void __cdecl
UAnimCurveCompressionCodec_CompressedRichCurve::
StaticRegisterNativesUAnimCurveCompressionCodec_CompressedRichCurve(void)

{
  return;
}

