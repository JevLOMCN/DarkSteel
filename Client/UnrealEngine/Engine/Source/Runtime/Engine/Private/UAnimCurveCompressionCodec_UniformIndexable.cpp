// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147422d60

UClass * __cdecl UAnimCurveCompressionCodec_UniformIndexable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_UniformIndexable",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.
                InnerSingleton,StaticRegisterNativesUAnimCurveCompressionCodec_UniformIndexable,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_UniformIndexable>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformIndexable>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.InnerSingleton;
}

// UAnimCurveCompressionCodec_UniformIndexable @ 147434ec0

UAnimCurveCompressionCodec_UniformIndexable * __thiscall
UAnimCurveCompressionCodec_UniformIndexable::UAnimCurveCompressionCodec_UniformIndexable
          (UAnimCurveCompressionCodec_UniformIndexable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_UniformIndexable__6B_;
  return this;
}

// UAnimCurveCompressionCodec_UniformIndexable @ 147434ef0

UAnimCurveCompressionCodec_UniformIndexable * __thiscall
UAnimCurveCompressionCodec_UniformIndexable::UAnimCurveCompressionCodec_UniformIndexable
          (UAnimCurveCompressionCodec_UniformIndexable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_UniformIndexable__6B_;
  return this;
}

// ~UAnimCurveCompressionCodec_UniformIndexable @ 147436aa0

void __thiscall
UAnimCurveCompressionCodec_UniformIndexable::~UAnimCurveCompressionCodec_UniformIndexable
          (UAnimCurveCompressionCodec_UniformIndexable *this)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14743a910

FName __thiscall
`UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::<lambda_1>::operator()
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

// operator() @ 14743bbf0

float __thiscall
`UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  lVar5 = (longlong)
          (*(int *)(*plVar1 + 8 + (longlong)param_1 * 0xc) * *(int *)((longlong)this + 0x10));
  fVar6 = *(float *)(*(longlong *)((longlong)this + 8) +
                    (*(int *)((longlong)this + 0x14) + lVar5) * 4);
  return (*(float *)(*(longlong *)((longlong)this + 8) +
                    (*(int *)((longlong)this + 0x18) + lVar5) * 4) - fVar6) *
         *(float *)((longlong)this + 0x1c) + fVar6;
}

// DecompressCurve @ 147445870

float __thiscall
UAnimCurveCompressionCodec_UniformIndexable::DecompressCurve
          (UAnimCurveCompressionCodec_UniformIndexable *this,FCompressedAnimSequence *param_1,
          FName param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  
  iVar2 = (param_1->IndexedCurveNames).ArrayNum;
  if (iVar2 != 0) {
    pFVar4 = (param_1->CompressedCurveByteStream).AllocatorInstance.Data;
    iVar3 = *(int *)pFVar4;
    if (iVar3 != 0) {
      fVar13 = param_3 * *(float *)(pFVar4 + 4);
      iVar1 = iVar3 + -1;
      iVar7 = (int)ROUND((fVar13 + fVar13) - __real_3f000000) >> 1;
      iVar9 = iVar1;
      if (iVar7 < iVar1) {
        iVar9 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar9) {
        iVar7 = iVar9;
      }
      if (iVar7 + 1 < iVar1) {
        iVar1 = iVar7 + 1;
      }
      uVar12 = 0;
      if (0 < iVar2) {
        lVar10 = 0;
        lVar11 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar12 < (param_1->IndexedCurveNames).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar13 = (float)(*pcVar5)();
            return fVar13;
          }
          if (*(FName *)((param_1->IndexedCurveNames).AllocatorInstance.Data + lVar11) == param_2) {
            lVar10 = (longlong)(int)(uVar12 * iVar3) + 2;
            return (*(float *)(pFVar4 + (iVar1 + lVar10) * 4) -
                   *(float *)(pFVar4 + (iVar7 + lVar10) * 4)) * (fVar13 - (float)iVar7) +
                   *(float *)(pFVar4 + (iVar7 + lVar10) * 4);
          }
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 0xc;
        } while (lVar10 < iVar2);
      }
    }
  }
  return 0.0;
}

// DecompressCurves @ 147445d10

void __thiscall
UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves
          (UAnimCurveCompressionCodec_UniformIndexable *this,FCompressedAnimSequence *param_1,
          FBlendedCurve *param_2,float param_3)

{
  int iVar1;
  FCurveFilter *pFVar2;
  int iVar3;
  int iVar4;
  <lambda_2> local_28;
  
  local_28.IndexedCurveNames = &param_1->IndexedCurveNames;
  iVar1 = (param_1->IndexedCurveNames).ArrayNum;
  if (iVar1 != 0) {
    local_28.AnimatedSamplesPtr =
         (float *)(param_1->CompressedCurveByteStream).AllocatorInstance.Data;
    local_28.NumSamples = (int)*local_28.AnimatedSamplesPtr;
    if (local_28.NumSamples != 0) {
      local_28.InterpolationAlpha = param_3 * *(float *)((longlong)local_28.AnimatedSamplesPtr + 4);
      local_28.SampleIndex1 = local_28.NumSamples + -1;
      param_2->field_0x10 = 1;
      iVar3 = (int)ROUND((local_28.InterpolationAlpha + local_28.InterpolationAlpha) -
                         __real_3f000000) >> 1;
      iVar4 = local_28.SampleIndex1;
      if (iVar3 < local_28.SampleIndex1) {
        iVar4 = iVar3;
      }
      local_28.SampleIndex0 = 0;
      if (0 < iVar4) {
        local_28.SampleIndex0 = iVar4;
      }
      local_28.AnimatedSamplesPtr = (float *)((longlong)local_28.AnimatedSamplesPtr + 8);
      if (local_28.SampleIndex0 + 1 < local_28.SampleIndex1) {
        local_28.SampleIndex1 = local_28.SampleIndex0 + 1;
      }
      pFVar2 = *(FCurveFilter **)&param_2->field_0x18;
      local_28.InterpolationAlpha = local_28.InterpolationAlpha - (float)local_28.SampleIndex0;
      if (((pFVar2 != (FCurveFilter *)0x0) && (pFVar2->FilterMode != None)) &&
         ((pFVar2->FilterMode != DisallowFiltered || ((int)pFVar2->_padding_ != 0)))) {
        UE::Anim::FCurveUtils::
        BuildSortedFiltered<_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                  ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar1
                   ,(<lambda_1>)local_28.IndexedCurveNames,&local_28,pFVar2);
        return;
      }
      UE::Anim::FCurveUtils::
      BuildLinearUnfiltered<_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformIndexable::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar1,
                 (<lambda_1>)local_28.IndexedCurveNames,&local_28);
    }
  }
  return;
}

// GetCurveBufferAndSamples @ 147454ac0

bool __thiscall
UAnimCurveCompressionCodec_UniformIndexable::GetCurveBufferAndSamples
          (UAnimCurveCompressionCodec_UniformIndexable *this,FCompressedAnimSequence *param_1,
          FName param_2,float **param_3,int *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar1 = (param_1->IndexedCurveNames).ArrayNum;
  if (iVar1 != 0) {
    pFVar3 = (param_1->CompressedCurveByteStream).AllocatorInstance.Data;
    iVar2 = *(int *)pFVar3;
    *param_4 = iVar2;
    if (iVar2 != 0) {
      uVar10 = 0;
      *param_5 = *(float *)(pFVar3 + 4);
      if (0 < iVar1) {
        lVar8 = 0;
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < (param_1->IndexedCurveNames).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(FName *)((param_1->IndexedCurveNames).AllocatorInstance.Data + lVar9) == param_2) {
            *param_3 = (float *)(pFVar3 + ((longlong)(int)(uVar10 * *param_4) + 2) * 4);
            return true;
          }
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0xc;
        } while (lVar8 < iVar1);
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 147462290

UClass * __cdecl UAnimCurveCompressionCodec_UniformIndexable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_UniformIndexable",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.
                InnerSingleton,StaticRegisterNativesUAnimCurveCompressionCodec_UniformIndexable,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_UniformIndexable>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformIndexable>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformIndexable.InnerSingleton;
}

// StaticRegisterNativesUAnimCurveCompressionCodec_UniformIndexable @ 14747b2d0

void __cdecl
UAnimCurveCompressionCodec_UniformIndexable::
StaticRegisterNativesUAnimCurveCompressionCodec_UniformIndexable(void)

{
  return;
}

