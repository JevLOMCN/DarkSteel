// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 97

// HandleBugScreenShot @ 147aef460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::HandleBugScreenShot(AHUD *this)

{
  return;
}

// StaticClass @ 147b16e70

UClass * __cdecl AHUD::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AHUD.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HUD",&Z_Registration_Info_UClass_AHUD.InnerSingleton,
               StaticRegisterNativesAHUD,0x3b0,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AHUD>,InternalVTableHelperCtorCaller<AHUD>
               ,aFStackX_8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AHUD.InnerSingleton;
}

// AHUD @ 147cc2ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AHUD * __thiscall AHUD::AHUD(AHUD *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AHUD__6B_;
  (this->PlayerOwner).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->PostRenderedActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostRenderedActors).ArrayNum = 0;
  (this->PostRenderedActors).ArrayMax = 0;
  (this->DebugDisplay).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDisplay).ArrayNum = 0;
  (this->DebugDisplay).ArrayMax = 0;
  (this->ToggledDebugCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToggledDebugCategories).ArrayNum = 0;
  (this->ToggledDebugCategories).ArrayMax = 0;
  (this->Canvas).field0_0x0.DebugPtr = (UCanvas *)0x0;
  (this->DebugCanvas).field0_0x0.DebugPtr = (UCanvas *)0x0;
  (this->DebugTextList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTextList).ArrayNum = 0;
  (this->DebugTextList).ArrayMax = 0;
  (this->ShowDebugTargetDesiredClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ShowDebugTargetActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->HitBoxMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitBoxMap).ArrayNum = 0;
  (this->HitBoxMap).ArrayMax = 0;
  (this->HitBoxHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitBoxHits).ArrayNum = 0;
  (this->HitBoxHits).ArrayMax = 0;
  *(undefined8 *)&(this->HitBoxesOver).Elements = 0;
  *(undefined8 *)&(this->HitBoxesOver).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HitBoxesOver).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x30 = 0xffffffff;
  (this->HitBoxesOver).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HitBoxesOver).HashSize = 0;
  return this;
}

// AHUD @ 147cc2dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AHUD * __thiscall AHUD::AHUD(AHUD *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AHUD__6B_;
  (this->PlayerOwner).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->PostRenderedActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostRenderedActors).ArrayNum = 0;
  (this->PostRenderedActors).ArrayMax = 0;
  (this->DebugDisplay).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDisplay).ArrayNum = 0;
  (this->DebugDisplay).ArrayMax = 0;
  (this->ToggledDebugCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToggledDebugCategories).ArrayNum = 0;
  (this->ToggledDebugCategories).ArrayMax = 0;
  (this->Canvas).field0_0x0.DebugPtr = (UCanvas *)0x0;
  (this->DebugCanvas).field0_0x0.DebugPtr = (UCanvas *)0x0;
  (this->DebugTextList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTextList).ArrayNum = 0;
  (this->DebugTextList).ArrayMax = 0;
  (this->ShowDebugTargetDesiredClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ShowDebugTargetActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->HitBoxMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitBoxMap).ArrayNum = 0;
  (this->HitBoxMap).ArrayMax = 0;
  (this->HitBoxHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitBoxHits).ArrayNum = 0;
  (this->HitBoxHits).ArrayMax = 0;
  *(undefined8 *)&(this->HitBoxesOver).Elements = 0;
  *(undefined8 *)&(this->HitBoxesOver).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HitBoxesOver).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x34 = 0;
  (this->HitBoxesOver).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HitBoxesOver).HashSize = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  *(undefined1 *)&this->_padding_ = 2;
  AActor::SetHidden((AActor *)this,true);
  this->bLostFocusPaused = '\0';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xf7;
  this->bShowHUD = '\x01';
  AActor::SetCanBeDamaged((AActor *)this,false);
  this->bEnableDebugTextShadow = '\0';
  return this;
}

// ~AHUD @ 147cc83b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::~AHUD(AHUD *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7AHUD__6B_;
  (this->HitBoxesOver).HashSize = 0;
  FVar1 = (this->HitBoxesOver).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HitBoxesOver).Elements);
  pFVar2 = (this->HitBoxHits).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->HitBoxMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDebugTextInfo,int>
            ((FDebugTextInfo *)(this->DebugTextList).AllocatorInstance.Data,
             (this->DebugTextList).ArrayNum);
  pFVar2 = (this->DebugTextList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ToggledDebugCategories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DebugDisplay).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PostRenderedActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// AddActorToDebugList @ 147cd0960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AHUD::AddActorToDebugList
          (AActor *param_1,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2,UWorld *param_3)

{
  bool bVar1;
  UWorld *pUVar2;
  AActor *local_res8;
  
  if ((((param_1 != (AActor *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) &&
      (local_res8 = param_1, pUVar2 = AActor::GetWorld(param_1), pUVar2 == param_3)) &&
     (bVar1 = AActor::WasRecentlyRendered(local_res8,__real_3e4ccccd), bVar1)) {
    TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
              (param_2,&local_res8);
  }
  return;
}

// AddComponentOwnerToDebugList @ 147cd0bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AHUD::AddComponentOwnerToDebugList
          (UActorComponent *param_1,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2,
          UWorld *param_3)

{
  bool bVar1;
  UWorld *pUVar2;
  AActor *local_res8;
  
  if ((((param_1 != (UActorComponent *)0x0) &&
       (local_res8 = param_1->OwnerPrivate, local_res8 != (AActor *)0x0)) &&
      (((uint)local_res8->_padding_ >> 0x1e & 1) == 0)) &&
     ((pUVar2 = AActor::GetWorld(local_res8), pUVar2 == param_3 &&
      (bVar1 = AActor::WasRecentlyRendered(local_res8,__real_3e4ccccd), bVar1)))) {
    TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
              (param_2,&local_res8);
  }
  return;
}

// AddDebugText @ 147cd0c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::AddDebugText(AHUD *this,FString *param_1,AActor *param_2,float param_3,
                  TVector<double> *param_4,TVector<double> *param_5,FColor param_6,bool param_7,
                  bool param_8,bool param_9,UFont *param_10,float param_11,bool param_12)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  FString local_88;
  AActor *local_78;
  float local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  FColor_u_0 local_38;
  bool local_34;
  bool local_33;
  bool local_32;
  UFont *local_30;
  float local_28;
  bool local_24;
  
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if (&local_88 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_88.Data.ArrayMax = 0;
    local_88.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_88,uVar1,&local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_68 = (param_4->field0_0x0)._s_0.X;
  dStack_60 = (param_4->field0_0x0)._s_0.Y;
  local_58 = (param_4->field0_0x0)._s_0.Z;
  local_50 = (param_5->field0_0x0)._s_0.X;
  dStack_48 = (param_5->field0_0x0)._s_0.Y;
  local_40 = (param_5->field0_0x0)._s_0.Z;
  local_38 = param_6.field0_0x0;
  local_34 = param_7;
  local_33 = param_8;
  local_32 = param_9;
  local_30 = param_10;
  local_24 = param_12;
  local_28 = param_11;
  local_78 = param_2;
  local_70 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_AddDebugText);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// AddDebugText_Implementation @ 147cd0db0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::AddDebugText_Implementation
          (AHUD *this,FString *param_1,AActor *param_2,float param_3,TVector<double> *param_4,
          TVector<double> *param_5,FColor param_6,bool param_7,bool param_8,bool param_9,
          UFont *param_10,float param_11,bool param_12)

{
  int *piVar1;
  double dVar2;
  USceneComponent *pUVar3;
  code *pcVar4;
  FColor_u_0 FVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UFunction *pUVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  int local_res18 [2];
  AActor *local_38;
  undefined1 local_30;
  
  if (param_2 == (AActor *)0x0) {
    return;
  }
  iVar8 = (param_1->Data).ArrayNum;
  FVar5 = param_6.field0_0x0;
  if (param_6.field0_0x0 == FColor::Transparent.field0_0x0) {
    FVar5 = FColor::White.field0_0x0;
  }
  uVar11 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar11 = 0;
  }
  if (uVar11 == 0) {
    local_30 = 0;
    local_38 = param_2;
    pUVar10 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_RemoveDebugText);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar10,&local_38);
    return;
  }
  iVar8 = FindDebugTextListIntervalForActor(this,param_2,(int *)&param_6,local_res18);
  if (iVar8 < 1) {
    iVar8 = (this->DebugTextList).ArrayNum;
    piVar1 = &(this->DebugTextList).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x880,&(this->DebugTextList).AllocatorInstance,piVar1);
    }
    (this->DebugTextList).ArrayNum = iVar8 + 1;
  }
  else {
    if (!param_7) {
      lVar12 = (longlong)(int)param_6.field0_0x0;
      uVar11 = 0;
      if ((int)param_6.field0_0x0 < (this->DebugTextList).ArrayNum) {
        uVar11 = ~(uint)param_6.field0_0x0 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this->DebugTextList).AllocatorInstance.Data + lVar12 * 0x80;
      goto LAB_147cd0f81;
    }
    iVar9 = TAutoConsoleVariable<int>::GetValueOnGameThread(&GMaxDebugTextStringsPerActorCVar);
    if ((0 < iVar9) && (iVar9 <= iVar8)) {
      return;
    }
    iVar8 = local_res18[0] + 1;
    TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
              (&this->DebugTextList,iVar8,1);
  }
  pFVar13 = (this->DebugTextList).AllocatorInstance.Data + (longlong)iVar8 * 0x80;
  *(undefined8 *)(pFVar13 + 8) = 0;
  *(undefined8 *)(pFVar13 + 0x10) = 0;
  *(undefined8 *)(pFVar13 + 0x18) = 0;
  *(undefined8 *)(pFVar13 + 0x20) = 0;
  *(undefined8 *)(pFVar13 + 0x28) = 0;
  *(undefined8 *)(pFVar13 + 0x30) = 0;
  *(undefined8 *)pFVar13 = 0;
  *(undefined8 *)(pFVar13 + 0x38) = 0;
  *(undefined8 *)(pFVar13 + 0x40) = 0;
  *(undefined8 *)(pFVar13 + 0x48) = 0;
  *(undefined4 *)(pFVar13 + 0x50) = 0;
  *(uint *)(pFVar13 + 0x54) = *(uint *)(pFVar13 + 0x54) & 0xfffffff8;
  *(undefined8 *)(pFVar13 + 0x58) = 0;
  *(undefined8 *)(pFVar13 + 0x60) = 0;
  *(undefined8 *)(pFVar13 + 0x68) = 0;
  *(undefined8 *)(pFVar13 + 0x70) = 0;
  *(undefined4 *)(pFVar13 + 0x78) = 0x3f800000;
LAB_147cd0f81:
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    *(AActor **)pFVar13 = param_2;
    dVar6 = (param_4->field0_0x0)._s_0.Y;
    dVar2 = (param_4->field0_0x0)._s_0.Z;
    *(double *)(pFVar13 + 8) = (param_4->field0_0x0)._s_0.X;
    *(double *)(pFVar13 + 0x10) = dVar6;
    *(double *)(pFVar13 + 0x18) = dVar2;
    dVar6 = (param_5->field0_0x0)._s_0.Y;
    dVar2 = (param_5->field0_0x0)._s_0.Z;
    *(double *)(pFVar13 + 0x20) = (param_5->field0_0x0)._s_0.X;
    *(double *)(pFVar13 + 0x28) = dVar6;
    *(double *)(pFVar13 + 0x30) = dVar2;
    ::FString::operator=((FString *)(pFVar13 + 0x38),param_1);
    *(uint *)(pFVar13 + 0x54) = *(uint *)(pFVar13 + 0x54) & 0xfffffffe;
    *(float *)(pFVar13 + 0x48) = param_3;
    *(float *)(pFVar13 + 0x4c) = param_3;
    *(uint *)(pFVar13 + 0x54) =
         (uint)param_8 | *(uint *)(pFVar13 + 0x54) & 0xfffffffd | (uint)param_9 * 2;
    ((FColor_u_0 *)(pFVar13 + 0x50))->_s_0 = (FColor_u_0_s_0)FVar5;
    pUVar3 = (param_2->RootComponent).field0_0x0.DebugPtr;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pUVar3 != (USceneComponent *)0x0) {
      uVar14 = *(undefined4 *)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64;
      uVar15 = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uVar16 = *(undefined4 *)((pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uVar17 = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      uVar18 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
    }
    *(undefined4 *)(pFVar13 + 0x58) = uVar14;
    *(undefined4 *)(pFVar13 + 0x5c) = uVar15;
    *(undefined4 *)(pFVar13 + 0x60) = uVar16;
    *(undefined4 *)(pFVar13 + 100) = uVar17;
    *(undefined8 *)(pFVar13 + 0x68) = uVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_10 != (UFont *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_10);
    }
    *(UFont **)(pFVar13 + 0x70) = param_10;
    *(uint *)(pFVar13 + 0x54) = *(uint *)(pFVar13 + 0x54) & 0xfffffffb;
    *(uint *)(pFVar13 + 0x54) = *(uint *)(pFVar13 + 0x54) | (uint)param_12 << 2;
    *(float *)(pFVar13 + 0x78) = param_11;
  }
  return;
}

// AddHitBox @ 147cd10b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::AddHitBox(AHUD *this,TVector2<double> *param_1,TVector2<double> *param_2,FName param_3,
               bool param_4,int param_5)

{
  int *piVar1;
  TArray<FHUDHitBox,TSizedDefaultAllocator<32>_> *pTVar2;
  FHUDHitBox *pFVar3;
  code *pcVar4;
  double dVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FHUDHitBox *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FName local_res20;
  FString local_e8;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8;
  FHUDHitBox local_98;
  FHUDHitBox local_68;
  
  pTVar2 = &this->HitBoxMap;
  iVar9 = (this->HitBoxMap).ArrayNum;
  pFVar14 = (pTVar2->AllocatorInstance).Data;
  pFVar12 = pFVar14 + (longlong)iVar9 * 0x30;
  local_res20 = param_3;
  while( true ) {
    if ((this->HitBoxMap).ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FHUDHitBox_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar12) goto LAB_147cd117e;
    if (*(FName *)(pFVar14 + 0x20) == param_3) break;
    pFVar14 = pFVar14 + 0x30;
  }
  if (pFVar14 == (FScriptContainerElement *)0x0) {
LAB_147cd117e:
    uVar13 = 0;
    if (0 < (this->HitBoxMap).ArrayNum) {
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar13 < (this->HitBoxMap).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)((pTVar2->AllocatorInstance).Data + lVar11 + 0x2c) < param_5) {
          local_d8._s_0.X = (param_2->field0_0x0)._s_0.X;
          local_d8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
          local_c8._s_0.X = (param_1->field0_0x0)._s_0.X;
          local_c8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
          pFVar10 = FHUDHitBox::FHUDHitBox
                              (&local_98,(TVector2<double> *)&local_c8._s_0,
                               (TVector2<double> *)&local_d8._s_0,&local_res20,param_4,param_5);
          pFVar3 = (FHUDHitBox *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (this->HitBoxMap).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->HitBoxMap).ArrayNum;
          piVar1 = &(this->HitBoxMap).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&pTVar2->AllocatorInstance,piVar1);
          }
          pFVar14 = (pTVar2->AllocatorInstance).Data;
          (this->HitBoxMap).ArrayNum = iVar9 + 1;
          lVar11 = (longlong)(int)uVar13 * 0x30;
          pFVar14 = pFVar14 + lVar11;
          memmove(pFVar14 + 0x30,pFVar14,(longlong)(int)(iVar9 - uVar13) * 0x30);
          dVar5 = (pFVar10->Coords).field0_0x0._s_0.Y;
          pFVar14 = (pTVar2->AllocatorInstance).Data;
          *(double *)(pFVar14 + lVar11) = (pFVar10->Coords).field0_0x0._s_0.X;
          *(double *)(pFVar14 + lVar11 + 8) = dVar5;
          dVar5 = (pFVar10->Size).field0_0x0._s_0.Y;
          *(double *)(pFVar14 + lVar11 + 0x10) = (pFVar10->Size).field0_0x0._s_0.X;
          *(double *)(pFVar14 + lVar11 + 0x10 + 8) = dVar5;
          FVar6 = *(FName *)&pFVar10->bConsumesInput;
          *(FName *)(pFVar14 + lVar11 + 0x20) = pFVar10->Name;
          ((FName *)(pFVar14 + lVar11 + 0x20))[1] = FVar6;
          return;
        }
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 0x30;
      } while ((int)uVar13 < (this->HitBoxMap).ArrayNum);
    }
    local_b8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_b8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_a8._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_a8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    pFVar10 = FHUDHitBox::FHUDHitBox
                        (&local_68,(TVector2<double> *)&local_a8._s_0,
                         (TVector2<double> *)&local_b8._s_0,&local_res20,param_4,param_5);
    pFVar3 = (FHUDHitBox *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (this->HitBoxMap).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->HitBoxMap).ArrayNum;
    piVar1 = &(this->HitBoxMap).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar9;
    (this->HitBoxMap).ArrayNum = iVar9 + 1;
    dVar5 = (pFVar10->Coords).field0_0x0._s_0.Y;
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    *(double *)(pFVar14 + lVar11 * 0x30) = (pFVar10->Coords).field0_0x0._s_0.X;
    *(double *)(pFVar14 + lVar11 * 0x30 + 8) = dVar5;
    dVar5 = (pFVar10->Size).field0_0x0._s_0.Y;
    *(double *)(pFVar14 + lVar11 * 0x30 + 0x10) = (pFVar10->Size).field0_0x0._s_0.X;
    *(double *)(pFVar14 + lVar11 * 0x30 + 0x10 + 8) = dVar5;
    FVar6 = *(FName *)&pFVar10->bConsumesInput;
    *(FName *)(pFVar14 + lVar11 * 0x30 + 0x20) = pFVar10->Name;
    ((FName *)(pFVar14 + lVar11 * 0x30 + 0x20))[1] = FVar6;
  }
  else if (2 < (byte)LogHUD._0_1_) {
    ::FName::ToString(&local_res20,&local_e8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHUD);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddPostRenderedActor @ 147cd3450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::AddPostRenderedActor(AHUD *this,AActor *param_1)

{
  int *piVar1;
  AActor *pAVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  AActor *local_28 [2];
  
  uVar9 = 0;
  uVar10 = uVar9;
  uVar12 = uVar9;
  if (0 < (this->PostRenderedActors).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < (this->PostRenderedActors).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar2 = *(AActor **)((this->PostRenderedActors).AllocatorInstance.Data + uVar10);
      if (pAVar2 == (AActor *)0x0) {
        bVar5 = param_1 == (AActor *)0x0;
      }
      else {
        bVar5 = pAVar2 == param_1;
      }
      if (bVar5) {
        return;
      }
      iVar7 = (this->PostRenderedActors).ArrayNum;
      uVar10 = uVar10 + 8;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < iVar7);
    uVar10 = uVar9;
    if (0 < iVar7) {
      do {
        uVar11 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar11 < (this->PostRenderedActors).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((this->PostRenderedActors).AllocatorInstance.Data + uVar9) == 0) {
          uVar6 = 0;
          if ((int)uVar11 < (this->PostRenderedActors).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->PostRenderedActors).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          *(AActor **)(pFVar3 + (longlong)(int)uVar11 * 8) = param_1;
          return;
        }
        uVar9 = uVar9 + 8;
        uVar10 = (ulonglong)(uVar11 + 1);
      } while ((int)(uVar11 + 1) < (this->PostRenderedActors).ArrayNum);
    }
  }
  pTVar8 = &this->PostRenderedActors;
  local_28[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 <
       pFVar3 + (longlong)(this->PostRenderedActors).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->PostRenderedActors).ArrayNum;
  piVar1 = &(this->PostRenderedActors).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
    (this->PostRenderedActors).ArrayNum = iVar7;
  }
  (this->PostRenderedActors).ArrayNum = iVar7 + 1;
  *(AActor **)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28[0]);
  }
  return;
}

// AnyCurrentHitBoxHits @ 147cd4a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AHUD::AnyCurrentHitBoxHits(AHUD *this)

{
  return (this->HitBoxHits).ArrayNum != 0;
}

// Deproject @ 147ced560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::Deproject(AHUD *this,float param_1,float param_2,TVector<double> *param_3,
               TVector<double> *param_4)

{
  double dVar1;
  bool bVar2;
  TVector2<double>_u_0 local_38 [3];
  
  (param_4->field0_0x0)._s_0.X = 0.0;
  (param_4->field0_0x0)._s_0.Y = 0.0;
  (param_4->field0_0x0)._s_0.Z = 0.0;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  bVar2 = IsCanvasValid_WarnIfNot(this);
  if (bVar2) {
    local_38[0]._0_8_ = (undefined8)param_1;
    local_38[0]._8_8_ = (undefined8)param_2;
    UCanvas::Deproject((this->Canvas).field0_0x0.DebugPtr,(TVector2<double> *)&local_38[0]._s_0,
                       param_3,param_4);
  }
  return;
}

// Draw2DLine @ 147ceeef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::Draw2DLine(AHUD *this,int param_1,int param_2,int param_3,int param_4,FColor param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_88 [52];
  float local_54;
  float local_50;
  float local_4c;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  float local_18;
  
  if ((this->Canvas).field0_0x0.DebugPtr == (UCanvas *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Canvas",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HUD.cpp"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88._24_8_ = 0;
  local_88[0x20] = 0;
  local_88._40_8_ = 0;
  local_88._0_8_ = &___7FCanvasLineItem__6B_;
  local_30._s_0.X = (double)param_3;
  local_18 = 0.0;
  local_88._8_8_ = (undefined8)param_1;
  local_88._48_4_ = FLinearColor::sRGBToLinearTable[param_5.field0_0x0._s_0.R];
  local_30._s_0.Y = (double)param_4;
  local_54 = FLinearColor::sRGBToLinearTable[param_5.field0_0x0._s_0.G];
  local_50 = FLinearColor::sRGBToLinearTable[param_5.field0_0x0._s_0.B];
  local_88._16_8_ = (undefined8)param_2;
  local_48._s_0.Z = 0.0;
  local_4c = (float)((uint)param_5.field0_0x0 >> 0x18) * __real_3b808081;
  local_30._s_0.Z = 0.0;
  local_48._s_0.X = (double)local_88._8_8_;
  local_48._s_0.Y = (double)local_88._16_8_;
  FCanvasLineItem::Draw((FCanvasLineItem *)local_88,((this->Canvas).field0_0x0.DebugPtr)->Canvas);
  return;
}

// Draw3DLine @ 147cef060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
AHUD::Draw3DLine(AHUD *this,TVector<double> *param_1,TVector<double> *param_2,FColor param_3)

{
  UWorld *this_00;
  ULineBatchComponent *pUVar1;
  byte bStackX_21;
  byte bStackX_22;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar1 = UWorld::GetLineBatcher(this_00,World);
  if (pUVar1 != (ULineBatchComponent *)0x0) {
    bStackX_22 = param_3.field0_0x0._2_1_;
    local_18 = FLinearColor::sRGBToLinearTable[bStackX_22];
    bStackX_21 = param_3.field0_0x0._1_1_;
    local_14 = FLinearColor::sRGBToLinearTable[bStackX_21];
    local_10 = FLinearColor::sRGBToLinearTable[(uint)param_3.field0_0x0 & 0xff];
    local_c = (float)((uint)param_3.field0_0x0 >> 0x18) * __real_3b808081;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,param_1,param_2,&local_18,0,0,0,0);
  }
  return;
}

// DrawActorOverlays @ 147cef130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawActorOverlays(AHUD *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  TVector<double>_u_0 local_78;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  UE::Math::TRotator<double>::Vector(param_2,(TVector<double> *)&local_78._s_0);
  uVar9 = 0;
  if (0 < (this->PostRenderedActors).ArrayNum) {
    pTVar2 = &this->PostRenderedActors;
    lVar10 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->PostRenderedActors).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->PostRenderedActors).ArrayNum;
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar10) == 0) {
        uVar6 = 0;
        if ((int)(uVar9 + 1) <= iVar7) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
        iVar7 = (this->PostRenderedActors).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->PostRenderedActors).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->PostRenderedActors).ArrayNum,
                   &(this->PostRenderedActors).ArrayMax);
      }
      else {
        uVar6 = 0;
        if ((int)uVar9 < iVar7) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)((pTVar2->AllocatorInstance).Data + lVar10);
        local_58 = local_78._s_0.X;
        dStack_50 = local_78._s_0.Y;
        local_38 = *(undefined4 *)&param_1->field0_0x0;
        uStack_34 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
        uStack_30 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
        uStack_2c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
        local_48 = local_78._s_0.Z;
        local_28 = (param_1->field0_0x0)._s_0.Z;
        (**(code **)(*plVar3 + 0x730))
                  (plVar3,(this->PlayerOwner).field0_0x0.DebugPtr,(this->Canvas).field0_0x0.DebugPtr
                   ,&local_38,&local_58);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      }
    } while ((int)uVar9 < (this->PostRenderedActors).ArrayNum);
  }
  return;
}

// DrawDebugTextList @ 147cef370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::DrawDebugTextList(AHUD *this)

{
  int *piVar1;
  TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_> *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  UCanvas *pUVar6;
  APlayerController *pAVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  UFont *pUVar19;
  FText *pFVar20;
  TVector<double> *pTVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  TVector2<double>_u_0 local_3f0;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3b8;
  FText local_3b0 [2];
  double local_390;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  double local_340;
  TRotator<double> local_338;
  TVector<double> local_320;
  undefined1 local_308 [72];
  uint local_2c0;
  FLinearColor_u_0 local_280;
  TVector2<double>_u_0 local_270;
  double local_238;
  double local_230;
  UFont *local_170;
  FText local_100 [12];
  
  if (((0 < (this->DebugTextList).ArrayNum) &&
      (pUVar6 = (this->DebugCanvas).field0_0x0.DebugPtr, pUVar6 != (UCanvas *)0x0)) &&
     (pUVar6->Canvas != (FCanvas *)0x0)) {
    pAVar7 = (this->PlayerOwner).field0_0x0.DebugPtr;
    (**(code **)(pAVar7->_padding_ + 0x840))(pAVar7,&local_3e0,&local_338);
    pUVar19 = UEngine::GetSmallFont();
    pFVar20 = FText::GetEmpty();
    FCanvasTextItem::FCanvasTextItem
              ((FCanvasTextItem *)local_308,&UE::Math::TVector2<double>::ZeroVector,pFVar20,pUVar19,
               &FLinearColor::White);
    uVar17 = _UNK_150689688;
    uVar16 = ___xmm_3ff00000000000003ff0000000000000;
    fVar15 = __real_bf800000;
    uVar25 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    iVar27 = (this->DebugTextList).ArrayNum;
    this_00 = &this->DebugTextList;
    uVar24 = 0;
    if (0 < iVar27) {
      piVar1 = &(this->DebugTextList).ArrayNum;
      local_res10 = 0;
      local_res18 = 0;
      fVar35 = __real_322bcc77;
      fVar34 = __real_3f800000;
      fVar40 = __real_3b808081;
      do {
        uVar22 = ~uVar24 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar24 < *piVar1) {
          uVar23 = uVar22;
        }
        if ((uVar23 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (*(longlong *)((this_00->AllocatorInstance).Data + local_res18) == 0) {
          local_res10 = local_res10 + -1;
          local_res18 = local_res18 + -0x80;
          uVar23 = 0;
          if ((int)(uVar24 + 1) <= *piVar1) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar24,1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,&this_00->AllocatorInstance,*piVar1,&(this->DebugTextList).ArrayMax);
          uVar24 = uVar24 - 1;
        }
        else {
          uVar23 = 0;
          if ((int)uVar24 < *piVar1) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(longlong *)((this_00->AllocatorInstance).Data + local_res18 + 0x70) == 0) {
            local_170 = UEngine::GetSmallFont();
          }
          else {
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_170 = *(UFont **)((this_00->AllocatorInstance).Data + local_res18 + 0x70);
          }
          uVar23 = 0;
          if ((int)uVar24 < *piVar1) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (fVar35 < (float)(*(uint *)((this_00->AllocatorInstance).Data + local_res18 + 0x4c) &
                              uVar25)) {
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = (this_00->AllocatorInstance).Data;
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            fVar34 = fVar34 - *(float *)(pFVar8 + local_res18 + 0x48) /
                              *(float *)((this_00->AllocatorInstance).Data + local_res18 + 0x4c);
            lVar26 = local_res10;
          }
          else {
            fVar34 = 0.0;
            lVar26 = (longlong)(int)uVar24;
          }
          uVar23 = 0;
          if ((int)uVar24 < *piVar1) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (((byte)(this_00->AllocatorInstance).Data[local_res18 + 0x54] & 1) == 0) {
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = (this_00->AllocatorInstance).Data;
            lVar28 = lVar26 * 0x80;
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar9 = (this_00->AllocatorInstance).Data;
            dVar33 = (double)fVar34;
            dVar32 = *(double *)(pFVar9 + lVar28 + 8);
            dVar13 = *(double *)(pFVar9 + lVar28 + 0x10);
            dVar11 = *(double *)(pFVar9 + lVar28 + 0x18);
            dVar2 = *(double *)(pFVar8 + lVar28 + 0x30);
            dVar3 = *(double *)(pFVar8 + lVar28 + 0x20);
            dVar4 = *(double *)(pFVar8 + lVar28 + 0x28);
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((byte)(this_00->AllocatorInstance).Data[local_res18 + 0x54] & 2) == 0) {
              uVar23 = 0;
              if ((int)uVar24 < *piVar1) {
                uVar23 = uVar22;
              }
              if ((uVar23 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar8 = (this_00->AllocatorInstance).Data;
              dVar14 = *(double *)(pFVar8 + lVar28 + 0x58);
              dVar12 = *(double *)(pFVar8 + lVar28 + 0x60);
              uVar5 = *(undefined8 *)(pFVar8 + lVar28 + 0x68);
            }
            else {
              uVar23 = 0;
              if ((int)uVar24 < *piVar1) {
                uVar23 = uVar22;
              }
              if ((uVar23 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar28 = *(longlong *)
                        (*(longlong *)((this_00->AllocatorInstance).Data + local_res18) + 0x1b8);
              uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              if (lVar28 != 0) {
                local_350 = *(undefined4 *)(lVar28 + 0x210);
                uStack_34c = *(undefined4 *)(lVar28 + 0x214);
                uStack_348 = *(undefined4 *)(lVar28 + 0x218);
                uStack_344 = *(undefined4 *)(lVar28 + 0x21c);
                local_340 = *(double *)(lVar28 + 0x220);
                uVar36 = local_350;
                uVar37 = uStack_34c;
                uVar38 = uStack_348;
                uVar39 = uStack_344;
                uVar5 = local_340;
              }
              dVar14 = (double)CONCAT44(uVar37,uVar36);
              dVar12 = (double)CONCAT44(uVar39,uVar38);
              local_390 = (double)uVar5;
            }
            dVar12 = dVar12 + (dVar4 - dVar13) * dVar33 + dVar13;
            dVar13 = (double)uVar5 + (dVar2 - dVar11) * dVar33 + dVar11;
            dVar14 = dVar14 + (dVar3 - dVar32) * dVar33 + dVar32;
            fVar40 = __real_3b808081;
          }
          else {
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = (this_00->AllocatorInstance).Data;
            lVar28 = lVar26 * 0x80;
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar9 = (this_00->AllocatorInstance).Data;
            dVar32 = (double)fVar34;
            dVar14 = (*(double *)(pFVar8 + lVar28 + 0x20) - *(double *)(pFVar9 + lVar28 + 8)) *
                     dVar32 + *(double *)(pFVar9 + lVar28 + 8);
            dVar12 = (*(double *)(pFVar8 + lVar28 + 0x28) - *(double *)(pFVar9 + lVar28 + 0x10)) *
                     dVar32 + *(double *)(pFVar9 + lVar28 + 0x10);
            dVar13 = (*(double *)(pFVar8 + lVar28 + 0x30) - *(double *)(pFVar9 + lVar28 + 0x18)) *
                     dVar32 + *(double *)(pFVar9 + lVar28 + 0x18);
          }
          lVar28 = lVar26 * 0x80;
          local_3b8 = dVar13;
          if (this->bEnableDebugTextShadow == '\0') {
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((byte)(this_00->AllocatorInstance).Data[local_res18 + 0x54] & 4) != 0)
            goto LAB_147cefb91;
            local_2c0 = local_2c0 & 0xfffffffd;
            local_270 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            local_res20 = lVar26 << 7;
          }
          else {
LAB_147cefb91:
            local_2c0 = local_2c0 | 2;
            local_270._s_0.Y = (double)uVar17;
            local_270._s_0.X = (double)uVar16;
            local_280 = FLinearColor::Black.field0_0x0;
            local_res20 = lVar28;
          }
          dVar13 = dVar13 - local_3d0;
          dVar32 = dVar14 - local_3e0;
          dVar11 = dVar12 - local_3d8;
          pTVar21 = UE::Math::TRotator<double>::Vector(&local_338,&local_320);
          if (__real_0000000000000000 <
              dVar11 * (pTVar21->field0_0x0)._s_0.Y + dVar32 * (pTVar21->field0_0x0)._s_0.X +
              dVar13 * (pTVar21->field0_0x0)._s_0.Z) {
            local_388._s_0.Z = local_3b8;
            local_388._s_0.X = dVar14;
            local_388._s_0.Y = dVar12;
            UCanvas::Project((this->DebugCanvas).field0_0x0.DebugPtr,
                             (TVector<double> *)&local_368._s_0,(TVector<double> *)&local_388._s_0,
                             true);
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            lVar26 = lVar28;
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               lVar26 = local_res20, bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = (this_00->AllocatorInstance).Data;
            local_308._52_4_ = FLinearColor::sRGBToLinearTable[(byte)pFVar8[lVar26 + 0x51]];
            local_308._56_4_ = FLinearColor::sRGBToLinearTable[(byte)pFVar8[lVar26 + 0x50]];
            local_308._48_4_ = FLinearColor::sRGBToLinearTable[(byte)pFVar8[lVar26 + 0x52]];
            local_308._60_4_ = (float)(byte)pFVar8[lVar26 + 0x53] * fVar40;
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar20 = FText::FromString(local_3b0,
                                        (FString *)
                                        ((this_00->AllocatorInstance).Data + lVar26 + 0x38));
            FText::operator=(local_100,pFVar20);
            if (local_3b0[0].TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3b0[0].TextData.Reference + 0x10))();
            }
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            fVar35 = *(float *)((this_00->AllocatorInstance).Data + local_res18 + 0x78);
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            auVar30._8_8_ = 0;
            auVar30._0_8_ = local_368._s_0.X;
            auVar29._0_8_ =
                 (double)*(float *)((this_00->AllocatorInstance).Data + local_res18 + 0x78);
            auVar29._8_8_ = 0;
            auVar30 = roundpd(auVar29,auVar30,2);
            auVar31._8_8_ = 0;
            auVar31._0_8_ = local_368._s_0.Y;
            local_3f0._s_0.X = (double)auVar30._0_8_;
            auVar30 = roundpd(auVar30,auVar31,2);
            local_3f0._s_0.Y = (double)auVar30._0_8_;
            local_238 = auVar29._0_8_;
            local_230 = (double)fVar35;
            UCanvas::DrawItem((this->DebugCanvas).field0_0x0.DebugPtr,(FCanvasItem *)local_308,
                              (TVector2<double> *)&local_3f0._s_0);
          }
          uVar23 = 0;
          if ((int)uVar24 < *piVar1) {
            uVar23 = uVar22;
          }
          if ((uVar23 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar35 = __real_322bcc77;
          fVar34 = __real_3f800000;
          if (fVar15 != *(float *)((this_00->AllocatorInstance).Data + local_res18 + 0x48)) {
            fVar35 = this->RenderDelta;
            uVar23 = 0;
            if ((int)uVar24 < *piVar1) {
              uVar23 = uVar22;
            }
            if ((uVar23 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = (this_00->AllocatorInstance).Data;
            *(float *)(pFVar8 + lVar28 + 0x48) = *(float *)(pFVar8 + lVar28 + 0x48) - fVar35;
            fVar35 = __real_322bcc77;
            fVar34 = __real_3f800000;
          }
        }
        local_res10 = local_res10 + 1;
        local_res18 = local_res18 + 0x80;
        uVar24 = uVar24 + 1;
        iVar27 = (this->DebugTextList).ArrayNum;
      } while ((int)uVar24 < iVar27);
    }
    uVar25 = iVar27 - 1;
    if (-1 < (int)uVar25) {
      lVar26 = (longlong)(int)uVar25 << 7;
      do {
        uVar23 = ~uVar25 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar25 < (this->DebugTextList).ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (fVar15 != *(float *)((this_00->AllocatorInstance).Data + lVar26 + 0x48)) {
          uVar24 = 0;
          if ((int)uVar25 < (this->DebugTextList).ArrayNum) {
            uVar24 = uVar23;
          }
          if ((uVar24 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(float *)((this_00->AllocatorInstance).Data + lVar26 + 0x48) <= 0.0) {
            uVar24 = 0;
            if (iVar27 <= (this->DebugTextList).ArrayNum) {
              uVar24 = uVar23;
            }
            if ((uVar24 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar25,1);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,&this_00->AllocatorInstance,(this->DebugTextList).ArrayNum,
                       &(this->DebugTextList).ArrayMax);
          }
        }
        iVar27 = iVar27 + -1;
        lVar26 = lVar26 + -0x80;
        uVar25 = uVar25 - 1;
      } while (-1 < (int)uVar25);
    }
    FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_308);
  }
  return;
}

// DrawHUD @ 147cf0110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::DrawHUD(AHUD *this)

{
  APlayerController *pAVar1;
  UCanvas *pUVar2;
  UFunction *pUVar3;
  int local_res8;
  int local_resc;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  (this->HitBoxMap).ArrayNum = 0;
  if ((this->HitBoxMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->HitBoxMap).AllocatorInstance,0,&(this->HitBoxMap).ArrayMax);
  }
  (this->HitBoxHits).ArrayNum = 0;
  if ((this->HitBoxHits).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->HitBoxHits).AllocatorInstance,0,&(this->HitBoxHits).ArrayMax);
  }
  if ((this->bShowOverlays != '\0') &&
     (pAVar1 = (this->PlayerOwner).field0_0x0.DebugPtr, pAVar1 != (APlayerController *)0x0)) {
    (**(code **)(pAVar1->_padding_ + 0x840))(pAVar1,&local_60,&local_78);
    local_48 = local_78;
    uStack_40 = uStack_70;
    local_38 = local_68;
    local_28 = local_60;
    uStack_24 = uStack_5c;
    uStack_20 = uStack_58;
    uStack_1c = uStack_54;
    local_18 = local_50;
    (**(code **)(this->_padding_ + 0x790))(this,&local_28,&local_48);
  }
  pUVar2 = (this->Canvas).field0_0x0.DebugPtr;
  local_res8 = pUVar2->SizeX;
  local_resc = pUVar2->SizeY;
  pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveDrawHUD);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_res8);
  return;
}

// DrawLine @ 147cf0260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawLine(AHUD *this,float param_1,float param_2,float param_3,float param_4,
              FLinearColor *param_5,float param_6)

{
  bool bVar1;
  FCanvasItem local_b8;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  float local_48;
  
  bVar1 = IsCanvasValid_WarnIfNot(this);
  if (bVar1) {
    local_b8.Position.field0_0x0._s_0.X = (double)param_1;
    local_b8.StereoDepth = 0;
    local_b8.BlendMode = SE_BLEND_Opaque;
    local_b8.bFreezeTime = false;
    local_b8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_b8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_b8.Position.field0_0x0._s_0.Y = (double)param_2;
    local_60 = (double)param_3;
    local_58 = (double)param_4;
    local_b8.Color.field0_0x0._0_8_ = *(undefined8 *)&param_5->field0_0x0;
    local_b8.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    local_68 = 0;
    local_50 = 0;
    local_48 = param_6;
    local_78 = local_b8.Position.field0_0x0._s_0.X;
    local_70 = local_b8.Position.field0_0x0._s_0.Y;
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,&local_b8);
  }
  return;
}

// DrawMaterial @ 147cf0360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawMaterial(AHUD *this,UMaterialInterface *param_1,float param_2,float param_3,float param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10,bool param_11,float param_12,TVector2<double> *param_13)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  FMaterialRenderProxy *pFVar4;
  TVector2<double>_u_0 local_128;
  TVector2<double>_u_0 local_118;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  undefined1 local_e8 [8];
  TVector2<double>_u_0 local_e0 [8];
  double local_60;
  double local_58;
  double local_50;
  TVector2<double>_u_0 local_48 [4];
  
  bVar3 = IsCanvasValid_WarnIfNot(this);
  if ((bVar3) && (param_1 != (UMaterialInterface *)0x0)) {
    local_128._s_0.X = (double)(param_6 + param_8);
    dVar2 = (double)param_10;
    local_128._s_0.Y = (double)(param_7 + param_9);
    local_118._s_0.X = (double)param_6;
    local_118._s_0.Y = (double)param_7;
    local_108._s_0.X = (double)param_4 * dVar2;
    local_108._s_0.Y = (double)param_5 * dVar2;
    pFVar4 = (FMaterialRenderProxy *)(**(code **)(param_1->_padding_ + 0x310))(param_1);
    local_f8._s_0.X = (double)param_2;
    local_f8._s_0.Y = (double)param_3;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_e8,(TVector2<double> *)&local_f8._s_0,pFVar4,
               (TVector2<double> *)&local_108._s_0,(TVector2<double> *)&local_118._s_0,
               (TVector2<double> *)&local_128._s_0);
    local_58 = (double)param_12;
    local_60 = 0.0;
    local_48[0]._0_8_ = (param_13->field0_0x0)._s_0.X;
    local_48[0]._8_8_ = (param_13->field0_0x0)._s_0.Y;
    local_50 = 0.0;
    if (param_11) {
      dVar1 = (double)local_e0[0]._8_8_ * dVar2;
      local_e0[0]._8_4_ = SUB84(dVar1,0);
      local_e0[0]._s_0.X = (double)local_e0[0]._0_8_ * dVar2;
      local_e0[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    }
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,(FCanvasItem *)local_e8);
  }
  return;
}

// DrawMaterialSimple @ 147cf0510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawMaterialSimple
          (AHUD *this,UMaterialInterface *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,bool param_7)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  FMaterialRenderProxy *pFVar4;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  undefined1 local_e8 [8];
  TVector2<double>_u_0 local_e0 [13];
  
  bVar3 = IsCanvasValid_WarnIfNot(this);
  if ((bVar3) && (param_1 != (UMaterialInterface *)0x0)) {
    dVar2 = (double)param_6;
    local_108._s_0.X = (double)param_4 * dVar2;
    local_108._s_0.Y = (double)param_5 * dVar2;
    pFVar4 = (FMaterialRenderProxy *)(**(code **)(param_1->_padding_ + 0x310))(param_1);
    local_f8._s_0.X = (double)param_2;
    local_f8._s_0.Y = (double)param_3;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_e8,(TVector2<double> *)&local_f8._s_0,pFVar4,
               (TVector2<double> *)&local_108._s_0);
    if (param_7) {
      dVar1 = (double)local_e0[0]._8_8_ * dVar2;
      local_e0[0]._8_4_ = SUB84(dVar1,0);
      local_e0[0]._s_0.X = (double)local_e0[0]._0_8_ * dVar2;
      local_e0[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    }
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,(FCanvasItem *)local_e8);
  }
  return;
}

// DrawMaterialTriangle @ 147cf0620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawMaterialTriangle
          (AHUD *this,UMaterialInterface *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5,
          TVector2<double> *param_6,TVector2<double> *param_7,FLinearColor *param_8,
          FLinearColor *param_9,FLinearColor *param_10)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  longlong lVar18;
  FCanvasItem local_188;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ForAnyElementType FStack_130;
  undefined8 local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  FLinearColor_u_0 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  FLinearColor_u_0 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  FLinearColor_u_0 local_98;
  
  bVar16 = IsCanvasValid_WarnIfNot(this);
  local_f8 = FLinearColor::White.field0_0x0;
  if ((bVar16) && (param_1 != (UMaterialInterface *)0x0)) {
    local_188.Position.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_188.Position.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    local_188.StereoDepth = 0;
    local_188.BlendMode = SE_BLEND_Opaque;
    dVar4 = (param_3->field0_0x0)._s_0.X;
    dVar5 = (param_3->field0_0x0)._s_0.Y;
    local_188.bFreezeTime = false;
    dVar6 = (param_4->field0_0x0)._s_0.X;
    dVar7 = (param_4->field0_0x0)._s_0.Y;
    local_188.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    dVar8 = (param_5->field0_0x0)._s_0.X;
    dVar9 = (param_5->field0_0x0)._s_0.Y;
    local_188._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    local_188.Color.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
    dVar10 = (param_6->field0_0x0)._s_0.X;
    dVar11 = (param_6->field0_0x0)._s_0.Y;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    FStack_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    dVar12 = (param_7->field0_0x0)._s_0.X;
    dVar13 = (param_7->field0_0x0)._s_0.Y;
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x890,&FStack_130,(int *)((longlong)&local_128 + 4));
    local_128 = CONCAT44(local_128._4_4_,iVar17 + 1);
    lVar18 = (longlong)iVar17;
    local_c8._s_0 = local_f8._s_0;
    local_98._s_0 = local_f8._s_0;
    *(double *)(FStack_130.Data + lVar18 * 0x90) = dVar2;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 8) = dVar3;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x10) = dVar8;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x10 + 8) = dVar9;
    ((FLinearColor_u_0 *)(FStack_130.Data + lVar18 * 0x90 + 0x20))->_s_0 =
         (FLinearColor_u_0_s_0)local_f8;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x30) = dVar4;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x30 + 8) = dVar5;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x40) = dVar10;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x40 + 8) = dVar11;
    ((FLinearColor_u_0 *)(FStack_130.Data + lVar18 * 0x90 + 0x50))->_s_0 =
         (FLinearColor_u_0_s_0)local_f8;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x60) = dVar6;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x60 + 8) = dVar7;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x70) = dVar12;
    *(double *)(FStack_130.Data + lVar18 * 0x90 + 0x70 + 8) = dVar13;
    ((FLinearColor_u_0 *)(FStack_130.Data + lVar18 * 0x90 + 0x80))->_s_0 =
         (FLinearColor_u_0_s_0)local_f8;
    uVar14 = *(undefined8 *)&param_8->field0_0x0;
    uVar15 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8);
    local_118 = dVar2;
    dStack_110 = dVar3;
    local_108 = dVar8;
    dStack_100 = dVar9;
    local_e8 = dVar4;
    dStack_e0 = dVar5;
    local_d8 = dVar10;
    dStack_d0 = dVar11;
    local_b8 = dVar6;
    dStack_b0 = dVar7;
    local_a8 = dVar12;
    dStack_a0 = dVar13;
    if (iVar17 + 1 < 1) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined8 *)(FStack_130.Data + 0x20) = uVar14;
    *(undefined8 *)(FStack_130.Data + 0x28) = uVar15;
    uVar14 = *(undefined8 *)&param_9->field0_0x0;
    uVar15 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8);
    if ((int)local_128 < 1) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined8 *)(FStack_130.Data + 0x50) = uVar14;
    *(undefined8 *)(FStack_130.Data + 0x58) = uVar15;
    uVar14 = *(undefined8 *)&param_10->field0_0x0;
    uVar15 = *(undefined8 *)((longlong)&param_10->field0_0x0 + 8);
    if ((int)local_128 < 1) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined8 *)(FStack_130.Data + 0x80) = uVar14;
    *(undefined8 *)(FStack_130.Data + 0x88) = uVar15;
    uStack_140 = (**(code **)(param_1->_padding_ + 0x310))(param_1);
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,&local_188);
    local_188._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    if (FStack_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_130.Data);
    }
  }
  return;
}

// DrawRect @ 147cf0930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawRect(AHUD *this,FLinearColor *param_1,float param_2,float param_3,float param_4,
              float param_5)

{
  bool bVar1;
  TVector2<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  FCanvasTileItem local_d8;
  
  bVar1 = IsCanvasValid_WarnIfNot(this);
  if (bVar1) {
    local_f8._s_0.X = (double)param_4;
    local_f8._s_0.Y = (double)param_5;
    local_e8._s_0.X = (double)param_2;
    local_e8._s_0.Y = (double)param_3;
    FCanvasTileItem::FCanvasTileItem
              (&local_d8,(TVector2<double> *)&local_e8._s_0,GWhiteTexture,
               (TVector2<double> *)&local_f8._s_0,param_1);
    local_d8._padding_._4_4_ = 2;
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,(FCanvasItem *)&local_d8);
  }
  return;
}

// DrawSafeZoneOverlay @ 147cf0a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall AHUD::DrawSafeZoneOverlay(AHUD *this)

{
  int iVar1;
  UCanvas *pUVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  FSlateApplication *this_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10;
  float local_res14;
  FMargin local_128;
  FLinearColor_u_0 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [20];
  ESimpleElementBlendMode local_ec;
  TVector2<double>_u_0 local_c8 [12];
  
  pTVar6 = GSafeZoneVisualizationModeCVar.Ref;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if (((0 < pTVar6->ShadowedValue[0]) &&
      (pUVar2 = (this->DebugCanvas).field0_0x0.DebugPtr, pUVar2 != (UCanvas *)0x0)) &&
     (pUVar2->Canvas != (FCanvas *)0x0)) {
    iVar1 = pUVar2->SizeX;
    fVar11 = (float)iVar1;
    fVar10 = (float)pUVar2->SizeY;
    local_128.Left = 0.0;
    local_128.Top = 0.0;
    local_128.Right = 0.0;
    local_128.Bottom = 0.0;
    this_00 = FSlateApplication::Get();
    dVar4 = (double)iVar1;
    local_res10 = fVar11;
    local_res14 = fVar10;
    FSlateApplicationBase::GetSafeZoneSize
              ((FSlateApplicationBase *)this_00,&local_128,
               (FDeprecateVector2DParameter *)&local_res10);
    pTVar7 = GSafeZoneVisualizationAlphaCVar.Ref;
    bVar8 = IsInParallelGameThread();
    if (!bVar8) {
      bVar8 = IsInGameThread();
      if (!bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_118._s_0.A = pTVar7->ShadowedValue[0];
    fVar9 = local_128.Bottom + local_128.Top;
    local_118._s_0.R = 1.0;
    local_118._s_0.G = 0.5;
    local_118._s_0.B = 0.5;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_108,&UE::Math::TVector2<double>::ZeroVector,GWhiteTexture,
               (FLinearColor *)&local_118._s_0);
    local_100._0_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_ec = SE_BLEND_Translucent;
    local_c8[0]._8_8_ = (undefined8)local_128.Top;
    local_c8[0]._0_8_ = dVar4;
    UCanvas::DrawItem((this->DebugCanvas).field0_0x0.DebugPtr,(FCanvasItem *)local_108);
    local_c8[0]._8_8_ = (undefined8)local_128.Bottom;
    local_100._8_8_ = (undefined8)(fVar10 - local_128.Bottom);
    local_100._0_8_ = 0.0;
    local_c8[0]._0_8_ = dVar4;
    UCanvas::DrawItem((this->DebugCanvas).field0_0x0.DebugPtr,(FCanvasItem *)local_108);
    local_c8[0]._0_8_ = (undefined8)local_128.Left;
    dVar4 = (double)(fVar10 - fVar9);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_128.Top;
    local_100._0_16_ = auVar5 << 0x40;
    local_c8[0]._8_8_ = dVar4;
    UCanvas::DrawItem((this->DebugCanvas).field0_0x0.DebugPtr,(FCanvasItem *)local_108);
    local_100._8_8_ = (double)local_128.Top;
    local_100._0_8_ = (double)(fVar11 - local_128.Right);
    local_c8[0]._0_8_ = (undefined8)local_128.Right;
    local_c8[0]._8_8_ = dVar4;
    UCanvas::DrawItem((this->DebugCanvas).field0_0x0.DebugPtr,(FCanvasItem *)local_108);
  }
  return;
}

// DrawText @ 147cf0cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawText(AHUD *this,FString *param_1,FLinearColor *param_2,float param_3,float param_4,
              UFont *param_5,float param_6,bool param_7)

{
  double dVar1;
  bool bVar2;
  FText *pFVar3;
  TVector2<double>_u_0 local_268;
  FText local_258;
  undefined1 local_248 [576];
  
  bVar2 = IsCanvasValid_WarnIfNot(this);
  if (bVar2) {
    if (param_7) {
      param_3 = param_3 * param_6;
      param_4 = param_4 * param_6;
    }
    if (param_5 == (UFont *)0x0) {
      param_5 = UEngine::GetMediumFont();
    }
    pFVar3 = FText::FromString(&local_258,param_1);
    local_268._s_0.Y = (double)param_4;
    local_268._s_0.X = (double)param_3;
    FCanvasTextItem::FCanvasTextItem
              ((FCanvasTextItem *)local_248,(TVector2<double> *)&local_268._s_0,pFVar3,param_5,
               param_2);
    if (local_258.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
    }
    dVar1 = (double)param_6;
    local_248._216_4_ = SUB84(dVar1,0);
    local_248._208_8_ = dVar1;
    local_248._220_4_ = (int)((ulonglong)dVar1 >> 0x20);
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,(FCanvasItem *)local_248);
    FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_248);
  }
  return;
}

// DrawTexture @ 147cf0e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
AHUD::DrawTexture(AHUD *this,UTexture *param_1,float param_2,float param_3,float param_4,
                 float param_5,float param_6,float param_7,float param_8,float param_9,
                 FLinearColor *param_10,EBlendMode param_11,float param_12,bool param_13,
                 float param_14,TVector2<double> *param_15)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  FTextureResource *pFVar4;
  TVector2<double>_u_0 local_128;
  TVector2<double>_u_0 local_118;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  undefined1 local_e8 [8];
  TVector2<double>_u_0 local_e0;
  ESimpleElementBlendMode local_cc;
  double local_60;
  double local_58;
  double local_50;
  TVector2<double>_u_0 local_48 [4];
  
  bVar3 = IsCanvasValid_WarnIfNot(this);
  if ((bVar3) && (param_1 != (UTexture *)0x0)) {
    dVar2 = (double)param_12;
    local_128._s_0.X = (double)(param_6 + param_8);
    local_128._s_0.Y = (double)(param_7 + param_9);
    local_118._s_0.X = (double)param_6;
    local_118._s_0.Y = (double)param_7;
    local_108._s_0.Y = (double)param_5 * dVar2;
    local_108._s_0.X = (double)param_4 * dVar2;
    pFVar4 = UTexture::GetResource(param_1);
    local_f8._s_0.X = (double)param_2;
    local_f8._s_0.Y = (double)param_3;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_e8,(TVector2<double> *)&local_f8._s_0,(FTexture *)pFVar4,
               (TVector2<double> *)&local_108._s_0,(TVector2<double> *)&local_118._s_0,
               (TVector2<double> *)&local_128._s_0,param_10);
    local_58 = (double)param_14;
    local_60 = 0.0;
    local_48[0]._0_8_ = (param_15->field0_0x0)._s_0.X;
    local_48[0]._8_8_ = (param_15->field0_0x0)._s_0.Y;
    local_50 = 0.0;
    if (param_13) {
      dVar1 = local_e0._s_0.Y * dVar2;
      local_e0._8_4_ = SUB84(dVar1,0);
      local_e0._s_0.X = local_e0._s_0.X * dVar2;
      local_e0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    }
    local_cc = FCanvas::BlendToSimpleElementBlend(param_11);
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,(FCanvasItem *)local_e8);
  }
  return;
}

// DrawTextureSimple @ 147cf0ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::DrawTextureSimple
          (AHUD *this,UTexture *param_1,float param_2,float param_3,float param_4,bool param_5)

{
  double dVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  double dVar4;
  TVector2<double>_u_0 local_e8;
  undefined1 local_d8 [8];
  TVector2<double>_u_0 local_d0;
  ESimpleElementBlendMode local_bc;
  TVector2<double>_u_0 local_98 [9];
  
  bVar2 = IsCanvasValid_WarnIfNot(this);
  if ((bVar2) && (param_1 != (UTexture *)0x0)) {
    pFVar3 = UTexture::GetResource(param_1);
    local_e8._s_0.X = (double)param_2;
    local_e8._s_0.Y = (double)param_3;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_d8,(TVector2<double> *)&local_e8._s_0,(FTexture *)pFVar3,
               &FLinearColor::White);
    dVar4 = (double)param_4;
    if (param_5) {
      dVar1 = local_d0._s_0.Y * dVar4;
      local_d0._8_4_ = SUB84(dVar1,0);
      local_d0._s_0.X = local_d0._s_0.X * dVar4;
      local_d0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    }
    dVar1 = (double)local_98[0]._8_8_ * dVar4;
    local_bc = SE_BLEND_Translucent;
    local_98[0]._8_4_ = SUB84(dVar1,0);
    local_98[0]._s_0.X = (double)local_98[0]._0_8_ * dVar4;
    local_98[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    UCanvas::DrawItem((this->Canvas).field0_0x0.DebugPtr,(FCanvasItem *)local_d8);
  }
  return;
}

// FindDebugTextListIntervalForActor @ 147cf6df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
AHUD::FindDebugTextListIntervalForActor(AHUD *this,AActor *param_1,int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  AActor *pAVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  pFVar1 = (this->DebugTextList).AllocatorInstance.Data;
  for (pFVar6 = pFVar1; pFVar6 != pFVar1 + (longlong)(this->DebugTextList).ArrayNum * 0x80;
      pFVar6 = pFVar6 + 0x80) {
    if (*(AActor **)pFVar6 == (AActor *)0x0) {
      bVar9 = param_1 == (AActor *)0x0;
    }
    else {
      bVar9 = *(AActor **)pFVar6 == param_1;
    }
    if (bVar9) {
      uVar7 = (longlong)pFVar6 - (longlong)pFVar1 >> 7;
      goto LAB_147cf6e4c;
    }
  }
  uVar7 = 0xffffffff;
LAB_147cf6e4c:
  uVar4 = (uint)uVar7;
  *param_2 = uVar4;
  *param_3 = uVar4;
  if (*param_2 == -1) {
    return 0;
  }
  iVar5 = (this->DebugTextList).ArrayNum;
  while ((int)(uVar4 + 1) < iVar5) {
    uVar8 = (int)uVar7 + 1;
    uVar4 = 0;
    if ((int)uVar8 < (this->DebugTextList).ArrayNum) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    pAVar2 = *(AActor **)
              ((this->DebugTextList).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x80);
    if (pAVar2 == (AActor *)0x0) {
      bVar9 = param_1 == (AActor *)0x0;
    }
    else {
      bVar9 = pAVar2 == param_1;
    }
    if (!bVar9) break;
    *param_3 = *param_3 + 1;
    uVar4 = *param_3;
    uVar7 = (ulonglong)uVar4;
  }
  return (*param_3 - *param_2) + 1;
}

// GetActorsInSelectionRectangle @ 147cf9eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::GetActorsInSelectionRectangle
          (AHUD *this,TSubclassOf<AActor> param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5,bool param_6)

{
  int *piVar1;
  double dVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  UWorld *pUVar15;
  AActor *pAVar16;
  FString *pFVar17;
  wchar_t *pwVar18;
  double *pdVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_328 [32];
  AActor *local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double dStack_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [24];
  undefined8 uStack_290;
  undefined8 local_288;
  UObject *local_280;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_258;
  TActorIteratorBase<TActorIterator<AActor>_> local_238;
  undefined8 local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  FString local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_328;
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_4->AllocatorInstance,0,piVar1);
  }
  local_2c0 = (param_2->field0_0x0)._s_0.X;
  dStack_2b8 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  local_2d0 = local_2c0;
  if (dVar2 <= local_2c0) {
    local_2d0 = dVar2;
  }
  local_2b0 = 1;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  if (local_2c0 <= dVar2) {
    local_2c0 = dVar2;
  }
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dStack_2c8 = dStack_2b8;
  if (dVar2 <= dStack_2b8) {
    dStack_2c8 = dVar2;
  }
  local_1d8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_1d0 = _UNK_150689688;
  local_1c8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_1c0 = _UNK_150689688;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  if (dStack_2b8 <= dVar2) {
    dStack_2b8 = dVar2;
  }
  pUVar3 = *(UObject **)param_1.Class.field0_0x0;
  local_1b8 = ___xmm_bff00000000000003ff0000000000000;
  uStack_1b0 = _UNK_15076c6f8;
  local_1a8 = ___xmm_bff00000000000003ff0000000000000;
  uStack_1a0 = _UNK_15076c6f8;
  local_198 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_190 = _UNK_150689688;
  local_178 = ___xmm_3ff0000000000000bff0000000000000;
  uStack_170 = _UNK_15076b868;
  local_188 = ___xmm_bff0000000000000bff0000000000000;
  uStack_180 = _UNK_15076c718;
  local_168 = ___xmm_bff00000000000003ff0000000000000;
  uStack_160 = _UNK_15076c6f8;
  local_158 = ___xmm_bff00000000000003ff0000000000000;
  uStack_150 = _UNK_15076c6f8;
  local_148 = ___xmm_bff0000000000000bff0000000000000;
  uStack_140 = _UNK_15076c718;
  local_138 = ___xmm_bff00000000000003ff0000000000000;
  uStack_130 = _UNK_15076c6f8;
  local_128 = ___xmm_bff0000000000000bff0000000000000;
  uStack_120 = _UNK_15076c718;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar15 = AActor::GetWorld((AActor *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_238.Flags = OnlyActiveLevels|SkipPendingKill;
  local_238.State.bIsSet = false;
  local_280 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FActorIteratorState::FActorIteratorState
            (&local_238.State.TypedValue,pUVar15,(TSubclassOf<AActor>)&local_280);
  local_238.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_238);
  do {
    dVar2 = __real_3fe0000000000000;
    if ((local_238.State.bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_238.State.TypedValue.ReachedEnd != false) {
      if (local_238.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_238.State.TypedValue.CurrentWorld,
                   local_238.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_238.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_238.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      return;
    }
    if ((local_238.State.bIsSet == false) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar16 = FActorIteratorState::GetActorChecked(&local_238.State.TypedValue);
    if (pAVar16 == (AActor *)0x0) {
      pFVar17 = GetTypeName<AActor>(&local_118);
      if ((pFVar17->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar18);
    }
    local_2d8 = pAVar16;
    (**(code **)(pAVar16->_padding_ + 0x670))(pAVar16,&local_108,param_5,0);
    pdVar19 = &dStack_1d0;
    lVar20 = 8;
    dVar9 = local_108 + local_f0;
    dVar10 = local_100 + local_e8;
    dVar6 = local_f0 - local_108;
    dVar7 = local_e8 - local_100;
    dVar11 = local_f8 + local_e0;
    local_288 = 0;
    dVar8 = local_e0 - local_f8;
    local_2a8._0_8_ = 0;
    local_2a8._8_8_ = 0;
    cVar13 = '\0';
    uVar23 = 0;
    uVar24 = 0;
    local_2a8._16_8_ = 0;
    uStack_290 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar21 = 0;
    uVar22 = 0;
    do {
      bVar12 = IsCanvasValid_WarnIfNot(this);
      if (bVar12) {
        local_258._s_0.X = dVar6 * dVar2 * pdVar19[-1] + dVar9 * dVar2;
        local_258._s_0.Y = dVar7 * dVar2 * *pdVar19 + dVar10 * dVar2;
        local_258._s_0.Z = dVar8 * dVar2 * pdVar19[1] + dVar11 * dVar2;
        UCanvas::Project((this->Canvas).field0_0x0.DebugPtr,(TVector<double> *)&local_278._s_0,
                         (TVector<double> *)&local_258._s_0,true);
        if (__real_0000000000000000 < local_278._s_0.Z) {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            local_2a8._20_4_ = local_278._4_4_;
            local_2a8._16_4_ = local_278._0_4_;
            uStack_290 = CONCAT44(local_278._12_4_,local_278._8_4_);
            local_2a8._4_4_ = local_278._4_4_;
            local_2a8._0_4_ = local_278._0_4_;
            local_2a8._12_4_ = local_278._12_4_;
            local_2a8._8_4_ = local_278._8_4_;
            uVar21 = local_278._0_4_;
            uVar22 = local_278._4_4_;
            uVar23 = local_278._8_4_;
            uVar24 = local_278._12_4_;
            uVar25 = local_278._0_4_;
            uVar26 = local_278._4_4_;
            uVar27 = local_278._8_4_;
            uVar28 = local_278._12_4_;
          }
          else {
            if ((double)CONCAT44(local_278._4_4_,local_278._0_4_) <= (double)CONCAT44(uVar22,uVar21)
               ) {
              uVar21 = local_278._0_4_;
              uVar22 = local_278._4_4_;
            }
            if ((double)CONCAT44(local_278._12_4_,local_278._8_4_) <=
                (double)CONCAT44(uVar24,uVar23)) {
              uVar23 = local_278._8_4_;
              uVar24 = local_278._12_4_;
            }
            if ((double)CONCAT44(uVar26,uVar25) <= (double)CONCAT44(local_278._4_4_,local_278._0_4_)
               ) {
              uVar25 = local_278._0_4_;
              uVar26 = local_278._4_4_;
            }
            if ((double)CONCAT44(uVar28,uVar27) <=
                (double)CONCAT44(local_278._12_4_,local_278._8_4_)) {
              uVar27 = local_278._8_4_;
              uVar28 = local_278._12_4_;
            }
            local_2a8._0_8_ = CONCAT44(uVar22,uVar21);
            local_2a8._8_8_ = CONCAT44(uVar24,uVar23);
            local_2a8._16_8_ = CONCAT44(uVar26,uVar25);
            uStack_290 = CONCAT44(uVar28,uVar27);
          }
        }
      }
      pdVar19 = pdVar19 + 3;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    local_288 = CONCAT71(local_288._1_7_,cVar13);
    if (cVar13 != '\0') {
      if (param_6) {
        if (((((local_2d0 <= (double)CONCAT44(uVar22,uVar21) &&
                (double)CONCAT44(uVar22,uVar21) != local_2d0) &&
              ((double)CONCAT44(uVar22,uVar21) < local_2c0)) &&
             ((dStack_2c8 <= (double)CONCAT44(uVar24,uVar23) &&
               (double)CONCAT44(uVar24,uVar23) != dStack_2c8 &&
              (((double)CONCAT44(uVar24,uVar23) < dStack_2b8 &&
               (local_2d0 <= (double)CONCAT44(uVar26,uVar25) &&
                (double)CONCAT44(uVar26,uVar25) != local_2d0)))))) &&
            ((double)CONCAT44(uVar26,uVar25) < local_2c0)) &&
           ((dStack_2c8 <= (double)CONCAT44(uVar28,uVar27) &&
             (double)CONCAT44(uVar28,uVar27) != dStack_2c8 &&
            ((double)CONCAT44(uVar28,uVar27) < dStack_2b8)))) {
LAB_147cfa390:
          pFVar4 = (param_4->AllocatorInstance).Data;
          if ((pFVar4 <= (FScriptContainerElement *)&local_2d8) &&
             (((FScriptContainerElement *)&local_2d8 < pFVar4 + (longlong)*piVar1 * 8 &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar14 = param_4->ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_4->AllocatorInstance,piVar1);
          }
          param_4->ArrayNum = iVar14 + 1;
          *(AActor **)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_2d8;
        }
      }
      else if ((((local_2d0 < (double)CONCAT44(uVar26,uVar25) ||
                  local_2d0 == (double)CONCAT44(uVar26,uVar25)) &&
                ((double)CONCAT44(uVar22,uVar21) < local_2c0 ||
                 (double)CONCAT44(uVar22,uVar21) == local_2c0)) &&
               (dStack_2c8 < (double)CONCAT44(uVar28,uVar27) ||
                dStack_2c8 == (double)CONCAT44(uVar28,uVar27))) &&
              ((double)CONCAT44(uVar24,uVar23) < dStack_2b8 ||
               (double)CONCAT44(uVar24,uVar23) == dStack_2b8)) goto LAB_147cfa390;
    }
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_238);
  } while( true );
}

// GetCoordinateOffset @ 147cfbcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __thiscall
AHUD::GetCoordinateOffset(AHUD *this,TVector2<double> *__return_storage_ptr__)

{
  APlayerController *pAVar1;
  UPlayer *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  ConstructionValues *pCVar6;
  longlong lVar7;
  undefined1 auStackY_2f8 [32];
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_2b8;
  undefined1 local_2a8 [24];
  undefined1 local_290 [24];
  ConstructionValues local_278;
  FSceneViewFamilyContext local_1d8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  pAVar1 = (this->PlayerOwner).field0_0x0.DebugPtr;
  if ((pAVar1->Player).field0_0x0.DebugPtr != (UPlayer *)0x0) {
    pUVar4 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&pAVar1->Player,pUVar4);
    if ((bVar3) && (pUVar2 = (pAVar1->Player).field0_0x0.DebugPtr, pUVar2 != (UPlayer *)0x0)) {
      pAVar1 = pUVar2[1].PlayerController.field0_0x0.DebugPtr;
      local_2b8.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
      local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pUVar5 = AActor::GetWorld((AActor *)this);
      pCVar6 = FSceneViewFamily::ConstructionValues::ConstructionValues
                         (&local_278,
                          (FRenderTarget *)
                          (pUVar2[1].PlayerController.field0_0x0.DebugPtr)->_padding_,pUVar5->Scene,
                          (FEngineShowFlags *)&pAVar1->_padding_,&local_2b8);
      pCVar6->bRealtimeUpdate = 1;
      FSceneViewFamilyContext::FSceneViewFamilyContext(&local_1d8,pCVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
      if (local_278.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_278.EngineShowFlags.CustomShowFlags.AllocatorInstance.
                              SecondaryData);
      }
      lVar7 = (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,&local_1d8,local_290,local_2a8);
      if (lVar7 != 0) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)-*(int *)(lVar7 + 0x380);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)-*(int *)(lVar7 + 900);
      }
      FSceneViewFamilyContext::~FSceneViewFamilyContext(&local_1d8);
    }
  }
  return __return_storage_ptr__;
}

// GetCurrentDebugTargetActor @ 147cfbea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __thiscall AHUD::GetCurrentDebugTargetActor(AHUD *this)

{
  int iVar1;
  APlayerController *pAVar2;
  APlayerCameraManager *pAVar3;
  bool bVar4;
  FName *pFVar5;
  UWorld *this_00;
  TVector<double> *pTVar6;
  AActor *pAVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  undefined1 auStackY_298 [32];
  FName local_238;
  TStatId local_230;
  TVector<double> local_228;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined2 uStack_20b;
  undefined1 uStack_209;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TRotator<double> local_1d8;
  FHitResult local_1b8;
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((this->bShowDebugForReticleTarget == '\0') ||
     (pAVar2 = (this->PlayerOwner).field0_0x0.DebugPtr,
     (pAVar2->PlayerCameraManager).field0_0x0.DebugPtr == (APlayerCameraManager *)0x0)) {
    pAVar7 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
    if (pAVar7 != (AActor *)0x0) {
      return pAVar7;
    }
    pAVar3 = (((this->PlayerOwner).field0_0x0.DebugPtr)->PlayerCameraManager).field0_0x0.DebugPtr;
    if (pAVar3 == (APlayerCameraManager *)0x0) {
      return (AActor *)0x0;
    }
    pAVar7 = (pAVar3->ViewTarget).Target.field0_0x0.DebugPtr;
    if (pAVar7 == (AActor *)0x0) {
      return (AActor *)0x0;
    }
    return pAVar7;
  }
  (**(code **)(pAVar2->_padding_ + 0x840))(pAVar2,&local_208,&local_1d8);
  pAVar7 = (((((this->PlayerOwner).field0_0x0.DebugPtr)->PlayerCameraManager).field0_0x0.DebugPtr)->
           ViewTarget).Target.field0_0x0.DebugPtr;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
    StatPtr_UnknownSceneQuery =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
          )0x0;
    pFVar5 = ::FName::FName(&local_238,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar5,L"UnknownSceneQuery","STATGROUP_Collision"
               ,"STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_230.StatIdPtr =
       (TStatIdData *)
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar5 = ::FName::FName(&local_238,"UnknownSceneQuery");
    local_230.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar5,L"UnknownSceneQuery",
                    "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  FCollisionQueryParams::FCollisionQueryParams(&local_b8,(FName)0x0,&local_230,true,pAVar7);
  memset(&local_1b8,0,0x100);
  uStack_20b = 0;
  local_1b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_209 = 0;
  local_228.field0_0x0._s_0.Z = 0.0;
  uStack_210 = 0xffffffff;
  uStack_20c = 0;
  local_1b8.HitObjectHandle.InstanceIndex = -1;
  local_1b8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1b8.HitObjectHandle._29_3_ = 0;
  local_1b8.Time = 1.0;
  local_1b8.MyItem = -1;
  local_1b8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  this_00 = AActor::GetWorld((AActor *)this);
  pTVar6 = UE::Math::TRotator<double>::Vector(&local_1d8,&local_228);
  local_1f0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z * __real_40f86a0000000000 + local_208._s_0.Z;
  local_1f0._s_0.Y = (pTVar6->field0_0x0)._s_0.Y * __real_40f86a0000000000 + local_208._s_0.Y;
  local_1f0._s_0.X = (pTVar6->field0_0x0)._s_0.X * __real_40f86a0000000000 + local_208._s_0.X;
  bVar4 = UWorld::LineTraceSingleByChannel
                    (this_00,&local_1b8,(TVector<double> *)&local_208._s_0,
                     (TVector<double> *)&local_1f0._s_0,ECC_WorldDynamic,&local_b8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if ((bVar4) &&
     (pAVar7 = FActorInstanceHandle::FetchActor(&local_1b8.HitObjectHandle), pAVar7 != (AActor *)0x0
     )) {
    pUVar9 = (this->ShowDebugTargetDesiredClass).Class.field0_0x0.DebugPtr;
    if ((pUVar9 == (UClass *)0x0) ||
       (pUVar8 = Z_Construct_UClass_AActor_NoRegister(), pUVar8 == (UClass *)0x0))
    goto LAB_147cfc195;
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar9->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) ||
       (pUVar9 = (this->ShowDebugTargetDesiredClass).Class.field0_0x0.DebugPtr,
       pUVar9 == (UClass *)0x0)) goto LAB_147cfc195;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar8 == (UClass *)0x0) {
LAB_147cfc170:
      pUVar9 = (UClass *)0x0;
    }
    else {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar9->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_147cfc170;
    }
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) goto LAB_147cfc195;
  }
  pAVar7 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
LAB_147cfc195:
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return pAVar7;
}

// GetDebugActorList @ 147cfc3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
AHUD::GetDebugActorList(AHUD *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  AActor *pAVar9;
  UWorld *pUVar10;
  UAnimInstance *pUVar11;
  longlong lVar12;
  APawn *local_res8;
  AActor *local_res18;
  AActor *local_res20;
  TObjectIterator<USkeletalMeshComponent> local_d8;
  TObjectIterator<UMovementComponent> local_c0;
  UClass *local_a8 [2];
  TActorIteratorBase<TActorIterator<APawn>_> local_98;
  
  pUVar7 = AActor::GetWorld((AActor *)this);
  pUVar8 = Z_Construct_UClass_APawn_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
  }
  local_98.Flags = OnlyActiveLevels|SkipPendingKill;
  local_98.State.bIsSet = false;
  local_a8[0] = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FActorIteratorState::FActorIteratorState
            (&local_98.State.TypedValue,pUVar7,(TSubclassOf<AActor>)local_a8);
  local_98.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_98);
  fVar2 = __real_3e4ccccd;
  while( true ) {
    if (local_98.State.bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_98.State.TypedValue.ReachedEnd != false) break;
    if (local_98.State.bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAVar9 = FActorIteratorState::GetActorChecked(&local_98.State.TypedValue);
    local_res8 = CastChecked<APawn,AActor>(pAVar9);
    if ((local_res8 != (APawn *)0x0) && (((uint)local_res8->_padding_ >> 0x1e & 1) == 0)) {
      pUVar10 = AActor::GetWorld((AActor *)local_res8);
      if (pUVar10 == pUVar7) {
        bVar3 = AActor::WasRecentlyRendered((AActor *)local_res8,fVar2);
        if (bVar3) {
          TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
                    (param_1,(AActor **)&local_res8);
        }
      }
    }
    TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_98);
  }
  if (local_98.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_98.State.TypedValue.CurrentWorld,
               local_98.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_98.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  cVar4 = (**(code **)(this->_padding_ + 0x7b8))(this,&ShowDebugNames::Animation);
  if (cVar4 != '\0') {
    local_d8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ObjectArray.ArrayNum = 0;
    local_d8.ObjectArray.ArrayMax = 0;
    local_d8.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    GetObjectsOfClass(pUVar8,&local_d8.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USkeletalMeshComponent>::Advance(&local_d8);
      lVar12 = (longlong)local_d8.Index;
      if (local_d8.Index < 0) break;
      if (local_d8.ObjectArray.ArrayNum <= local_d8.Index) break;
      uVar6 = 0;
      if (local_d8.Index < local_d8.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_d8.Index >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pUVar11 = USkeletalMeshComponent::GetAnimInstance
                          (*(USkeletalMeshComponent **)
                            (local_d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8));
      if (pUVar11 != (UAnimInstance *)0x0) {
        lVar12 = (longlong)local_d8.Index;
        uVar6 = 0;
        if (local_d8.Index < local_d8.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_d8.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (((*(longlong *)(local_d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) != 0) &&
            (pAVar9 = *(AActor **)
                       (*(longlong *)(local_d8.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                       0xa8), pAVar9 != (AActor *)0x0)) &&
           (local_res18 = pAVar9, ((uint)pAVar9->_padding_ >> 0x1e & 1) == 0)) {
          pUVar10 = AActor::GetWorld(pAVar9);
          if (pUVar10 == pUVar7) {
            bVar3 = AActor::WasRecentlyRendered(local_res18,fVar2);
            if (bVar3) {
              TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
                        (param_1,&local_res18);
            }
          }
        }
      }
    }
    if (local_d8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.ObjectArray.AllocatorInstance.Data);
    }
  }
  cVar4 = (**(code **)(this->_padding_ + 0x7b8))(this,&ShowDebugNames::Physics);
  if (cVar4 != '\0') {
    local_c0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ObjectArray.ArrayNum = 0;
    local_c0.ObjectArray.ArrayMax = 0;
    local_c0.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = Z_Construct_UClass_UMovementComponent_NoRegister();
    GetObjectsOfClass(pUVar8,&local_c0.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UMovementComponent>::Advance(&local_c0);
      lVar12 = (longlong)local_c0.Index;
      if (local_c0.Index < 0) break;
      if (local_c0.ObjectArray.ArrayNum <= local_c0.Index) break;
      uVar6 = 0;
      if (local_c0.Index < local_c0.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_c0.Index >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (((*(longlong *)(local_c0.ObjectArray.AllocatorInstance.Data + lVar12 * 8) != 0) &&
          (pAVar9 = *(AActor **)
                     (*(longlong *)(local_c0.ObjectArray.AllocatorInstance.Data + lVar12 * 8) + 0xa8
                     ), pAVar9 != (AActor *)0x0)) &&
         (local_res20 = pAVar9, ((uint)pAVar9->_padding_ >> 0x1e & 1) == 0)) {
        pUVar10 = AActor::GetWorld(pAVar9);
        if (pUVar10 == pUVar7) {
          bVar3 = AActor::WasRecentlyRendered(local_res20,fVar2);
          if (bVar3) {
            TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
                      (param_1,&local_res20);
          }
        }
      }
    }
    if (local_c0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// GetFontFromSizeIndex @ 147d04a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UFont * __thiscall AHUD::GetFontFromSizeIndex(AHUD *this,int param_1)

{
  UFont *pUVar1;
  
  if (param_1 == 0) {
    pUVar1 = UEngine::GetTinyFont();
    return pUVar1;
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      pUVar1 = UEngine::GetMediumFont();
      return pUVar1;
    }
    return (GEngine->LargeFont).field0_0x0.DebugPtr;
  }
  pUVar1 = UEngine::GetSmallFont();
  return pUVar1;
}

// GetHitBoxAtCoordinates @ 147d05e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHUDHitBox * __thiscall
AHUD::GetHitBoxAtCoordinates(AHUD *this,TVector2<double> *param_1,bool param_2)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  FHUDHitBox *this_00;
  FHUDHitBox *pFVar5;
  undefined1 local_res8 [8];
  TVector2<double>_u_0 local_28;
  
  if (0 < (this->HitBoxMap).ArrayNum) {
    pTVar4 = GetCoordinateOffset(this,(TVector2<double> *)&local_28._s_0);
    iVar2 = (this->HitBoxMap).ArrayNum;
    dVar1 = (pTVar4->field0_0x0)._s_0.Y;
    this_00 = (FHUDHitBox *)(this->HitBoxMap).AllocatorInstance.Data;
    (param_1->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X - (pTVar4->field0_0x0)._s_0.X;
    pFVar5 = this_00 + iVar2;
    (param_1->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y - dVar1;
    while( true ) {
      if ((this->HitBoxMap).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FHUDHitBox_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar5) break;
      if ((!param_2) || (this_00->bConsumesInput != false)) {
        local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        bVar3 = FHUDHitBox::Contains(this_00,(TVector2<double> *)&local_28._s_0);
        if (bVar3) {
          return this_00;
        }
      }
      this_00 = this_00 + 1;
    }
  }
  return (FHUDHitBox *)0x0;
}

// GetHitBoxWithName @ 147d05ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FHUDHitBox * __thiscall AHUD::GetHitBoxWithName(AHUD *this,FName param_1)

{
  int iVar1;
  FHUDHitBox *pFVar2;
  FHUDHitBox *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HitBoxMap).ArrayNum;
  pFVar3 = (FHUDHitBox *)(this->HitBoxMap).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->HitBoxMap).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHUDHitBox_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->Name == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FHUDHitBox *)0x0;
}

// GetHitBoxesAtCoordinates @ 147d05f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::GetHitBoxesAtCoordinates
          (AHUD *this,TVector2<double> *param_1,
          TArray<FHUDHitBox_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TVector2<double> *pTVar8;
  FHUDHitBox *this_00;
  FHUDHitBox *pFVar9;
  undefined1 local_res8 [8];
  FHUDHitBox *local_58 [2];
  TVector2<double>_u_0 local_48;
  TVector2<double> local_38;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (0 < (this->HitBoxMap).ArrayNum) {
    pTVar8 = GetCoordinateOffset(this,&local_38);
    iVar3 = (this->HitBoxMap).ArrayNum;
    dVar2 = (pTVar8->field0_0x0)._s_0.Y;
    this_00 = (FHUDHitBox *)(this->HitBoxMap).AllocatorInstance.Data;
    (param_1->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X - (pTVar8->field0_0x0)._s_0.X;
    pFVar9 = this_00 + iVar3;
    (param_1->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y - dVar2;
    while( true ) {
      if ((this->HitBoxMap).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FHUDHitBox_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00 == pFVar9) break;
      local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      bVar6 = FHUDHitBox::Contains(this_00,(TVector2<double> *)&local_48._s_0);
      if (bVar6) {
        pFVar4 = (param_2->AllocatorInstance).Data;
        local_58[0] = this_00;
        if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(FHUDHitBox **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58[0];
      }
      this_00 = this_00 + 1;
    }
  }
  return;
}

// GetOwningPawn @ 147d0a980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APawn * __thiscall AHUD::GetOwningPawn(AHUD *this)

{
  APlayerController *pAVar1;
  APawn *pAVar2;
  
  pAVar1 = (this->PlayerOwner).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerController *)0x0) {
    pAVar2 = (APawn *)pAVar1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pAVar2 != (APawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar2);
    }
    return pAVar2;
  }
  return (APawn *)0x0;
}

// GetOwningPlayerController @ 147d0a9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall AHUD::GetOwningPlayerController(AHUD *this)

{
  return (this->PlayerOwner).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 147d0c060

UClass * __cdecl AHUD::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AHUD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HUD",&Z_Registration_Info_UClass_AHUD.InnerSingleton,
               StaticRegisterNativesAHUD,0x3b0,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AHUD>,InternalVTableHelperCtorCaller<AHUD>
               ,local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AHUD.InnerSingleton;
}

// GetTextSize @ 147d0f630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::GetTextSize(AHUD *this,FString *param_1,float *param_2,float *param_3,UFont *param_4,
                 float param_5)

{
  int iVar1;
  UCanvas *this_00;
  bool bVar2;
  TStringView<wchar_t> local_18;
  
  bVar2 = IsCanvasValid_WarnIfNot(this);
  if (bVar2) {
    local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    this_00 = (this->Canvas).field0_0x0.DebugPtr;
    iVar1 = (param_1->Data).ArrayNum;
    local_18.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_18.Size = 0;
    }
    if (param_4 == (UFont *)0x0) {
      param_4 = UEngine::GetMediumFont();
    }
    UCanvas::TextSize(this_00,param_4,&local_18,param_2,param_3,param_5,param_5);
  }
  return;
}

// IsCanvasValid_WarnIfNot @ 147d1a030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AHUD::IsCanvasValid_WarnIfNot(AHUD *this)

{
  UCanvas *pUVar1;
  FTokenizedMessage *pFVar2;
  FMessageLog *this_00;
  FText *pFVar3;
  TSharedRef<FTokenizedMessage,1> *pTVar4;
  TSharedRef<FUObjectToken,1> *pTVar5;
  TSharedRef<FTextToken,1> *pTVar6;
  FName local_res8;
  TSharedRef<IMessageToken,1> local_d8;
  TSharedRef<IMessageToken,1> local_c8;
  TSharedRef<FTokenizedMessage,1> local_b8;
  TSharedRef<FTextToken,1> local_a8;
  FText local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  TSharedRef<FUObjectToken,1> local_78;
  FText local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  pUVar1 = (this->Canvas).field0_0x0.DebugPtr;
  if (pUVar1 == (UCanvas *)0x0) {
    ::FName::FName(&local_res8,"PIE");
    this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
    pFVar3 = FText::FText(&local_48);
    pTVar4 = FMessageLog::Warning(this_00,&local_58,pFVar3);
    pFVar2 = pTVar4->Object;
    pFVar3 = FText::FText(&local_68);
    pTVar5 = FUObjectToken::Create(&local_78,(UObject *)this,pFVar3);
    local_c8.Object = (IMessageToken *)pTVar5->Object;
    local_c8.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = FTokenizedMessage::AddToken(pFVar2,&local_88,&local_c8);
    pFVar2 = pTVar4->Object;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"HUD",L"PIE_Warning_Message_CanvasCallOutsideOfDrawCanvas",
                        L"Canvas Draw functions may only be called during the handling of the DrawHUD event"
                       );
    pTVar6 = FTextToken::Create(&local_a8,pFVar3,true);
    local_d8.Object = (IMessageToken *)pTVar6->Object;
    local_d8.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar2,&local_b8,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
  }
  return pUVar1 != (UCanvas *)0x0;
}

// NextDebugTarget @ 147d1b2d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::NextDebugTarget(AHUD *this)

{
  APlayerCameraManager *pAVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  AActor *pAVar8;
  int iVar9;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 2000))(this,&local_18);
  pAVar8 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
  iVar9 = (int)local_10;
  if (pAVar8 != (AActor *)0x0) {
    uVar7 = this->CurrentTargetIndex;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (int)local_10)) {
      uVar4 = 0;
      if ((int)uVar7 < (int)local_10) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = (int)local_10;
      }
      pAVar8 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
      if (pAVar8 == (AActor *)0x0) {
        bVar3 = (AActor *)local_18[(int)uVar7] == (AActor *)0x0;
      }
      else {
        bVar3 = pAVar8 == (AActor *)local_18[(int)uVar7];
      }
      if (bVar3) goto LAB_147d1b3cd;
    }
    for (plVar6 = local_18; plVar6 != local_18 + iVar9; plVar6 = plVar6 + 1) {
      if ((AActor *)*plVar6 == pAVar8) {
        iVar5 = (int)((longlong)plVar6 - (longlong)local_18 >> 3);
        if (iVar5 != -1) {
          this->CurrentTargetIndex = iVar5;
        }
        break;
      }
    }
  }
LAB_147d1b3cd:
  if (iVar9 < 1) {
    this->CurrentTargetIndex = -1;
  }
  else {
    uVar7 = (this->CurrentTargetIndex + 1) % iVar9;
    this->CurrentTargetIndex = uVar7;
    if ((-1 < (int)uVar7) && ((int)uVar7 < iVar9)) {
      uVar4 = 0;
      if ((int)uVar7 < iVar9) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pAVar8 = (AActor *)local_18[(int)uVar7];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar8);
      }
      (this->ShowDebugTargetActor).field0_0x0.DebugPtr = pAVar8;
      goto LAB_147d1b4a5;
    }
  }
  pAVar1 = (((this->PlayerOwner).field0_0x0.DebugPtr)->PlayerCameraManager).field0_0x0.DebugPtr;
  if ((pAVar1 != (APlayerCameraManager *)0x0) &&
     (pAVar8 = (pAVar1->ViewTarget).Target.field0_0x0.DebugPtr, pAVar8 != (AActor *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar8);
    }
    (this->ShowDebugTargetActor).field0_0x0 = (pAVar1->ViewTarget).Target.field0_0x0;
  }
LAB_147d1b4a5:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// NotifyBindPostProcessEffects @ 147d1b630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::NotifyBindPostProcessEffects(AHUD *this)

{
  return;
}

// NotifyHitBoxBeginCursorOver @ 147d1b640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::NotifyHitBoxBeginCursorOver(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxBeginCursorOver);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// NotifyHitBoxClick @ 147d1b680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::NotifyHitBoxClick(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxClick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// NotifyHitBoxEndCursorOver @ 147d1b6c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::NotifyHitBoxEndCursorOver(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxEndCursorOver);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// NotifyHitBoxRelease @ 147d1b700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::NotifyHitBoxRelease(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxRelease);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// OnLostFocusPause @ 147d1bc70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::OnLostFocusPause(AHUD *this,bool param_1)

{
  APlayerController *pAVar1;
  ENetMode EVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (this->bLostFocusPaused != param_1) {
    EVar2 = AActor::InternalGetNetMode((AActor *)this);
    if (EVar2 != NM_Client) {
      this->bLostFocusPaused = '\0';
      pAVar1 = (this->PlayerOwner).field0_0x0.DebugPtr;
      this->field_0x2c8 = this->field_0x2c8 | param_1;
      local_18 = 0;
      local_28 = 0;
      local_20 = 0;
      (**(code **)(pAVar1->_padding_ + 0xbd8))(pAVar1,param_1,&local_28);
    }
  }
  return;
}

// PostInitializeComponents @ 147d1dad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::PostInitializeComponents(AHUD *this)

{
  int iVar1;
  UClass *pUVar2;
  APlayerController *pAVar3;
  
  AActor::PostInitializeComponents((AActor *)this);
  pAVar3 = (APlayerController *)this->_padding_;
  if (pAVar3 != (APlayerController *)0x0) {
    pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_147d1db13;
  }
  pAVar3 = (APlayerController *)0x0;
LAB_147d1db13:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
  }
  (this->PlayerOwner).field0_0x0.DebugPtr = pAVar3;
                    /* WARNING: Could not recover jumptable at 0x000147d1db40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7a0))(this);
  return;
}

// PostRender @ 147d1df10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::PostRender(AHUD *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  APlayerController *pAVar4;
  UCanvas *pUVar5;
  TObjectPtr<UCanvas>_u_0 TVar6;
  FCanvas *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  UWorld *pUVar14;
  UFont *this_01;
  UClass *pUVar15;
  FSlateApplication *this_02;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FHUDHitBox *pFVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  UPlayer *pUVar23;
  UPlayer *pUVar24;
  ForAnyElementType FVar25;
  FHUDHitBox *this_03;
  int iVar26;
  undefined1 *puVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  float fVar31;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_158;
  undefined8 local_150;
  undefined1 local_148 [8];
  float local_140;
  float local_13c [3];
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TVector2<double>_u_0 local_98;
  FLinearColor_u_0 local_88;
  FDestructionSentinel local_78 [2];
  
  pUVar14 = AActor::GetWorld((AActor *)this);
  if ((pUVar14 != (UWorld *)0x0) && ((this->Canvas).field0_0x0.DebugPtr != (UCanvas *)0x0)) {
    pUVar14 = AActor::GetWorld((AActor *)this);
    pAVar4 = (this->PlayerOwner).field0_0x0.DebugPtr;
    this->RenderDelta = (float)(pUVar14->TimeSeconds - (double)this->LastHUDRenderTime);
    if (pAVar4 != (APlayerController *)0x0) {
      DrawDebugTextList(this);
    }
    pUVar24 = (UPlayer *)0x0;
    if (this->bShowDebugInfo == '\0') {
      if (this->bShowHUD != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar16 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar16,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) {
          (**(code **)(this->_padding_ + 0x7f0))(this);
          if ((this->HitBoxMap).ArrayNum < 1) {
            iVar29 = *(int *)&(this->HitBoxesOver).Elements.field_0x8 -
                     *(int *)&(this->HitBoxesOver).Elements.field_0x34;
            if (0 < iVar29) {
              this_00 = &this->HitBoxesOver;
              puVar1 = &(this->HitBoxesOver).Elements.field_0x10;
              iVar21 = *(int *)&(this->HitBoxesOver).Elements.field_0x28;
              local_f0 = 0;
              uStack_104 = 1;
              iVar26 = 0;
              iStack_f4 = 0;
              if (iVar21 != 0) {
                puVar28 = *(uint **)&(this->HitBoxesOver).Elements.field_0x20;
                if (puVar28 == (uint *)0x0) {
                  puVar28 = (uint *)puVar1;
                }
                uVar22 = *puVar28;
                while (uVar22 == 0) {
                  iVar26 = (int)pUVar24;
                  local_f0 = local_f0 + 0x20;
                  uVar22 = iVar26 + 1;
                  pUVar24 = (UPlayer *)(ulonglong)uVar22;
                  if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar22) {
                    iVar26 = *(int *)&(this->HitBoxesOver).Elements.field_0x28;
                    iStack_f4 = iVar21;
                    goto LAB_147d1e4a5;
                  }
                  uVar22 = puVar28[(longlong)iVar26 + 1];
                }
                iVar26 = *(int *)&(this->HitBoxesOver).Elements.field_0x28;
                uStack_104 = -uVar22 & uVar22;
                uVar2 = (ulonglong)uStack_104 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                local_e0 = (int)lVar20;
                iStack_f4 = local_f0 + -1 + local_e0;
                if (iVar26 < iStack_f4) {
                  iStack_f4 = iVar21;
                }
              }
LAB_147d1e4a5:
              uVar22 = *(uint *)&(this->HitBoxesOver).Elements.field_0x28;
              uVar30 = uVar22 & 0xffffffe0;
              uStack_f8 = 0xffffffff;
              uStack_108 = SUB84(pUVar24,0);
              TStack_c0._padding_ = CONCAT44(uStack_104,uStack_108);
              TStack_c0.CurrentBitIndex = iStack_f4;
              TStack_c0.UnvisitedBitMask = 0xffffffff;
              TStack_c0._28_4_ = iStack_f4;
              TStack_c0.BaseBitIndex = local_f0;
              uStack_a0 = CONCAT44(uStack_e4,iVar29);
              iVar21 = (int)uVar22 >> 5;
              local_110 = this_00;
              local_100 = puVar1;
              iStack_ec = iStack_f4;
              iStack_e8 = iVar29;
              local_c8 = this_00;
              TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
              if ((((int)uVar22 < 0) || (iVar26 < (int)uVar22)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar3 = *(uint *)&(this->HitBoxesOver).Elements.field_0x28;
              if (uVar22 != uVar3) {
                puVar27 = *(undefined1 **)&(this->HitBoxesOver).Elements.field_0x20;
                if (puVar27 == (undefined1 *)0x0) {
                  puVar27 = puVar1;
                }
                uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar21 * 4);
                while (uVar22 == 0) {
                  lVar20 = (longlong)iVar21;
                  uVar30 = uVar30 + 0x20;
                  iVar21 = iVar21 + 1;
                  uVar22 = uVar3;
                  if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
                  goto LAB_147d1e5b0;
                  uVar22 = *(uint *)(puVar27 + lVar20 * 4 + 4);
                }
                uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
                lVar20 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                local_dc = (int)lVar20;
                uVar22 = local_dc + -1 + uVar30;
                if ((int)uVar3 < (int)uVar22) {
                  uVar22 = uVar3;
                }
              }
LAB_147d1e5b0:
              while( true ) {
                pTVar10 = local_c8;
                if (*(int *)&(local_c8->Elements).field_0x8 -
                    *(int *)&(local_c8->Elements).field_0x34 != (int)uStack_a0) {
                  local_res20[0] = 0;
                  `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
                }
                if (((TStack_c0.CurrentBitIndex == uVar22) &&
                    (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                   (pTVar10 == this_00)) break;
                (**(code **)(this->_padding_ + 0x788))
                          (this,*(undefined8 *)
                                 (*(longlong *)&pTVar10->Elements +
                                 (longlong)TStack_c0.CurrentBitIndex * 0x10));
                TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
              }
              if (*(int *)&(this->HitBoxesOver).Elements.field_0x8 !=
                  *(int *)&(this->HitBoxesOver).Elements.field_0x34) {
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
                iVar29 = *(int *)&(this->HitBoxesOver).Elements.field_0xc;
                *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x8 = 0;
                if (iVar29 < 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,0,(ForAnyElementType *)this_00,0,
                             (int *)&(this->HitBoxesOver).Elements.field_0xc);
                }
                *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x30 = 0xffffffff;
                *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x34 = 0;
                *(undefined4 *)&(this->HitBoxesOver).Elements.field_0x28 = 0;
              }
            }
          }
          else {
            pAVar4 = (this->PlayerOwner).field0_0x0.DebugPtr;
            if (pAVar4 != (APlayerController *)0x0) {
              pUVar23 = pUVar24;
              if ((pAVar4->Player).field0_0x0.DebugPtr != (UPlayer *)0x0) {
                pUVar15 = Z_Construct_UClass_ULocalPlayer_NoRegister();
                bVar11 = FObjectPtr::IsA((FObjectPtr *)&pAVar4->Player,pUVar15);
                if (bVar11) {
                  pUVar23 = (pAVar4->Player).field0_0x0.DebugPtr;
                }
              }
              if ((pUVar23 != (UPlayer *)0x0) &&
                 (pUVar23[1].PlayerController.field0_0x0.DebugPtr != (APlayerController *)0x0)) {
                local_158.Data = (FScriptContainerElement *)0x0;
                local_150._0_4_ = 0;
                local_150._4_4_ = 0;
                this_02 = FSlateApplication::Get();
                bVar11 = FSlateApplication::IsFakingTouchEvents(this_02);
                if ((!bVar11) &&
                   (pAVar4 = pUVar23[1].PlayerController.field0_0x0.DebugPtr,
                   cVar13 = (**(code **)(pAVar4->_padding_ + 0x348))(pAVar4,&local_120),
                   cVar13 != '\0')) {
                  if (((local_158.Data <= (FScriptContainerElement *)&local_120) &&
                      ((FScriptContainerElement *)&local_120 <
                       local_158.Data + (longlong)local_150._4_4_ * 0x10)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if ((int)local_150 == local_150._4_4_) {
                    local_150._0_4_ =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_158,(int *)((longlong)&local_150 + 4));
                  }
                  *(double *)(local_158.Data + (longlong)(int)local_150 * 0x10) = local_120;
                  *(double *)(local_158.Data + (longlong)(int)local_150 * 0x10 + 8) = dStack_118;
                  local_150._0_4_ = (int)local_150 + 1;
                }
                do {
                  local_res10[0] = false;
                  APlayerController::GetInputTouchState
                            ((this->PlayerOwner).field0_0x0.DebugPtr,(Type)pUVar24,&local_140,
                             local_13c,local_res10);
                  if (local_res10[0] != false) {
                    local_130 = (double)local_140;
                    dStack_128 = (double)local_13c[0];
                    if (((local_158.Data <= (FScriptContainerElement *)&local_130) &&
                        ((FScriptContainerElement *)&local_130 <
                         local_158.Data + (longlong)local_150._4_4_ * 0x10)) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar11)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((int)local_150 == local_150._4_4_) {
                      local_150._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_158,(int *)((longlong)&local_150 + 4));
                    }
                    *(double *)(local_158.Data + (longlong)(int)local_150 * 0x10) = local_130;
                    *(double *)(local_158.Data + (longlong)(int)local_150 * 0x10 + 8) = dStack_128;
                    local_150._0_4_ = (int)local_150 + 1;
                  }
                  uVar22 = (Type)pUVar24 + Touch2;
                  pUVar24 = (UPlayer *)(ulonglong)uVar22;
                } while ((int)uVar22 < 0xb);
                GetCoordinateOffset(this,(TVector2<double> *)&local_98._s_0);
                iVar29 = (int)local_150;
                if ((local_98._s_0.X != 0.0) || (local_98._s_0.Y != 0.0)) {
                  pFVar18 = local_158.Data + (longlong)(int)local_150 * 0x10;
                  FVar25.Data = local_158.Data;
                  while( true ) {
                    if ((int)local_150 != iVar29) {
                      local_res18[0] = 0;
                      `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(local_res18);
                    }
                    if (FVar25.Data == pFVar18) break;
                    *(double *)FVar25.Data = local_98._s_0.X + *(double *)FVar25.Data;
                    *(double *)(FVar25.Data + 8) = local_98._s_0.Y + *(double *)(FVar25.Data + 8);
                    FVar25.Data = FVar25.Data + 0x10;
                  }
                }
                local_d8.AllocatorInstance.Data = local_158.Data;
                local_d8.ArrayNum = (int)local_150;
                local_d8.ArrayMax = local_150._4_4_;
                local_150 = 0;
                local_158.Data = (FScriptContainerElement *)0x0;
                UpdateHitBoxCandidates(this,&local_d8);
                if (local_158.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data);
                }
              }
            }
          }
        }
      }
    }
    else {
      pUVar5 = (this->DebugCanvas).field0_0x0.DebugPtr;
      if (pUVar5 != (UCanvas *)0x0) {
        this_01 = UEngine::GetTinyFont();
        TVar6 = (this->DebugCanvas).field0_0x0;
        if ((this_01 != (UFont *)0x0) &&
           (this_01 != (UFont *)(pUVar5->DisplayDebugManager).DebugTextItem._padding_)) {
          (pUVar5->DisplayDebugManager).DebugTextItem._padding_ = (longlong)this_01;
          fVar31 = UFont::GetMaxCharHeight(this_01);
          (pUVar5->DisplayDebugManager).MaxCharHeight = fVar31;
        }
        (pUVar5->DisplayDebugManager).Canvas = (UCanvas *)TVar6;
        (pUVar5->DisplayDebugManager).NextColumXPos = 0.0;
        (pUVar5->DisplayDebugManager).ColumnCount = 0;
        local_13c[1] = 4.0;
        local_13c[2] = 50.0;
        (pUVar5->DisplayDebugManager).InitialPos.field0_0x0 =
             (TVector2<float>_u_0)0x4248000040800000;
        (pUVar5->DisplayDebugManager).CurrentPos.field0_0x0 =
             (TVector2<float>_u_0)0x4248000040800000;
        pUVar5 = (this->DebugCanvas).field0_0x0.DebugPtr;
        (**(code **)(this->_padding_ + 0x7c0))
                  (this,&(pUVar5->DisplayDebugManager).MaxCharHeight,
                   (undefined1 *)
                   ((longlong)&(pUVar5->DisplayDebugManager).CurrentPos.field0_0x0 + 4));
      }
    }
    if (this->bShowHitBoxDebugInfo != 0) {
      iVar29 = (this->HitBoxMap).ArrayNum;
      this_03 = (FHUDHitBox *)(this->HitBoxMap).AllocatorInstance.Data;
      pFVar7 = ((this->Canvas).field0_0x0.DebugPtr)->Canvas;
      pFVar19 = this_03 + iVar29;
      while( true ) {
        if ((this->HitBoxMap).ArrayNum != iVar29) {
          local_148[0] = 0;
          `TCheckedPointerIterator<FHUDHitBox,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_148);
        }
        if (this_03 == pFVar19) break;
        pFVar17 = (this->HitBoxHits).AllocatorInstance.Data;
        pFVar18 = pFVar17 + (longlong)(this->HitBoxHits).ArrayNum * 8;
        local_88 = FLinearColor::White.field0_0x0;
        for (; pFVar17 != pFVar18; pFVar17 = pFVar17 + 8) {
          if (*(FHUDHitBox **)pFVar17 == this_03) {
            local_88 = FLinearColor::Red.field0_0x0;
            break;
          }
        }
        FHUDHitBox::Draw(this_03,pFVar7,(FLinearColor *)&local_88._s_0);
        this_03 = this_03 + 1;
      }
    }
    (**(code **)(this->_padding_ + 0x798))(this);
    pUVar5 = (this->DebugCanvas).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnHUDPostRender,
               (FWriteAccessScope *)local_78);
    bVar11 = false;
    OnHUDPostRender._28_4_ = OnHUDPostRender._28_4_ + 1;
    uVar22 = OnHUDPostRender._16_4_ - 1;
    if (-1 < (int)uVar22) {
      lVar20 = (longlong)(int)uVar22 << 4;
      bVar11 = false;
      do {
        uVar30 = 0;
        if ((int)uVar22 < (int)OnHUDPostRender._16_4_) {
          uVar30 = ~uVar22 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((*(int *)(lVar20 + 8 + OnHUDPostRender._8_8_) == 0) ||
            (plVar8 = *(longlong **)(lVar20 + OnHUDPostRender._8_8_), plVar8 == (longlong *)0x0)) ||
           (cVar13 = (**(code **)(*plVar8 + 0x68))(plVar8,this,pUVar5), cVar13 == '\0')) {
          bVar11 = true;
        }
        lVar20 = lVar20 + -0x10;
        uVar22 = uVar22 - 1;
      } while (-1 < (int)uVar22);
    }
    OnHUDPostRender._28_4_ = OnHUDPostRender._28_4_ + -1;
    if (bVar11) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnHUDPostRender,false);
    }
    if (local_78[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78[0].Accessor,local_78);
    }
    pUVar14 = AActor::GetWorld((AActor *)this);
    this->LastHUDRenderTime = (float)pUVar14->TimeSeconds;
  }
  return;
}

// PreviousDebugTarget @ 147d1ee20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::PreviousDebugTarget(AHUD *this)

{
  int *piVar1;
  APlayerCameraManager *pAVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  AActor *pAVar10;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 2000))(this,&local_18);
  pAVar10 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
  iVar8 = (int)local_10;
  if (pAVar10 != (AActor *)0x0) {
    uVar9 = this->CurrentTargetIndex;
    if ((-1 < (int)uVar9) && ((int)uVar9 < (int)local_10)) {
      uVar5 = 0;
      if ((int)uVar9 < (int)local_10) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (int)local_10;
      }
      pAVar10 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
      if (pAVar10 == (AActor *)0x0) {
        bVar4 = (AActor *)local_18[(int)uVar9] == (AActor *)0x0;
      }
      else {
        bVar4 = pAVar10 == (AActor *)local_18[(int)uVar9];
      }
      if (bVar4) goto LAB_147d1ef1a;
    }
    for (plVar7 = local_18; plVar7 != local_18 + iVar8; plVar7 = plVar7 + 1) {
      if ((AActor *)*plVar7 == pAVar10) {
        iVar6 = (int)((longlong)plVar7 - (longlong)local_18 >> 3);
        if (iVar6 != -1) {
          this->CurrentTargetIndex = iVar6;
        }
        break;
      }
    }
  }
LAB_147d1ef1a:
  piVar1 = &this->CurrentTargetIndex;
  *piVar1 = *piVar1 + -1;
  uVar9 = this->CurrentTargetIndex;
  if (*piVar1 < 0) {
    uVar9 = iVar8 - 1;
    this->CurrentTargetIndex = uVar9;
  }
  if (((int)uVar9 < 0) || (iVar8 <= (int)uVar9)) {
    pAVar2 = (((this->PlayerOwner).field0_0x0.DebugPtr)->PlayerCameraManager).field0_0x0.DebugPtr;
    if ((pAVar2 != (APlayerCameraManager *)0x0) &&
       (pAVar10 = (pAVar2->ViewTarget).Target.field0_0x0.DebugPtr, pAVar10 != (AActor *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar10);
      }
      (this->ShowDebugTargetActor).field0_0x0 = (pAVar2->ViewTarget).Target.field0_0x0;
    }
  }
  else {
    uVar5 = 0;
    if ((int)uVar9 < iVar8) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar10 = (AActor *)local_18[(int)uVar9];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar10 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    (this->ShowDebugTargetActor).field0_0x0.DebugPtr = pAVar10;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// Project @ 147d1f2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall
AHUD::Project(AHUD *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
             bool param_2)

{
  bool bVar1;
  TVector<double>_u_0 local_28;
  
  bVar1 = IsCanvasValid_WarnIfNot(this);
  if (bVar1) {
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    UCanvas::Project((this->Canvas).field0_0x0.DebugPtr,__return_storage_ptr__,
                     (TVector<double> *)&local_28._s_0,param_2);
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  return __return_storage_ptr__;
}

// ReceiveDrawHUD @ 147d1fc40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ReceiveDrawHUD(AHUD *this,int param_1,int param_2)

{
  UFunction *pUVar1;
  int local_res8;
  int local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveDrawHUD);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// ReceiveHitBoxBeginCursorOver @ 147d1fc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ReceiveHitBoxBeginCursorOver(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxBeginCursorOver);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveHitBoxClick @ 147d1fcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ReceiveHitBoxClick(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxClick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveHitBoxEndCursorOver @ 147d1fd10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ReceiveHitBoxEndCursorOver(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxEndCursorOver);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveHitBoxRelease @ 147d1fd50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ReceiveHitBoxRelease(AHUD *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_ReceiveHitBoxRelease);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// RemoveAllDebugStrings @ 147d21910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::RemoveAllDebugStrings(AHUD *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_RemoveAllDebugStrings);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147d2193d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// RemoveAllDebugStrings_Implementation @ 147d21950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::RemoveAllDebugStrings_Implementation(AHUD *this)

{
  int *piVar1;
  int iVar2;
  FDebugTextInfo *pFVar3;
  
  piVar1 = &(this->DebugTextList).ArrayMax;
  pFVar3 = (FDebugTextInfo *)(this->DebugTextList).AllocatorInstance.Data;
  iVar2 = (this->DebugTextList).ArrayNum;
  if (-1 < (this->DebugTextList).ArrayMax) {
    DestructItems<FDebugTextInfo,int>(pFVar3,iVar2);
    (this->DebugTextList).ArrayNum = 0;
    return;
  }
  DestructItems<FDebugTextInfo,int>(pFVar3,iVar2);
  (this->DebugTextList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&(this->DebugTextList).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveDebugText @ 147d22b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::RemoveDebugText(AHUD *this,AActor *param_1,bool param_2)

{
  UFunction *pUVar1;
  AActor *local_18;
  undefined1 local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AHUD_RemoveDebugText);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// RemoveDebugText_Implementation @ 147d22b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::RemoveDebugText_Implementation(AHUD *this,AActor *param_1,bool param_2)

{
  TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  AActor *pAVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  
  this_00 = &this->DebugTextList;
  pFVar2 = (this_00->AllocatorInstance).Data;
  iVar1 = (this->DebugTextList).ArrayNum;
  pFVar8 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x80) {
    while( true ) {
      if (*(AActor **)pFVar8 == (AActor *)0x0) {
        bVar13 = param_1 == (AActor *)0x0;
      }
      else {
        bVar13 = *(AActor **)pFVar8 == param_1;
      }
      if (bVar13) break;
      pFVar8 = pFVar8 + 0x80;
      if (pFVar8 == pFVar2 + (longlong)iVar1 * 0x80) {
        return;
      }
    }
    uVar9 = (longlong)pFVar8 - (longlong)pFVar2 >> 7;
    uVar7 = (uint)uVar9;
    if (uVar7 != 0xffffffff) {
      uVar11 = uVar7 + 1;
      if ((int)uVar11 < iVar1) {
        lVar12 = ((longlong)(int)uVar7 + 1) * 0x80;
        do {
          uVar6 = 0;
          if ((int)uVar11 < (this->DebugTextList).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pAVar3 = *(AActor **)((this_00->AllocatorInstance).Data + lVar12);
          if (pAVar3 == (AActor *)0x0) {
            bVar13 = param_1 == (AActor *)0x0;
          }
          else {
            bVar13 = pAVar3 == param_1;
          }
          if (!bVar13) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x80;
        } while ((int)uVar11 < iVar1);
      }
      fVar5 = __real_bf800000;
      uVar11 = ((int)uVar9 - uVar7) + 1;
      if (0 < (int)uVar11) {
        if (param_2) {
          lVar12 = (longlong)(int)uVar9;
          if ((int)uVar7 <= lVar12) {
            lVar10 = lVar12 << 7;
            lVar12 = (lVar12 - (int)uVar7) + 1;
            do {
              uVar11 = (uint)uVar9;
              uVar7 = 0;
              if ((int)uVar11 < (this->DebugTextList).ArrayNum) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (fVar5 == *(float *)((this_00->AllocatorInstance).Data + lVar10 + 0x48)) {
                uVar7 = 0;
                if ((int)(uVar11 + 1) <= (this->DebugTextList).ArrayNum) {
                  uVar7 = ~uVar11 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar11,1);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x80,8,&this_00->AllocatorInstance,(this->DebugTextList).ArrayNum,
                           &(this->DebugTextList).ArrayMax);
              }
              uVar9 = (ulonglong)(uVar11 - 1);
              lVar10 = lVar10 + -0x80;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        else {
          uVar6 = 0;
          if ((int)(uVar11 + uVar7) <= (this->DebugTextList).ArrayNum) {
            uVar6 = ~(uVar11 | uVar7) >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar7,uVar11);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,&this_00->AllocatorInstance,(this->DebugTextList).ArrayNum,
                     &(this->DebugTextList).ArrayMax);
        }
      }
    }
  }
  return;
}

// RemovePostRenderedActor @ 147d246d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::RemovePostRenderedActor(AHUD *this,AActor *param_1)

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->PostRenderedActors).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->PostRenderedActors).ArrayNum) {
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
      pAVar1 = *(AActor **)((this->PostRenderedActors).AllocatorInstance.Data + lVar6);
      if (pAVar1 == (AActor *)0x0) {
        bVar3 = param_1 == (AActor *)0x0;
      }
      else {
        bVar3 = pAVar1 == param_1;
      }
      if (bVar3) {
        uVar4 = 0;
        if ((int)uVar5 < (this->PostRenderedActors).ArrayNum) {
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
        *(undefined8 *)
         ((this->PostRenderedActors).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = 0;
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->PostRenderedActors).ArrayNum);
  }
  return;
}

// RenderHitBoxes @ 147d24800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::RenderHitBoxes(AHUD *this,FCanvas *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FHUDHitBox *this_00;
  FHUDHitBox *pFVar4;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_28;
  
  iVar2 = (this->HitBoxMap).ArrayNum;
  this_00 = (FHUDHitBox *)(this->HitBoxMap).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar2;
  do {
    if ((this->HitBoxMap).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHUDHitBox,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar4) {
      return;
    }
    pFVar3 = (this->HitBoxHits).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)(this->HitBoxHits).ArrayNum * 8;
    local_28 = FLinearColor::White.field0_0x0;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 8) {
      if (*(FHUDHitBox **)pFVar3 == this_00) {
        local_28 = FLinearColor::Red.field0_0x0;
        break;
      }
    }
    FHUDHitBox::Draw(this_00,param_1,(FLinearColor *)&local_28._s_0);
    this_00 = this_00 + 1;
  } while( true );
}

// SetCanvas @ 147d28c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::SetCanvas(AHUD *this,UCanvas *param_1,UCanvas *param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCanvas *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Canvas).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UCanvas *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->DebugCanvas).field0_0x0.DebugPtr = param_2;
  return;
}

// ShouldDisplayDebug @ 147d2d830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AHUD::ShouldDisplayDebug(AHUD *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (this->bShowDebugInfo != '\0') {
    pFVar2 = (FName *)(this->DebugDisplay).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (this->DebugDisplay).ArrayNum;
    if (pFVar2 != pFVar1) {
      do {
        if (*pFVar2 == *param_1) {
          return true;
        }
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar1);
    }
  }
  return false;
}

// ShowDebug @ 147d2dad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ShowDebug(AHUD *this,FName param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  FName local_res10;
  
  puVar1 = &this->field_0x2c8;
  uVar2 = *puVar1;
  if (param_1 == (FName)0x0) {
    *puVar1 = uVar2 ^ 4;
  }
  else if (param_1 == ShowDebugNames::HitBox) {
    this->field_0x2d0 = this->field_0x2d0 ^ 1;
  }
  else {
    local_res10 = param_1;
    if (param_1 == ShowDebugNames::Reset) {
      (this->DebugDisplay).ArrayNum = 0;
      if ((this->DebugDisplay).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->DebugDisplay).AllocatorInstance,0,&(this->DebugDisplay).ArrayMax);
      }
      this->bShowDebugInfo = '\0';
      UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
    }
    else {
      if ((this->bShowDebugInfo == '\0') ||
         (iVar3 = TArray<FName,TSizedDefaultAllocator<32>_>::Remove
                            (&this->DebugDisplay,&local_res10), iVar3 == 0)) {
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (&this->DebugDisplay,&local_res10);
      }
      this->bShowDebugInfo = '\x01';
      UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
    }
  }
  if (this->bShowDebugInfo != this->bShowDebugInfo) {
    (this->ShowDebugTargetActor).field0_0x0.DebugPtr = (AActor *)0x0;
  }
  return;
}

// ShowDebugForReticleTargetToggle @ 147d2dc20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ShowDebugForReticleTargetToggle(AHUD *this,TSubclassOf<AActor> param_1)

{
  this->field_0x2d0 = this->field_0x2d0 ^ 8;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    (this->ShowDebugTargetDesiredClass).Class.field0_0x0 =
         *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    return;
  }
  if (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    (this->ShowDebugTargetDesiredClass).Class.field0_0x0 =
         *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    return;
  }
  (this->ShowDebugTargetDesiredClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return;
}

// ShowDebugInfo @ 147d2dc90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ShowDebugInfo(AHUD *this,float *param_1,float *param_2)

{
  UCanvas *pUVar1;
  FScriptContainerElement *pFVar2;
  APlayerController *pAVar3;
  AGameModeBase *pAVar4;
  longlong *plVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  FNameEntryId FVar11;
  uint uVar12;
  AActor *pAVar13;
  UWorld *pUVar14;
  undefined4 extraout_var;
  uint uVar15;
  longlong lVar16;
  char *pcVar17;
  float local_res8 [2];
  float local_res20 [2];
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  TVector<double>_u_0 local_c0;
  FString local_a8;
  undefined1 local_98 [4];
  FName local_94;
  UCanvas *local_88;
  FString local_80;
  FString local_70;
  FLinearColor_u_0 local_60;
  TVector<double> local_50;
  
  pUVar1 = (this->DebugCanvas).field0_0x0.DebugPtr;
  if ((pUVar1 != (UCanvas *)0x0) && (pUVar1->Canvas != (FCanvas *)0x0)) {
    local_60._0_8_ = ___xmm_3e4ccccd000000000000000000000000;
    local_60._8_8_ = _UNK_15146ec78;
    pcVar17 = (char *)(double)pUVar1->ClipY;
    FCanvas::DrawTile(pUVar1->Canvas,0.0,0.0,(double)pUVar1->ClipX,(double)pcVar17,0.0,0.0,0.0,0.0,
                      (FLinearColor *)&local_60._s_0,(FTexture *)0x0,true);
    local_e0 = (this->DebugDisplay).ArrayNum;
    lVar16 = (longlong)local_e0;
    pFVar2 = (this->DebugDisplay).AllocatorInstance.Data;
    local_e8.Data = (FScriptContainerElement *)0x0;
    if (local_e0 == 0) {
      local_dc = 0;
    }
    else {
      pcVar17 = (char *)&local_e8;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_e0,0,(ForAnyElementType *)pcVar17,local_e0,&local_dc);
      memcpy(local_e8.Data,pFVar2,lVar16 << 3);
    }
    local_d0 = (this->ToggledDebugCategories).ArrayNum;
    lVar16 = (longlong)local_d0;
    pFVar2 = (this->ToggledDebugCategories).AllocatorInstance.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
    }
    else {
      pcVar17 = (char *)&local_d8;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_d0,0,(ForAnyElementType *)pcVar17,local_d0,&local_cc);
      memcpy(local_d8.Data,pFVar2,lVar16 << 3);
    }
    pAVar13 = (AActor *)(**(code **)(this->_padding_ + 0x7c8))(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar13 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar13);
    }
    (this->ShowDebugTargetActor).field0_0x0.DebugPtr = pAVar13;
    pUVar1 = (this->DebugCanvas).field0_0x0.DebugPtr;
    (pUVar1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f800000;
    *(undefined4 *)&(pUVar1->DisplayDebugManager).DebugTextItem._padding_ = 0;
    *(undefined4 *)((longlong)&(pUVar1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         0x3f800000;
    pAVar13 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
    local_res8[0] = 0.0;
    if (pAVar13 == (AActor *)0x0) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      local_94 = (FName)pAVar13->_padding_;
      ::FName::ToString(&local_94,&local_a8);
    }
    ::FString::PrintfImpl
              (&local_80,
               L"Showing Debug for %s, Press [PageUp] and [PageDown] to cycle between targets.");
    FDisplayDebugManager::DrawString(&pUVar1->DisplayDebugManager,&local_80,local_res8);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_res20[0] = 0.0;
    ::FString::FString(&local_70,
                       L"Press [Right Shift] or [Left Shift] to move the debug menu a column over to see more of the debug menu"
                      );
    FDisplayDebugManager::DrawString(&pUVar1->DisplayDebugManager,&local_70,local_res20);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pTVar7 = GDrawCurrentDebugTargetBoundingBox.Ref;
    pAVar13 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
    if ((pAVar13 != (AActor *)0x0) && (((uint)pAVar13->_padding_ >> 0x1e & 1) == 0)) {
      bVar8 = IsInParallelGameThread();
      if ((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) {
        pcVar17 = "GetShadowIndex() == 0";
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (0 < pTVar7->ShadowedValue[0]) {
        pAVar13 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
        (**(code **)(pAVar13->_padding_ + 0x358))
                  (pAVar13,1,&local_50,&local_c0,(ulonglong)pcVar17 & 0xffffffffffffff00);
        local_c0._s_0.X = local_c0._s_0.X * ___xmm_3ff19999a00000003ff19999a0000000;
        local_c0._s_0.Y = local_c0._s_0.Y * _UNK_1518ecdc8;
        local_c0._s_0.Z = local_c0._s_0.Z * ___xmm_3ff19999a00000003ff19999a0000000;
        pUVar14 = AActor::GetWorld((AActor *)this);
        DrawDebugBox(pUVar14,&local_50,(TVector<double> *)&local_c0._s_0,&FColor::Green,false,
                     __real_bf800000,'\0',__real_40000000);
      }
      pAVar13 = (this->ShowDebugTargetActor).field0_0x0.DebugPtr;
      (**(code **)(pAVar13->_padding_ + 0x758))
                (pAVar13,(this->DebugCanvas).field0_0x0.DebugPtr,&local_e8,param_1,param_2);
      if ((this->bShowDebugForReticleTarget == '\0') &&
         ((((this->ShowDebugTargetActor).field0_0x0.DebugPtr)->Role).Value == '\x01')) {
        pAVar3 = (this->PlayerOwner).field0_0x0.DebugPtr;
        (**(code **)(pAVar3->_padding_ + 0x758))
                  (pAVar3,(this->DebugCanvas).field0_0x0.DebugPtr,&local_e8,param_1,param_2);
      }
    }
    pcVar6 = *(code **)(this->_padding_ + 0x7b8);
    FVar11 = FNameEntryId::FromValidEName((EName)local_98);
    local_c8 = *(undefined4 *)CONCAT44(extraout_var,FVar11.Value);
    local_c4 = 0;
    cVar9 = (*pcVar6)(this);
    if (cVar9 != '\0') {
      pUVar14 = AActor::GetWorld((AActor *)this);
      pAVar4 = (pUVar14->AuthorityGameMode).field0_0x0.DebugPtr;
      if (pAVar4 != (AGameModeBase *)0x0) {
        (**(code **)(pAVar4->_padding_ + 0x758))
                  (pAVar4,(this->DebugCanvas).field0_0x0.DebugPtr,&local_e8,param_1,param_2);
      }
    }
    if (this->bShowDebugInfo != '\0') {
      local_88 = (this->DebugCanvas).field0_0x0.DebugPtr;
      EnterCriticalSection((LPCRITICAL_SECTION)&OnShowDebugInfo);
      bVar8 = false;
      OnShowDebugInfo._60_4_ = OnShowDebugInfo._60_4_ + 1;
      uVar15 = OnShowDebugInfo._48_4_ - 1;
      if (-1 < (int)uVar15) {
        lVar16 = (longlong)(int)uVar15 << 4;
        bVar8 = false;
        do {
          uVar12 = 0;
          if ((int)uVar15 < (int)OnShowDebugInfo._48_4_) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(int *)(lVar16 + 8 + OnShowDebugInfo._40_8_) == 0) ||
              (plVar5 = *(longlong **)(lVar16 + OnShowDebugInfo._40_8_), plVar5 == (longlong *)0x0))
             || (cVar9 = (**(code **)(*plVar5 + 0x68))
                                   (plVar5,this,local_88,&local_e8,param_1,param_2), cVar9 == '\0'))
          {
            bVar8 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      OnShowDebugInfo._60_4_ = OnShowDebugInfo._60_4_ + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&OnShowDebugInfo,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&OnShowDebugInfo);
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
  }
  return;
}

// ShowDebugToggleSubCategory @ 147d2e240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ShowDebugToggleSubCategory(AHUD *this,FName param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FName FVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  ulonglong uVar14;
  FName local_res10;
  byte local_res18;
  int local_res20;
  ulonglong uVar12;
  
  pTVar2 = &this->ToggledDebugCategories;
  local_res10 = param_1;
  if (param_1 == ShowDebugNames::Reset) {
    (this->ToggledDebugCategories).ArrayNum = 0;
    if ((this->ToggledDebugCategories).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar2->AllocatorInstance,0,&(this->ToggledDebugCategories).ArrayMax);
    }
  }
  else {
    pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= &local_res10) &&
        (&local_res10 < pFVar3 + (this->ToggledDebugCategories).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20 = (this->ToggledDebugCategories).ArrayNum;
    lVar7 = (longlong)local_res20;
    uVar9 = 0;
    FVar8 = local_res10;
    if (local_res20 != 0) {
      pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
      local_res18 = *pFVar3 != local_res10;
      uVar12 = uVar9;
      uVar14 = uVar9;
      do {
        uVar10 = (uint)uVar12;
        uVar11 = uVar10;
        do {
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 + 1;
          uVar12 = (ulonglong)uVar11;
          if (lVar7 <= (longlong)uVar9) break;
        } while ((bool)local_res18 == (pFVar3[uVar9] != FVar8));
        if (local_res18 != 0) {
          uVar13 = (uint)uVar14;
          if (uVar13 != uVar10) {
            memmove(pFVar3 + (int)uVar13,pFVar3 + (int)uVar10,(longlong)(int)(uVar11 - uVar10) << 3)
            ;
            FVar8 = local_res10;
          }
          uVar14 = (ulonglong)(uVar13 + (uVar11 - uVar10));
        }
        local_res18 = local_res18 ^ 1;
      } while ((longlong)uVar9 < lVar7);
      (this->ToggledDebugCategories).ArrayNum = (int)uVar14;
      if (local_res20 != (int)uVar14) goto LAB_147d2e4c7;
    }
    pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= &local_res10) &&
        (&local_res10 < pFVar3 + (this->ToggledDebugCategories).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), FVar8 = local_res10, bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->ToggledDebugCategories).ArrayNum;
    piVar1 = &(this->ToggledDebugCategories).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
      FVar8 = local_res10;
    }
    (this->ToggledDebugCategories).ArrayNum = iVar6 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = FVar8;
  }
LAB_147d2e4c7:
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// ShowHUD @ 147d2e500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AHUD::ShowHUD(AHUD *this)

{
  this->field_0x2c8 = this->field_0x2c8 ^ 2;
  return;
}

// StaticRegisterNativesAHUD @ 147d32860

void __cdecl AHUD::StaticRegisterNativesAHUD(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_AHUD_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAndDispatchHitBoxClickEvents @ 147d35490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AHUD::UpdateAndDispatchHitBoxClickEvents(AHUD *this,TVector2<double> *param_1,EInputEvent param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  FHUDHitBox *pFVar6;
  FScriptContainerElement *pFVar7;
  FHUDHitBox *pFVar8;
  bool bVar9;
  undefined1 local_res18 [8];
  TVector2<double>_u_0 local_38;
  
  if ((param_2 == IE_Pressed) || (param_2 == IE_DoubleClick)) {
    iVar3 = (this->HitBoxMap).ArrayNum;
    bVar4 = true;
  }
  else {
    bVar4 = false;
    iVar3 = (this->HitBoxHits).ArrayNum;
  }
  if (iVar3 == 0) {
    return false;
  }
  pTVar5 = GetCoordinateOffset(this,(TVector2<double> *)&local_38._s_0);
  bVar9 = false;
  dVar2 = (pTVar5->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar2 + (param_1->field0_0x0)._s_0.Y;
  if (bVar4) {
    iVar3 = (this->HitBoxMap).ArrayNum;
    pFVar6 = (FHUDHitBox *)(this->HitBoxMap).AllocatorInstance.Data;
    pFVar8 = pFVar6 + iVar3;
    while( true ) {
      if ((this->HitBoxMap).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FHUDHitBox,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar6 == pFVar8) break;
      local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      bVar4 = FHUDHitBox::Contains(pFVar6,(TVector2<double> *)&local_38._s_0);
      if (bVar4) {
        bVar9 = true;
        (**(code **)(this->_padding_ + 0x770))(this,pFVar6->Name);
        if (pFVar6->bConsumesInput != false) {
          return true;
        }
      }
      pFVar6 = pFVar6 + 1;
    }
  }
  else {
    pFVar7 = (this->HitBoxHits).AllocatorInstance.Data;
    iVar3 = (this->HitBoxHits).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->HitBoxHits).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FHUDHitBox_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar7 == pFVar1) break;
      local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      pFVar6 = *(FHUDHitBox **)pFVar7;
      bVar4 = FHUDHitBox::Contains(pFVar6,(TVector2<double> *)&local_38._s_0);
      if (bVar4) {
        bVar9 = true;
        if (param_2 == IE_Released) {
          (**(code **)(this->_padding_ + 0x778))(this,pFVar6->Name);
        }
        if (pFVar6->bConsumesInput == true) {
          return true;
        }
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return bVar9;
}

// UpdateHitBoxCandidates @ 147d36b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AHUD::UpdateHitBoxCandidates
          (AHUD *this,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FHUDHitBox_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  FName FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  FHUDHitBox *pFVar7;
  FName FVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  ForElementType<FSetElementId> FVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  longlong *plVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint *puVar25;
  AHUD *pAVar26;
  AHUD *pAVar27;
  undefined1 *puVar28;
  longlong lVar29;
  FHUDHitBox *pFVar30;
  FScriptContainerElement *pFVar31;
  undefined1 auStackY_1d8 [32];
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185 [5];
  AHUD *local_180;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_178;
  FHUDHitBox *local_170;
  uint local_168;
  FHUDHitBox *local_160;
  TArray<FName,TSizedDefaultAllocator<32>_> local_158;
  FName local_148;
  int local_140;
  int local_13c;
  FName local_138;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TVector2<double>_u_0 local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar2 = &this->HitBoxHits;
  piVar1 = &(this->HitBoxHits).ArrayMax;
  (this->HitBoxHits).ArrayNum = 0;
  local_180 = this;
  local_178 = param_1;
  if ((this->HitBoxHits).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_168 = (this->HitBoxMap).ArrayNum;
  uVar16 = (ulonglong)(int)local_168;
  pFVar30 = (FHUDHitBox *)(this->HitBoxMap).AllocatorInstance.Data;
  local_160 = pFVar30 + uVar16;
  pAVar26 = this;
  while( true ) {
    pFVar7 = local_160;
    if ((pAVar26->HitBoxMap).ArrayNum != (int)uVar16) {
      local_188 = 0;
      `TCheckedPointerIterator<FHUDHitBox,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_188);
    }
    if (pFVar30 == pFVar7) break;
    bVar11 = false;
    uVar20 = local_178->ArrayNum - 1;
    if (-1 < (int)uVar20) {
      lVar29 = (longlong)(int)uVar20 << 4;
      do {
        uVar23 = 0;
        if ((int)uVar20 < local_178->ArrayNum) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar31 = (local_178->AllocatorInstance).Data + lVar29;
        local_c8[0]._0_8_ = *(undefined8 *)pFVar31;
        local_c8[0]._8_8_ = *(undefined8 *)(pFVar31 + 8);
        bVar10 = FHUDHitBox::Contains(pFVar30,(TVector2<double> *)&local_c8[0]._s_0);
        if (bVar10) {
          if (!bVar11) {
            pFVar31 = (pTVar2->AllocatorInstance).Data;
            local_170 = pFVar30;
            if (((pFVar31 <= (FScriptContainerElement *)&local_170) &&
                ((FScriptContainerElement *)&local_170 < pFVar31 + (longlong)*piVar1 * 8)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = (this->HitBoxHits).ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            bVar11 = true;
            (this->HitBoxHits).ArrayNum = iVar12 + 1;
            *(FHUDHitBox **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_170;
          }
          pAVar26 = local_180;
          if (pFVar30->bConsumesInput == false) break;
          uVar23 = 0;
          if ((int)uVar20 < local_178->ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar6 = local_178;
          iVar12 = ~uVar20 + local_178->ArrayNum;
          pFVar31 = (local_178->AllocatorInstance).Data;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            memmove(pFVar31 + (ulonglong)uVar20 * 0x10,
                    pFVar31 + (longlong)(local_178->ArrayNum - iVar12) * 0x10,(longlong)iVar12 << 4)
            ;
          }
          pTVar6->ArrayNum = pTVar6->ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&pTVar6->AllocatorInstance,pTVar6->ArrayNum,&pTVar6->ArrayMax);
        }
        lVar29 = lVar29 + -0x10;
        uVar20 = uVar20 - 1;
        pAVar26 = local_180;
      } while (-1 < (int)uVar20);
    }
    if (local_178->ArrayNum == 0) break;
    pFVar30 = pFVar30 + 1;
    uVar16 = (ulonglong)local_168;
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
             &pAVar26->HitBoxesOver);
  pFVar31 = (pAVar26->HitBoxHits).AllocatorInstance.Data;
  iVar12 = (pAVar26->HitBoxHits).ArrayNum;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_160 = (FHUDHitBox *)(pFVar31 + (longlong)iVar12 * 8);
  pAVar27 = pAVar26;
LAB_147d36e90:
  while( true ) {
    pFVar30 = local_160;
    if ((pAVar27->HitBoxHits).ArrayNum != iVar12) {
      local_187 = 0;
      `TCheckedPointerIterator<FHUDHitBox_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_187);
    }
    uVar20 = local_70;
    if ((FHUDHitBox *)pFVar31 == pFVar30) break;
    FVar3 = *(FName *)(*(longlong *)pFVar31 + 0x20);
    local_148 = FVar3;
    uVar20 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    FVar8 = local_148;
    if (*(int *)&(pAVar27->HitBoxesOver).Elements.field_0x8 !=
        *(int *)&(pAVar26->HitBoxesOver).Elements.field_0x34) {
      FVar18 = (pAVar26->HitBoxesOver).Hash.SecondaryData;
      FVar19 = (ForElementType<FSetElementId>)&(pAVar26->HitBoxesOver).Hash;
      if (FVar18 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = FVar18;
      }
      iVar13 = *(int *)((longlong)FVar19 +
                       (ulonglong)((pAVar26->HitBoxesOver).HashSize - 1U & FVar3.Number + uVar20) *
                       4);
      if (iVar13 != -1) {
        lVar29 = *(longlong *)&(pAVar26->HitBoxesOver).Elements;
        do {
          if (*(FName *)(lVar29 + (longlong)iVar13 * 0x10) == FVar3) {
            if (local_98._8_4_ == local_64) goto LAB_147d36f99;
            uVar20 = ::GetTypeHash(local_148.ComparisonIndex.Value);
            FVar18 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_58;
            }
            uVar20 = *(uint *)((longlong)FVar18 +
                              (longlong)(int)(local_50 - 1U & FVar8.Number + uVar20) * 4);
            if (uVar20 != 0xffffffff) goto LAB_147d36f80;
            goto LAB_147d36f99;
          }
          iVar13 = *(int *)(lVar29 + 8 + (longlong)iVar13 * 0x10);
        } while (iVar13 != -1);
      }
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(&local_158,&local_148);
    pFVar31 = pFVar31 + 8;
  }
  iStack_128 = 0;
  local_110 = 0;
  uStack_124 = 1;
  uStack_114 = 0;
  if (local_70 == 0) goto LAB_147d37120;
  FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FVar17 = local_78;
  }
  uVar23 = *(uint *)FVar17;
joined_r0x000147d370d7:
  if (uVar23 != 0) goto LAB_147d370fc;
  lVar29 = (longlong)iStack_128;
  local_110 = local_110 + 0x20;
  iStack_128 = iStack_128 + 1;
  uStack_114 = local_70;
  if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_128)
  goto LAB_147d37120;
  uVar23 = ((uint *)((longlong)FVar17 + 4))[lVar29];
  goto joined_r0x000147d370d7;
LAB_147d370fc:
  uStack_124 = -uVar23 & uVar23;
  uVar16 = (ulonglong)uStack_124 * 2 + 1;
  lVar29 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  local_140 = (int)lVar29;
  uStack_114 = local_110 + -1 + local_140;
  if ((int)local_70 < (int)uStack_114) {
    uStack_114 = local_70;
  }
LAB_147d37120:
  local_130 = (longlong *)local_98;
  uStack_10c = local_9c;
  local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_108 = local_98._8_4_ - local_64;
  uVar23 = local_70 & 0xffffffe0;
  uStack_118 = 0xffffffff;
  TStack_f8.CurrentBitIndex = uStack_114;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
  iVar12 = (int)local_70 >> 5;
  TStack_f8._28_4_ = local_9c;
  TStack_f8.BaseBitIndex = local_110;
  uStack_d8 = CONCAT44(uStack_104,iStack_108);
  bVar15 = (byte)local_70;
  local_100 = local_130;
  TStack_f8.Array = local_120;
  if (((int)local_70 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pAVar26 = local_180;
  if (uVar20 != local_70) {
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_78;
    }
    uVar20 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar12 * 4);
    while (uVar20 == 0) {
      lVar29 = (longlong)iVar12;
      uVar23 = uVar23 + 0x20;
      iVar12 = iVar12 + 1;
      uVar20 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_147d37220;
      uVar20 = ((uint *)((longlong)FVar17 + 4))[lVar29];
    }
    uVar16 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_13c = (int)lVar29;
    uVar20 = local_13c + -1 + uVar23;
    if ((int)local_70 < (int)uVar20) {
      uVar20 = local_70;
    }
  }
LAB_147d37220:
  this_00 = &local_180->HitBoxesOver;
  pAVar27 = local_180;
  do {
    plVar21 = local_100;
    if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
      local_186 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_186);
    }
    if (((TStack_f8.CurrentBitIndex == uVar20) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar21 == (longlong *)local_98)) {
      iVar12 = local_158.ArrayNum;
      uVar16 = (ulonglong)local_158.ArrayNum;
      pFVar31 = local_158.AllocatorInstance.Data + uVar16 * 8;
      FVar22.Data = local_158.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar16 != iVar12) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_185);
        }
        if (FVar22.Data == pFVar31) break;
        (**(code **)(pAVar27->_padding_ + 0x780))(pAVar27,*(undefined8 *)FVar22.Data);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&pAVar27->HitBoxesOver,&local_138,(bool *)FVar22.Data);
        uVar16 = local_158._8_8_ & 0xffffffff;
        FVar22.Data = FVar22.Data + 8;
      }
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      pFVar31 = (local_178->AllocatorInstance).Data;
      if (pFVar31 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar31);
      }
      return;
    }
    plVar21 = (longlong *)(*plVar21 + (longlong)TStack_f8.CurrentBitIndex * 0x10);
    (**(code **)(pAVar27->_padding_ + 0x788))(pAVar27,*plVar21);
    lVar29 = *plVar21;
    if (*(int *)&(pAVar27->HitBoxesOver).Elements.field_0x8 !=
        *(int *)&(pAVar26->HitBoxesOver).Elements.field_0x34) {
      uVar23 = ::GetTypeHash((FNameEntryId)(uint)lVar29);
      FVar18 = (pAVar26->HitBoxesOver).Hash.SecondaryData;
      FVar19 = (ForElementType<FSetElementId>)&(pAVar26->HitBoxesOver).Hash;
      if (FVar18 != (ForElementType<FSetElementId>)0x0) {
        FVar19 = FVar18;
      }
      uVar23 = *(uint *)((longlong)FVar19 +
                        ((longlong)(pAVar27->HitBoxesOver).HashSize - 1U &
                        (longlong)(int)((int)((ulonglong)lVar29 >> 0x20) + uVar23)) * 4);
      if (uVar23 != 0xffffffff) {
LAB_147d372e0:
        if (*(longlong *)(*(longlong *)&this_00->Elements + (longlong)(int)uVar23 * 0x10) != lVar29)
        break;
        if (((int)uVar23 < 0) ||
           (*(int *)&(pAVar26->HitBoxesOver).Elements.field_0x28 <= (int)uVar23)) {
LAB_147d3736a:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Elements.IsValidIndex(ElementIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                              ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                             );
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if ((*(int *)&(pAVar26->HitBoxesOver).Elements.field_0x28 <= (int)uVar23) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar4 = *(undefined1 **)&(pAVar26->HitBoxesOver).Elements.field_0x20;
          puVar28 = &(pAVar26->HitBoxesOver).Elements.field_0x10;
          if (puVar4 != (undefined1 *)0x0) {
            puVar28 = puVar4;
          }
          uVar14 = uVar23;
          if ((int)uVar23 < 0) {
            uVar14 = uVar23 + 0x1f;
          }
          if ((*(uint *)(puVar28 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar23 & 0x1f) & 1) == 0)
          goto LAB_147d3736a;
        }
        FVar18 = (pAVar26->HitBoxesOver).Hash.SecondaryData;
        lVar29 = (longlong)(int)uVar23 * 0x10 + *(longlong *)&this_00->Elements;
        FVar19 = (ForElementType<FSetElementId>)&(pAVar26->HitBoxesOver).Hash;
        if (FVar18 != (ForElementType<FSetElementId>)0x0) {
          FVar19 = FVar18;
        }
        puVar25 = (uint *)((longlong)FVar19 + (longlong)*(int *)(lVar29 + 0xc) * 4);
        while( true ) {
          uVar14 = *puVar25;
          if ((uVar14 == 0xffffffff) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NextElementIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2b5,L"Corrupt hash"), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar14 == uVar23) break;
          puVar25 = (uint *)(*(longlong *)&this_00->Elements + 8 + (longlong)(int)uVar14 * 0x10);
        }
        *puVar25 = *(uint *)(lVar29 + 8);
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this_00,uVar23,1);
        pAVar27 = local_180;
      }
    }
LAB_147d37411:
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  } while( true );
  uVar23 = *(uint *)(*(longlong *)&this_00->Elements + 8 + (longlong)(int)uVar23 * 0x10);
  if (uVar23 == 0xffffffff) goto LAB_147d37411;
  goto LAB_147d372e0;
LAB_147d36f80:
  if (*(FName *)(local_98._0_8_ + (longlong)(int)uVar20 * 0x10) != FVar8) {
    uVar20 = *(uint *)(local_98._0_8_ + (longlong)(int)uVar20 * 0x10 + 8);
    if (uVar20 == 0xffffffff) goto LAB_147d36f99;
    goto LAB_147d36f80;
  }
  if (((int)uVar20 < 0) || ((int)local_70 <= (int)uVar20)) {
LAB_147d36fdf:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Elements.IsValidIndex(ElementIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_78;
    }
    uVar23 = uVar20;
    if ((int)uVar20 < 0) {
      uVar23 = uVar20 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar23 >> 5) * 4) >> (uVar20 & 0x1f) & 1) == 0
       ) goto LAB_147d36fdf;
  }
  uVar9 = local_98._0_8_;
  FVar18 = (ForElementType<FSetElementId>)local_60;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FVar18 = local_58;
  }
  pFVar24 = (FScriptContainerElement *)
            ((longlong)FVar18 +
            (longlong)*(int *)(local_98._0_8_ + (longlong)(int)uVar20 * 0x10 + 0xc) * 4);
  while( true ) {
    uVar23 = *(uint *)pFVar24;
    if ((uVar23 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar23 == uVar20) break;
    pFVar24 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar23 * 0x10 + 8);
  }
  *(uint *)pFVar24 = *(uint *)(uVar9 + (longlong)(int)uVar20 * 0x10 + 8);
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98,uVar20,1);
  pFVar31 = pFVar31 + 8;
  pAVar27 = local_180;
  goto LAB_147d36e90;
LAB_147d36f99:
  pFVar31 = pFVar31 + 8;
  pAVar27 = local_180;
  goto LAB_147d36e90;
}

// execAddDebugText @ 147d3ab30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execAddDebugText(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  FField **ppFVar3;
  FProperty *pFVar4;
  USceneComponent *pUVar5;
  code *pcVar6;
  FColor_u_0 FVar7;
  undefined4 uVar8;
  ForAnyElementType _Src;
  UObject *pUVar9;
  AActor *pAVar10;
  int iVar11;
  int iVar12;
  UFunction *pUVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  FColor_u_0 local_10c;
  ForAnyElementType local_108;
  undefined8 local_100;
  uint local_f8;
  int local_f4;
  UObject *local_f0;
  AActor *local_e8;
  AActor *local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  FStrProperty::StaticClass();
  ppFVar3 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_e8 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_110 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_124 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  bVar17 = local_124 != 0;
  local_120 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  bVar18 = local_120 != 0;
  local_11c = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_11c,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_11c);
  }
  bVar19 = local_11c != 0;
  local_f0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_114 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  local_118 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pAVar10 = local_e8;
  pUVar9 = local_f0;
  uVar21 = local_110;
  uVar8 = local_114;
  bVar20 = local_118 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7 = local_10c;
  if ((FColor_u_0)local_10c.Bits == FColor::Transparent.field0_0x0) {
    FVar7 = FColor::White.field0_0x0;
  }
  if (local_e8 == (AActor *)0x0) goto LAB_147d3b12d;
  uVar14 = (int)local_100 - 1;
  if ((int)local_100 == 0) {
    uVar14 = 0;
  }
  if (uVar14 == 0) {
    local_e0 = local_e8;
    local_d8 = 0;
    pUVar13 = UObject::FindFunctionChecked(param_1,NAME_AHUD_RemoveDebugText);
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar13,&local_e0);
    goto LAB_147d3b12d;
  }
  iVar11 = FindDebugTextListIntervalForActor((AHUD *)param_1,local_e8,(int *)&local_f8,&local_f4);
  if (iVar11 < 1) {
    iVar11 = *(int *)&param_1[0x14].field_0x8;
    if (iVar11 == *(int *)&param_1[0x14].field_0xc) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x880,(ForAnyElementType *)(param_1 + 0x14),
                          (int *)&param_1[0x14].field_0xc);
    }
    lVar15 = *(longlong *)(param_1 + 0x14);
    *(int *)&param_1[0x14].field_0x8 = iVar11 + 1;
    puVar16 = (undefined8 *)(lVar15 + (longlong)iVar11 * 0x80);
LAB_147d3afc7:
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[6] = 0;
    *puVar16 = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    *(undefined4 *)(puVar16 + 10) = 0;
    *(uint *)((longlong)puVar16 + 0x54) = *(uint *)((longlong)puVar16 + 0x54) & 0xfffffff8;
    puVar16[0xb] = 0;
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = 0;
    *(undefined4 *)(puVar16 + 0xf) = 0x3f800000;
  }
  else {
    if (bVar17) {
      iVar12 = TAutoConsoleVariable<int>::GetValueOnGameThread(&GMaxDebugTextStringsPerActorCVar);
      if ((0 < iVar12) && (iVar12 <= iVar11)) goto LAB_147d3b12d;
      TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                ((TArray<FDebugTextInfo,TSizedDefaultAllocator<32>_> *)(param_1 + 0x14),local_f4 + 1
                 ,1);
      puVar16 = (undefined8 *)((longlong)(local_f4 + 1) * 0x80 + *(longlong *)(param_1 + 0x14));
      goto LAB_147d3afc7;
    }
    uVar14 = 0;
    if ((int)local_f8 < *(int *)&param_1[0x14].field_0x8) {
      uVar14 = ~local_f8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar16 = (undefined8 *)((longlong)(int)local_f8 * 0x80 + *(longlong *)(param_1 + 0x14));
  }
  if (puVar16 != (undefined8 *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    _Src.Data = local_108.Data;
    *puVar16 = pAVar10;
    pFVar1 = (ForAnyElementType *)(puVar16 + 7);
    puVar16[1] = local_b8;
    puVar16[2] = uStack_b0;
    puVar16[3] = local_a8;
    puVar16[4] = local_d0;
    puVar16[5] = uStack_c8;
    puVar16[6] = local_c0;
    if (pFVar1 != &local_108) {
      iVar11 = (int)local_100;
      lVar15 = (longlong)(int)local_100;
      piVar2 = (int *)((longlong)puVar16 + 0x44);
      *(int *)(puVar16 + 8) = (int)local_100;
      if (((int)local_100 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_100,*piVar2,pFVar1,(int)local_100,piVar2);
        if (iVar11 != 0) {
          memcpy(pFVar1->Data,_Src.Data,lVar15 * 2);
        }
      }
    }
    *(uint *)((longlong)puVar16 + 0x54) = *(uint *)((longlong)puVar16 + 0x54) & 0xfffffffe;
    *(undefined4 *)(puVar16 + 9) = uVar21;
    *(undefined4 *)((longlong)puVar16 + 0x4c) = uVar21;
    *(uint *)((longlong)puVar16 + 0x54) =
         (uint)bVar18 | *(uint *)((longlong)puVar16 + 0x54) & 0xfffffffd | (uint)bVar19 * 2;
    ((FColor_u_0 *)(puVar16 + 10))->Bits = (uint)FVar7;
    pUVar5 = (pAVar10->RootComponent).field0_0x0.DebugPtr;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pUVar5 != (USceneComponent *)0x0) {
      uVar21 = *(undefined4 *)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64;
      uVar22 = *(undefined4 *)((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uVar23 = *(undefined4 *)((pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uVar24 = *(undefined4 *)((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      uVar25 = (pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
    }
    *(undefined4 *)(puVar16 + 0xb) = uVar21;
    *(undefined4 *)((longlong)puVar16 + 0x5c) = uVar22;
    *(undefined4 *)(puVar16 + 0xc) = uVar23;
    *(undefined4 *)((longlong)puVar16 + 100) = uVar24;
    puVar16[0xd] = uVar25;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    puVar16[0xe] = pUVar9;
    *(uint *)((longlong)puVar16 + 0x54) = *(uint *)((longlong)puVar16 + 0x54) & 0xfffffffb;
    *(uint *)((longlong)puVar16 + 0x54) = *(uint *)((longlong)puVar16 + 0x54) | (uint)bVar20 << 2;
    *(undefined4 *)(puVar16 + 0xf) = uVar8;
  }
LAB_147d3b12d:
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  return;
}

// execAddHitBox @ 147d3b180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execAddHitBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  FName local_68 [2];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68[0].ComparisonIndex.Value = 0;
  local_68[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_38._s_0.X = local_58;
  local_38._s_0.Y = dStack_50;
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddHitBox((AHUD *)param_1,(TVector2<double> *)&local_28._s_0,(TVector2<double> *)&local_38._s_0,
            local_68[0],bVar2,local_res20[0]);
  return;
}

// execDeproject @ 147d3b350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDeproject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  TVector<double> *pTVar7;
  float local_res10 [2];
  float local_res20 [2];
  TVector2<double>_u_0 local_78;
  TVector<double> local_68;
  TVector<double> local_50 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  pTVar6 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar7 = &local_68;
  if (pTVar6 != (TVector<double> *)0x0) {
    pTVar7 = pTVar6;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  fVar4 = local_res20[0];
  fVar3 = local_res10[0];
  pTVar6 = local_50;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar6 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (pTVar6->field0_0x0)._s_0.X = 0.0;
  (pTVar6->field0_0x0)._s_0.Y = 0.0;
  (pTVar6->field0_0x0)._s_0.Z = 0.0;
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  (pTVar7->field0_0x0)._s_0.X = (pTVar6->field0_0x0)._s_0.X;
  (pTVar7->field0_0x0)._s_0.Y = dVar2;
  (pTVar7->field0_0x0)._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
  bVar5 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if (bVar5) {
    local_78._s_0.X = (double)fVar4;
    local_78._s_0.Y = (double)fVar3;
    UCanvas::Deproject(*(UCanvas **)&param_1[0x13].field_0x18,(TVector2<double> *)&local_78._s_0,
                       pTVar7,pTVar6);
  }
  return;
}

// execDrawLine @ 147d3b550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDrawLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined4 local_res10 [2];
  float local_res20 [2];
  float local_108;
  float local_104;
  float local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  FCanvasItem local_e8;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  local_100[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_100);
  }
  local_104 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  local_108 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar6 = local_100[0];
  fVar5 = local_104;
  fVar4 = local_108;
  fVar3 = local_res20[0];
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar7 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if (bVar7) {
    local_e8.Position.field0_0x0._s_0.X = (double)fVar6;
    local_e8.StereoDepth = 0;
    local_e8.BlendMode = SE_BLEND_Opaque;
    local_e8.bFreezeTime = false;
    local_e8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_e8._padding_ = (longlong)&___7FCanvasLineItem__6B_;
    local_e8.Position.field0_0x0._s_0.Y = (double)fVar5;
    local_90 = (double)fVar4;
    local_88 = (double)fVar3;
    local_98 = 0;
    local_80 = 0;
    local_78 = uVar2;
    local_e8.Color.field0_0x0._0_8_ = local_f8;
    local_e8.Color.field0_0x0._8_8_ = uStack_f0;
    local_a8 = local_e8.Position.field0_0x0._s_0.X;
    local_a0 = local_e8.Position.field0_0x0._s_0.Y;
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,&local_e8);
  }
  return;
}

// execDrawMaterial @ 147d3b810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDrawMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong *plVar13;
  bool bVar14;
  FMaterialRenderProxy *pFVar15;
  bool bVar16;
  int local_res10 [2];
  float local_res20 [2];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  longlong *local_1c0;
  double local_1b8;
  double dStack_1b0;
  TVector2<double>_u_0 local_1a8;
  TVector2<double>_u_0 local_198;
  TVector2<double>_u_0 local_188;
  TVector2<double>_u_0 local_178;
  undefined1 local_168 [8];
  TVector2<double>_u_0 local_160 [8];
  double local_e0;
  double local_d8;
  double local_d0;
  TVector2<double>_u_0 local_c8 [11];
  
  local_1c0 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_1cc = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1cc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1cc);
  }
  local_1d0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_1d4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d4);
  }
  local_1d8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_1dc = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1dc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1dc);
  }
  local_1e0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  local_1e4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e4);
  }
  local_1e8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar16 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  plVar13 = local_1c0;
  fVar12 = local_1cc;
  fVar11 = local_1d0;
  fVar10 = local_1d4;
  fVar9 = local_1d8;
  fVar8 = local_1dc;
  fVar7 = local_1e0;
  fVar6 = local_1e4;
  fVar5 = local_1e8;
  fVar4 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1c4 = local_1c8;
  bVar14 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if ((bVar14) && (plVar13 != (longlong *)0x0)) {
    local_1a8._s_0.X = (double)(fVar9 + fVar7);
    local_1a8._s_0.Y = (double)(fVar8 + fVar6);
    local_198._s_0.X = (double)fVar9;
    local_198._s_0.Y = (double)fVar8;
    dVar3 = (double)fVar5;
    local_188._s_0.X = (double)fVar11 * dVar3;
    local_188._s_0.Y = (double)fVar10 * dVar3;
    pFVar15 = (FMaterialRenderProxy *)(**(code **)(*plVar13 + 0x310))(plVar13);
    local_178._s_0.X = (double)local_1c4;
    local_178._s_0.Y = (double)fVar12;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_168,(TVector2<double> *)&local_178._s_0,pFVar15,
               (TVector2<double> *)&local_188._s_0,(TVector2<double> *)&local_198._s_0,
               (TVector2<double> *)&local_1a8._s_0);
    local_c8[0]._s_0.X = local_1b8;
    local_c8[0]._s_0.Y = dStack_1b0;
    local_e0 = 0.0;
    local_d0 = 0.0;
    local_d8 = (double)fVar4;
    if (bVar16) {
      dVar2 = (double)local_160[0]._8_8_ * dVar3;
      local_160[0]._8_4_ = SUB84(dVar2,0);
      local_160[0]._s_0.X = (double)local_160[0]._0_8_ * dVar3;
      local_160[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    }
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,(FCanvasItem *)local_168);
  }
  return;
}

// execDrawMaterialSimple @ 147d3bd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDrawMaterialSimple(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *plVar9;
  bool bVar10;
  FMaterialRenderProxy *pFVar11;
  bool bVar12;
  int local_res10 [2];
  float local_res20 [2];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  longlong *local_148;
  TVector2<double>_u_0 local_140;
  TVector2<double>_u_0 local_130;
  undefined1 local_118 [8];
  TVector2<double>_u_0 local_110 [15];
  
  local_148 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_14c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_14c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_14c);
  }
  local_150 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_154 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_154,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_154);
  }
  local_158 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar9 = local_148;
  fVar8 = local_14c;
  fVar7 = local_150;
  fVar6 = local_154;
  fVar5 = local_158;
  fVar4 = local_res20[0];
  bVar12 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar10 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if ((bVar10) && (plVar9 != (longlong *)0x0)) {
    dVar3 = (double)fVar4;
    local_140._s_0.X = (double)fVar6 * dVar3;
    local_140._s_0.Y = (double)fVar5 * dVar3;
    pFVar11 = (FMaterialRenderProxy *)(**(code **)(*plVar9 + 0x310))(plVar9);
    local_130._s_0.X = (double)fVar8;
    local_130._s_0.Y = (double)fVar7;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_118,(TVector2<double> *)&local_130._s_0,pFVar11,
               (TVector2<double> *)&local_140._s_0);
    if (bVar12) {
      dVar2 = (double)local_110[0]._8_8_ * dVar3;
      local_110[0]._8_4_ = SUB84(dVar2,0);
      local_110[0]._s_0.X = (double)local_110[0]._0_8_ * dVar3;
      local_110[0]._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    }
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,(FCanvasItem *)local_118);
  }
  return;
}

// execDrawMaterialTriangle @ 147d3c070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDrawMaterialTriangle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *local_res10;
  FCanvasItem local_248;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ForAnyElementType FStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  FLinearColor_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  FLinearColor_u_0 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FLinearColor_u_0 local_c8;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  plVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  local_128 = FLinearColor::White.field0_0x0;
  if ((bVar4) && (plVar3 != (longlong *)0x0)) {
    local_248.StereoDepth = 0;
    local_248.BlendMode = SE_BLEND_Opaque;
    local_248.bFreezeTime = false;
    local_248.Color.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
    local_248.BatchedElementParameters = (FBatchedElementParameters *)0x0;
    local_248.Position.field0_0x0._s_0.X = local_158;
    local_248.Position.field0_0x0._s_0.Y = dStack_150;
    local_248._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    FStack_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8 = 0;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&FStack_1f0,(int *)((longlong)&local_1e8 + 4));
    local_f8._s_0 = local_128._s_0;
    local_c8._s_0 = local_128._s_0;
    local_148 = local_158;
    dStack_140 = dStack_150;
    local_1e8 = CONCAT44(local_1e8._4_4_,iVar5 + 1);
    lVar6 = (longlong)iVar5;
    local_138 = local_188;
    uStack_130 = uStack_180;
    local_118 = local_168;
    uStack_110 = uStack_160;
    local_108 = local_198;
    uStack_100 = uStack_190;
    local_e8 = local_178;
    uStack_e0 = uStack_170;
    local_d8 = local_1a8;
    uStack_d0 = uStack_1a0;
    *(double *)(FStack_1f0.Data + lVar6 * 0x90) = local_158;
    *(double *)(FStack_1f0.Data + lVar6 * 0x90 + 8) = dStack_150;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x10) = local_188;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x10 + 8) = uStack_180;
    ((FLinearColor_u_0 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x20))->_s_0 =
         (FLinearColor_u_0_s_0)local_128;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x30) = local_168;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x30 + 8) = uStack_160;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x40) = local_198;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x40 + 8) = uStack_190;
    ((FLinearColor_u_0 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x50))->_s_0 =
         (FLinearColor_u_0_s_0)local_128;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x60) = local_178;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x60 + 8) = uStack_170;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x70) = local_1a8;
    *(undefined8 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x70 + 8) = uStack_1a0;
    ((FLinearColor_u_0 *)(FStack_1f0.Data + lVar6 * 0x90 + 0x80))->_s_0 =
         (FLinearColor_u_0_s_0)local_128;
    if (iVar5 + 1 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(FStack_1f0.Data + 0x20) = local_1b8;
    *(undefined8 *)(FStack_1f0.Data + 0x28) = uStack_1b0;
    if ((int)local_1e8 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(FStack_1f0.Data + 0x50) = local_1c8;
    *(undefined8 *)(FStack_1f0.Data + 0x58) = uStack_1c0;
    if ((int)local_1e8 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(FStack_1f0.Data + 0x80) = local_1d8;
    *(undefined8 *)(FStack_1f0.Data + 0x88) = uStack_1d0;
    uStack_200 = (**(code **)(*plVar3 + 0x310))(plVar3);
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,&local_248);
    local_248._padding_ = (longlong)&___7FCanvasTriangleItem__6B_;
    if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f0.Data);
    }
  }
  return;
}

// execDrawRect @ 147d3c5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDrawRect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float local_res10 [2];
  float local_res20 [2];
  float local_148;
  float local_144 [3];
  undefined8 local_138;
  undefined8 uStack_130;
  TVector2<double>_u_0 local_128;
  TVector2<double>_u_0 local_118;
  FLinearColor_u_0 local_108;
  FCanvasTileItem local_f8;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_144[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_144,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_144);
  }
  local_148 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  fVar5 = local_144[0];
  fVar4 = local_148;
  fVar3 = local_res20[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108._0_8_ = local_138;
  local_108._8_8_ = uStack_130;
  bVar6 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if (bVar6) {
    local_128._s_0.X = (double)fVar3;
    local_128._s_0.Y = (double)fVar2;
    local_118._s_0.X = (double)fVar5;
    local_118._s_0.Y = (double)fVar4;
    FCanvasTileItem::FCanvasTileItem
              (&local_f8,(TVector2<double> *)&local_118._s_0,GWhiteTexture,
               (TVector2<double> *)&local_128._s_0,(FLinearColor *)&local_108._s_0);
    local_f8._padding_._4_4_ = 2;
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,(FCanvasItem *)&local_f8);
  }
  return;
}

// execDrawText @ 147d3c800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDrawText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  UFont *pUVar5;
  FText *pFVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  int local_res10 [2];
  float local_res20 [2];
  float local_2c8;
  float local_2c4;
  UFont *local_2c0;
  FString local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  TVector2<double>_u_0 local_298;
  FLinearColor_u_0 local_288;
  FText local_278;
  undefined1 local_268 [592];
  
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  local_2c4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c4);
  }
  local_2c8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  local_2c0 = (UFont *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c0);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_2c0;
  fVar9 = local_2c4;
  fVar8 = local_2c8;
  fVar3 = local_res20[0];
  bVar7 = local_res10[0] != 0;
  local_288._0_8_ = local_2a8;
  local_288._8_8_ = uStack_2a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if (bVar4) {
    if (bVar7) {
      fVar9 = fVar9 * fVar3;
      fVar8 = fVar8 * fVar3;
    }
    if (pUVar5 == (UFont *)0x0) {
      pUVar5 = UEngine::GetMediumFont();
    }
    pFVar6 = FText::FromString(&local_278,&local_2b8);
    local_298._s_0.X = (double)fVar9;
    local_298._s_0.Y = (double)fVar8;
    FCanvasTextItem::FCanvasTextItem
              ((FCanvasTextItem *)local_268,(TVector2<double> *)&local_298._s_0,pFVar6,pUVar5,
               (FLinearColor *)&local_288._s_0);
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    dVar2 = (double)fVar3;
    local_268._216_4_ = SUB84(dVar2,0);
    local_268._208_8_ = dVar2;
    local_268._220_4_ = (int)((ulonglong)dVar2 >> 0x20);
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,(FCanvasItem *)local_268);
    FCanvasTextItem::~FCanvasTextItem((FCanvasTextItem *)local_268);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  return;
}

// execDrawTexture @ 147d3cb10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __cdecl AHUD::execDrawTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UTexture *this;
  bool bVar13;
  FTextureResource *pFVar14;
  EBlendMode EVar15;
  bool bVar16;
  byte local_res10 [8];
  int local_res20 [2];
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  UTexture *local_1e8 [2];
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  TVector2<double>_u_0 local_1b8;
  TVector2<double>_u_0 local_1a8;
  TVector2<double>_u_0 local_198;
  TVector2<double>_u_0 local_188;
  FLinearColor_u_0 local_178;
  undefined1 local_168 [8];
  TVector2<double>_u_0 local_160;
  ESimpleElementBlendMode local_14c;
  double local_e0;
  double local_d8;
  double local_d0;
  TVector2<double>_u_0 local_c8 [11];
  
  local_1e8[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8);
  }
  local_1f4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f4);
  }
  local_1f8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_1fc = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1fc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1fc);
  }
  local_200 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_204 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_204,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_204);
  }
  local_208 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_20c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20c);
  }
  local_210 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_214 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_214,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_214);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar16 = local_res20[0] != 0;
  local_218 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  this = local_1e8[0];
  fVar12 = local_1f8;
  fVar11 = local_1fc;
  fVar10 = local_200;
  fVar9 = local_204;
  fVar8 = local_208;
  fVar7 = local_20c;
  fVar6 = local_210;
  fVar5 = local_214;
  fVar4 = local_218;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar15 = (EBlendMode)local_res10[0];
  local_178._0_8_ = local_1c8;
  local_178._8_8_ = uStack_1c0;
  local_1f0 = local_1f4;
  bVar13 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if ((bVar13) && (this != (UTexture *)0x0)) {
    local_1b8._s_0.X = (double)(fVar9 + fVar7);
    local_1b8._s_0.Y = (double)(fVar8 + fVar6);
    local_1a8._s_0.X = (double)fVar9;
    local_1a8._s_0.Y = (double)fVar8;
    dVar3 = (double)fVar5;
    local_198._s_0.X = (double)fVar11 * dVar3;
    local_198._s_0.Y = (double)fVar10 * dVar3;
    pFVar14 = UTexture::GetResource(this);
    local_188._s_0.X = (double)local_1f0;
    local_188._s_0.Y = (double)fVar12;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_168,(TVector2<double> *)&local_188._s_0,(FTexture *)pFVar14,
               (TVector2<double> *)&local_198._s_0,(TVector2<double> *)&local_1a8._s_0,
               (TVector2<double> *)&local_1b8._s_0,(FLinearColor *)&local_178._s_0);
    local_c8[0]._s_0.X = local_1d8;
    local_c8[0]._s_0.Y = dStack_1d0;
    local_e0 = 0.0;
    local_d0 = 0.0;
    local_d8 = (double)fVar4;
    if (bVar16) {
      dVar2 = local_160._s_0.Y * dVar3;
      local_160._8_4_ = SUB84(dVar2,0);
      local_160._s_0.X = local_160._s_0.X * dVar3;
      local_160._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    }
    local_14c = FCanvas::BlendToSimpleElementBlend(EVar15);
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,(FCanvasItem *)local_168);
  }
  return;
}

// execDrawTextureSimple @ 147d3d100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execDrawTextureSimple(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UTexture *this;
  bool bVar7;
  FTextureResource *pFVar8;
  bool bVar9;
  double dVar10;
  int local_res10 [4];
  float local_res20 [2];
  float local_128;
  float local_124;
  UTexture *local_120;
  TVector2<double>_u_0 local_118;
  undefined1 local_108 [8];
  TVector2<double>_u_0 local_100;
  ESimpleElementBlendMode local_ec;
  TVector2<double>_u_0 local_c8 [10];
  
  local_120 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_124 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  local_128 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_120;
  fVar6 = local_124;
  fVar5 = local_128;
  fVar4 = local_res20[0];
  bVar9 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar7 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if ((bVar7) && (this != (UTexture *)0x0)) {
    pFVar8 = UTexture::GetResource(this);
    local_118._s_0.X = (double)fVar6;
    local_118._s_0.Y = (double)fVar5;
    FCanvasTileItem::FCanvasTileItem
              ((FCanvasTileItem *)local_108,(TVector2<double> *)&local_118._s_0,(FTexture *)pFVar8,
               &FLinearColor::White);
    if (bVar9) {
      dVar10 = (double)fVar4;
      dVar3 = local_100._s_0.Y * dVar10;
      local_100._8_4_ = SUB84(dVar3,0);
      local_100._s_0.X = local_100._s_0.X * dVar10;
      local_100._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
    dVar10 = (double)fVar4;
    local_ec = SE_BLEND_Translucent;
    dVar3 = (double)local_c8[0]._8_8_ * dVar10;
    local_c8[0]._8_4_ = SUB84(dVar3,0);
    local_c8[0]._s_0.X = (double)local_c8[0]._0_8_ * dVar10;
    local_c8[0]._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    UCanvas::DrawItem(*(UCanvas **)&param_1[0x13].field_0x18,(FCanvasItem *)local_108);
  }
  return;
}

// execGetActorsInSelectionRectangle @ 147d3d4d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execGetActorsInSelectionRectangle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector2<double> *pTVar3;
  TVector2<double> *pTVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res20 [2];
  UObject *local_78;
  UObject *local_70;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_68;
  TVector2<double> local_58;
  TVector2<double> local_48;
  
  local_78 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_58;
  if (pTVar3 != (TVector2<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar3 = &local_48;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
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
  local_res10[0] = 0;
  pTVar2 = &local_68;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_70 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  GetActorsInSelectionRectangle
            ((AHUD *)param_1,(TSubclassOf<AActor>)&local_70,pTVar4,pTVar3,pTVar2,bVar5,bVar6);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execGetOwningPawn @ 147d3dba0

void __cdecl AHUD::execGetOwningPawn(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
    pUVar1 = *(UObject **)(*(longlong *)&param_1[0x11].field_0x18 + 0x310);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetOwningPlayerController @ 147d3dc10

void __cdecl AHUD::execGetOwningPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x18;
  return;
}

// execGetTextSize @ 147d3df70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execGetTextSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCanvas *this;
  float fVar2;
  bool bVar3;
  UFont *pUVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float local_res10 [4];
  float local_res20 [2];
  float local_68 [2];
  UFont *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  TStringView<wchar_t> local_48 [2];
  
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar7 = local_res10;
  if (pfVar6 != (float *)0x0) {
    pfVar7 = pfVar6;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_60 = (UFont *)0x0;
  pfVar6 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pUVar4 = local_60;
  fVar2 = local_68[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if (bVar3) {
    this = *(UCanvas **)&param_1[0x13].field_0x18;
    local_48[0].DataPtr = local_58;
    iVar5 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar5 = 0;
    }
    local_48[0].Size = iVar5;
    if (pUVar4 == (UFont *)0x0) {
      pUVar4 = UEngine::GetMediumFont();
    }
    UCanvas::TextSize(this,pUVar4,local_48,pfVar7,pfVar6,fVar2,fVar2);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execNextDebugTarget @ 147d3e5c0

void __cdecl AHUD::execNextDebugTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147d3e5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7d8))();
  return;
}

// execPreviousDebugTarget @ 147d3e7c0

void __cdecl AHUD::execPreviousDebugTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147d3e7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7e0))();
  return;
}

// execProject @ 147d3e7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execProject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58 [2];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsCanvasValid_WarnIfNot((AHUD *)param_1);
  if (bVar2) {
    local_58[0]._s_0.X = local_88;
    local_58[0]._s_0.Y = dStack_80;
    local_58[0]._s_0.Z = local_78;
    UCanvas::Project(*(UCanvas **)&param_1[0x13].field_0x18,(TVector<double> *)&local_70._s_0,
                     (TVector<double> *)&local_58[0]._s_0,bVar3);
  }
  else {
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_70._8_4_ = 0;
    local_70._12_4_ = 0;
    local_70._s_0.Z = 0.0;
  }
  *(undefined4 *)param_3 = local_70._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_70._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_70._8_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_70._12_4_;
  *(double *)((longlong)param_3 + 0x10) = local_70._s_0.Z;
  return;
}

// execRemoveAllDebugStrings @ 147d3e940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AHUD::execRemoveAllDebugStrings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  ForAnyElementType FVar2;
  
  puVar1 = &param_1[0x14].field_0xc;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.Data = *(FScriptContainerElement **)(param_1 + 0x14);
  if (-1 < *(int *)puVar1) {
    DestructItems<FDebugTextInfo,int>((FDebugTextInfo *)FVar2.Data,*(int *)&param_1[0x14].field_0x8)
    ;
    *(undefined4 *)&param_1[0x14].field_0x8 = 0;
    return;
  }
  DestructItems<FDebugTextInfo,int>((FDebugTextInfo *)FVar2.Data,*(int *)&param_1[0x14].field_0x8);
  *(undefined4 *)&param_1[0x14].field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,(ForAnyElementType *)(param_1 + 0x14),0,(int *)puVar1);
  }
  return;
}

// execRemoveDebugText @ 147d3e9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execRemoveDebugText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  AActor *local_res20;
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveDebugText_Implementation((AHUD *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execShowDebug @ 147d3eab0

void __cdecl AHUD::execShowDebug(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x768))(param_1,local_res8);
  return;
}

// execShowDebugForReticleTargetToggle @ 147d3eb40

void __cdecl
AHUD::execShowDebugForReticleTargetToggle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&param_1[0x14].field_0x10 = pUVar2;
  return;
}

// execShowDebugToggleSubCategory @ 147d3ec00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl AHUD::execShowDebugToggleSubCategory(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  ShowDebugToggleSubCategory((AHUD *)param_1,local_res10);
  return;
}

// execShowHUD @ 147d3ec90

void __cdecl AHUD::execShowHUD(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147d3eca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

