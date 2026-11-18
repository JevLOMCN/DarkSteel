// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 2

// LerpToEx @ 14a868000

void __cdecl
UE::BlendStack::FBlendedCurveUtils::LerpToEx
          (FBlendedCurve *param_1,FBlendedCurve *param_2,float param_3)

{
  int iVar1;
  void *_Src;
  float local_res18 [2];
  
  if (__real_3727c5ac < (float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_res18[0] = param_3;
    if ((float)((uint)(param_3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_3727c5ac) {
      if (param_1 != param_2) {
        _Src = *(void **)param_2;
        iVar1 = *(int *)&param_2->field_0x8;
        *(int *)&param_1->field_0x8 = iVar1;
        if ((iVar1 == 0) && (*(int *)&param_1->field_0xc == 0)) {
          *(undefined4 *)&param_1->field_0xc = 0;
        }
        else {
          Core::Private::
          ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,iVar1,*(int *)&param_1->field_0xc,
                     (ForElementType<UE::Anim::FCurveElement> *)param_1,iVar1,
                     (int *)&param_1->field_0xc);
          if (iVar1 != 0) {
            memcpy(*(void **)param_1,_Src,(longlong)iVar1 << 4);
          }
        }
      }
      param_1->field_0x10 = param_2->field_0x10;
      return;
    }
    UnionEx<_UE::BlendStack::FBlendedCurveUtils::LerpToEx_::__l11::<lambda_1>_>
              (param_1,param_2,(<lambda_1>)local_res18);
  }
  return;
}

// LerpToPerBoneEx @ 14a8680f0

void __cdecl
UE::BlendStack::FBlendedCurveUtils::LerpToPerBoneEx
          (FBlendedCurve *param_1,FBlendedCurve *param_2,FBoneContainer *param_3,
          TArrayView<float_const_,int> *param_4)

{
  <lambda_1> local_38;
  <lambda_1> local_28;
  
  if (GVarUseBlendCurveFixes) {
    local_28.Skeleton = (USkeleton *)FWeakObjectPtr::Get(&(param_3->AssetSkeleton).WeakPtr);
    local_28.BoneContainer = param_3;
    local_28.OtherCurveBoneWeights = param_4;
    UnionEx<_UE::BlendStack::FBlendedCurveUtils::LerpToPerBoneEx_::__l5::<lambda_1>_>
              (param_1,param_2,&local_28);
  }
  else {
    Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,local_38);
  }
  return;
}

