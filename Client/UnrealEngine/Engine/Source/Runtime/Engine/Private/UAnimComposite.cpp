// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// StaticClass @ 1473c9b50

UClass * __cdecl UAnimComposite::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimComposite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimComposite",
               &Z_Registration_Info_UClass_UAnimComposite.InnerSingleton,
               StaticRegisterNativesUAnimComposite,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimComposite>,InternalVTableHelperCtorCaller<UAnimComposite>,
               local_res8,UAnimCompositeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimComposite.InnerSingleton;
}

// UAnimComposite @ 1473d8540

UAnimComposite * __thiscall
UAnimComposite::UAnimComposite(UAnimComposite *this,FVTableHelper *param_1)

{
  UAnimSequenceBase::UAnimSequenceBase((UAnimSequenceBase *)this,param_1);
  *(undefined4 *)&this->_padding_ = 60000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->AnimationTrack).AnimSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationTrack).AnimSegments.ArrayNum = 0;
  (this->AnimationTrack).AnimSegments.ArrayMax = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// UAnimComposite @ 1473d85b0

UAnimComposite * __thiscall
UAnimComposite::UAnimComposite(UAnimComposite *this,FObjectInitializer *param_1)

{
  UAnimSequenceBase::UAnimSequenceBase((UAnimSequenceBase *)this,param_1);
  *(undefined4 *)&this->_padding_ = 60000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->AnimationTrack).AnimSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationTrack).AnimSegments.ArrayNum = 0;
  (this->AnimationTrack).AnimSegments.ArrayMax = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// ~UAnimComposite @ 1473db3c0

void __thiscall UAnimComposite::~UAnimComposite(UAnimComposite *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->AnimationTrack).AnimSegments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UAnimCompositeBase::_vftable__for__IInterface_PreviewMeshProvider__;
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  return;
}

// ContainRecursive @ 1473f2780

bool __thiscall
UAnimComposite::ContainRecursive
          (UAnimComposite *this,TArray<UAnimCompositeBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  UAnimComposite *local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  for (pFVar7 = pFVar9; pFVar7 != pFVar9 + (longlong)param_1->ArrayNum * 8; pFVar7 = pFVar7 + 8) {
    if (*(UAnimComposite **)pFVar7 == this) {
      return true;
    }
  }
  local_48 = this;
  if (((pFVar9 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar9 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  *(UAnimComposite **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
  iVar6 = (this->AnimationTrack).AnimSegments.ArrayNum;
  pFVar9 = (this->AnimationTrack).AnimSegments.AllocatorInstance.Data;
  pFVar7 = pFVar9 + (longlong)iVar6 * 0x20;
  while( true ) {
    if ((this->AnimationTrack).AnimSegments.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar7) break;
    local_38 = param_1->ArrayNum;
    lVar10 = (longlong)local_38;
    _Src = (param_1->AllocatorInstance).Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    if (local_38 == 0) {
      local_34[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_38,0,&local_40,local_38,local_34);
      memcpy(local_40.Data,_Src,lVar10 << 3);
    }
    if (*(longlong *)pFVar9 != 0) {
      pUVar8 = UAnimCompositeBase::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)pFVar9,pUVar8);
      if (((bVar3) && (plVar1 = *(longlong **)pFVar9, plVar1 != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(*plVar1 + 1000))(plVar1,&local_40), cVar5 != '\0')) {
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
        return true;
      }
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    pFVar9 = pFVar9 + 0x20;
  }
  return false;
}

// EnableRootMotionSettingFromMontage @ 1473f9b20

void __thiscall
UAnimComposite::EnableRootMotionSettingFromMontage(UAnimComposite *this,bool param_1,Type param_2)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AnimationTrack).AnimSegments.ArrayNum;
  pFVar3 = (this->AnimationTrack).AnimSegments.AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AnimationTrack).AnimSegments.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x3c8))(plVar2,param_1,param_2);
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return;
}

// ExtractRootMotion @ 1473fa720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UAnimComposite::ExtractRootMotion
          (UAnimComposite *this,TTransform<double> *__return_storage_ptr__,
          FAnimExtractContext *param_1)

{
  undefined1 auStackY_b8 [32];
  FRootMotionMovementParams local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88.bHasRootMotion = false;
  local_88.BlendWeight = 0.0;
  local_88.RootMotionTransform.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.RootMotionTransform.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.RootMotionTransform.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.RootMotionTransform.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.RootMotionTransform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88.RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88.RootMotionTransform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88.RootMotionTransform.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88.RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88.RootMotionTransform.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88.RootMotionTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.RootMotionTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UAnimCompositeBase::ExtractRootMotionFromTrack
            ((UAnimCompositeBase *)this,&this->AnimationTrack,(float)param_1->CurrentTime,
             (param_1->DeltaTimeRecord).Delta,param_1,&local_88);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       local_88.RootMotionTransform.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] =
       local_88.RootMotionTransform.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
       local_88.RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] =
       local_88.RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       local_88.RootMotionTransform.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       local_88.RootMotionTransform.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       local_88.RootMotionTransform.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] =
       local_88.RootMotionTransform.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       local_88.RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] =
       local_88.RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
       local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] =
       local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// ExtractRootMotionFromRange @ 1473fa940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UAnimComposite::ExtractRootMotionFromRange
          (UAnimComposite *this,TTransform<double> *__return_storage_ptr__,double param_1,
          double param_2,FAnimExtractContext *param_3)

{
  undefined1 auStackY_b8 [32];
  FRootMotionMovementParams local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88.bHasRootMotion = false;
  local_88.BlendWeight = 0.0;
  local_88.RootMotionTransform.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.RootMotionTransform.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.RootMotionTransform.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.RootMotionTransform.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.RootMotionTransform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88.RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88.RootMotionTransform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88.RootMotionTransform.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88.RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88.RootMotionTransform.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88.RootMotionTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.RootMotionTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UAnimCompositeBase::ExtractRootMotionFromTrack
            ((UAnimCompositeBase *)this,&this->AnimationTrack,(float)param_1,(float)param_2,param_3,
             &local_88);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       local_88.RootMotionTransform.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] =
       local_88.RootMotionTransform.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
       local_88.RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] =
       local_88.RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       local_88.RootMotionTransform.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       local_88.RootMotionTransform.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       local_88.RootMotionTransform.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] =
       local_88.RootMotionTransform.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       local_88.RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] =
       local_88.RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
       local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] =
       local_88.RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// ExtractRootTrackTransform @ 1473fafa0

TTransform<double> * __thiscall
UAnimComposite::ExtractRootTrackTransform
          (UAnimComposite *this,TTransform<double> *__return_storage_ptr__,
          FAnimExtractContext *param_1,FBoneContainer *param_2)

{
  FAnimTrack *this_00;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  uint uVar12;
  FAnimSegment *this_01;
  UAnimSequenceBase *pUVar13;
  TTransform<double> *pTVar14;
  uint uVar15;
  float fVar16;
  float local_res8 [2];
  FAnimExtractContext local_c8;
  FAnimExtractContext local_78;
  
  this_00 = &this->AnimationTrack;
  this_01 = FAnimTrack::GetSegmentAtTime(this_00,(float)param_1->CurrentTime);
  if (this_01 == (FAnimSegment *)0x0) {
LAB_1473fb066:
    iVar1 = (this->AnimationTrack).AnimSegments.ArrayNum;
    if (iVar1 != 0) {
      uVar15 = iVar1 - 1;
      uVar12 = 0;
      if ((int)uVar15 < iVar1) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TTransform<double> *)(*pcVar3)();
        return pTVar14;
      }
      if ((double)*(float *)((this_00->AnimSegments).AllocatorInstance.Data +
                            (longlong)(int)uVar15 * 0x20 + 0x10) < param_1->CurrentTime) {
        uVar12 = 0;
        if ((int)uVar15 < (this->AnimationTrack).AnimSegments.ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TTransform<double> *)(*pcVar3)();
          return pTVar14;
        }
        plVar2 = *(longlong **)
                  ((this_00->AnimSegments).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x20);
        FAnimExtractContext::FAnimExtractContext(&local_78,param_1);
        fVar16 = (float)(**(code **)(*plVar2 + 0x2c0))(plVar2);
        local_78.CurrentTime = (double)fVar16;
        (**(code **)(*plVar2 + 0x368))(plVar2,__return_storage_ptr__,&local_78,param_2);
        if (local_78.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.BonesRequired.AllocatorInstance.Data);
        }
        goto LAB_1473fb18b;
      }
    }
    fVar16 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar4,0);
    auVar6._0_8_ = (double)fVar16;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
    fVar16 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar4,0);
    auVar8._0_8_ = (double)fVar16;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar8;
    fVar16 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
    auVar10._8_4_ = SUB84((double)fVar4,0);
    auVar10._0_8_ = (double)fVar16;
    auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
  }
  else {
    local_res8[0] = 0.0;
    pUVar13 = FAnimSegment::GetAnimationData(this_01,(float)param_1->CurrentTime,local_res8);
    if (pUVar13 == (UAnimSequenceBase *)0x0) goto LAB_1473fb066;
    FAnimExtractContext::FAnimExtractContext(&local_c8,param_1);
    local_c8.CurrentTime = (double)local_res8[0];
    (**(code **)(pUVar13->_padding_ + 0x368))(pUVar13,__return_storage_ptr__,&local_c8,param_2);
    local_78.PoseCurves.AllocatorInstance.Data = local_c8.PoseCurves.AllocatorInstance.Data;
    if (local_c8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.BonesRequired.AllocatorInstance.Data);
      local_78.PoseCurves.AllocatorInstance.Data = local_c8.PoseCurves.AllocatorInstance.Data;
    }
LAB_1473fb18b:
    if (local_78.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.PoseCurves.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetAdditiveAnimType @ 1473fec90

EAdditiveAnimationType __thiscall UAnimComposite::GetAdditiveAnimType(UAnimComposite *this)

{
  longlong *plVar1;
  EAdditiveAnimationType EVar2;
  EAdditiveAnimationType EVar3;
  
  if ((0 < (this->AnimationTrack).AnimSegments.ArrayNum) &&
     (plVar1 = *(longlong **)(this->AnimationTrack).AnimSegments.AllocatorInstance.Data,
     plVar1 != (longlong *)0x0)) {
    EVar2 = (**(code **)(*plVar1 + 0x3b8))();
    EVar3 = AAT_None;
    if (EVar2 != ~AAT_None) {
      EVar3 = EVar2;
    }
    return EVar3;
  }
  return AAT_None;
}

// GetAnimNotifiesFromDeltaPositions @ 1473ff070

void __thiscall
UAnimComposite::GetAnimNotifiesFromDeltaPositions
          (UAnimComposite *this,float *param_1,float *param_2,FAnimNotifyContext *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  UAnimSequenceBase::GetAnimNotifiesFromDeltaPositions
            ((UAnimSequenceBase *)this,param_1,param_2,param_3);
  iVar6 = (this->AnimationTrack).AnimSegments.ArrayNum;
  uVar4 = 0;
  if (0 < iVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->AnimationTrack).AnimSegments.AllocatorInstance.Data[lVar5 + 0x1c] !=
          (FScriptContainerElement)0x0) {
        uVar3 = 0;
        if ((int)uVar4 < (this->AnimationTrack).AnimSegments.ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FAnimSegment::GetAnimNotifiesFromTrackPositions
                  ((FAnimSegment *)
                   ((this->AnimationTrack).AnimSegments.AllocatorInstance.Data +
                   (longlong)(int)uVar4 * 0x20),param_1,param_2,param_3);
      }
      iVar6 = (this->AnimationTrack).AnimSegments.ArrayNum;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while ((int)uVar4 < iVar6);
  }
  return;
}

// GetAnimationPose @ 1473ffcf0

void __thiscall
UAnimComposite::GetAnimationPose
          (UAnimComposite *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FCurveElement *pFVar3;
  FBlendedCurve *pFVar4;
  FName FVar5;
  FName FVar6;
  ForElementType<UE::Anim::FCurveElement> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FCurveElement *pFVar11;
  longlong lVar12;
  ECurveElementFlags *pEVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  int iVar16;
  ForElementType<UE::Anim::FCurveElement> FVar17;
  uint uVar18;
  FIdentityFunctor local_res8;
  FCurveElement *local_48;
  undefined8 local_40;
  char local_38;
  undefined8 local_30;
  
  FAnimTrack::GetAnimationPose(&this->AnimationTrack,param_1,param_2);
  pFVar4 = param_1->Curve;
  local_48 = (FCurveElement *)0x0;
  local_40 = 0;
  local_38 = '\0';
  local_30 = 0;
  if (pFVar4 == (FBlendedCurve *)&local_48) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4808592878626406918>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                       ,0x206,"&InCurveToInitFrom != this");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (**(code **)(this->_padding_ + 0x2f0))(this,&local_48,param_2,0);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                       ,0x10a,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    local_30 = *(undefined8 *)&pFVar4->field_0x18;
    (**(code **)(this->_padding_ + 0x2f0))(this,&local_48,param_2,0);
  }
  iVar16 = (int)local_40;
  lVar12 = (longlong)(int)local_40;
  puVar1 = &pFVar4->field_0x8;
  iVar10 = *(int *)puVar1;
  if ((int)local_40 != 0) {
    if (pFVar4->field_0x10 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (*(FCurveElement **)pFVar4,iVar10,local_res8,(FElementSortPredicate)local_res8);
      pFVar4->field_0x10 = 1;
    }
    if (local_38 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (local_48,(int)local_40,local_res8,(FElementSortPredicate)local_res8);
      local_38 = '\x01';
    }
    if (iVar16 < iVar10) {
      iVar16 = iVar10;
    }
    uVar18 = iVar16 / 2 + iVar16;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    puVar2 = &pFVar4->field_0xc;
    if (*(int *)&pFVar4->field_0xc < (int)uVar18) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)pFVar4,*(int *)puVar1,
                 (int *)puVar2);
    }
    FVar17.Data = *(FCurveElement **)pFVar4;
    pFVar14 = local_48 + lVar12;
    pFVar11 = FVar17.Data + iVar10;
    pFVar15 = local_48;
    if (FVar17.Data != pFVar11) {
      if (local_48 == pFVar14) {
        return;
      }
      do {
        while( true ) {
          FVar5 = pFVar15->Name;
          FVar6 = (FVar17.Data)->Name;
          if (FVar6 != FVar5) break;
          (FVar17.Data)->Value = pFVar15->Value;
          pEVar13 = &pFVar15->Flags;
          pFVar15 = pFVar15 + 1;
          (FVar17.Data)->Flags = *pEVar13;
          FVar17.Data = FVar17.Data + 1;
          if ((FVar17.Data == pFVar11) || (pFVar15 == pFVar14)) goto LAB_1473fffac;
        }
        iVar10 = FVar6.ComparisonIndex.Value.Value - FVar5.ComparisonIndex.Value;
        if (iVar10 == 0) {
          iVar10 = FVar6.Number - FVar5.Number;
        }
        if (iVar10 < 0) {
          FVar17.Data = FVar17.Data + 1;
          bVar9 = FVar17.Data == pFVar11;
        }
        else {
          FVar7.Data = *(FCurveElement **)pFVar4;
          iVar10 = *(int *)puVar1;
          if (iVar10 == *(int *)puVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)pFVar4,
                                (int *)puVar2);
          }
          iVar16 = (int)((longlong)FVar17.Data - (longlong)FVar7.Data >> 4);
          *(int *)puVar1 = iVar10 + 1;
          memmove(*(FCurveElement **)pFVar4 + iVar16 + 1,*(FCurveElement **)pFVar4 + iVar16,
                  (longlong)(iVar10 - iVar16) << 4);
          FVar7.Data = *(FCurveElement **)pFVar4;
          pFVar11 = FVar7.Data + *(int *)puVar1;
          pFVar3 = FVar7.Data + iVar16;
          (pFVar3->Name).ComparisonIndex = 0;
          (pFVar3->Name).Number = 0;
          pFVar3->Value = 0.0;
          pFVar3->Flags = None;
          *(undefined3 *)&pFVar3->field_0xd = 0;
          FVar7.Data[iVar16].Value = 0.0;
          FVar17.Data = FVar7.Data + (longlong)iVar16 + 1;
          FVar7.Data[iVar16].Name = pFVar15->Name;
          FVar7.Data[iVar16].Value = pFVar15->Value;
          pEVar13 = &pFVar15->Flags;
          pFVar15 = pFVar15 + 1;
          bVar9 = pFVar15 == pFVar14;
          FVar7.Data[iVar16].Flags = *pEVar13;
        }
      } while (!bVar9);
    }
LAB_1473fffac:
    if (pFVar15 < pFVar14) {
      iVar10 = *(int *)puVar1;
      iVar16 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
      uVar18 = iVar16 + iVar10;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (*(int *)puVar2 < (int)uVar18) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)pFVar4,iVar10,
                   (int *)puVar2);
      }
      UE::Core::Private::
      ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar16,(ForElementType<UE::Anim::FCurveElement> *)pFVar4,(int *)puVar1,
                 (int *)puVar2);
      lVar12 = (longlong)pFVar15 - (longlong)(*(FCurveElement **)pFVar4 + iVar10);
      pFVar11 = *(FCurveElement **)pFVar4 + iVar10;
      pEVar13 = &pFVar15->Flags;
      do {
        (pFVar11->Name).ComparisonIndex = 0;
        (pFVar11->Name).Number = 0;
        pFVar11->Value = 0.0;
        pFVar11->Flags = None;
        *(undefined3 *)&pFVar11->field_0xd = 0;
        pFVar11->Value = 0.0;
        pFVar11->Name = *(FName *)(lVar12 + (longlong)pFVar11);
        pFVar15 = pFVar11 + 1;
        pFVar11->Value = *(float *)(pEVar13 + -4);
        pFVar11->Flags = *pEVar13;
        pFVar11 = pFVar15;
        pEVar13 = pEVar13 + 0x10;
      } while ((FCurveElement *)(lVar12 + (longlong)pFVar15) < pFVar14);
    }
  }
  return;
}

// GetPrivateStaticClass @ 147403b00

UClass * __cdecl UAnimComposite::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimComposite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimComposite",
               &Z_Registration_Info_UClass_UAnimComposite.InnerSingleton,
               StaticRegisterNativesUAnimComposite,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimComposite>,InternalVTableHelperCtorCaller<UAnimComposite>,
               local_res8,UAnimCompositeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimComposite.InnerSingleton;
}

// GetResourceSizeEx @ 147404370

void __thiscall UAnimComposite::GetResourceSizeEx(UAnimComposite *this,FResourceSizeEx *param_1)

{
  UAnimSequenceBase::GetResourceSizeEx((UAnimSequenceBase *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)((this->AnimationTrack).AnimSegments.ArrayMax << 5));
  return;
}

// GetSamplingFrameRate @ 147404a90

FFrameRate __thiscall UAnimComposite::GetSamplingFrameRate(UAnimComposite *this)

{
  FFrameRate in_RDX;
  
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    *(longlong *)in_RDX = this->_padding_;
    return in_RDX;
  }
  *(FFrameRate *)in_RDX = CompositeFrameRate;
  return in_RDX;
}

// HandleAssetPlayerTickedInternal @ 147405d20

void __thiscall
UAnimComposite::HandleAssetPlayerTickedInternal
          (UAnimComposite *this,FAnimAssetTickContext *param_1,float param_2,float param_3,
          FAnimTickRecord *param_4,FAnimNotifyQueue *param_5)

{
  FAnimExtractContext local_78;
  
  UAnimSequenceBase::HandleAssetPlayerTickedInternal
            ((UAnimSequenceBase *)this,param_1,param_2,param_3,param_4,param_5);
  local_78.bExtractRootMotion = false;
  local_78.DeltaTimeRecord.bPreviousIsValid = false;
  local_78.DeltaTimeRecord._9_3_ = 0;
  local_78.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.PoseCurves.ArrayNum = 0;
  local_78.PoseCurves.ArrayMax = 0;
  local_78.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.BonesRequired.ArrayNum = 0;
  local_78.BonesRequired.ArrayMax = 0;
  local_78.InterpolationOverride.bIsSet = false;
  local_78.CurrentTime = 0.0;
  local_78.DeltaTimeRecord.Delta = 0.0;
  local_78.DeltaTimeRecord.Previous = 0.0;
  local_78.bLooping = false;
  UAnimCompositeBase::ExtractRootMotionFromTrack
            ((UAnimCompositeBase *)this,&this->AnimationTrack,param_2,param_2 + param_3,&local_78,
             &param_1->RootMotionMovementParams);
  if (local_78.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BonesRequired.AllocatorInstance.Data);
  }
  if (local_78.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.PoseCurves.AllocatorInstance.Data);
  }
  return;
}

// HasRootMotion @ 1474060e0

bool __thiscall UAnimComposite::HasRootMotion(UAnimComposite *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AnimationTrack).AnimSegments.ArrayNum;
  pFVar3 = (this->AnimationTrack).AnimSegments.AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AnimationTrack).AnimSegments.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (((pFVar3[0x1c] != (FScriptContainerElement)0x0) && (*(longlong **)pFVar3 != (longlong *)0x0)
        ) && (cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x340))(), cVar2 != '\0')) {
      return true;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return false;
}

// InvalidateRecursiveAsset @ 1474073c0

void __thiscall UAnimComposite::InvalidateRecursiveAsset(UAnimComposite *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UAnimSequenceBase *pUVar3;
  char cVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar2 = (this->AnimationTrack).AnimSegments.AllocatorInstance.Data;
  iVar1 = (this->AnimationTrack).AnimSegments.ArrayNum;
  pFVar8 = pFVar2 + 0x1c;
LAB_147407400:
  do {
    if ((this->AnimationTrack).AnimSegments.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 + -0x1c == pFVar2 + (longlong)iVar1 * 0x20) {
      return;
    }
    pUVar3 = *(UAnimSequenceBase **)(pFVar8 + -0x1c);
    if (pUVar3 == (UAnimSequenceBase *)0x0) {
LAB_1474074cc:
      FVar5 = (FScriptContainerElement)
              FAnimTrack::IsValidToAdd(&this->AnimationTrack,pUVar3,(FText *)0x0);
      *pFVar8 = FVar5;
    }
    else {
      pUVar7 = UAnimCompositeBase::StaticClass();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) goto LAB_1474074cc;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = 0;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_38,(int *)((longlong)&local_30 + 4));
      local_30 = CONCAT44(local_30._4_4_,iVar6 + 1);
      *(UAnimComposite **)(local_38.Data + (longlong)iVar6 * 8) = this;
      cVar4 = (**(code **)(pUVar3->_padding_ + 1000))(pUVar3,&local_38);
      if (cVar4 == '\0') {
        FVar5 = (FScriptContainerElement)
                FAnimTrack::IsValidToAdd(&this->AnimationTrack,pUVar3,(FText *)0x0);
      }
      else {
        FVar5 = (FScriptContainerElement)0x0;
      }
      *pFVar8 = FVar5;
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
        pFVar8 = pFVar8 + 0x20;
        goto LAB_147407400;
      }
    }
    pFVar8 = pFVar8 + 0x20;
  } while( true );
}

// IsNotifyAvailable @ 147407e10

bool __thiscall UAnimComposite::IsNotifyAvailable(UAnimComposite *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  
  fVar11 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  if (0.0 < fVar11) {
    bVar4 = UAnimSequenceBase::IsNotifyAvailable((UAnimSequenceBase *)this);
    if (bVar4) {
      return true;
    }
    iVar8 = (this->AnimationTrack).AnimSegments.ArrayNum;
    uVar9 = 0;
    if (0 < iVar8) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar1 = (this->AnimationTrack).AnimSegments.AllocatorInstance.Data;
        if (((pFVar1[lVar10 + 0x1c] != (FScriptContainerElement)0x0) &&
            (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*plVar2 + 0x3d8))(), cVar6 != '\0')) {
          return true;
        }
        iVar8 = (this->AnimationTrack).AnimSegments.ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x20;
      } while ((int)uVar9 < iVar8);
    }
  }
  return false;
}

// IsValidAdditive @ 1474081a0

bool __thiscall UAnimComposite::IsValidAdditive(UAnimComposite *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x3b8))();
  return iVar1 != 0;
}

// PostLoad @ 14740d960

void __thiscall UAnimComposite::PostLoad(UAnimComposite *this)

{
  UAnimSequenceBase::PostLoad((UAnimSequenceBase *)this);
                    /* WARNING: Could not recover jumptable at 0x00014740d979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x3e0))(this);
  return;
}

// SetCompositeLength @ 1474192a0

void __thiscall UAnimComposite::SetCompositeLength(UAnimComposite *this,float param_1)

{
  *(float *)&this->_padding_ = param_1;
  return;
}

// StaticRegisterNativesUAnimComposite @ 147419be0

void __cdecl UAnimComposite::StaticRegisterNativesUAnimComposite(void)

{
  return;
}

