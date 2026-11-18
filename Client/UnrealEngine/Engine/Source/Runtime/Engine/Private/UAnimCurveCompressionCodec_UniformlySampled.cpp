// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 14741e320

UClass * __cdecl UAnimCurveCompressionCodec_UniformlySampled::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_UniformlySampled",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.
                InnerSingleton,StaticRegisterNativesUAnimCurveCompressionCodec_UniformlySampled,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_UniformlySampled>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformlySampled>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.InnerSingleton;
}

// UAnimCurveCompressionCodec_UniformlySampled @ 147434f20

UAnimCurveCompressionCodec_UniformlySampled * __thiscall
UAnimCurveCompressionCodec_UniformlySampled::UAnimCurveCompressionCodec_UniformlySampled
          (UAnimCurveCompressionCodec_UniformlySampled *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_UniformlySampled__6B_;
  return this;
}

// UAnimCurveCompressionCodec_UniformlySampled @ 147434f50

UAnimCurveCompressionCodec_UniformlySampled * __thiscall
UAnimCurveCompressionCodec_UniformlySampled::UAnimCurveCompressionCodec_UniformlySampled
          (UAnimCurveCompressionCodec_UniformlySampled *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec_UniformlySampled__6B_;
  return this;
}

// ~UAnimCurveCompressionCodec_UniformlySampled @ 147436ac0

void __thiscall
UAnimCurveCompressionCodec_UniformlySampled::~UAnimCurveCompressionCodec_UniformlySampled
          (UAnimCurveCompressionCodec_UniformlySampled *this)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14743aa00

FName __thiscall
`UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::<lambda_1>::operator()
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

// operator() @ 14743bcb0

float __thiscall
`UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  iVar4 = *(int *)(*plVar1 + 8 + (longlong)param_1 * 0xc);
  uVar6 = iVar4 >> 0x1f & 0x1f;
  iVar4 = iVar4 + uVar6;
  uVar6 = 1 << (((byte)iVar4 & 0x1f) - (char)uVar6 & 0x1f) &
          *(uint *)(*(longlong *)((longlong)this + 8) + (longlong)(iVar4 >> 5) * 4);
  if (uVar6 == 0) {
    fVar7 = *(float *)(*(longlong *)((longlong)this + 0x28) +
                      (longlong)**(int **)((longlong)this + 0x18) * 4);
    fVar7 = (*(float *)(*(longlong *)((longlong)this + 0x30) +
                       (longlong)**(int **)((longlong)this + 0x18) * 4) - fVar7) *
            *(float *)((longlong)this + 0x38) + fVar7;
  }
  else {
    fVar7 = *(float *)(*(longlong *)((longlong)this + 0x20) +
                      (longlong)**(int **)((longlong)this + 0x10) * 4);
  }
  lVar5 = 0x10;
  if (uVar6 == 0) {
    lVar5 = 0x18;
  }
  **(int **)(lVar5 + (longlong)this) = **(int **)(lVar5 + (longlong)this) + 1;
  return fVar7;
}

// DecompressCurve @ 1474459f0

float __thiscall
UAnimCurveCompressionCodec_UniformlySampled::DecompressCurve
          (UAnimCurveCompressionCodec_UniformlySampled *this,FCompressedAnimSequence *param_1,
          FName param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  int local_res10 [2];
  int local_68;
  int local_64;
  int local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  
  iVar8 = (param_1->IndexedCurveNames).ArrayNum;
  if (iVar8 != 0) {
    pFVar1 = (param_1->CompressedCurveByteStream).AllocatorInstance.Data;
    uVar11 = 0;
    local_res10[0] = 0;
    local_68 = 0;
    fVar12 = *(float *)(pFVar1 + 8);
    local_64 = *(int *)(pFVar1 + 4);
    iVar4 = ((int)(iVar8 + 0x1f + (iVar8 + 0x1f >> 0x1f & 0x1fU)) >> 5) * 4;
    local_58 = pFVar1 + iVar4;
    local_50 = pFVar1 + (longlong)(iVar4 + *(int *)pFVar1 * 4) + 0xc;
    local_60 = iVar8 - *(int *)pFVar1;
    if (0 < iVar8) {
      lVar10 = 0;
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (param_1->IndexedCurveNames).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar12 = (float)(*pcVar2)();
          return fVar12;
        }
        bVar6 = (byte)uVar11 & 0x1f;
        uVar7 = uVar11;
        if ((int)uVar11 < 0) {
          uVar7 = uVar11 + 0x1f;
          bVar6 = bVar6 - 0x20;
        }
        uVar7 = *(uint *)(pFVar1 + ((longlong)((int)uVar7 >> 5) + 3) * 4) & 1 << (bVar6 & 0x1f);
        if (*(FName *)((param_1->IndexedCurveNames).AllocatorInstance.Data + lVar9) == param_2) {
          if (uVar7 != 0) {
            return *(float *)(local_58 + (longlong)local_res10[0] * 4 + 0xc);
          }
          local_64 = local_64 + -1;
          fVar12 = fVar12 * param_3;
          iVar4 = (int)ROUND((fVar12 + fVar12) - __real_3f000000) >> 1;
          iVar8 = local_64;
          if (iVar4 < local_64) {
            iVar8 = iVar4;
          }
          iVar4 = 0;
          if (0 < iVar8) {
            iVar4 = iVar8;
          }
          if (iVar4 + 1 < local_64) {
            local_64 = iVar4 + 1;
          }
          return (*(float *)(local_50 + (longlong)(int)(uVar11 + local_64 * local_60) * 4) -
                 *(float *)(local_50 + (longlong)(int)(iVar4 * local_60 + uVar11) * 4)) *
                 (fVar12 - (float)iVar4) +
                 *(float *)(local_50 + (longlong)(int)(iVar4 * local_60 + uVar11) * 4);
        }
        piVar5 = local_res10;
        if (uVar7 == 0) {
          piVar5 = &local_68;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0xc;
        *piVar5 = *piVar5 + 1;
      } while (lVar10 < iVar8);
    }
  }
  return 0.0;
}

// DecompressCurves @ 147445e30

void __thiscall
UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves
          (UAnimCurveCompressionCodec_UniformlySampled *this,FCompressedAnimSequence *param_1,
          FBlendedCurve *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FCurveFilter *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_res10 [2];
  int local_a8 [4];
  TArray<FAnimCompressedCurveIndexedName,TSizedDefaultAllocator<32>_> *local_98;
  FScriptContainerElement *pFStack_90;
  int *local_88;
  int *piStack_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *pFStack_70;
  FScriptContainerElement *local_68;
  float fStack_60;
  undefined4 uStack_5c;
  <lambda_2> local_58;
  
  iVar2 = (param_1->IndexedCurveNames).ArrayNum;
  local_98 = &param_1->IndexedCurveNames;
  if (iVar2 != 0) {
    local_68 = (param_1->CompressedCurveByteStream).AllocatorInstance.Data;
    iVar3 = *(int *)local_68;
    iVar8 = iVar2 - iVar3;
    iVar7 = *(int *)(local_68 + 4);
    if (iVar7 != 0) {
      fStack_60 = param_3 * *(float *)(local_68 + 8);
      param_2->field_0x10 = 1;
      iVar1 = ((int)(iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU)) >> 5) * 4 + 0xc;
      iVar3 = iVar1 + iVar3 * 4;
      iVar7 = iVar7 + -1;
      iVar6 = (int)ROUND((fStack_60 + fStack_60) - __real_3f000000) >> 1;
      iVar5 = iVar7;
      if (iVar6 < iVar7) {
        iVar5 = iVar6;
      }
      local_res10[0] = 0;
      local_a8[0] = 0;
      pFStack_90 = local_68 + 0xc;
      iVar6 = 0;
      if (0 < iVar5) {
        iVar6 = iVar5;
      }
      local_88 = local_res10;
      piStack_80 = local_a8;
      local_78 = local_68 + iVar1;
      if (iVar6 + 1 < iVar7) {
        iVar7 = iVar6 + 1;
      }
      fStack_60 = fStack_60 - (float)iVar6;
      pFStack_70 = local_68 + (longlong)(iVar6 * iVar8) * 4 + (longlong)iVar3;
      local_68 = local_68 + (longlong)(iVar7 * iVar8) * 4 + (longlong)iVar3;
      pFVar4 = *(FCurveFilter **)&param_2->field_0x18;
      local_58.IndexedCurveNames = local_98;
      local_58.ConstantCurvesBitsetPtr = (uint *)pFStack_90;
      local_58.ConstantCurveIndex = local_88;
      local_58.AnimatedCurveIndex = piStack_80;
      local_58.ConstantSamplesPtr = (float *)local_78;
      local_58.AnimatedSamples0 = (float *)pFStack_70;
      local_58.AnimatedSamples1 = (float *)local_68;
      if (((pFVar4 == (FCurveFilter *)0x0) || (pFVar4->FilterMode == None)) ||
         ((pFVar4->FilterMode == DisallowFiltered && ((int)pFVar4->_padding_ == 0)))) {
        local_58._60_4_ = uStack_5c;
        local_58.InterpolationAlpha = fStack_60;
        UE::Anim::FCurveUtils::
        BuildLinearUnfiltered<_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                  ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar2
                   ,(<lambda_1>)local_98,&local_58);
      }
      else {
        local_58._60_4_ = uStack_5c;
        local_58.InterpolationAlpha = fStack_60;
        UE::Anim::FCurveUtils::
        BuildSortedFiltered<_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_1>,_UAnimCurveCompressionCodec_UniformlySampled::DecompressCurves_::__l2::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                  ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,iVar2
                   ,(<lambda_1>)local_98,&local_58,pFVar4);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 147462350

UClass * __cdecl UAnimCurveCompressionCodec_UniformlySampled::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec_UniformlySampled",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.
                InnerSingleton,StaticRegisterNativesUAnimCurveCompressionCodec_UniformlySampled,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCurveCompressionCodec_UniformlySampled>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec_UniformlySampled>,
               local_res8,UAnimCurveCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.InnerSingleton;
}

// StaticRegisterNativesUAnimCurveCompressionCodec_UniformlySampled @ 14747b2e0

void __cdecl
UAnimCurveCompressionCodec_UniformlySampled::
StaticRegisterNativesUAnimCurveCompressionCodec_UniformlySampled(void)

{
  return;
}

