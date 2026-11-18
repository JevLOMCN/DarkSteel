// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 28

// StaticClass @ 14a90cdc0

UClass * __cdecl UPoseSearchSchema::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchSchema",
               &Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton,
               StaticRegisterNativesUPoseSearchSchema,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchSchema>,
               InternalVTableHelperCtorCaller<UPoseSearchSchema>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton;
}

// FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime> @ 14a911f30

UPoseSearchFeatureChannel_PermutationTime * __thiscall
UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>
          (UPoseSearchSchema *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UPoseSearchFeatureChannel_PermutationTime *pUVar5;
  UPoseSearchFeatureChannel *pUVar6;
  undefined4 uStack_1c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_18;
  
  pFVar2 = (this->FinalizedChannels).AllocatorInstance.Data;
  iVar1 = (this->FinalizedChannels).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UPoseSearchFeatureChannel_PermutationTime *)(*pcVar3)();
      return pUVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)pFVar2;
  pUVar6 = FindChannelRecursive<_UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>_::__l2::<lambda_1>_>
                     (&local_18,(<lambda_1>)this);
  return (UPoseSearchFeatureChannel_PermutationTime *)pUVar6;
}

// FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory> @ 14a911fa0

UPoseSearchFeatureChannel_Trajectory * __thiscall
UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory>
          (UPoseSearchSchema *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UPoseSearchFeatureChannel_Trajectory *pUVar5;
  undefined4 uStack_1c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_18;
  
  pFVar2 = (this->FinalizedChannels).AllocatorInstance.Data;
  iVar1 = (this->FinalizedChannels).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UPoseSearchFeatureChannel_Trajectory *)(*pcVar3)();
      return pUVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)pFVar2;
  pUVar5 = (UPoseSearchFeatureChannel_Trajectory *)
           FindChannelRecursive<_UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory>_::__l2::<lambda_1>_>
                     (&local_18,(<lambda_1>)this);
  return pUVar5;
}

// UPoseSearchSchema @ 14a91a410

UPoseSearchSchema * __thiscall
UPoseSearchSchema::UPoseSearchSchema(UPoseSearchSchema *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->SampleRate = 0x1e;
  this->_padding_ = (longlong)&___7UPoseSearchSchema__6B_;
  (this->Skeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeletons).ArrayNum = 0;
  (this->Skeletons).ArrayMax = 0;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  (this->FinalizedChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalizedChannels).ArrayNum = 0;
  (this->FinalizedChannels).ArrayMax = 0;
  this->SchemaCardinality = 0;
  this->bAddDataPadding = false;
  this->bInjectAdditionalDebugChannels = false;
  return this;
}

// UPoseSearchSchema @ 14a91a460

UPoseSearchSchema * __thiscall
UPoseSearchSchema::UPoseSearchSchema(UPoseSearchSchema *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->SampleRate = 0x1e;
  this->_padding_ = (longlong)&___7UPoseSearchSchema__6B_;
  (this->Skeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeletons).ArrayNum = 0;
  (this->Skeletons).ArrayMax = 0;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  (this->FinalizedChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalizedChannels).ArrayNum = 0;
  (this->FinalizedChannels).ArrayMax = 0;
  this->SchemaCardinality = 0;
  this->bAddDataPadding = false;
  this->bInjectAdditionalDebugChannels = false;
  return this;
}

// ~UPoseSearchSchema @ 14a91b040

void __thiscall UPoseSearchSchema::~UPoseSearchSchema(UPoseSearchSchema *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPoseSearchSchema__6B_;
  pFVar1 = (this->FinalizedChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Channels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseSearchRoledSkeleton,int>
            ((FPoseSearchRoledSkeleton *)(this->Skeletons).AllocatorInstance.Data,
             (this->Skeletons).ArrayNum);
  pFVar1 = (this->Skeletons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// AddBoneReference @ 14a9210a0

schar __thiscall
UPoseSearchSchema::AddBoneReference(UPoseSearchSchema *this,FBoneReference *param_1,FName *param_2)

{
  schar sVar1;
  
  sVar1 = AddBoneReference(this,param_1,param_2,true);
  return sVar1;
}

// AddBoneReference @ 14a9210b0

/* WARNING: Enum "Type": Some values do not have unique names */

schar __thiscall
UPoseSearchSchema::AddBoneReference
          (UPoseSearchSchema *this,FBoneReference *param_1,FName *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeleton *pUVar3;
  code *pcVar4;
  bool bVar5;
  schar sVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FBoneReference local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar8 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) goto LAB_14a9213b7;
    if (*(FName *)(pFVar8 + 0x10) == *param_2) break;
    pFVar8 = pFVar8 + 0x48;
  }
  if (pFVar8 == (FScriptContainerElement *)0x0) {
LAB_14a9213b7:
    if ((byte)LogPoseSearch._0_1_ < 2) {
      return -2;
    }
    if (this == (UPoseSearchSchema *)0x0) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      local_80 = (FName)this->_padding_;
      ::FName::ToString(&local_80,&local_a8);
    }
    ::FName::ToString(param_2,&local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar3 = *(USkeleton **)pFVar8;
    if (pUVar3 != (USkeleton *)0x0) {
      local_d8.BoneName = param_1->BoneName;
      local_d8._8_4_ = *(undefined4 *)&param_1->field_0x8;
      local_d8.CachedCompactPoseIndex = param_1->CachedCompactPoseIndex;
      if (local_d8.BoneName == (FName)0x0) {
        if (!param_3) {
          return -1;
        }
        if (((pUVar3->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          sVar6 = (*pcVar4)();
          return sVar6;
        }
        local_d8.BoneName =
             *(FName *)(pUVar3->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data;
        FBoneReference::Initialize(&local_d8,pUVar3);
        if ((local_d8.BoneIndex == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TempBoneReference.HasValidSetup()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                               ,0xd5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          sVar6 = (*pcVar4)();
          return sVar6;
        }
      }
      else {
        FBoneReference::Initialize(&local_d8,pUVar3);
        if (local_d8.BoneIndex == -1) {
          if ((byte)LogPoseSearch._0_1_ < 2) {
            return -2;
          }
          if (this == (UPoseSearchSchema *)0x0) {
            ::FString::FString(&local_b8,L"None");
          }
          else {
            local_90 = (FName)this->_padding_;
            ::FName::ToString(&local_90,&local_b8);
          }
          ::FName::ToString(param_2,&local_48);
          local_88 = (FName)pUVar3->_padding_;
          ::FName::ToString(&local_88,&local_78);
          ::FName::ToString(&local_d8.BoneName,&local_58);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          local_a8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
            local_a8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
          }
          goto LAB_14a921443;
        }
      }
      uVar7 = TArray<FBoneReference,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FBoneReference_const_&>
                        ((TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)(pFVar8 + 0x18),
                         &local_d8);
      if ((0x7f < uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SchemaBoneIdx >= 0 && SchemaBoneIdx < 128",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                             ,0xdd,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        sVar6 = (*pcVar4)();
        return sVar6;
      }
      return (schar)uVar7;
    }
    if ((byte)LogPoseSearch._0_1_ < 2) {
      return -2;
    }
    if (this == (UPoseSearchSchema *)0x0) {
      ::FString::FString(&local_c8,L"None");
    }
    else {
      local_98 = (FName)this->_padding_;
      ::FName::ToString(&local_98,&local_c8);
    }
    ::FName::ToString(param_2,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    local_a8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      local_a8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
LAB_14a921443:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return -2;
}

// AddChannel @ 14a921480

void __thiscall
UPoseSearchSchema::AddChannel(UPoseSearchSchema *this,UPoseSearchFeatureChannel *param_1)

{
  TArray<TObjectPtr<UPoseSearchFeatureChannel>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPoseSearchFeatureChannel *local_18 [2];
  
  pTVar1 = &this->Channels;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPoseSearchFeatureChannel *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Channels).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Channels).ArrayNum;
  piVar2 = &(this->Channels).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Channels).ArrayNum = iVar6 + 1;
  *(UPoseSearchFeatureChannel **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UPoseSearchFeatureChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AddCurveReference @ 14a921570

/* WARNING: Enum "Type": Some values do not have unique names */

schar __thiscall
UPoseSearchSchema::AddCurveReference(UPoseSearchSchema *this,FName *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  schar sVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar7 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) goto LAB_14a9216c7;
    if (*(FName *)(pFVar7 + 0x10) == *param_2) break;
    pFVar7 = pFVar7 + 0x48;
  }
  if (pFVar7 == (FScriptContainerElement *)0x0) {
LAB_14a9216c7:
    if ((byte)LogPoseSearch._0_1_ < 2) {
      return -1;
    }
    if (this == (UPoseSearchSchema *)0x0) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      local_78 = (FName)this->_padding_;
      ::FName::ToString(&local_78,&local_60);
    }
    ::FName::ToString(param_2,&local_40);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (*(longlong *)pFVar7 != 0) {
      uVar6 = TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                        ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar7 + 0x38),param_1);
      if ((0x7f < uVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurveIdx >= 0 && CurveIdx < 128",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                             ,0xf5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        sVar5 = (*pcVar3)();
        return sVar5;
      }
      return (schar)uVar6;
    }
    if ((byte)LogPoseSearch._0_1_ < 2) {
      return -1;
    }
    if (this == (UPoseSearchSchema *)0x0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_70);
    }
    ::FName::ToString(param_2,&local_50);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    local_60.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
      local_60.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    }
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return -1;
}

// AddDefaultChannels @ 14a921790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPoseSearchSchema::AddDefaultChannels(UPoseSearchSchema *this)

{
  UClass *pUVar1;
  UPoseSearchFeatureChannel *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UPoseSearchFeatureChannel *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  AddChannel(this,pUVar2);
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UPoseSearchFeatureChannel *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  AddChannel(this,pUVar2);
  Finalize(this);
  return;
}

// AddSkeleton @ 14a921bf0

void __thiscall
UPoseSearchSchema::AddSkeleton
          (UPoseSearchSchema *this,USkeleton *param_1,UMirrorDataTable *param_2,FName *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar3 = (this->Skeletons).ArrayNum;
  piVar1 = &(this->Skeletons).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&(this->Skeletons).AllocatorInstance,piVar1);
  }
  (this->Skeletons).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Skeletons).AllocatorInstance.Data + (longlong)iVar3 * 0x48;
  DefaultConstructItems<FPoseSearchRoledSkeleton,int>(pFVar2,1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(USkeleton **)pFVar2 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMirrorDataTable *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UMirrorDataTable **)(pFVar2 + 8) = param_2;
  *(FName *)(pFVar2 + 0x10) = *param_3;
  return;
}

// AddTemporaryChannel @ 14a921cb0

void __thiscall
UPoseSearchSchema::AddTemporaryChannel(UPoseSearchSchema *this,UPoseSearchFeatureChannel *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPoseSearchFeatureChannel *local_18 [2];
  
  (**(code **)(param_1->_padding_ + 0x2b0))(param_1,this);
  local_18[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->FinalizedChannels).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->FinalizedChannels).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FinalizedChannels).ArrayNum;
  piVar1 = &(this->FinalizedChannels).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->FinalizedChannels).AllocatorInstance,piVar1);
  }
  (this->FinalizedChannels).ArrayNum = iVar5 + 1;
  *(UPoseSearchFeatureChannel **)
   ((this->FinalizedChannels).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UPoseSearchFeatureChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AllRoledSkeletonHaveMirrorDataTable @ 14a9223f0

bool __thiscall UPoseSearchSchema::AllRoledSkeletonHaveMirrorDataTable(UPoseSearchSchema *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar3 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)(pFVar3 + 8) == 0) {
      return false;
    }
    pFVar3 = pFVar3 + 0x48;
  }
  return true;
}

// AreSkeletonsCompatible @ 14a923410

bool __thiscall
UPoseSearchSchema::AreSkeletonsCompatible(UPoseSearchSchema *this,UPoseSearchSchema *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = (this->Skeletons).ArrayNum;
  if (iVar1 == (param_1->Skeletons).ArrayNum) {
    uVar7 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar9 = ~uVar7 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar7 < (param_1->Skeletons).ArrayNum) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar2 = (param_1->Skeletons).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (this->Skeletons).ArrayNum) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(longlong *)((this->Skeletons).AllocatorInstance.Data + lVar8) !=
            *(longlong *)(pFVar2 + lVar8)) goto LAB_14a92359f;
        uVar6 = 0;
        if ((int)uVar7 < (param_1->Skeletons).ArrayNum) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar2 = (param_1->Skeletons).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (this->Skeletons).ArrayNum) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(longlong *)((this->Skeletons).AllocatorInstance.Data + lVar8 + 0x10) !=
            *(longlong *)(pFVar2 + lVar8 + 0x10)) goto LAB_14a92359f;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x48;
      } while ((int)uVar7 < (this->Skeletons).ArrayNum);
    }
    bVar4 = true;
  }
  else {
LAB_14a92359f:
    bVar4 = false;
  }
  return bVar4;
}

// BuildQuery @ 14a923690

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<float_const_,int> * __thiscall
UPoseSearchSchema::BuildQuery
          (UPoseSearchSchema *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          FSearchContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UPoseSearchSchema::BuildQuery(UE::PoseSearch::FSearchContext_&)const_::_2_::FStat_STAT_PoseSearch_BuildQuery>
  FVar10;
  TArrayView<float_const_,int> *pTVar11;
  TArrayView<float,int> *pTVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FCachedQuery *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  TArrayView<float,int> local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PoseSearch_BuildQuery ==
        (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UPoseSearchSchema::BuildQuery(UE::PoseSearch::FSearchContext_&)const_::_2_::FStat_STAT_PoseSearch_BuildQuery>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_PoseSearch_BuildQuery");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_BuildQuery,*pFVar9,
                 L"STAT_PoseSearch_BuildQuery","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_PoseSearch_BuildQuery;
  if (StatPtr_STAT_PoseSearch_BuildQuery ==
      (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UPoseSearchSchema::BuildQuery(UE::PoseSearch::FSearchContext_&)const_::_2_::FStat_STAT_PoseSearch_BuildQuery>
       )0x0) {
    pFVar9 = ::FName::FName(&local_78,"STAT_PoseSearch_BuildQuery");
    FVar10 = (FThreadSafeStaticStat<_public:_class_TArrayView<float_const_,int>___cdecl_UPoseSearchSchema::BuildQuery(UE::PoseSearch::FSearchContext_&)const_::_2_::FStat_STAT_PoseSearch_BuildQuery>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PoseSearch_BuildQuery,*pFVar9,
                          L"STAT_PoseSearch_BuildQuery","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                   ,0x23);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar15.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_14a923811;
    }
  }
  bVar5 = false;
  FVar16 = local_70;
LAB_14a923811:
  iVar8 = (param_1->CachedQueries).ArrayNum;
  piVar1 = &(param_1->CachedQueries).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedQuery>_>
                      (0x818,&(param_1->CachedQueries).AllocatorInstance,piVar1);
  }
  (param_1->CachedQueries).ArrayNum = iVar8 + 1;
  pFVar14 = (param_1->CachedQueries).AllocatorInstance.SecondaryData.Data;
  if (pFVar14 == (FCachedQuery *)0x0) {
    pFVar14 = (FCachedQuery *)&param_1->CachedQueries;
  }
  UE::PoseSearch::FCachedQuery::FCachedQuery(pFVar14 + iVar8,this);
  pFVar17 = (this->FinalizedChannels).AllocatorInstance.Data;
  iVar8 = (this->FinalizedChannels).ArrayNum;
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TArrayView<float_const_,int> *)(*pcVar3)();
    return pTVar11;
  }
  pFVar2 = pFVar17 + (longlong)iVar8 * 8;
  for (; pFVar17 != pFVar2; pFVar17 = pFVar17 + 8) {
    (**(code **)(**(longlong **)pFVar17 + 0x2b8))(*(longlong **)pFVar17,param_1);
  }
  pTVar12 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_50);
  iVar8 = pTVar12->ArrayNum;
  __return_storage_ptr__->DataPtr = pTVar12->DataPtr;
  __return_storage_ptr__->ArrayNum = iVar8;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// Finalize @ 14a928350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPoseSearchSchema::Finalize(UPoseSearchSchema *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  FIdentityFunctor FVar8;
  bool bVar9;
  schar sVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108 [2];
  ushort local_106;
  ushort local_104 [2];
  longlong local_100;
  uint local_f8;
  FScriptContainerElement *local_f0;
  FBoneReference local_e8;
  FString local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FScriptContainerElement *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  ResetFinalize(this);
  uVar17 = 0;
  uVar14 = uVar17;
  uVar21 = uVar17;
  if (0 < (this->Skeletons).ArrayNum) {
    do {
      uVar15 = (uint)uVar14;
      uVar16 = 0;
      if ((int)uVar15 < (this->Skeletons).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar20 = (this->Skeletons).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      uVar14 = uVar21 + 0x48;
      uVar16 = uVar15;
      if ((int)uVar15 < (this->Skeletons).ArrayNum) {
        do {
          uVar12 = 0;
          if ((int)uVar16 < (this->Skeletons).ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(longlong *)((this->Skeletons).AllocatorInstance.Data + uVar14 + 0x10) ==
              *(longlong *)(pFVar20 + uVar21 + 0x10)) {
            if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a928700;
            ::FName::ToString((FName *)(pFVar20 + uVar21 + 0x10),&local_58);
            local_c8 = (FName)this->_padding_;
            ::FName::ToString(&local_c8,&local_98);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
            local_88.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
              local_88.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
            }
            goto LAB_14a9286f6;
          }
          uVar16 = uVar16 + 1;
          uVar14 = uVar14 + 0x48;
        } while ((int)uVar16 < (this->Skeletons).ArrayNum);
      }
      local_e8.BoneName.ComparisonIndex.Value = 0;
      local_e8.BoneName.Number = 0;
      local_e8.bUseSkeletonIndex = 0;
      local_e8.BoneIndex = -1;
      local_e8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      sVar10 = AddBoneReference(this,&local_e8,(FName *)(pFVar20 + uVar21 + 0x10),true);
      if (sVar10 != '\0') {
        if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a928700;
        local_c0 = (FName)this->_padding_;
        ::FName::ToString(&local_c0,&local_88);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        goto LAB_14a9286f6;
      }
      uVar14 = (ulonglong)uVar15;
      uVar21 = uVar21 + 0x48;
    } while ((int)uVar15 < (this->Skeletons).ArrayNum);
  }
  pFVar18 = (this->Channels).AllocatorInstance.Data;
  iVar2 = (this->Channels).ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar2) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TObjectPtr<UPoseSearchFeatureChannel>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar20) break;
    if (*(longlong *)pFVar18 != 0) {
      pFVar3 = (this->FinalizedChannels).AllocatorInstance.Data;
      if (((pFVar3 <= pFVar18) &&
          (pFVar18 < pFVar3 + (longlong)(this->FinalizedChannels).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (this->FinalizedChannels).ArrayNum;
      piVar1 = &(this->FinalizedChannels).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->FinalizedChannels).AllocatorInstance,piVar1);
      }
      pFVar3 = (this->FinalizedChannels).AllocatorInstance.Data;
      (this->FinalizedChannels).ArrayNum = iVar13 + 1;
      pUVar4 = *(UObject **)pFVar18;
      *(UObject **)(pFVar3 + (longlong)iVar13 * 8) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      cVar11 = (**(code **)(**(longlong **)pFVar18 + 0x2b0))(*(longlong **)pFVar18,this);
      if (cVar11 == '\0') {
        if (1 < (byte)LogPoseSearch._0_1_) {
          if (*(longlong *)pFVar18 == 0) {
            ::FString::FString(&local_d8,L"None");
          }
          else {
            local_b8 = *(FName *)(*(longlong *)pFVar18 + 0x18);
            ::FName::ToString(&local_b8,&local_d8);
          }
          local_b0 = (FName)this->_padding_;
          ::FName::ToString(&local_b0,&local_78);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          local_88.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
            local_88.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
          }
LAB_14a9286f6:
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
LAB_14a928700:
        ResetFinalize(this);
        return;
      }
    }
    pFVar18 = pFVar18 + 8;
  }
  uVar14 = uVar17;
  if (0 < (this->FinalizedChannels).ArrayNum) {
    do {
      uVar15 = (uint)uVar17;
      uVar16 = 0;
      if ((int)uVar15 < (this->FinalizedChannels).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar5 = *(longlong **)((this->FinalizedChannels).AllocatorInstance.Data + uVar14);
      (**(code **)(*plVar5 + 0x2d0))(plVar5,this);
      uVar17 = (ulonglong)(uVar15 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar15 + 1) < (this->FinalizedChannels).ArrayNum);
  }
  pFVar18 = (this->FinalizedChannels).AllocatorInstance.Data;
  iVar2 = (this->FinalizedChannels).ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->FinalizedChannels).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPoseSearchFeatureChannel>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar18 == pFVar20) goto LAB_14a92880c;
    if ((*(longlong *)pFVar18 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChannelPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                           ,0x145,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    cVar11 = (**(code **)(**(longlong **)pFVar18 + 0x2d8))();
    if (cVar11 != '\0') break;
    pFVar18 = pFVar18 + 8;
  }
  UPoseSearchFeatureChannel_PermutationTime::FindOrAddToSchema(this);
LAB_14a92880c:
  if ((this->bAddDataPadding != false) && (uVar16 = this->SchemaCardinality & 3, uVar16 != 0)) {
    UPoseSearchFeatureChannel_Padding::AddToSchema(this,uVar16);
  }
  local_f8 = (this->Skeletons).ArrayNum;
  uVar14 = (ulonglong)(int)local_f8;
  pFVar18 = (this->Skeletons).AllocatorInstance.Data;
  local_a0 = pFVar18 + uVar14 * 0x48;
  pFVar20 = pFVar18 + 0x20;
  do {
    pFVar3 = local_a0;
    local_f0 = pFVar18;
    if ((this->Skeletons).ArrayNum != (int)uVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar18 == pFVar3) {
      return;
    }
    iVar2 = *(int *)pFVar20;
    lVar22 = *(longlong *)(pFVar20 + -8);
    local_100 = (longlong)iVar2 * 0x10 + lVar22;
    lVar19 = local_100;
    while( true ) {
      if (*(int *)pFVar20 != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      FVar8 = local_res8[0];
      if (lVar22 == lVar19) break;
      if (((*(uint *)(lVar22 + 8) & 0x7fffffff) == 0x7fffffff) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneRef.HasValidSetup()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                             ,0x15f,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_106 = (ushort)(*(int *)(lVar22 + 8) * 2 >> 1);
      TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pFVar20 + 8),&local_106);
      lVar6 = *(longlong *)(pFVar20 + -0x18);
      if (lVar6 == 0) {
LAB_14a9289d8:
        lVar22 = lVar22 + 0x10;
      }
      else {
        uVar16 = *(int *)(lVar22 + 8) * 2 >> 1;
        if (((int)uVar16 < 0) || (*(int *)(lVar6 + 0xe0) <= (int)uVar16)) {
          lVar19 = local_100;
          if (2 < (byte)LogPoseSearch._0_1_) {
            local_a8 = (FName)this->_padding_;
            ::FName::ToString(&local_a8,&local_68);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
            lVar19 = local_100;
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
              lVar19 = local_100;
            }
          }
          goto LAB_14a9289d8;
        }
        uVar15 = 0;
        if ((int)uVar16 < *(int *)(lVar6 + 0xe0)) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = *(int *)(*(longlong *)(lVar6 + 0xd8) + (longlong)(int)uVar16 * 4);
        lVar19 = local_100;
        if (iVar13 == -1) goto LAB_14a9289d8;
        local_104[0] = (ushort)iVar13;
        TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                  ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pFVar20 + 8),local_104);
        lVar22 = lVar22 + 0x10;
        lVar19 = local_100;
      }
    }
    if ((*(int *)(pFVar20 + 0x10) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!RoledSkeleton.BoneIndicesWithParents_DEPRECATED.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                           ,0x174,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
              (*(ushort **)(pFVar20 + 8),*(int *)(pFVar20 + 0x10),FVar8,(TLess<void> *)local_108);
    pFVar18 = local_f0;
    FAnimationRuntime::EnsureParentsPresent
              ((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pFVar20 + 8),
               (FReferenceSkeleton *)(*(longlong *)local_f0 + 0x48));
    uVar14 = (ulonglong)local_f8;
    pFVar18 = pFVar18 + 0x48;
    pFVar20 = pFVar20 + 0x48;
  } while( true );
}

// GetBoneReferences @ 14a92af40

TArrayView<FBoneReference_const_,int> * __thiscall
UPoseSearchSchema::GetBoneReferences
          (UPoseSearchSchema *this,TArrayView<FBoneReference_const_,int> *__return_storage_ptr__,
          FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FBoneReference_const_,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar6 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(FName *)(pFVar6 + 0x10) == *param_1) {
      if (pFVar6 == (FScriptContainerElement *)0x0) {
LAB_14a92afa9:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RoledSkeleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchSchema.cpp"
                           ,0xa9,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TArrayView<FBoneReference_const_,int> *)(*pcVar3)();
          return pTVar5;
        }
      }
      iVar2 = *(int *)(pFVar6 + 0x20);
      __return_storage_ptr__->DataPtr = *(FBoneReference **)(pFVar6 + 0x18);
      if ((iVar2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FBoneReference_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
      __return_storage_ptr__->ArrayNum = iVar2;
      return __return_storage_ptr__;
    }
    pFVar6 = pFVar6 + 0x48;
  }
  pFVar6 = (FScriptContainerElement *)0x0;
  goto LAB_14a92afa9;
}

// GetDefaultRole @ 14a92b8f0

FName __thiscall UPoseSearchSchema::GetDefaultRole(UPoseSearchSchema *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  FName in_RDX;
  
  iVar1 = (this->Skeletons).ArrayNum;
  if (iVar1 == 0) {
    *(FName *)in_RDX = UE::PoseSearch::DefaultRole;
    return in_RDX;
  }
  if (iVar1 < 1) {
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
  *(FName *)in_RDX = *(FName *)((this->Skeletons).AllocatorInstance.Data + 0x10);
  return in_RDX;
}

// GetMirrorDataTable @ 14a92bc80

UMirrorDataTable * __thiscall
UPoseSearchSchema::GetMirrorDataTable(UPoseSearchSchema *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMirrorDataTable *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar4 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) goto LAB_14a92bcd6;
    if (*(FName *)(pFVar4 + 0x10) == *param_1) break;
    pFVar4 = pFVar4 + 0x48;
  }
  if (pFVar4 == (FScriptContainerElement *)0x0) {
LAB_14a92bcd6:
    pUVar3 = (UMirrorDataTable *)0x0;
  }
  else {
    pUVar3 = *(UMirrorDataTable **)(pFVar4 + 8);
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 14a92c1d0

UClass * __cdecl UPoseSearchSchema::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchSchema",
               &Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton,
               StaticRegisterNativesUPoseSearchSchema,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseSearchSchema>,
               InternalVTableHelperCtorCaller<UPoseSearchSchema>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchSchema.InnerSingleton;
}

// GetRoledSkeleton @ 14a92c510

FPoseSearchRoledSkeleton * __thiscall
UPoseSearchSchema::GetRoledSkeleton(UPoseSearchSchema *this,FName *param_1)

{
  FPoseSearchRoledSkeleton *pFVar1;
  int iVar2;
  FPoseSearchRoledSkeleton *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar3 = (FPoseSearchRoledSkeleton *)(this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->Role == *param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FPoseSearchRoledSkeleton *)0x0;
}

// GetRoledSkeleton @ 14a92c580

FPoseSearchRoledSkeleton * __thiscall
UPoseSearchSchema::GetRoledSkeleton(UPoseSearchSchema *this,FName *param_1)

{
  FPoseSearchRoledSkeleton *pFVar1;
  int iVar2;
  FPoseSearchRoledSkeleton *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar3 = (FPoseSearchRoledSkeleton *)(this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->Role == *param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FPoseSearchRoledSkeleton *)0x0;
}

// GetSkeleton @ 14a92ca30

USkeleton * __thiscall UPoseSearchSchema::GetSkeleton(UPoseSearchSchema *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeleton *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar4 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) goto LAB_14a92ca85;
    if (*(FName *)(pFVar4 + 0x10) == *param_1) break;
    pFVar4 = pFVar4 + 0x48;
  }
  if (pFVar4 == (FScriptContainerElement *)0x0) {
LAB_14a92ca85:
    pUVar3 = (USkeleton *)0x0;
  }
  else {
    pUVar3 = *(USkeleton **)pFVar4;
  }
  return pUVar3;
}

// InitBoneContainersFromRoledSkeleton @ 14a92e760

void __thiscall
UPoseSearchSchema::InitBoneContainersFromRoledSkeleton
          (UPoseSearchSchema *this,
          TMap<FName,FBoneContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TKeyInitializer<FName_const_&> local_res10;
  FScriptContainerElement *local_res18;
  FCurveFilterSettings local_58;
  TArrayView<unsigned_short_const_,int> local_48;
  
  TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
           *)param_1);
  TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
             *)param_1,(this->Skeletons).ArrayNum);
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar9 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    local_res18 = pFVar9 + 0x10;
    TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,FBoneContainer>,TDefaultMapHashableKeyFuncs<FName,FBoneContainer,0>,FDefaultSetAllocator>
                *)param_1,&local_res10,(bool *)&local_res18);
    lVar8 = (longlong)(int)local_res10.Key;
    iVar3 = *(int *)(pFVar9 + 0x30);
    pUVar4 = *(UObject **)pFVar9;
    local_58.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar9 + 0x38);
    local_58.FilterMode = AllowOnlyFiltered;
    lVar5 = *(longlong *)param_1;
    local_48.DataPtr = *(ushort **)(pFVar9 + 0x28);
    local_58.LODIndex = 0;
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_48.ArrayNum = iVar3;
    FBoneContainer::InitializeTo
              ((FBoneContainer *)(lVar8 * 0x168 + lVar5 + 8),&local_48,&local_58,pUVar4);
    pFVar9 = pFVar9 + 0x48;
  }
  return;
}

// PostLoad @ 14a936580

void __thiscall UPoseSearchSchema::PostLoad(UPoseSearchSchema *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar3 = (this->Skeletons).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UObject **)(pFVar3 + 8) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar3 + 8));
    }
    pFVar3 = pFVar3 + 0x48;
  }
  Finalize(this);
  return;
}

// ResetFinalize @ 14a93ad00

void __thiscall UPoseSearchSchema::ResetFinalize(UPoseSearchSchema *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Skeletons).ArrayNum;
  pFVar4 = (this->Skeletons).AllocatorInstance.Data;
  pFVar3 = pFVar4 + 0x20;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Skeletons).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPoseSearchRoledSkeleton,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    *(undefined4 *)pFVar3 = 0;
    if (*(int *)(pFVar3 + 4) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)(pFVar3 + -8),0,(int *)(pFVar3 + 4));
    }
    *(undefined4 *)(pFVar3 + 0x10) = 0;
    if (*(int *)(pFVar3 + 0x14) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)(pFVar3 + 8),0,(int *)(pFVar3 + 0x14));
    }
    pFVar4 = pFVar4 + 0x48;
    pFVar3 = pFVar3 + 0x48;
  }
  (this->FinalizedChannels).ArrayNum = 0;
  if ((this->FinalizedChannels).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FinalizedChannels).AllocatorInstance,0,
               &(this->FinalizedChannels).ArrayMax);
  }
  this->SchemaCardinality = 0;
  return;
}

// StaticRegisterNativesUPoseSearchSchema @ 14a93ee60

void __cdecl UPoseSearchSchema::StaticRegisterNativesUPoseSearchSchema(void)

{
  return;
}

