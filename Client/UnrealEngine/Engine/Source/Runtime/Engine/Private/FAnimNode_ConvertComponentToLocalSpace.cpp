// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 1474982a0

UScriptStruct * __cdecl FAnimNode_ConvertComponentToLocalSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace,
                         (UObject *)pUVar1,L"AnimNode_ConvertComponentToLocalSpace");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.OuterSingleton;
}

// FAnimNode_ConvertComponentToLocalSpace @ 1474b0f90

FAnimNode_ConvertComponentToLocalSpace * __thiscall
FAnimNode_ConvertComponentToLocalSpace::FAnimNode_ConvertComponentToLocalSpace
          (FAnimNode_ConvertComponentToLocalSpace *this)

{
  *(undefined4 *)&(this->ComponentPose).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_ConvertComponentToLocalSpace__6B_;
  *(undefined8 *)&this->ComponentPose = 0;
  (this->ComponentPose).field_0xc = 0;
  return this;
}

// CacheBones_AnyThread @ 1474c1b00

void __thiscall
FAnimNode_ConvertComponentToLocalSpace::CacheBones_AnyThread
          (FAnimNode_ConvertComponentToLocalSpace *this,FAnimationCacheBonesContext *param_1)

{
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->ComponentPose,param_1);
  return;
}

// Evaluate_AnyThread @ 1474cfb80

void __thiscall
FAnimNode_ConvertComponentToLocalSpace::Evaluate_AnyThread
          (FAnimNode_ConvertComponentToLocalSpace *this,FPoseContext *param_1)

{
  undefined1 local_d8 [136];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_50;
  undefined8 local_48;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_d8._0_8_ = param_1->_padding_;
  local_d8._20_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  local_d8._24_4_ = (undefined4)param_1->_padding_;
  local_d8._8_8_ = 0;
  local_d8[0x10] = 1;
  local_d8._32_8_ = 0;
  local_d8._40_8_ = 0;
  local_d8._48_8_ = 0;
  local_d8._56_8_ = 0;
  local_d8._64_8_ = 0;
  local_d8._72_8_ = 0;
  local_d8._80_8_ = 0;
  local_d8._88_8_ = (FCompactPoseBoneIndex *)0x0;
  local_d8._96_4_ = 0;
  local_d8._100_4_ = 0;
  local_d8._104_8_ = 0;
  local_d8._112_8_ = 0;
  local_d8[0x78] = 0;
  local_d8._128_8_ = 0;
  pTStack_50 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_48 = 0;
  local_40 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_38 = 0;
  local_30 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  FComponentSpacePoseLink::EvaluateComponentSpace
            (&this->ComponentPose,(FComponentSpacePoseContext *)local_d8);
  FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses
            ((FCSPose<FCompactPose> *)(local_d8 + 0x20),&param_1->Pose);
  if (&param_1->Curve != (FBlendedCurve *)(local_d8 + 0x68)) {
    *(undefined8 *)&param_1->Curve = local_d8._104_8_;
    *(undefined4 *)&(param_1->Curve).field_0x8 = local_d8._112_4_;
    *(undefined4 *)&(param_1->Curve).field_0xc = local_d8._116_4_;
    local_d8._112_8_ = 0;
    local_d8._104_8_ = 0;
  }
  (param_1->Curve).field_0x10 = local_d8[0x78];
  *(undefined8 *)&(param_1->Curve).field_0x18 = local_d8._128_8_;
  UE::Anim::FStackAttributeContainer::operator=
            (&param_1->CustomAttributes,(FStackAttributeContainer *)&pTStack_50);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_30,(int)local_28);
  if (local_30 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_30);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_40,(int)local_38);
  if (local_40 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_50,(int)local_48);
  if (pTStack_50 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTStack_50);
  }
  return;
}

// GatherDebugData @ 1474d4dd0

void __thiscall
FAnimNode_ConvertComponentToLocalSpace::GatherDebugData
          (FAnimNode_ConvertComponentToLocalSpace *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace,
                         (UObject *)pUVar2,L"AnimNode_ConvertComponentToLocalSpace");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.
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
  plVar1 = *(longlong **)&this->ComponentPose;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize_AnyThread @ 1474e9420

void __thiscall
FAnimNode_ConvertComponentToLocalSpace::Initialize_AnyThread
          (FAnimNode_ConvertComponentToLocalSpace *this,FAnimationInitializeContext *param_1)

{
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->ComponentPose,param_1);
  return;
}

// Update_AnyThread @ 147501c20

void __thiscall
FAnimNode_ConvertComponentToLocalSpace::Update_AnyThread
          (FAnimNode_ConvertComponentToLocalSpace *this,FAnimationUpdateContext *param_1)

{
  FPoseLinkBase::Update((FPoseLinkBase *)&this->ComponentPose,param_1);
  return;
}

