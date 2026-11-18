// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147498400

UScriptStruct * __cdecl FAnimNode_ConvertLocalToComponentSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace,
                         (UObject *)pUVar1,L"AnimNode_ConvertLocalToComponentSpace");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.OuterSingleton;
}

// FAnimNode_ConvertLocalToComponentSpace @ 1474b0fc0

FAnimNode_ConvertLocalToComponentSpace * __thiscall
FAnimNode_ConvertLocalToComponentSpace::FAnimNode_ConvertLocalToComponentSpace
          (FAnimNode_ConvertLocalToComponentSpace *this)

{
  *(undefined4 *)&(this->LocalPose).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_ConvertLocalToComponentSpace__6B_;
  *(undefined8 *)&this->LocalPose = 0;
  (this->LocalPose).field_0xc = 0;
  return this;
}

// CacheBones_AnyThread @ 1474c1b10

void __thiscall
FAnimNode_ConvertLocalToComponentSpace::CacheBones_AnyThread
          (FAnimNode_ConvertLocalToComponentSpace *this,FAnimationCacheBonesContext *param_1)

{
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->LocalPose,param_1);
  return;
}

// EvaluateComponentSpace_AnyThread @ 1474cd530

void __thiscall
FAnimNode_ConvertLocalToComponentSpace::EvaluateComponentSpace_AnyThread
          (FAnimNode_ConvertLocalToComponentSpace *this,FComponentSpacePoseContext *param_1)

{
  FCSPose<FCompactPose> *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FBoneContainer *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined1 local_b8 [48];
  FBoneContainer *local_88;
  FBlendedCurve FStack_80;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_60;
  undefined8 local_58;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  bool local_20;
  
  lVar5 = param_1->_padding_;
  local_b8._8_8_ = 0;
  local_b8[0x10] = 1;
  local_b8._20_8_ = 0xffffffffffffffff;
  local_b8._32_8_ = 0;
  local_b8._40_8_ = 0;
  local_88 = (FBoneContainer *)0x0;
  FStack_80._0_8_ = 0;
  FStack_80._8_8_ = 0;
  FStack_80._16_1_ = 0;
  FStack_80._24_8_ = 0;
  pTStack_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_58 = 0;
  local_50 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_48 = 0;
  local_40 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = false;
  local_b8._0_8_ = lVar5;
  if (*(longlong *)(lVar5 + 0x660) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = *(FBoneContainer **)(lVar5 + 0x660);
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)(local_b8 + 0x20),pFVar6);
  FBlendedCurve::InitFrom(&FStack_80,pFVar6);
  local_b8._20_8_ = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  FPoseLink::Evaluate(&this->LocalPose,(FPoseContext *)local_b8);
  this_00 = &param_1->Pose;
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)this_00,local_88);
  if (this_00 != (FCSPose<FCompactPose> *)(local_b8 + 0x20)) {
    *(undefined8 *)&this_00->Pose = local_b8._32_8_;
    *(undefined4 *)&(param_1->Pose).Pose.field_0x8 = local_b8._40_4_;
    *(undefined4 *)&(param_1->Pose).Pose.field_0xc = local_b8._44_4_;
    local_b8._40_8_ = 0;
    local_b8._32_8_ = 0;
  }
  uVar3 = *(uint *)&(param_1->Pose).Pose.field_0x8;
  local_88 = (FBoneContainer *)0x0;
  if (-1 < (int)uVar3) {
    puVar1 = &(param_1->Pose).ComponentSpaceFlags.field_0xc;
    puVar2 = &(param_1->Pose).ComponentSpaceFlags.field_0x8;
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)puVar1 != uVar3) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                (1,1,uVar3,(ForElementType<unsigned_char> *)&(param_1->Pose).ComponentSpaceFlags,0,
                 (int *)puVar1);
    }
    iVar4 = *(int *)&(param_1->Pose).Pose.field_0x8;
    iVar9 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                      (1,1,iVar4,
                       (ForElementType<unsigned_char> *)&(param_1->Pose).ComponentSpaceFlags,
                       (int *)puVar2,(int *)puVar1);
    memset((void *)((longlong)iVar9 + *(longlong *)&(param_1->Pose).ComponentSpaceFlags),0,
           (longlong)iVar4);
    if (*(int *)puVar2 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    **(undefined1 **)&(param_1->Pose).ComponentSpaceFlags = 1;
    if (&param_1->Curve != &FStack_80) {
      *(undefined8 *)&param_1->Curve = FStack_80._0_8_;
      *(undefined4 *)&(param_1->Curve).field_0x8 = FStack_80._8_4_;
      *(undefined4 *)&(param_1->Curve).field_0xc = FStack_80._12_4_;
      FStack_80._8_8_ = 0;
      FStack_80._0_8_ = 0;
    }
    (param_1->Curve).field_0x10 = FStack_80._16_1_;
    *(undefined8 *)&(param_1->Curve).field_0x18 = FStack_80._24_8_;
    UE::Anim::FStackAttributeContainer::operator=
              (&param_1->CustomAttributes,(FStackAttributeContainer *)&pTStack_60);
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_40,(int)local_38);
    if (local_40 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_40);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_50,(int)local_48);
    if (local_50 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_50);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_60,(int)local_58);
    if (pTStack_60 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(pTStack_60);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// GatherDebugData @ 1474d4f50

void __thiscall
FAnimNode_ConvertLocalToComponentSpace::GatherDebugData
          (FAnimNode_ConvertLocalToComponentSpace *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace,
                         (UObject *)pUVar2,L"AnimNode_ConvertLocalToComponentSpace");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  plVar1 = *(longlong **)&this->LocalPose;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize_AnyThread @ 1474e9430

void __thiscall
FAnimNode_ConvertLocalToComponentSpace::Initialize_AnyThread
          (FAnimNode_ConvertLocalToComponentSpace *this,FAnimationInitializeContext *param_1)

{
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->LocalPose,param_1);
  return;
}

// Update_AnyThread @ 147501c30

void __thiscall
FAnimNode_ConvertLocalToComponentSpace::Update_AnyThread
          (FAnimNode_ConvertLocalToComponentSpace *this,FAnimationUpdateContext *param_1)

{
  FPoseLinkBase::Update((FPoseLinkBase *)&this->LocalPose,param_1);
  return;
}

