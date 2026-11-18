// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 1467c25b0

UClass * __cdecl UMovieScenePropertySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertySystem.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertySystem",
               &Z_Registration_Info_UClass_UMovieScenePropertySystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertySystem,0x60,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertySystem>,
               InternalVTableHelperCtorCaller<UMovieScenePropertySystem>,aFStackX_8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertySystem.InnerSingleton;
}

// _getUObject @ 1467ca850

UObject * __thiscall UMovieScenePropertySystem::_getUObject(UMovieScenePropertySystem *this)

{
  return (UObject *)&this[-1]._padding_;
}

// UMovieScenePropertySystem @ 14680b690

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePropertySystem * __thiscall
UMovieScenePropertySystem::UMovieScenePropertySystem
          (UMovieScenePropertySystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  (this->InstantiatorSystem).field0_0x0.DebugPtr = (UMovieScenePropertyInstantiatorSystem *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  this->CompositePropertyID = -1;
  this->PreAnimatedStorageID = 0xffffffff;
  return this;
}

// UMovieScenePropertySystem @ 14680b6e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePropertySystem * __thiscall
UMovieScenePropertySystem::UMovieScenePropertySystem
          (UMovieScenePropertySystem *this,FObjectInitializer *param_1)

{
  EEntitySystemCategory EVar1;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  (this->InstantiatorSystem).field0_0x0.DebugPtr = (UMovieScenePropertyInstantiatorSystem *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  this->CompositePropertyID = -1;
  this->PreAnimatedStorageID = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 8;
  EVar1 = UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory();
  *(EEntitySystemCategory *)&this->_padding_ = EVar1 | PropertySystems;
  return this;
}

// ~UMovieScenePropertySystem @ 14680fc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertySystem::~UMovieScenePropertySystem(UMovieScenePropertySystem *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneEntitySystem__;
  this->_padding_ = (longlong)&___7IMovieScenePreAnimatedStateSystemInterface__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836ba0

UClass * __cdecl UMovieScenePropertySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertySystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertySystem",
               &Z_Registration_Info_UClass_UMovieScenePropertySystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertySystem,0x60,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertySystem>,
               InternalVTableHelperCtorCaller<UMovieScenePropertySystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertySystem.InnerSingleton;
}

// OnLink @ 1468430c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieScenePropertySystem::OnLink(UMovieScenePropertySystem *this)

{
  int iVar1;
  UMovieSceneEntitySystemLinker *this_00;
  UMovieScenePropertyInstantiatorSystem *pUVar2;
  UClass *pUVar3;
  UClass *local_res8;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = UMovieScenePropertyInstantiatorSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UMovieScenePropertyInstantiatorSystem *)
           UMovieSceneEntitySystemLinker::LinkSystemIfAllowed
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar2 != (UMovieScenePropertyInstantiatorSystem *)0x0) {
    pUVar3 = UMovieScenePropertyInstantiatorSystem::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14684312b;
  }
  pUVar2 = (UMovieScenePropertyInstantiatorSystem *)0x0;
LAB_14684312b:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar2 == (UMovieScenePropertyInstantiatorSystem *)0x0)) {
    (this->InstantiatorSystem).field0_0x0.DebugPtr = pUVar2;
    if (pUVar2 == (UMovieScenePropertyInstantiatorSystem *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    (this->InstantiatorSystem).field0_0x0.DebugPtr = pUVar2;
  }
  FMovieSceneEntitySystemGraph::AddReference
            ((FMovieSceneEntitySystemGraph *)(this->_padding_ + 0x2d8),
             (UMovieSceneEntitySystem *)this,(UMovieSceneEntitySystem *)pUVar2);
  return;
}

// OnRun @ 14684a940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertySystem::OnRun
          (UMovieScenePropertySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  UMovieScenePropertyInstantiatorSystem *this_00;
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *this_01;
  FPropertyDefinition *pFVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  int local_res8 [2];
  FScriptContainerElement *local_28;
  uint uStack_20;
  
  this_00 = (this->InstantiatorSystem).field0_0x0.DebugPtr;
  if (this_00 != (UMovieScenePropertyInstantiatorSystem *)0x0) {
    UMovieScenePropertyInstantiatorSystem::GetStatsForProperty
              (this_00,(FCompositePropertyTypeID)(int)local_res8);
    if (0 < local_res8[0]) {
      this_01 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar3 = UE::MovieScene::FPropertyRegistry::GetDefinition
                         (&this_01->PropertyRegistry,
                          (FCompositePropertyTypeID)(this->CompositePropertyID).TypeIndex);
      pTVar4 = &pFVar3->Handler;
      if (!(pFVar3->Handler).bIsValid) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (!(pFVar3->Handler).bInline) {
        pTVar4 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                  (pTVar4->Data).Pad;
      }
      local_28 = (this_01->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
                 (ulonglong)pFVar3->VariableSizeCompositeOffset * 4;
      uStack_20 = (uint)pFVar3->CompositeSize;
      (**(code **)(*(longlong *)(pTVar4->Data).Pad + 0x28))
                (pTVar4,pFVar3,&local_28,local_res8,param_1,param_2,this->_padding_);
    }
  }
  return;
}

// OnSchedulePersistentTasks @ 14684f820

void __thiscall
UMovieScenePropertySystem::OnSchedulePersistentTasks
          (UMovieScenePropertySystem *this,IEntitySystemScheduler *param_1)

{
  UMovieScenePropertyInstantiatorSystem *this_00;
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *this_01;
  FPropertyDefinition *pFVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  int local_res8 [2];
  FScriptContainerElement *local_28;
  uint uStack_20;
  
  this_00 = (this->InstantiatorSystem).field0_0x0.DebugPtr;
  if (this_00 != (UMovieScenePropertyInstantiatorSystem *)0x0) {
    UMovieScenePropertyInstantiatorSystem::GetStatsForProperty
              (this_00,(FCompositePropertyTypeID)(int)local_res8);
    if (0 < local_res8[0]) {
      this_01 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar3 = UE::MovieScene::FPropertyRegistry::GetDefinition
                         (&this_01->PropertyRegistry,
                          (FCompositePropertyTypeID)(this->CompositePropertyID).TypeIndex);
      pTVar4 = &pFVar3->Handler;
      if (!(pFVar3->Handler).bIsValid) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (!(pFVar3->Handler).bInline) {
        pTVar4 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                  (pTVar4->Data).Pad;
      }
      local_28 = (this_01->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
                 (ulonglong)pFVar3->VariableSizeCompositeOffset * 4;
      uStack_20 = (uint)pFVar3->CompositeSize;
      (**(code **)(*(longlong *)(pTVar4->Data).Pad + 0x20))
                (pTVar4,pFVar3,&local_28,local_res8,param_1,this->_padding_);
    }
  }
  return;
}

// RestorePreAnimatedState @ 1468610f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertySystem::RestorePreAnimatedState
          (UMovieScenePropertySystem *this,FPreAnimationParameters *param_1)

{
  return;
}

// SavePreAnimatedState @ 1468691f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertySystem::SavePreAnimatedState
          (UMovieScenePropertySystem *this,FPreAnimationParameters *param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  FBuiltInComponentTypes *this_00;
  FPropertyDefinition *pFVar5;
  undefined4 *puVar6;
  IPreAnimatedObjectEntityStorage *pIVar7;
  IPreAnimatedObjectPropertyStorage *pIVar8;
  ForAnyElementType FVar9;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar10;
  ushort *puVar11;
  int iVar12;
  undefined1 auStack_6e8 [32];
  <lambda_1> local_6c8;
  <lambda_1> local_6c7;
  <lambda_1> local_6c6;
  <lambda_1> local_6c5;
  <lambda_1> local_6c4;
  <lambda_1> local_6c3;
  <lambda_1> local_6c2;
  <lambda_1> local_6c1;
  longlong *local_6c0;
  TReferenceControllerBase<1> *local_6b8;
  <lambda_1> local_6a8;
  <lambda_2> local_6a0;
  <lambda_3> local_698;
  <lambda_4> local_690 [2];
  undefined8 local_680;
  TStatIdData *pTStack_678;
  byte local_670;
  undefined7 uStack_66f;
  undefined4 uStack_668;
  uint uStack_664;
  undefined8 local_658;
  TStatIdData *pTStack_650;
  byte local_648;
  undefined7 uStack_647;
  undefined4 uStack_640;
  uint uStack_63c;
  undefined8 local_630;
  TStatIdData *pTStack_628;
  byte local_620;
  undefined7 uStack_61f;
  undefined4 uStack_618;
  uint uStack_614;
  undefined8 local_608;
  TStatIdData *pTStack_600;
  byte local_5f8;
  undefined7 uStack_5f7;
  undefined4 uStack_5f0;
  uint uStack_5ec;
  undefined2 local_5e8;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_5e6;
  TComponentTypeID<UObject_*> TStack_5e4;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_5e2;
  undefined8 uStack_5e0;
  TStatIdData *pTStack_5d8;
  ulonglong uStack_5d0;
  undefined8 uStack_5c8;
  undefined2 local_5c0;
  TComponentTypeID<UE::MovieScene::FRootInstanceHandle> TStack_5be;
  TComponentTypeID<UObject_*> TStack_5bc;
  undefined2 uStack_5ba;
  undefined8 uStack_5b8;
  TStatIdData *pTStack_5b0;
  ulonglong uStack_5a8;
  undefined8 uStack_5a0;
  TComponentTypeID<UObject_*> local_598;
  undefined6 uStack_596;
  undefined8 uStack_590;
  TStatIdData *pTStack_588;
  ulonglong uStack_580;
  undefined8 uStack_578;
  ushort local_570 [3];
  ushort local_56a;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_568;
  undefined2 uStack_566;
  TComponentTypeID<unsigned_short> TStack_564;
  undefined2 uStack_562;
  undefined4 local_560;
  TBitArray<TFixedAllocator<12>_> local_558;
  TBitArray<TFixedAllocator<12>_> local_520;
  TComponentTypeID<UObject_*> local_4e8;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_4e6;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined1 local_4b8 [4];
  FComponentAccess FStack_4b4;
  FComponentAccess FStack_4b2;
  wchar_t *pwStack_4b0;
  TStatIdData *local_4a8;
  ulonglong uStack_4a0;
  undefined8 local_498;
  FEntityComponentFilter local_490;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined1 local_398 [4];
  TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  TStack_394;
  wchar_t *local_388;
  TStatIdData *pTStack_380;
  ulonglong local_378;
  undefined8 uStack_370;
  FEntityComponentFilter local_368;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 local_278 [4];
  FComponentAccess aFStack_274 [2];
  wchar_t *pwStack_270;
  TStatIdData *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  FEntityComponentFilter local_250;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>
  local_158;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6e8;
  this_00 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FPropertyRegistry::GetDefinition
                     (&this_00->PropertyRegistry,(FCompositePropertyTypeID)(int)this->_padding_);
  pTVar10 = &pFVar5->Handler;
  if ((!(pFVar5->Handler).bIsValid) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (!(pFVar5->Handler).bInline) {
    pTVar10 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)(pTVar10->Data).Pad;
  }
  (**(code **)(*(longlong *)(pTVar10->Data).Pad + 0x38))
            (pTVar10,&local_6c0,pFVar5,param_1->CacheExtension);
  if (local_6c0 != (longlong *)0x0) {
    if ((local_6c0 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar6 = (undefined4 *)(**(code **)(*local_6c0 + 8))();
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *puVar6;
    uVar2 = (pFVar5->PropertyType).Value;
    local_558.NumBits = 0;
    local_558.MaxBits = 0x180;
    TBitArray<TFixedAllocator<12>_>::Add(&local_558,false,uVar2 + 1);
    if ((local_558.NumBits <= (int)(uint)uVar2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = local_558.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
    if (param_1->CacheExtension->bEntriesInvalidated == false) {
      uVar2 = (this_00->Tags).NeedsLink.Value;
      iVar12 = ((uint)uVar2 - local_558.NumBits) + 1;
      if (0 < iVar12) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_558,false,iVar12);
      }
      if ((local_558.NumBits <= (int)(uint)uVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar1 = local_558.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
    }
    puVar11 = local_570;
    local_570[0] = (this_00->Tags).NeedsUnlink.Value;
    local_570[1] = (this_00->Tags).Finished.Value;
    local_570[2] = (this_00->Tags).Ignored.Value;
    local_520.NumBits = 0;
    local_520.MaxBits = 0x180;
    do {
      uVar2 = *puVar11;
      iVar12 = ((uint)uVar2 - local_520.NumBits) + 1;
      if (0 < iVar12) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_520,false,iVar12);
      }
      if ((local_520.NumBits <= (int)(uint)uVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar1 = local_520.AllocatorInstance.InlineData + (uVar2 >> 5);
      puVar11 = puVar11 + 1;
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
    } while (puVar11 != &local_56a);
    if ((local_6c0 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar7 = (IPreAnimatedObjectEntityStorage *)(**(code **)(*local_6c0 + 0x38))();
    if (pIVar7 == (IPreAnimatedObjectEntityStorage *)0x0) {
      if ((local_6c0 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar8 = (IPreAnimatedObjectPropertyStorage *)(**(code **)(*local_6c0 + 0x30))();
      if (pIVar8 == (IPreAnimatedObjectPropertyStorage *)0x0) goto LAB_146869ac3;
      TStack_5e6 = this_00->RootInstanceHandle;
      TStack_5e4 = this_00->BoundObject;
      TStack_5e2 = this_00->PropertyBinding;
      local_630 = 0;
      pTStack_628 = &TStatId::TStatId_NAME_None;
      uStack_618 = 0x6ff;
      uStack_614 = uStack_614 & 0xffffff00;
      uStack_5d0 = CONCAT71(uStack_61f,local_620) & 0xffffffffffffffe0;
      uStack_5c8._4_4_ = uStack_614;
      uStack_5c8._0_4_ = AnyHiPriThreadHiPriTask;
      local_490.AllMask.Bits.NumBits = 0;
      uStack_5e0 = 0;
      pTStack_5d8 = &TStatId::TStatId_NAME_None;
      local_490.AllMask.Bits.MaxBits = 0x180;
      local_4b8._2_2_ = TStack_5e6;
      local_4b8._0_2_ = local_5e8;
      unique0x10000857 = TStack_5e4;
      unique0x10000859 = TStack_5e2;
      local_490.NoneMask.Bits.NumBits = 0;
      local_490.NoneMask.Bits.MaxBits = 0x180;
      local_490.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pwStack_4b0 = (wchar_t *)0x0;
      local_4a8 = &TStatId::TStatId_NAME_None;
      local_490.ComplexMasks.ArrayNum = 0;
      local_490.ComplexMasks.ArrayMax = 0;
      local_3e0 = 0;
      local_3dc = 0x180;
      local_3a8 = 0;
      local_3a4 = 0x180;
      local_620 = local_620 & 0xe0;
      uStack_4a0 = uStack_5d0;
      local_498 = uStack_5c8;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4b8 + 2),&local_490);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4b8 + 4),&local_490);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_4b8 + 6),&local_490);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_558,(TBitArray<TFixedAllocator<12>_> *)&local_490,MaxSize,&local_6c4);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_520,&local_490.NoneMask.Bits,MaxSize,&local_6c3);
      local_698.PropertyStorage = pIVar8;
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>_>
      ::
      Iterate_PerAllocationImpl<_UMovieScenePropertySystem::SavePreAnimatedState_::__l15::<lambda_3>_>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>_>
                  *)local_4b8,(FEntityManager *)(this[-1]._padding_ + 0x28),&local_490,&local_698);
      if (local_490.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.ComplexMasks.AllocatorInstance.Data);
      }
      local_568 = this_00->CustomPropertyIndex;
      TStack_564 = this_00->FastPropertyOffset;
      local_4e8 = this_00->BoundObject;
      TStack_4e6 = this_00->PropertyBinding;
      uStack_566 = 0x7fff;
      uStack_562 = 0x7fff;
      uStack_4e4 = CONCAT22(0x7fff,local_568);
      local_560 = CONCAT22(0x7fff,this_00->SlowProperty);
      uStack_4dc = local_560;
      uStack_4e0 = (undefined4)(CONCAT26(0x7fff,CONCAT24(TStack_564,uStack_4e4)) >> 0x20);
      local_398._2_2_ = TStack_4e6;
      local_398._0_2_ = local_4e8;
      unique0x10000895 = uStack_4e4;
      TStack_394.ComponentTypes[2] = local_560;
      TStack_394.ComponentTypes[1] = uStack_4e0;
      local_608 = 0;
      pTStack_600 = &TStatId::TStatId_NAME_None;
      uStack_5f0 = 0x6ff;
      uStack_5ec = uStack_5ec & 0xffffff00;
      local_378 = CONCAT71(uStack_5f7,local_5f8) & 0xffffffffffffffe0;
      uStack_370._4_4_ = uStack_5ec;
      uStack_370._0_4_ = AnyHiPriThreadHiPriTask;
      local_368.AllMask.Bits.NumBits = 0;
      local_388 = (wchar_t *)0x0;
      pTStack_380 = &TStatId::TStatId_NAME_None;
      local_368.AllMask.Bits.MaxBits = 0x180;
      local_368.NoneMask.Bits.NumBits = 0;
      local_368.NoneMask.Bits.MaxBits = 0x180;
      local_368.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.ComplexMasks.ArrayNum = 0;
      local_368.ComplexMasks.ArrayMax = 0;
      local_2b8 = 0;
      local_2b4 = 0x180;
      local_280 = 0;
      local_27c = 0x180;
      local_5f8 = local_5f8 & 0xe0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_398,&local_368);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_398 + 2),&local_368);
      UE::MovieScene::
      AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)(local_398 + 4),&local_368);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_558,(TBitArray<TFixedAllocator<12>_> *)&local_368,MaxSize,&local_6c2);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_520,&local_368.NoneMask.Bits,MaxSize,&local_6c1);
      local_690[0].PropertyStorage = pIVar8;
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
      ::
      Iterate_PerAllocationImpl<_UMovieScenePropertySystem::SavePreAnimatedState_::__l15::<lambda_4>_>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                  *)local_398,(FEntityManager *)(this[-1]._padding_ + 0x28),&local_368,local_690);
      FVar9.Data = local_368.ComplexMasks.AllocatorInstance.Data;
    }
    else {
      TStack_5be = this_00->RootInstanceHandle;
      TStack_5bc = this_00->BoundObject;
      pTStack_678 = &TStatId::TStatId_NAME_None;
      local_680 = 0;
      uStack_668 = 0x6ff;
      uStack_664 = uStack_664 & 0xffffff00;
      uStack_5a8 = CONCAT71(uStack_66f,local_670) & 0xffffffffffffffe0;
      uStack_5a0._4_4_ = uStack_664;
      uStack_5a0._0_4_ = AnyHiPriThreadHiPriTask;
      local_250.AllMask.Bits.NumBits = 0;
      uStack_5b8 = 0;
      pTStack_5b0 = &TStatId::TStatId_NAME_None;
      local_250.AllMask.Bits.MaxBits = 0x180;
      local_278._2_2_ = TStack_5be;
      local_278._0_2_ = local_5c0;
      unique0x10000869 = TStack_5bc;
      unique0x1000086b = uStack_5ba;
      local_250.NoneMask.Bits.NumBits = 0;
      local_250.NoneMask.Bits.MaxBits = 0x180;
      local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pwStack_270 = (wchar_t *)0x0;
      local_268 = &TStatId::TStatId_NAME_None;
      local_250.ComplexMasks.ArrayNum = 0;
      local_250.ComplexMasks.ArrayMax = 0;
      local_1a0 = 0;
      local_19c = 0x180;
      local_168 = 0;
      local_164 = 0x180;
      local_670 = local_670 & 0xe0;
      uStack_260 = uStack_5a8;
      local_258 = uStack_5a0;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 2),&local_250);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 4),&local_250);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_558,(TBitArray<TFixedAllocator<12>_> *)&local_250,MaxSize,&local_6c8);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_520,&local_250.NoneMask.Bits,MaxSize,&local_6c7);
      local_6a8.ObjectStorage = pIVar7;
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>_>
      ::
      Iterate_PerAllocationImpl<_UMovieScenePropertySystem::SavePreAnimatedState_::__l11::<lambda_1>_>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>_>
                  *)local_278,(FEntityManager *)(this[-1]._padding_ + 0x28),&local_250,&local_6a8);
      if (local_250.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
      }
      local_598 = this_00->BoundObject;
      local_658 = 0;
      pTStack_650 = &TStatId::TStatId_NAME_None;
      uStack_640 = 0x6ff;
      uStack_63c = uStack_63c & 0xffffff00;
      uStack_580 = CONCAT71(uStack_647,local_648) & 0xffffffffffffffe0;
      uStack_578._4_4_ = uStack_63c;
      uStack_578._0_4_ = AnyHiPriThreadHiPriTask;
      local_130.AllMask.Bits.NumBits = 0;
      uStack_590 = 0;
      pTStack_588 = &TStatId::TStatId_NAME_None;
      local_130.AllMask.Bits.MaxBits = 0x180;
      local_158._2_6_ = uStack_596;
      local_158.Accessors = (TTuple<UE::MovieScene::TReadAccess<UObject_*>_>)local_598;
      local_130.NoneMask.Bits.NumBits = 0;
      local_130.NoneMask.Bits.MaxBits = 0x180;
      local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
      local_158.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
      local_130.ComplexMasks.ArrayNum = 0;
      local_130.ComplexMasks.ArrayMax = 0;
      local_80 = 0;
      local_7c = 0x180;
      local_48 = 0;
      local_44 = 0x180;
      local_648 = local_648 & 0xe0;
      local_158.CommonParams.TaskParams._16_8_ = uStack_580;
      local_158.CommonParams._24_8_ = uStack_578;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)&local_158,&local_130);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_558,(TBitArray<TFixedAllocator<12>_> *)&local_130,MaxSize,&local_6c6);
      UE::Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&local_520,&local_130.NoneMask.Bits,MaxSize,&local_6c5);
      local_6a0.ObjectStorage = pIVar7;
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>::
      Iterate_PerAllocationImpl<_UMovieScenePropertySystem::SavePreAnimatedState_::__l11::<lambda_2>_>
                (&local_158,(FEntityManager *)(this[-1]._padding_ + 0x28),&local_130,&local_6a0);
      FVar9.Data = local_130.ComplexMasks.AllocatorInstance.Data;
    }
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
    }
  }
LAB_146869ac3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6b8);
  return;
}

// StaticRegisterNativesUMovieScenePropertySystem @ 14686cc10

void __cdecl UMovieScenePropertySystem::StaticRegisterNativesUMovieScenePropertySystem(void)

{
  return;
}

