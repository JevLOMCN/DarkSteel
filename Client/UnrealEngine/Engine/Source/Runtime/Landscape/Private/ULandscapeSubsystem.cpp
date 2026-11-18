// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 30

// StaticClass @ 145facc60

UClass * __cdecl ULandscapeSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSubsystem",
               &Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton,
               StaticRegisterNativesULandscapeSubsystem,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeSubsystem>,
               InternalVTableHelperCtorCaller<ULandscapeSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton;
}

// ULandscapeSubsystem @ 145fb5650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeSubsystem * __thiscall
ULandscapeSubsystem::ULandscapeSubsystem(ULandscapeSubsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->Groups = 0;
  *(undefined8 *)&(this->Groups).field_0x8 = 0;
  *(undefined8 *)&(this->Groups).field_0x20 = 0;
  *(undefined4 *)&(this->Groups).field_0x28 = 0;
  *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
  *(undefined4 *)&(this->Groups).field_0x34 = 0;
  *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Groups).field_0x40 = 0;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  *(undefined8 *)&(this->StreamingProxiesNeedingReregister).Elements = 0;
  *(undefined8 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x30 = 0xffffffff;
  (this->StreamingProxiesNeedingReregister).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StreamingProxiesNeedingReregister).HashSize = 0;
  this->bIsGrassCreationPrioritized = false;
  (this->LandscapeActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeActors).ArrayNum = 0;
  (this->LandscapeActors).ArrayMax = 0;
  (this->Proxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Proxies).ArrayNum = 0;
  (this->Proxies).ArrayMax = 0;
  (this->OnNaniteWorldSettingsChangedHandle).ID = 0;
  this->TextureStreamingManager = (FLandscapeTextureStreamingManager *)0x0;
  this->GrassMapsBuilder = (FLandscapeGrassMapsBuilder *)0x0;
  (this->OnScalabilityChangedHandle).ID = 0;
  return this;
}

// ULandscapeSubsystem @ 145fb5740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeSubsystem * __thiscall ULandscapeSubsystem::ULandscapeSubsystem(ULandscapeSubsystem *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->Groups = 0;
  *(undefined8 *)&(this->Groups).field_0x8 = 0;
  *(undefined8 *)&(this->Groups).field_0x20 = 0;
  *(undefined4 *)&(this->Groups).field_0x28 = 0;
  *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
  *(undefined4 *)&(this->Groups).field_0x34 = 0;
  *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Groups).field_0x40 = 0;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  *(undefined8 *)&(this->StreamingProxiesNeedingReregister).Elements = 0;
  *(undefined8 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x30 = 0xffffffff;
  (this->StreamingProxiesNeedingReregister).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StreamingProxiesNeedingReregister).HashSize = 0;
  this->bIsGrassCreationPrioritized = false;
  (this->LandscapeActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeActors).ArrayNum = 0;
  (this->LandscapeActors).ArrayMax = 0;
  (this->Proxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Proxies).ArrayNum = 0;
  (this->Proxies).ArrayMax = 0;
  (this->OnNaniteWorldSettingsChangedHandle).ID = 0;
  this->TextureStreamingManager = (FLandscapeTextureStreamingManager *)0x0;
  this->GrassMapsBuilder = (FLandscapeGrassMapsBuilder *)0x0;
  (this->OnScalabilityChangedHandle).ID = 0;
  return this;
}

// ~ULandscapeSubsystem @ 145fb69a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeSubsystem::~ULandscapeSubsystem(ULandscapeSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->Proxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LandscapeActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->StreamingProxiesNeedingReregister).HashSize = 0;
  FVar2 = (this->StreamingProxiesNeedingReregister).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<ALandscapeStreamingProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<ALandscapeStreamingProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StreamingProxiesNeedingReregister).Elements);
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Groups).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Groups);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// operator() @ 145fb77a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`ULandscapeSubsystem::Initialize'::__l2::<lambda_1>::operator()(void *this,FQualityLevels *param_1)

{
  code *pcVar1;
  uint uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  TObjectIterator<ULandscapeComponent> local_38;
  TObjectIterator<ULandscapeComponent> local_20;
  
  local_20.Index = 0xffffffff;
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_ULandscapeComponent_NoRegister();
  GetObjectsOfClass(pUVar6,&local_20.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  TObjectIterator<ULandscapeComponent>::Advance(&local_20);
  _Src.Data = local_20.ObjectArray.AllocatorInstance.Data;
  lVar8 = (longlong)local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.ArrayNum = local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_20.ObjectArray.ArrayNum == 0) {
    local_38.ObjectArray.ArrayMax = 0;
    uVar2 = local_20.Index;
    uVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_20.ObjectArray.ArrayNum,&local_38.ObjectArray.ArrayMax);
    memcpy(local_38.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
    uVar2 = local_20.Index;
    uVar7 = local_20.ObjectArray.ArrayNum;
  }
  while( true ) {
    local_38.Index = uVar2;
    if (uVar2 == uVar7) {
      if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
      }
      if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar2 < local_38.ObjectArray.ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    UActorComponent::MarkRenderStateDirty
              (*(UActorComponent **)
                (local_38.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
    TObjectIterator<ULandscapeComponent>::Advance(&local_38);
    uVar2 = local_38.Index;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// AddReferencedObjects @ 145fb99e0

void __cdecl
ULandscapeSubsystem::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  uint uVar10;
  int iVar11;
  UObject *pUVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  UObject *pUVar16;
  
  UObject::AddReferencedObjects(param_1,param_2);
  pUVar12 = (UObject *)0x0;
  uVar10 = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar9 = GetPrivateStaticClass();
    iVar11 = (int)pUVar9->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar9->_padding_)) goto LAB_145fb9a33;
  }
  param_1 = pUVar12;
LAB_145fb9a33:
  uVar14 = *(uint *)&param_1[2].field_0x20;
  puVar1 = &param_1[2].field_0x8;
  uVar6 = 1;
  uVar15 = 0;
  uVar7 = uVar10;
  if (uVar14 != 0) {
    puVar18 = *(uint **)&param_1[2].field_0x18;
    if (*(uint **)&param_1[2].field_0x18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar7 = *puVar18;
    pUVar16 = pUVar12;
    uVar10 = 0;
    uVar15 = 0;
    while (uVar7 == 0) {
      uVar10 = (int)pUVar12 + 1;
      pUVar12 = (UObject *)(ulonglong)uVar10;
      uVar15 = (int)pUVar16 + 0x20;
      pUVar16 = (UObject *)(ulonglong)uVar15;
      uVar7 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
      goto LAB_145fb9aad;
      uVar7 = puVar18[(int)uVar10];
    }
    uVar6 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar7 = (int)lVar3 + -1 + uVar15;
    if ((int)uVar14 < (int)uVar7) {
      uVar7 = uVar14;
    }
  }
LAB_145fb9aad:
  uVar8 = *(uint *)&param_1[2].field_0x20;
  uVar13 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,uVar10);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar8 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,*(int *)(param_1 + 2) - *(int *)&param_1[3].field_0x4);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || ((int)uVar14 < (int)uVar8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = *(uint *)&param_1[2].field_0x20;
  if (uVar8 != uVar10) {
    puVar17 = puVar1;
    if (*(undefined1 **)&param_1[2].field_0x18 != (undefined1 *)0x0) {
      puVar17 = *(undefined1 **)&param_1[2].field_0x18;
    }
    uVar14 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      iVar11 = iVar11 + 1;
      uVar13 = uVar13 + 0x20;
      uVar8 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar11)
      goto LAB_145fb9bb0;
      uVar14 = *(uint *)(puVar17 + (longlong)iVar11 * 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar8 = (int)lVar3 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar8) {
      uVar8 = uVar10;
    }
  }
LAB_145fb9bb0:
  while( true ) {
    if (*(int *)(param_1 + 2) - *(int *)&param_1[3].field_0x4 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FLandscapeGroup::AddReferencedObjects
              (*(FLandscapeGroup **)
                (*(longlong *)&param_1[1].field_0x20 + 8 +
                (longlong)TStack_60.CurrentBitIndex * 0x18),param_2);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Deinitialize @ 145fbd100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeSubsystem::Deinitialize(ULandscapeSubsystem *this)

{
  undefined1 *puVar1;
  TMap<unsigned_int,FLandscapeGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>_>
  *this_00;
  TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
  *this_01;
  ulonglong uVar2;
  int iVar3;
  FDelegateHandle FVar4;
  FLandscapeGrassMapsBuilder *this_02;
  FLandscapeTextureStreamingManager *this_03;
  FLandscapeGroup *this_04;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar9;
  UWorld *this_05;
  AWorldSettings *pAVar10;
  IConsoleManager *pIVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar9,this);
  if ((this->OnNaniteWorldSettingsChangedHandle).ID != 0) {
    this_05 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if ((this_05 == (UWorld *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("World != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                           ,0x1f6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar10 = UWorld::GetWorldSettings(this_05,false,true);
    if ((pAVar10 == (AWorldSettings *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorldSettings != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                           ,0x1f9,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar4.ID = (this->OnNaniteWorldSettingsChangedHandle).ID;
    if (FVar4.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &AWorldSettings::OnNaniteSettingsChanged,FVar4);
    }
    (this->OnNaniteWorldSettingsChangedHandle).ID = 0;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::LevelRemovedFromWorld,this);
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar13 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar11 = IConsoleManager::Get();
    NaniteEnabledCVar =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.Nanite");
    _Init_thread_footer(&::_TSS0);
  }
  if (NaniteEnabledCVar != (IConsoleVariable *)0x0) {
    pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(*(longlong *)NaniteEnabledCVar + 0xe8))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar9,this);
  }
  if ((*piVar13 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar11 = IConsoleManager::Get();
    LandscapeNaniteEnabledCVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"landscape.RenderNanite");
    _Init_thread_footer(&::_TSS1);
  }
  if (LandscapeNaniteEnabledCVar != (IConsoleVariable *)0x0) {
    pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(*(longlong *)LandscapeNaniteEnabledCVar + 0xe8))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar9,this);
  }
  FVar4.ID = (this->OnScalabilityChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &Scalability::OnScalabilitySettingsChanged,FVar4);
  }
  this_02 = this->GrassMapsBuilder;
  if (this_02 != (FLandscapeGrassMapsBuilder *)0x0) {
    FLandscapeGrassMapsBuilder::~FLandscapeGrassMapsBuilder(this_02);
    ::operator_delete(this_02,0x130);
  }
  this_03 = this->TextureStreamingManager;
  if (this_03 != (FLandscapeTextureStreamingManager *)0x0) {
    FLandscapeTextureStreamingManager::~FLandscapeTextureStreamingManager(this_03);
    ::operator_delete(this_03,0x50);
  }
  iVar3 = *(int *)&(this->Groups).field_0x28;
  puVar1 = &(this->Groups).field_0x10;
  iVar14 = 0;
  this_00 = &this->Groups;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->Groups).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145fbd32e;
      uVar18 = puVar17[lVar12 + 1];
    }
    uVar7 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iVar8 = iVar16 + -1 + local_res10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145fbd32e:
  uVar18 = *(uint *)&(this->Groups).field_0x28;
  uVar19 = uVar18 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar18 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Groups).field_0x8 - *(int *)&(this->Groups).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Groups).field_0x28;
  if (uVar18 != uVar7) {
    puVar15 = *(undefined1 **)&(this->Groups).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145fbd430;
      uVar18 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar18 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar7 < (int)uVar18) {
      uVar18 = uVar7;
    }
  }
LAB_145fbd430:
  while( true ) {
    if (*(int *)&(this->Groups).field_0x8 - *(int *)&(this->Groups).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar18) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_04 = *(FLandscapeGroup **)
               (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (this_04 != (FLandscapeGroup *)0x0) {
      FLandscapeGroup::~FLandscapeGroup(this_04);
      ::operator_delete(this_04,0x1b8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar6 = 1 < *(int *)&(this->Groups).field_0x48;
  if (!bVar6) {
    TSet<TTuple<unsigned_int,FLandscapeGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FLandscapeGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->Groups).field_0xc;
  *(undefined4 *)&(this->Groups).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Groups).field_0x34 = 0;
  iVar3 = *(int *)&(this->Groups).field_0x2c;
  *(undefined4 *)&(this->Groups).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Groups).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->Groups).field_0x48 = 1;
    TSet<TTuple<unsigned_int,FLandscapeGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FLandscapeGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->StreamingProxiesNeedingReregister;
  bVar6 = 1 < (this->StreamingProxiesNeedingReregister).HashSize;
  if (!bVar6) {
    TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  puVar1 = &(this->StreamingProxiesNeedingReregister).Elements.field_0xc;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x2c;
  *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->StreamingProxiesNeedingReregister).Elements.field_0x10,0);
  }
  if (bVar6) {
    (this->StreamingProxiesNeedingReregister).HashSize = 1;
    TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  piVar13 = &(this->Proxies).ArrayMax;
  (this->Proxies).ArrayNum = 0;
  if (*piVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Proxies).AllocatorInstance,0,piVar13);
  }
  piVar13 = &(this->LandscapeActors).ArrayMax;
  (this->LandscapeActors).ArrayNum = 0;
  if (*piVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LandscapeActors).AllocatorInstance,0,piVar13);
  }
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// DoesSupportWorldType @ 145fbd8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULandscapeSubsystem::DoesSupportWorldType(ULandscapeSubsystem *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UWorldSubsystem::DoesSupportWorldType((UWorldSubsystem *)this,param_1);
  if ((!bVar1) && (param_1 != Inactive)) {
    return false;
  }
  return true;
}

// ForEachLandscapeInfo @ 145fc0d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::ForEachLandscapeInfo
          (ULandscapeSubsystem *this,TFunctionRef<bool___cdecl(ULandscapeInfo_*)> *param_1)

{
  TMap<FGuid,TObjectPtr<ULandscapeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FGuid,TObjectPtr<ULandscapeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
  *pTVar7;
  bool bVar8;
  char cVar9;
  UWorld *pUVar10;
  ULandscapeInfoMap *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_a8;
  TMap<FGuid,TObjectPtr<ULandscapeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FGuid,TObjectPtr<ULandscapeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pUVar10 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pUVar11 = ULandscapeInfoMap::FindLandscapeInfoMap(pUVar10);
  if (pUVar11 != (ULandscapeInfoMap *)0x0) {
    iVar4 = *(int *)&(pUVar11->Map).field_0x28;
    iStack_98 = 0;
    local_80 = 0;
    uStack_94 = 1;
    pTVar1 = &pUVar11->Map;
    puVar2 = &(pUVar11->Map).field_0x10;
    iStack_84 = 0;
    if (iVar4 != 0) {
      puVar17 = *(uint **)&(pUVar11->Map).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar2;
      }
      uVar15 = *puVar17;
      while (uVar15 == 0) {
        lVar12 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        iStack_84 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_145fc0ddd;
        uVar15 = puVar17[lVar12 + 1];
      }
      uStack_94 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uStack_94 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_84 = local_res20 + -1 + local_80;
      if (iVar4 < iStack_84) {
        iStack_84 = iVar4;
      }
    }
LAB_145fc0ddd:
    iStack_78 = *(int *)&(pUVar11->Map).field_0x8 - *(int *)&(pUVar11->Map).field_0x34;
    uVar15 = *(uint *)&(pUVar11->Map).field_0x28;
    uStack_88 = 0xffffffff;
    uVar14 = uVar15 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
    TStack_68.CurrentBitIndex = iStack_84;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_68._28_4_ = iStack_84;
    TStack_68.BaseBitIndex = local_80;
    uStack_48 = CONCAT44(uStack_74,iStack_78);
    local_a0 = pTVar1;
    local_90 = puVar2;
    iStack_7c = iStack_84;
    local_70 = pTVar1;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(pUVar11->Map).field_0x28;
    if (uVar15 != uVar5) {
      puVar16 = *(undefined1 **)&(pUVar11->Map).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar2;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar12 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_145fc0ef0;
        uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar15 = (int)lVar12 + -1 + uVar14;
      if ((int)uVar5 < (int)uVar15) {
        uVar15 = uVar5;
      }
    }
LAB_145fc0ef0:
    while( true ) {
      pTVar7 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((((TStack_68.CurrentBitIndex == uVar15) &&
           (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
          (pTVar7 == pTVar1)) ||
         ((lVar12 = *(longlong *)
                     ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar7),
          lVar12 != 0 &&
          (local_a8 = lVar12,
          cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_a8), cVar9 == '\0')
          ))) break;
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return;
}

// GetLandscapeGroupForComponent @ 145fc2290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLandscapeGroup * __thiscall
ULandscapeSubsystem::GetLandscapeGroupForComponent
          (ULandscapeSubsystem *this,ULandscapeComponent *param_1)

{
  ALandscapeProxy *pAVar1;
  FLandscapeGroup *pFVar2;
  
  pAVar1 = ULandscapeComponent::GetLandscapeProxy(param_1);
  pFVar2 = GetLandscapeGroupForProxy(this,pAVar1);
  return pFVar2;
}

// GetLandscapeGroupForProxy @ 145fc22c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLandscapeGroup * __thiscall
ULandscapeSubsystem::GetLandscapeGroupForProxy(ULandscapeSubsystem *this,ALandscapeProxy *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  FLandscapeGroup *pFVar5;
  char *pcVar6;
  TKeyInitializer<unsigned_int_const_&> *pTVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint local_res8 [2];
  int local_res10 [2];
  uint *local_res18 [2];
  undefined1 local_28 [16];
  
  if ((param_1 == (ALandscapeProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                         ,0x242,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLandscapeGroup *)(*pcVar1)();
    return pFVar5;
  }
  pTVar7 = (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1->LODGroupKey;
  if (param_1->LODGroupKey == 0) {
    pcVar6 = (char *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,local_28);
    pTVar7 = (TKeyInitializer<unsigned_int_const_&> *)CityHash64(pcVar6,0x10);
  }
  local_res8[0] = (uint)pTVar7;
  if (*(int *)&(this->Groups).field_0x8 != *(int *)&(this->Groups).field_0x34) {
    puVar8 = *(undefined1 **)&(this->Groups).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Groups).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->Groups).field_0x48 - 1) &
                              (ulonglong)pTVar7 & 0xffffffff) * 4);
    if (iVar4 != -1) {
      do {
        lVar9 = *(longlong *)&this->Groups + (longlong)iVar4 * 0x18;
        if (*(uint *)(*(longlong *)&this->Groups + (longlong)iVar4 * 0x18) == local_res8[0]) {
          if (lVar9 != 0) goto LAB_145fc23c2;
          break;
        }
        iVar4 = *(int *)(lVar9 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res18[0] = local_res8;
  TSet<TTuple<unsigned_int,FLandscapeGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FLandscapeGroup_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>,FDefaultSetAllocator>
              *)&this->Groups,(uint)local_res10,pTVar7,(bool *)local_res18);
  lVar9 = *(longlong *)&this->Groups + (longlong)local_res10[0] * 0x18;
LAB_145fc23c2:
  pFVar5 = *(FLandscapeGroup **)(lVar9 + 8);
  if (*(FLandscapeGroup **)(lVar9 + 8) == (FLandscapeGroup *)0x0) {
    pFVar5 = ::operator_new(0x1b8);
    if (pFVar5 != (FLandscapeGroup *)0x0) {
      (pFVar5->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
      pFVar5->LandscapeGroupKey = local_res8[0];
      pFVar5->ComponentResolution = -1;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pFVar5->GroupCoordOrigin).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pFVar5->GroupCoordOrigin).field0_0x0._s_0.Y = (double)uVar2;
      (pFVar5->GroupCoordOrigin).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pFVar5->GroupCoordXVector).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pFVar5->GroupCoordXVector).field0_0x0._s_0.Y = (double)uVar2;
      (pFVar5->GroupCoordXVector).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pFVar5->GroupCoordYVector).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pFVar5->GroupCoordYVector).field0_0x0._s_0.Y = (double)uVar2;
      (pFVar5->GroupCoordYVector).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pFVar5->LandscapeGridScale).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pFVar5->LandscapeGridScale).field0_0x0._s_0.Y = (double)uVar2;
      (pFVar5->LandscapeGridScale).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)&pFVar5->XYToEdgeFixupMap = 0;
      *(undefined8 *)&(pFVar5->XYToEdgeFixupMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar5->XYToEdgeFixupMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar5->XYToEdgeFixupMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar5->XYToEdgeFixupMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->XYToEdgeFixupMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar5->XYToEdgeFixupMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar5->XYToEdgeFixupMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar5->XYToEdgeFixupMap).field_0x48 = 0;
      *(undefined8 *)&(pFVar5->AllRegisteredFixups).Elements = 0;
      *(undefined8 *)&(pFVar5->AllRegisteredFixups).Elements.field_0x8 = 0;
      *(undefined8 *)&(pFVar5->AllRegisteredFixups).Elements.field_0x20 = 0;
      *(undefined4 *)&(pFVar5->AllRegisteredFixups).Elements.field_0x28 = 0;
      *(undefined4 *)&(pFVar5->AllRegisteredFixups).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->AllRegisteredFixups).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar5->AllRegisteredFixups).Elements.field_0x34 = 0;
      (pFVar5->AllRegisteredFixups).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      (pFVar5->AllRegisteredFixups).HashSize = 0;
      *(undefined8 *)&(pFVar5->HeightmapsMoved).Elements = 0;
      *(undefined8 *)&(pFVar5->HeightmapsMoved).Elements.field_0x8 = 0;
      *(undefined8 *)&(pFVar5->HeightmapsMoved).Elements.field_0x20 = 0;
      *(undefined4 *)&(pFVar5->HeightmapsMoved).Elements.field_0x28 = 0;
      *(undefined4 *)&(pFVar5->HeightmapsMoved).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->HeightmapsMoved).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar5->HeightmapsMoved).Elements.field_0x34 = 0;
      (pFVar5->HeightmapsMoved).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      (pFVar5->HeightmapsMoved).HashSize = 0;
      *(undefined8 *)&(pFVar5->HeightmapsNeedingEdgeTexturePatching).Elements = 0;
      *(undefined8 *)&(pFVar5->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x8 = 0;
      *(undefined8 *)&(pFVar5->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x20 = 0;
      *(undefined4 *)&(pFVar5->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x28 = 0;
      *(undefined4 *)&(pFVar5->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x30 =
           0xffffffff;
      *(undefined4 *)&(pFVar5->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x34 = 0;
      (pFVar5->HeightmapsNeedingEdgeTexturePatching).Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      (pFVar5->HeightmapsNeedingEdgeTexturePatching).HashSize = 0;
      (pFVar5->AmortizeIndex).Index = -1;
      *(FLandscapeGroup **)(lVar9 + 8) = pFVar5;
      return pFVar5;
    }
    *(undefined8 *)(lVar9 + 8) = 0;
    pFVar5 = (FLandscapeGroup *)0x0;
  }
  return pFVar5;
}

// GetPrivateStaticClass @ 145fc3450

UClass * __cdecl ULandscapeSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSubsystem",
               &Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton,
               StaticRegisterNativesULandscapeSubsystem,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeSubsystem>,
               InternalVTableHelperCtorCaller<ULandscapeSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeSubsystem.InnerSingleton;
}

// GetStatId @ 145fc4280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TStatId __thiscall ULandscapeSubsystem::GetStatId(ULandscapeSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULandscapeSubsystem::GetStatId(void)const_::_2_::FStat_ULandscapeSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_ULandscapeSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULandscapeSubsystem::GetStatId(void)const_::_2_::FStat_ULandscapeSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"ULandscapeSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_ULandscapeSubsystem,*pFVar1,
                   L"ULandscapeSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true
                   ,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_ULandscapeSubsystem;
  if (StatPtr_ULandscapeSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULandscapeSubsystem::GetStatId(void)const_::_2_::FStat_ULandscapeSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"ULandscapeSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_ULandscapeSubsystem::GetStatId(void)const_::_2_::FStat_ULandscapeSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_ULandscapeSubsystem,*pFVar1,
                         L"ULandscapeSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 145fc43f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ETickableTickType __thiscall ULandscapeSubsystem::GetTickableTickType(ULandscapeSubsystem *this)

{
  int *this_00;
  UWorld *pUVar1;
  
  this_00 = &this[-1].LandscapeActors.ArrayNum;
  if (((ulonglong)this[-1].Proxies.AllocatorInstance.Data & 0x10) == 0) {
    pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
    if (pUVar1 != (UWorld *)0x0) {
      UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
      return Always;
    }
  }
  return Never;
}

// HandlePostGarbageCollect @ 145fc4630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeSubsystem::HandlePostGarbageCollect(ULandscapeSubsystem *this)

{
  longlong lVar1;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTVar2;
  longlong *plVar3;
  int iVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  ALandscapeProxy::RemoveInvalidExclusionBoxes();
  pTVar2 = (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
            *)this->TextureStreamingManager;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_78,pTVar2);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = pTVar2;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar3 = local_48;
      lVar1 = (longlong)(int)uVar6 * 0x18;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_48 + lVar1));
      if (pUVar5 == (UObject *)0x0) {
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar6);
        local_10 = '\x01';
      }
      else if ((*(char *)(lVar1 + 0xc + *plVar3) != '\0') || (0 < *(int *)(lVar1 + 8 + *plVar3))) {
        pUVar5[5].field_0x8 = pUVar5[5].field_0x8 | 8;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// Initialize @ 145fc4c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::Initialize(ULandscapeSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  AWorldSettings *pAVar4;
  FDelegateHandle FVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar6;
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
  *pTVar7;
  FLandscapeTextureStreamingManager *pFVar8;
  FLandscapeGrassMapsBuilder *this_00;
  FLandscapeGrassMapsBuilder *pFVar9;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  IConsoleManager *pIVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 local_b8 [16];
  FLandscapeTextureStreamingManager *local_a8;
  code *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 local_88 [16];
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pFVar9 = (FLandscapeGrassMapsBuilder *)0x0;
  if ((pUVar3 != (UWorld *)0x0) &&
     (pAVar4 = UWorld::GetWorldSettings(pUVar3,false,true), pAVar4 != (AWorldSettings *)0x0)) {
    local_b8._8_4_ = 0;
    local_b8._0_8_ = OnNaniteWorldSettingsChanged;
    lStack_70 = (ulonglong)(uint)local_b8._12_4_ << 0x20;
    local_78 = OnNaniteWorldSettingsChanged;
    FVar5 = TMulticastDelegateRegistration<void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy>
            ::AddUObject<ULandscapeSubsystem>
                      ((TMulticastDelegateRegistration<void___cdecl(AWorldSettings_*),FDefaultDelegateUserPolicy>
                        *)&AWorldSettings::OnNaniteSettingsChanged,
                       (ULandscapeSubsystem *)&stack0x00000018,(pmf_05729fd5 *)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnNaniteWorldSettingsChangedHandle).ID = *FVar5.ID;
  }
  local_b8._8_4_ = 0;
  local_b8._0_8_ = OnLevelRemovedFromWorld;
  lStack_60 = (ulonglong)(uint)local_b8._12_4_ << 0x20;
  local_68 = OnLevelRemovedFromWorld;
  TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::
  AddUObject<ULandscapeSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::LevelRemovedFromWorld,(ULandscapeSubsystem *)&stack0x00000020,
             (pmf_19e11815 *)this);
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar12 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar10 = IConsoleManager::Get();
    NaniteEnabledCVar =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.Nanite",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (NaniteEnabledCVar != (IConsoleVariable *)0x0) {
    pTVar6 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(*(longlong *)NaniteEnabledCVar + 0xe8))();
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject(pTVar6,this);
    if (!bVar2) {
      pTVar7 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *)(**(code **)(*(longlong *)NaniteEnabledCVar + 0xe8))();
      local_b8._0_8_ = OnNaniteEnabledChanged;
      local_b8._8_4_ = 0;
      lStack_50 = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      local_58 = OnNaniteEnabledChanged;
      TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
      AddUObject<ULandscapeSubsystem>(pTVar7,(ULandscapeSubsystem *)local_88,(pmf_f9ad5abf *)this);
    }
  }
  if ((*piVar12 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar10 = IConsoleManager::Get();
    LandscapeNaniteEnabledCVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"landscape.RenderNanite",1);
    _Init_thread_footer(&::_TSS1);
  }
  if (LandscapeNaniteEnabledCVar != (IConsoleVariable *)0x0) {
    pTVar6 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(*(longlong *)LandscapeNaniteEnabledCVar + 0xe8))();
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject(pTVar6,this);
    if (!bVar2) {
      pTVar7 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *)(**(code **)(*(longlong *)LandscapeNaniteEnabledCVar + 0xe8))();
      local_b8._0_8_ = OnNaniteEnabledChanged;
      local_b8._8_4_ = 0;
      lStack_40 = (ulonglong)(uint)local_b8._12_4_ << 0x20;
      local_48 = OnNaniteEnabledChanged;
      TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
      AddUObject<ULandscapeSubsystem>
                (pTVar7,(ULandscapeSubsystem *)(local_88 + 8),(pmf_f9ad5abf *)this);
    }
  }
  pFVar8 = ::operator_new(0x50);
  if (pFVar8 == (FLandscapeTextureStreamingManager *)0x0) {
    this->TextureStreamingManager = (FLandscapeTextureStreamingManager *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextureStreamingManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    *(undefined8 *)&pFVar8->TextureStates = 0;
    *(undefined8 *)&(pFVar8->TextureStates).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->TextureStates).field_0x20 = 0;
    *(undefined4 *)&(pFVar8->TextureStates).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->TextureStates).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->TextureStates).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->TextureStates).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->TextureStates).field_0x40 = 0;
    *(undefined4 *)&(pFVar8->TextureStates).field_0x48 = 0;
    local_a8 = pFVar8;
    if (((FLandscapeTextureStreamingManager::AllStreamingManagers.AllocatorInstance.Data <=
          (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         FLandscapeTextureStreamingManager::AllStreamingManagers.AllocatorInstance.Data +
         (longlong)FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayMax * 8)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayNum ==
        FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayMax) {
      FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&FLandscapeTextureStreamingManager::AllStreamingManagers.
                             AllocatorInstance,
                      &FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayMax);
    }
    lVar11 = (longlong)FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayNum;
    FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayNum =
         FLandscapeTextureStreamingManager::AllStreamingManagers.ArrayNum + 1;
    *(FLandscapeTextureStreamingManager **)
     (FLandscapeTextureStreamingManager::AllStreamingManagers.AllocatorInstance.Data + lVar11 * 8) =
         local_a8;
    this->TextureStreamingManager = pFVar8;
  }
  this_00 = ::operator_new(0x130);
  if (this_00 != (FLandscapeGrassMapsBuilder *)0x0) {
    pFVar8 = this->TextureStreamingManager;
    pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    pFVar9 = FLandscapeGrassMapsBuilder::FLandscapeGrassMapsBuilder(this_00,pUVar3,pFVar8);
  }
  this->GrassMapsBuilder = pFVar9;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
          ::AddLambda<_ULandscapeSubsystem::Initialize_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(Scalability::FQualityLevels_const_&),FDefaultDelegateUserPolicy>
                      *)&Scalability::OnScalabilitySettingsChanged,(<lambda_1> *)&local_98);
                    /* WARNING: Load size is inaccurate */
  (this->OnScalabilityChangedHandle).ID = *FVar5.ID;
  this_01 = FCoreUObjectDelegates::GetPostGarbageCollect();
  uStack_90 = 0;
  local_98 = HandlePostGarbageCollect;
  lStack_30 = (ulonglong)uStack_8c << 0x20;
  local_38 = HandlePostGarbageCollect;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<ULandscapeSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_01,(ULandscapeSubsystem *)local_b8,(pmf_792273d5 *)this);
  return;
}

// IsTickableInEditor @ 145fc52e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULandscapeSubsystem::IsTickableInEditor(ULandscapeSubsystem *this)

{
  return true;
}

// OnLevelRemovedFromWorld @ 145fc5510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::OnLevelRemovedFromWorld
          (ULandscapeSubsystem *this,ULevel *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  AActor *pAVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ULevel *pUVar7;
  FGuid *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  
  pFVar9 = (this->LandscapeActors).AllocatorInstance.Data;
  iVar2 = (this->LandscapeActors).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LandscapeActors).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ALandscape>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pAVar3 = *(AActor **)pFVar9;
    pUVar7 = AActor::GetLevel(pAVar3);
    if (param_1 == pUVar7) {
      pAVar3 = pAVar3 + 1;
      pFVar8 = (FGuid *)(**(code **)(pAVar3->_padding_ + 0x10))(pAVar3,local_38);
      iVar6 = ULandscapeInfo::RemoveLandscapeInfo(param_2,pFVar8);
      if (iVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRemovedPairs != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                           ,0x272,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnNaniteEnabledChanged @ 145fc55e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::OnNaniteEnabledChanged(ULandscapeSubsystem *this,IConsoleVariable *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_ULandscapeSubsystem::OnNaniteEnabledChanged(IConsoleVariable_*)_::_2_::FStat_STAT_Landscape_OnNaniteEnabledChanged>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar13.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Landscape_OnNaniteEnabledChanged ==
          (FThreadSafeStaticStat<_private:_void___cdecl_ULandscapeSubsystem::OnNaniteEnabledChanged(IConsoleVariable_*)_::_2_::FStat_STAT_Landscape_OnNaniteEnabledChanged>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_Landscape_OnNaniteEnabledChanged");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Landscape_OnNaniteEnabledChanged,
                   *pFVar7,L"STAT_Landscape_OnNaniteEnabledChanged","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_Landscape_OnNaniteEnabledChanged;
  if (StatPtr_STAT_Landscape_OnNaniteEnabledChanged ==
      (FThreadSafeStaticStat<_private:_void___cdecl_ULandscapeSubsystem::OnNaniteEnabledChanged(IConsoleVariable_*)_::_2_::FStat_STAT_Landscape_OnNaniteEnabledChanged>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_Landscape_OnNaniteEnabledChanged");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_ULandscapeSubsystem::OnNaniteEnabledChanged(IConsoleVariable_*)_::_2_::FStat_STAT_Landscape_OnNaniteEnabledChanged>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Landscape_OnNaniteEnabledChanged
                         ,*pFVar7,L"STAT_Landscape_OnNaniteEnabledChanged","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                   ,0x3df);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = FVar10.Value;
      goto LAB_145fc576e;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_145fc576e:
  pFVar12 = (this->Proxies).AllocatorInstance.Data;
  iVar3 = (this->Proxies).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Proxies).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<ALandscapeProxy>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar12 == pFVar2) break;
    ALandscapeProxy::UpdateRenderingMethod(*(ALandscapeProxy **)pFVar12);
    pFVar12 = pFVar12 + 8;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  return;
}

// OnNaniteWorldSettingsChanged @ 145fc5940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::OnNaniteWorldSettingsChanged(ULandscapeSubsystem *this,AWorldSettings *param_1)

{
  TOptional<TArrayView<UE::Math::TVector<double>,int>_>_u_0 local_18;
  
  local_18.TypedValue.DataPtr = (TVector<double> *)0x0;
  local_18.TypedValue.ArrayNum = -1;
  RegenerateGrass(this,true,true,
                  (TOptional<TArrayView<UE::Math::TVector<double>,int>_> *)&local_18.TypedValue);
  return;
}

// OnProxyMoved @ 145fc5980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::OnProxyMoved
          (ULandscapeSubsystem *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
          ETeleportType param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  TObjectPtr<ALandscapeStreamingProxy> local_res10 [3];
  UObject *local_18 [2];
  
  pUVar2 = (UObject *)param_1->_padding_;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      local_18[0] = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<ALandscapeStreamingProxy>_>
                (&this->StreamingProxiesNeedingReregister,local_res10,(bool *)local_18);
    }
  }
  return;
}

// RegenerateGrass @ 145fc6320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::RegenerateGrass
          (ULandscapeSubsystem *this,bool param_1,bool param_2,
          TOptional<TArrayView<UE::Math::TVector<double>,int>_> *param_3)

{
  ALandscapeProxy *pAVar1;
  TVector<double> *_Src;
  code *pcVar2;
  undefined8 uVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UWorld *pUVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55 [5];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_50;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId644,"ULandscapeSubsystem::RegenerateGrass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
               ,0x284);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId644);
  }
  if ((this->Proxies).ArrayNum != 0) {
    pUVar8 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (param_1) {
      bVar16 = -1 < CpuChannel->Enabled;
      if (bVar16) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId633,"ULandscapeSubsystem::RemoveGrassInstances",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                   ,0x279);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId633);
      }
      pFVar13 = (this->Proxies).AllocatorInstance.Data;
      iVar7 = (this->Proxies).ArrayNum;
      pFVar10 = pFVar13 + (longlong)iVar7 * 8;
      while( true ) {
        if ((this->Proxies).ArrayNum != iVar7) {
          local_57 = 0;
          `TCheckedPointerIterator<TObjectPtr<ALandscapeProxy>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_57);
        }
        if (pFVar13 == pFVar10) break;
        pAVar1 = *(ALandscapeProxy **)pFVar13;
        if (pAVar1 == (ALandscapeProxy *)0x0) {
LAB_145fc645d:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Proxy)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                             ,0x27d,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pAVar1);
          }
          if (((uint)pAVar1->_padding_ >> 0x1e & 1) != 0) goto LAB_145fc645d;
        }
        ALandscapeProxy::FlushGrassComponents
                  (pAVar1,(TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
                           *)0x0,false);
        pFVar13 = pFVar13 + 8;
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId659,"UpdateGrass",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                 ,0x293);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId659);
    }
    uVar6 = (param_3->field0_0x0).TypedValue.ArrayNum;
    uVar12 = 0;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    if (uVar6 == 0xffffffff) {
      if (GUseStreamingManagerForCameras == 0) {
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                  (&local_50,&pUVar8->ViewLocationsRenderedLastFrame);
      }
      else {
        IStreamingManager::Get();
        iVar7 = IStreamingManager::CurrentViewInfos.ArrayNum;
        lVar9 = (longlong)IStreamingManager::CurrentViewInfos.ArrayNum;
        if (IStreamingManager::CurrentViewInfos.ArrayNum != 0) {
          if (IStreamingManager::CurrentViewInfos.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum
                      ((ulonglong)(uint)IStreamingManager::CurrentViewInfos.ArrayNum);
          }
          if (local_50.ArrayMax < IStreamingManager::CurrentViewInfos.ArrayNum) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,IStreamingManager::CurrentViewInfos.ArrayNum,
                       &local_50.AllocatorInstance,local_50.ArrayNum,&local_50.ArrayMax);
          }
          if (0 < iVar7) {
            lVar14 = 0;
            do {
              IStreamingManager::Get();
              uVar6 = 0;
              if ((int)uVar12 < IStreamingManager::CurrentViewInfos.ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar10 = IStreamingManager::CurrentViewInfos.AllocatorInstance.Data + lVar14;
              if (((local_50.AllocatorInstance.Data <= pFVar10) &&
                  (pFVar10 < local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 0x18))
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar7 = local_50.ArrayNum;
              if (local_50.ArrayNum == local_50.ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_50.AllocatorInstance,&local_50.ArrayMax);
              }
              uVar12 = uVar12 + 1;
              local_50.ArrayNum = iVar7 + 1;
              lVar14 = lVar14 + 0x40;
              uVar3 = *(undefined8 *)(pFVar10 + 8);
              *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x18) =
                   *(undefined8 *)pFVar10;
              *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8) = uVar3;
              *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 0x10) =
                   *(undefined8 *)(pFVar10 + 0x10);
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
      }
    }
    else {
      _Src = (param_3->field0_0x0).TypedValue.DataPtr;
      local_50.ArrayMax = 0;
      local_50.ArrayNum = uVar6;
      if (uVar6 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar6,0,&local_50.AllocatorInstance,uVar6,&local_50.ArrayMax);
        memcpy(local_50.AllocatorInstance.Data,_Src,(longlong)(int)uVar6 * 0x18);
      }
    }
    pTVar4 = CVarGrassVisualLogCameraLocations.Ref;
    if (FVisualLogger::bIsRecording != 0) {
      bVar5 = IsInParallelGameThread();
      if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pTVar4->ShadowedValue[0] != false) {
        iVar7 = local_50.ArrayNum;
        pFVar10 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x18;
        FVar11.Data = local_50.AllocatorInstance.Data;
        while( true ) {
          if (local_50.ArrayNum != iVar7) {
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_56);
          }
          if (FVar11.Data == pFVar10) break;
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::LocationLogfImpl
                      ((UObject *)this,(FName *)&LogLandscape.field_0x4,Log,
                       (TVector<double> *)FVar11.Data,10,&FColor::Green,L"Grass Camera Location");
          }
          FVar11.Data = FVar11.Data + 0x18;
        }
      }
    }
    pFVar13 = (this->Proxies).AllocatorInstance.Data;
    iVar7 = (this->Proxies).ArrayNum;
    pFVar10 = pFVar13 + (longlong)iVar7 * 8;
    while( true ) {
      if ((this->Proxies).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TObjectPtr<ALandscapeProxy>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_55);
      }
      if (pFVar13 == pFVar10) break;
      pAVar1 = *(ALandscapeProxy **)pFVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (ALandscapeProxy *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      ALandscapeProxy::UpdateGrass(pAVar1,&local_50,param_2);
      pFVar13 = pFVar13 + 8;
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterActor @ 145fc6860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::RegisterActor(ULandscapeSubsystem *this,ALandscapeProxy *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<ALandscapeProxy>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ULandscapeSubsystem *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  TObjectPtr<ALandscape>_u_0 local_res10;
  TObjectPtr<ALandscape>_u_0 local_res18;
  ALandscapeProxy *local_28 [2];
  code *local_18;
  ulonglong uStack_10;
  
  if ((param_1 == (ALandscapeProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                         ,0x158,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_28[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ALandscapeProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar4 = (param_1->RegisteredToSubsystem).field0_0x0.DebugPtr;
  if (param_1->bIsRegisteredWithSubsystem) {
    if (pUVar4 == (ULandscapeSubsystem *)0x0) {
      bVar6 = this == (ULandscapeSubsystem *)0x0;
    }
    else {
      bVar6 = pUVar4 == this;
    }
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Proxy->RegisteredToSubsystem == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                           ,0x161,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar9 = (this->Proxies).AllocatorInstance.Data;
    pFVar3 = pFVar9 + (longlong)(this->Proxies).ArrayNum * 8;
    for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 8) {
      if (*(ALandscapeProxy **)pFVar9 == local_28[0]) {
        return;
      }
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxies.Contains(ProxyPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                       ,0x162,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((pUVar4 != (ULandscapeSubsystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Proxy->RegisteredToSubsystem == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                           ,0x165,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = &this->Proxies;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar9 + (longlong)(this->Proxies).ArrayNum * 8;
    for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 8) {
      if (*(ALandscapeProxy **)pFVar9 == local_28[0]) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Proxies.Contains(ProxyPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                           ,0x166,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        break;
      }
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->Proxies).ArrayMax * 8)) &&
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
    iVar7 = (this->Proxies).ArrayNum;
    piVar1 = &(this->Proxies).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Proxies).ArrayNum = iVar7 + 1;
    *(ALandscapeProxy **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28[0] != (ALandscapeProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28[0]);
    }
    pUVar8 = Z_Construct_UClass_ALandscape_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if (((*(int *)(param_1->_padding_ + 0x38) < iVar7) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
         &pUVar8->_padding_)) || (param_1 == (ALandscapeProxy *)0x0)) {
      pUVar8 = Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((((iVar7 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) && (param_1 != (ALandscapeProxy *)0x0)) &&
         (param_1->_padding_ != 0)) {
        uStack_10 = uStack_10 & 0xffffffff00000000;
        local_18 = OnProxyMoved;
        TMulticastDelegateRegistration<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
        ::AddUObject<ULandscapeSubsystem>
                  ((void *)(param_1->_padding_ + 0x1b0),
                   (ULandscapeSubsystem *)&local_res18.ObjectPtr,(pmf_963f7898 *)this);
      }
    }
    else {
      local_res10 = (TObjectPtr<ALandscape>_u_0)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TArray<TObjectPtr<ALandscape>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<ALandscape>_const_&>
                (&this->LandscapeActors,(TObjectPtr<ALandscape> *)&local_res10.ObjectPtr);
    }
    param_1->bIsRegisteredWithSubsystem = true;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULandscapeSubsystem *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (param_1->RegisteredToSubsystem).field0_0x0.DebugPtr = this;
  }
  return;
}

// RegisterComponent @ 145fc6bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::RegisterComponent(ULandscapeSubsystem *this,ULandscapeComponent *param_1)

{
  ALandscapeProxy *pAVar1;
  FLandscapeGroup *this_00;
  
  pAVar1 = ULandscapeComponent::GetLandscapeProxy(param_1);
  this_00 = GetLandscapeGroupForProxy(this,pAVar1);
  if (this_00 != (FLandscapeGroup *)0x0) {
    FLandscapeGroup::RegisterComponent(this_00,param_1);
  }
  FLandscapeGrassMapsBuilder::RegisterComponent(this->GrassMapsBuilder,param_1);
  return;
}

// RemoveGrassInstances @ 145fc7470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::RemoveGrassInstances
          (ULandscapeSubsystem *this,
          TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ALandscapeProxy *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId633,"ULandscapeSubsystem::RemoveGrassInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
               ,0x279);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId633);
  }
  pFVar5 = (this->Proxies).AllocatorInstance.Data;
  iVar2 = (this->Proxies).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if ((this->Proxies).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ALandscapeProxy>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) {
      if (!bVar6) {
        return;
      }
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
    this_00 = *(ALandscapeProxy **)pFVar5;
    if (this_00 == (ALandscapeProxy *)0x0) {
LAB_145fc7535:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Proxy)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                         ,0x27d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) goto LAB_145fc7535;
    }
    ALandscapeProxy::FlushGrassComponents(this_00,param_1,false);
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// StaticRegisterNativesULandscapeSubsystem @ 145fc8750

void __cdecl ULandscapeSubsystem::StaticRegisterNativesULandscapeSubsystem(void)

{
  return;
}

// Tick @ 145fc8830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeSubsystem::Tick(ULandscapeSubsystem *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FName FVar4;
  ALandscapeProxy *pAVar5;
  FLandscapeGrassMapsBuilder *this_00;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_LandscapeSubsystemTick> FVar16;
  UWorld *pUVar17;
  UWorldPartition *pUVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  longlong lVar22;
  uint uVar23;
  undefined8 *puVar24;
  bool bVar25;
  <lambda_1> local_res8;
  undefined1 local_res20 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_d0;
  undefined1 local_c8 [8];
  ALandscapeProxy *local_c0;
  FLLMScope local_b8 [2];
  FName local_b0;
  FColor_u_0 local_a8;
  int local_a4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a0;
  FName local_90;
  FName local_88;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  UWorld *local_68;
  FMemScope local_60;
  FName local_58 [4];
  
  uVar23 = 0;
  FVar16 = StatPtr_STAT_LandscapeSubsystemTick;
  if (StatPtr_STAT_LandscapeSubsystemTick ==
      (FThreadSafeStaticStat<FStat_STAT_LandscapeSubsystemTick>)0x0) {
    pFVar15 = ::FName::FName(local_58,"STAT_LandscapeSubsystemTick");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_LandscapeSubsystemTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeSubsystemTick,*pFVar15,
                        L"LandscapeSubsystem Tick","STATGROUP_Landscape","STATCAT_Advanced",
                        L"Landscape",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar16;
  bVar9 = false;
  bVar8 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar25 = false;
  bVar10 = false;
  if ((FVar4.ComparisonIndex.Value.Value == 0) && (FVar4.Number == 0)) {
LAB_145fc8984:
    bVar9 = bVar25;
    bVar8 = bVar10;
    bVar10 = false;
    local_b0 = local_88;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar25 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_90.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                   ,0x2cd);
        bVar9 = true;
        bVar8 = true;
        bVar25 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145fc8984;
    local_b0 = FVar4;
    FThreadStats::AddMessage(FVar4,CycleScopeStart);
    bVar10 = true;
  }
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId718,"ULandscapeSubsystem::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
               ,0x2ce);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId718);
  }
  if (__CsvProfilerStat719 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Landscape");
    __CsvProfilerStat719 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Landscape","CSV_Landscape");
  FLLMScope::FLLMScope(local_b8,Landscape,false,None,Default,true);
  FMemScope::FMemScope(&local_60,Landscape,true);
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  pUVar17 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].LandscapeActors.ArrayNum);
  local_68 = pUVar17;
  bVar11 = UWorld::IsGameWorld(pUVar17);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`ULandscapeSubsystem::Tick'::__l2::_dynamic_atexit_destructor_for__OldCameras__);
    _Init_thread_footer(&::_TSS0);
  }
  local_d0 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  if (GUseStreamingManagerForCameras == 0) {
    if (OldCameras.ArrayNum == 0) {
      if ((pUVar17->ViewLocationsRenderedLastFrame).ArrayNum == 0) goto LAB_145fc8d11;
    }
    else if ((pUVar17->ViewLocationsRenderedLastFrame).ArrayNum == 0) goto LAB_145fc8d0d;
    bVar12 = IsInGameThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                            ,0x2fc,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (&pUVar17->ViewLocationsRenderedLastFrame != &OldCameras) {
      iVar3 = (pUVar17->ViewLocationsRenderedLastFrame).ArrayNum;
      pFVar20 = (pUVar17->ViewLocationsRenderedLastFrame).AllocatorInstance.Data;
      OldCameras.ArrayNum = iVar3;
      if ((iVar3 == 0) && (OldCameras.ArrayMax == 0)) {
        OldCameras.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,OldCameras.ArrayMax,&OldCameras.AllocatorInstance,iVar3,
                   &OldCameras.ArrayMax);
        if (iVar3 != 0) {
          memcpy(OldCameras.AllocatorInstance.Data,pFVar20,(longlong)iVar3 * 0x18);
        }
      }
    }
  }
  else {
    IStreamingManager::Get();
    iVar3 = IStreamingManager::CurrentViewInfos.ArrayNum;
    lVar19 = (longlong)IStreamingManager::CurrentViewInfos.ArrayNum;
    if (IStreamingManager::CurrentViewInfos.ArrayNum == 0) goto LAB_145fc8d11;
    if (IStreamingManager::CurrentViewInfos.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum
                ((ulonglong)(uint)IStreamingManager::CurrentViewInfos.ArrayNum);
    }
    OldCameras.ArrayNum = 0;
    if (OldCameras.ArrayMax < IStreamingManager::CurrentViewInfos.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,IStreamingManager::CurrentViewInfos.ArrayNum,&OldCameras.AllocatorInstance,0
                 ,&OldCameras.ArrayMax);
    }
    if (0 < iVar3) {
      lVar22 = 0;
      local_d0 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)lVar19;
      do {
        IStreamingManager::Get();
        uVar14 = 0;
        if ((int)uVar23 < IStreamingManager::CurrentViewInfos.ArrayNum) {
          uVar14 = ~uVar23 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar20 = IStreamingManager::CurrentViewInfos.AllocatorInstance.Data + lVar22;
        if (((OldCameras.AllocatorInstance.Data <= pFVar20) &&
            (pFVar20 < OldCameras.AllocatorInstance.Data + (longlong)OldCameras.ArrayMax * 0x18)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (OldCameras.ArrayNum == OldCameras.ArrayMax) {
          OldCameras.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&OldCameras.AllocatorInstance,&OldCameras.ArrayMax);
        }
        FVar21.Data = OldCameras.AllocatorInstance.Data;
        uVar23 = uVar23 + 1;
        lVar22 = lVar22 + 0x40;
        local_d0 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                   ((longlong)local_d0 + -1);
        uVar7 = *(undefined8 *)(pFVar20 + 8);
        lVar19 = (longlong)OldCameras.ArrayNum;
        pFVar1 = OldCameras.AllocatorInstance.Data + lVar19 * 0x18;
        OldCameras.ArrayNum = OldCameras.ArrayNum + 1;
        *(undefined8 *)pFVar1 = *(undefined8 *)pFVar20;
        *(undefined8 *)(pFVar1 + 8) = uVar7;
        *(undefined8 *)(FVar21.Data + lVar19 * 0x18 + 0x10) = *(undefined8 *)(pFVar20 + 0x10);
      } while (local_d0 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0);
    }
  }
LAB_145fc8d0d:
  local_d0 = &OldCameras;
LAB_145fc8d11:
  bVar12 = true;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`ULandscapeSubsystem::Tick'::__l2::_dynamic_atexit_destructor_for__ActiveProxies__);
    _Init_thread_footer(&::_TSS1);
  }
  uVar23 = *(uint *)(this->StreamingProxiesNeedingReregister).Hash.InlineData;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  ActiveProxies.ArrayNum = 0;
  if (ActiveProxies.ArrayMax < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar23,&ActiveProxies.AllocatorInstance,0,&ActiveProxies.ArrayMax);
  }
  puVar24 = *(undefined8 **)&(this->StreamingProxiesNeedingReregister).Elements.field_0x30;
  iVar3 = *(int *)(this->StreamingProxiesNeedingReregister).Hash.InlineData;
  puVar2 = puVar24 + iVar3;
  while( true ) {
    if (*(int *)(this->StreamingProxiesNeedingReregister).Hash.InlineData != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ALandscapeProxy>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (puVar24 == puVar2) break;
    pAVar5 = (ALandscapeProxy *)*puVar24;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ALandscapeProxy *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    local_c0 = pAVar5;
    if (((ActiveProxies.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c0) &&
        ((FScriptContainerElement *)&local_c0 <
         ActiveProxies.AllocatorInstance.Data + (longlong)ActiveProxies.ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (ActiveProxies.ArrayNum == ActiveProxies.ArrayMax) {
      ActiveProxies.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&ActiveProxies.AllocatorInstance,&ActiveProxies.ArrayMax);
    }
    lVar19 = (longlong)ActiveProxies.ArrayNum;
    ActiveProxies.ArrayNum = ActiveProxies.ArrayNum + 1;
    *(ALandscapeProxy **)(ActiveProxies.AllocatorInstance.Data + lVar19 * 8) = local_c0;
    if (local_c0->bDisableRuntimeGrassMapGeneration == false) {
      bVar12 = false;
    }
    if ((local_c0->LandscapeComponents).ArrayNum !=
        (local_c0->GrassTypeSummary).LandscapeComponentCount) {
      ALandscapeProxy::UpdateGrassTypeSummary(local_c0);
    }
    puVar24 = puVar24 + 1;
  }
  local_res8 = SUB81(this,0);
  Algo::Partition<ALandscapeProxy_*,int,_ULandscapeSubsystem::Tick_::__l29::<lambda_1>_>
            ((ALandscapeProxy **)ActiveProxies.AllocatorInstance.Data,ActiveProxies.ArrayNum,
             local_res8);
  if ((bVar12) || ((bVar11 && (GGrassMapUseRuntimeGeneration == 0)))) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  this_00 = *(FLandscapeGrassMapsBuilder **)&this->bIsGrassCreationPrioritized;
  bVar12 = (bool)(this->StreamingProxiesNeedingReregister).Elements.field_0x18;
  if (local_d0 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    FLandscapeGrassMapsBuilder::AmortizedUpdateGrassMaps(this_00,&local_78,bVar12,bVar11);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = local_d0->ArrayNum;
    lVar19 = (longlong)local_a0.ArrayNum;
    pFVar20 = (local_d0->AllocatorInstance).Data;
    if (local_a0.ArrayNum == 0) {
      local_a0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_a0.ArrayNum,0,&local_a0.AllocatorInstance,local_a0.ArrayNum,
                 &local_a0.ArrayMax);
      memcpy(local_a0.AllocatorInstance.Data,pFVar20,lVar19 * 0x18);
    }
    FLandscapeGrassMapsBuilder::AmortizedUpdateGrassMaps(this_00,&local_a0,bVar12,bVar11);
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  pUVar17 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].LandscapeActors.ArrayNum);
  if ((pUVar17 != (UWorld *)0x0) &&
     (pUVar18 = UWorld::GetWorldPartition(pUVar17), pUVar18 != (UWorldPartition *)0x0)) {
    TickEdgeFixup((ULandscapeSubsystem *)&this[-1].LandscapeActors.ArrayNum);
  }
  iVar3 = ActiveProxies.ArrayNum;
  pFVar20 = ActiveProxies.AllocatorInstance.Data + (longlong)ActiveProxies.ArrayNum * 8;
  FVar21.Data = ActiveProxies.AllocatorInstance.Data;
  while( true ) {
    if (ActiveProxies.ArrayNum != iVar3) {
      `TCheckedPointerIterator<ALandscapeProxy_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_c8);
    }
    if (FVar21.Data == pFVar20) break;
    pAVar5 = *(ALandscapeProxy **)FVar21.Data;
    if (((pAVar5->GrassTypeSummary).bHasAnyGrass != false) &&
       (((ALandscapeProxy::GrassUpdateInterval < 2 ||
         ((pAVar5->FrameOffsetForTickInterval + GFrameNumber) %
          (uint)ALandscapeProxy::GrassUpdateInterval == 0)) &&
        (local_d0 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)))) {
      local_a4 = 0;
      ALandscapeProxy::UpdateGrass(pAVar5,local_d0,&local_a4,false);
    }
    FVar21.Data = FVar21.Data + 8;
  }
  if (ActiveProxies.ArrayMax < 0) {
    ActiveProxies.ArrayNum = 0;
    if (ActiveProxies.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&ActiveProxies.AllocatorInstance,0,&ActiveProxies.ArrayMax);
    }
  }
  else {
    ActiveProxies.ArrayNum = 0;
  }
  ALandscapeProxy::DebugDrawExclusionBoxes(local_68);
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_b8);
  FCsvProfiler::EndExclusiveStat("Landscape");
  FVar4 = local_b0;
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar4,CycleScopeEnd);
  }
  return;
}

// TickEdgeFixup @ 145fc91c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeSubsystem::TickEdgeFixup(ULandscapeSubsystem *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
  *this_00;
  ALandscapeProxy *pAVar5;
  code *pcVar6;
  TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
  *pTVar7;
  TMap<unsigned_int,FLandscapeGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  FLandscapeGroup *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  ForElementType<unsigned_int> FVar17;
  ForElementType<unsigned_int> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int iVar21;
  TMap<unsigned_int,FLandscapeGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>_>
  *pTVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  uint local_1b0;
  undefined1 local_1a8 [8];
  ulonglong local_1a0;
  ForElementType<unsigned_int> local_198;
  TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
  *local_190;
  int iStack_188;
  uint uStack_184;
  ForElementType<unsigned_int> local_180;
  undefined4 uStack_178;
  uint uStack_174;
  uint local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<unsigned_int,FLandscapeGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeGroup_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1002,"ULandscapeSubsystem::TickEdgeFixup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
               ,0x3ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1002);
  }
  iVar21 = *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x8 -
           *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x34;
  local_1a0 = 1;
  if (0 < iVar21) {
    this_00 = &this->StreamingProxiesNeedingReregister;
    iStack_158 = 0;
    local_198 = (ForElementType<unsigned_int>)
                &(this->StreamingProxiesNeedingReregister).Elements.field_0x10;
    local_140 = 0;
    iVar25 = *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x28;
    uStack_154 = 1;
    iStack_144 = 0;
    if (iVar25 != 0) {
      puVar20 = *(uint **)&(this->StreamingProxiesNeedingReregister).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)local_198;
      }
      uStack_154 = *puVar20;
      local_140 = 0;
      while (uStack_154 == 0) {
        lVar12 = (longlong)iStack_158;
        local_140 = local_140 + 0x20;
        iStack_158 = iStack_158 + 1;
        uStack_154 = 1;
        iStack_144 = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
        goto LAB_145fc92ee;
        uStack_154 = puVar20[lVar12 + 1];
      }
      uStack_154 = -uStack_154 & uStack_154;
      uVar4 = (ulonglong)uStack_154 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_130 = (int)lVar12;
      iStack_144 = local_140 + -1 + local_130;
      if (iVar25 < iStack_144) {
        iStack_144 = iVar25;
      }
    }
LAB_145fc92ee:
    uStack_148 = 0xffffffff;
    uVar13 = *(uint *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x28;
    TStack_110.CurrentBitIndex = iStack_144;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    TStack_110._padding_ = CONCAT44(uStack_154,iStack_158);
    uVar23 = uVar13 & 0xffffffe0;
    uStack_13c = local_6c;
    iVar14 = (int)uVar13 >> 5;
    TStack_110._28_4_ = local_6c;
    TStack_110.BaseBitIndex = local_140;
    uStack_f0 = CONCAT44(uStack_134,iVar21);
    local_160 = this_00;
    local_150 = (undefined1 *)local_198;
    iStack_138 = iVar21;
    local_118 = this_00;
    TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_198;
    if ((((int)uVar13 < 0) || (iVar25 < (int)uVar13)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar24 = *(uint *)((longlong)local_198 + 0x18);
    if (uVar13 != uVar24) {
      FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_198 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_198 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_198;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar23 = uVar23 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_145fc9400;
        uVar13 = ((uint *)((longlong)FVar17 + 4))[lVar12];
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_12c = (int)lVar12;
      uVar13 = local_12c + -1 + uVar23;
      if ((int)uVar24 < (int)uVar13) {
        uVar13 = uVar24;
      }
    }
LAB_145fc9400:
    while( true ) {
      pTVar7 = local_118;
      FVar17 = local_198;
      if (*(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34 !=
          (int)uStack_f0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<ALandscapeStreamingProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_110.CurrentBitIndex == uVar13) &&
          ((ForElementType<unsigned_int>)TStack_110.Array == FVar17)) && (pTVar7 == this_00)) break;
      lVar12 = *(longlong *)
                (*(longlong *)&pTVar7->Elements + (longlong)TStack_110.CurrentBitIndex * 0x10);
      puVar15 = *(undefined8 **)(lVar12 + 0x4b0);
      iVar21 = *(int *)(lVar12 + 0x4b8);
      puVar2 = puVar15 + iVar21;
      while( true ) {
        if (*(int *)(lVar12 + 0x4b8) != iVar21) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (puVar15 == puVar2) break;
        pFVar11 = ((ULandscapeComponent *)*puVar15)->RegisteredLandscapeGroup;
        if (pFVar11 != (FLandscapeGroup *)0x0) {
          FLandscapeGroup::UnregisterComponent(pFVar11,(ULandscapeComponent *)*puVar15);
        }
        puVar15 = puVar15 + 1;
      }
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
    uVar13 = *(int *)((longlong)FVar17 + 0x18);
    iStack_188 = 0;
    local_170 = 0;
    uStack_184 = (uint)local_1a0;
    uStack_174 = local_170;
    if (uVar13 != 0) {
      FVar18 = *(ForElementType<unsigned_int> *)((longlong)FVar17 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)FVar17 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar17;
      }
      uVar23 = *(uint *)FVar18;
      local_170 = 0;
      while (uVar23 == 0) {
        lVar12 = (longlong)iStack_188;
        local_170 = local_170 + 0x20;
        iStack_188 = iStack_188 + 1;
        uStack_174 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_188)
        goto LAB_145fc952e;
        uVar23 = ((uint *)((longlong)FVar18 + 4))[lVar12];
      }
      uStack_184 = -uVar23 & uVar23;
      uVar4 = (ulonglong)uStack_184 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_128 = (int)lVar12;
      uStack_174 = (local_170 - 1) + local_128;
      if ((int)uVar13 < (int)uStack_174) {
        uStack_174 = uVar13;
      }
    }
LAB_145fc952e:
    iStack_16c = local_4c;
    uVar23 = *(uint *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x28;
    iStack_168 = *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x8 -
                 *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x34;
    uVar24 = uVar23 & 0xffffffe0;
    TStack_e0._padding_ = CONCAT44(uStack_184,iStack_188);
    local_180 = FVar17;
    uStack_178 = 0xffffffff;
    TStack_e0.CurrentBitIndex = uStack_174;
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar23 >> 5;
    TStack_e0._28_4_ = local_4c;
    TStack_e0.BaseBitIndex = local_170;
    uStack_c0 = CONCAT44(uStack_164,iStack_168);
    TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar17;
    local_190 = this_00;
    local_e8 = this_00;
    if ((((int)uVar23 < 0) || ((int)uVar13 < (int)uVar23)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar13 = *(uint *)((longlong)FVar17 + 0x18);
    if (uVar23 != uVar13) {
      FVar18 = *(ForElementType<unsigned_int> *)((longlong)FVar17 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)FVar17 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar17;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar21 * 4);
      while (uVar23 == 0) {
        lVar12 = (longlong)iVar21;
        uVar24 = uVar24 + 0x20;
        iVar21 = iVar21 + 1;
        uVar23 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_145fc9650;
        uVar23 = ((uint *)((longlong)FVar18 + 4))[lVar12];
      }
      uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_124 = (int)lVar12;
      uVar23 = (uVar24 - 1) + local_124;
      if ((int)uVar13 < (int)uVar23) {
        uVar23 = uVar13;
      }
    }
LAB_145fc9650:
    while( true ) {
      pTVar7 = local_e8;
      if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
          (int)uStack_c0) {
        local_1b8 = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<ALandscapeStreamingProxy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
      }
      if (((TStack_e0.CurrentBitIndex == uVar23) &&
          ((ForElementType<unsigned_int>)TStack_e0.Array == FVar17)) && (pTVar7 == this_00)) break;
      pAVar5 = *(ALandscapeProxy **)
                (*(longlong *)&pTVar7->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x10);
      pFVar11 = GetLandscapeGroupForProxy(this,pAVar5);
      pFVar16 = (pAVar5->LandscapeComponents).AllocatorInstance.Data;
      iVar21 = (pAVar5->LandscapeComponents).ArrayNum;
      pFVar3 = pFVar16 + (longlong)iVar21 * 8;
      while( true ) {
        if ((pAVar5->LandscapeComponents).ArrayNum != iVar21) {
          local_1b7[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1b7);
        }
        if (pFVar16 == pFVar3) break;
        FLandscapeGroup::RegisterComponent(pFVar11,*(ULandscapeComponent **)pFVar16);
        pFVar16 = pFVar16 + 8;
      }
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      FVar17 = local_198;
    }
    bVar9 = 1 < (this->StreamingProxiesNeedingReregister).HashSize;
    if (!bVar9) {
      TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    puVar1 = &(this->StreamingProxiesNeedingReregister).Elements.field_0xc;
    *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x34 = 0;
    iVar21 = *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x2c;
    *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x28 = 0;
    if ((iVar21 < 0) || (0x80 < iVar21)) {
      *(undefined4 *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->StreamingProxiesNeedingReregister).Elements.field_0x10,0);
    }
    if (bVar9) {
      (this->StreamingProxiesNeedingReregister).HashSize = (int)local_1a0;
      TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
  }
  iVar25 = 0;
  bVar9 = UE::Landscape::ShouldPatchAllLandscapeComponentEdges(true);
  pTVar22 = &this->Groups;
  iVar21 = *(int *)&(this->Groups).field_0x28;
  puVar1 = &(this->Groups).field_0x10;
  local_170 = 0;
  uStack_174 = 0;
  if (iVar21 != 0) {
    puVar20 = *(uint **)&(this->Groups).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar13 = *puVar20;
    local_170 = 0;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar25;
      local_170 = local_170 + 0x20;
      iVar25 = iVar25 + 1;
      uStack_174 = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_145fc9822;
      uVar13 = puVar20[lVar12 + 1];
    }
    local_1a0 = (ulonglong)(-uVar13 & uVar13);
    uVar4 = local_1a0 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_120 = (int)lVar12;
    uStack_174 = local_120 + -1 + local_170;
    if (iVar21 < (int)uStack_174) {
      uStack_174 = iVar21;
    }
  }
LAB_145fc9822:
  uStack_184 = (uint)local_1a0;
  iStack_16c = iStack_144;
  iStack_168 = *(int *)&(this->Groups).field_0x8 - *(int *)&(this->Groups).field_0x34;
  uStack_178 = 0xffffffff;
  uVar13 = *(uint *)&(this->Groups).field_0x28;
  TStack_b0._padding_ = CONCAT44(uStack_184,iVar25);
  local_1b0 = -1 << ((byte)uVar13 & 0x1f);
  uVar23 = uVar13 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = uStack_174;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_b0._28_4_ = iStack_144;
  TStack_b0.BaseBitIndex = local_170;
  uStack_90 = CONCAT44(uStack_164,iStack_168);
  local_190 = (TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
               *)pTVar22;
  iStack_188 = iVar25;
  local_180 = (ForElementType<unsigned_int>)puVar1;
  local_b8 = pTVar22;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar21 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar24 = *(uint *)&(this->Groups).field_0x28;
  if (uVar13 != uVar24) {
    puVar19 = *(undefined1 **)&(this->Groups).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar13 = local_1b0 & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar23 = uVar23 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_145fc9950;
      uVar13 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (uVar23 - 1) + (int)lVar12;
    if ((int)uVar24 < (int)uVar13) {
      uVar13 = uVar24;
    }
  }
LAB_145fc9950:
  while( true ) {
    pTVar8 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeGroup_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar13) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar22))
    break;
    FLandscapeGroup::TickEdgeFixup
              (*(FLandscapeGroup **)
                (*(longlong *)pTVar8 + 8 + (longlong)TStack_b0.CurrentBitIndex * 0x18),this,bVar9);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnregisterActor @ 145fca200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::UnregisterActor(ULandscapeSubsystem *this,ALandscapeProxy *param_1)

{
  TObjectPtr<ULandscapeSubsystem> *pTVar1;
  int iVar2;
  ULandscapeSubsystem *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UWorld *pUVar7;
  ALandscapeProxy *pAVar8;
  UClass *pUVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  FName local_res20;
  ALandscapeProxy *local_a8;
  ALandscapeProxy *local_a0;
  FName local_98;
  TObjectPtr<ALandscapeStreamingProxy_const_>_u_0 local_90;
  byte *local_88;
  TObjectPtr<ULandscapeSubsystem>_u_0 *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if ((param_1 == (ALandscapeProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                         ,0x180,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ALandscapeProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_88 = &param_1->field_0x764;
  pTVar1 = &param_1->RegisteredToSubsystem;
  pUVar3 = (pTVar1->field0_0x0).DebugPtr;
  local_80 = &pTVar1->field0_0x0;
  if (!param_1->bIsRegisteredWithSubsystem) {
    if ((pUVar3 != (ULandscapeSubsystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Proxy->RegisteredToSubsystem == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                           ,0x189,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar11 = (this->Proxies).AllocatorInstance.Data;
    pFVar4 = pFVar11 + (longlong)(this->Proxies).ArrayNum * 8;
    if (pFVar11 == pFVar4) {
      return;
    }
    while (*(ALandscapeProxy **)pFVar11 != local_a8) {
      pFVar11 = pFVar11 + 8;
      if (pFVar11 == pFVar4) {
        return;
      }
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Proxies.Contains(ProxyPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                       ,0x18a,L"");
    if (!bVar6) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pUVar3 == (ULandscapeSubsystem *)0x0) {
    bVar6 = this == (ULandscapeSubsystem *)0x0;
  }
  else {
    bVar6 = pUVar3 == this;
  }
  if (!bVar6) {
    if (2 < (byte)LogLandscape._0_1_) {
      pUVar7 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      local_res20 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res20,&local_68);
      pUVar7 = UWorldSubsystem::GetWorld((UWorldSubsystem *)(pTVar1->field0_0x0).DebugPtr);
      local_98 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_98,&local_78);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_58,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    UnregisterActor((pTVar1->field0_0x0).DebugPtr,param_1);
    return;
  }
  pFVar4 = (this->Proxies).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 < pFVar4 + (longlong)(this->Proxies).ArrayMax * 8)) &&
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
  iVar2 = (this->Proxies).ArrayNum;
  if (iVar2 != 0) {
    pFVar4 = (this->Proxies).AllocatorInstance.Data;
    iVar12 = 0;
    bVar6 = *(ALandscapeProxy **)pFVar4 != local_a8;
    lVar16 = 0;
    pAVar8 = local_a8;
    iVar13 = 0;
    do {
      iVar14 = iVar13;
      do {
        lVar16 = lVar16 + 1;
        iVar14 = iVar14 + 1;
        if (iVar2 <= lVar16) break;
      } while (bVar6 == (*(ALandscapeProxy **)(pFVar4 + lVar16 * 8) != pAVar8));
      if (bVar6 != false) {
        if (iVar12 != iVar13) {
          memmove(pFVar4 + (longlong)iVar12 * 8,pFVar4 + (longlong)iVar13 * 8,
                  (longlong)(iVar14 - iVar13) << 3);
          pAVar8 = local_a8;
        }
        iVar12 = iVar12 + (iVar14 - iVar13);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar13 = iVar14;
    } while (lVar16 < iVar2);
    (this->Proxies).ArrayNum = iVar12;
    if (iVar2 - iVar12 == 1) goto LAB_145fca580;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RemovedCount == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSubsystem.cpp"
                     ,0x197,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_145fca580:
  pUVar9 = Z_Construct_UClass_ALandscape_NoRegister();
  iVar2 = (int)pUVar9->_padding_;
  if (((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
       != &pUVar9->_padding_)) || (param_1 == (ALandscapeProxy *)0x0)) {
    pUVar9 = Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if (((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar9->_padding_)) && (param_1 != (ALandscapeProxy *)0x0)) {
      local_90 = (TObjectPtr<ALandscapeStreamingProxy_const_>_u_0)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if (*(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x8 !=
          *(int *)&(this->StreamingProxiesNeedingReregister).Elements.field_0x34) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        TSet<TObjectPtr<ALandscapeStreamingProxy>,DefaultKeyFuncs<TObjectPtr<ALandscapeStreamingProxy>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TObjectPtr<ALandscapeStreamingProxy_const_>_>
                  (&this->StreamingProxiesNeedingReregister,uVar10 >> 0x10 ^ uVar10,
                   (TObjectPtr<ALandscapeStreamingProxy_const_> *)&local_90.ObjectPtr);
      }
      if (param_1->_padding_ != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (param_1->_padding_ + 0x1b0),this);
      }
    }
  }
  else {
    local_a0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar4 = (this->LandscapeActors).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 <
         pFVar4 + (longlong)(this->LandscapeActors).ArrayMax * 8)) &&
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
    iVar2 = (this->LandscapeActors).ArrayNum;
    if (iVar2 != 0) {
      pFVar4 = (this->LandscapeActors).AllocatorInstance.Data;
      iVar12 = 0;
      iVar13 = 0;
      bVar6 = *(ALandscapeProxy **)pFVar4 != local_a0;
      lVar16 = 0;
      pAVar8 = local_a0;
      iVar14 = 0;
      do {
        iVar15 = iVar14;
        do {
          lVar16 = lVar16 + 1;
          iVar15 = iVar15 + 1;
          if (iVar2 <= lVar16) break;
          iVar12 = iVar13;
        } while (bVar6 == (*(ALandscapeProxy **)(pFVar4 + lVar16 * 8) != pAVar8));
        if (bVar6 != false) {
          if (iVar12 != iVar14) {
            memmove(pFVar4 + (longlong)iVar12 * 8,pFVar4 + (longlong)iVar14 * 8,
                    (longlong)(iVar15 - iVar14) << 3);
            pAVar8 = local_a0;
            iVar12 = iVar13;
          }
          iVar12 = iVar12 + (iVar15 - iVar14);
          iVar13 = iVar12;
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar14 = iVar15;
      } while (lVar16 < iVar2);
      (this->LandscapeActors).ArrayNum = iVar12;
    }
  }
  *local_88 = *local_88 & 0xfd;
  local_80->DebugPtr = (ULandscapeSubsystem *)0x0;
  return;
}

// UnregisterComponent @ 145fca7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeSubsystem::UnregisterComponent(ULandscapeSubsystem *this,ULandscapeComponent *param_1)

{
  FLandscapeGrassMapsBuilder::UnregisterComponent(this->GrassMapsBuilder,param_1);
  if (param_1->RegisteredLandscapeGroup != (FLandscapeGroup *)0x0) {
    FLandscapeGroup::UnregisterComponent(param_1->RegisteredLandscapeGroup,param_1);
    return;
  }
  return;
}

