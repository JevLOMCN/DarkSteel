// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 42

// StaticClass @ 149c95ef0

UClass * __cdecl APCGPartitionActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPartitionActor",
               &Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton,
               StaticRegisterNativesAPCGPartitionActor,0x3d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APCGPartitionActor>,
               InternalVTableHelperCtorCaller<APCGPartitionActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton;
}

// APCGPartitionActor @ 149ca22a0

APCGPartitionActor * __thiscall
APCGPartitionActor::APCGPartitionActor(APCGPartitionActor *this,FVTableHelper *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->_padding_ = (longlong)&___7APCGPartitionActor__6B_;
  (this->PCGGuid).A = 0;
  (this->PCGGuid).B = 0;
  (this->PCGGuid).C = 0;
  (this->PCGGuid).D = 0;
  *(undefined8 *)&this->OriginalToLocal = 0;
  *(undefined8 *)&(this->OriginalToLocal).field_0x8 = 0;
  *(undefined8 *)&(this->OriginalToLocal).field_0x20 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x28 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x2c = 0x80;
  *(undefined4 *)&(this->OriginalToLocal).field_0x34 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OriginalToLocal).field_0x40 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x48 = 0;
  *(undefined8 *)&this->LocalToOriginal = 0;
  *(undefined8 *)&(this->LocalToOriginal).field_0x8 = 0;
  *(undefined8 *)&(this->LocalToOriginal).field_0x20 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x28 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalToOriginal).field_0x34 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LocalToOriginal).field_0x40 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x48 = 0;
  *(undefined8 *)&this->LoadedPreviewComponents = 0;
  *(undefined8 *)&(this->LoadedPreviewComponents).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedPreviewComponents).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x34 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LoadedPreviewComponents).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x48 = 0;
  this->RuntimeGridDescriptorHash = 0;
  this->bIsRegistered = false;
  this->bIsRuntimeGenerated = false;
  this->bWasPostCreatedLoaded = false;
  return this;
}

// APCGPartitionActor @ 149ca23b0

APCGPartitionActor * __thiscall
APCGPartitionActor::APCGPartitionActor(APCGPartitionActor *this,FObjectInitializer *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->_padding_ = (longlong)&___7APCGPartitionActor__6B_;
  (this->PCGGuid).A = 0;
  (this->PCGGuid).B = 0;
  (this->PCGGuid).C = 0;
  (this->PCGGuid).D = 0;
  *(undefined8 *)&this->OriginalToLocal = 0;
  *(undefined8 *)&(this->OriginalToLocal).field_0x8 = 0;
  *(undefined8 *)&(this->OriginalToLocal).field_0x20 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x28 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x2c = 0x80;
  *(undefined4 *)&(this->OriginalToLocal).field_0x34 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OriginalToLocal).field_0x40 = 0;
  *(undefined4 *)&(this->OriginalToLocal).field_0x48 = 0;
  *(undefined8 *)&this->LocalToOriginal = 0;
  *(undefined8 *)&(this->LocalToOriginal).field_0x8 = 0;
  *(undefined8 *)&(this->LocalToOriginal).field_0x20 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x28 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalToOriginal).field_0x34 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LocalToOriginal).field_0x40 = 0;
  *(undefined4 *)&(this->LocalToOriginal).field_0x48 = 0;
  *(undefined8 *)&this->LoadedPreviewComponents = 0;
  *(undefined8 *)&(this->LoadedPreviewComponents).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedPreviewComponents).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x34 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LoadedPreviewComponents).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x48 = 0;
  this->RuntimeGridDescriptorHash = 0;
  this->bIsRegistered = false;
  this->bIsRuntimeGenerated = false;
  this->bWasPostCreatedLoaded = false;
  this->PCGGridSize = 0;
  return this;
}

// ~APCGPartitionActor @ 149ca5d70

void __thiscall APCGPartitionActor::~APCGPartitionActor(APCGPartitionActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7APCGPartitionActor__6B_;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LoadedPreviewComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoadedPreviewComponents);
  *(undefined4 *)&(this->LocalToOriginal).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LocalToOriginal).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalToOriginal);
  *(undefined4 *)&(this->OriginalToLocal).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OriginalToLocal).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OriginalToLocal);
  APartitionActor::~APartitionActor((APartitionActor *)this);
  return;
}

// AddGraphInstance @ 149caa3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
APCGPartitionActor::AddGraphInstance(APCGPartitionActor *this,UPCGComponent *param_1)

{
  UClass *pUVar1;
  UPCGComponent *pUVar2;
  EObjectFlags EVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [32];
  UPCGComponent *local_d8;
  UPCGComponent *local_d0;
  TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&> local_c8;
  UPCGComponent **local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  if (param_1 != (UPCGComponent *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
    local_d0 = param_1;
    local_d8 = GetLocalComponent(this,param_1,true);
    if (local_d8 == (UPCGComponent *)0x0) {
      local_c8.Key = (UPCGComponent **)0x0;
      EVar3 = RF_NonPIEDuplicateTransient|RF_Transient;
      if (local_d0->CurrentEditingMode != Preview) {
        EVar3 = RF_NoFlags;
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = Z_Construct_UClass_UPCGComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar1);
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_a8._16_4_ = 0;
      local_a8._20_4_ = 0;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_a8._8_8_ = this;
      local_a8._24_4_ = EVar3;
      pUVar2 = (UPCGComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar4 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      pUVar2->bIsComponentLocal = true;
      pUVar2->GenerationGridSize = this->PCGGridSize;
      local_c8.Value = &local_d0;
      local_b8 = &local_d8;
      local_d8 = pUVar2;
      TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>_>
                ((TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                  *)&this->OriginalToLocal,&local_c8,(bool *)&local_c8.Value);
      local_c8.Value = &local_d8;
      local_b8 = &local_d0;
      TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>_>
                ((TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                  *)&this->LocalToOriginal,&local_c8,(bool *)&local_c8.Value);
      UPCGComponent::SetEditingMode
                (local_d8,local_d0->CurrentEditingMode,local_d0->CurrentEditingMode);
      UPCGComponent::SetPropertiesFromOriginal(local_d8,local_d0);
      UActorComponent::RegisterComponent((UActorComponent *)local_d8);
      AActor::AddInstanceComponent((AActor *)this,(UActorComponent *)local_d8);
    }
    else {
      UPCGComponent::SetEditingMode
                (local_d8,local_d0->CurrentEditingMode,local_d0->SerializedEditingMode);
      UPCGComponent::SetPropertiesFromOriginal(local_d8,local_d0);
      local_d8->bIsComponentLocal = true;
      local_d8->GenerationGridSize = this->PCGGridSize;
    }
  }
  return;
}

// BeginDestroy @ 149cacf40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::BeginDestroy(APCGPartitionActor *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *this_00;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  this_00 = UPCGSubsystem::GetInstance(pUVar1);
  if ((this_00 != (UPCGSubsystem *)0x0) && (this->bIsRegistered != false)) {
    UPCGSubsystem::UnregisterPartitionActor(this_00,this);
    this->bIsRegistered = false;
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 149cacfc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::BeginPlay(APCGPartitionActor *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FWeakObjectPtr local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  if ((this->bIsRuntimeGenerated == false) && ((this->_padding_ & 0x40) == 0)) {
    iVar12 = 0;
    iVar14 = 0;
    uVar6 = 1;
    puVar1 = &(this->OriginalToLocal).field_0x10;
    iVar3 = *(int *)&(this->OriginalToLocal).field_0x28;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->OriginalToLocal).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149cad08d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res10 = (int)lVar9;
      iVar7 = iVar14 + -1 + local_res10;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_149cad08d:
    uVar11 = *(uint *)&(this->OriginalToLocal).field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar6,iVar12);
    TStack_70.CurrentBitIndex = iVar7;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_70._28_4_ = iVar7;
    TStack_70.BaseBitIndex = iVar14;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->OriginalToLocal).field_0x8 -
                         *(int *)&(this->OriginalToLocal).field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(this->OriginalToLocal).field_0x28;
    if (uVar11 != uVar6) {
      puVar13 = *(undefined1 **)&(this->OriginalToLocal).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_149cad1a0;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      uVar11 = local_res18 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_149cad1a0:
    do {
      if (*(int *)&(this->OriginalToLocal).field_0x8 - *(int *)&(this->OriginalToLocal).field_0x34
          != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar11) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar9 = *(longlong *)&this->OriginalToLocal + (longlong)TStack_70.CurrentBitIndex * 0x18;
      local_res20.ObjectIndex =
           *(int *)(*(longlong *)&this->OriginalToLocal + (longlong)TStack_70.CurrentBitIndex * 0x18
                   );
      local_res20.ObjectSerialNumber = *(int *)(lVar9 + 4);
      pUVar8 = FWeakObjectPtr::Get(&local_res20);
      lVar9 = *(longlong *)(lVar9 + 8);
      if ((pUVar8 != (UObject *)0x0) && (lVar9 != 0)) {
        if ((pUVar8[0xe].field_0x10 != '\0') || (*(longlong *)(pUVar8 + 0x16) != -1)) {
          if (pUVar8[5].field_0x6 != '\x02') {
            *(undefined1 *)(lVar9 + 0xce) = 0;
            goto LAB_149cad260;
          }
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1959010596036804833>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGPartitionActor.cpp"
                             ,0xe1,"!OriginalComponent->IsManagedByRuntimeGenSystem()");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(undefined1 *)(lVar9 + 0xce) = pUVar8[5].field_0x6;
      }
LAB_149cad260:
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while( true );
  }
  AActor::BeginPlay((AActor *)this);
  return;
}

// CleanupDeadGraphInstances @ 149cb3ac0

void __thiscall APCGPartitionActor::CleanupDeadGraphInstances(APCGPartitionActor *this,bool param_1)

{
  CleanupDeadGraphInstancesInternal
            (this,false,(TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> *)0x0);
  return;
}

// CleanupDeadGraphInstancesInternal @ 149cb3ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
APCGPartitionActor::CleanupDeadGraphInstancesInternal
          (APCGPartitionActor *this,bool param_1,
          TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *pTVar1;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *pTVar2;
  ulonglong uVar3;
  longlong lVar4;
  TObjectPtr<UPCGComponent_const_>_u_0 TVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  TArray<TObjectPtr<UPCGComponent>,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *pTVar10;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar14;
  longlong lVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  TArray<TObjectPtr<UPCGComponent>,TSizedDefaultAllocator<32>_> *pTVar18;
  byte bVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  APCGPartitionActor *pAVar26;
  bool *pbVar27;
  uint uVar28;
  undefined8 *puVar29;
  uint uVar30;
  undefined1 *puVar31;
  uint *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  undefined1 auStackY_378 [32];
  bool local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  char local_344;
  undefined1 local_343 [3];
  APCGPartitionActor *local_340;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_330;
  undefined8 local_310;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *local_308;
  int iStack_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FWeakObjectPtr local_2d8 [2];
  longlong *local_2c8;
  undefined1 auStack_2c0 [16];
  uint uStack_2b0;
  int iStack_2ac;
  longlong local_2a8;
  TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
  *pTStack_2a0;
  TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
  *local_298;
  undefined2 local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_268;
  TObjectKey<UPCGComponent> local_248;
  int local_240;
  int local_23c;
  TObjectPtr<UPCGComponent> local_238;
  undefined8 local_230;
  TArray<TObjectPtr<UPCGComponent>,TSizedDefaultAllocator<32>_> *local_228;
  TObjectPtr<UPCGComponent_const_>_u_0 local_220;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  TArray<TObjectPtr<UPCGComponent>,TSizedDefaultAllocator<32>_> local_188;
  undefined1 local_178 [32];
  longlong local_158;
  TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
  *pTStack_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  undefined4 local_10c;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  undefined1 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  pTVar1 = &this->OriginalToLocal;
  local_78 = (undefined1 *)0x0;
  puVar33 = &(this->OriginalToLocal).field_0x10;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_348 = false;
  local_288._padding_._0_4_ = 0;
  local_288._padding_._4_4_ = 1;
  local_288.UnvisitedBitMask = 0xffffffff;
  local_288.CurrentBitIndex = 0;
  local_288.BaseBitIndex = 0;
  local_344 = param_1;
  local_340 = this;
  local_288.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  local_228 = (TArray<TObjectPtr<UPCGComponent>,TSizedDefaultAllocator<32>_> *)param_2;
  if (*(int *)&(this->OriginalToLocal).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
  }
  TStack_330._padding_ = CONCAT44(local_288._padding_._4_4_,(undefined4)local_288._padding_);
  TStack_330.CurrentBitIndex = local_288.CurrentBitIndex;
  TStack_330.UnvisitedBitMask = local_288.UnvisitedBitMask;
  TStack_330._28_4_ = local_288._28_4_;
  TStack_330.BaseBitIndex = local_288.BaseBitIndex;
  TStack_330.Array = local_288.Array;
  local_310 = CONCAT44(local_310._4_4_,
                       *(int *)&(this->OriginalToLocal).field_0x8 -
                       *(int *)&(this->OriginalToLocal).field_0x34);
  TStack_210.Array = local_288.Array;
  uStack_1f0 = local_310;
  local_338 = (TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
               *)pTVar1;
  local_218 = pTVar1;
  TStack_210._padding_ = TStack_330._padding_;
  TStack_210._16_8_ = TStack_330._16_8_;
  TStack_210._24_8_ = TStack_330._24_8_;
  pTVar14 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_148,(TBitArray<FDefaultBitArrayAllocator> *)puVar33,
                       *(int *)&(this->OriginalToLocal).field_0x28);
  TStack_330._padding_ = pTVar14->_padding_;
  pTVar7 = pTVar14->Array;
  uVar8._0_4_ = pTVar14->UnvisitedBitMask;
  uVar8._4_4_ = pTVar14->CurrentBitIndex;
  TStack_330.BaseBitIndex = pTVar14->BaseBitIndex;
  TStack_330._28_4_ = *(undefined4 *)&pTVar14->field_0x1c;
  TStack_330.Array = pTVar7;
  TStack_330._16_8_ = uVar8;
  while( true ) {
    pTVar10 = local_218;
    if (*(int *)(&local_218->field_0x0 + 8) - *(int *)(&local_218->field_0x0 + 0x34) !=
        (int)uStack_1f0) {
      local_347 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_347);
    }
    if (((TStack_210.CurrentBitIndex == uVar8._4_4_) && (TStack_210.Array == pTVar7)) &&
       (pTVar10 == pTVar1)) break;
    lVar4 = *(longlong *)&pTVar10->field_0x0;
    if (*(longlong *)(lVar4 + 8 + (longlong)TStack_210.CurrentBitIndex * 0x18) == 0) {
      TSet<TObjectKey<UPCGComponent>,DefaultKeyFuncs<TObjectKey<UPCGComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectKey<UPCGComponent>_const_&>
                ((TSet<TObjectKey<UPCGComponent>,DefaultKeyFuncs<TObjectKey<UPCGComponent>,0>,FDefaultSetAllocator>
                  *)local_98,&local_248,
                 (bool *)(lVar4 + (longlong)TStack_210.CurrentBitIndex * 0x18));
    }
    TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
  }
  pAVar26 = local_340;
  if ((local_98._8_4_ != local_64) && (local_348 = true, !param_1)) {
    local_268._padding_._4_4_ = 1;
    local_268._padding_._0_4_ = 0;
    local_268.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_268.CurrentBitIndex = 0;
    local_268.BaseBitIndex = 0;
    local_268.UnvisitedBitMask = 0xffffffff;
    if (local_70 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_268);
    }
    uVar28 = local_70;
    TStack_330._padding_ = CONCAT44(local_268._padding_._4_4_,(undefined4)local_268._padding_);
    local_338 = (TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                 *)local_98;
    TStack_330.CurrentBitIndex = local_268.CurrentBitIndex;
    TStack_330.UnvisitedBitMask = local_268.UnvisitedBitMask;
    TStack_330._28_4_ = local_268._28_4_;
    TStack_330.BaseBitIndex = local_268.BaseBitIndex;
    TStack_330.Array = local_268.Array;
    local_310 = CONCAT44(local_310._4_4_,local_98._8_4_ - local_64);
    iVar24 = (int)local_70 >> 5;
    uVar34 = local_70 & 0xffffffe0;
    bVar19 = (byte)local_70;
    TStack_1e0.Array = local_268.Array;
    uStack_1c0 = local_310;
    local_1e8 = local_338;
    TStack_1e0._padding_ = TStack_330._padding_;
    TStack_1e0._16_8_ = TStack_330._16_8_;
    TStack_1e0._24_8_ = TStack_330._24_8_;
    if (((int)local_70 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    if (uVar28 != local_70) {
      puVar33 = local_98 + 0x10;
      if (local_78 != (undefined1 *)0x0) {
        puVar33 = local_78;
      }
      uVar28 = -1 << (bVar19 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar24 * 4);
      while (uVar28 == 0) {
        iVar24 = iVar24 + 1;
        uVar34 = uVar34 + 0x20;
        uVar28 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar24)
        goto LAB_149cb3df0;
        uVar28 = *(uint *)(puVar33 + (longlong)iVar24 * 4);
      }
      uVar3 = (ulonglong)(~(uVar28 - 1) & uVar28) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_248.ObjectKey.ObjectSerialNumber = (int)lVar4;
      uVar28 = (uVar34 - 1) + local_248.ObjectKey.ObjectSerialNumber;
      if ((int)local_70 < (int)uVar28) {
        uVar28 = local_70;
      }
    }
LAB_149cb3df0:
    while( true ) {
      pTVar2 = local_1e8;
      if (*(int *)(&local_1e8->field_0x0 + 8) - *(int *)(&local_1e8->field_0x0 + 0x34) !=
          (int)uStack_1c0) {
        local_346 = 0;
        `TSparseArray<TSparseSetElement<TObjectKey<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_346);
      }
      pAVar26 = local_340;
      if (((TStack_1e0.CurrentBitIndex == uVar28) &&
          (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (pTVar2 == (TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                     *)local_98)) break;
      piVar21 = (int *)((longlong)TStack_1e0.CurrentBitIndex * 0x10 +
                       *(longlong *)&pTVar2->field_0x0);
      if (*(int *)&(this->OriginalToLocal).field_0x8 != *(int *)&(this->OriginalToLocal).field_0x34)
      {
        uVar34 = piVar21[1];
        iVar24 = *piVar21;
        uVar22 = iVar24 - uVar34 ^ uVar34 >> 0xd;
        uVar20 = (-0x61c88647 - uVar22) - uVar34 ^ uVar22 << 8;
        uVar30 = (uVar34 - uVar22) - uVar20 ^ uVar20 >> 0xd;
        uVar22 = (uVar22 - uVar30) - uVar20 ^ uVar30 >> 0xc;
        uVar20 = (uVar20 - uVar22) - uVar30 ^ uVar22 << 0x10;
        uVar30 = (uVar30 - uVar20) - uVar22 ^ uVar20 >> 5;
        uVar22 = (uVar22 - uVar30) - uVar20 ^ uVar30 >> 3;
        uVar20 = (uVar20 - uVar22) - uVar30 ^ uVar22 << 10;
        puVar33 = *(undefined1 **)&(this->OriginalToLocal).field_0x40;
        puVar23 = &(this->OriginalToLocal).field_0x38;
        if (puVar33 != (undefined1 *)0x0) {
          puVar23 = puVar33;
        }
        iVar25 = *(int *)(puVar23 +
                         ((longlong)*(int *)&(this->OriginalToLocal).field_0x48 - 1U &
                         (longlong)(int)((uVar30 - uVar20) - uVar22 ^ uVar20 >> 0xf)) * 4);
        if (iVar25 != -1) {
          lVar4 = *(longlong *)&pTVar1->field_0x0;
          do {
            lVar15 = (longlong)iVar25;
            if ((*(int *)(lVar4 + lVar15 * 0x18) == iVar24) &&
               (*(uint *)(lVar4 + 4 + lVar15 * 0x18) == uVar34)) {
              TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                               *)pTVar1,iVar25);
              break;
            }
            iVar25 = *(int *)(lVar4 + 0x10 + lVar15 * 0x18);
          } while (iVar25 != -1);
        }
      }
      TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    }
    local_230 = 0;
    TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
    ::Remove((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
              *)&local_340->LocalToOriginal,(TObjectPtr<UPCGComponent_const_>)&local_230);
  }
  uStack_2ec = 0;
  local_bc = 0x80;
  pTVar2 = &pAVar26->LocalToOriginal;
  local_e8._0_8_ = 0;
  uStack_2fc = 1;
  local_e8._8_8_ = 0;
  puVar33 = &(pAVar26->LocalToOriginal).field_0x10;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  iStack_300 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  uVar34 = *(uint *)&(pAVar26->LocalToOriginal).field_0x28;
  iVar24 = 0;
  local_2e8 = uStack_2ec;
  if (uVar34 != 0) {
    puVar32 = *(uint **)&(pAVar26->LocalToOriginal).field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)puVar33;
    }
    uVar28 = *puVar32;
    while (uVar28 == 0) {
      iStack_300 = iStack_300 + 1;
      local_2e8 = local_2e8 + 0x20;
      uStack_2ec = uVar34;
      if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_300)
      goto LAB_149cb403f;
      uVar28 = puVar32[iStack_300];
    }
    uStack_2fc = ~(uVar28 - 1) & uVar28;
    uVar3 = (ulonglong)uStack_2fc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_240 = (int)lVar4;
    uStack_2ec = (local_2e8 - 1) + local_240;
    if ((int)uVar34 < (int)uStack_2ec) {
      uStack_2ec = uVar34;
    }
LAB_149cb403f:
    iVar24 = *(int *)&(pAVar26->LocalToOriginal).field_0x28;
  }
  uVar34 = *(uint *)&(pAVar26->LocalToOriginal).field_0x28;
  uStack_2e4 = local_10c;
  uVar28 = uVar34 & 0xffffffe0;
  iStack_2e0 = *(int *)&(pAVar26->LocalToOriginal).field_0x8 -
               *(int *)&(pAVar26->LocalToOriginal).field_0x34;
  TStack_1b0._padding_ = CONCAT44(uStack_2fc,iStack_300);
  uStack_2f0 = 0xffffffff;
  TStack_1b0.CurrentBitIndex = uStack_2ec;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar34 >> 5;
  TStack_1b0._28_4_ = local_10c;
  TStack_1b0.BaseBitIndex = local_2e8;
  uStack_190 = CONCAT44(uStack_2dc,iStack_2e0);
  local_308 = pTVar2;
  local_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  local_1b8 = pTVar2;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar33;
  if ((((int)uVar34 < 0) || (iVar24 < (int)uVar34)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  uVar20 = *(uint *)&(pAVar26->LocalToOriginal).field_0x28;
  if (uVar34 != uVar20) {
    puVar23 = *(undefined1 **)&(pAVar26->LocalToOriginal).field_0x20;
    puVar31 = puVar33;
    if (puVar23 != (undefined1 *)0x0) {
      puVar31 = puVar23;
    }
    uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar25 * 4);
    while (uVar34 == 0) {
      iVar25 = iVar25 + 1;
      uVar28 = uVar28 + 0x20;
      uVar34 = uVar20;
      if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar25)
      goto LAB_149cb4150;
      uVar34 = *(uint *)(puVar31 + (longlong)iVar25 * 4);
    }
    uVar3 = (ulonglong)(~(uVar34 - 1) & uVar34) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_23c = (int)lVar4;
    uVar34 = (uVar28 - 1) + local_23c;
    if ((int)uVar20 < (int)uVar34) {
      uVar34 = uVar20;
    }
  }
LAB_149cb4150:
  do {
    pTVar11 = local_1b8;
    if (*(int *)(&local_1b8->field_0x0 + 8) - *(int *)(&local_1b8->field_0x0 + 0x34) !=
        (int)uStack_190) {
      local_345 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_345);
    }
    uVar28 = local_c0;
    pTVar9 = local_228;
    if (((TStack_1b0.CurrentBitIndex == uVar34) &&
        (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar33)) &&
       (pTVar11 == pTVar2)) break;
    pbVar27 = (bool *)(*(longlong *)&pTVar11->field_0x0 +
                      (longlong)TStack_1b0.CurrentBitIndex * 0x38);
    if ((*(longlong *)pbVar27 != 0) && ((*(uint *)(*(longlong *)pbVar27 + 8) >> 0x1e & 1) == 0)) {
      pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)(pbVar27 + 8));
      if (pUVar16 != (UObject *)0x0) {
        pUVar17 = Z_Construct_UClass_UPCGComponent_NoRegister();
        iVar24 = (int)pUVar17->_padding_;
        if ((iVar24 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar24 * 8) ==
            &pUVar17->_padding_)) goto LAB_149cb41f7;
      }
      TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UPCGComponent>_const_&>
                ((TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                  *)local_e8,&local_238,pbVar27);
    }
LAB_149cb41f7:
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
  } while( true );
  if (local_e8._8_4_ != local_b4) {
    local_348 = true;
    if (local_344 == '\0') {
      iStack_300 = 0;
      local_2e8 = 0;
      iVar24 = 1;
      uStack_2ec = 0;
      uStack_2fc = 1;
      if (local_c0 != 0) {
        puVar32 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar32 = local_c8;
        }
        uStack_2fc = *puVar32;
        while (uStack_2fc == 0) {
          iStack_300 = iStack_300 + 1;
          local_2e8 = local_2e8 + 0x20;
          uStack_2ec = local_c0;
          uStack_2fc = 1;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_300)
          goto LAB_149cb436f;
          uStack_2fc = puVar32[iStack_300];
        }
        uStack_2fc = -uStack_2fc & uStack_2fc;
        uVar3 = (ulonglong)uStack_2fc * 2 + 1;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_238.field0_0x0._4_4_ = (undefined4)lVar4;
        uStack_2ec = (local_2e8 - 1) + local_238.field0_0x0._4_4_;
        if ((int)local_c0 < (int)uStack_2ec) {
          uStack_2ec = local_c0;
        }
      }
LAB_149cb436f:
      iStack_2e0 = local_e8._8_4_ - local_b4;
      local_338 = (TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                   *)local_e8;
      TStack_330.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      uVar34 = local_c0 & 0xffffffe0;
      uStack_2f0 = 0xffffffff;
      TStack_330.CurrentBitIndex = uStack_2ec;
      TStack_330.UnvisitedBitMask = 0xffffffff;
      TStack_330._padding_ = CONCAT44(uStack_2fc,iStack_300);
      uStack_2e4 = local_ec;
      iVar25 = (int)local_c0 >> 5;
      TStack_330._28_4_ = local_ec;
      TStack_330.BaseBitIndex = local_2e8;
      local_310 = CONCAT44(uStack_2dc,iStack_2e0);
      bVar19 = (byte)local_c0;
      local_308 = local_338;
      local_2f8 = TStack_330.Array;
      if (((int)local_c0 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      pAVar26 = local_340;
      if (uVar28 != local_c0) {
        puVar32 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar32 = local_c8;
        }
        uVar28 = -1 << (bVar19 & 0x1f) & puVar32[iVar25];
        while (uVar28 == 0) {
          iVar25 = iVar25 + 1;
          uVar34 = uVar34 + 0x20;
          uVar28 = local_c0;
          if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar25)
          goto LAB_149cb4481;
          uVar28 = puVar32[iVar25];
        }
        uVar3 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar28 = (uVar34 - 1) + (int)lVar4;
        if ((int)local_c0 < (int)uVar28) {
          uVar28 = local_c0;
        }
      }
LAB_149cb4481:
      while( true ) {
        pTVar2 = local_338;
        if (*(int *)(&local_338->field_0x0 + 8) - *(int *)(&local_338->field_0x0 + 0x34) !=
            (int)local_310) {
          `TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_343);
        }
        if (((TStack_330.CurrentBitIndex == uVar28) &&
            (TStack_330.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
           (pTVar2 == (TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                       *)local_e8)) break;
        puVar29 = (undefined8 *)
                  ((longlong)TStack_330.CurrentBitIndex * 0x10 + *(longlong *)&pTVar2->field_0x0);
        TVar5.DebugPtr = (UPCGComponent *)*puVar29;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UPCGComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        local_220.DebugPtr = TVar5.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UPCGComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        if (*(int *)&(pAVar26->LocalToOriginal).field_0x8 !=
            *(int *)&(pAVar26->LocalToOriginal).field_0x34) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar5.DebugPtr != (UPCGComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
          }
          uVar34 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
          uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
          TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TObjectPtr<UPCGComponent_const_>_>
                    ((TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                      *)&pAVar26->LocalToOriginal,uVar34 >> 0x10 ^ uVar34,
                     (TObjectPtr<UPCGComponent_const_> *)&local_220.ObjectPtr);
        }
        if ((UPCGComponent *)*puVar29 != (UPCGComponent *)0x0) {
          UPCGComponent::CleanupLocalImmediate((UPCGComponent *)*puVar29,true,false);
          (**(code **)(*(longlong *)*puVar29 + 0x4a0))((longlong *)*puVar29,0);
        }
        TStack_330.UnvisitedBitMask = TStack_330.UnvisitedBitMask & ~TStack_330._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_330);
      }
      pTVar1 = &pAVar26->OriginalToLocal;
      TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_178,
                 (TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                  *)pTVar1);
      local_290 = 0;
      stack0xfffffffffffffd48 = local_178._16_16_;
      local_2c8 = (longlong *)local_178._0_8_;
      auStack_2c0._0_8_ = local_178._8_8_;
      local_2a8 = local_158;
      pTStack_2a0 = pTStack_150;
      iVar25 = local_178._28_4_;
      local_298 = (TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                   *)pTVar1;
      if (iVar25 < *(int *)(local_178._16_8_ + 0x18)) {
        do {
          local_2d8[0].ObjectIndex = *(int *)(*local_2c8 + (longlong)iVar25 * 0x18);
          local_2d8[0].ObjectSerialNumber = *(int *)(*local_2c8 + 4 + (longlong)iVar25 * 0x18);
          pUVar16 = FWeakObjectPtr::Get(local_2d8);
          if (pUVar16 == (UObject *)0x0) {
            TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_2a0,iVar25);
            local_290 = CONCAT11(local_290._1_1_,1);
          }
          uStack_2b0 = uStack_2b0 & ~auStack_2c0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2c0);
          iVar25 = iStack_2ac;
        } while (iStack_2ac < *(int *)(auStack_2c0._8_8_ + 0x18));
        if (((char)local_290 != '\0') && (local_290._1_1_ != '\0')) {
          uVar34 = *(int *)&(local_298->Elements).field_0x8 -
                   *(int *)&(local_298->Elements).field_0x34;
          if (3 < uVar34) {
            uVar3 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar24 = 1 << ((byte)lVar4 & 0x1f);
          }
          if (((0 < (int)uVar34) && (local_298->HashSize < iVar24)) ||
             (iVar24 < local_298->HashSize)) {
            local_298->HashSize = iVar24;
            TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
            ::Rehash(local_298);
          }
        }
      }
    }
    else if (local_228 != (TArray<TObjectPtr<UPCGComponent>,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar18 = TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                ::Array((TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                         *)local_e8,&local_188);
      if ((pTVar9 == pTVar18) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x986,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar24 = pTVar18->ArrayNum;
      if (iVar24 != 0) {
        iVar25 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar24,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        RelocateConstructItems<UPCGComponent_*,TObjectPtr<UPCGComponent>,int>
                  ((pTVar9->AllocatorInstance).Data + (longlong)iVar25 * 8,
                   (TObjectPtr<UPCGComponent> *)(pTVar18->AllocatorInstance).Data,iVar24);
        pTVar18->ArrayNum = 0;
      }
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TObjectKey<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectKey<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectKey<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return local_348;
}

// EndPlay @ 149cbe9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::EndPlay(APCGPartitionActor *this,Type param_1)

{
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *this_00;
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  code *pcVar2;
  UPCGComponent *pUVar3;
  longlong *plVar4;
  bool bVar5;
  UWorld *pUVar6;
  UPCGSubsystem *this_02;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  UPCGComponent *local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FWeakObjectPtr local_138;
  UPCGComponent *local_130;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  undefined1 local_f4 [20];
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  UPCGComponent **local_b0;
  UPCGComponent **local_a8;
  undefined1 local_98 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_60;
  int local_50 [2];
  ulonglong local_48;
  
  this_01 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->bIsRuntimeGenerated != false) {
    uVar11 = 0;
    local_98._8_4_ = 0;
    this_00 = &this->OriginalToLocal;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_50[0] = 0;
    if ((TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
         *)local_98 != this_00) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                (&local_60,local_50,
                 (ForElementType<FSetElementId> *)&(this->OriginalToLocal).field_0x38,
                 *(int *)&(this->OriginalToLocal).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,
                  (TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00);
    }
    uVar13 = local_70;
    uStack_11c = 1;
    local_108 = 0;
    uStack_10c = local_108;
    if (local_70 != 0) {
      pTVar10 = this_01;
      if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_78;
      }
      uVar12 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      uVar11 = 0;
      local_108 = 0;
      while (uVar12 == 0) {
        lVar8 = (longlong)(int)uVar11;
        local_108 = local_108 + 0x20;
        uVar11 = uVar11 + 1;
        uStack_10c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
        goto LAB_149cbeaef;
        uVar12 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar8 * 4);
      }
      uStack_11c = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_11c * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_f8 = (int)lVar8;
      uStack_10c = local_f8 + -1 + local_108;
      if ((int)local_70 < (int)uStack_10c) {
        uStack_10c = local_70;
      }
    }
LAB_149cbeaef:
    iStack_100 = local_98._8_4_ - local_64;
    local_128 = (longlong *)local_98;
    uStack_110 = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_10c;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    uVar12 = local_70 & 0xffffffe0;
    TStack_d8._padding_ = CONCAT44(uStack_11c,uVar11);
    iVar9 = (int)local_70 >> 5;
    TStack_d8._28_4_ = uStack_10c;
    TStack_d8.BaseBitIndex = local_108;
    uStack_b8 = CONCAT44(uStack_fc,iStack_100);
    bVar7 = (byte)local_70;
    uStack_120 = uVar11;
    local_118 = this_01;
    uStack_104 = uStack_10c;
    local_e0 = local_128;
    TStack_d8.Array = this_01;
    if (((int)local_70 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar13 != local_70) {
      pTVar10 = this_01;
      if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_78;
      }
      uVar11 = -1 << (bVar7 & 0x1f) &
               *(uint *)((pTVar10->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar9;
        uVar12 = uVar12 + 0x20;
        iVar9 = iVar9 + 1;
        uVar13 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_149cbec00;
        uVar11 = *(uint *)((pTVar10->AllocatorInstance).InlineData + 4 + lVar8 * 4);
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar13 = (int)lVar8 + -1 + uVar12;
      if ((int)local_70 < (int)uVar13) {
        uVar13 = local_70;
      }
    }
LAB_149cbec00:
    while( true ) {
      plVar4 = local_e0;
      if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
        `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
      }
      if (((TStack_d8.CurrentBitIndex == uVar13) && (TStack_d8.Array == this_01)) &&
         (plVar4 == (longlong *)local_98)) break;
      lVar8 = *plVar4;
      local_138.ObjectIndex = *(int *)(lVar8 + (longlong)TStack_d8.CurrentBitIndex * 0x18);
      local_138.ObjectSerialNumber =
           *(int *)(lVar8 + (longlong)TStack_d8.CurrentBitIndex * 0x18 + 4);
      local_130 = (UPCGComponent *)FWeakObjectPtr::Get(&local_138,true);
      local_150 = GetLocalComponent(this,local_130,true);
      pUVar3 = local_130;
      if (local_150 == (UPCGComponent *)0x0) {
        CleanupDeadGraphInstancesInternal
                  (this,false,(TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> *)0x0);
      }
      else {
        local_140.ObjectIndex = 0;
        local_140.ObjectSerialNumber = 0;
        if (local_130 != (UPCGComponent *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)local_130);
          }
          local_148.ObjectIndex = 0;
          local_148.ObjectSerialNumber = 0;
          local_f4._4_8_ = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar3 != (UPCGComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FWeakObjectPtr::operator=(&local_148,(FObjectPtr)((longlong)local_f4 + 4));
          local_140 = local_148;
        }
        TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
        ::Remove((TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
                  *)this_00,(TObjectKey<UPCGComponent> *)&local_140);
        local_f4._12_8_ = local_150;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_150 != (UPCGComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_150);
        }
        TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
        ::Remove((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                  *)&this->LocalToOriginal,
                 (TObjectPtr<UPCGComponent_const_>)((longlong)local_f4 + 0xc));
        UPCGComponent::CleanupLocalImmediate(local_150,true,false);
        if ((local_150->CurrentEditingMode == Preview) &&
           (local_150->SerializedEditingMode == LoadAsPreview)) {
          UActorComponent::UnregisterComponent((UActorComponent *)local_150);
          local_b0 = &local_150;
          local_a8 = &local_130;
          TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>_>
                    ((TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                      *)&this->LoadedPreviewComponents,
                     (TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&> *)local_f4,
                     (bool *)&local_b0);
        }
        else {
          (**(code **)(local_150->_padding_ + 0x4a0))();
        }
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    local_50[0] = 0;
    if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
    iVar9 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(this_01,0);
    }
    if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  pUVar6 = AActor::GetWorld((AActor *)this);
  this_02 = UPCGSubsystem::GetInstance(pUVar6);
  if ((this_02 != (UPCGSubsystem *)0x0) && (this->bIsRegistered != false)) {
    UPCGSubsystem::UnregisterPartitionActor(this_02,this);
    this->bIsRegistered = false;
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetActorBounds @ 149cc5d80

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
APCGPartitionActor::GetActorBounds
          (APCGPartitionActor *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  AActor::GetActorBounds((AActor *)this,param_1,param_2,param_3,param_4);
  dVar8 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar10 = (param_2->field0_0x0)._s_0.Z;
  lVar2 = this->_padding_;
  dVar3 = (param_3->field0_0x0)._s_0.X + dVar8;
  dVar4 = (param_3->field0_0x0)._s_0.Y + dVar1;
  dVar9 = (param_3->field0_0x0)._s_0.Z + dVar10;
  dVar8 = dVar8 - (param_3->field0_0x0)._s_0.X;
  dVar1 = dVar1 - (param_3->field0_0x0)._s_0.Y;
  dVar10 = dVar10 - (param_3->field0_0x0)._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (lVar2 != 0) {
    uVar6 = *(double *)(lVar2 + 0x220);
    uVar13 = *(undefined4 *)(lVar2 + 0x210);
    uVar14 = *(undefined4 *)(lVar2 + 0x214);
    uVar15 = *(undefined4 *)(lVar2 + 0x218);
    uVar16 = *(undefined4 *)(lVar2 + 0x21c);
  }
  dVar12 = (double)this->PCGGridSize * __real_3fe0000000000000;
  dVar5 = dVar12;
  if (this->bUse2DGrid != false) {
    dVar5 = __real_428ffffffffff800;
  }
  dVar11 = (double)CONCAT44(uVar14,uVar13) - dVar12;
  dVar7 = (double)uVar6 - dVar5;
  if (dVar10 <= (double)uVar6 - dVar5) {
    dVar7 = dVar10;
  }
  dVar10 = dVar5 + (double)uVar6;
  if (dVar5 + (double)uVar6 <= dVar9) {
    dVar10 = dVar9;
  }
  if (dVar8 <= dVar11) {
    dVar11 = dVar8;
  }
  dVar8 = (double)CONCAT44(uVar14,uVar13) + dVar12;
  dVar9 = (double)CONCAT44(uVar16,uVar15) + dVar12;
  dVar12 = (double)CONCAT44(uVar16,uVar15) - dVar12;
  if (dVar8 <= dVar3) {
    dVar8 = dVar3;
  }
  if (dVar9 <= dVar4) {
    dVar9 = dVar4;
  }
  if (dVar1 <= dVar12) {
    dVar12 = dVar1;
  }
  dVar1 = (dVar10 - dVar7) * __real_3fe0000000000000;
  dVar8 = (dVar8 - dVar11) * __real_3fe0000000000000;
  dVar10 = (dVar9 - dVar12) * __real_3fe0000000000000;
  (param_3->field0_0x0)._s_0.X = dVar8;
  (param_3->field0_0x0)._s_0.Y = dVar10;
  (param_3->field0_0x0)._s_0.Z = dVar1;
  (param_2->field0_0x0)._s_0.X = dVar11 + dVar8;
  (param_2->field0_0x0)._s_0.Y = dVar12 + dVar10;
  (param_2->field0_0x0)._s_0.Z = dVar7 + dVar1;
  return;
}

// GetAllLocalPCGComponents @ 149cc6110

TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator> *
__thiscall
APCGPartitionActor::GetAllLocalPCGComponents
          (APCGPartitionActor *this,
          TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  ::GetKeys<DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
            ((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
              *)&this->LocalToOriginal,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAllOriginalPCGComponents @ 149cc6160

TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator> *
__thiscall
APCGPartitionActor::GetAllOriginalPCGComponents
          (APCGPartitionActor *this,
          TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 *puVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *pTVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  UObject *pUVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  ForElementType<FSetElementId> FVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 *this_00;
  undefined8 *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18;
  TBitArray<FDefaultBitArrayAllocator> *local_res20;
  int local_108;
  uint uStack_104;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  int iStack_c0;
  undefined4 uStack_bc;
  FWeakObjectPtr local_b8;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *local_b0;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FSparseArrayAllocationInfo local_78 [2];
  undefined4 local_4c;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  uVar21 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  uVar8 = 1;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->OriginalToLocal).field_0x10;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  local_b0 = &this->OriginalToLocal;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  TStack_e0.BaseBitIndex = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar15 = *(uint *)&(this->OriginalToLocal).field_0x28;
  TStack_e0.CurrentBitIndex = uVar21;
  if (uVar15 != 0) {
    puVar25 = *(uint **)&(this->OriginalToLocal).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)pTVar26;
    }
    uVar9 = *puVar25;
    TStack_e0.BaseBitIndex = 0;
    uVar21 = 0;
    while (uVar9 == 0) {
      lVar16 = (longlong)(int)uVar21;
      TStack_e0.BaseBitIndex = TStack_e0.BaseBitIndex + 0x20;
      uVar21 = uVar21 + 1;
      TStack_e0.CurrentBitIndex = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
      goto LAB_149cc623f;
      uVar9 = puVar25[lVar16 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar18 = (ulonglong)uVar8 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res18 = (int)lVar16;
    TStack_e0.CurrentBitIndex = local_res18 + -1 + TStack_e0.BaseBitIndex;
    if ((int)uVar15 < TStack_e0.CurrentBitIndex) {
      TStack_e0.CurrentBitIndex = uVar15;
    }
  }
LAB_149cc623f:
  iStack_c0 = *(int *)&(this->OriginalToLocal).field_0x8 -
              *(int *)&(this->OriginalToLocal).field_0x34;
  uVar9 = *(uint *)&(this->OriginalToLocal).field_0x28;
  TStack_e0._padding_ = CONCAT44(uVar8,uVar21);
  uVar21 = uVar9 & 0xffffffe0;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = local_4c;
  TStack_a0._padding_ = TStack_e0._padding_;
  iVar19 = (int)uVar9 >> 5;
  uStack_80 = CONCAT44(uStack_bc,iStack_c0);
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0.BaseBitIndex = TStack_e0.BaseBitIndex;
  TStack_a0._28_4_ = local_4c;
  local_res20 = pTVar26;
  TStack_e0.Array = pTVar26;
  local_a8 = local_b0;
  TStack_a0.Array = pTVar26;
  TStack_a0.CurrentBitIndex = TStack_e0.CurrentBitIndex;
  if ((((int)uVar9 < 0) || ((int)uVar15 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
               *)(*pcVar4)();
    return pTVar11;
  }
  uVar15 = *(uint *)&(this->OriginalToLocal).field_0x28;
  if (uVar9 != uVar15) {
    puVar22 = *(undefined1 **)&(this->OriginalToLocal).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = (undefined1 *)pTVar26;
    }
    uVar8 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar8 == 0) {
      lVar16 = (longlong)iVar19;
      uVar21 = uVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar9 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_149cc6350;
      uVar8 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar9 = (int)lVar16 + -1 + uVar21;
    if ((int)uVar15 < (int)uVar9) {
      uVar9 = uVar15;
    }
  }
LAB_149cc6350:
  do {
    pTVar5 = local_a8;
    puVar22 = &(__return_storage_ptr__->Elements).field_0x8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar9) && (TStack_a0.Array == pTVar26)) &&
       (pTVar5 == local_b0)) {
      return __return_storage_ptr__;
    }
    lVar16 = *(longlong *)pTVar5;
    local_b8.ObjectIndex = *(int *)(lVar16 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
    local_b8.ObjectSerialNumber = *(int *)(lVar16 + (longlong)TStack_a0.CurrentBitIndex * 0x18 + 4);
    pUVar12 = FWeakObjectPtr::Get(&local_b8);
    if (pUVar12 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      iVar19 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar19 == 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar22,
                            (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar19 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar2 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar2 != (undefined1 *)0x0) {
          this_00 = puVar2;
        }
        bVar14 = (byte)iVar19 & 0x1f;
        if (iVar19 < 0) {
          iVar19 = iVar19 + 0x1f;
          bVar14 = bVar14 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar19 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar19 >> 5) * 4) & ~(1 << (bVar14 & 0x1f));
      }
      else {
        iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        lVar16 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar1 = *(int *)(lVar16 + 4 + (longlong)iVar10 * 0x10);
        iVar19 = iVar19 + -1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar1;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar19;
        if (iVar19 != 0) {
          *(undefined4 *)(lVar16 + (longlong)iVar1 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,local_78,iVar10);
      pvVar6 = local_78[0].Pointer;
      if (local_78[0].Pointer != (TSparseSetElement<TObjectPtr<UPCGComponent>_> *)0x0) {
        *(UObject **)local_78[0].Pointer = pUVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        *(undefined4 *)((longlong)pvVar6 + 8) = 0xffffffff;
      }
      pUVar12 = *(UObject **)pvVar6;
      local_res10[0] = local_78[0].Index;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      uVar15 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar12 >> 4)) *
               -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      uVar15 = uVar15 >> 0x10 ^ uVar15;
      bVar7 = TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
              ::TryReplaceExisting(__return_storage_ptr__,uVar15,pvVar6,local_res10,(bool *)0x0);
      if (!bVar7) {
        uVar8 = 1;
        uVar21 = *(int *)puVar22 - *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (3 < uVar21) {
          uVar18 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar8 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((int)uVar21 < 1) || ((int)uVar8 <= __return_storage_ptr__->HashSize)) {
          uVar15 = __return_storage_ptr__->HashSize - 1U & uVar15;
          *(uint *)((longlong)pvVar6 + 0xc) = uVar15;
          FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar17 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar17 = FVar3;
          }
          uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar15;
          *(undefined4 *)((longlong)pvVar6 + 8) = *(undefined4 *)((longlong)FVar17 + uVar18 * 4);
          *(int *)((longlong)FVar17 + uVar18 * 4) = local_res10[0];
        }
        else {
          __return_storage_ptr__->HashSize = uVar8;
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
          }
          if (uVar8 != 0) {
            uVar15 = uVar8;
            if (uVar8 < 2) {
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar15 = 0;
                goto LAB_149cc6566;
              }
            }
            else {
LAB_149cc6566:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar15
                         ,4);
            }
            if (0 < (int)uVar8) {
              uVar23 = (ulonglong)uVar8;
              uVar18 = 0;
              do {
                FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar17 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar17 = FVar3;
                }
                uVar13 = uVar18 & (longlong)(int)uVar8 - 1U;
                uVar18 = uVar18 + 1;
                *(undefined4 *)((longlong)FVar17 + uVar13 * 4) = 0xffffffff;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
          }
          pTVar26 = local_res20;
          if (__return_storage_ptr__->HashSize != 0) {
            uVar15 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
            TStack_e0.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 &(__return_storage_ptr__->Elements).field_0x10;
            uStack_104 = 1;
            local_108 = 0;
            uStack_f4 = 0;
            iStack_f0 = 0;
            if (uVar15 != 0) {
              puVar25 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar24 = (uint *)TStack_e0.Array;
              if (puVar25 != (uint *)0x0) {
                puVar24 = puVar25;
              }
              uVar21 = *puVar24;
              iStack_f0 = 0;
              local_108 = 0;
              while (uVar21 == 0) {
                iStack_f0 = iStack_f0 + 0x20;
                lVar16 = (longlong)local_108;
                local_108 = local_108 + 1;
                if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < local_108)
                goto LAB_149cc666e;
                uVar21 = puVar24[lVar16 + 1];
              }
              uStack_104 = -uVar21 & uVar21;
              uVar18 = (ulonglong)uStack_104 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uStack_f4 = (int)lVar16 + -1 + iStack_f0;
              if ((int)uVar15 < (int)uStack_f4) {
LAB_149cc666e:
                TStack_e0._padding_ = CONCAT44(uStack_104,local_108);
                TStack_e0.UnvisitedBitMask = 0xffffffff;
                TStack_e0._28_4_ = uStack_ec;
                TStack_e0.BaseBitIndex = iStack_f0;
                TStack_e0.CurrentBitIndex = uVar15;
                goto LAB_149cc6693;
              }
            }
            TStack_e0._padding_ = CONCAT44(uStack_104,local_108);
            TStack_e0.UnvisitedBitMask = 0xffffffff;
            TStack_e0.CurrentBitIndex = uStack_f4;
            TStack_e0._28_4_ = uStack_ec;
            TStack_e0.BaseBitIndex = iStack_f0;
            if ((int)uStack_f4 < (int)uVar15) {
              do {
                iVar19 = TStack_e0.CurrentBitIndex;
                puVar20 = (undefined8 *)
                          ((longlong)TStack_e0.CurrentBitIndex * 0x10 +
                          *(longlong *)&__return_storage_ptr__->Elements);
                pUVar12 = (UObject *)*puVar20;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar12 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar12);
                }
                uVar15 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pUVar12 >> 4)) * -0x7a143595;
                uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                uVar15 = (uVar15 >> 0x10 ^ uVar15) & __return_storage_ptr__->HashSize - 1U;
                *(uint *)((longlong)puVar20 + 0xc) = uVar15;
                FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar17 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar17 = FVar3;
                }
                uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar15;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)((longlong)FVar17 + uVar18 * 4);
                *(int *)((longlong)FVar17 + uVar18 * 4) = iVar19;
                TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
                pTVar26 = local_res20;
              } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
            }
          }
        }
      }
    }
LAB_149cc6693:
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// GetFixedBounds @ 149cc7ca0

TBox<double> * __thiscall
APCGPartitionActor::GetFixedBounds(APCGPartitionActor *this,TBox<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    dVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0x210);
    dVar6 = auVar1._0_8_;
    uVar7 = auVar1._8_4_;
    uVar8 = auVar1._12_4_;
    uVar4 = *(double *)(lVar2 + 0x220);
  }
  dVar5 = (double)this->PCGGridSize * __real_3fe0000000000000;
  dVar3 = dVar5;
  if (this->bUse2DGrid != false) {
    dVar3 = __real_428ffffffffff800;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar6 - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar8,uVar7) - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)uVar4 - dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar6 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar8,uVar7) + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)uVar4 + dVar3;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetGridCoord @ 149cc8260

TIntVector3<int> * __thiscall
APCGPartitionActor::GetGridCoord(APCGPartitionActor *this,TIntVector3<int> *__return_storage_ptr__)

{
  longlong lVar1;
  TVector<double>_u_0 local_28;
  
  lVar1 = this->_padding_;
  local_28._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_28._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_28._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_28._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_28._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar1 != 0) {
    local_28._0_4_ = *(undefined4 *)(lVar1 + 0x210);
    local_28._4_4_ = *(undefined4 *)(lVar1 + 0x214);
    local_28._8_4_ = *(undefined4 *)(lVar1 + 0x218);
    local_28._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
    local_28._s_0.Z = *(double *)(lVar1 + 0x220);
  }
  UPCGActorHelpers::GetCellCoord
            (__return_storage_ptr__,(TVector<double> *)&local_28._s_0,this->PCGGridSize,
             this->bUse2DGrid);
  return __return_storage_ptr__;
}

// GetGridDescriptor @ 149cc82d0

FPCGGridDescriptor * __thiscall
APCGPartitionActor::GetGridDescriptor
          (APCGPartitionActor *this,FPCGGridDescriptor *__return_storage_ptr__)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FPCGGridDescriptor *pFVar5;
  
  uVar2 = this->PCGGridSize;
  bVar4 = this->bUse2DGrid;
  bVar1 = this->bIsRuntimeGenerated;
  __return_storage_ptr__->RuntimeHash = 0;
  __return_storage_ptr__->bIsRuntime = bVar1;
  (__return_storage_ptr__->Hash).bIsSet = false;
  __return_storage_ptr__->GridSize = uVar2;
  __return_storage_ptr__->bIs2DGrid = bVar4;
  if (this->bIsRuntimeGenerated == false) {
    uVar2 = this->RuntimeGridDescriptorHash;
    if ((__return_storage_ptr__->Hash).bIsSet != false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Hash.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Grid\\PCGGridDescriptor.h"
                         ,0x3c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FPCGGridDescriptor *)(*pcVar3)();
        return pFVar5;
      }
    }
    __return_storage_ptr__->RuntimeHash = uVar2;
  }
  return __return_storage_ptr__;
}

// GetLocalComponent @ 149cc9c20

/* WARNING: Type propagation algorithm not settling */

UPCGComponent * __thiscall
APCGPartitionActor::GetLocalComponent(APCGPartitionActor *this,UPCGComponent *param_1,bool param_2)

{
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  code *pcVar5;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  UPCGComponent *pUVar9;
  UObject *pUVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  UPCGComponent *local_res10;
  FWeakObjectPtr local_d8;
  FWeakObjectPtr local_d0;
  int local_c8;
  UPCGComponent *local_c0;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  undefined8 *puVar20;
  
  pTVar1 = &this->OriginalToLocal;
  local_res10 = param_1;
  do {
    puVar20 = (undefined8 *)0x0;
    uVar19 = 0;
    puVar12 = puVar20;
    uVar21 = uVar19;
    if (param_1 != (UPCGComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_c0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_c0);
      puVar12 = (undefined8 *)((ulonglong)local_d8 & 0xffffffff);
      uVar21 = local_d8.ObjectSerialNumber;
    }
    uVar14 = (int)puVar12 - uVar21 ^ uVar21 >> 0xd;
    uVar11 = (-0x61c88647 - uVar21) - uVar14 ^ uVar14 << 8;
    uVar18 = (uVar21 - uVar11) - uVar14 ^ uVar11 >> 0xd;
    uVar14 = (uVar14 - uVar18) - uVar11 ^ uVar18 >> 0xc;
    uVar11 = (uVar11 - uVar14) - uVar18 ^ uVar14 << 0x10;
    uVar18 = (uVar18 - uVar11) - uVar14 ^ uVar11 >> 5;
    uVar14 = (uVar14 - uVar18) - uVar11 ^ uVar18 >> 3;
    uVar11 = (uVar11 - uVar14) - uVar18 ^ uVar14 << 10;
    iVar17 = *(int *)&(this->OriginalToLocal).field_0x8 -
             *(int *)&(this->OriginalToLocal).field_0x34;
    if (iVar17 != 0) {
      puVar3 = *(undefined1 **)&(this->OriginalToLocal).field_0x40;
      puVar15 = &(this->OriginalToLocal).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar15 = puVar3;
      }
      iVar16 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->OriginalToLocal).field_0x48 - 1U &
                       ((uVar18 - uVar11) - uVar14 ^ uVar11 >> 0xf)) * 4);
      if (iVar16 != -1) {
        do {
          lVar8 = *(longlong *)pTVar1 + (longlong)iVar16 * 0x18;
          if ((*(int *)(*(longlong *)pTVar1 + (longlong)iVar16 * 0x18) == (int)puVar12) &&
             (*(uint *)(lVar8 + 4) == uVar21)) {
            if (iVar16 != -1) {
              puVar12 = (undefined8 *)(lVar8 + 8);
              if (lVar8 == 0) {
                puVar12 = puVar20;
              }
              if (puVar12 != (undefined8 *)0x0) {
                return (UPCGComponent *)*puVar12;
              }
            }
            break;
          }
          iVar16 = *(int *)(lVar8 + 0x10);
        } while (iVar16 != -1);
      }
    }
    if (param_2 == false) {
      return (UPCGComponent *)0x0;
    }
    if (iVar17 == *(int *)&(this->LocalToOriginal).field_0x8 -
                  *(int *)&(this->LocalToOriginal).field_0x34) {
      puVar3 = &(this->OriginalToLocal).field_0x10;
      uVar21 = *(uint *)&(this->OriginalToLocal).field_0x28;
      uStack_ac = 1;
      uStack_9c = uVar19;
      local_98 = uVar19;
      if (uVar21 != 0) {
        puVar4 = *(uint **)&(this->OriginalToLocal).field_0x20;
        puVar22 = (uint *)puVar3;
        if (puVar4 != (uint *)0x0) {
          puVar22 = puVar4;
        }
        uVar11 = *puVar22;
        puVar12 = puVar20;
        while( true ) {
          uVar19 = (uint)puVar20;
          local_98 = (uint)puVar12;
          if (uVar11 != 0) break;
          lVar8 = (longlong)(int)uVar19;
          local_98 = local_98 + 0x20;
          puVar12 = (undefined8 *)(ulonglong)local_98;
          uVar19 = uVar19 + 1;
          puVar20 = (undefined8 *)(ulonglong)uVar19;
          uStack_9c = uVar21;
          if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < (int)uVar19)
          goto LAB_149cc9e3d;
          uVar11 = puVar22[lVar8 + 1];
        }
        uStack_ac = -uVar11 & uVar11;
        uVar2 = (ulonglong)uStack_ac * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uStack_9c = (local_98 - 1) + (int)lVar8;
        if ((int)uVar21 < (int)uStack_9c) {
          uStack_9c = uVar21;
        }
      }
LAB_149cc9e3d:
      uVar11 = *(uint *)&(this->OriginalToLocal).field_0x28;
      TStack_80._padding_ = CONCAT44(uStack_ac,uVar19);
      uVar14 = uVar11 & 0xffffffe0;
      uStack_a0 = 0xffffffff;
      TStack_80.CurrentBitIndex = uStack_9c;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      uStack_94 = local_3c;
      TStack_80._28_4_ = local_3c;
      TStack_80.BaseBitIndex = local_98;
      uStack_60 = CONCAT44(uStack_8c,iVar17);
      iVar16 = (int)uVar11 >> 5;
      local_b8 = pTVar1;
      uStack_b0 = uVar19;
      local_a8 = puVar3;
      iStack_90 = iVar17;
      local_88 = pTVar1;
      TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
      if ((((int)uVar11 < 0) || ((int)uVar21 < (int)uVar11)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UPCGComponent *)(*pcVar5)();
        return pUVar9;
      }
      uVar21 = *(uint *)&(this->OriginalToLocal).field_0x28;
      if (uVar11 != uVar21) {
        puVar15 = *(undefined1 **)&(this->OriginalToLocal).field_0x20;
        puVar13 = puVar3;
        if (puVar15 != (undefined1 *)0x0) {
          puVar13 = puVar15;
        }
        uVar19 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar16 * 4);
        while (uVar19 == 0) {
          lVar8 = (longlong)iVar16;
          uVar14 = uVar14 + 0x20;
          iVar16 = iVar16 + 1;
          uVar11 = uVar21;
          if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar16)
          goto LAB_149cc9f40;
          uVar19 = *(uint *)(puVar13 + lVar8 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_c8 = (int)lVar8;
        uVar11 = local_c8 + -1 + uVar14;
        if ((int)uVar21 < (int)uVar11) {
          uVar11 = uVar21;
        }
      }
LAB_149cc9f40:
      while( true ) {
        pTVar6 = local_88;
        if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_80.CurrentBitIndex == uVar11) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
           (pTVar6 == pTVar1)) {
          return (UPCGComponent *)0x0;
        }
        lVar8 = *(longlong *)pTVar6;
        local_d0.ObjectIndex = *(int *)(lVar8 + (longlong)TStack_80.CurrentBitIndex * 0x18);
        local_d0.ObjectSerialNumber =
             *(int *)(lVar8 + (longlong)TStack_80.CurrentBitIndex * 0x18 + 4);
        pUVar10 = FWeakObjectPtr::Get(&local_d0);
        param_1 = local_res10;
        if (pUVar10 == (UObject *)0x0) break;
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      }
    }
    RebuildOriginalToLocal(this);
    param_2 = false;
  } while( true );
}

// GetLocalComponent @ 149cc9ff0

UPCGComponent * __thiscall
APCGPartitionActor::GetLocalComponent(APCGPartitionActor *this,UPCGComponent *param_1)

{
  UPCGComponent *pUVar1;
  
  pUVar1 = GetLocalComponent(this,param_1,true);
  return pUVar1;
}

// GetOriginalComponent @ 149cca5b0

UPCGComponent * __thiscall
APCGPartitionActor::GetOriginalComponent(APCGPartitionActor *this,UPCGComponent *param_1)

{
  int iVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  UPCGComponent *pUVar2;
  UClass *pUVar3;
  UPCGComponent *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
            TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
            ::Find((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                    *)&this->LocalToOriginal,(TObjectPtr<UPCGComponent_const_>)&local_res8);
  if ((this_00 != (TPersistentObjectPtr<FSoftObjectPath> *)0x0) &&
     (pUVar2 = (UPCGComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_00),
     pUVar2 != (UPCGComponent *)0x0)) {
    pUVar3 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGComponent *)0x0;
}

// GetPCGPartitionActorName @ 149cca7c0

FString * __cdecl
APCGPartitionActor::GetPCGPartitionActorName
          (FString *__return_storage_ptr__,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2)

{
  FPCGGridDescriptor::GetPartitionActorName(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetPCGPartitionActorName @ 149cca7f0

FString * __cdecl
APCGPartitionActor::GetPCGPartitionActorName
          (FString *__return_storage_ptr__,uint param_1,TIntVector3<int> *param_2,bool param_3)

{
  FPCGGridDescriptor local_28;
  
  local_28.bIs2DGrid = true;
  local_28.RuntimeHash = 0;
  local_28.Hash.bIsSet = false;
  local_28.GridSize = param_1;
  local_28.bIsRuntime = param_3;
  FPCGGridDescriptor::GetPartitionActorName(&local_28,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149ccb8c0

UClass * __cdecl APCGPartitionActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPartitionActor",
               &Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton,
               StaticRegisterNativesAPCGPartitionActor,0x3d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APCGPartitionActor>,
               InternalVTableHelperCtorCaller<APCGPartitionActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton;
}

// GetSubsystem @ 149ccc520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSubsystem * __thiscall APCGPartitionActor::GetSubsystem(APCGPartitionActor *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
  return pUVar2;
}

// HasLocalPCGComponents @ 149cccee0

bool __thiscall APCGPartitionActor::HasLocalPCGComponents(APCGPartitionActor *this)

{
  return *(int *)&(this->LocalToOriginal).field_0x8 != *(int *)&(this->LocalToOriginal).field_0x34;
}

// IsSafeForDeletion @ 149ccd670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall APCGPartitionActor::IsSafeForDeletion(APCGPartitionActor *this)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [4];
  int local_114;
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1959010596036805344>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGPartitionActor.cpp"
                         ,0x2e0,"IsInGameThread()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  GetAllOriginalPCGComponents
            (this,(TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                   *)local_88);
  uVar9 = local_60;
  iStack_108 = 0;
  local_f0 = 0;
  uStack_104 = 1;
  uStack_f4 = 0;
  if (local_60 != 0) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar11 = *puVar10;
    while (uVar11 == 0) {
      lVar7 = (longlong)iStack_108;
      local_f0 = local_f0 + 0x20;
      iStack_108 = iStack_108 + 1;
      uStack_f4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_108)
      goto LAB_149ccd761;
      uVar11 = puVar10[lVar7 + 1];
    }
    uStack_104 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_104 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_114 = (int)lVar7;
    uStack_f4 = local_114 + -1 + local_f0;
    if ((int)local_60 < (int)uStack_f4) {
      uStack_f4 = local_60;
    }
  }
LAB_149ccd761:
  local_110 = (longlong *)local_88;
  uStack_ec = local_94;
  local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_e8 = local_88._8_4_ - local_54;
  uVar11 = local_60 & 0xffffffe0;
  uStack_f8 = 0xffffffff;
  TStack_d8.CurrentBitIndex = uStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
  iVar8 = (int)local_60 >> 5;
  TStack_d8._28_4_ = local_94;
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  bVar6 = (byte)local_60;
  local_e0 = local_110;
  TStack_d8.Array = local_100;
  if (((int)local_60 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (uVar9 != local_60) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar9 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar11 = uVar11 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_149ccd870;
      uVar9 = puVar10[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar11;
    if ((int)local_60 < (int)uVar9) {
      uVar9 = local_60;
    }
  }
LAB_149ccd870:
  while( true ) {
    plVar3 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_d8.CurrentBitIndex == uVar9) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar3 == (longlong *)local_88)) break;
    lVar7 = *(longlong *)(*plVar3 + (longlong)TStack_d8.CurrentBitIndex * 0x10);
    if ((lVar7 != 0) &&
       ((*(longlong *)(lVar7 + 0x370) != -1 || (*(longlong *)(lVar7 + 0x378) != -1)))) {
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return false;
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return true;
}

// PostCreation @ 149cce7f0

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
APCGPartitionActor::PostCreation(APCGPartitionActor *this,FPCGGridDescriptor *param_1)

{
  UWorld *pUVar1;
  UPCGSubsystem *this_00;
  
  this->PCGGridSize = param_1->GridSize;
  this->bUse2DGrid = param_1->bIs2DGrid;
  pUVar1 = AActor::GetWorld((AActor *)this);
  this_00 = UPCGSubsystem::GetInstance(pUVar1);
  if ((this_00 != (UPCGSubsystem *)0x0) && (this->bIsRegistered == false)) {
    UPCGSubsystem::RegisterPartitionActor(this_00,this);
    this->bIsRegistered = true;
  }
  this->bWasPostCreatedLoaded = true;
  return;
}

// PostLoad @ 149ccec80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::PostLoad(APCGPartitionActor *this)

{
  ulonglong uVar1;
  UObject *this_00;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  int local_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined4 local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  TObjectPtr<UPCGComponent_const_>_u_0 local_f8;
  TObjectPtr<UPCGComponent_const_>_u_0 local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong lStack_b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  AActor::PostLoad((AActor *)this);
  if (this->PCGGridSize == 0) {
    this->PCGGridSize = 0x6400;
  }
  local_f8.DebugPtr = (UPCGComponent *)0x0;
  while (iVar5 = TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UPCGComponent_const_>_>
                           ((TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                             *)&this->LocalToOriginal,0,
                            (TObjectPtr<UPCGComponent_const_> *)&local_f8.ObjectPtr), iVar5 != -1) {
    local_f0.DebugPtr = (UPCGComponent *)0x0;
    if (*(int *)&(this->LocalToOriginal).field_0x8 != *(int *)&(this->LocalToOriginal).field_0x34) {
      TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UPCGComponent_const_>_>
                ((TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                  *)&this->LocalToOriginal,0,(TObjectPtr<UPCGComponent_const_> *)&local_f0.ObjectPtr
                );
    }
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  ::GetKeys<DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
            ((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
              *)&this->LocalToOriginal,
             (TSet<TObjectPtr<UPCGComponent>,DefaultKeyFuncs<TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
              *)local_88);
  uVar8 = local_60;
  pTStack_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_120 = 0;
  uStack_11c = 1;
  uStack_10c = 0;
  iStack_108 = 0;
  if (local_60 != 0) {
    puVar9 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar10 = *puVar9;
    while (uVar10 == 0) {
      iStack_108 = iStack_108 + 0x20;
      lVar7 = (longlong)local_120;
      local_120 = local_120 + 1;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < local_120) {
        uStack_10c = local_60;
        goto LAB_149ccee04;
      }
      uVar10 = (puVar9 + 1)[lVar7];
    }
    uStack_11c = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_11c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_100 = (int)lVar7;
    uStack_10c = local_100 + -1 + iStack_108;
    if ((int)local_60 < (int)uStack_10c) {
      uStack_10c = local_60;
    }
  }
LAB_149ccee04:
  local_110 = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_11c,local_120);
  local_e8 = (longlong *)local_88;
  TStack_e0.CurrentBitIndex = uStack_10c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = uStack_104;
  TStack_e0.BaseBitIndex = iStack_108;
  local_90 = local_88._8_4_ - local_54;
  uVar10 = local_60 & 0xffffffe0;
  iVar5 = (int)local_60 >> 5;
  bVar6 = (byte)local_60;
  uStack_c0 = CONCAT44(uStack_8c,local_90);
  TStack_e0.Array = pTStack_118;
  local_b8 = local_e8;
  lStack_b0 = TStack_e0._padding_;
  pTStack_a8 = pTStack_118;
  uStack_a0 = TStack_e0._16_8_;
  uStack_98 = TStack_e0._24_8_;
  if (((int)local_60 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar8 != local_60) {
    puVar9 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar8 = -1 << (bVar6 & 0x1f) & puVar9[iVar5];
    while (uVar8 == 0) {
      lVar7 = (longlong)iVar5;
      uVar10 = uVar10 + 0x20;
      iVar5 = iVar5 + 1;
      uVar8 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_149cceeec;
      uVar8 = (puVar9 + 1)[lVar7];
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar8 = (int)lVar7 + -1 + uVar10;
    if ((int)local_60 < (int)uVar8) {
      uVar8 = local_60;
    }
  }
LAB_149cceeec:
  while( true ) {
    plVar3 = local_e8;
    if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UPCGComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_e0.CurrentBitIndex == uVar8) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar3 == (longlong *)local_88)) break;
    this_00 = *(UObject **)(*plVar3 + (longlong)TStack_e0.CurrentBitIndex * 0x10);
    this_00[0x16].field_0x10 = 1;
    *(uint *)&this_00[0xf].field_0x8 = this->PCGGridSize;
    UObject::ConditionalPostLoad(this_00);
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (uint *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  this->bWasPostCreatedLoaded = true;
  return;
}

// PostRegisterAllComponents @ 149ccf030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::PostRegisterAllComponents(APCGPartitionActor *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *this_00;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  RebuildOriginalToLocal(this);
  if ((this->PCGGridSize != 0) && (this->bIsRuntimeGenerated == false)) {
    pUVar1 = AActor::GetWorld((AActor *)this);
    this_00 = UPCGSubsystem::GetInstance(pUVar1);
    if ((this_00 != (UPCGSubsystem *)0x0) && (this->bIsRegistered == false)) {
      UPCGSubsystem::RegisterPartitionActor(this_00,this);
      this->bIsRegistered = true;
    }
  }
  return;
}

// PostUnregisterAllComponents @ 149ccfdb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::PostUnregisterAllComponents(APCGPartitionActor *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *this_00;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  this_00 = UPCGSubsystem::GetInstance(pUVar1);
  if ((this_00 != (UPCGSubsystem *)0x0) && (this->bIsRegistered != false)) {
    UPCGSubsystem::UnregisterPartitionActor(this_00,this);
    this->bIsRegistered = false;
  }
  AActor::PostUnregisterAllComponents((AActor *)this);
  return;
}

// RebuildOriginalToLocal @ 149cd2820

void __thiscall APCGPartitionActor::RebuildOriginalToLocal(APCGPartitionActor *this)

{
  undefined1 *puVar1;
  TMap<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  *this_00;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *pTVar8;
  bool bVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  TPairInitializer<TObjectKey<UPCGComponent>_&&,TObjectPtr<UPCGComponent>_const_&> local_res18;
  FWeakObjectPtr local_c8;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  UObject *local_90;
  TMap<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FWeakObjectPtr *local_58;
  longlong local_50;
  
  this_00 = &this->OriginalToLocal;
  pTVar2 = &this->LocalToOriginal;
  TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
           *)this_00);
  TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
             *)this_00,
            *(int *)&(this->LocalToOriginal).field_0x8 - *(int *)&(this->LocalToOriginal).field_0x34
           );
  iVar4 = *(int *)&(this->LocalToOriginal).field_0x28;
  puVar1 = &(this->LocalToOriginal).field_0x10;
  iStack_b8 = 0;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->LocalToOriginal).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      iStack_b8 = iStack_b8 + 1;
      local_a0 = local_a0 + 0x20;
      iStack_a4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_149cd28dc;
      uVar14 = puVar17[iStack_b8];
    }
    uStack_b4 = ~(uVar14 - 1) & uVar14;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iStack_a4 = local_res10 + -1 + local_a0;
    if (iVar4 < iStack_a4) {
      iStack_a4 = iVar4;
    }
  }
LAB_149cd28dc:
  uVar14 = *(uint *)&(this->LocalToOriginal).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_98 = *(int *)&(this->LocalToOriginal).field_0x8 -
              *(int *)&(this->LocalToOriginal).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_80.CurrentBitIndex = iStack_a4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_80._28_4_ = iStack_a4;
  TStack_80.BaseBitIndex = local_a0;
  uStack_60 = CONCAT44(uStack_94,iStack_98);
  local_c0 = pTVar2;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->LocalToOriginal).field_0x28;
  if (uVar14 != uVar5) {
    puVar6 = *(undefined1 **)&(this->LocalToOriginal).field_0x20;
    puVar16 = puVar1;
    if (puVar6 != (undefined1 *)0x0) {
      puVar16 = puVar6;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      iVar12 = iVar12 + 1;
      uVar13 = uVar13 + 0x20;
      uVar14 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar12) goto LAB_149cd29d0;
      uVar14 = *(uint *)(puVar16 + (longlong)iVar12 * 4);
    }
    uVar3 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar14 = (int)lVar15 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_149cd29d0:
  while( true ) {
    pTVar8 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar14) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    lVar15 = (longlong)TStack_80.CurrentBitIndex * 0x38 + *(longlong *)pTVar8;
    pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)(lVar15 + 8));
    if (pUVar10 != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_UPCGComponent_NoRegister();
      iVar4 = (int)pUVar11->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar11->_padding_)) {
        local_c8.ObjectIndex = 0;
        local_c8.ObjectSerialNumber = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        local_res18.Value = (TObjectPtr<UPCGComponent> *)0x0;
        local_90 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.Value,(FObjectPtr)&local_90);
        local_c8 = (FWeakObjectPtr)local_res18.Value;
        local_58 = &local_c8;
        local_50 = lVar15;
        TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TObjectKey<UPCGComponent>_&&,TObjectPtr<UPCGComponent>_const_&>_>
                  ((TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                    *)this_00,&local_res18,(bool *)&local_58);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return;
}

// RegisterPCG @ 149cd2ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::RegisterPCG(APCGPartitionActor *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *this_00;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  this_00 = UPCGSubsystem::GetInstance(pUVar1);
  if ((this_00 != (UPCGSubsystem *)0x0) && (this->bIsRegistered == false)) {
    UPCGSubsystem::RegisterPartitionActor(this_00,this);
    this->bIsRegistered = true;
  }
  return;
}

// RemapGraphInstance @ 149cd5ee0

void __thiscall
APCGPartitionActor::RemapGraphInstance
          (APCGPartitionActor *this,UPCGComponent *param_1,UPCGComponent *param_2)

{
  code *pcVar1;
  bool bVar2;
  TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&> local_res10;
  UPCGComponent *local_68;
  FWeakObjectPtr local_60;
  UPCGComponent *local_58;
  FWeakObjectPtr local_50;
  UPCGComponent *local_48;
  UPCGComponent ***local_40;
  UPCGComponent **local_38;
  UPCGComponent **local_30;
  UPCGComponent ***local_28;
  
  local_res10.Value = (UPCGComponent **)param_2;
  if ((param_1 == (UPCGComponent *)0x0) || (param_2 == (UPCGComponent *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldOriginalComponent && NewOriginalComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGPartitionActor.cpp"
                       ,0x245,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_68 = GetLocalComponent(this,param_1,true);
  if (local_68 != (UPCGComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_60.ObjectIndex = 0;
    local_60.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_58);
    local_50 = local_60;
    TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
    ::Remove((TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
              *)&this->OriginalToLocal,(TObjectKey<UPCGComponent> *)&local_50);
    local_48 = local_68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UPCGComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_68);
    }
    TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
    ::Remove((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
              *)&this->LocalToOriginal,(TObjectPtr<UPCGComponent_const_>)&local_48);
    UPCGComponent::SetEditingMode
              (local_68,*(EPCGEditorDirtyMode *)((longlong)local_res10.Value + 0x264),
               *(EPCGEditorDirtyMode *)((longlong)local_res10.Value + 0x265));
    UPCGComponent::SetPropertiesFromOriginal(local_68,(UPCGComponent *)local_res10.Value);
    local_40 = &local_res10.Value;
    local_38 = &local_68;
    TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>_>
              ((TSet<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                *)&this->OriginalToLocal,&local_res10,(bool *)&local_40);
    local_30 = &local_68;
    local_28 = &local_res10.Value;
    TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>_>
              ((TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                *)&this->LocalToOriginal,
               (TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&> *)&stack0x00000020,
               (bool *)&local_30);
  }
  return;
}

// RemoveGraphInstance @ 149cd7de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
APCGPartitionActor::RemoveGraphInstance(APCGPartitionActor *this,UPCGComponent *param_1)

{
  UPCGComponent *pUVar1;
  UPCGComponent *local_res10;
  TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&> local_res18;
  UPCGComponent *local_28;
  UPCGComponent **local_20;
  
  local_res10 = param_1;
  local_res18.Value = (UPCGComponent **)GetLocalComponent(this,param_1,true);
  pUVar1 = local_res10;
  if ((UPCGComponent *)local_res18.Value == (UPCGComponent *)0x0) {
    CleanupDeadGraphInstancesInternal
              (this,false,(TArray<UPCGComponent_*,TSizedDefaultAllocator<32>_> *)0x0);
  }
  else {
    local_res18.Key = (UPCGComponent **)0x0;
    if (local_res10 != (UPCGComponent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      local_res18.Key = (UPCGComponent **)0x0;
      local_28 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGComponent *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18,(FObjectPtr)&local_28);
    }
    TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
    ::Remove((TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
              *)&this->OriginalToLocal,(TObjectKey<UPCGComponent> *)&local_res18);
    local_res18.Key = local_res18.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UPCGComponent *)local_res18.Value != (UPCGComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18.Value);
    }
    TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
    ::Remove((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
              *)&this->LocalToOriginal,(TObjectPtr<UPCGComponent_const_>)&local_res18);
    UPCGComponent::CleanupLocalImmediate((UPCGComponent *)local_res18.Value,true,false);
    if ((*(EPCGEditorDirtyMode *)((longlong)local_res18.Value + 0x264) == Preview) &&
       (*(EPCGEditorDirtyMode *)((longlong)local_res18.Value + 0x265) == LoadAsPreview)) {
      UActorComponent::UnregisterComponent((UActorComponent *)local_res18.Value);
      local_28 = (UPCGComponent *)&local_res18.Value;
      local_20 = &local_res10;
      TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UPCGComponent_*_&,UPCGComponent_*_&>_>
                ((TSet<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>,FDefaultSetAllocator>
                  *)&this->LoadedPreviewComponents,&local_res18,(bool *)&local_28);
    }
    else {
      (**(code **)(*(longlong *)local_res18.Value + 0x4a0))(local_res18.Value,0);
    }
    if ((*(int *)&(this->OriginalToLocal).field_0x8 == *(int *)&(this->OriginalToLocal).field_0x34)
       && (*(int *)&(this->LoadedPreviewComponents).field_0x8 ==
           *(int *)&(this->LoadedPreviewComponents).field_0x34)) {
      return true;
    }
  }
  return false;
}

// RemoveLocalComponent @ 149cd7f50

void __thiscall
APCGPartitionActor::RemoveLocalComponent(APCGPartitionActor *this,UPCGComponent *param_1)

{
  int iVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  UObject *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  if (param_1 == (UPCGComponent *)0x0) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10 = (FWeakObjectPtr)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
            TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
            ::Find((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                    *)&this->LocalToOriginal,(TObjectPtr<UPCGComponent_const_>)&local_res10);
  if ((this_00 != (TPersistentObjectPtr<FSoftObjectPath> *)0x0) &&
     (pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00), pUVar2 != (UObject *)0x0)) {
    pUVar3 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_149cd7fe5;
  }
  pUVar2 = (UObject *)0x0;
LAB_149cd7fe5:
  local_res10 = (FWeakObjectPtr)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
  ::Remove((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
            *)&this->LocalToOriginal,(TObjectPtr<UPCGComponent_const_>)&local_res10);
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (pUVar2 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  }
  TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
  ::Remove((TMapBase<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>,0>_>
            *)&this->OriginalToLocal,(TObjectKey<UPCGComponent> *)&local_res10);
  return;
}

// Serialize @ 149cdb360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::Serialize(APCGPartitionActor *this,FArchive *param_1)

{
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  AActor::Serialize((AActor *)this,param_1);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// Serialize @ 149cdb3e0

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
APCGPartitionActor::Serialize(APCGPartitionActor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FLLMScope local_res10 [2];
  FSlotBase local_res18;
  FName local_res20;
  FMemScope local_18 [2];
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  AActor::Serialize((AActor *)this,pFVar1);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// StaticRegisterNativesAPCGPartitionActor @ 149cdd420

void __cdecl APCGPartitionActor::StaticRegisterNativesAPCGPartitionActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_APCGPartitionActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Teleport @ 149cde070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall APCGPartitionActor::Teleport(APCGPartitionActor *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((this->bIsRuntimeGenerated == false) ||
      (*(int *)&(this->OriginalToLocal).field_0x8 != *(int *)&(this->OriginalToLocal).field_0x34))
     || (*(int *)&(this->LocalToOriginal).field_0x8 != *(int *)&(this->LocalToOriginal).field_0x34))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsRuntimeGenerated && OriginalToLocal.IsEmpty() && LocalToOriginal.IsEmpty()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGPartitionActor.cpp"
                       ,0x16d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x5f8))((longlong *)this->_padding_,2);
  bVar2 = AActor::SetActorLocation((AActor *)this,param_1,false,(FHitResult *)0x0,TeleportPhysics);
  (**(code **)(*(longlong *)this->_padding_ + 0x5f8))((longlong *)this->_padding_,0);
  return bVar2;
}

// UnregisterPCG @ 149ce1ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGPartitionActor::UnregisterPCG(APCGPartitionActor *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *this_00;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  this_00 = UPCGSubsystem::GetInstance(pUVar1);
  if ((this_00 != (UPCGSubsystem *)0x0) && (this->bIsRegistered != false)) {
    UPCGSubsystem::UnregisterPartitionActor(this_00,this);
    this->bIsRegistered = false;
  }
  return;
}

// execBP_GetPCGGridSize @ 149ce3b40

void __cdecl
APCGPartitionActor::execBP_GetPCGGridSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(ulonglong *)param_3 = (ulonglong)*(uint *)(param_1 + 0x18);
  return;
}

// execGetLocalComponent @ 149ce3b90

void __cdecl
APCGPartitionActor::execGetLocalComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGComponent *pUVar2;
  UPCGComponent *local_res10;
  
  local_res10 = (UPCGComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetLocalComponent((APCGPartitionActor *)param_1,local_res10,true);
  *(UPCGComponent **)param_3 = pUVar2;
  return;
}

// execGetOriginalComponent @ 149ce3c30

void __cdecl
APCGPartitionActor::execGetOriginalComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_res10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  this = (TPersistentObjectPtr<FSoftObjectPath> *)
         TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
         ::Find((TMapBase<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>,0>_>
                 *)(param_1 + 0x14),(TObjectPtr<UPCGComponent_const_>)&local_res10);
  if (this == (TPersistentObjectPtr<FSoftObjectPath> *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_149ce3d24;
  }
  pUVar3 = (UObject *)0x0;
LAB_149ce3d24:
  *(UObject **)param_3 = pUVar3;
  return;
}

