// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 9

// StaticClass @ 14a8d7110

UClass * __cdecl UPoseSearchFeatureChannel_Pose::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Pose",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Pose,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Pose>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Pose>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton;
}

// UPoseSearchFeatureChannel_Pose @ 14a8e1f30

UPoseSearchFeatureChannel_Pose * __thiscall
UPoseSearchFeatureChannel_Pose::UPoseSearchFeatureChannel_Pose
          (UPoseSearchFeatureChannel_Pose *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)UE::PoseSearch::DefaultRole;
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->SampledBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampledBones).ArrayNum = 0;
  (this->SampledBones).ArrayMax = 0;
  (this->SchemaBoneIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SchemaBoneIdx).ArrayNum = 0;
  (this->SchemaBoneIdx).ArrayMax = 0;
  this->PermutationTimeType = UseSampleTime;
  (this->SubChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubChannels).ArrayNum = 0;
  (this->SubChannels).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->InputQueryPose = UseContinuingPose;
  this->bUseCharacterSpaceVelocities = true;
  return this;
}

// UPoseSearchFeatureChannel_Pose @ 14a8e1fb0

UPoseSearchFeatureChannel_Pose * __thiscall
UPoseSearchFeatureChannel_Pose::UPoseSearchFeatureChannel_Pose(UPoseSearchFeatureChannel_Pose *this)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  FObjectInitializer *pFVar8;
  UPoseSearchFeatureChannel_Pose *pUVar9;
  FName local_res8;
  FName local_res10;
  FName local_38;
  FNameEntryId FStack_30;
  uint uStack_2c;
  undefined4 local_28;
  FName local_24;
  FNameEntryId FStack_1c;
  uint uStack_18;
  undefined4 local_14;
  
  pFVar8 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar8);
  this->_padding_ = (longlong)UE::PoseSearch::DefaultRole;
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->SampledBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampledBones).ArrayNum = 0;
  (this->SampledBones).ArrayMax = 0;
  (this->SchemaBoneIdx).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SchemaBoneIdx).ArrayNum = 0;
  (this->SchemaBoneIdx).ArrayMax = 0;
  this->PermutationTimeType = UseSampleTime;
  (this->SubChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubChannels).ArrayNum = 0;
  (this->SubChannels).ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->InputQueryPose = UseContinuingPose;
  this->bUseCharacterSpaceVelocities = true;
  ::FName::FName(&local_res8,"foot_l");
  pFVar1 = (FName *)(this->SampledBones).AllocatorInstance.Data;
  local_38 = local_res8;
  FStack_30.Value = 0x7fffffff;
  uStack_2c = 0xffffffff;
  local_28 = 3;
  if ((pFVar1 <= &local_38) &&
     (&local_38 < (FName *)((longlong)pFVar1 + (longlong)(this->SampledBones).ArrayMax * 0x14))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel_Pose *)(*pcVar3)();
      return pUVar9;
    }
  }
  iVar7 = (this->SampledBones).ArrayNum;
  if (iVar7 == (this->SampledBones).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&(this->SampledBones).AllocatorInstance,&(this->SampledBones).ArrayMax)
    ;
  }
  FVar4.Number = uStack_2c;
  FVar4.ComparisonIndex.Value = FStack_30.Value;
  (this->SampledBones).ArrayNum = iVar7 + 1;
  pFVar2 = (this->SampledBones).AllocatorInstance.Data;
  pFVar1 = (FName *)(pFVar2 + (longlong)iVar7 * 0x14);
  *pFVar1 = local_38;
  pFVar1[1] = FVar4;
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0x14 + 0x10) = local_28;
  ::FName::FName(&local_res10,"foot_r");
  pFVar1 = (FName *)(this->SampledBones).AllocatorInstance.Data;
  local_24 = local_res10;
  FStack_1c.Value = 0x7fffffff;
  uStack_18 = 0xffffffff;
  local_14 = 3;
  if ((pFVar1 <= &local_24) &&
     (&local_24 < (FName *)((longlong)pFVar1 + (longlong)(this->SampledBones).ArrayMax * 0x14))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UPoseSearchFeatureChannel_Pose *)(*pcVar3)();
      return pUVar9;
    }
  }
  iVar7 = (this->SampledBones).ArrayNum;
  if (iVar7 == (this->SampledBones).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&(this->SampledBones).AllocatorInstance,&(this->SampledBones).ArrayMax)
    ;
  }
  FVar5.Number = uStack_18;
  FVar5.ComparisonIndex.Value = FStack_1c.Value;
  (this->SampledBones).ArrayNum = iVar7 + 1;
  pFVar2 = (this->SampledBones).AllocatorInstance.Data;
  pFVar1 = (FName *)(pFVar2 + (longlong)iVar7 * 0x14);
  *pFVar1 = local_24;
  pFVar1[1] = FVar5;
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0x14 + 0x10) = local_14;
  return this;
}

// ~UPoseSearchFeatureChannel_Pose @ 14a8e2f00

void __thiscall
UPoseSearchFeatureChannel_Pose::~UPoseSearchFeatureChannel_Pose
          (UPoseSearchFeatureChannel_Pose *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  pFVar1 = (this->SubChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SchemaBoneIdx).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SampledBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Finalize @ 14a8f6b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPoseSearchFeatureChannel_Pose::Finalize
          (UPoseSearchFeatureChannel_Pose *this,UPoseSearchSchema *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_188 [32];
  UPoseSearchFeatureChannel_Position *local_138;
  UPoseSearchFeatureChannel_Heading *local_130;
  UPoseSearchFeatureChannel_Heading *local_128;
  UPoseSearchFeatureChannel_Velocity *local_120;
  UObject *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  UPoseSearchSchema *local_e8;
  FName local_e0;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar13 = 0;
  piVar1 = &(this->SubChannels).ArrayMax;
  (this->SubChannels).ArrayNum = 0;
  local_e8 = param_1;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SubChannels).AllocatorInstance,0,piVar1);
  }
  uVar15 = uVar13;
  if ((this->SampledBones).ArrayNum != 0) {
    do {
      uVar14 = (uint)uVar15;
      uVar8 = 0;
      if ((int)uVar14 < (this->SampledBones).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar2 = (this->SampledBones).AllocatorInstance.Data;
      if (((byte)pFVar2[uVar13 + 0x10] & 2) != 0) {
        local_110 = 0;
        local_138 = NewObject<UPoseSearchFeatureChannel_Position>
                              ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        (local_138->Bone).BoneName = *(FName *)(pFVar2 + uVar13);
        uVar8 = *(uint *)(pFVar2 + uVar13 + 8);
        *(uint *)&(local_138->Bone).field_0x8 =
             (uVar8 ^ *(uint *)&(local_138->Bone).field_0x8) & 0x80000000 ^ uVar8;
        *(uint *)&(local_138->Bone).field_0x8 =
             (*(uint *)(pFVar2 + uVar13 + 8) ^ uVar8) & 0x7fffffff ^ *(uint *)(pFVar2 + uVar13 + 8);
        (local_138->Bone).CachedCompactPoseIndex = *(FCompactPoseBoneIndex *)(pFVar2 + uVar13 + 0xc)
        ;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_138->SampleRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_138->SampleRole).Number = uVar5;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_138->OriginRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_138->OriginRole).Number = uVar5;
        local_138->SampleTimeOffset = 0.0;
        local_138->InputQueryPose = this->InputQueryPose;
        local_138->PermutationTimeType = this->PermutationTimeType;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_138);
        }
        pFVar3 = (this->SubChannels).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_138) &&
            ((FScriptContainerElement *)&local_138 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = (this->SubChannels).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
        }
        (this->SubChannels).ArrayNum = iVar9 + 1;
        *(UPoseSearchFeatureChannel_Position **)
         ((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_138;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_138 != (UPoseSearchFeatureChannel_Position *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_138);
        }
      }
      if (((byte)pFVar2[uVar13 + 0x10] & 4) != 0) {
        local_108 = 0;
        local_130 = NewObject<UPoseSearchFeatureChannel_Heading>
                              ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        (local_130->Bone).BoneName = *(FName *)(pFVar2 + uVar13);
        uVar8 = *(uint *)(pFVar2 + uVar13 + 8);
        *(uint *)&(local_130->Bone).field_0x8 =
             (uVar8 ^ *(uint *)&(local_130->Bone).field_0x8) & 0x80000000 ^ uVar8;
        *(uint *)&(local_130->Bone).field_0x8 =
             (*(uint *)(pFVar2 + uVar13 + 8) ^ uVar8) & 0x7fffffff ^ *(uint *)(pFVar2 + uVar13 + 8);
        (local_130->Bone).CachedCompactPoseIndex = *(FCompactPoseBoneIndex *)(pFVar2 + uVar13 + 0xc)
        ;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_130->SampleRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_130->SampleRole).Number = uVar5;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_130->OriginRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_130->OriginRole).Number = uVar5;
        local_130->SampleTimeOffset = 0.0;
        local_130->HeadingAxis = X;
        local_130->InputQueryPose = this->InputQueryPose;
        local_130->PermutationTimeType = this->PermutationTimeType;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_130);
        }
        pFVar3 = (this->SubChannels).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_130) &&
            ((FScriptContainerElement *)&local_130 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = (this->SubChannels).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
        }
        (this->SubChannels).ArrayNum = iVar9 + 1;
        *(UPoseSearchFeatureChannel_Heading **)
         ((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_130;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_130 != (UPoseSearchFeatureChannel_Heading *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_130);
        }
        local_100 = 0;
        local_128 = NewObject<UPoseSearchFeatureChannel_Heading>
                              ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        (local_128->Bone).BoneName = *(FName *)(pFVar2 + uVar13);
        uVar8 = *(uint *)(pFVar2 + uVar13 + 8);
        *(uint *)&(local_128->Bone).field_0x8 =
             (uVar8 ^ *(uint *)&(local_128->Bone).field_0x8) & 0x80000000 ^ uVar8;
        *(uint *)&(local_128->Bone).field_0x8 =
             (*(uint *)(pFVar2 + uVar13 + 8) ^ uVar8) & 0x7fffffff ^ *(uint *)(pFVar2 + uVar13 + 8);
        (local_128->Bone).CachedCompactPoseIndex = *(FCompactPoseBoneIndex *)(pFVar2 + uVar13 + 0xc)
        ;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_128->SampleRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_128->SampleRole).Number = uVar5;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_128->OriginRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_128->OriginRole).Number = uVar5;
        local_128->SampleTimeOffset = 0.0;
        local_128->HeadingAxis = Y;
        local_128->InputQueryPose = this->InputQueryPose;
        local_128->PermutationTimeType = this->PermutationTimeType;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_128);
        }
        pFVar3 = (this->SubChannels).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = (this->SubChannels).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
        }
        (this->SubChannels).ArrayNum = iVar9 + 1;
        *(UPoseSearchFeatureChannel_Heading **)
         ((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_128;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_128 != (UPoseSearchFeatureChannel_Heading *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_128);
        }
      }
      if (((byte)pFVar2[uVar13 + 0x10] & 1) != 0) {
        local_f8 = 0;
        local_120 = NewObject<UPoseSearchFeatureChannel_Velocity>
                              ((UObject *)this,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        (local_120->Bone).BoneName = *(FName *)(pFVar2 + uVar13);
        uVar8 = *(uint *)(pFVar2 + uVar13 + 8);
        *(uint *)&(local_120->Bone).field_0x8 =
             (uVar8 ^ *(uint *)&(local_120->Bone).field_0x8) & 0x80000000 ^ uVar8;
        *(uint *)&(local_120->Bone).field_0x8 =
             (*(uint *)(pFVar2 + uVar13 + 8) ^ uVar8) & 0x7fffffff ^ *(uint *)(pFVar2 + uVar13 + 8);
        (local_120->Bone).CachedCompactPoseIndex = *(FCompactPoseBoneIndex *)(pFVar2 + uVar13 + 0xc)
        ;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_120->SampleRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_120->SampleRole).Number = uVar5;
        uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        (local_120->OriginRole).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
        (local_120->OriginRole).Number = uVar5;
        local_120->SampleTimeOffset = 0.0;
        local_120->InputQueryPose = this->InputQueryPose;
        local_120->bUseCharacterSpaceVelocities = this->bUseCharacterSpaceVelocities;
        local_120->PermutationTimeType = this->PermutationTimeType;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_120);
        }
        pFVar3 = (this->SubChannels).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = (this->SubChannels).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
        }
        (this->SubChannels).ArrayNum = iVar9 + 1;
        *(UPoseSearchFeatureChannel_Velocity **)
         ((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_120 != (UPoseSearchFeatureChannel_Velocity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_120);
        }
      }
      if (((byte)pFVar2[uVar13 + 0x10] & 8) != 0) {
        local_f0 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar10 = UPoseSearchFeatureChannel_Phase::StaticClass();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar10);
        local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_c8._56_8_ = (UPackage *)0x0;
        local_c8._16_4_ = 0;
        local_c8._20_4_ = 0;
        local_c8._24_4_ = RF_Transient;
        local_c8._40_8_ = (UObject *)0x0;
        local_c8[0x20] = false;
        local_c8._8_8_ = this;
        pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar12 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        *(undefined8 *)&pUVar11[1].field_0x18 = *(undefined8 *)(pFVar2 + uVar13);
        uVar8 = *(uint *)(pFVar2 + uVar13 + 8);
        *(uint *)&pUVar11[1].field_0x20 =
             (uVar8 ^ *(uint *)&pUVar11[1].field_0x20) & 0x80000000 ^ uVar8;
        *(uint *)&pUVar11[1].field_0x20 =
             (*(uint *)(pFVar2 + uVar13 + 8) ^ uVar8) & 0x7fffffff ^ *(uint *)(pFVar2 + uVar13 + 8);
        *(undefined4 *)&pUVar11[1].field_0x24 = *(undefined4 *)(pFVar2 + uVar13 + 0xc);
        *(longlong *)(pUVar11 + 2) = this->_padding_;
        pUVar11[2].field_0x9 = this->InputQueryPose;
        if (this->PermutationTimeType != UseSampleTime) {
          if (1 < (byte)LogPoseSearch._0_1_) {
            local_e0 = (FName)local_e8->_padding_;
            ::FName::ToString(&local_e0,&local_d8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
          }
          return false;
        }
        local_118 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar11);
        }
        pFVar2 = (this->SubChannels).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = (this->SubChannels).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->SubChannels).AllocatorInstance,piVar1);
        }
        (this->SubChannels).ArrayNum = iVar9 + 1;
        *(UObject **)((this->SubChannels).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_118;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_118);
        }
      }
      uVar13 = uVar13 + 0x14;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while (uVar14 + 1 != (this->SampledBones).ArrayNum);
  }
  bVar6 = UPoseSearchFeatureChannel_GroupBase::Finalize
                    ((UPoseSearchFeatureChannel_GroupBase *)this,local_e8);
  return bVar6;
}

// GetPrivateStaticClass @ 14a8fc870

UClass * __cdecl UPoseSearchFeatureChannel_Pose::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Pose",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Pose,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Pose>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Pose>,local_res8,
               UPoseSearchFeatureChannel_GroupBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.InnerSingleton;
}

// GetSubChannels @ 14a8fe680

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> * __thiscall
UPoseSearchFeatureChannel_Pose::GetSubChannels
          (UPoseSearchFeatureChannel_Pose *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *pTVar4;
  
  iVar1 = (this->SubChannels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UPoseSearchFeatureChannel> *)(this->SubChannels).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetSubChannels @ 14a8fe6f0

TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> * __thiscall
UPoseSearchFeatureChannel_Pose::GetSubChannels
          (UPoseSearchFeatureChannel_Pose *this,
          TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *pTVar4;
  
  iVar1 = (this->SubChannels).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UPoseSearchFeatureChannel> *)(this->SubChannels).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Pose @ 14a908df0

void __cdecl
UPoseSearchFeatureChannel_Pose::StaticRegisterNativesUPoseSearchFeatureChannel_Pose(void)

{
  return;
}

