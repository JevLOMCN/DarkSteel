// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 12

// StaticClass @ 146337fe0

UClass * __cdecl UISMPoolSubSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolSubSystem",
               &Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton,
               StaticRegisterNativesUISMPoolSubSystem,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UISMPoolSubSystem>,
               InternalVTableHelperCtorCaller<UISMPoolSubSystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton;
}

// UISMPoolSubSystem @ 14633abf0

UISMPoolSubSystem * __thiscall
UISMPoolSubSystem::UISMPoolSubSystem(UISMPoolSubSystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UISMPoolSubSystem__6B_;
  *(undefined8 *)&this->PerLevelISMPoolActors = 0;
  *(undefined8 *)&(this->PerLevelISMPoolActors).field_0x8 = 0;
  *(undefined8 *)&(this->PerLevelISMPoolActors).field_0x20 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x28 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x34 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerLevelISMPoolActors).field_0x40 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x48 = 0;
  return this;
}

// UISMPoolSubSystem @ 14633ac50

UISMPoolSubSystem * __thiscall UISMPoolSubSystem::UISMPoolSubSystem(UISMPoolSubSystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UISMPoolSubSystem__6B_;
  *(undefined8 *)&this->PerLevelISMPoolActors = 0;
  *(undefined8 *)&(this->PerLevelISMPoolActors).field_0x8 = 0;
  *(undefined8 *)&(this->PerLevelISMPoolActors).field_0x20 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x28 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x34 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerLevelISMPoolActors).field_0x40 = 0;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x48 = 0;
  return this;
}

// ~UISMPoolSubSystem @ 14633b180

void __thiscall UISMPoolSubSystem::~UISMPoolSubSystem(UISMPoolSubSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UISMPoolSubSystem__6B_;
  *(undefined4 *)&(this->PerLevelISMPoolActors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerLevelISMPoolActors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerLevelISMPoolActors);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// Deinitialize @ 14633e070

void __thiscall UISMPoolSubSystem::Deinitialize(UISMPoolSubSystem *this)

{
  TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
           *)&this->PerLevelISMPoolActors);
  return;
}

// FindISMPoolActor @ 14633ebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

AISMPoolActor * __thiscall
UISMPoolSubSystem::FindISMPoolActor(UISMPoolSubSystem *this,ULevel *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  UWorld *this_00;
  UClass *pUVar7;
  AISMPoolActor *pAVar8;
  char *pcVar9;
  FString *pFVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStackY_138 [32];
  TPairInitializer<TObjectPtr<ULevel>_&&,TObjectPtr<AISMPoolActor>_&&> local_108;
  ULevel *local_f8;
  AISMPoolActor *local_f0;
  FName local_e8;
  ULevel **local_e0;
  AISMPoolActor **local_d8;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_108.Value = (TObjectPtr<AISMPoolActor> *)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (ULevel *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  iVar6 = TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<ULevel_const_>_>
                    ((TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
                      *)&this->PerLevelISMPoolActors,uVar11 >> 0x10 ^ uVar11,
                     (TObjectPtr<ULevel_const_> *)&local_108.Value);
  if (((iVar6 == -1) ||
      (lVar1 = *(longlong *)&this->PerLevelISMPoolActors + (longlong)iVar6 * 0x18, lVar1 == 0)) ||
     (puVar13 = (undefined8 *)(lVar1 + 8), puVar13 == (undefined8 *)0x0)) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
    local_a8._52_4_ = RF_DuplicateTransient|RF_Transient;
    local_a8._32_8_ = param_1;
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    pUVar7 = AISMPoolActor::StaticClass();
    pAVar8 = (AISMPoolActor *)
             UWorld::SpawnActor(this_00,pUVar7,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                (FActorSpawnParameters *)local_a8);
    if (pAVar8 == (AISMPoolActor *)0x0) {
      pAVar8 = (AISMPoolActor *)0x0;
    }
    else {
      pUVar7 = AISMPoolActor::StaticClass();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        pFVar10 = GetTypeName<AISMPoolActor>(&local_d0);
        pwVar15 = L"";
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar10 = GetFullNameForCastLogError<AActor>(&local_c0,(AActor *)pAVar8);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar15,pwVar14);
      }
      local_f0 = pAVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar8);
      }
      local_f8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_e0 = &local_f8;
      local_d8 = &local_f0;
      TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectPtr<ULevel>_&&,TObjectPtr<AISMPoolActor>_&&>_>
                ((TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
                  *)&this->PerLevelISMPoolActors,&local_108,(bool *)&local_e0);
      pcVar9 = strstr("&UISMPoolSubSystem::OnActorEndPlay","::");
      pcVar4 = (char *)0x0;
      while (pcVar3 = pcVar9, pcVar3 != (char *)0x0) {
        pcVar9 = strstr(pcVar3 + 1,"::");
        pcVar4 = pcVar3;
      }
      if (((pcVar4 == (char *)0x0) || (pcVar4[2] == '0')) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
        pcVar2 = (code *)swi(3);
        pAVar8 = (AISMPoolActor *)(*pcVar2)();
        return pAVar8;
      }
      ::FName::FName(&local_e8,pcVar4 + 2);
      TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
      ::__Internal_AddDynamic<UISMPoolSubSystem>
                ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                  *)((FActorOnReleasedSignature *)&pAVar8->_padding_ + 7),this,
                 (pmf_c40ff9e7)0x146341140,local_e8);
    }
    if (local_a8._64_8_ != 0) {
      plVar12 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  else {
    pAVar8 = (AISMPoolActor *)*puVar13;
  }
  return pAVar8;
}

// GetISMPoolActors @ 14633ef30

void __thiscall
UISMPoolSubSystem::GetISMPoolActors
          (UISMPoolSubSystem *this,TArray<AISMPoolActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  longlong local_a8;
  TMap<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>_>
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
  TMap<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar9 = *(int *)&(this->PerLevelISMPoolActors).field_0x28;
  puVar1 = &(this->PerLevelISMPoolActors).field_0x10;
  iStack_98 = 0;
  pTVar2 = &this->PerLevelISMPoolActors;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->PerLevelISMPoolActors).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14633efde;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = (int)lVar10 + -1 + local_80;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_14633efde:
  iStack_78 = *(int *)&(this->PerLevelISMPoolActors).field_0x8 -
              *(int *)&(this->PerLevelISMPoolActors).field_0x34;
  uVar11 = *(uint *)&(this->PerLevelISMPoolActors).field_0x28;
  uStack_88 = 0xffffffff;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->PerLevelISMPoolActors).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->PerLevelISMPoolActors).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14633f0e0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14633f0e0:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = *(longlong *)(*(longlong *)pTVar7 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    if (lVar10 != 0) {
      pFVar5 = (param_1->AllocatorInstance).Data;
      local_a8 = lVar10;
      if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_a8;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetPrivateStaticClass @ 146340170

UClass * __cdecl UISMPoolSubSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ISMPool",L"ISMPoolSubSystem",
               &Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton,
               StaticRegisterNativesUISMPoolSubSystem,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UISMPoolSubSystem>,
               InternalVTableHelperCtorCaller<UISMPoolSubSystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UISMPoolSubSystem.InnerSingleton;
}

// Initialize @ 1463410a0

void __thiscall
UISMPoolSubSystem::Initialize(UISMPoolSubSystem *this,FSubsystemCollectionBase *param_1)

{
  USubsystem *pUVar1;
  UClass *local_res18 [2];
  
  UWorldSubsystem::Initialize((UWorldSubsystem *)this,param_1);
  local_res18[0] = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar1 = FSubsystemCollectionBase::InitializeDependency
                     (param_1,(TSubclassOf<USubsystem>)local_res18);
  if (pUVar1 != (USubsystem *)0x0) {
    StaticClass();
  }
  return;
}

// OnActorEndPlay @ 146341140

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
UISMPoolSubSystem::OnActorEndPlay(UISMPoolSubSystem *this,AActor *param_1,Type param_2)

{
  TObjectPtr<ULevel_const_>_u_0 TVar1;
  uint uVar2;
  TObjectPtr<ULevel_const_>_u_0 local_res20;
  
  TVar1.DebugPtr = AActor::GetLevel(param_1);
  if (TVar1.DebugPtr != (ULevel *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    local_res20.DebugPtr = TVar1.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if (*(int *)&(this->PerLevelISMPoolActors).field_0x8 !=
        *(int *)&(this->PerLevelISMPoolActors).field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      uVar2 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<ULevel_const_>_>
                ((TSet<TTuple<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULevel>,TObjectPtr<AISMPoolActor>,0>,FDefaultSetAllocator>
                  *)&this->PerLevelISMPoolActors,uVar2 >> 0x10 ^ uVar2,
                 (TObjectPtr<ULevel_const_> *)&local_res20.ObjectPtr);
    }
  }
  return;
}

// StaticRegisterNativesUISMPoolSubSystem @ 146342950

void __cdecl UISMPoolSubSystem::StaticRegisterNativesUISMPoolSubSystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UISMPoolSubSystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnActorEndPlay @ 146344150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UISMPoolSubSystem::execOnActorEndPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
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
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnActorEndPlay((UISMPoolSubSystem *)param_1,local_res20,(uint)local_res10[0]);
  return;
}

