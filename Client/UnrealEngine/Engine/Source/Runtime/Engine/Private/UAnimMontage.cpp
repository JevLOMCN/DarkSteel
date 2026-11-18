// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 71

// StaticClass @ 147494c00

UClass * __cdecl UAnimMontage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimMontage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimMontage",
               &Z_Registration_Info_UClass_UAnimMontage.InnerSingleton,
               StaticRegisterNativesUAnimMontage,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimMontage>,InternalVTableHelperCtorCaller<UAnimMontage>,
               local_res8,UAnimCompositeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimMontage.InnerSingleton;
}

// UAnimMontage @ 1474b38d0

UAnimMontage * __thiscall UAnimMontage::UAnimMontage(UAnimMontage *this,FVTableHelper *param_1)

{
  float fVar1;
  
  UAnimCompositeBase::UAnimCompositeBase((UAnimCompositeBase *)this,param_1);
  fVar1 = __real_3e4ccccd;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  FAlphaBlend::FAlphaBlend(&this->BlendIn,fVar1);
  FAlphaBlend::FAlphaBlend(&this->BlendOut,__real_3e4ccccd);
  (this->TimeStretchCurve).SamplingRate = 60.0;
  (this->SyncGroup).ComparisonIndex = 0;
  (this->SyncGroup).Number = 0;
  (this->MarkerData).AuthoredSyncMarkers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerData).AuthoredSyncMarkers.ArrayNum = 0;
  (this->MarkerData).AuthoredSyncMarkers.ArrayMax = 0;
  (this->MarkerData).UniqueMarkerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerData).UniqueMarkerNames.ArrayNum = 0;
  (this->MarkerData).UniqueMarkerNames.ArrayMax = 0;
  (this->CompositeSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompositeSections).ArrayNum = 0;
  (this->CompositeSections).ArrayMax = 0;
  (this->SlotAnimTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotAnimTracks).ArrayNum = 0;
  (this->SlotAnimTracks).ArrayMax = 0;
  (this->BlendProfileIn).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->BlendProfileOut).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->BranchingPointMarkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchingPointMarkers).ArrayNum = 0;
  (this->BranchingPointMarkers).ArrayMax = 0;
  (this->BranchingPointStateNotifyIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchingPointStateNotifyIndices).ArrayNum = 0;
  (this->BranchingPointStateNotifyIndices).ArrayMax = 0;
  (this->TimeStretchCurve).Markers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeStretchCurve).Markers.ArrayNum = 0;
  (this->TimeStretchCurve).Markers.ArrayMax = 0;
  (this->TimeStretchCurve).Sum_dT_i_by_C_i[0] = 0.0;
  (this->TimeStretchCurve).Sum_dT_i_by_C_i[1] = 0.0;
  (this->TimeStretchCurve).Sum_dT_i_by_C_i[2] = 0.0;
  (this->TimeStretchCurveName).ComparisonIndex = 0;
  (this->TimeStretchCurveName).Number = 0;
  (this->TimeStretchCurve).CurveValueMinPrecision = 0.01;
  return this;
}

// UAnimMontage @ 1474b39e0

UAnimMontage * __thiscall UAnimMontage::UAnimMontage(UAnimMontage *this,FObjectInitializer *param_1)

{
  TArray<FSlotAnimationTrack,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  UAnimMontage *pUVar9;
  
  UAnimCompositeBase::UAnimCompositeBase((UAnimCompositeBase *)this,param_1);
  fVar4 = __real_3e4ccccd;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  FAlphaBlend::FAlphaBlend(&this->BlendIn,fVar4);
  FAlphaBlend::FAlphaBlend(&this->BlendOut,__real_3e4ccccd);
  fVar4 = __real_3e800000;
  pTVar1 = &this->SlotAnimTracks;
  (this->TimeStretchCurve).SamplingRate = 60.0;
  piVar2 = &(this->SlotAnimTracks).ArrayNum;
  (this->SlotAnimTracks).ArrayMax = 0;
  *piVar2 = 0;
  (this->SyncGroup).ComparisonIndex = 0;
  (this->SyncGroup).Number = 0;
  (this->MarkerData).AuthoredSyncMarkers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerData).AuthoredSyncMarkers.ArrayNum = 0;
  (this->MarkerData).AuthoredSyncMarkers.ArrayMax = 0;
  (this->MarkerData).UniqueMarkerNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerData).UniqueMarkerNames.ArrayNum = 0;
  (this->MarkerData).UniqueMarkerNames.ArrayMax = 0;
  (this->CompositeSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompositeSections).ArrayNum = 0;
  (this->CompositeSections).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BlendProfileIn).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->BlendProfileOut).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->BranchingPointMarkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchingPointMarkers).ArrayNum = 0;
  (this->BranchingPointMarkers).ArrayMax = 0;
  (this->BranchingPointStateNotifyIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchingPointStateNotifyIndices).ArrayNum = 0;
  (this->BranchingPointStateNotifyIndices).ArrayMax = 0;
  (this->TimeStretchCurve).CurveValueMinPrecision = 0.01;
  (this->TimeStretchCurve).Markers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeStretchCurve).Markers.ArrayNum = 0;
  (this->TimeStretchCurve).Markers.ArrayMax = 0;
  (this->TimeStretchCurve).Sum_dT_i_by_C_i[0] = 0.0;
  (this->TimeStretchCurve).Sum_dT_i_by_C_i[1] = 0.0;
  (this->TimeStretchCurve).Sum_dT_i_by_C_i[2] = 0.0;
  (this->TimeStretchCurveName).ComparisonIndex = 0;
  (this->TimeStretchCurveName).Number = 0;
  this->BlendModeIn = Standard;
  this->BlendModeOut = Standard;
  FAlphaBlend::SetBlendTime(&this->BlendIn,fVar4);
  FAlphaBlend::SetBlendTime(&this->BlendOut,__real_3e800000);
  this->BlendOutTriggerTime = -1.0;
  this->bEnableAutoBlendOut = true;
  this->SyncSlotIndex = 0;
  (this->BlendProfileIn).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->BlendProfileOut).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  FVar5 = FAnimSlotGroup::DefaultSlotName;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,&pTVar1->AllocatorInstance,piVar2,&(this->SlotAnimTracks).ArrayMax);
  DefaultConstructItems<FSlotAnimationTrack,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x18,1);
  uVar8 = 0;
  if ((int)uVar7 < *piVar2) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UAnimMontage *)(*pcVar3)();
      return pUVar9;
    }
  }
  *(FName *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x18) = FVar5;
  uVar8 = 0;
  if ((int)uVar7 < (this->SlotAnimTracks).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UAnimMontage *)(*pcVar3)();
      return pUVar9;
    }
  }
  this->TimeStretchCurveName = MontageFNames::TimeStretchCurveName;
  return this;
}

// ~UAnimMontage @ 1474b54a0

void __thiscall UAnimMontage::~UAnimMontage(UAnimMontage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->TimeStretchCurve).Markers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BranchingPointStateNotifyIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BranchingPointMarkers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSlotAnimationTrack,int>
            ((FSlotAnimationTrack *)(this->SlotAnimTracks).AllocatorInstance.Data,
             (this->SlotAnimTracks).ArrayNum);
  pFVar1 = (this->SlotAnimTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCompositeSection,int>
            ((FCompositeSection *)(this->CompositeSections).AllocatorInstance.Data,
             (this->CompositeSections).ArrayNum);
  pFVar1 = (this->CompositeSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerData).UniqueMarkerNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerData).AuthoredSyncMarkers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAnimCompositeBase::~UAnimCompositeBase((UAnimCompositeBase *)this);
  return;
}

// AddBranchingPointMarker @ 1474b8d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimMontage::AddBranchingPointMarker
          (UAnimMontage *this,FBranchingPointMarker *param_1,
          TMap<float,FAnimNotifyEvent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,FAnimNotifyEvent_*,0>_>
          *param_2)

{
  int *piVar1;
  TArray<FBranchingPointMarker,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  FBranchingPointMarker *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 *puVar14;
  TPairInitializer<float_const_&,FAnimNotifyEvent_*_&&> local_res8;
  FString local_98;
  float *local_88;
  FAnimNotifyEvent ***local_80;
  FString local_78;
  FString local_68;
  FAssetLog local_58 [2];
  
  pTVar2 = &this->BranchingPointMarkers;
  pFVar7 = (FBranchingPointMarker *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar7 <= param_1) && (param_1 < pFVar7 + (this->BranchingPointMarkers).ArrayMax)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar11 = (this->BranchingPointMarkers).ArrayNum;
  piVar1 = &(this->BranchingPointMarkers).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  uVar5 = *(undefined8 *)param_1;
  (this->BranchingPointMarkers).ArrayNum = iVar11 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar8 + (longlong)iVar11 * 0xc) = uVar5;
  *(undefined4 *)(pFVar8 + (longlong)iVar11 * 0xc + 8) = *(undefined4 *)&param_1->NotifyEventType;
  fVar4 = param_1->TriggerTime;
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar14 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar14 = &param_2->field_0x38;
    }
    iVar11 = *(int *)(puVar14 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & (uint)fVar4) * 4);
    if (iVar11 != -1) {
      do {
        lVar3 = *(longlong *)param_2 + (longlong)iVar11 * 0x18;
        if (fVar4 == *(float *)(*(longlong *)param_2 + (longlong)iVar11 * 0x18)) {
          plVar12 = (longlong *)(lVar3 + 8);
          if (lVar3 == 0) {
            plVar12 = (longlong *)0x0;
          }
          if (plVar12 != (longlong *)0x0) {
            if ((byte)LogAnimMontage._0_1_ < 3) {
              return;
            }
            ::FName::ToString((FName *)(*plVar12 + 0x3c),&local_68);
            uVar6 = param_1->NotifyIndex;
            uVar13 = 0;
            if ((int)uVar6 < (int)this->_padding_) {
              uVar13 = ~uVar6 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            ::FName::ToString((FName *)((longlong)(int)uVar6 * 0xb8 + this->_padding_ + 0x3c),
                              &local_78);
            ::FString::PrintfImpl
                      (&local_98,
                       L"Branching Point \'%s\' overlaps with \'%s\' at time: %f. One of them will not get triggered!"
                      );
            local_58[0].Path = (wchar_t *)0x0;
            local_58[0].PackagePath = (FPackagePath *)0x0;
            local_58[0].Object = (UObject *)this;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogAnimMontage.field_0x4,Warning,local_58,&local_98,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0x2d0);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
            return;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 0x10);
      } while (iVar11 != -1);
    }
  }
  uVar6 = param_1->NotifyIndex;
  uVar13 = 0;
  if ((int)uVar6 < (int)this->_padding_) {
    uVar13 = ~uVar6 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_80 = &local_res8.Value;
  local_res8.Value = (FAnimNotifyEvent **)((longlong)(int)uVar6 * 0xb8 + this->_padding_);
  local_88 = &param_1->TriggerTime;
  TSet<TTuple<float,FAnimNotifyEvent_*>,TDefaultMapHashableKeyFuncs<float,FAnimNotifyEvent_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<float_const_&,FAnimNotifyEvent_*_&&>_>
            ((TSet<TTuple<float,FAnimNotifyEvent_*>,TDefaultMapHashableKeyFuncs<float,FAnimNotifyEvent_*,0>,FDefaultSetAllocator>
              *)param_2,&local_res8,(bool *)&local_88);
  return;
}

// AddSlot @ 1474b9750

FSlotAnimationTrack * __thiscall UAnimMontage::AddSlot(UAnimMontage *this,FName param_1)

{
  int *piVar1;
  TArray<FSlotAnimationTrack,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FSlotAnimationTrack *pFVar8;
  
  pTVar2 = &this->SlotAnimTracks;
  piVar1 = &(this->SlotAnimTracks).ArrayNum;
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,&pTVar2->AllocatorInstance,piVar1,&(this->SlotAnimTracks).ArrayMax);
  lVar3 = (longlong)(int)uVar6 * 0x18;
  DefaultConstructItems<FSlotAnimationTrack,int>((pTVar2->AllocatorInstance).Data + lVar3,1);
  uVar7 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlotAnimationTrack *)(*pcVar4)();
      return pFVar8;
    }
  }
  *(FName *)((pTVar2->AllocatorInstance).Data + lVar3) = param_1;
  uVar7 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlotAnimationTrack *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FSlotAnimationTrack *)((pTVar2->AllocatorInstance).Data + lVar3);
}

// CalculateOffsetFromSections @ 1474c3c10

Type __thiscall UAnimMontage::CalculateOffsetFromSections(UAnimMontage *this,float param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  Type TVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  iVar9 = 0;
  do {
    if ((iVar9 < 0) || ((this->CompositeSections).ArrayNum <= iVar9)) {
      return NoOffset;
    }
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      TVar7 = (*pcVar3)();
      return TVar7;
    }
    pFVar2 = (this->CompositeSections).AllocatorInstance.Data;
    lVar8 = (longlong)iVar9;
    FVar1 = pFVar2[lVar8 * 0x50 + 0x19];
    if (FVar1 == (FScriptContainerElement)0x0) {
LAB_1474c3cf5:
      fVar10 = *(float *)(pFVar2 + lVar8 * 0x50 + 0x24);
    }
    else if (FVar1 == (FScriptContainerElement)0x1) {
      fVar10 = *(float *)(pFVar2 + lVar8 * 0x50 + 0x24) + *(float *)(pFVar2 + lVar8 * 0x50 + 0x1c);
    }
    else {
      if (FVar1 != (FScriptContainerElement)0x2) goto LAB_1474c3cf5;
      fVar10 = *(float *)(pFVar2 + lVar8 * 0x50 + 0x24) * *(float *)(pFVar2 + lVar8 * 0x50 + 0x20) +
               *(float *)(pFVar2 + lVar8 * 0x50 + 0x1c);
    }
    if ((float)((uint)(fVar10 - param_1) & uVar5) <= fVar4) {
      return OffsetBefore;
    }
    iVar9 = iVar9 + 1;
  } while( true );
}

// CalculatePos @ 1474c3d50

float __thiscall
UAnimMontage::CalculatePos(UAnimMontage *this,FCompositeSection *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 1);
  if (cVar1 != '\0') {
    if (cVar1 == '\0') {
      return __real_bf800000 + param_2;
    }
    if (cVar1 == '\x01') {
      return *(float *)((longlong)&param_1->_padding_ + 4) +
             *(float *)((longlong)&param_1->_padding_ + 4) + param_2;
    }
    if (cVar1 == '\x02') {
      return *(float *)((longlong)&param_1->_padding_ + 4) * *(float *)&param_1->_padding_ +
             *(float *)((longlong)&param_1->_padding_ + 4) + param_2;
    }
  }
  return *(float *)((longlong)&param_1->_padding_ + 4) + param_2;
}

// CalculateSequenceLength @ 1474c3db0

float __thiscall UAnimMontage::CalculateSequenceLength(UAnimMontage *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = 0;
  fVar6 = 0.0;
  while( true ) {
    if ((iVar5 < 0) || ((this->SlotAnimTracks).ArrayNum <= iVar5)) {
      return fVar6;
    }
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar2 = (this->SlotAnimTracks).AllocatorInstance.Data;
    lVar1 = (longlong)iVar5 * 3 + 1;
    fVar7 = fVar6;
    if ((0 < *(int *)(pFVar2 + lVar1 * 8 + 8)) &&
       (fVar7 = FAnimTrack::GetLength((FAnimTrack *)(pFVar2 + lVar1 * 8)), fVar7 <= fVar6)) {
      fVar7 = fVar6;
    }
    iVar5 = iVar5 + 1;
    fVar6 = fVar7;
  }
  pcVar3 = (code *)swi(3);
  fVar6 = (float)(*pcVar3)();
  return fVar6;
}

// CanBeUsedInComposition @ 1474c42c0

bool __thiscall UAnimMontage::CanBeUsedInComposition(UAnimMontage *this)

{
  return false;
}

// CollectMarkers @ 1474c4990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimMontage::CollectMarkers(UAnimMontage *this)

{
  int *piVar1;
  FMarkerSyncData *this_00;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  FObjectPtr_u_0 *pFVar16;
  FObjectPtr_u_0 *this_01;
  undefined8 *puVar17;
  float fVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FObjectPtr_u_0 *local_res20;
  undefined8 local_78;
  float local_70;
  
  this_00 = &this->MarkerData;
  iVar3 = (this->MarkerData).AuthoredSyncMarkers.ArrayMax;
  piVar1 = &(this->MarkerData).AuthoredSyncMarkers.ArrayMax;
  (this->MarkerData).AuthoredSyncMarkers.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  if (this->SyncGroup != (FName)0x0) {
    uVar4 = this->SyncSlotIndex;
    lVar15 = (longlong)(int)uVar4;
    if (((int)uVar4 < 0) || ((this->SlotAnimTracks).ArrayNum <= (int)uVar4)) {
      if (2 < (byte)LogAnimMontage._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      }
    }
    else {
      uVar10 = 0;
      if ((int)uVar4 < (this->SlotAnimTracks).ArrayNum) {
        uVar10 = ~uVar4 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->SlotAnimTracks).AllocatorInstance.Data;
      local_res18 = *(uint *)(pFVar5 + lVar15 * 0x18 + 0x10);
      uVar13 = (ulonglong)(int)local_res18;
      this_01 = *(FObjectPtr_u_0 **)(pFVar5 + lVar15 * 0x18 + 8);
      pFVar16 = this_01 + uVar13 * 4;
      local_res20 = pFVar16;
      while( true ) {
        if (*(int *)(pFVar5 + lVar15 * 0x18 + 0x10) != (int)uVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FAnimSegment_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (this_01 == pFVar16) break;
        if (this_01->Handle != (UObject *)0x0) {
          pUVar12 = UAnimSequence::StaticClass();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar12);
          if ((bVar9) && (pUVar6 = this_01->Handle, pUVar6 != (UObject *)0x0)) {
            iVar3 = *(int *)&pUVar6[9].field_0x18;
            if (0 < iVar3) {
              puVar17 = *(undefined8 **)&pUVar6[9].field_0x10;
              puVar2 = (undefined8 *)((longlong)puVar17 + (longlong)iVar3 * 0xc);
              while( true ) {
                if (*(int *)&pUVar6[9].field_0x18 != iVar3) {
                  local_res10[0] = 0;
                  `TCheckedPointerIterator<FAnimSyncMarker_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res10);
                }
                pFVar16 = local_res20;
                if (puVar17 == puVar2) break;
                if ((*(float *)((longlong)this_01 + 0xc) <= *(float *)(puVar17 + 1)) &&
                   (*(float *)(puVar17 + 1) <= *(float *)(this_01 + 2))) {
                  fVar18 = (*(float *)(this_01 + 2) - *(float *)((longlong)this_01 + 0xc)) *
                           *(float *)((longlong)this_01 + 0x14);
                  if ((fVar18 < 0.0) &&
                     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_3541163122091883193>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                                         ,0x547,"TotalSegmentLength >= 0.f"), bVar9)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar14 = 0;
                  if (0 < *(int *)(this_01 + 3)) {
                    do {
                      local_78 = *puVar17;
                      pFVar7 = (this_00->AuthoredSyncMarkers).AllocatorInstance.Data;
                      local_70 = (*(float *)(puVar17 + 1) - *(float *)((longlong)this_01 + 0xc)) *
                                 *(float *)((longlong)this_01 + 0x14) + *(float *)(this_01 + 1) +
                                 (float)iVar14 * fVar18;
                      if (((pFVar7 <= (FScriptContainerElement *)&local_78) &&
                          ((FScriptContainerElement *)&local_78 <
                           pFVar7 + (longlong)(this->MarkerData).AuthoredSyncMarkers.ArrayMax * 0xc)
                          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar9)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar11 = (this->MarkerData).AuthoredSyncMarkers.ArrayNum;
                      if (iVar11 == (this->MarkerData).AuthoredSyncMarkers.ArrayMax) {
                        iVar11 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x40c,(ForAnyElementType *)this_00,piVar1);
                      }
                      (this->MarkerData).AuthoredSyncMarkers.ArrayNum = iVar11 + 1;
                      iVar14 = iVar14 + 1;
                      pFVar7 = (this_00->AuthoredSyncMarkers).AllocatorInstance.Data;
                      *(undefined8 *)(pFVar7 + (longlong)iVar11 * 0xc) = local_78;
                      *(float *)(pFVar7 + (longlong)iVar11 * 0xc + 8) = local_70;
                    } while (iVar14 < *(int *)(this_01 + 3));
                  }
                }
                puVar17 = (undefined8 *)((longlong)puVar17 + 0xc);
              }
            }
          }
        }
        this_01 = this_01 + 4;
        uVar13 = (ulonglong)local_res18;
      }
      FMarkerSyncData::CollectUniqueNames(this_00);
    }
  }
  return;
}

// ContainRecursive @ 1474c8ef0

bool __thiscall
UAnimMontage::ContainRecursive
          (UAnimMontage *this,TArray<UAnimCompositeBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  UAnimMontage *local_28 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  for (pFVar6 = pFVar1; pFVar6 != pFVar1 + (longlong)param_1->ArrayNum * 8; pFVar6 = pFVar6 + 8) {
    if (*(UAnimMontage **)pFVar6 == this) {
      return true;
    }
  }
  local_28[0] = this;
  if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
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
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  *(UAnimMontage **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  iVar5 = (this->SlotAnimTracks).ArrayNum;
  pFVar6 = (this->SlotAnimTracks).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->SlotAnimTracks).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FSlotAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    bVar3 = FAnimTrack::ContainRecursive((FAnimTrack *)(pFVar6 + 8),param_1);
    if (bVar3) {
      return true;
    }
    pFVar6 = pFVar6 + 0x18;
  }
  return false;
}

// ConvertBranchingPointsToAnimNotifies @ 1474c9150

void __thiscall UAnimMontage::ConvertBranchingPointsToAnimNotifies(UAnimMontage *this)

{
  return;
}

// CreateSlotAnimationAsDynamicMontage @ 1474ca040

UAnimMontage * __cdecl
UAnimMontage::CreateSlotAnimationAsDynamicMontage
          (UAnimSequenceBase *param_1,FName param_2,float param_3,float param_4,float param_5,
          int param_6,float param_7,float param_8)

{
  UAnimMontage *pUVar1;
  TObjectPtr<UBlendProfile>_u_0 local_58;
  FAlphaBlendArgs local_50;
  undefined1 local_40;
  TObjectPtr<UBlendProfile>_u_0 local_38;
  FAlphaBlendArgs local_30;
  undefined1 local_20;
  
  local_38.DebugPtr = (UBlendProfile *)0x0;
  FAlphaBlendArgs::FAlphaBlendArgs(&local_30,param_3);
  local_20 = 0;
  local_58.DebugPtr = (UBlendProfile *)0x0;
  FAlphaBlendArgs::FAlphaBlendArgs(&local_50,param_4);
  local_40 = 0;
  pUVar1 = CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                     (param_1,param_2,(FMontageBlendSettings *)&local_38.ObjectPtr,
                      (FMontageBlendSettings *)&local_58.ObjectPtr,param_5,param_6,param_7);
  return pUVar1;
}

// CreateSlotAnimationAsDynamicMontage_WithBlendSettings @ 1474ca0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimMontage * __cdecl
UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings
          (UAnimSequenceBase *param_1,FName param_2,FMontageBlendSettings *param_3,
          FMontageBlendSettings *param_4,float param_5,int param_6,float param_7)

{
  FName *pFVar1;
  int *piVar2;
  TArray<FCompositeSection,TSizedDefaultAllocator<32>_> *pTVar3;
  USkeleton *pUVar4;
  FName *pFVar5;
  FName FVar6;
  FAnimLinkableElement *pFVar7;
  UBlendProfile *pUVar8;
  code *pcVar9;
  TObjectPtr<UAnimMetaData> *pTVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  UAnimMontage *pUVar17;
  FAlphaBlend *pFVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_228 [32];
  TObjectPtr<UAnimSequenceBase>_u_0 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  int local_1c0;
  FScriptContainerElement local_1bc;
  FAnimLinkableElement local_1b8;
  FName local_188;
  undefined8 local_180;
  TObjectPtr<UAnimMetaData> *local_178;
  undefined8 local_170;
  undefined8 local_168;
  FString local_160;
  FName local_150;
  FName local_148;
  undefined1 local_140 [8];
  FAlphaBlend local_138;
  FAlphaBlend local_108;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (param_1 == (UAnimSequenceBase *)0x0) {
LAB_1474ca78a:
    if (2 < (byte)LogAnimMontage._0_1_) {
      if (param_1 == (UAnimSequenceBase *)0x0) {
        ::FString::FString(&local_160,L"None");
      }
      else {
        local_148 = (FName)param_1->_padding_;
        ::FName::ToString(&local_148,&local_160);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    return (UAnimMontage *)0x0;
  }
  pUVar15 = StaticClass();
  iVar14 = (int)pUVar15->_padding_;
  if ((iVar14 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar14 * 8)
      == &pUVar15->_padding_)) goto LAB_1474ca78a;
  local_168 = 0;
  if (param_2 == (FName)0x0) {
    if ((byte)LogAnimMontage._0_1_ < 3) {
      return (UAnimMontage *)0x0;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
    return (UAnimMontage *)0x0;
  }
  pUVar4 = (USkeleton *)param_1->_padding_;
  cVar11 = (**(code **)(param_1->_padding_ + 0x3c0))(param_1);
  if (cVar11 == '\0') {
    if ((byte)LogAnimMontage._0_1_ < 3) {
      return (UAnimMontage *)0x0;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
    return (UAnimMontage *)0x0;
  }
  pUVar16 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar16,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar15 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar15);
  local_d8._8_8_ = pUVar16;
  pUVar17 = (UAnimMontage *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar19 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  UAnimationAsset::SetSkeleton((UAnimationAsset *)pUVar17,pUVar4);
  if (((pUVar17->SlotAnimTracks).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar17 = (UAnimMontage *)(*pcVar9)();
    return pUVar17;
  }
  uStack_1c8 = _UNK_150689648;
  local_1d0 = ___xmm_3f800000000000000000000000000000;
  pFVar5 = (FName *)(pUVar17->SlotAnimTracks).AllocatorInstance.Data;
  *pFVar5 = param_2;
  local_1d8.DebugPtr = (UAnimSequenceBase *)0x0;
  local_1c0 = 1;
  local_1bc = (FScriptContainerElement)0x1;
  FAnimSegment::SetAnimReference((FAnimSegment *)&local_1d8.ObjectPtr,param_1,true);
  local_1c0 = param_6;
  fVar22 = __real_3f800000;
  if (local_1d8.DebugPtr != (UAnimSequenceBase *)0x0) {
    fVar22 = (local_1d8.DebugPtr)->RateScale;
  }
  fVar23 = __real_3f800000;
  if (__real_322bcc77 <
      (float)((uint)(uStack_1c8._4_4_ * fVar22) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar23 = uStack_1c8._4_4_ * fVar22;
  }
  pFVar1 = pFVar5 + 1;
  *(float *)&pUVar17->_padding_ =
       (((float)uStack_1c8 - local_1d0._4_4_) * (float)param_6) /
       (float)((uint)fVar23 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if ((((ulonglong)*pFVar1 <= &local_1d8) &&
      (&local_1d8 <
       (TObjectPtr<UAnimSequenceBase>_u_0 *)
       ((longlong)*pFVar1 + (longlong)(int)pFVar5[2].Number * 0x20))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar17 = (UAnimMontage *)(*pcVar9)();
    return pUVar17;
  }
  uVar13 = pFVar5[2].ComparisonIndex.Value;
  if (uVar13 == pFVar5[2].Number) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)pFVar1,(int *)&pFVar5[2].Number);
  }
  pFVar5[2].ComparisonIndex.Value = uVar13 + 1;
  FVar6 = *pFVar1;
  lVar21 = (longlong)(int)uVar13 * 0x20;
  ((TObjectPtr<UAnimSequenceBase>_u_0 *)((longlong)FVar6 + lVar21))->DebugPtr =
       (UAnimSequenceBase *)local_1d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1d8.DebugPtr != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d8.DebugPtr);
  }
  *(undefined4 *)((longlong)FVar6 + lVar21 + 8) = (undefined4)local_1d0;
  *(float *)((longlong)FVar6 + lVar21 + 0xc) = local_1d0._4_4_;
  *(float *)((longlong)FVar6 + lVar21 + 0x10) = (float)uStack_1c8;
  *(float *)((longlong)FVar6 + lVar21 + 0x14) = uStack_1c8._4_4_;
  *(int *)((longlong)FVar6 + lVar21 + 0x18) = local_1c0;
  *(FScriptContainerElement *)((longlong)FVar6 + lVar21 + 0x1c) = local_1bc;
  local_1b8._padding_ = (longlong)&___7FCompositeSection__6B_;
  local_1b8.LinkedMontage.field0_0x0.DebugPtr = (TObjectPtr<UAnimMontage>_u_0)0x0;
  local_1b8.SlotIndex = 0;
  local_1b8.SegmentIndex = -1;
  local_1b8.LinkMethod.Value = '\0';
  local_1b8.CachedLinkMethod.Value = '\0';
  local_1b8.SegmentBeginTime = 0.0;
  local_1b8.SegmentLength = 0.0;
  local_1b8.LinkValue = 0.0;
  local_1b8.LinkedSequence.field0_0x0.DebugPtr = (TObjectPtr<UAnimSequenceBase>_u_0)0x0;
  local_180 = 0;
  local_178 = (TObjectPtr<UAnimMetaData> *)0x0;
  local_170 = 0;
  ::FName::FName(&local_150,L"Default");
  local_188 = local_150;
  fVar22 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  FAnimLinkableElement::Link(&local_1b8,param_1,fVar22,0);
  if (local_1b8.CachedLinkMethod.Value != '\0') {
    if (local_1b8.CachedLinkMethod.Value == '\x01') {
      local_1b8.LinkValue =
           (float)((uint)local_1b8.SegmentBeginTime ^ __xmm_80000000800000008000000080000000);
      goto LAB_1474ca503;
    }
    if (local_1b8.CachedLinkMethod.Value != '\x02') goto LAB_1474ca503;
    if (local_1b8.SegmentLength != 0.0) {
      local_1b8.LinkValue =
           (float)((uint)(local_1b8.SegmentBeginTime / local_1b8.SegmentLength) ^
                  __xmm_80000000800000008000000080000000);
      goto LAB_1474ca503;
    }
  }
  local_1b8.LinkValue = 0.0;
LAB_1474ca503:
  pTVar3 = &pUVar17->CompositeSections;
  pFVar7 = (FAnimLinkableElement *)(pTVar3->AllocatorInstance).Data;
  if (((pFVar7 <= &local_1b8) &&
      (&local_1b8 <
       (FAnimLinkableElement *)
       ((longlong)pFVar7 + (longlong)(pUVar17->CompositeSections).ArrayMax * 0x50))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    pUVar17 = (UAnimMontage *)(*pcVar9)();
    return pUVar17;
  }
  iVar14 = (pUVar17->CompositeSections).ArrayNum;
  piVar2 = &(pUVar17->CompositeSections).ArrayMax;
  if (iVar14 == *piVar2) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar3->AllocatorInstance,piVar2);
  }
  (pUVar17->CompositeSections).ArrayNum = iVar14 + 1;
  pFVar20 = (pTVar3->AllocatorInstance).Data;
  lVar21 = (longlong)iVar14 * 0x50;
  *(undefined ***)(pFVar20 + lVar21) = &___7FAnimLinkableElement__6B_;
  ((TObjectPtr<UAnimMontage>_u_0 *)(pFVar20 + lVar21 + 8))->DebugPtr =
       (UAnimMontage *)local_1b8.LinkedMontage.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1b8.LinkedMontage.field0_0x0.DebugPtr != (TObjectPtr<UAnimMontage>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8.LinkedMontage.field0_0x0);
  }
  *(int *)(pFVar20 + lVar21 + 0x10) = local_1b8.SlotIndex;
  *(int *)(pFVar20 + lVar21 + 0x14) = local_1b8.SegmentIndex;
  pFVar20[lVar21 + 0x18] = (FScriptContainerElement)local_1b8.LinkMethod.Value;
  pFVar20[lVar21 + 0x19] = (FScriptContainerElement)local_1b8.CachedLinkMethod.Value;
  *(float *)(pFVar20 + lVar21 + 0x1c) = local_1b8.SegmentBeginTime;
  *(float *)(pFVar20 + lVar21 + 0x20) = local_1b8.SegmentLength;
  *(float *)(pFVar20 + lVar21 + 0x24) = local_1b8.LinkValue;
  ((TObjectPtr<UAnimSequenceBase>_u_0 *)(pFVar20 + lVar21 + 0x28))->DebugPtr =
       (UAnimSequenceBase *)local_1b8.LinkedSequence.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1b8.LinkedSequence.field0_0x0.DebugPtr != (TObjectPtr<UAnimSequenceBase>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8.LinkedSequence.field0_0x0);
  }
  pTVar10 = local_178;
  *(undefined ***)(pFVar20 + lVar21) = &___7FCompositeSection__6B_;
  *(FName *)(pFVar20 + lVar21 + 0x30) = local_188;
  *(undefined8 *)(pFVar20 + lVar21 + 0x38) = local_180;
  pFVar20 = pFVar20 + lVar21 + 0x40;
  *(undefined8 *)&pFVar20->field_0x0 = 0;
  iVar14 = (int)local_170;
  *(int *)&pFVar20[8].field_0x0 = (int)local_170;
  if ((int)local_170 == 0) {
    *(int *)(pFVar20 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_170,0,(ForAnyElementType *)pFVar20,(int)local_170,
               (int *)(pFVar20 + 0xc));
    ConstructItems<TObjectPtr<UAnimMetaData>,TObjectPtr<UAnimMetaData>,int>
              (*(void **)&pFVar20->field_0x0,pTVar10,iVar14);
  }
  pFVar18 = FAlphaBlend::FAlphaBlend(&local_138,&param_3->Blend);
  FAlphaBlend::operator=(&pUVar17->BlendIn,pFVar18);
  pUVar17->BlendModeIn = param_3->BlendMode;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_3->BlendProfile).field0_0x0.DebugPtr, pUVar8 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (pUVar17->BlendProfileIn).field0_0x0 = (param_3->BlendProfile).field0_0x0;
  pFVar18 = FAlphaBlend::FAlphaBlend(&local_108,&param_4->Blend);
  FAlphaBlend::operator=(&pUVar17->BlendOut,pFVar18);
  pUVar17->BlendModeOut = param_4->BlendMode;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_4->BlendProfile).field0_0x0.DebugPtr, pUVar8 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (pUVar17->BlendProfileOut).field0_0x0 = (param_4->BlendProfile).field0_0x0;
  pUVar17->BlendOutTriggerTime = param_7;
  plVar19 = (longlong *)(**(code **)(param_1->_padding_ + 0x318))(param_1,local_140);
  pUVar17->_padding_ = *plVar19;
  if (local_178 != (TObjectPtr<UAnimMetaData> *)0x0) {
    FMemory::Free(local_178);
    return pUVar17;
  }
  return pUVar17;
}

// CreateSlotAnimationAsDynamicMontage_WithFractionalLoops @ 1474ca820

UAnimMontage * __cdecl
UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithFractionalLoops
          (UAnimSequenceBase *param_1,FName param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UAnimMontage *pUVar7;
  FAnimSegment *this;
  float fVar8;
  
  fVar8 = __real_3f800000;
  if (0.0 < param_5) {
    pUVar7 = CreateSlotAnimationAsDynamicMontage
                       (param_1,param_2,param_3,param_4,__real_3f800000,1,param_6,0.0);
    if (pUVar7 != (UAnimMontage *)0x0) {
      if (param_5 == fVar8) {
        return pUVar7;
      }
      if (((pUVar7->SlotAnimTracks).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UAnimMontage *)(*pcVar3)();
        return pUVar7;
      }
      pFVar1 = (pUVar7->SlotAnimTracks).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + 0x10) < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UAnimMontage *)(*pcVar3)();
        return pUVar7;
      }
      lVar2 = *(longlong *)(pFVar1 + 8);
      if (((pUVar7->CompositeSections).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UAnimMontage *)(*pcVar3)();
        return pUVar7;
      }
      FAnimLinkableElement::Link
                ((FAnimLinkableElement *)(pUVar7->CompositeSections).AllocatorInstance.Data,param_1,
                 0.0,0);
      if (fVar8 <= param_5) {
        iVar5 = _finite((double)param_5);
        iVar6 = (int)param_5;
        if (iVar5 == 0) {
          iVar6 = 0x7fffffff;
        }
        *(int *)(lVar2 + 0x18) = iVar6;
        iVar5 = *(int *)(pFVar1 + 0x10);
        if (iVar5 == *(int *)(pFVar1 + 0x14)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)(pFVar1 + 8),(int *)(pFVar1 + 0x14));
        }
        *(int *)(pFVar1 + 0x10) = iVar5 + 1;
        this = (FAnimSegment *)(*(longlong *)(pFVar1 + 8) + (longlong)iVar5 * 0x20);
        DefaultConstructItems<FAnimSegment,int>(this,1);
        FAnimSegment::SetAnimReference(this,param_1,true);
        fVar8 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
        this->StartPos = fVar8 * (float)iVar6;
        fVar8 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
        this->AnimEndTime = fVar8 * (param_5 - (float)iVar6);
      }
      else {
        fVar8 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
        *(float *)(lVar2 + 0x10) = fVar8 * param_5;
      }
      fVar8 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
      *(float *)&pUVar7->_padding_ = fVar8 * param_5;
      return pUVar7;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3541163122091881479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0xbf9,"LoopCount > 0.0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UAnimMontage *)(*pcVar3)();
      return pUVar7;
    }
  }
  return (UAnimMontage *)0x0;
}

// ExtractRootMotionFromTrackRange @ 1474d2060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UAnimMontage::ExtractRootMotionFromTrackRange
          (UAnimMontage *this,TTransform<double> *__return_storage_ptr__,float param_1,float param_2
          ,FAnimExtractContext *param_3)

{
  TRotator<double> *this_00;
  undefined1 auStackY_168 [32];
  FString local_138;
  FString local_128;
  TVector<double>_u_0 local_118;
  TQuat<double> local_f8;
  TRotator<double> local_d8;
  FRootMotionMovementParams local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_b8.bHasRootMotion = false;
  local_b8.BlendWeight = 0.0;
  local_b8.RootMotionTransform.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8.RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8.RootMotionTransform.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_b8.RootMotionTransform.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_b8.RootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_b8.RootMotionTransform.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8.RootMotionTransform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_b8.RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_b8.RootMotionTransform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8.RootMotionTransform.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_b8.RootMotionTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_b8.RootMotionTransform.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b8.RootMotionTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8.RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8.RootMotionTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_b8.RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_b8.RootMotionTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  if (0 < (this->SlotAnimTracks).ArrayNum) {
    UAnimCompositeBase::ExtractRootMotionFromTrack
              ((UAnimCompositeBase *)this,
               (FAnimTrack *)((this->SlotAnimTracks).AllocatorInstance.Data + 8),param_1,param_2,
               param_3,&local_b8);
  }
  if (4 < (byte)LogRootMotion._0_1_) {
    local_f8.X = local_b8.RootMotionTransform.Rotation.XY.m128d_f64[0];
    local_f8.Y = local_b8.RootMotionTransform.Rotation.XY.m128d_f64[1];
    local_f8.Z = local_b8.RootMotionTransform.Rotation.ZW.m128d_f64[0];
    local_f8.W = local_b8.RootMotionTransform.Rotation.ZW.m128d_f64[1];
    this_00 = UE::Math::TQuat<double>::Rotator(&local_f8,&local_d8);
    UE::Math::TRotator<double>::ToCompactString(this_00,&local_128);
    local_118._s_0.X = local_b8.RootMotionTransform.Translation.XY.m128d_f64[0];
    local_118._s_0.Y = local_b8.RootMotionTransform.Translation.XY.m128d_f64[1];
    local_118._s_0.Z = local_b8.RootMotionTransform.Translation.ZW.m128d_f64[0];
    UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_118._s_0,&local_138);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       local_b8.RootMotionTransform.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] =
       local_b8.RootMotionTransform.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
       local_b8.RootMotionTransform.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] =
       local_b8.RootMotionTransform.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       local_b8.RootMotionTransform.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       local_b8.RootMotionTransform.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       local_b8.RootMotionTransform.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] =
       local_b8.RootMotionTransform.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       local_b8.RootMotionTransform.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] =
       local_b8.RootMotionTransform.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
       local_b8.RootMotionTransform.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] =
       local_b8.RootMotionTransform.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// FilterOutNotifyBranchingPoints @ 1474d2aa0

void __thiscall
UAnimMontage::FilterOutNotifyBranchingPoints
          (UAnimMontage *this,TArray<FAnimNotifyEvent_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = param_1->ArrayNum;
  uVar7 = iVar5 - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar3 = uVar8;
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
      bVar2 = FAnimNotifyEvent::IsBranchingPoint
                        (*(FAnimNotifyEvent **)((param_1->AllocatorInstance).Data + lVar6 * 8));
      if (bVar2) {
        uVar3 = 0;
        if (iVar5 <= param_1->ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _Dst = (param_1->AllocatorInstance).Data + lVar6 * 8;
        iVar4 = param_1->ArrayNum + ~uVar7;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
      lVar6 = lVar6 + -1;
      iVar5 = iVar5 + -1;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// FilterOutNotifyBranchingPoints @ 1474d2bf0

void __thiscall
UAnimMontage::FilterOutNotifyBranchingPoints
          (UAnimMontage *this,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  FAnimNotifyEvent *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = param_1->ArrayNum;
  uVar5 = iVar6 - 1;
  if (-1 < (int)uVar5) {
    lVar7 = (longlong)(int)uVar5 * 0x30;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((*(longlong *)(pFVar1 + lVar7 + 0x20) != 0) &&
          (this_00 = *(FAnimNotifyEvent **)(pFVar1 + lVar7 + 0x10),
          this_00 != (FAnimNotifyEvent *)0x0)) &&
         (bVar3 = FAnimNotifyEvent::IsBranchingPoint(this_00), bVar3)) {
        uVar4 = 0;
        if (iVar6 <= param_1->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_1,uVar5,1)
        ;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -0x30;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// FindFirstBranchingPointMarker @ 1474d30f0

FBranchingPointMarker * __thiscall
UAnimMontage::FindFirstBranchingPointMarker(UAnimMontage *this,float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FBranchingPointMarker *pFVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar2 = (this->BranchingPointMarkers).ArrayNum;
  if (0 < iVar2) {
    if (param_2 < param_1) {
      uVar7 = iVar2 - 1;
      if (-1 < (int)uVar7) {
        lVar10 = (longlong)(int)uVar7 * 0xc;
        do {
          uVar6 = 0;
          if ((int)uVar7 < (this->BranchingPointMarkers).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FBranchingPointMarker *)(*pcVar3)();
            return pFVar5;
          }
          pFVar5 = (FBranchingPointMarker *)
                   ((this->BranchingPointMarkers).AllocatorInstance.Data + lVar10);
          fVar1 = pFVar5->TriggerTime;
          if (fVar1 < param_1) {
            if (fVar1 < param_2) {
              return (FBranchingPointMarker *)0x0;
            }
            return pFVar5;
          }
          lVar10 = lVar10 + -0xc;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
    }
    else {
      uVar8 = 0;
      uVar9 = uVar8;
      do {
        uVar6 = (uint)uVar8;
        uVar7 = 0;
        if ((int)uVar6 < (this->BranchingPointMarkers).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FBranchingPointMarker *)(*pcVar3)();
          return pFVar5;
        }
        pFVar5 = (FBranchingPointMarker *)
                 ((this->BranchingPointMarkers).AllocatorInstance.Data + uVar9);
        fVar1 = pFVar5->TriggerTime;
        if (param_1 < fVar1) {
          if (param_2 < fVar1) {
            return (FBranchingPointMarker *)0x0;
          }
          return pFVar5;
        }
        uVar8 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 + 0xc;
      } while ((int)(uVar6 + 1) < (this->BranchingPointMarkers).ArrayNum);
    }
  }
  return (FBranchingPointMarker *)0x0;
}

// GetAnimCompositeSection @ 1474d5fc0

FCompositeSection * __thiscall UAnimMontage::GetAnimCompositeSection(UAnimMontage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCompositeSection *pFVar4;
  
  if ((param_1 < 0) || ((this->CompositeSections).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeSections.IsValidIndex(SectionIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCompositeSection *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->CompositeSections).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCompositeSection *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FCompositeSection *)
         ((this->CompositeSections).AllocatorInstance.Data + (longlong)param_1 * 0x50);
}

// GetAnimCompositeSection @ 1474d6070

FCompositeSection * __thiscall UAnimMontage::GetAnimCompositeSection(UAnimMontage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCompositeSection *pFVar4;
  
  if ((param_1 < 0) || ((this->CompositeSections).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeSections.IsValidIndex(SectionIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0xf7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCompositeSection *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->CompositeSections).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCompositeSection *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FCompositeSection *)
         ((this->CompositeSections).AllocatorInstance.Data + (longlong)param_1 * 0x50);
}

// GetAnimCompositeSectionIndexFromPos @ 1474d6120

int __thiscall
UAnimMontage::GetAnimCompositeSectionIndexFromPos(UAnimMontage *this,float param_1,float *param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  *param_2 = 0.0;
  if (0 < (this->CompositeSections).ArrayNum) {
    do {
      uVar8 = uVar7 + 1;
      bVar4 = IsWithinPos(this,uVar7,uVar8,param_1);
      if (bVar4) {
        uVar8 = 0;
        if ((int)uVar7 < (this->CompositeSections).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        pFVar2 = (this->CompositeSections).AllocatorInstance.Data;
        lVar6 = (longlong)(int)uVar7;
        FVar1 = pFVar2[lVar6 * 0x50 + 0x19];
        if (FVar1 != (FScriptContainerElement)0x0) {
          if (FVar1 == (FScriptContainerElement)0x0) {
            *param_2 = param_1 - __real_bf800000;
            return uVar7;
          }
          if (FVar1 == (FScriptContainerElement)0x1) {
            *param_2 = param_1 - (*(float *)(pFVar2 + lVar6 * 0x50 + 0x24) +
                                 *(float *)(pFVar2 + lVar6 * 0x50 + 0x1c));
            return uVar7;
          }
          if (FVar1 == (FScriptContainerElement)0x2) {
            *param_2 = param_1 - (*(float *)(pFVar2 + lVar6 * 0x50 + 0x24) *
                                  *(float *)(pFVar2 + lVar6 * 0x50 + 0x20) +
                                 *(float *)(pFVar2 + lVar6 * 0x50 + 0x1c));
            return uVar7;
          }
        }
        *param_2 = param_1 - *(float *)(pFVar2 + lVar6 * 0x50 + 0x24);
        return uVar7;
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < (this->CompositeSections).ArrayNum);
  }
  return -1;
}

// GetAnimationData @ 1474d62c0

FAnimTrack * __thiscall UAnimMontage::GetAnimationData(UAnimMontage *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnimTrack *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->SlotAnimTracks).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->SlotAnimTracks).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAnimTrack *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->SlotAnimTracks).AllocatorInstance.Data + lVar6) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->SlotAnimTracks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FAnimTrack *)(*pcVar1)();
          return pFVar4;
        }
        return (FAnimTrack *)
               ((this->SlotAnimTracks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 8);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar5 < (this->SlotAnimTracks).ArrayNum);
  }
  return (FAnimTrack *)0x0;
}

// GetAnimationPose @ 1474d63e0

void __thiscall
UAnimMontage::GetAnimationPose
          (UAnimMontage *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimMontage.h"
                     ,0x302,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetFirstAnimReference @ 1474d9870

UAnimSequenceBase * __thiscall UAnimMontage::GetFirstAnimReference(UAnimMontage *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UAnimSequenceBase *pUVar5;
  
  iVar1 = (this->SlotAnimTracks).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UAnimSequenceBase *)(*pcVar3)();
        return pUVar5;
      }
    }
    if (*(int *)((this->SlotAnimTracks).AllocatorInstance.Data + 0x10) != 0) {
      if ((this->SlotAnimTracks).ArrayNum < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UAnimSequenceBase *)(*pcVar3)();
          return pUVar5;
        }
      }
      pFVar2 = (this->SlotAnimTracks).AllocatorInstance.Data;
      if (*(int *)(pFVar2 + 0x10) < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UAnimSequenceBase *)(*pcVar3)();
          return pUVar5;
        }
      }
      return (UAnimSequenceBase *)**(undefined8 **)(pFVar2 + 8);
    }
  }
  return (UAnimSequenceBase *)0x0;
}

// GetGroupName @ 1474d9f30

FName __thiscall UAnimMontage::GetGroupName(UAnimMontage *this)

{
  FName in_RDX;
  
  if (((USkeleton *)this->_padding_ != (USkeleton *)0x0) && (0 < (this->SlotAnimTracks).ArrayNum)) {
    USkeleton::GetSlotGroupName((USkeleton *)this->_padding_,(FName *)in_RDX);
    return in_RDX;
  }
  *(FName *)in_RDX = FAnimSlotGroup::DefaultGroupName;
  return in_RDX;
}

// GetMarkerIndicesForTime @ 1474db360

void __thiscall
UAnimMontage::GetMarkerIndicesForTime
          (UAnimMontage *this,float param_1,bool param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,FMarkerPair *param_4,
          FMarkerPair *param_5)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  FMarkerSyncData::GetMarkerIndicesForTime
            (&this->MarkerData,param_1,param_2,param_3,param_4,param_5,fVar1);
  return;
}

// GetMarkerSyncPositionFromMarkerIndicies @ 1474db5a0

FMarkerSyncAnimPosition * __thiscall
UAnimMontage::GetMarkerSyncPositionFromMarkerIndicies
          (UAnimMontage *this,FMarkerSyncAnimPosition *__return_storage_ptr__,int param_1,
          int param_2,float param_3,UMirrorDataTable *param_4)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  FMarkerSyncData::GetMarkerSyncPositionFromMarkerIndicies
            (&this->MarkerData,__return_storage_ptr__,param_1,param_2,param_3,fVar1,param_4);
  return __return_storage_ptr__;
}

// GetMarkerSyncPositionfromMarkerIndicies @ 1474db9d0

FMarkerSyncAnimPosition * __thiscall
UAnimMontage::GetMarkerSyncPositionfromMarkerIndicies
          (UAnimMontage *this,FMarkerSyncAnimPosition *__return_storage_ptr__,int param_1,
          int param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  FMarkerSyncData::GetMarkerSyncPositionFromMarkerIndicies
            (&this->MarkerData,__return_storage_ptr__,param_1,param_2,param_3,fVar1,
             (UMirrorDataTable *)0x0);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dcdf0

UClass * __cdecl UAnimMontage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimMontage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimMontage",
               &Z_Registration_Info_UClass_UAnimMontage.InnerSingleton,
               StaticRegisterNativesUAnimMontage,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimMontage>,InternalVTableHelperCtorCaller<UAnimMontage>,
               local_res8,UAnimCompositeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimMontage.InnerSingleton;
}

// GetResourceSizeEx @ 1474de180

void __thiscall UAnimMontage::GetResourceSizeEx(UAnimMontage *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  UAnimSequenceBase::GetResourceSizeEx((UAnimSequenceBase *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->CompositeSections).ArrayMax * 0x50);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->SlotAnimTracks).ArrayMax * 0x18);
  iVar2 = (this->SlotAnimTracks).ArrayNum;
  pFVar4 = (this->SlotAnimTracks).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->SlotAnimTracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSlotAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = FAnimTrack::GetTotalBytesUsed((FAnimTrack *)(pFVar4 + 8));
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)iVar3);
    pFVar4 = pFVar4 + 0x18;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->BranchingPointMarkers).ArrayMax * 0xc);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->BranchingPointStateNotifyIndices).ArrayMax << 2);
  return;
}

// GetSamplingFrameRate @ 1474de4f0

FFrameRate __thiscall UAnimMontage::GetSamplingFrameRate(UAnimMontage *this)

{
  FFrameRate in_RDX;
  
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    *(longlong *)in_RDX = this->_padding_;
    return in_RDX;
  }
  UAnimCompositeBase::GetSamplingFrameRate((UAnimCompositeBase *)this);
  return in_RDX;
}

// GetSectionIndex @ 1474de550

int __thiscall UAnimMontage::GetSectionIndex(UAnimMontage *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->CompositeSections).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->CompositeSections).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->CompositeSections).AllocatorInstance.Data + lVar5 + 0x30) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while ((int)uVar6 < (this->CompositeSections).ArrayNum);
  }
  return -1;
}

// GetSectionIndexFromPosition @ 1474de610

int __thiscall UAnimMontage::GetSectionIndexFromPosition(UAnimMontage *this,float param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar6 = (this->CompositeSections).ArrayNum;
  if (0 < iVar6) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      if (((int)uVar9 < 0) || (iVar6 <= (int)uVar9)) {
        fVar12 = 0.0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar9 < (this->CompositeSections).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        pFVar2 = (this->CompositeSections).AllocatorInstance.Data;
        FVar1 = pFVar2[lVar8 + 0x19];
        if (FVar1 == (FScriptContainerElement)0x0) {
LAB_1474de6fe:
          fVar12 = *(float *)(pFVar2 + lVar8 + 0x24);
        }
        else if (FVar1 == (FScriptContainerElement)0x1) {
          fVar12 = *(float *)(pFVar2 + lVar8 + 0x24) + *(float *)(pFVar2 + lVar8 + 0x1c);
        }
        else {
          if (FVar1 != (FScriptContainerElement)0x2) goto LAB_1474de6fe;
          fVar12 = *(float *)(pFVar2 + lVar8 + 0x24) * *(float *)(pFVar2 + lVar8 + 0x20) +
                   *(float *)(pFVar2 + lVar8 + 0x1c);
        }
      }
      uVar5 = uVar9 + 1;
      if (((int)uVar5 < 0) || ((this->CompositeSections).ArrayNum <= (int)uVar5)) {
        fVar11 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      }
      else {
        uVar7 = 0;
        if ((int)uVar5 < (this->CompositeSections).ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        pFVar2 = (this->CompositeSections).AllocatorInstance.Data;
        FVar1 = pFVar2[lVar8 + 0x69];
        if (FVar1 == (FScriptContainerElement)0x0) {
LAB_1474de7af:
          fVar11 = *(float *)(pFVar2 + lVar8 + 0x74);
        }
        else if (FVar1 == (FScriptContainerElement)0x1) {
          fVar11 = *(float *)(pFVar2 + lVar8 + 0x74) + *(float *)(pFVar2 + lVar8 + 0x6c);
        }
        else {
          if (FVar1 != (FScriptContainerElement)0x2) goto LAB_1474de7af;
          fVar11 = *(float *)(pFVar2 + lVar8 + 0x74) * *(float *)(pFVar2 + lVar8 + 0x70) +
                   *(float *)(pFVar2 + lVar8 + 0x6c);
        }
      }
      lVar8 = lVar8 + 0x50;
      fVar10 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      if (fVar12 <= param_1) {
        if (param_1 < fVar10) {
          if (param_1 < fVar11) {
            return uVar9;
          }
        }
        else if (param_1 <= fVar11) {
          return uVar9;
        }
      }
      iVar6 = (this->CompositeSections).ArrayNum;
      uVar9 = uVar5;
    } while ((int)uVar5 < iVar6);
  }
  return -1;
}

// GetSectionLength @ 1474de840

float __thiscall UAnimMontage::GetSectionLength(UAnimMontage *this,int param_1)

{
  int iVar1;
  char cVar2;
  FCompositeSection *pFVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  fVar5 = 0.0;
  if ((-1 < param_1) && (param_1 < (this->CompositeSections).ArrayNum)) {
    pFVar3 = GetAnimCompositeSection(this,param_1);
    cVar2 = *(char *)((longlong)&pFVar3->_padding_ + 1);
    if (cVar2 == '\0') {
LAB_1474de8be:
      fVar5 = *(float *)((longlong)&pFVar3->_padding_ + 4);
    }
    else {
      fVar5 = __real_bf800000;
      if (cVar2 != '\0') {
        if (cVar2 == '\x01') {
          fVar5 = *(float *)((longlong)&pFVar3->_padding_ + 4) +
                  *(float *)((longlong)&pFVar3->_padding_ + 4);
        }
        else {
          if (cVar2 != '\x02') goto LAB_1474de8be;
          fVar5 = *(float *)((longlong)&pFVar3->_padding_ + 4) * *(float *)&pFVar3->_padding_ +
                  *(float *)((longlong)&pFVar3->_padding_ + 4);
        }
      }
    }
  }
  iVar1 = param_1 + 1;
  if ((iVar1 < 0) || ((this->CompositeSections).ArrayNum <= iVar1)) goto LAB_1474de91f;
  pFVar3 = GetAnimCompositeSection(this,iVar1);
  cVar2 = *(char *)((longlong)&pFVar3->_padding_ + 1);
  if (cVar2 != '\0') {
    fVar4 = __real_bf800000;
    if (cVar2 == '\0') goto LAB_1474de91f;
    if (cVar2 == '\x01') {
      fVar4 = *(float *)((longlong)&pFVar3->_padding_ + 4) +
              *(float *)((longlong)&pFVar3->_padding_ + 4);
      goto LAB_1474de91f;
    }
    if (cVar2 == '\x02') {
      fVar4 = *(float *)((longlong)&pFVar3->_padding_ + 4) * *(float *)&pFVar3->_padding_ +
              *(float *)((longlong)&pFVar3->_padding_ + 4);
      goto LAB_1474de91f;
    }
  }
  fVar4 = *(float *)((longlong)&pFVar3->_padding_ + 4);
LAB_1474de91f:
  return fVar4 - fVar5;
}

// GetSectionMetaData @ 1474de950

TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimMontage::GetSectionMetaData
          (UAnimMontage *this,
          TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1,
          bool param_2,FName param_3)

{
  float fVar1;
  void *pvVar2;
  FName FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  FName FVar19;
  FName *pFVar20;
  FName *pFVar21;
  bool bVar22;
  longlong *plVar23;
  FName FVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  FName *pFVar29;
  float fVar30;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103 [3];
  uint local_100;
  FScriptContainerElement *local_f8;
  longlong local_f0;
  float local_e8;
  float local_e4;
  FName local_e0;
  longlong *local_d8;
  FName *local_d0;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FName *local_a8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  __return_storage_ptr__->ArrayMax = 0;
  local_100 = 0;
  if (0 < (this->CompositeSections).ArrayNum) {
    local_f0 = 0;
    bVar22 = param_2;
    do {
      uVar11 = 0;
      if ((int)local_100 < (this->CompositeSections).ArrayNum) {
        uVar11 = ~local_100 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar18 = (this->CompositeSections).AllocatorInstance.Data;
      if ((param_1 == (FName)0x0) || (*(FName *)(pFVar18 + local_f0 + 0x30) == param_1)) {
        pTVar13 = (TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_> *)(pFVar18 + local_f0 + 0x40)
        ;
        if ((__return_storage_ptr__ == pTVar13) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar13;
        }
        iVar26 = pTVar13->ArrayNum;
        if (iVar26 != 0) {
          iVar12 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar26,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 8,
                 (pTVar13->AllocatorInstance).Data,(longlong)iVar26 << 3);
        }
        if (param_2 != false) {
          if (param_1 == (FName)0x0) {
            uVar11 = (this->SlotAnimTracks).ArrayNum;
            uVar14 = (ulonglong)(int)uVar11;
            FVar24 = (FName)(this->SlotAnimTracks).AllocatorInstance.Data;
            pFVar21 = (FName *)((longlong)FVar24 + uVar14 * 0x18);
            pFVar18 = (FScriptContainerElement *)((longlong)FVar24 + 0x10);
            local_d0 = pFVar21;
            while( true ) {
              local_f8 = pFVar18;
              local_e0 = FVar24;
              if ((this->SlotAnimTracks).ArrayNum != (int)uVar14) {
                local_108 = 0;
                `TCheckedPointerIterator<FSlotAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_108);
              }
              if (FVar24 == (FName)pFVar21) break;
              if ((param_3 == (FName)0x0) || (*(FName *)FVar24 == param_3)) {
                iVar26 = (int)*(longlong *)&local_f8->field_0x0;
                plVar23 = *(longlong **)(local_f8 + -8);
                plVar17 = plVar23 + (longlong)iVar26 * 4;
                pFVar15 = local_f8;
                local_d8 = plVar17;
                while( true ) {
                  if ((int)*(longlong *)&pFVar15->field_0x0 != iVar26) {
                    local_107 = 0;
                    `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_107);
                  }
                  pFVar18 = local_f8;
                  pFVar21 = local_d0;
                  FVar24 = local_e0;
                  if (plVar23 == plVar17) break;
                  lVar28 = *plVar23;
                  if (lVar28 != 0) {
                    local_c0 = *(int *)(lVar28 + 0x68);
                    lVar27 = (longlong)local_c0;
                    pvVar2 = *(void **)(lVar28 + 0x60);
                    local_c8.Data = (FScriptContainerElement *)0x0;
                    if (local_c0 == 0) {
                      local_bc = 0;
                      iVar12 = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,local_c0,0,&local_c8,local_c0,&local_bc);
                      memcpy(local_c8.Data,pvVar2,lVar27 << 3);
                      iVar12 = local_c0;
                    }
                    pFVar18 = local_c8.Data + (longlong)iVar12 * 8;
                    FVar16.Data = local_c8.Data;
                    iVar25 = iVar12;
                    while( true ) {
                      if (iVar25 != iVar12) {
                        local_106 = 0;
                        `TCheckedPointerIterator<UAnimMetaData_*,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(&local_106);
                      }
                      pFVar15 = local_f8;
                      if (FVar16.Data == pFVar18) break;
                      TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<UAnimMetaData_*_const_&>
                                (__return_storage_ptr__,(UAnimMetaData **)FVar16.Data);
                      FVar16.Data = FVar16.Data + 8;
                      iVar25 = local_c0;
                    }
                    plVar17 = local_d8;
                    if (local_c8.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c8.Data);
                      plVar17 = local_d8;
                    }
                  }
                  plVar23 = plVar23 + 4;
                }
              }
              uVar14 = (ulonglong)uVar11;
              FVar24 = (FName)((longlong)FVar24 + 0x18);
              pFVar18 = pFVar18 + 0x18;
            }
            bVar22 = false;
            param_2 = bVar22;
          }
          else {
            local_e8 = 0.0;
            local_e4 = 0.0;
            GetSectionStartAndEndTime(this,local_100,&local_e8,&local_e4);
            fVar9 = local_e4;
            fVar8 = local_e8;
            iVar26 = (this->SlotAnimTracks).ArrayNum;
            uVar14 = (ulonglong)iVar26;
            pFVar29 = (FName *)(this->SlotAnimTracks).AllocatorInstance.Data;
            local_f8 = (FScriptContainerElement *)CONCAT44(local_f8._4_4_,iVar26);
            pFVar20 = pFVar29 + uVar14 * 3;
            pFVar21 = pFVar29 + 2;
            local_a8 = pFVar20;
            while( true ) {
              local_d0 = pFVar29;
              if ((this->SlotAnimTracks).ArrayNum != (int)uVar14) {
                local_105 = 0;
                `TCheckedPointerIterator<FSlotAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_105);
              }
              param_2 = bVar22;
              if (pFVar29 == pFVar20) break;
              if ((param_3 == (FName)0x0) || (*pFVar29 == param_3)) {
                uVar11 = (pFVar21->ComparisonIndex).Value;
                uVar14 = (ulonglong)(int)uVar11;
                FVar24 = pFVar21[-1];
                FVar19 = (FName)((longlong)FVar24 + uVar14 * 0x20);
                local_d8 = (longlong *)CONCAT44(local_d8._4_4_,uVar11);
                local_e0 = FVar19;
                while( true ) {
                  if ((pFVar21->ComparisonIndex).Value != (uint)uVar14) {
                    local_104 = 0;
                    `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_104);
                  }
                  pFVar20 = local_a8;
                  pFVar29 = local_d0;
                  if (FVar24 == FVar19) break;
                  FVar3 = *(FName *)FVar24;
                  fVar30 = fVar6;
                  if (FVar3 != (FName)0x0) {
                    fVar30 = *(float *)((longlong)FVar3 + 0xa8);
                  }
                  fVar30 = fVar30 * (float)((FName *)((longlong)FVar24 + 0x10))->Number;
                  if ((float)((uint)fVar30 & uVar7) <= fVar5) {
                    fVar30 = fVar6;
                  }
                  fVar1 = (float)(((FName *)((longlong)FVar24 + 8))->ComparisonIndex).Value;
                  fVar30 = (((float)(((FName *)((longlong)FVar24 + 0x10))->ComparisonIndex).Value -
                            (float)((FName *)((longlong)FVar24 + 8))->Number) *
                           (float)(int)(((FName *)((longlong)FVar24 + 0x18))->ComparisonIndex).Value
                           ) / (float)((uint)fVar30 & uVar7) + fVar1;
                  if (((((fVar1 <= fVar8) && (fVar8 < fVar30)) ||
                       ((fVar1 < fVar9 && (fVar9 <= fVar30)))) ||
                      ((fVar8 <= fVar1 && (fVar30 <= fVar9)))) && (FVar3 != (FName)0x0)) {
                    local_b0 = *(int *)((longlong)FVar3 + 0x68);
                    lVar28 = (longlong)local_b0;
                    pvVar2 = *(void **)((longlong)FVar3 + 0x60);
                    local_b8.Data = (FScriptContainerElement *)0x0;
                    if (local_b0 == 0) {
                      local_ac = 0;
                      iVar26 = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,local_b0,0,&local_b8,local_b0,&local_ac);
                      memcpy(local_b8.Data,pvVar2,lVar28 << 3);
                      iVar26 = local_b0;
                    }
                    pFVar18 = local_b8.Data + (longlong)iVar26 * 8;
                    FVar16.Data = local_b8.Data;
                    iVar12 = iVar26;
                    while( true ) {
                      if (iVar12 != iVar26) {
                        local_103[0] = 0;
                        `TCheckedPointerIterator<UAnimMetaData_*,int,0>::operator!='::__l2::
                        <lambda_1>::operator()(local_103);
                      }
                      if (FVar16.Data == pFVar18) break;
                      TArray<UAnimMetaData_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<UAnimMetaData_*_const_&>
                                (__return_storage_ptr__,(UAnimMetaData **)FVar16.Data);
                      FVar16.Data = FVar16.Data + 8;
                      iVar12 = local_b0;
                    }
                    uVar14 = (ulonglong)local_d8 & 0xffffffff;
                    FVar19 = local_e0;
                    if (local_b8.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.Data);
                      FVar19 = local_e0;
                    }
                  }
                  FVar24 = (FName)((longlong)FVar24 + 0x20);
                }
              }
              uVar14 = (ulonglong)local_f8 & 0xffffffff;
              pFVar29 = pFVar29 + 3;
              pFVar21 = pFVar21 + 3;
            }
          }
        }
      }
      local_100 = local_100 + 1;
      local_f0 = local_f0 + 0x50;
    } while ((int)local_100 < (this->CompositeSections).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetSectionName @ 1474def40

FName __thiscall UAnimMontage::GetSectionName(UAnimMontage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint uVar4;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->CompositeSections).ArrayNum)) {
    uVar4 = 0;
    if ((int)in_R8D < (this->CompositeSections).ArrayNum) {
      uVar4 = ~in_R8D >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    *(undefined8 *)FVar3 =
         *(undefined8 *)
          ((this->CompositeSections).AllocatorInstance.Data + (longlong)(int)in_R8D * 0x50 + 0x30);
    return FVar3;
  }
  *(undefined8 *)FVar3 = 0;
  return FVar3;
}

// GetSectionStartAndEndTime @ 1474df050

void __thiscall
UAnimMontage::GetSectionStartAndEndTime
          (UAnimMontage *this,int param_1,float *param_2,float *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  FCompositeSection *pFVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = this->_padding_;
  *param_2 = 0.0;
  fVar5 = (float)(**(code **)(lVar3 + 0x2c0))();
  fVar6 = __real_bf800000;
  *param_3 = fVar5;
  if ((-1 < param_1) && (param_1 < (this->CompositeSections).ArrayNum)) {
    pFVar4 = GetAnimCompositeSection(this,param_1);
    cVar2 = *(char *)((longlong)&pFVar4->_padding_ + 1);
    if (cVar2 == '\0') {
LAB_1474df0e2:
      fVar5 = *(float *)((longlong)&pFVar4->_padding_ + 4);
    }
    else {
      fVar5 = fVar6;
      if (cVar2 != '\0') {
        if (cVar2 == '\x01') {
          fVar5 = *(float *)((longlong)&pFVar4->_padding_ + 4) +
                  *(float *)((longlong)&pFVar4->_padding_ + 4);
        }
        else {
          if (cVar2 != '\x02') goto LAB_1474df0e2;
          fVar5 = *(float *)((longlong)&pFVar4->_padding_ + 4) * *(float *)&pFVar4->_padding_ +
                  *(float *)((longlong)&pFVar4->_padding_ + 4);
        }
      }
    }
    *param_2 = fVar5;
  }
  iVar1 = param_1 + 1;
  if (iVar1 < 0) {
    return;
  }
  if ((this->CompositeSections).ArrayNum <= iVar1) {
    return;
  }
  pFVar4 = GetAnimCompositeSection(this,iVar1);
  cVar2 = *(char *)((longlong)&pFVar4->_padding_ + 1);
  if (cVar2 != '\0') {
    if (cVar2 == '\0') goto LAB_1474df13d;
    if (cVar2 == '\x01') {
      fVar6 = *(float *)((longlong)&pFVar4->_padding_ + 4) +
              *(float *)((longlong)&pFVar4->_padding_ + 4);
      goto LAB_1474df13d;
    }
    if (cVar2 == '\x02') {
      fVar6 = *(float *)((longlong)&pFVar4->_padding_ + 4) * *(float *)&pFVar4->_padding_ +
              *(float *)((longlong)&pFVar4->_padding_ + 4);
      goto LAB_1474df13d;
    }
  }
  fVar6 = *(float *)((longlong)&pFVar4->_padding_ + 4);
LAB_1474df13d:
  *param_3 = fVar6;
  return;
}

// GetSectionTimeLeftFromPos @ 1474df170

float __thiscall UAnimMontage::GetSectionTimeLeftFromPos(UAnimMontage *this,float param_1)

{
  char cVar1;
  int iVar2;
  FCompositeSection *pFVar3;
  float fVar4;
  
  iVar2 = GetSectionIndexFromPosition(this,param_1);
  if (iVar2 == -1) {
    return __real_bf800000;
  }
  iVar2 = iVar2 + 1;
  if ((iVar2 < 0) || ((this->CompositeSections).ArrayNum <= iVar2)) {
    fVar4 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    return fVar4 - param_1;
  }
  pFVar3 = GetAnimCompositeSection(this,iVar2);
  cVar1 = *(char *)((longlong)&pFVar3->_padding_ + 1);
  if (cVar1 != '\0') {
    if (cVar1 == '\0') {
      return __real_bf800000 - param_1;
    }
    if (cVar1 == '\x01') {
      return (*(float *)((longlong)&pFVar3->_padding_ + 4) +
             *(float *)((longlong)&pFVar3->_padding_ + 4)) - param_1;
    }
    if (cVar1 == '\x02') {
      return (*(float *)((longlong)&pFVar3->_padding_ + 4) * *(float *)&pFVar3->_padding_ +
             *(float *)((longlong)&pFVar3->_padding_ + 4)) - param_1;
    }
  }
  return *(float *)((longlong)&pFVar3->_padding_ + 4) - param_1;
}

// GetUniqueMarkerNames @ 1474e0470

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAnimMontage::GetUniqueMarkerNames(UAnimMontage *this)

{
  return &(this->MarkerData).UniqueMarkerNames;
}

// HasRootMotion @ 1474e1080

bool __thiscall UAnimMontage::HasRootMotion(UAnimMontage *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SlotAnimTracks).ArrayNum;
  pFVar4 = (this->SlotAnimTracks).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->SlotAnimTracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSlotAnimationTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = FAnimTrack::HasRootMotion((FAnimTrack *)(pFVar4 + 8));
    if (bVar3) {
      return true;
    }
    pFVar4 = pFVar4 + 0x18;
  }
  return false;
}

// HasValidSlotSetup @ 1474e1110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UAnimMontage::HasValidSlotSetup(UAnimMontage *this)

{
  int iVar1;
  USkeleton *this_00;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FName local_res8;
  FName local_res10;
  FName local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  iVar1 = (this->SlotAnimTracks).ArrayNum;
  if ((1 < iVar1) && (this_00 = (USkeleton *)this->_padding_, this_00 != (USkeleton *)0x0)) {
    USkeleton::GetSlotGroupName(this_00,&local_res8);
    local_88._0_4_ = 0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    if ((this->SlotAnimTracks).ArrayNum < 1) {
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
    pFVar2 = (FName *)(this->SlotAnimTracks).AllocatorInstance.Data;
    iVar6 = (int)local_88;
    if ((local_90.Data <= pFVar2) &&
       (pFVar2 < (FName *)(local_90.Data + (longlong)local_88._4_4_ * 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (int)local_88;
    }
    if (iVar6 == local_88._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_90,(int *)((longlong)&local_88 + 4));
    }
    local_88 = CONCAT44(local_88._4_4_,iVar6 + 1);
    uVar9 = 1;
    *(FName *)(local_90.Data + (longlong)iVar6 * 8) = *pFVar2;
    if (1 < (longlong)iVar1) {
      lVar11 = 1;
      lVar10 = 0x18;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->SlotAnimTracks).ArrayNum) {
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
        local_98 = *(FName *)((this->SlotAnimTracks).AllocatorInstance.Data + lVar10);
        for (FVar8.Data = local_90.Data;
            (FName *)FVar8.Data != (FName *)(local_90.Data + (longlong)(int)local_88 * 8);
            FVar8.Data = FVar8.Data + 8) {
          if (*(FName *)FVar8.Data == local_98) {
            if ((byte)LogAnimMontage._0_1_ < 3) goto LAB_1474e1507;
            ::FName::ToString(&local_98,&local_70);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_80,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            goto LAB_1474e14f9;
          }
        }
        iVar6 = (int)local_88;
        if ((local_90.Data <= &local_98) &&
           (&local_98 < (FName *)(local_90.Data + (longlong)local_88._4_4_ * 8))) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = (int)local_88;
        }
        if (iVar6 == local_88._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_90,(int *)((longlong)&local_88 + 4));
        }
        local_88 = CONCAT44(local_88._4_4_,iVar6 + 1);
        *(FName *)(local_90.Data + (longlong)iVar6 * 8) = local_98;
        USkeleton::GetSlotGroupName(this_00,&local_res10);
        if (local_res10 != local_res8) {
          if (2 < (byte)LogAnimMontage._0_1_) {
            ::FName::ToString(&local_res8,&local_40);
            ::FName::ToString(&local_res10,&local_50);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_60,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            local_70.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
              local_70.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
            }
LAB_1474e14f9:
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
          }
LAB_1474e1507:
          if ((FName *)local_90.Data != (FName *)0x0) {
            FMemory::Free(local_90.Data);
          }
          return false;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x18;
      } while (lVar11 < iVar1);
    }
    if ((FName *)local_90.Data != (FName *)0x0) {
      FMemory::Free(local_90.Data);
    }
  }
  return true;
}

// InvalidateRecursiveAsset @ 1474e9af0

void __thiscall UAnimMontage::InvalidateRecursiveAsset(UAnimMontage *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SlotAnimTracks).ArrayNum;
  pFVar3 = (this->SlotAnimTracks).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->SlotAnimTracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSlotAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FAnimTrack::InvalidateRecursiveAsset((FAnimTrack *)(pFVar3 + 8),(UAnimCompositeBase *)this);
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// IsDynamicMontage @ 1474e9d30

bool __thiscall UAnimMontage::IsDynamicMontage(UAnimMontage *this)

{
  UPackage *pUVar1;
  UPackage *pUVar2;
  
  pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  pUVar2 = GetTransientPackage();
  return pUVar1 == pUVar2;
}

// IsValidAdditive @ 1474ea340

bool __thiscall UAnimMontage::IsValidAdditive(UAnimMontage *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < (this->SlotAnimTracks).ArrayNum) {
    uVar5 = 0;
    while( true ) {
      uVar4 = 0;
      if ((int)uVar5 < (this->SlotAnimTracks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      bVar2 = FAnimTrack::IsAdditive
                        ((FAnimTrack *)
                         ((this->SlotAnimTracks).AllocatorInstance.Data +
                         ((longlong)(int)uVar5 * 3 + 1) * 8));
      if (!bVar2) break;
      uVar5 = uVar5 + 1;
      if ((this->SlotAnimTracks).ArrayNum <= (int)uVar5) {
        return true;
      }
    }
  }
  return false;
}

// IsValidAdditiveSlot @ 1474ea470

bool __thiscall UAnimMontage::IsValidAdditiveSlot(UAnimMontage *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (0 < (this->SlotAnimTracks).ArrayNum) {
    uVar5 = 0;
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->SlotAnimTracks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->SlotAnimTracks).AllocatorInstance.Data + lVar6) == *param_1) {
        uVar4 = 0;
        if ((int)uVar5 < (this->SlotAnimTracks).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        bVar2 = FAnimTrack::IsAdditive
                          ((FAnimTrack *)
                           ((this->SlotAnimTracks).AllocatorInstance.Data +
                           ((longlong)(int)uVar5 * 3 + 1) * 8));
        return bVar2;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar5 < (this->SlotAnimTracks).ArrayNum);
  }
  return false;
}

// IsValidSectionIndex @ 1474ea680

bool __thiscall UAnimMontage::IsValidSectionIndex(UAnimMontage *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->CompositeSections).ArrayNum)) {
    return true;
  }
  return false;
}

// IsValidSectionName @ 1474ea6a0

bool __thiscall UAnimMontage::IsValidSectionName(UAnimMontage *this,FName param_1)

{
  int iVar1;
  
  iVar1 = GetSectionIndex(this,param_1);
  return iVar1 != -1;
}

// IsValidSlot @ 1474ea6c0

bool __thiscall UAnimMontage::IsValidSlot(UAnimMontage *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->SlotAnimTracks).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->SlotAnimTracks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->SlotAnimTracks).AllocatorInstance.Data + lVar6) == param_1) {
        uVar4 = 0;
        if ((int)uVar5 < (this->SlotAnimTracks).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        return 0 < *(int *)((this->SlotAnimTracks).AllocatorInstance.Data +
                           (longlong)(int)uVar5 * 0x18 + 0x10);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar5 < (this->SlotAnimTracks).ArrayNum);
  }
  return false;
}

// IsWithinPos @ 1474ea800

bool __thiscall UAnimMontage::IsWithinPos(UAnimMontage *this,int param_1,int param_2,float param_3)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = __real_bf800000;
  lVar7 = (longlong)param_2;
  lVar8 = (longlong)param_1;
  if ((param_1 < 0) || ((this->CompositeSections).ArrayNum <= param_1)) {
    fVar11 = 0.0;
  }
  else {
    uVar6 = 0;
    if (param_1 < (this->CompositeSections).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (this->CompositeSections).AllocatorInstance.Data;
    FVar1 = pFVar2[lVar8 * 0x50 + 0x19];
    if (FVar1 == (FScriptContainerElement)0x0) {
LAB_1474ea8f0:
      fVar11 = *(float *)(pFVar2 + lVar8 * 0x50 + 0x24);
    }
    else {
      fVar11 = fVar10;
      if (FVar1 != (FScriptContainerElement)0x0) {
        if (FVar1 == (FScriptContainerElement)0x1) {
          fVar11 = *(float *)(pFVar2 + lVar8 * 0x50 + 0x24) +
                   *(float *)(pFVar2 + lVar8 * 0x50 + 0x1c);
        }
        else {
          if (FVar1 != (FScriptContainerElement)0x2) goto LAB_1474ea8f0;
          fVar11 = *(float *)(pFVar2 + lVar8 * 0x50 + 0x24) *
                   *(float *)(pFVar2 + lVar8 * 0x50 + 0x20) +
                   *(float *)(pFVar2 + lVar8 * 0x50 + 0x1c);
        }
      }
    }
  }
  if ((param_2 < 0) || ((this->CompositeSections).ArrayNum <= param_2)) {
    fVar10 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    goto LAB_1474ea9ce;
  }
  uVar6 = 0;
  if (param_2 < (this->CompositeSections).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->CompositeSections).AllocatorInstance.Data;
  FVar1 = pFVar2[lVar7 * 0x50 + 0x19];
  if (FVar1 != (FScriptContainerElement)0x0) {
    if (FVar1 == (FScriptContainerElement)0x0) goto LAB_1474ea9ce;
    if (FVar1 == (FScriptContainerElement)0x1) {
      fVar10 = *(float *)(pFVar2 + lVar7 * 0x50 + 0x24) + *(float *)(pFVar2 + lVar7 * 0x50 + 0x1c);
      goto LAB_1474ea9ce;
    }
    if (FVar1 == (FScriptContainerElement)0x2) {
      fVar10 = *(float *)(pFVar2 + lVar7 * 0x50 + 0x24) * *(float *)(pFVar2 + lVar7 * 0x50 + 0x20) +
               *(float *)(pFVar2 + lVar7 * 0x50 + 0x1c);
      goto LAB_1474ea9ce;
    }
  }
  fVar10 = *(float *)(pFVar2 + lVar7 * 0x50 + 0x24);
LAB_1474ea9ce:
  fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  if (param_3 < fVar9) {
    if ((fVar11 <= param_3) && (param_3 < fVar10)) {
      return true;
    }
  }
  else if ((fVar11 <= param_3) && (param_3 <= fVar10)) {
    return true;
  }
  return false;
}

// PostLoad @ 1474f1150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimMontage::PostLoad(UAnimMontage *this)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  UAnimMontage *pUVar3;
  longlong *plVar4;
  USkeleton *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FLinkerLoad *pFVar8;
  int iVar9;
  uint uVar10;
  FAnimLinkableElement *pFVar11;
  longlong *plVar12;
  int iVar13;
  FAnimLinkableElement *pFVar14;
  longlong lVar15;
  FAnimSegment *this_01;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TLogFieldName<char_const_(&)[6]> local_c8;
  FName local_c0;
  FAssetLog local_b8 [5];
  
  pFVar11 = (FAnimLinkableElement *)this->_padding_;
  iVar13 = (int)this->_padding_;
  pFVar14 = (FAnimLinkableElement *)((longlong)iVar13 * 0xb8 + (longlong)pFVar11);
  while( true ) {
    if ((int)this->_padding_ != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAnimNotifyEvent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar14) break;
    uVar2 = (pFVar11->CachedLinkMethod).Value;
    if (uVar2 == '\0') {
LAB_1474f1207:
      fVar21 = pFVar11->LinkValue;
    }
    else if (uVar2 == '\x01') {
      fVar21 = pFVar11->SegmentBeginTime + pFVar11->LinkValue;
    }
    else {
      if (uVar2 != '\x02') goto LAB_1474f1207;
      fVar21 = pFVar11->SegmentLength * pFVar11->LinkValue + pFVar11->SegmentBeginTime;
    }
    FAnimLinkableElement::Link(pFVar11,(UAnimSequenceBase *)this,fVar21,0);
    fVar21 = *(float *)&pFVar11[1].LinkedSequence.field0_0x0;
    if (fVar21 != 0.0) {
      uVar2 = (pFVar11->CachedLinkMethod).Value;
      if (uVar2 == '\0') {
LAB_1474f1256:
        fVar19 = pFVar11->LinkValue;
      }
      else if (uVar2 == '\x01') {
        fVar19 = pFVar11->SegmentBeginTime + pFVar11->LinkValue;
      }
      else {
        if (uVar2 != '\x02') goto LAB_1474f1256;
        fVar19 = pFVar11->SegmentLength * pFVar11->LinkValue + pFVar11->SegmentBeginTime;
      }
      FAnimLinkableElement::Link(pFVar11 + 2,(UAnimSequenceBase *)this,fVar21 + fVar19,0);
    }
    pFVar11 = (FAnimLinkableElement *)&pFVar11[3].LinkedSequence;
  }
  UAnimCompositeBase::PostLoad((UAnimCompositeBase *)this);
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar21 = __real_38d1b717;
  for (iVar13 = 0; (-1 < iVar13 && (iVar13 < (this->SlotAnimTracks).ArrayNum)); iVar13 = iVar13 + 1)
  {
    if ((iVar13 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FAnimTrack::ValidateSegmentTimes
              ((FAnimTrack *)
               ((this->SlotAnimTracks).AllocatorInstance.Data + ((longlong)iVar13 * 3 + 1) * 8));
    fVar19 = 0.0;
    for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (this->SlotAnimTracks).ArrayNum)); iVar9 = iVar9 + 1) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (this->SlotAnimTracks).AllocatorInstance.Data;
      lVar15 = (longlong)iVar9 * 3 + 1;
      fVar20 = fVar19;
      if ((0 < *(int *)(pFVar17 + lVar15 * 8 + 8)) &&
         (fVar20 = FAnimTrack::GetLength((FAnimTrack *)(pFVar17 + lVar15 * 8)), fVar20 <= fVar19)) {
        fVar20 = fVar19;
      }
      fVar19 = fVar20;
    }
    fVar20 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    if (fVar21 < (float)((uint)(fVar19 - fVar20) & uVar10)) {
      if (3 < (byte)LogAnimMontage._0_1_) {
        local_c8.Name = (char (*) [6])0x15069891c;
        local_b8[0].Path = (wchar_t *)0x0;
        local_b8[0].PackagePath = (FPackagePath *)0x0;
        local_b8[0].Object = (UObject *)this;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,UE::FAssetLog>
                  ((FLogCategoryBase *)&LogAnimMontage,&::LOG_Static,&local_c8,local_b8);
      }
      (**(code **)(this->_padding_ + 0x3f0))(this,fVar19);
    }
  }
  iVar13 = (this->CompositeSections).ArrayNum;
  pFVar11 = (FAnimLinkableElement *)(this->CompositeSections).AllocatorInstance.Data;
  pFVar14 = (FAnimLinkableElement *)((longlong)pFVar11 + (longlong)iVar13 * 0x50);
  do {
    if ((this->CompositeSections).ArrayNum != iVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FCompositeSection,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar14) {
      if ((this->bEnableRootMotionTranslation != false) ||
         (this->bEnableRootMotionRotation != false)) {
        pFVar18 = (this->SlotAnimTracks).AllocatorInstance.Data;
        iVar13 = (this->SlotAnimTracks).ArrayNum;
        pFVar17 = pFVar18 + 0x10;
        pFVar1 = pFVar18 + (longlong)iVar13 * 0x18;
        while( true ) {
          if ((this->SlotAnimTracks).ArrayNum != iVar13) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FSlotAnimationTrack,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar18 == pFVar1) break;
          iVar9 = *(int *)pFVar17;
          plVar12 = *(longlong **)(pFVar17 + -8);
          plVar16 = plVar12 + (longlong)iVar9 * 4;
          while( true ) {
            if (*(int *)pFVar17 != iVar9) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            if (plVar12 == plVar16) break;
            plVar4 = (longlong *)*plVar12;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x3c8))(plVar4,1,(this->RootMotionRootLock).Value);
            }
            plVar12 = plVar12 + 4;
          }
          pFVar18 = pFVar18 + 0x18;
          pFVar17 = pFVar17 + 0x18;
        }
      }
      if (((GIsCookerLoadingPackage == false) &&
          (this_00 = (USkeleton *)this->_padding_, this_00 != (USkeleton *)0x0)) &&
         (uVar10 = 0, 0 < (this->SlotAnimTracks).ArrayNum)) {
        lVar15 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < (this->SlotAnimTracks).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_c0 = *(FName *)((this->SlotAnimTracks).AllocatorInstance.Data + lVar15);
          USkeleton::RegisterSlotNode(this_00,&local_c0);
          uVar10 = uVar10 + 1;
          lVar15 = lVar15 + 0x18;
        } while ((int)uVar10 < (this->SlotAnimTracks).ArrayNum);
      }
      pFVar8 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
      if (pFVar8 != (FLinkerLoad *)0x0) {
        UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
      }
      CollectMarkers(this);
      return;
    }
    pUVar3 = (pFVar11->LinkedMontage).field0_0x0.DebugPtr;
    if ((pUVar3 != (UAnimMontage *)0x0) && (pFVar11->SegmentIndex != -1)) {
      uVar10 = pFVar11->SlotIndex;
      lVar15 = (longlong)(int)uVar10;
      if ((uVar10 != 0xffffffff) &&
         ((-1 < (int)uVar10 && ((int)uVar10 < (pUVar3->SlotAnimTracks).ArrayNum)))) {
        uVar7 = 0;
        if ((int)uVar10 < (pUVar3->SlotAnimTracks).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar17 = (pUVar3->SlotAnimTracks).AllocatorInstance.Data;
        uVar10 = pFVar11->SegmentIndex;
        if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(pFVar17 + lVar15 * 0x18 + 0x10))) {
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(pFVar17 + lVar15 * 0x18 + 0x10)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_01 = (FAnimSegment *)
                    ((longlong)(int)uVar10 * 0x20 + *(longlong *)(pFVar17 + lVar15 * 0x18 + 8));
          if ((this_01->AnimReference).field0_0x0.DebugPtr ==
              (pFVar11->LinkedSequence).field0_0x0.DebugPtr) {
            if ((pFVar11->CachedLinkMethod).Value == '\x01') {
              fVar21 = FAnimSegment::GetLength(this_01);
              if (pFVar11->LinkValue <= fVar21) {
                fVar21 = pFVar11->LinkValue;
              }
              if (fVar21 <= 0.0) {
                fVar21 = 0.0;
              }
              pFVar11->LinkValue = fVar21;
            }
            pFVar11->SegmentBeginTime = this_01->StartPos;
            fVar21 = FAnimSegment::GetLength(this_01);
            pFVar11->SegmentLength = fVar21;
          }
        }
      }
    }
    uVar2 = (pFVar11->CachedLinkMethod).Value;
    if (uVar2 == '\0') {
LAB_1474f15b9:
      fVar21 = pFVar11->LinkValue;
    }
    else if (uVar2 == '\x01') {
      fVar21 = pFVar11->LinkValue + pFVar11->SegmentBeginTime;
    }
    else {
      if (uVar2 != '\x02') goto LAB_1474f15b9;
      fVar21 = pFVar11->LinkValue * pFVar11->SegmentLength + pFVar11->SegmentBeginTime;
    }
    FAnimLinkableElement::Link(pFVar11,(UAnimSequenceBase *)this,fVar21,0);
    pFVar11 = (FAnimLinkableElement *)&pFVar11[1].SegmentLength;
  } while( true );
}

// PreSave @ 1474f1b40

void __thiscall UAnimMontage::PreSave(UAnimMontage *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RefreshBranchingPointMarkers @ 1474f2d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UAnimMontage::RefreshBranchingPointMarkers(UAnimMontage *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FAnimNotifyEvent *this_00;
  float fVar10;
  undefined1 auStackY_118 [32];
  uint local_c8;
  FIdentityFunctor local_c4 [4];
  FBranchingPointMarker local_c0;
  FBranchingPointMarker local_b4;
  FBranchingPointMarker local_a8;
  FBranchingPointMarker local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  piVar1 = &(this->BranchingPointMarkers).ArrayMax;
  (this->BranchingPointMarkers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->BranchingPointMarkers).AllocatorInstance,0,piVar1);
  }
  pTVar2 = &this->BranchingPointStateNotifyIndices;
  piVar1 = &(this->BranchingPointStateNotifyIndices).ArrayMax;
  (this->BranchingPointStateNotifyIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  local_48 = (void *)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_40 = 0;
  local_c8 = 0;
  if (0 < iVar3) {
    do {
      uVar6 = local_c8;
      uVar8 = 0;
      if ((int)local_c8 < (int)this->_padding_) {
        uVar8 = ~local_c8 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FAnimNotifyEvent *)((longlong)(int)uVar6 * 0xb8 + this->_padding_);
      bVar7 = FAnimNotifyEvent::IsBranchingPoint(this_00);
      if (bVar7) {
        fVar10 = FAnimNotifyEvent::GetTriggerTime(this_00);
        local_c0._8_4_ = local_c0._8_4_ & 0xffffff00;
        local_c0.TriggerTime = fVar10;
        local_c0.NotifyIndex = local_c8;
        local_a8.NotifyEventType.Value = local_c0.NotifyEventType.Value;
        local_a8._9_3_ = local_c0._9_3_;
        local_a8._0_8_ = local_c0._0_8_;
        AddBranchingPointMarker
                  (this,&local_a8,
                   (TMap<float,FAnimNotifyEvent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,FAnimNotifyEvent_*,0>_>
                    *)local_88);
        if ((this_00->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
          fVar10 = FAnimNotifyEvent::GetEndTriggerTime(this_00);
          local_b4.NotifyEventType.Value = '\x01';
          local_b4.TriggerTime = fVar10;
          local_b4.NotifyIndex = local_c8;
          local_98.NotifyEventType.Value = '\x01';
          local_98._9_3_ = local_b4._9_3_;
          local_98._0_8_ = local_b4._0_8_;
          AddBranchingPointMarker
                    (this,&local_98,
                     (TMap<float,FAnimNotifyEvent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,FAnimNotifyEvent_*,0>_>
                      *)local_88);
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->BranchingPointStateNotifyIndices).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->BranchingPointStateNotifyIndices).ArrayNum = iVar9 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8;
        }
      }
      local_c8 = local_c8 + 1;
    } while ((int)local_c8 < iVar3);
  }
  iVar3 = (this->BranchingPointMarkers).ArrayNum;
  if (0 < iVar3) {
    AlgoImpl::
    IntroSortInternal<FBranchingPointMarker,int,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::__l13::FCompareNotifyTickMarkersTime>_>
              ((FBranchingPointMarker *)(this->BranchingPointMarkers).AllocatorInstance.Data,iVar3,
               local_c4[0],(FCompareNotifyTickMarkersTime *)local_c4);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// RefreshCacheData @ 1474f30c0

void __thiscall UAnimMontage::RefreshCacheData(UAnimMontage *this)

{
  UAnimSequenceBase::RefreshCacheData((UAnimSequenceBase *)this);
  RefreshBranchingPointMarkers(this);
  return;
}

// SetCompositeLength @ 1474f83c0

void __thiscall UAnimMontage::SetCompositeLength(UAnimMontage *this,float param_1)

{
  *(float *)&this->_padding_ = param_1;
  return;
}

// StaticRegisterNativesUAnimMontage @ 1474facb0

void __cdecl UAnimMontage::StaticRegisterNativesUAnimMontage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UAnimMontage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickAssetPlayer @ 1474fbbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimMontage::TickAssetPlayer
          (UAnimMontage *this,FAnimTickRecord *param_1,FAnimNotifyQueue *param_2,
          FAnimAssetTickContext *param_3)

{
  FMarkerSyncAnimPosition *pFVar1;
  FMarkerSyncAnimPosition *pFVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FMarkerTickRecord *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FName FVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  FName *pFVar18;
  FString *pFVar19;
  undefined1 *puVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_fffffffffffffe78;
  int *piVar23;
  int local_158 [2];
  int local_150 [2];
  FScriptContainerElement *local_148;
  FName local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [20];
  undefined1 local_84 [20];
  undefined1 local_70 [72];
  undefined4 uVar24;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  bVar13 = true;
  if (param_3->bIsLeader != false) {
    if ((param_1->DeltaTimeRecord == (FDeltaTimeRecord *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Instance.DeltaTimeRecord",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                            ,0x4ec,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar3 = (param_1->field13_0x40).Montage.CurrentPosition;
    fVar22 = param_1->DeltaTimeRecord->Delta;
    fVar4 = param_1->DeltaTimeRecord->Previous;
    param_3->LeaderDelta = fVar22;
    fVar21 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    param_3->PreviousAnimLengthRatio = fVar4 / fVar21;
    if ((((fVar22 != 0.0) && (param_1->bCanUseMarkerSync != false)) &&
        (pFVar6 = param_1->MarkerTickRecord, pFVar6 != (FMarkerTickRecord *)0x0)) &&
       (param_3->bIsMarkerPositionValid != false)) {
      iVar5 = (pFVar6->PreviousMarker).MarkerIndex;
      iVar15 = (param_1->bLooping != false) - 2;
      if ((iVar15 < iVar5) && (iVar15 < (pFVar6->NextMarker).MarkerIndex)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      lVar16 = this->_padding_;
      pFVar2 = &(param_3->MarkerTickContext).MarkerSyncStartPostion;
      if (bVar14) {
        puVar20 = local_98;
        iVar15 = (pFVar6->NextMarker).MarkerIndex;
      }
      else {
        piVar23 = local_150;
        local_150[0] = -2;
        local_158[0] = -2;
        (**(code **)(lVar16 + 0x388))
                  (this,fVar4,0,(param_3->MarkerTickContext).ValidMarkers,piVar23,local_158);
        uVar24 = (undefined4)((ulonglong)piVar23 >> 0x20);
        lVar16 = this->_padding_;
        puVar20 = local_84;
        iVar5 = local_150[0];
        iVar15 = local_158[0];
      }
      puVar17 = (uint *)(**(code **)(lVar16 + 0x390))
                                  (this,puVar20,iVar5,iVar15,CONCAT44(uVar24,fVar4),0);
      pTVar7 = (param_3->MarkerTickContext).ValidMarkers;
      uVar9 = puVar17[1];
      uVar10 = puVar17[2];
      uVar11 = puVar17[3];
      (pFVar2->PreviousMarkerName).ComparisonIndex.Value = *puVar17;
      (param_3->MarkerTickContext).MarkerSyncStartPostion.PreviousMarkerName.Number = uVar9;
      (param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName.ComparisonIndex.Value =
           uVar10;
      (param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName.Number = uVar11;
      (param_3->MarkerTickContext).MarkerSyncStartPostion.PositionBetweenMarkers = (float)puVar17[4]
      ;
      (**(code **)(this->_padding_ + 0x388))(this,fVar3,0,pTVar7,pFVar6,&pFVar6->NextMarker);
      bVar13 = false;
      pFVar18 = (FName *)(**(code **)(this->_padding_ + 0x390))
                                   (this,local_70,(pFVar6->PreviousMarker).MarkerIndex,
                                    (pFVar6->NextMarker).MarkerIndex,fVar3,0);
      pFVar1 = &(param_3->MarkerTickContext).MarkerSyncEndPostion;
      FVar12 = pFVar18[1];
      pFVar1->PreviousMarkerName = *pFVar18;
      (param_3->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName = FVar12;
      (param_3->MarkerTickContext).MarkerSyncEndPostion.PositionBetweenMarkers =
           (float)pFVar18[2].ComparisonIndex.Value;
      TArray<FPassedMarker,TSizedDefaultAllocator<32>_>::operator=
                (&(param_3->MarkerTickContext).MarkersPassedThisTick,
                 (param_1->field13_0x40).Montage.MarkersPassedThisTick);
      if (((param_3->MarkerTickContext).MarkersPassedThisTick.ArrayNum == 0) && (bVar14)) {
        if ((param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName !=
            (param_3->MarkerTickContext).MarkerSyncEndPostion.NextMarkerName) {
          pFVar19 = UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)(param_1->SourceAsset).field0_0x0.DebugPtr,
                               &local_108,(UObject *)0x0,None);
          if ((pFVar19->Data).ArrayNum == 0) {
            local_148 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_148 = (pFVar19->Data).AllocatorInstance.Data;
          }
          MakePositionMessage(&local_118,pFVar1);
          MakePositionMessage(&local_128,pFVar2);
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartPosition.NextMarkerName == EndPosition.NextMarkerName",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                              ,0x51d,
                              L"StartPosition %s\nEndPosition %s\nPrevTime to CurrentTimeAsset: %.3f - %.3f Delta: %.3f\nAsset = %s"
                             );
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (pFVar2->PreviousMarkerName != pFVar1->PreviousMarkerName) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)(param_1->SourceAsset).field0_0x0.DebugPtr,&local_d8,
                     (UObject *)0x0,None);
          MakePositionMessage(&local_e8,pFVar1);
          MakePositionMessage(&local_f8,pFVar2);
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartPosition.PreviousMarkerName == EndPosition.PreviousMarkerName",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                              ,0x51e,
                              L"StartPosition %s\nEndPosition %s\nPrevTime - CurrentTimeAsset: %.3f - %.3f Delta: %.3f\nAsset = %s"
                             );
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      if (4 < (byte)LogAnimMarkerSync._0_1_) {
        FMarkerSyncAnimPosition::ToString
                  (&(param_3->MarkerTickContext).MarkerSyncEndPostion,&local_a8);
        FMarkerSyncAnimPosition::ToString
                  (&(param_3->MarkerTickContext).MarkerSyncStartPostion,&local_b8);
        ::FName::ToString(&this->SyncGroup,&local_c8);
        local_140 = (FName)this->_padding_;
        ::FName::ToString(&local_140,&local_138);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          fVar22 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
          param_3->AnimLengthRatio = fVar3 / fVar22;
          return;
        }
      }
    }
    fVar22 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    param_3->AnimLengthRatio = fVar3 / fVar22;
    if (!bVar13) {
      return;
    }
  }
  pFVar6 = param_1->MarkerTickRecord;
  if (pFVar6 != (FMarkerTickRecord *)0x0) {
    (pFVar6->PreviousMarker).MarkerIndex = -2;
    (pFVar6->NextMarker).MarkerIndex = -2;
  }
  return;
}

// execCreateSlotAnimationAsDynamicMontage_WithBlendSettings @ 147504dd0

void __cdecl
UAnimMontage::execCreateSlotAnimationAsDynamicMontage_WithBlendSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimMontage *pUVar2;
  TObjectPtr<UBlendProfile>_u_0 *pTVar3;
  TObjectPtr<UBlendProfile>_u_0 *pTVar4;
  float local_res10 [2];
  int local_res18 [2];
  float local_res20 [2];
  FName local_78;
  UAnimSequenceBase *local_70;
  TObjectPtr<UBlendProfile>_u_0 local_68;
  FAlphaBlendArgs local_60;
  undefined1 local_50;
  TObjectPtr<UBlendProfile>_u_0 local_48;
  FAlphaBlendArgs local_40;
  undefined1 local_30;
  
  local_70 = (UAnimSequenceBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.DebugPtr = (UBlendProfile *)0x0;
  FAlphaBlendArgs::FAlphaBlendArgs(&local_60);
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48.DebugPtr = (UBlendProfile *)0x0;
  pTVar4 = &local_68;
  if ((TObjectPtr<UBlendProfile>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UBlendProfile>_u_0 *)0x0) {
    pTVar4 = (TObjectPtr<UBlendProfile>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FAlphaBlendArgs::FAlphaBlendArgs(&local_40);
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0.0;
  pTVar3 = &local_48;
  if ((TObjectPtr<UBlendProfile>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UBlendProfile>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UBlendProfile>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                     (local_70,local_78,(FMontageBlendSettings *)&pTVar4->ObjectPtr,
                      (FMontageBlendSettings *)&pTVar3->ObjectPtr,local_res20[0],local_res18[0],
                      local_res10[0]);
  *(UAnimMontage **)param_3 = pUVar2;
  return;
}

// execGetBlendInArgs @ 147505040

void __cdecl UAnimMontage::execGetBlendInArgs(UObject *param_1,FFrame *param_2,void *param_3)

{
  TObjectPtr<UCurveFloat>_u_0 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAlphaBlendArgs::FAlphaBlendArgs
            ((FAlphaBlendArgs *)&local_18.ObjectPtr,(FAlphaBlend *)&param_1[4].field_0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  *(TObjectPtr<UCurveFloat>_u_0 *)param_3 = local_18;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_c;
  *(undefined4 *)((longlong)param_3 + 8) = local_10;
  return;
}

// execGetBlendOutArgs @ 1475050c0

void __cdecl UAnimMontage::execGetBlendOutArgs(UObject *param_1,FFrame *param_2,void *param_3)

{
  TObjectPtr<UCurveFloat>_u_0 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAlphaBlendArgs::FAlphaBlendArgs
            ((FAlphaBlendArgs *)&local_18.ObjectPtr,(FAlphaBlend *)(param_1 + 6));
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  *(TObjectPtr<UCurveFloat>_u_0 *)param_3 = local_18;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_c;
  *(undefined4 *)((longlong)param_3 + 8) = local_10;
  return;
}

// execGetDefaultBlendInTime @ 147505590

void __cdecl UAnimMontage::execGetDefaultBlendInTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 5);
  return;
}

// execGetDefaultBlendOutTime @ 1475055c0

void __cdecl
UAnimMontage::execGetDefaultBlendOutTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[6].field_0x8;
  return;
}

// execGetFirstAnimReference @ 147505670

void __cdecl UAnimMontage::execGetFirstAnimReference(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(param_1 + 9) != 0) {
    if (*(int *)(param_1 + 9) < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)(*(longlong *)&param_1[8].field_0x20 + 0x10) != 0) {
      if (*(int *)(param_1 + 9) < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar1 = *(longlong *)&param_1[8].field_0x20;
      if (*(int *)(lVar1 + 0x10) < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(undefined8 *)param_3 = **(undefined8 **)(lVar1 + 8);
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetGroupName @ 1475057a0

void __cdecl UAnimMontage::execGetGroupName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName local_res8 [4];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(USkeleton **)&param_1[1].field_0x10 != (USkeleton *)0x0) && (0 < *(int *)(param_1 + 9))) {
    USkeleton::GetSlotGroupName(*(USkeleton **)&param_1[1].field_0x10,local_res8);
    *(FName *)param_3 = local_res8[0];
    return;
  }
  *(FName *)param_3 = FAnimSlotGroup::DefaultGroupName;
  return;
}

// execGetNumSections @ 147505a00

void __cdecl UAnimMontage::execGetNumSections(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[8].field_0x18;
  return;
}

// execGetSectionIndex @ 147505a30

void __cdecl UAnimMontage::execGetSectionIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = GetSectionIndex((UAnimMontage *)param_1,local_res10);
  *(int *)param_3 = iVar2;
  return;
}

// execGetSectionName @ 147505ad0

void __cdecl UAnimMontage::execGetSectionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[8].field_0x18 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[8].field_0x18) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)param_3 =
         *(undefined8 *)(*(longlong *)&param_1[8].field_0x10 + 0x30 + lVar4 * 0x50);
  }
  return;
}

// execIsDynamicMontage @ 147505ca0

void __cdecl UAnimMontage::execIsDynamicMontage(UObject *param_1,FFrame *param_2,void *param_3)

{
  UPackage *pUVar1;
  UPackage *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  pUVar2 = GetTransientPackage();
  *(bool *)param_3 = pUVar1 == pUVar2;
  return;
}

// execIsValidAdditiveSlot @ 147506380

void __cdecl UAnimMontage::execIsValidAdditiveSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong local_28 [2];
  
  uVar6 = 0;
  local_28[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  plVar8 = local_28;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar8 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 9)) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < *(int *)(param_1 + 9)) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(uVar7 + *(longlong *)&param_1[8].field_0x20) == *plVar8) {
        uVar4 = 0;
        if ((int)uVar5 < *(int *)(param_1 + 9)) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = FAnimTrack::IsAdditive
                          ((FAnimTrack *)
                           (*(longlong *)&param_1[8].field_0x20 + ((longlong)(int)uVar5 * 3 + 1) * 8
                           ));
        *(bool *)param_3 = bVar3;
        return;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar7 = uVar7 + 0x18;
    } while ((int)(uVar5 + 1) < *(int *)(param_1 + 9));
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsValidSectionName @ 147506520

void __cdecl UAnimMontage::execIsValidSectionName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = GetSectionIndex((UAnimMontage *)param_1,local_res10);
  *(bool *)param_3 = iVar2 != -1;
  return;
}

