// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 7

// StartupModule @ 14e2a8d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimSharingModule::StartupModule(FAnimSharingModule *this)

{
  undefined1 local_res10 [24];
  
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
               *)&FWorldDelegates::OnPostWorldCleanup,
              (_func___cdecl_void_UWorld_ptr_bool_bool *)local_res10);
  return;
}

// AddReferencedObjects @ 14e2a8d60

void __thiscall
FAnimSharingModule::AddReferencedObjects(FAnimSharingModule *this,FReferenceCollector *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = 0;
  uVar5 = 1;
  iVar11 = 0;
  uVar12 = WorldAnimSharingManagers._40_4_;
  uVar6 = 0;
  if (uVar12 != 0) {
    puVar13 = (uint *)&WorldAnimSharingManagers.field_0x10;
    if (WorldAnimSharingManagers._32_8_ != 0) {
      puVar13 = (uint *)WorldAnimSharingManagers._32_8_;
    }
    uVar6 = *puVar13;
    while (uVar6 == 0) {
      lVar7 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar6 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14e2a8e0d;
      uVar6 = puVar13[lVar7 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    uVar6 = local_res20 + -1 + iVar11;
    if ((int)uVar12 < (int)uVar6) {
      uVar6 = uVar12;
    }
  }
LAB_14e2a8e0d:
  bVar3 = WorldAnimSharingManagers._40_1_;
  uVar9 = uVar12 & 0xffffffe0;
  uVar14 = WorldAnimSharingManagers._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar10);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,WorldAnimSharingManagers._8_4_ - WorldAnimSharingManagers._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldAnimSharingManagers.field_0x10;
  if (((int)uVar12 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = WorldAnimSharingManagers._40_4_;
  if (uVar12 != uVar6) {
    uVar14 = WorldAnimSharingManagers._40_8_ & 0xffffffff;
    lVar7 = 0x154dac510;
    if (WorldAnimSharingManagers._32_8_ != 0) {
      lVar7 = WorldAnimSharingManagers._32_8_;
    }
    uVar5 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar10;
      uVar9 = uVar9 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e2a8f20;
      uVar5 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar14 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
    uVar14 = (ulonglong)uVar9;
  }
LAB_14e2a8f20:
  while( true ) {
    if (WorldAnimSharingManagers._8_4_ - WorldAnimSharingManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar14) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&WorldAnimSharingManagers.field_0x10)) break;
    puVar1 = (undefined8 *)
             (WorldAnimSharingManagers._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,puVar1 + 1,*puVar1,0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetReferencerName @ 14e2a8fb0

FString * __thiscall
FAnimSharingModule::GetReferencerName(FAnimSharingModule *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FAnimSharingModule");
  return __return_storage_ptr__;
}

// operator() @ 14e2ac630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimationSharingManager * __thiscall
`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>::operator()
          (void *this,UWorld *param_1)

{
  UAnimationSharingSetup *pUVar1;
  UClass *pUVar2;
  UAnimationSharingManager *this_00;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UAnimationSharingManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = param_1;
  this_00 = (UAnimationSharingManager *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pUVar1 = *(UAnimationSharingSetup **)this;
  lVar3 = this_00->_padding_;
  (this_00->TickFunction).Manager = this_00;
  lVar3 = (**(code **)(lVar3 + 0x180))(this_00);
  FTickFunction::RegisterTickFunction
            ((FTickFunction *)&this_00->TickFunction,*(ULevel **)(lVar3 + 0x30));
  if (pUVar1 != (UAnimationSharingSetup *)0x0) {
    UAnimationSharingManager::AddSetup(this_00,pUVar1);
  }
  return this_00;
}

// CreateAnimationSharingManager @ 14e2ae440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FAnimSharingModule::CreateAnimationSharingManager(UWorld *param_1,UAnimationSharingSetup *param_2)

{
  bool bVar1;
  code *local_38 [2];
  undefined **local_28;
  UAnimationSharingSetup *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,UAnimationSharingManager_*,UWorld_*>
                ::Call;
  local_20 = param_2;
  bVar1 = CreateAnimationSharingManager
                    (param_1,(TFunction<UAnimationSharingManager_*___cdecl(UWorld_*)> *)local_38);
  return bVar1;
}

// CreateAnimationSharingManager @ 14e2ae480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FAnimSharingModule::CreateAnimationSharingManager
          (UWorld *param_1,TFunction<UAnimationSharingManager_*___cdecl(UWorld_*)> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  UAnimationSharingManager *pUVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  FEngineTrackedActivityScope local_48 [8];
  UWorld *local_40;
  TPairInitializer<UWorld_const_*_const_&,TObjectPtr<UAnimationSharingManager>_&&> local_38;
  UAnimationSharingManager *local_28;
  UWorld **local_20;
  UAnimationSharingManager **local_18;
  
  local_40 = param_1;
  if ((param_1 != (UWorld *)0x0) && (bVar3 = UWorld::IsGameWorld(param_1), bVar3)) {
    if (*(longlong *)param_2 == 0) {
      return false;
    }
    if (GAnimationSharingEnabled == 1) {
      uVar6 = ((uint)((ulonglong)local_40 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_40 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      if (WorldAnimSharingManagers._8_4_ != WorldAnimSharingManagers._52_4_) {
        lVar8 = 0x154dac538;
        if (WorldAnimSharingManagers._64_8_ != 0) {
          lVar8 = WorldAnimSharingManagers._64_8_;
        }
        for (iVar1 = *(int *)(lVar8 + (ulonglong)
                                      (WorldAnimSharingManagers._72_4_ - 1 & (uVar6 >> 0x10 ^ uVar6)
                                      ) * 4); iVar1 != -1;
            iVar1 = *(int *)(WorldAnimSharingManagers._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
          if (*(UWorld **)(WorldAnimSharingManagers._0_8_ + (longlong)iVar1 * 0x18) == local_40)
          goto LAB_14e2ae63c;
        }
      }
      FEngineTrackedActivityScope::FEngineTrackedActivityScope
                (local_48,L"Initializing Animation Sharing");
      local_38.Value = (TObjectPtr<UAnimationSharingManager> *)local_40;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar2 = *(code **)param_2;
      plVar7 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_2->field_0x28;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      pUVar5 = (UAnimationSharingManager *)(*pcVar2)(uVar4,&local_38.Value);
      local_28 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UAnimationSharingManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_20 = &local_40;
      local_18 = &local_28;
      TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UWorld_const_*_const_&,TObjectPtr<UAnimationSharingManager>_&&>_>
                ((TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
                  *)&WorldAnimSharingManagers,&local_38,(bool *)&local_20);
      TMulticastDelegate<void___cdecl(UAnimationSharingManager_*,UWorld_const_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&OnAnimationSharingManagerCreated,pUVar5,local_40);
      FEngineTrackedActivityScope::~FEngineTrackedActivityScope(local_48);
      if (*(longlong *)param_2 != 0) {
        plVar7 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      return true;
    }
  }
LAB_14e2ae63c:
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return false;
}

// OnWorldCleanup @ 14e2b1ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FAnimSharingModule::OnWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  UWorld *local_res8 [4];
  
  if (WorldAnimSharingManagers._8_4_ != WorldAnimSharingManagers._52_4_) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8[0] = param_1;
    TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UWorld_const_*>
              ((TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
                *)&WorldAnimSharingManagers,uVar1 >> 0x10 ^ uVar1,local_res8);
  }
  return;
}

